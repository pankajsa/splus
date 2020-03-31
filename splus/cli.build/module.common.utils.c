/* Generated code for Python module 'common.utils'
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

/* The "_module_common$utils" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_common$utils;
PyDictObject *moduledict_common$utils;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_94244f7527dee0d29c91bb8e81fe0b85;
static PyObject *const_tuple_str_plain_func_str_plain_option_tuple;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_str_digest_4ee75140bb75c31243bac745a387ea27_tuple;
static PyObject *const_str_digest_cd490d2d9f1dc1107efb8ebacf09ba2a;
extern PyObject *const_str_digest_5e27bd184e7704d28068a4e961f7428f;
static PyObject *const_tuple_str_digest_b079a483a5bb3f12a8f5a2f221050499_tuple;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain_click;
static PyObject *const_tuple_195643f31f8e0e9bc2daff3d06401aa5_tuple;
extern PyObject *const_tuple_str_digest_33baecf35ee849533870937382a7e644_tuple;
extern PyObject *const_str_plain_dict;
extern PyObject *const_tuple_str_digest_b45d6b9ef249d45a07538bf430493b1c_tuple;
extern PyObject *const_str_plain_False;
static PyObject *const_str_digest_1a35b59121aff4e01bb805eb3931039d;
extern PyObject *const_str_plain___file__;
static PyObject *const_dict_5c4021b9a3d065db6e18337348e929d4;
extern PyObject *const_str_plain_required;
extern PyObject *const_str_digest_33baecf35ee849533870937382a7e644;
extern PyObject *const_str_plain_logger;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_digest_b45d6b9ef249d45a07538bf430493b1c;
static PyObject *const_dict_ec450b71aaca01ea2f73e9abfe2b927a;
static PyObject *const_str_plain_false_val;
extern PyObject *const_str_digest_4ee75140bb75c31243bac745a387ea27;
extern PyObject *const_str_plain_option;
static PyObject *const_dict_abeb2d870cc14c4adcaeeb4fd38f19b5;
extern PyObject *const_str_plain_add_if;
extern PyObject *const_str_plain_origin;
extern PyObject *const_tuple_true_false_tuple;
extern PyObject *const_str_plain_my_global_options;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_str_digest_5e27bd184e7704d28068a4e961f7428f_tuple;
extern PyObject *const_str_plain_has_location;
static PyObject *const_dict_23a941d8b98c01307bb30807993f0094;
static PyObject *const_str_plain__global_options;
extern PyObject *const_str_plain_func;
static PyObject *const_str_plain_flag;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_reversed;
static PyObject *const_str_digest_d004933ed189799ad05f99cdb9432454;
static PyObject *const_str_digest_4e80a39213f381868825d3c0882b6d45;
static PyObject *const_str_digest_fea260a69cc56aa08f7a93bdb937d469;
static PyObject *const_str_plain_true_val;
extern PyObject *const_str_plain_help;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_b079a483a5bb3f12a8f5a2f221050499;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_94244f7527dee0d29c91bb8e81fe0b85 = UNSTREAM_STRING_ASCII(&constant_bin[ 466784 ], 36, 0);
    const_tuple_str_plain_func_str_plain_option_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_func_str_plain_option_tuple, 0, const_str_plain_func); Py_INCREF(const_str_plain_func);
    PyTuple_SET_ITEM(const_tuple_str_plain_func_str_plain_option_tuple, 1, const_str_plain_option); Py_INCREF(const_str_plain_option);
    const_str_digest_cd490d2d9f1dc1107efb8ebacf09ba2a = UNSTREAM_STRING_ASCII(&constant_bin[ 466820 ], 21, 0);
    const_tuple_str_digest_b079a483a5bb3f12a8f5a2f221050499_tuple = PyTuple_New(1);
    const_str_digest_b079a483a5bb3f12a8f5a2f221050499 = UNSTREAM_STRING_ASCII(&constant_bin[ 466828 ], 12, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_b079a483a5bb3f12a8f5a2f221050499_tuple, 0, const_str_digest_b079a483a5bb3f12a8f5a2f221050499); Py_INCREF(const_str_digest_b079a483a5bb3f12a8f5a2f221050499);
    const_tuple_195643f31f8e0e9bc2daff3d06401aa5_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_195643f31f8e0e9bc2daff3d06401aa5_tuple, 0, const_str_plain_dict); Py_INCREF(const_str_plain_dict);
    const_str_plain_flag = UNSTREAM_STRING_ASCII(&constant_bin[ 365189 ], 4, 1);
    PyTuple_SET_ITEM(const_tuple_195643f31f8e0e9bc2daff3d06401aa5_tuple, 1, const_str_plain_flag); Py_INCREF(const_str_plain_flag);
    PyTuple_SET_ITEM(const_tuple_195643f31f8e0e9bc2daff3d06401aa5_tuple, 2, const_str_plain_key); Py_INCREF(const_str_plain_key);
    const_str_plain_true_val = UNSTREAM_STRING_ASCII(&constant_bin[ 466841 ], 8, 1);
    PyTuple_SET_ITEM(const_tuple_195643f31f8e0e9bc2daff3d06401aa5_tuple, 3, const_str_plain_true_val); Py_INCREF(const_str_plain_true_val);
    const_str_plain_false_val = UNSTREAM_STRING_ASCII(&constant_bin[ 466849 ], 9, 1);
    PyTuple_SET_ITEM(const_tuple_195643f31f8e0e9bc2daff3d06401aa5_tuple, 4, const_str_plain_false_val); Py_INCREF(const_str_plain_false_val);
    const_str_digest_1a35b59121aff4e01bb805eb3931039d = UNSTREAM_STRING_ASCII(&constant_bin[ 466858 ], 41, 0);
    const_dict_5c4021b9a3d065db6e18337348e929d4 = _PyDict_NewPresized( 1 );
    const_str_digest_4e80a39213f381868825d3c0882b6d45 = UNSTREAM_STRING_ASCII(&constant_bin[ 466899 ], 41, 0);
    PyDict_SetItem(const_dict_5c4021b9a3d065db6e18337348e929d4, const_str_plain_help, const_str_digest_4e80a39213f381868825d3c0882b6d45);
    assert(PyDict_Size(const_dict_5c4021b9a3d065db6e18337348e929d4) == 1);
    const_dict_ec450b71aaca01ea2f73e9abfe2b927a = _PyDict_NewPresized( 1 );
    PyDict_SetItem(const_dict_ec450b71aaca01ea2f73e9abfe2b927a, const_str_plain_help, const_str_digest_94244f7527dee0d29c91bb8e81fe0b85);
    assert(PyDict_Size(const_dict_ec450b71aaca01ea2f73e9abfe2b927a) == 1);
    const_dict_abeb2d870cc14c4adcaeeb4fd38f19b5 = _PyDict_NewPresized( 2 );
    const_str_digest_d004933ed189799ad05f99cdb9432454 = UNSTREAM_STRING_ASCII(&constant_bin[ 466940 ], 45, 0);
    PyDict_SetItem(const_dict_abeb2d870cc14c4adcaeeb4fd38f19b5, const_str_plain_help, const_str_digest_d004933ed189799ad05f99cdb9432454);
    PyDict_SetItem(const_dict_abeb2d870cc14c4adcaeeb4fd38f19b5, const_str_plain_required, Py_False);
    assert(PyDict_Size(const_dict_abeb2d870cc14c4adcaeeb4fd38f19b5) == 2);
    const_dict_23a941d8b98c01307bb30807993f0094 = _PyDict_NewPresized( 1 );
    PyDict_SetItem(const_dict_23a941d8b98c01307bb30807993f0094, const_str_plain_help, const_str_digest_1a35b59121aff4e01bb805eb3931039d);
    assert(PyDict_Size(const_dict_23a941d8b98c01307bb30807993f0094) == 1);
    const_str_plain__global_options = UNSTREAM_STRING_ASCII(&constant_bin[ 15447 ], 15, 1);
    const_str_digest_fea260a69cc56aa08f7a93bdb937d469 = UNSTREAM_STRING_ASCII(&constant_bin[ 466985 ], 45, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_common$utils(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_45358c333bb5ada0dd9f2cc1e406daf8;
static PyCodeObject *codeobj_b9db6048a651bf70fd9f87936ac65bfa;
static PyCodeObject *codeobj_6fb40e7d0196818dc10fc81240e9c41b;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_fea260a69cc56aa08f7a93bdb937d469;
    codeobj_45358c333bb5ada0dd9f2cc1e406daf8 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_cd490d2d9f1dc1107efb8ebacf09ba2a, const_tuple_empty, 0, 0, 0);
    codeobj_b9db6048a651bf70fd9f87936ac65bfa = MAKE_CODEOBJECT(module_filename_obj, 19, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_add_if, const_tuple_195643f31f8e0e9bc2daff3d06401aa5_tuple, 5, 0, 0);
    codeobj_6fb40e7d0196818dc10fc81240e9c41b = MAKE_CODEOBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_my_global_options, const_tuple_str_plain_func_str_plain_option_tuple, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_common$utils$$$function_1_my_global_options();


static PyObject *MAKE_FUNCTION_common$utils$$$function_2_add_if(PyObject *defaults);


// The module function definitions.
static PyObject *impl_common$utils$$$function_1_my_global_options(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    PyObject *var_option = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_6fb40e7d0196818dc10fc81240e9c41b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_6fb40e7d0196818dc10fc81240e9c41b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_6fb40e7d0196818dc10fc81240e9c41b, codeobj_6fb40e7d0196818dc10fc81240e9c41b, module_common$utils, sizeof(void *)+sizeof(void *));
    frame_6fb40e7d0196818dc10fc81240e9c41b = cache_frame_6fb40e7d0196818dc10fc81240e9c41b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6fb40e7d0196818dc10fc81240e9c41b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6fb40e7d0196818dc10fc81240e9c41b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_called_name_1 = (PyObject *)&PyReversed_Type;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain__global_options);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__global_options);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15679 ], 37, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 14;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_1;
        frame_6fb40e7d0196818dc10fc81240e9c41b->m_frame.f_lineno = 14;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oo";
                exception_lineno = 14;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_option;
            var_option = tmp_assign_source_3;
            Py_INCREF(var_option);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(var_option);
        tmp_called_name_2 = var_option;
        CHECK_OBJECT(par_func);
        tmp_args_element_name_2 = par_func;
        frame_6fb40e7d0196818dc10fc81240e9c41b->m_frame.f_lineno = 15;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_func;
            assert(old != NULL);
            par_func = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 14;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6fb40e7d0196818dc10fc81240e9c41b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6fb40e7d0196818dc10fc81240e9c41b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6fb40e7d0196818dc10fc81240e9c41b, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_6fb40e7d0196818dc10fc81240e9c41b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6fb40e7d0196818dc10fc81240e9c41b, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6fb40e7d0196818dc10fc81240e9c41b,
        type_description_1,
        par_func,
        var_option
    );


    // Release cached frame.
    if (frame_6fb40e7d0196818dc10fc81240e9c41b == cache_frame_6fb40e7d0196818dc10fc81240e9c41b) {
        Py_DECREF(frame_6fb40e7d0196818dc10fc81240e9c41b);
    }
    cache_frame_6fb40e7d0196818dc10fc81240e9c41b = NULL;

    assertFrameObject(frame_6fb40e7d0196818dc10fc81240e9c41b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    CHECK_OBJECT(par_func);
    tmp_return_value = par_func;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(common$utils$$$function_1_my_global_options);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)par_func);
    Py_DECREF(par_func);
    par_func = NULL;

    Py_XDECREF(var_option);
    var_option = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_func);
    par_func = NULL;

    Py_XDECREF(var_option);
    var_option = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(common$utils$$$function_1_my_global_options);
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


static PyObject *impl_common$utils$$$function_2_add_if(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dict = python_pars[0];
    PyObject *par_flag = python_pars[1];
    PyObject *par_key = python_pars[2];
    PyObject *par_true_val = python_pars[3];
    PyObject *par_false_val = python_pars[4];
    struct Nuitka_FrameObject *frame_b9db6048a651bf70fd9f87936ac65bfa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b9db6048a651bf70fd9f87936ac65bfa = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_b9db6048a651bf70fd9f87936ac65bfa, codeobj_b9db6048a651bf70fd9f87936ac65bfa, module_common$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_b9db6048a651bf70fd9f87936ac65bfa = cache_frame_b9db6048a651bf70fd9f87936ac65bfa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b9db6048a651bf70fd9f87936ac65bfa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b9db6048a651bf70fd9f87936ac65bfa) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_flag);
        tmp_compexpr_left_1 = par_flag;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_ass_subvalue_1;
            nuitka_bool tmp_condition_result_2;
            int tmp_truth_name_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            CHECK_OBJECT(par_flag);
            tmp_truth_name_1 = CHECK_IF_TRUE(par_flag);
            if (tmp_truth_name_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_1;
            } else {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            CHECK_OBJECT(par_true_val);
            tmp_ass_subvalue_1 = par_true_val;
            goto condexpr_end_1;
            condexpr_false_1:;
            CHECK_OBJECT(par_false_val);
            tmp_ass_subvalue_1 = par_false_val;
            condexpr_end_1:;
            CHECK_OBJECT(par_dict);
            tmp_ass_subscribed_1 = par_dict;
            CHECK_OBJECT(par_key);
            tmp_ass_subscript_1 = par_key;
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b9db6048a651bf70fd9f87936ac65bfa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b9db6048a651bf70fd9f87936ac65bfa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b9db6048a651bf70fd9f87936ac65bfa, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_b9db6048a651bf70fd9f87936ac65bfa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b9db6048a651bf70fd9f87936ac65bfa, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b9db6048a651bf70fd9f87936ac65bfa,
        type_description_1,
        par_dict,
        par_flag,
        par_key,
        par_true_val,
        par_false_val
    );


    // Release cached frame.
    if (frame_b9db6048a651bf70fd9f87936ac65bfa == cache_frame_b9db6048a651bf70fd9f87936ac65bfa) {
        Py_DECREF(frame_b9db6048a651bf70fd9f87936ac65bfa);
    }
    cache_frame_b9db6048a651bf70fd9f87936ac65bfa = NULL;

    assertFrameObject(frame_b9db6048a651bf70fd9f87936ac65bfa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(common$utils$$$function_2_add_if);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_dict);
    Py_DECREF(par_dict);
    CHECK_OBJECT(par_flag);
    Py_DECREF(par_flag);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_true_val);
    Py_DECREF(par_true_val);
    CHECK_OBJECT(par_false_val);
    Py_DECREF(par_false_val);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dict);
    Py_DECREF(par_dict);
    CHECK_OBJECT(par_flag);
    Py_DECREF(par_flag);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_true_val);
    Py_DECREF(par_true_val);
    CHECK_OBJECT(par_false_val);
    Py_DECREF(par_false_val);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_common$utils$$$function_1_my_global_options() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_common$utils$$$function_1_my_global_options,
        const_str_plain_my_global_options,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6fb40e7d0196818dc10fc81240e9c41b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_common$utils,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_common$utils$$$function_2_add_if(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_common$utils$$$function_2_add_if,
        const_str_plain_add_if,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b9db6048a651bf70fd9f87936ac65bfa,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_common$utils,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_common$utils =
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

function_impl_code functable_common$utils[] = {
    impl_common$utils$$$function_1_my_global_options,
    impl_common$utils$$$function_2_add_if,
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

    function_impl_code *current = functable_common$utils;
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

    if (offset > sizeof(functable_common$utils) || offset < 0) {
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
        functable_common$utils[offset],
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
        module_common$utils,
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
PyObject *modulecode_common$utils(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_common$utils;
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
    PRINT_STRING("common.utils: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("common.utils: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("common.utils: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initcommon$utils\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_common$utils = Py_InitModule4(
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
    mdef_common$utils.m_name = module_full_name;
    module_common$utils = PyModule_Create(&mdef_common$utils);
#endif

    moduledict_common$utils = MODULE_DICT(module_common$utils);

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
        moduledict_common$utils,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_common$utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_common$utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_common$utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_common$utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_common$utils);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_common$utils);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_45358c333bb5ada0dd9f2cc1e406daf8;
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
        UPDATE_STRING_DICT0(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_fea260a69cc56aa08f7a93bdb937d469;
        UPDATE_STRING_DICT0(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_45358c333bb5ada0dd9f2cc1e406daf8 = MAKE_MODULE_FRAME(codeobj_45358c333bb5ada0dd9f2cc1e406daf8, module_common$utils);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_45358c333bb5ada0dd9f2cc1e406daf8);
    assert(Py_REFCNT(frame_45358c333bb5ada0dd9f2cc1e406daf8) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_fea260a69cc56aa08f7a93bdb937d469;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_click;
        tmp_globals_name_1 = (PyObject *)moduledict_common$utils;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_45358c333bb5ada0dd9f2cc1e406daf8->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain_click, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_logging;
        tmp_globals_name_2 = (PyObject *)moduledict_common$utils;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_45358c333bb5ada0dd9f2cc1e406daf8->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain_logging);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_logging);
        }

        CHECK_OBJECT(tmp_mvar_value_3);
        tmp_called_instance_1 = tmp_mvar_value_3;
        frame_45358c333bb5ada0dd9f2cc1e406daf8->m_frame.f_lineno = 4;
        tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM(const_tuple_str_digest_b079a483a5bb3f12a8f5a2f221050499_tuple, 0));

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain_logger, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_name_2;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_name_3;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_name_4;
        PyObject *tmp_kw_name_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain_click);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_click);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 107 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 7;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_4;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_option);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = const_tuple_str_digest_4ee75140bb75c31243bac745a387ea27_tuple;
        tmp_kw_name_1 = PyDict_Copy(const_dict_abeb2d870cc14c4adcaeeb4fd38f19b5);
        frame_45358c333bb5ada0dd9f2cc1e406daf8->m_frame.f_lineno = 7;
        tmp_list_element_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = PyList_New(4);
        PyList_SET_ITEM(tmp_assign_source_7, 0, tmp_list_element_1);
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain_click);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_click);
        }

        if (tmp_mvar_value_5 == NULL) {
            Py_DECREF(tmp_assign_source_7);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 107 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 8;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_5;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_option);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_7);

            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = const_tuple_str_digest_b45d6b9ef249d45a07538bf430493b1c_tuple;
        tmp_kw_name_2 = PyDict_Copy(const_dict_ec450b71aaca01ea2f73e9abfe2b927a);
        frame_45358c333bb5ada0dd9f2cc1e406daf8->m_frame.f_lineno = 8;
        tmp_list_element_1 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_7);

            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_assign_source_7, 1, tmp_list_element_1);
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain_click);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_click);
        }

        if (tmp_mvar_value_6 == NULL) {
            Py_DECREF(tmp_assign_source_7);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 107 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 9;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_6;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_option);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_7);

            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_args_name_3 = const_tuple_str_digest_5e27bd184e7704d28068a4e961f7428f_tuple;
        tmp_kw_name_3 = PyDict_Copy(const_dict_23a941d8b98c01307bb30807993f0094);
        frame_45358c333bb5ada0dd9f2cc1e406daf8->m_frame.f_lineno = 9;
        tmp_list_element_1 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_kw_name_3);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_7);

            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_assign_source_7, 2, tmp_list_element_1);
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain_click);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_click);
        }

        if (tmp_mvar_value_7 == NULL) {
            Py_DECREF(tmp_assign_source_7);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 107 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 10;

            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_7;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_option);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_7);

            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_args_name_4 = const_tuple_str_digest_33baecf35ee849533870937382a7e644_tuple;
        tmp_kw_name_4 = PyDict_Copy(const_dict_5c4021b9a3d065db6e18337348e929d4);
        frame_45358c333bb5ada0dd9f2cc1e406daf8->m_frame.f_lineno = 10;
        tmp_list_element_1 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_kw_name_4);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_7);

            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_assign_source_7, 3, tmp_list_element_1);
        UPDATE_STRING_DICT1(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain__global_options, tmp_assign_source_7);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_45358c333bb5ada0dd9f2cc1e406daf8);
#endif
    popFrameStack();

    assertFrameObject(frame_45358c333bb5ada0dd9f2cc1e406daf8);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_45358c333bb5ada0dd9f2cc1e406daf8);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_45358c333bb5ada0dd9f2cc1e406daf8, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_45358c333bb5ada0dd9f2cc1e406daf8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_45358c333bb5ada0dd9f2cc1e406daf8, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_FUNCTION_common$utils$$$function_1_my_global_options();



        UPDATE_STRING_DICT1(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain_my_global_options, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_true_false_tuple;
        Py_INCREF(tmp_defaults_1);
        tmp_assign_source_9 = MAKE_FUNCTION_common$utils$$$function_2_add_if(tmp_defaults_1);



        UPDATE_STRING_DICT1(moduledict_common$utils, (Nuitka_StringObject *)const_str_plain_add_if, tmp_assign_source_9);
    }

    return module_common$utils;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
