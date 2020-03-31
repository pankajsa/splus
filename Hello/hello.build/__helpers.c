// This file contains helper functions that are automatically created from
// templates.

#include "nuitka/prelude.h"

extern PyObject *callPythonFunction( PyObject *func, PyObject **args, int count );


PyObject *CALL_FUNCTION_WITH_ARGS1(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 1; i++)
    {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 1 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 1; i++)
            {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 1 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 1 * sizeof(PyObject *));
            memcpy(python_pars + 1, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++)
            {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 1)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL)
        {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 1 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 1; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 1 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 1 * sizeof(PyObject *));
                memcpy(python_pars+1 + 1, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 1)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 1 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (1 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 1 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (1 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 1);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 1, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 1);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            1
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 1);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS2(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 2; i++)
    {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 2 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 2; i++)
            {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 2 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 2 * sizeof(PyObject *));
            memcpy(python_pars + 2, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++)
            {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 2)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL)
        {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 2 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 2; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 2 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 2 * sizeof(PyObject *));
                memcpy(python_pars+1 + 2, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 2)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 2 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (2 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 2 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (2 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 2);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 2, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 2);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            2
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 2);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS3(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 3; i++)
    {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 3 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 3; i++)
            {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 3 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 3 * sizeof(PyObject *));
            memcpy(python_pars + 3, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++)
            {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 3)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL)
        {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 3 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 3; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 3 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 3 * sizeof(PyObject *));
                memcpy(python_pars+1 + 3, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 3)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 3 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (3 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 3 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (3 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 3);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 3, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 3);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            3
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 3);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS4(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 4; i++)
    {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 4 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 4; i++)
            {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 4 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 4 * sizeof(PyObject *));
            memcpy(python_pars + 4, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++)
            {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 4)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL)
        {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 4 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 4; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 4 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 4 * sizeof(PyObject *));
                memcpy(python_pars+1 + 4, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 4)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 4 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (4 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 4 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (4 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 4);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 4, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 4);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            4
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 4);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS5(PyObject *called, PyObject **args) {
    CHECK_OBJECT(called);

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for (size_t i = 0; i < 5; i++)
    {
        CHECK_OBJECT(args[i]);
    }
#endif

    if (Nuitka_Function_Check(called)) {
        if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if (function->m_args_simple && 5 == function->m_args_positional_count){
            for (Py_ssize_t i = 0; i < 5; i++)
            {
                Py_INCREF(args[i]);
            }

            result = function->m_c_code(function, args);
        } else if (function->m_args_simple && 5 + function->m_defaults_given == function->m_args_positional_count) {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
            PyObject *python_pars[function->m_args_positional_count];
#endif
            memcpy(python_pars, args, 5 * sizeof(PyObject *));
            memcpy(python_pars + 5, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

            for (Py_ssize_t i = 0; i < function->m_args_positional_count; i++)
            {
                Py_INCREF(python_pars[i]);
            }

            result = function->m_c_code(function, python_pars);
        } else {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
            PyObject *python_pars[function->m_args_overall_count];
#endif
            memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

            if (parseArgumentsPos(function, python_pars, args, 5)) {
                result = function->m_c_code(function, python_pars);
            } else {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    } else if (Nuitka_Method_Check(called)) {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if (method->m_object != NULL)
        {
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if (function->m_args_simple && 5 + 1 == function->m_args_positional_count) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                for (Py_ssize_t i = 0; i < 5; i++) {
                    python_pars[i+1] = args[i];
                    Py_INCREF(args[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else if ( function->m_args_simple && 5 + 1 + function->m_defaults_given == function->m_args_positional_count ) {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_positional_count);
#else
                PyObject *python_pars[function->m_args_positional_count];
#endif
                python_pars[0] = method->m_object;
                Py_INCREF(method->m_object);

                memcpy(python_pars+1, args, 5 * sizeof(PyObject *));
                memcpy(python_pars+1 + 5, &PyTuple_GET_ITEM(function->m_defaults, 0), function->m_defaults_given * sizeof(PyObject *));

                for (Py_ssize_t i = 1; i < function->m_args_overall_count; i++) {
                    Py_INCREF(python_pars[i]);
                }

                result = function->m_c_code(function, python_pars);
            } else {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca(sizeof(PyObject *) * function->m_args_overall_count);
#else
                PyObject *python_pars[function->m_args_overall_count];
#endif
                memset(python_pars, 0, function->m_args_overall_count * sizeof(PyObject *));

                if (parseArgumentsMethodPos(function, python_pars, method->m_object, args, 5)) {
                    result = function->m_c_code(function, python_pars);
                } else {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    } else if (PyCFunction_Check(called)) {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS(called) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if (flags & METH_NOARGS) {
#if 5 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (5 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_O) {
#if 5 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (5 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        } else if (flags & METH_VARARGS) {
            PyCFunction method = PyCFunction_GET_FUNCTION(called);
            PyObject *self = PyCFunction_GET_SELF(called);

            PyObject *pos_args = MAKE_TUPLE(args, 5);

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely(Py_EnterRecursiveCall((char *)" while calling a Python object"))) {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if (flags & METH_KEYWORDS) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else {
                result = (*method)(self, pos_args);
            }
#else
            if (flags == (METH_VARARGS|METH_KEYWORDS)) {
                result = (*(PyCFunctionWithKeywords)method)(self, pos_args, NULL);
            } else if (flags == METH_FASTCALL) {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)(self, &PyTuple_GET_ITEM(pos_args, 0), 5, NULL);
#else
                result = (*(_PyCFunctionFast)method)(self, &pos_args, 5);
#endif
            } else {
                result = (*method)(self, pos_args);
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if (result != NULL) {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF(pos_args);
                return result;
            } else {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely(!ERROR_OCCURRED())) {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF(pos_args);
                return NULL;
            }
        }
    } else if (PyFunction_Check(called)) {
        return callPythonFunction(
            called,
            args,
            5
        );
    }

    PyObject *pos_args = MAKE_TUPLE(args, 5);

    PyObject *result = CALL_FUNCTION(called, pos_args, NULL);

    Py_DECREF(pos_args);

    return result;
}
/* Code to register embedded modules for meta path based loading if any. */

#include "nuitka/unfreezing.h"

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode___main__(char const *);
static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{
    {"__main__", modulecode___main__, 0, 0, },
    {"_asyncio", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_bisect", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_blake2", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_bz2", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_codecs_cn", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_codecs_hk", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_codecs_iso2022", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_codecs_jp", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_codecs_kr", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_codecs_tw", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_contextvars", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_crypt", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_csv", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_ctypes", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_curses", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_curses_panel", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_datetime", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_dbm", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_decimal", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_elementtree", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_gdbm", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_hashlib", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_heapq", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_json", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_lsprof", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_lzma", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_multibytecodec", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_multiprocessing", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_opcode", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_pickle", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_posixsubprocess", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_queue", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_random", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_scproxy", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_sha3", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_socket", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_sqlite3", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_ssl", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_struct", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_tkinter", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_uuid", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"array", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"audioop", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"binascii", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"fcntl", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"grp", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"math", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"mmap", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"pyexpat", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"readline", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"select", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"site", NULL, 632, 13183, NUITKA_BYTECODE_FLAG},
    {"termios", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"unicodedata", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"zlib", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"__future__", NULL, 13815, 4165, NUITKA_BYTECODE_FLAG},
    {"_bootlocale", NULL, 17980, 1282, NUITKA_BYTECODE_FLAG},
    {"_compat_pickle", NULL, 19262, 5841, NUITKA_BYTECODE_FLAG},
    {"_dummy_thread", NULL, 25103, 6022, NUITKA_BYTECODE_FLAG},
    {"_markupbase", NULL, 31125, 7818, NUITKA_BYTECODE_FLAG},
    {"_osx_support", NULL, 38943, 9628, NUITKA_BYTECODE_FLAG},
    {"_py_abc", NULL, 48571, 4687, NUITKA_BYTECODE_FLAG},
    {"_pyio", NULL, 53258, 72980, NUITKA_BYTECODE_FLAG},
    {"_sitebuiltins", NULL, 126238, 3498, NUITKA_BYTECODE_FLAG},
    {"_strptime", NULL, 129736, 16137, NUITKA_BYTECODE_FLAG},
    {"_sysconfigdata_m_darwin_darwin", NULL, 145873, 21925, NUITKA_BYTECODE_FLAG},
    {"_threading_local", NULL, 167798, 6445, NUITKA_BYTECODE_FLAG},
    {"aifc", NULL, 174243, 26176, NUITKA_BYTECODE_FLAG},
    {"argparse", NULL, 200419, 62017, NUITKA_BYTECODE_FLAG},
    {"ast", NULL, 262436, 11769, NUITKA_BYTECODE_FLAG},
    {"asynchat", NULL, 274205, 6867, NUITKA_BYTECODE_FLAG},
    {"asyncio", NULL, 281072, 723, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"asyncio.base_events", NULL, 281795, 48557, NUITKA_BYTECODE_FLAG},
    {"asyncio.base_futures", NULL, 330352, 2135, NUITKA_BYTECODE_FLAG},
    {"asyncio.base_subprocess", NULL, 332487, 9224, NUITKA_BYTECODE_FLAG},
    {"asyncio.base_tasks", NULL, 341711, 1899, NUITKA_BYTECODE_FLAG},
    {"asyncio.constants", NULL, 343610, 624, NUITKA_BYTECODE_FLAG},
    {"asyncio.coroutines", NULL, 344234, 6411, NUITKA_BYTECODE_FLAG},
    {"asyncio.events", NULL, 350645, 27923, NUITKA_BYTECODE_FLAG},
    {"asyncio.format_helpers", NULL, 378568, 2350, NUITKA_BYTECODE_FLAG},
    {"asyncio.futures", NULL, 380918, 10850, NUITKA_BYTECODE_FLAG},
    {"asyncio.locks", NULL, 391768, 15946, NUITKA_BYTECODE_FLAG},
    {"asyncio.log", NULL, 407714, 273, NUITKA_BYTECODE_FLAG},
    {"asyncio.proactor_events", NULL, 407987, 20121, NUITKA_BYTECODE_FLAG},
    {"asyncio.protocols", NULL, 428108, 8761, NUITKA_BYTECODE_FLAG},
    {"asyncio.queues", NULL, 436869, 8206, NUITKA_BYTECODE_FLAG},
    {"asyncio.runners", NULL, 445075, 1975, NUITKA_BYTECODE_FLAG},
    {"asyncio.selector_events", NULL, 447050, 28487, NUITKA_BYTECODE_FLAG},
    {"asyncio.sslproto", NULL, 475537, 21292, NUITKA_BYTECODE_FLAG},
    {"asyncio.streams", NULL, 496829, 20321, NUITKA_BYTECODE_FLAG},
    {"asyncio.subprocess", NULL, 517150, 6785, NUITKA_BYTECODE_FLAG},
    {"asyncio.tasks", NULL, 523935, 22352, NUITKA_BYTECODE_FLAG},
    {"asyncio.transports", NULL, 546287, 12244, NUITKA_BYTECODE_FLAG},
    {"asyncio.unix_events", NULL, 558531, 32380, NUITKA_BYTECODE_FLAG},
    {"asyncore", NULL, 590911, 15877, NUITKA_BYTECODE_FLAG},
    {"bdb", NULL, 606788, 24609, NUITKA_BYTECODE_FLAG},
    {"binhex", NULL, 631397, 12092, NUITKA_BYTECODE_FLAG},
    {"bisect", NULL, 643489, 2731, NUITKA_BYTECODE_FLAG},
    {"cProfile", NULL, 646220, 4841, NUITKA_BYTECODE_FLAG},
    {"calendar", NULL, 651061, 27457, NUITKA_BYTECODE_FLAG},
    {"cgi", NULL, 678518, 27267, NUITKA_BYTECODE_FLAG},
    {"cgitb", NULL, 705785, 10145, NUITKA_BYTECODE_FLAG},
    {"chunk", NULL, 715930, 4952, NUITKA_BYTECODE_FLAG},
    {"cmd", NULL, 720882, 12623, NUITKA_BYTECODE_FLAG},
    {"code", NULL, 733505, 9894, NUITKA_BYTECODE_FLAG},
    {"codeop", NULL, 743399, 6343, NUITKA_BYTECODE_FLAG},
    {"colorsys", NULL, 749742, 3330, NUITKA_BYTECODE_FLAG},
    {"compileall", NULL, 753072, 9367, NUITKA_BYTECODE_FLAG},
    {"concurrent", NULL, 762439, 179, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"concurrent.futures", NULL, 762618, 1119, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"concurrent.futures._base", NULL, 763737, 21217, NUITKA_BYTECODE_FLAG},
    {"concurrent.futures.process", NULL, 784954, 20026, NUITKA_BYTECODE_FLAG},
    {"concurrent.futures.thread", NULL, 804980, 5466, NUITKA_BYTECODE_FLAG},
    {"configparser", NULL, 810446, 45913, NUITKA_BYTECODE_FLAG},
    {"contextlib", NULL, 856359, 20491, NUITKA_BYTECODE_FLAG},
    {"contextvars", NULL, 876850, 290, NUITKA_BYTECODE_FLAG},
    {"copy", NULL, 877140, 7156, NUITKA_BYTECODE_FLAG},
    {"crypt", NULL, 884296, 3167, NUITKA_BYTECODE_FLAG},
    {"csv", NULL, 887463, 11865, NUITKA_BYTECODE_FLAG},
    {"ctypes", NULL, 899328, 16412, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"ctypes._aix", NULL, 915740, 9856, NUITKA_BYTECODE_FLAG},
    {"ctypes._endian", NULL, 925596, 1989, NUITKA_BYTECODE_FLAG},
    {"ctypes.macholib", NULL, 927585, 346, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"ctypes.macholib.dyld", NULL, 927931, 4424, NUITKA_BYTECODE_FLAG},
    {"ctypes.macholib.dylib", NULL, 932355, 1973, NUITKA_BYTECODE_FLAG},
    {"ctypes.macholib.framework", NULL, 934328, 2253, NUITKA_BYTECODE_FLAG},
    {"ctypes.util", NULL, 936581, 7782, NUITKA_BYTECODE_FLAG},
    {"curses", NULL, 944363, 1973, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"curses.ascii", NULL, 946336, 3936, NUITKA_BYTECODE_FLAG},
    {"curses.has_key", NULL, 950272, 4300, NUITKA_BYTECODE_FLAG},
    {"curses.panel", NULL, 954572, 270, NUITKA_BYTECODE_FLAG},
    {"curses.textpad", NULL, 954842, 5939, NUITKA_BYTECODE_FLAG},
    {"dataclasses", NULL, 960781, 23057, NUITKA_BYTECODE_FLAG},
    {"datetime", NULL, 983838, 57260, NUITKA_BYTECODE_FLAG},
    {"dbm", NULL, 1041098, 4199, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"dbm.dumb", NULL, 1045297, 8433, NUITKA_BYTECODE_FLAG},
    {"dbm.gnu", NULL, 1053730, 250, NUITKA_BYTECODE_FLAG},
    {"dbm.ndbm", NULL, 1053980, 249, NUITKA_BYTECODE_FLAG},
    {"decimal", NULL, 1054229, 162237, NUITKA_BYTECODE_FLAG},
    {"difflib", NULL, 1216466, 59477, NUITKA_BYTECODE_FLAG},
    {"distutils", NULL, 1275943, 431, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils.archive_util", NULL, 1276374, 6565, NUITKA_BYTECODE_FLAG},
    {"distutils.bcppcompiler", NULL, 1282939, 6534, NUITKA_BYTECODE_FLAG},
    {"distutils.ccompiler", NULL, 1289473, 33267, NUITKA_BYTECODE_FLAG},
    {"distutils.cmd", NULL, 1322740, 13941, NUITKA_BYTECODE_FLAG},
    {"distutils.command", NULL, 1336681, 588, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils.command.bdist", NULL, 1337269, 3687, NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_dumb", NULL, 1340956, 3602, NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_rpm", NULL, 1344558, 12527, NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_wininst", NULL, 1357085, 8083, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build", NULL, 1365168, 3876, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_clib", NULL, 1369044, 4918, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_ext", NULL, 1373962, 15825, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_py", NULL, 1389787, 10424, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_scripts", NULL, 1400211, 4323, NUITKA_BYTECODE_FLAG},
    {"distutils.command.check", NULL, 1404534, 4872, NUITKA_BYTECODE_FLAG},
    {"distutils.command.clean", NULL, 1409406, 2125, NUITKA_BYTECODE_FLAG},
    {"distutils.command.config", NULL, 1411531, 10229, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install", NULL, 1421760, 13552, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_data", NULL, 1435312, 2318, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_egg_info", NULL, 1437630, 3016, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_headers", NULL, 1440646, 1733, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_lib", NULL, 1442379, 5111, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_scripts", NULL, 1447490, 2175, NUITKA_BYTECODE_FLAG},
    {"distutils.command.register", NULL, 1449665, 8510, NUITKA_BYTECODE_FLAG},
    {"distutils.command.sdist", NULL, 1458175, 14541, NUITKA_BYTECODE_FLAG},
    {"distutils.command.upload", NULL, 1472716, 5123, NUITKA_BYTECODE_FLAG},
    {"distutils.config", NULL, 1477839, 3518, NUITKA_BYTECODE_FLAG},
    {"distutils.core", NULL, 1481357, 6643, NUITKA_BYTECODE_FLAG},
    {"distutils.cygwinccompiler", NULL, 1488000, 8561, NUITKA_BYTECODE_FLAG},
    {"distutils.debug", NULL, 1496561, 241, NUITKA_BYTECODE_FLAG},
    {"distutils.dep_util", NULL, 1496802, 2757, NUITKA_BYTECODE_FLAG},
    {"distutils.dir_util", NULL, 1499559, 5851, NUITKA_BYTECODE_FLAG},
    {"distutils.dist", NULL, 1505410, 34472, NUITKA_BYTECODE_FLAG},
    {"distutils.errors", NULL, 1539882, 5527, NUITKA_BYTECODE_FLAG},
    {"distutils.extension", NULL, 1545409, 6938, NUITKA_BYTECODE_FLAG},
    {"distutils.fancy_getopt", NULL, 1552347, 10650, NUITKA_BYTECODE_FLAG},
    {"distutils.file_util", NULL, 1562997, 5936, NUITKA_BYTECODE_FLAG},
    {"distutils.filelist", NULL, 1568933, 9871, NUITKA_BYTECODE_FLAG},
    {"distutils.log", NULL, 1578804, 2352, NUITKA_BYTECODE_FLAG},
    {"distutils.msvccompiler", NULL, 1581156, 14604, NUITKA_BYTECODE_FLAG},
    {"distutils.spawn", NULL, 1595760, 5155, NUITKA_BYTECODE_FLAG},
    {"distutils.sysconfig", NULL, 1600915, 12029, NUITKA_BYTECODE_FLAG},
    {"distutils.text_file", NULL, 1612944, 8478, NUITKA_BYTECODE_FLAG},
    {"distutils.unixccompiler", NULL, 1621422, 6573, NUITKA_BYTECODE_FLAG},
    {"distutils.util", NULL, 1627995, 15134, NUITKA_BYTECODE_FLAG},
    {"distutils.version", NULL, 1643129, 7389, NUITKA_BYTECODE_FLAG},
    {"distutils.versionpredicate", NULL, 1650518, 5136, NUITKA_BYTECODE_FLAG},
    {"doctest", NULL, 1655654, 75471, NUITKA_BYTECODE_FLAG},
    {"dummy_threading", NULL, 1731125, 1157, NUITKA_BYTECODE_FLAG},
    {"email", NULL, 1732282, 1724, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email._encoded_words", NULL, 1734006, 5641, NUITKA_BYTECODE_FLAG},
    {"email._header_value_parser", NULL, 1739647, 76857, NUITKA_BYTECODE_FLAG},
    {"email._parseaddr", NULL, 1816504, 12438, NUITKA_BYTECODE_FLAG},
    {"email._policybase", NULL, 1828942, 14883, NUITKA_BYTECODE_FLAG},
    {"email.base64mime", NULL, 1843825, 3268, NUITKA_BYTECODE_FLAG},
    {"email.charset", NULL, 1847093, 11562, NUITKA_BYTECODE_FLAG},
    {"email.contentmanager", NULL, 1858655, 7328, NUITKA_BYTECODE_FLAG},
    {"email.encoders", NULL, 1865983, 1697, NUITKA_BYTECODE_FLAG},
    {"email.errors", NULL, 1867680, 6224, NUITKA_BYTECODE_FLAG},
    {"email.feedparser", NULL, 1873904, 10662, NUITKA_BYTECODE_FLAG},
    {"email.generator", NULL, 1884566, 12533, NUITKA_BYTECODE_FLAG},
    {"email.header", NULL, 1897099, 16419, NUITKA_BYTECODE_FLAG},
    {"email.headerregistry", NULL, 1913518, 21330, NUITKA_BYTECODE_FLAG},
    {"email.iterators", NULL, 1934848, 1965, NUITKA_BYTECODE_FLAG},
    {"email.message", NULL, 1936813, 38027, NUITKA_BYTECODE_FLAG},
    {"email.mime", NULL, 1974840, 179, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email.mime.application", NULL, 1975019, 1490, NUITKA_BYTECODE_FLAG},
    {"email.mime.audio", NULL, 1976509, 2649, NUITKA_BYTECODE_FLAG},
    {"email.mime.base", NULL, 1979158, 1115, NUITKA_BYTECODE_FLAG},
    {"email.mime.image", NULL, 1980273, 1935, NUITKA_BYTECODE_FLAG},
    {"email.mime.message", NULL, 1982208, 1364, NUITKA_BYTECODE_FLAG},
    {"email.mime.multipart", NULL, 1983572, 1586, NUITKA_BYTECODE_FLAG},
    {"email.mime.nonmultipart", NULL, 1985158, 801, NUITKA_BYTECODE_FLAG},
    {"email.mime.text", NULL, 1985959, 1348, NUITKA_BYTECODE_FLAG},
    {"email.parser", NULL, 1987307, 5780, NUITKA_BYTECODE_FLAG},
    {"email.policy", NULL, 1993087, 9688, NUITKA_BYTECODE_FLAG},
    {"email.quoprimime", NULL, 2002775, 7697, NUITKA_BYTECODE_FLAG},
    {"email.utils", NULL, 2010472, 9500, NUITKA_BYTECODE_FLAG},
    {"filecmp", NULL, 2019972, 8340, NUITKA_BYTECODE_FLAG},
    {"fileinput", NULL, 2028312, 13288, NUITKA_BYTECODE_FLAG},
    {"fnmatch", NULL, 2041600, 3370, NUITKA_BYTECODE_FLAG},
    {"formatter", NULL, 2044970, 17586, NUITKA_BYTECODE_FLAG},
    {"fractions", NULL, 2062556, 18462, NUITKA_BYTECODE_FLAG},
    {"ftplib", NULL, 2081018, 28100, NUITKA_BYTECODE_FLAG},
    {"getopt", NULL, 2109118, 6272, NUITKA_BYTECODE_FLAG},
    {"getpass", NULL, 2115390, 4197, NUITKA_BYTECODE_FLAG},
    {"gettext", NULL, 2119587, 14201, NUITKA_BYTECODE_FLAG},
    {"glob", NULL, 2133788, 4292, NUITKA_BYTECODE_FLAG},
    {"gzip", NULL, 2138080, 17388, NUITKA_BYTECODE_FLAG},
    {"hashlib", NULL, 2155468, 6624, NUITKA_BYTECODE_FLAG},
    {"hmac", NULL, 2162092, 6146, NUITKA_BYTECODE_FLAG},
    {"html", NULL, 2168238, 3430, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"html.entities", NULL, 2171668, 50502, NUITKA_BYTECODE_FLAG},
    {"html.parser", NULL, 2222170, 11140, NUITKA_BYTECODE_FLAG},
    {"http", NULL, 2233310, 5955, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"http.client", NULL, 2239265, 34683, NUITKA_BYTECODE_FLAG},
    {"http.cookiejar", NULL, 2273948, 53666, NUITKA_BYTECODE_FLAG},
    {"http.cookies", NULL, 2327614, 15277, NUITKA_BYTECODE_FLAG},
    {"http.server", NULL, 2342891, 33400, NUITKA_BYTECODE_FLAG},
    {"imaplib", NULL, 2376291, 41463, NUITKA_BYTECODE_FLAG},
    {"imghdr", NULL, 2417754, 4175, NUITKA_BYTECODE_FLAG},
    {"imp", NULL, 2421929, 9786, NUITKA_BYTECODE_FLAG},
    {"importlib.abc", NULL, 2431715, 13520, NUITKA_BYTECODE_FLAG},
    {"importlib.resources", NULL, 2445235, 8372, NUITKA_BYTECODE_FLAG},
    {"importlib.util", NULL, 2453607, 9389, NUITKA_BYTECODE_FLAG},
    {"ipaddress", NULL, 2462996, 62836, NUITKA_BYTECODE_FLAG},
    {"json", NULL, 2525832, 12371, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"json.decoder", NULL, 2538203, 9857, NUITKA_BYTECODE_FLAG},
    {"json.encoder", NULL, 2548060, 11339, NUITKA_BYTECODE_FLAG},
    {"json.scanner", NULL, 2559399, 2029, NUITKA_BYTECODE_FLAG},
    {"json.tool", NULL, 2561428, 1537, NUITKA_BYTECODE_FLAG},
    {"lib2to3", NULL, 2562965, 176, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.btm_matcher", NULL, 2563141, 4926, NUITKA_BYTECODE_FLAG},
    {"lib2to3.btm_utils", NULL, 2568067, 6176, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixer_base", NULL, 2574243, 6268, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixer_util", NULL, 2580511, 12079, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes", NULL, 2592590, 182, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.fixes.fix_apply", NULL, 2592772, 1701, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_asserts", NULL, 2594473, 1305, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_basestring", NULL, 2595778, 695, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_buffer", NULL, 2596473, 840, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_dict", NULL, 2597313, 3348, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_except", NULL, 2600661, 2850, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_exec", NULL, 2603511, 1181, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_execfile", NULL, 2604692, 1725, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_exitfunc", NULL, 2606417, 2328, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_filter", NULL, 2608745, 2474, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_funcattrs", NULL, 2611219, 1006, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_future", NULL, 2612225, 816, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_getcwdu", NULL, 2613041, 820, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_has_key", NULL, 2613861, 2950, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_idioms", NULL, 2616811, 3935, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_import", NULL, 2620746, 2817, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_imports", NULL, 2623563, 4381, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_imports2", NULL, 2627944, 580, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_input", NULL, 2628524, 982, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_intern", NULL, 2629506, 1164, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_isinstance", NULL, 2630670, 1587, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_itertools", NULL, 2632257, 1576, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_itertools_imports", NULL, 2633833, 1612, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_long", NULL, 2635445, 737, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_map", NULL, 2636182, 3125, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_metaclass", NULL, 2639307, 5378, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_methodattrs", NULL, 2644685, 968, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_ne", NULL, 2645653, 839, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_next", NULL, 2646492, 3092, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_nonzero", NULL, 2649584, 955, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_numliterals", NULL, 2650539, 1051, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_operator", NULL, 2651590, 4268, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_paren", NULL, 2655858, 1422, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_print", NULL, 2657280, 2357, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_raise", NULL, 2659637, 2281, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_raw_input", NULL, 2661918, 827, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_reduce", NULL, 2662745, 1162, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_reload", NULL, 2663907, 1176, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_renames", NULL, 2665083, 2025, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_repr", NULL, 2667108, 877, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_set_literal", NULL, 2667985, 1709, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_standarderror", NULL, 2669694, 752, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_sys_exc", NULL, 2670446, 1433, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_throw", NULL, 2671879, 1834, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_tuple_params", NULL, 2673713, 4628, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_types", NULL, 2678341, 1861, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_unicode", NULL, 2680202, 1573, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_urllib", NULL, 2681775, 5993, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_ws_comma", NULL, 2687768, 1155, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_xrange", NULL, 2688923, 2568, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_xreadlines", NULL, 2691491, 1149, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_zip", NULL, 2692640, 1613, NUITKA_BYTECODE_FLAG},
    {"lib2to3.main", NULL, 2694253, 8569, NUITKA_BYTECODE_FLAG},
    {"lib2to3.patcomp", NULL, 2702822, 5644, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2", NULL, 2708466, 212, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.pgen2.driver", NULL, 2708678, 5173, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.grammar", NULL, 2713851, 7049, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.literals", NULL, 2720900, 1591, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.parse", NULL, 2722491, 6337, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.pgen", NULL, 2728828, 9813, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.token", NULL, 2738641, 1905, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.tokenize", NULL, 2740546, 15172, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pygram", NULL, 2755718, 1231, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pytree", NULL, 2756949, 25036, NUITKA_BYTECODE_FLAG},
    {"lib2to3.refactor", NULL, 2781985, 20398, NUITKA_BYTECODE_FLAG},
    {"logging", NULL, 2802383, 62445, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"logging.config", NULL, 2864828, 23108, NUITKA_BYTECODE_FLAG},
    {"logging.handlers", NULL, 2887936, 43065, NUITKA_BYTECODE_FLAG},
    {"lzma", NULL, 2931001, 11972, NUITKA_BYTECODE_FLAG},
    {"macpath", NULL, 2942973, 5840, NUITKA_BYTECODE_FLAG},
    {"mailbox", NULL, 2948813, 63681, NUITKA_BYTECODE_FLAG},
    {"mailcap", NULL, 3012494, 6517, NUITKA_BYTECODE_FLAG},
    {"mimetypes", NULL, 3019011, 15760, NUITKA_BYTECODE_FLAG},
    {"modulefinder", NULL, 3034771, 15385, NUITKA_BYTECODE_FLAG},
    {"multiprocessing", NULL, 3050156, 560, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing.connection", NULL, 3050716, 24965, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.context", NULL, 3075681, 13146, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.dummy", NULL, 3088827, 3838, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing.dummy.connection", NULL, 3092665, 2546, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.forkserver", NULL, 3095211, 7797, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.heap", NULL, 3103008, 6457, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.managers", NULL, 3109465, 34398, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.pool", NULL, 3143863, 21269, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.popen_fork", NULL, 3165132, 2559, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.popen_forkserver", NULL, 3167691, 2392, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.popen_spawn_posix", NULL, 3170083, 2174, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.process", NULL, 3172257, 9459, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.queues", NULL, 3181716, 9470, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.reduction", NULL, 3191186, 8051, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.resource_sharer", NULL, 3199237, 5237, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.semaphore_tracker", NULL, 3204474, 3773, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.sharedctypes", NULL, 3208247, 6950, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.spawn", NULL, 3215197, 6501, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.synchronize", NULL, 3221698, 11216, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.util", NULL, 3232914, 10165, NUITKA_BYTECODE_FLAG},
    {"netrc", NULL, 3243079, 3796, NUITKA_BYTECODE_FLAG},
    {"nntplib", NULL, 3246875, 33783, NUITKA_BYTECODE_FLAG},
    {"ntpath", NULL, 3280658, 13037, NUITKA_BYTECODE_FLAG},
    {"nturl2path", NULL, 3293695, 1648, NUITKA_BYTECODE_FLAG},
    {"numbers", NULL, 3295343, 12225, NUITKA_BYTECODE_FLAG},
    {"optparse", NULL, 3307568, 47926, NUITKA_BYTECODE_FLAG},
    {"pathlib", NULL, 3355494, 42247, NUITKA_BYTECODE_FLAG},
    {"pdb", NULL, 3397741, 46923, NUITKA_BYTECODE_FLAG},
    {"pickle", NULL, 3444664, 43074, NUITKA_BYTECODE_FLAG},
    {"pickletools", NULL, 3487738, 65364, NUITKA_BYTECODE_FLAG},
    {"pipes", NULL, 3553102, 7836, NUITKA_BYTECODE_FLAG},
    {"pkgutil", NULL, 3560938, 16393, NUITKA_BYTECODE_FLAG},
    {"platform", NULL, 3577331, 28197, NUITKA_BYTECODE_FLAG},
    {"plistlib", NULL, 3605528, 25145, NUITKA_BYTECODE_FLAG},
    {"poplib", NULL, 3630673, 13369, NUITKA_BYTECODE_FLAG},
    {"pprint", NULL, 3644042, 15866, NUITKA_BYTECODE_FLAG},
    {"profile", NULL, 3659908, 14125, NUITKA_BYTECODE_FLAG},
    {"pstats", NULL, 3674033, 22327, NUITKA_BYTECODE_FLAG},
    {"pty", NULL, 3696360, 3916, NUITKA_BYTECODE_FLAG},
    {"py_compile", NULL, 3700276, 7224, NUITKA_BYTECODE_FLAG},
    {"pyclbr", NULL, 3707500, 10406, NUITKA_BYTECODE_FLAG},
    {"pydoc", NULL, 3717906, 84437, NUITKA_BYTECODE_FLAG},
    {"pydoc_data", NULL, 3802343, 179, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pydoc_data.topics", NULL, 3802522, 414292, NUITKA_BYTECODE_FLAG},
    {"queue", NULL, 4216814, 11505, NUITKA_BYTECODE_FLAG},
    {"random", NULL, 4228319, 19441, NUITKA_BYTECODE_FLAG},
    {"rlcompleter", NULL, 4247760, 5780, NUITKA_BYTECODE_FLAG},
    {"runpy", NULL, 4253540, 7978, NUITKA_BYTECODE_FLAG},
    {"sched", NULL, 4261518, 6554, NUITKA_BYTECODE_FLAG},
    {"secrets", NULL, 4268072, 2217, NUITKA_BYTECODE_FLAG},
    {"selectors", NULL, 4270289, 16981, NUITKA_BYTECODE_FLAG},
    {"shelve", NULL, 4287270, 9539, NUITKA_BYTECODE_FLAG},
    {"shlex", NULL, 4296809, 7218, NUITKA_BYTECODE_FLAG},
    {"shutil", NULL, 4304027, 31013, NUITKA_BYTECODE_FLAG},
    {"signal", NULL, 4335040, 2545, NUITKA_BYTECODE_FLAG},
    {"site", NULL, 632, 13183, NUITKA_BYTECODE_FLAG},
    {"smtpd", NULL, 4337585, 26637, NUITKA_BYTECODE_FLAG},
    {"smtplib", NULL, 4364222, 35385, NUITKA_BYTECODE_FLAG},
    {"sndhdr", NULL, 4399607, 6936, NUITKA_BYTECODE_FLAG},
    {"socket", NULL, 4406543, 22070, NUITKA_BYTECODE_FLAG},
    {"socketserver", NULL, 4428613, 24233, NUITKA_BYTECODE_FLAG},
    {"sqlite3", NULL, 4452846, 207, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"sqlite3.dbapi2", NULL, 4453053, 2526, NUITKA_BYTECODE_FLAG},
    {"sqlite3.dump", NULL, 4455579, 1969, NUITKA_BYTECODE_FLAG},
    {"ssl", NULL, 4457548, 39423, NUITKA_BYTECODE_FLAG},
    {"statistics", NULL, 4496971, 18197, NUITKA_BYTECODE_FLAG},
    {"string", NULL, 4515168, 7868, NUITKA_BYTECODE_FLAG},
    {"subprocess", NULL, 4523036, 39247, NUITKA_BYTECODE_FLAG},
    {"sunau", NULL, 4562283, 17244, NUITKA_BYTECODE_FLAG},
    {"symbol", NULL, 4579527, 2598, NUITKA_BYTECODE_FLAG},
    {"symtable", NULL, 4582125, 10478, NUITKA_BYTECODE_FLAG},
    {"sysconfig", NULL, 4592603, 15477, NUITKA_BYTECODE_FLAG},
    {"tabnanny", NULL, 4608080, 7011, NUITKA_BYTECODE_FLAG},
    {"tarfile", NULL, 4615091, 61892, NUITKA_BYTECODE_FLAG},
    {"telnetlib", NULL, 4676983, 18135, NUITKA_BYTECODE_FLAG},
    {"tempfile", NULL, 4695118, 22265, NUITKA_BYTECODE_FLAG},
    {"textwrap", NULL, 4717383, 13558, NUITKA_BYTECODE_FLAG},
    {"this", NULL, 4730941, 1310, NUITKA_BYTECODE_FLAG},
    {"timeit", NULL, 4732251, 11680, NUITKA_BYTECODE_FLAG},
    {"tkinter", NULL, 4743931, 179211, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"tkinter.colorchooser", NULL, 4923142, 1168, NUITKA_BYTECODE_FLAG},
    {"tkinter.commondialog", NULL, 4924310, 1149, NUITKA_BYTECODE_FLAG},
    {"tkinter.constants", NULL, 4925459, 1701, NUITKA_BYTECODE_FLAG},
    {"tkinter.dialog", NULL, 4927160, 1477, NUITKA_BYTECODE_FLAG},
    {"tkinter.dnd", NULL, 4928637, 11219, NUITKA_BYTECODE_FLAG},
    {"tkinter.filedialog", NULL, 4939856, 12303, NUITKA_BYTECODE_FLAG},
    {"tkinter.font", NULL, 4952159, 6220, NUITKA_BYTECODE_FLAG},
    {"tkinter.messagebox", NULL, 4958379, 3085, NUITKA_BYTECODE_FLAG},
    {"tkinter.scrolledtext", NULL, 4961464, 2212, NUITKA_BYTECODE_FLAG},
    {"tkinter.simpledialog", NULL, 4963676, 10579, NUITKA_BYTECODE_FLAG},
    {"tkinter.tix", NULL, 4974255, 83701, NUITKA_BYTECODE_FLAG},
    {"tkinter.ttk", NULL, 5057956, 57925, NUITKA_BYTECODE_FLAG},
    {"trace", NULL, 5115881, 19353, NUITKA_BYTECODE_FLAG},
    {"tracemalloc", NULL, 5135234, 17309, NUITKA_BYTECODE_FLAG},
    {"tty", NULL, 5152543, 1127, NUITKA_BYTECODE_FLAG},
    {"turtle", NULL, 5153670, 130824, NUITKA_BYTECODE_FLAG},
    {"typing", NULL, 5284494, 51003, NUITKA_BYTECODE_FLAG},
    {"unittest", NULL, 5335497, 3044, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"unittest.case", NULL, 5338541, 48395, NUITKA_BYTECODE_FLAG},
    {"unittest.loader", NULL, 5386936, 14309, NUITKA_BYTECODE_FLAG},
    {"unittest.main", NULL, 5401245, 7471, NUITKA_BYTECODE_FLAG},
    {"unittest.mock", NULL, 5408716, 64998, NUITKA_BYTECODE_FLAG},
    {"unittest.result", NULL, 5473714, 7285, NUITKA_BYTECODE_FLAG},
    {"unittest.runner", NULL, 5480999, 7028, NUITKA_BYTECODE_FLAG},
    {"unittest.signals", NULL, 5488027, 2227, NUITKA_BYTECODE_FLAG},
    {"unittest.suite", NULL, 5490254, 9236, NUITKA_BYTECODE_FLAG},
    {"unittest.util", NULL, 5499490, 4554, NUITKA_BYTECODE_FLAG},
    {"urllib", NULL, 5504044, 175, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib.error", NULL, 5504219, 2809, NUITKA_BYTECODE_FLAG},
    {"urllib.parse", NULL, 5507028, 30871, NUITKA_BYTECODE_FLAG},
    {"urllib.request", NULL, 5537899, 72185, NUITKA_BYTECODE_FLAG},
    {"urllib.response", NULL, 5610084, 3282, NUITKA_BYTECODE_FLAG},
    {"urllib.robotparser", NULL, 5613366, 7122, NUITKA_BYTECODE_FLAG},
    {"uu", NULL, 5620488, 3658, NUITKA_BYTECODE_FLAG},
    {"uuid", NULL, 5624146, 23236, NUITKA_BYTECODE_FLAG},
    {"venv", NULL, 5647382, 14488, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"wave", NULL, 5661870, 18322, NUITKA_BYTECODE_FLAG},
    {"weakref", NULL, 5680192, 19602, NUITKA_BYTECODE_FLAG},
    {"webbrowser", NULL, 5699794, 16408, NUITKA_BYTECODE_FLAG},
    {"wsgiref", NULL, 5716202, 771, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"wsgiref.handlers", NULL, 5716973, 16323, NUITKA_BYTECODE_FLAG},
    {"wsgiref.headers", NULL, 5733296, 7792, NUITKA_BYTECODE_FLAG},
    {"wsgiref.simple_server", NULL, 5741088, 5238, NUITKA_BYTECODE_FLAG},
    {"wsgiref.util", NULL, 5746326, 5213, NUITKA_BYTECODE_FLAG},
    {"wsgiref.validate", NULL, 5751539, 14709, NUITKA_BYTECODE_FLAG},
    {"xdrlib", NULL, 5766248, 8357, NUITKA_BYTECODE_FLAG},
    {"xml", NULL, 5774605, 739, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.dom", NULL, 5775344, 5491, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.dom.NodeFilter", NULL, 5780835, 1006, NUITKA_BYTECODE_FLAG},
    {"xml.dom.domreg", NULL, 5781841, 2883, NUITKA_BYTECODE_FLAG},
    {"xml.dom.expatbuilder", NULL, 5784724, 27053, NUITKA_BYTECODE_FLAG},
    {"xml.dom.minicompat", NULL, 5811777, 2852, NUITKA_BYTECODE_FLAG},
    {"xml.dom.minidom", NULL, 5814629, 55652, NUITKA_BYTECODE_FLAG},
    {"xml.dom.pulldom", NULL, 5870281, 10525, NUITKA_BYTECODE_FLAG},
    {"xml.dom.xmlbuilder", NULL, 5880806, 12472, NUITKA_BYTECODE_FLAG},
    {"xml.etree", NULL, 5893278, 178, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.etree.ElementInclude", NULL, 5893456, 1614, NUITKA_BYTECODE_FLAG},
    {"xml.etree.ElementPath", NULL, 5895070, 6382, NUITKA_BYTECODE_FLAG},
    {"xml.etree.ElementTree", NULL, 5901452, 44846, NUITKA_BYTECODE_FLAG},
    {"xml.etree.cElementTree", NULL, 5946298, 220, NUITKA_BYTECODE_FLAG},
    {"xml.parsers", NULL, 5946518, 352, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.parsers.expat", NULL, 5946870, 381, NUITKA_BYTECODE_FLAG},
    {"xml.sax", NULL, 5947251, 3211, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.sax._exceptions", NULL, 5950462, 5520, NUITKA_BYTECODE_FLAG},
    {"xml.sax.expatreader", NULL, 5955982, 12423, NUITKA_BYTECODE_FLAG},
    {"xml.sax.handler", NULL, 5968405, 12396, NUITKA_BYTECODE_FLAG},
    {"xml.sax.saxutils", NULL, 5980801, 12849, NUITKA_BYTECODE_FLAG},
    {"xml.sax.xmlreader", NULL, 5993650, 16957, NUITKA_BYTECODE_FLAG},
    {"xmlrpc", NULL, 6010607, 175, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xmlrpc.client", NULL, 6010782, 34581, NUITKA_BYTECODE_FLAG},
    {"xmlrpc.server", NULL, 6045363, 29455, NUITKA_BYTECODE_FLAG},
    {"zipapp", NULL, 6074818, 5836, NUITKA_BYTECODE_FLAG},
    {"zipfile", NULL, 6080654, 50365, NUITKA_BYTECODE_FLAG},
    {NULL, NULL, 0, 0, 0}
};

void setupMetaPathBasedLoader(void) {
    static bool init_done = false;

    if (init_done == false)
    {
        registerMetaPathBasedUnfreezer(meta_path_loader_entries);
        init_done = true;
    }
}
