/* Generated code for Python module 'click.globals'
 * created by Nuitka version 0.6.7
 *
 * This code is in part copyright 2019 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The "_module_click$globals" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_click$globals;
PyDictObject *moduledict_click$globals;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_threading;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_tuple_str_plain_color_str_plain_ctx_tuple;
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_str_plain_ctx_tuple;
extern PyObject *const_str_plain_False;
static PyObject *const_str_plain__local;
extern PyObject *const_str_plain_get_current_context;
extern PyObject *const_tuple_false_tuple;
static PyObject *const_str_digest_b5b3b7ec3275b4aa1797c95a9c13d554;
static PyObject *const_str_digest_e75544c44492c0345806104b4f4ff0d4;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_pop;
extern PyObject *const_str_plain_local;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_resolve_color_default;
extern PyObject *const_str_plain_push_context;
static PyObject *const_tuple_type_AttributeError_type_IndexError_tuple;
extern PyObject *const_str_plain_ctx;
static PyObject *const_str_plain_stack;
extern PyObject *const_str_plain_pop_context;
extern PyObject *const_int_neg_1;
static PyObject *const_str_digest_84db718a6d3123cc1a774c8ca8d32810;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain_silent;
static PyObject *const_str_digest_964bcb3232b34ef92e469c8bc45b4a6b;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_98b06f2af894fbaecb13744dbc48683d;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_setdefault;
static PyObject *const_dict_954a86a89ece8a4cdee5e74372e191f5;
static PyObject *const_tuple_str_plain_silent_tuple;
static PyObject *const_tuple_str_plain_local_tuple;
static PyObject *const_str_digest_00ec503a2bc4275fc022f2eba5b57a17;
static PyObject *const_str_digest_a52de79cb9d8ced812e396ef65ae3a5d;
extern PyObject *const_str_plain_color;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___debug__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_tuple_str_plain_color_str_plain_ctx_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_color_str_plain_ctx_tuple, 0, const_str_plain_color); Py_INCREF(const_str_plain_color);
    PyTuple_SET_ITEM(const_tuple_str_plain_color_str_plain_ctx_tuple, 1, const_str_plain_ctx); Py_INCREF(const_str_plain_ctx);
    const_tuple_str_plain_ctx_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_ctx_tuple, 0, const_str_plain_ctx); Py_INCREF(const_str_plain_ctx);
    const_str_plain__local = UNSTREAM_STRING_ASCII(&constant_bin[ 12068 ], 6, 1);
    const_str_digest_b5b3b7ec3275b4aa1797c95a9c13d554 = UNSTREAM_STRING_ASCII(&constant_bin[ 414175 ], 33, 0);
    const_str_digest_e75544c44492c0345806104b4f4ff0d4 = UNSTREAM_STRING_ASCII(&constant_bin[ 414208 ], 55, 0);
    const_tuple_type_AttributeError_type_IndexError_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_type_AttributeError_type_IndexError_tuple, 0, (PyObject *)PyExc_AttributeError); Py_INCREF((PyObject *)PyExc_AttributeError);
    PyTuple_SET_ITEM(const_tuple_type_AttributeError_type_IndexError_tuple, 1, (PyObject *)PyExc_IndexError); Py_INCREF((PyObject *)PyExc_IndexError);
    const_str_plain_stack = UNSTREAM_STRING_ASCII(&constant_bin[ 414263 ], 5, 1);
    const_str_digest_84db718a6d3123cc1a774c8ca8d32810 = UNSTREAM_STRING_ASCII(&constant_bin[ 414268 ], 22, 0);
    const_str_plain_silent = UNSTREAM_STRING_ASCII(&constant_bin[ 414290 ], 6, 1);
    const_str_digest_964bcb3232b34ef92e469c8bc45b4a6b = UNSTREAM_STRING_ASCII(&constant_bin[ 414296 ], 42, 0);
    const_str_digest_98b06f2af894fbaecb13744dbc48683d = UNSTREAM_STRING_ASCII(&constant_bin[ 414338 ], 37, 0);
    const_dict_954a86a89ece8a4cdee5e74372e191f5 = _PyDict_NewPresized( 1 );
    PyDict_SetItem(const_dict_954a86a89ece8a4cdee5e74372e191f5, const_str_plain_silent, Py_True);
    assert(PyDict_Size(const_dict_954a86a89ece8a4cdee5e74372e191f5) == 1);
    const_tuple_str_plain_silent_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_silent_tuple, 0, const_str_plain_silent); Py_INCREF(const_str_plain_silent);
    const_tuple_str_plain_local_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_local_tuple, 0, const_str_plain_local); Py_INCREF(const_str_plain_local);
    const_str_digest_00ec503a2bc4275fc022f2eba5b57a17 = UNSTREAM_STRING_ASCII(&constant_bin[ 414375 ], 642, 0);
    const_str_digest_a52de79cb9d8ced812e396ef65ae3a5d = UNSTREAM_STRING_ASCII(&constant_bin[ 415017 ], 171, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_click$globals(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e060c965e36817cbc436661a88d8f7b7;
static PyCodeObject *codeobj_e6ae07ab27a43a76be27ca57c3fbf6da;
static PyCodeObject *codeobj_533e41245553b3f7927b9819c03f0ef1;
static PyCodeObject *codeobj_fad2a324948d7b902d2470a5f2dc17a9;
static PyCodeObject *codeobj_a28659fcb6ddde257f3ded87fb227816;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_e75544c44492c0345806104b4f4ff0d4;
    codeobj_e060c965e36817cbc436661a88d8f7b7 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_84db718a6d3123cc1a774c8ca8d32810, const_tuple_empty, 0, 0, 0);
    codeobj_e6ae07ab27a43a76be27ca57c3fbf6da = MAKE_CODEOBJECT(module_filename_obj, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_get_current_context, const_tuple_str_plain_silent_tuple, 1, 0, 0);
    codeobj_533e41245553b3f7927b9819c03f0ef1 = MAKE_CODEOBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_pop_context, const_tuple_empty, 0, 0, 0);
    codeobj_fad2a324948d7b902d2470a5f2dc17a9 = MAKE_CODEOBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_push_context, const_tuple_str_plain_ctx_tuple, 1, 0, 0);
    codeobj_a28659fcb6ddde257f3ded87fb227816 = MAKE_CODEOBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_resolve_color_default, const_tuple_str_plain_color_str_plain_ctx_tuple, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_click$globals$$$function_1_get_current_context(PyObject *defaults);


static PyObject *MAKE_FUNCTION_click$globals$$$function_2_push_context();


static PyObject *MAKE_FUNCTION_click$globals$$$function_3_pop_context();


static PyObject *MAKE_FUNCTION_click$globals$$$function_4_resolve_color_default(PyObject *defaults);


// The module function definitions.
static PyObject *impl_click$globals$$$function_1_get_current_context(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_silent = python_pars[0];
    struct Nuitka_FrameObject *frame_e6ae07ab27a43a76be27ca57c3fbf6da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_e6ae07ab27a43a76be27ca57c3fbf6da = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_e6ae07ab27a43a76be27ca57c3fbf6da, codeobj_e6ae07ab27a43a76be27ca57c3fbf6da, module_click$globals, sizeof(void *));
    frame_e6ae07ab27a43a76be27ca57c3fbf6da = cache_frame_e6ae07ab27a43a76be27ca57c3fbf6da;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e6ae07ab27a43a76be27ca57c3fbf6da);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e6ae07ab27a43a76be27ca57c3fbf6da) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain__local);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__local);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 12062 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 23;
            type_description_1 = "o";
            goto try_except_handler_1;
        }

        tmp_getattr_target_1 = tmp_mvar_value_1;
        tmp_getattr_attr_1 = const_str_plain_stack;
        tmp_subscribed_name_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        if (tmp_subscribed_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_subscript_name_1 = const_int_neg_1;
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, -1);
        Py_DECREF(tmp_subscribed_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(click$globals$$$function_1_get_current_context);
    return NULL;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_e6ae07ab27a43a76be27ca57c3fbf6da, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_e6ae07ab27a43a76be27ca57c3fbf6da, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    PyException_SetTraceback(exception_keeper_value_1, (PyObject *)exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = const_tuple_type_AttributeError_type_IndexError_tuple;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            CHECK_OBJECT(par_silent);
            tmp_operand_name_1 = par_silent;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_b5b3b7ec3275b4aa1797c95a9c13d554;
                frame_e6ae07ab27a43a76be27ca57c3fbf6da->m_frame.f_lineno = 26;
                tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
                assert(!(tmp_raise_type_1 == NULL));
                exception_type = tmp_raise_type_1;
                exception_lineno = 26;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            branch_no_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 22;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_e6ae07ab27a43a76be27ca57c3fbf6da->m_frame) frame_e6ae07ab27a43a76be27ca57c3fbf6da->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "o";
        goto try_except_handler_2;
        branch_end_1:;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE(click$globals$$$function_1_get_current_context);
    return NULL;
    // End of try:
    try_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e6ae07ab27a43a76be27ca57c3fbf6da);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e6ae07ab27a43a76be27ca57c3fbf6da);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e6ae07ab27a43a76be27ca57c3fbf6da);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e6ae07ab27a43a76be27ca57c3fbf6da, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_e6ae07ab27a43a76be27ca57c3fbf6da->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e6ae07ab27a43a76be27ca57c3fbf6da, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e6ae07ab27a43a76be27ca57c3fbf6da,
        type_description_1,
        par_silent
    );


    // Release cached frame.
    if (frame_e6ae07ab27a43a76be27ca57c3fbf6da == cache_frame_e6ae07ab27a43a76be27ca57c3fbf6da) {
        Py_DECREF(frame_e6ae07ab27a43a76be27ca57c3fbf6da);
    }
    cache_frame_e6ae07ab27a43a76be27ca57c3fbf6da = NULL;

    assertFrameObject(frame_e6ae07ab27a43a76be27ca57c3fbf6da);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(click$globals$$$function_1_get_current_context);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_silent);
    Py_DECREF(par_silent);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_silent);
    Py_DECREF(par_silent);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$globals$$$function_2_push_context(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[0];
    struct Nuitka_FrameObject *frame_fad2a324948d7b902d2470a5f2dc17a9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fad2a324948d7b902d2470a5f2dc17a9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_fad2a324948d7b902d2470a5f2dc17a9, codeobj_fad2a324948d7b902d2470a5f2dc17a9, module_click$globals, sizeof(void *));
    frame_fad2a324948d7b902d2470a5f2dc17a9 = cache_frame_fad2a324948d7b902d2470a5f2dc17a9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_fad2a324948d7b902d2470a5f2dc17a9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_fad2a324948d7b902d2470a5f2dc17a9) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain__local);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__local);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 12062 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 31;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_source_name_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = const_str_plain_stack;
        tmp_call_arg_element_2 = PyList_New(0);
        frame_fad2a324948d7b902d2470a5f2dc17a9->m_frame.f_lineno = 31;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_called_instance_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_2, const_str_plain_setdefault, call_args);
        }

        Py_DECREF(tmp_called_instance_2);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ctx);
        tmp_args_element_name_1 = par_ctx;
        frame_fad2a324948d7b902d2470a5f2dc17a9->m_frame.f_lineno = 31;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_append, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fad2a324948d7b902d2470a5f2dc17a9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fad2a324948d7b902d2470a5f2dc17a9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fad2a324948d7b902d2470a5f2dc17a9, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_fad2a324948d7b902d2470a5f2dc17a9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fad2a324948d7b902d2470a5f2dc17a9, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fad2a324948d7b902d2470a5f2dc17a9,
        type_description_1,
        par_ctx
    );


    // Release cached frame.
    if (frame_fad2a324948d7b902d2470a5f2dc17a9 == cache_frame_fad2a324948d7b902d2470a5f2dc17a9) {
        Py_DECREF(frame_fad2a324948d7b902d2470a5f2dc17a9);
    }
    cache_frame_fad2a324948d7b902d2470a5f2dc17a9 = NULL;

    assertFrameObject(frame_fad2a324948d7b902d2470a5f2dc17a9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(click$globals$$$function_2_push_context);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$globals$$$function_3_pop_context(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_533e41245553b3f7927b9819c03f0ef1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_533e41245553b3f7927b9819c03f0ef1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_533e41245553b3f7927b9819c03f0ef1, codeobj_533e41245553b3f7927b9819c03f0ef1, module_click$globals, 0);
    frame_533e41245553b3f7927b9819c03f0ef1 = cache_frame_533e41245553b3f7927b9819c03f0ef1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_533e41245553b3f7927b9819c03f0ef1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_533e41245553b3f7927b9819c03f0ef1) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain__local);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__local);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 12062 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_stack);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        frame_533e41245553b3f7927b9819c03f0ef1->m_frame.f_lineno = 36;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_pop);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_533e41245553b3f7927b9819c03f0ef1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_533e41245553b3f7927b9819c03f0ef1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_533e41245553b3f7927b9819c03f0ef1, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_533e41245553b3f7927b9819c03f0ef1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_533e41245553b3f7927b9819c03f0ef1, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_533e41245553b3f7927b9819c03f0ef1,
        type_description_1
    );


    // Release cached frame.
    if (frame_533e41245553b3f7927b9819c03f0ef1 == cache_frame_533e41245553b3f7927b9819c03f0ef1) {
        Py_DECREF(frame_533e41245553b3f7927b9819c03f0ef1);
    }
    cache_frame_533e41245553b3f7927b9819c03f0ef1 = NULL;

    assertFrameObject(frame_533e41245553b3f7927b9819c03f0ef1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(click$globals$$$function_3_pop_context);
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$globals$$$function_4_resolve_color_default(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_color = python_pars[0];
    PyObject *var_ctx = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_a28659fcb6ddde257f3ded87fb227816;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a28659fcb6ddde257f3ded87fb227816 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_color);
        tmp_compexpr_left_1 = par_color;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        CHECK_OBJECT(par_color);
        tmp_return_value = par_color;
        Py_INCREF(tmp_return_value);
        goto try_return_handler_1;
        branch_no_1:;
    }
    MAKE_OR_REUSE_FRAME(cache_frame_a28659fcb6ddde257f3ded87fb227816, codeobj_a28659fcb6ddde257f3ded87fb227816, module_click$globals, sizeof(void *)+sizeof(void *));
    frame_a28659fcb6ddde257f3ded87fb227816 = cache_frame_a28659fcb6ddde257f3ded87fb227816;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a28659fcb6ddde257f3ded87fb227816);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a28659fcb6ddde257f3ded87fb227816) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain_get_current_context);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_get_current_context);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 11624 ], 41, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_kw_name_1 = PyDict_Copy(const_dict_954a86a89ece8a4cdee5e74372e191f5);
        frame_a28659fcb6ddde257f3ded87fb227816->m_frame.f_lineno = 46;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_ctx == NULL);
        var_ctx = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_ctx);
        tmp_compexpr_left_2 = var_ctx;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_source_name_1;
            CHECK_OBJECT(var_ctx);
            tmp_source_name_1 = var_ctx;
            tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_color);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a28659fcb6ddde257f3ded87fb227816);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a28659fcb6ddde257f3ded87fb227816);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a28659fcb6ddde257f3ded87fb227816);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a28659fcb6ddde257f3ded87fb227816, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_a28659fcb6ddde257f3ded87fb227816->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a28659fcb6ddde257f3ded87fb227816, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a28659fcb6ddde257f3ded87fb227816,
        type_description_1,
        par_color,
        var_ctx
    );


    // Release cached frame.
    if (frame_a28659fcb6ddde257f3ded87fb227816 == cache_frame_a28659fcb6ddde257f3ded87fb227816) {
        Py_DECREF(frame_a28659fcb6ddde257f3ded87fb227816);
    }
    cache_frame_a28659fcb6ddde257f3ded87fb227816 = NULL;

    assertFrameObject(frame_a28659fcb6ddde257f3ded87fb227816);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(click$globals$$$function_4_resolve_color_default);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_ctx);
    var_ctx = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_ctx);
    var_ctx = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(click$globals$$$function_4_resolve_color_default);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_click$globals$$$function_1_get_current_context(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$globals$$$function_1_get_current_context,
        const_str_plain_get_current_context,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e6ae07ab27a43a76be27ca57c3fbf6da,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_click$globals,
        const_str_digest_00ec503a2bc4275fc022f2eba5b57a17,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$globals$$$function_2_push_context() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$globals$$$function_2_push_context,
        const_str_plain_push_context,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fad2a324948d7b902d2470a5f2dc17a9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_click$globals,
        const_str_digest_964bcb3232b34ef92e469c8bc45b4a6b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$globals$$$function_3_pop_context() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$globals$$$function_3_pop_context,
        const_str_plain_pop_context,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_533e41245553b3f7927b9819c03f0ef1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_click$globals,
        const_str_digest_98b06f2af894fbaecb13744dbc48683d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$globals$$$function_4_resolve_color_default(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$globals$$$function_4_resolve_color_default,
        const_str_plain_resolve_color_default,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a28659fcb6ddde257f3ded87fb227816,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_click$globals,
        const_str_digest_a52de79cb9d8ced812e396ef65ae3a5d,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_click$globals =
{
    PyModuleDef_HEAD_INIT,
    NULL,                /* m_name, filled later */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___compiled__;

extern PyObject *const_str_plain___package__;
extern PyObject *const_str_empty;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___loader__;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
extern PyObject *const_str_plain_submodule_search_locations;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill

function_impl_code functable_click$globals[] = {
    impl_click$globals$$$function_1_get_current_context,
    impl_click$globals$$$function_2_push_context,
    impl_click$globals$$$function_3_pop_context,
    impl_click$globals$$$function_4_resolve_color_default,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyErr_Format(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_click$globals;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        PyErr_Format(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_click$globals) || offset < 0) {
        PyErr_Format(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    // TODO: More stuff needed for Python3, best to re-order arguments of MAKE_CODEOBJECT.
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_click$globals[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_click$globals,
        doc,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_click$globals(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_click$globals;
    } else {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // May have to activate constants blob.
#if defined(_NUITKA_CONSTANTS_FROM_RESOURCE)
    loadConstantsResource();
#endif

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("click.globals: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("click.globals: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("click.globals: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initclick$globals\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_click$globals = Py_InitModule4(
        module_full_name,        // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    mdef_click$globals.m_name = module_full_name;
    module_click$globals = PyModule_Create(&mdef_click$globals);
#endif

    moduledict_click$globals = MODULE_DICT(module_click$globals);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        PyObject *function_tables = PyObject_GetAttrString((PyObject *)builtin_module, "compiled_function_tables");
        if (function_tables == NULL)
        {
            DROP_ERROR_OCCURRED();
            function_tables = PyDict_New();
        }
        PyObject_SetAttrString((PyObject *)builtin_module, "compiled_function_tables", function_tables);
        PyObject *funcs = PyTuple_New(2);
        PyTuple_SetItem(funcs, 0, PyCFunction_New(&_method_def_reduce_compiled_function, NULL));
        PyTuple_SetItem(funcs, 1, PyCFunction_New(&_method_def_create_compiled_function, NULL));
        PyDict_SetItemString(function_tables, module_full_name, funcs);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_click$globals,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_click$globals,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_click$globals,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_click$globals,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_click$globals,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_click$globals);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_click$globals);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___name__),
            (PyObject *)&Nuitka_Loader_Type
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );
        Py_DECREF(module_spec_class);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// For packages set the submodule search locations as well, even if to empty
// list, so investigating code will consider it a package.
#if 0
        SET_ATTRIBUTE(spec_value, const_str_plain_submodule_search_locations, PyList_New(0));
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_e060c965e36817cbc436661a88d8f7b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_e75544c44492c0345806104b4f4ff0d4;
        UPDATE_STRING_DICT0(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_e060c965e36817cbc436661a88d8f7b7 = MAKE_MODULE_FRAME(codeobj_e060c965e36817cbc436661a88d8f7b7, module_click$globals);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_e060c965e36817cbc436661a88d8f7b7);
    assert(Py_REFCNT(frame_e060c965e36817cbc436661a88d8f7b7) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_e75544c44492c0345806104b4f4ff0d4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___spec__);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
        }

        CHECK_OBJECT(tmp_mvar_value_1);
        tmp_assattr_target_1 = tmp_mvar_value_1;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_origin, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_mvar_value_2;
        tmp_assattr_name_2 = Py_True;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___spec__);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
        }

        CHECK_OBJECT(tmp_mvar_value_2);
        tmp_assattr_target_2 = tmp_mvar_value_2;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_has_location, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_threading;
        tmp_globals_name_1 = (PyObject *)moduledict_click$globals;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_local_tuple;
        tmp_level_name_1 = const_int_0;
        frame_e060c965e36817cbc436661a88d8f7b7->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_local);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain_local, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain_local);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_local);
        }

        CHECK_OBJECT(tmp_mvar_value_3);
        tmp_called_name_1 = tmp_mvar_value_3;
        frame_e060c965e36817cbc436661a88d8f7b7->m_frame.f_lineno = 4;
        tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain__local, tmp_assign_source_5);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e060c965e36817cbc436661a88d8f7b7);
#endif
    popFrameStack();

    assertFrameObject(frame_e060c965e36817cbc436661a88d8f7b7);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e060c965e36817cbc436661a88d8f7b7);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_e060c965e36817cbc436661a88d8f7b7, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_e060c965e36817cbc436661a88d8f7b7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e060c965e36817cbc436661a88d8f7b7, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_false_tuple;
        Py_INCREF(tmp_defaults_1);
        tmp_assign_source_6 = MAKE_FUNCTION_click$globals$$$function_1_get_current_context(tmp_defaults_1);



        UPDATE_STRING_DICT1(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain_get_current_context, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_FUNCTION_click$globals$$$function_2_push_context();



        UPDATE_STRING_DICT1(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain_push_context, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_FUNCTION_click$globals$$$function_3_pop_context();



        UPDATE_STRING_DICT1(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain_pop_context, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_none_tuple;
        Py_INCREF(tmp_defaults_2);
        tmp_assign_source_9 = MAKE_FUNCTION_click$globals$$$function_4_resolve_color_default(tmp_defaults_2);



        UPDATE_STRING_DICT1(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain_resolve_color_default, tmp_assign_source_9);
    }

    return module_click$globals;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
