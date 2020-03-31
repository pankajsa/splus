/* Generated code for Python module 'colorama.initialise'
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

/* The "_module_colorama$initialise" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_colorama$initialise;
PyDictObject *moduledict_colorama$initialise;

/* The declarations of module constants used, if any. */
static PyObject *const_tuple_b606439de20329d1b378141bdd1d0460_tuple;
static PyObject *const_str_plain_wrapped_stdout;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_contextmanager;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_colorama_text;
extern PyObject *const_str_plain_False;
static PyObject *const_str_digest_ccef2723d82eb6f96393b9a051c5f85c;
extern PyObject *const_str_plain_stream;
extern PyObject *const_int_pos_1;
extern PyObject *const_tuple_str_plain_AnsiToWin32_tuple;
static PyObject *const_str_plain_orig_stderr;
static PyObject *const_str_digest_e1cd464182fc089c26292e53b068db75;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_args;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_ansitowin32;
extern PyObject *const_tuple_str_plain_args_str_plain_kwargs_tuple;
static PyObject *const_str_plain_wrapped_stderr;
extern PyObject *const_str_plain_register;
static PyObject *const_str_plain_orig_stdout;
extern PyObject *const_str_plain_init;
static PyObject *const_str_plain_atexit_done;
extern PyObject *const_str_plain_autoreset;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_reinit;
extern PyObject *const_str_plain_should_wrap;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_convert;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_strip;
static PyObject *const_str_plain_wrap;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_AnsiToWin32;
extern PyObject *const_str_plain_reset_all;
extern PyObject *const_str_plain_contextlib;
extern PyObject *const_str_plain_stderr;
extern PyObject *const_str_plain_stdout;
static PyObject *const_str_plain_atexit;
extern PyObject *const_str_plain_deinit;
static PyObject *const_tuple_false_none_none_true_tuple;
static PyObject *const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple;
extern PyObject *const_str_plain_wrapper;
static PyObject *const_str_plain_wrap_stream;
static PyObject *const_str_digest_922f1f05229c346ca34fb7da4c918094;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___debug__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_tuple_b606439de20329d1b378141bdd1d0460_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_b606439de20329d1b378141bdd1d0460_tuple, 0, const_str_plain_autoreset); Py_INCREF(const_str_plain_autoreset);
    PyTuple_SET_ITEM(const_tuple_b606439de20329d1b378141bdd1d0460_tuple, 1, const_str_plain_convert); Py_INCREF(const_str_plain_convert);
    PyTuple_SET_ITEM(const_tuple_b606439de20329d1b378141bdd1d0460_tuple, 2, const_str_plain_strip); Py_INCREF(const_str_plain_strip);
    const_str_plain_wrap = UNSTREAM_STRING_ASCII(&constant_bin[ 6108 ], 4, 1);
    PyTuple_SET_ITEM(const_tuple_b606439de20329d1b378141bdd1d0460_tuple, 3, const_str_plain_wrap); Py_INCREF(const_str_plain_wrap);
    const_str_plain_wrapped_stdout = UNSTREAM_STRING_ASCII(&constant_bin[ 14640 ], 14, 1);
    const_str_digest_ccef2723d82eb6f96393b9a051c5f85c = UNSTREAM_STRING_ASCII(&constant_bin[ 451603 ], 44, 0);
    const_str_plain_orig_stderr = UNSTREAM_STRING_ASCII(&constant_bin[ 14461 ], 11, 1);
    const_str_digest_e1cd464182fc089c26292e53b068db75 = UNSTREAM_STRING_ASCII(&constant_bin[ 451647 ], 61, 0);
    const_str_plain_wrapped_stderr = UNSTREAM_STRING_ASCII(&constant_bin[ 14676 ], 14, 1);
    const_str_plain_orig_stdout = UNSTREAM_STRING_ASCII(&constant_bin[ 14395 ], 11, 1);
    const_str_plain_atexit_done = UNSTREAM_STRING_ASCII(&constant_bin[ 14494 ], 11, 1);
    const_str_plain_atexit = UNSTREAM_STRING_ASCII(&constant_bin[ 14494 ], 6, 1);
    const_tuple_false_none_none_true_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_false_none_none_true_tuple, 0, Py_False); Py_INCREF(Py_False);
    PyTuple_SET_ITEM(const_tuple_false_none_none_true_tuple, 1, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_false_none_none_true_tuple, 2, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_false_none_none_true_tuple, 3, Py_True); Py_INCREF(Py_True);
    const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple = PyTuple_New(6);
    PyTuple_SET_ITEM(const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple, 0, const_str_plain_stream); Py_INCREF(const_str_plain_stream);
    PyTuple_SET_ITEM(const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple, 1, const_str_plain_convert); Py_INCREF(const_str_plain_convert);
    PyTuple_SET_ITEM(const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple, 2, const_str_plain_strip); Py_INCREF(const_str_plain_strip);
    PyTuple_SET_ITEM(const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple, 3, const_str_plain_autoreset); Py_INCREF(const_str_plain_autoreset);
    PyTuple_SET_ITEM(const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple, 4, const_str_plain_wrap); Py_INCREF(const_str_plain_wrap);
    PyTuple_SET_ITEM(const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple, 5, const_str_plain_wrapper); Py_INCREF(const_str_plain_wrapper);
    const_str_plain_wrap_stream = UNSTREAM_STRING_ASCII(&constant_bin[ 14428 ], 11, 1);
    const_str_digest_922f1f05229c346ca34fb7da4c918094 = UNSTREAM_STRING_ASCII(&constant_bin[ 451708 ], 28, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_colorama$initialise(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_36654de1f2cc4f57453c82aa0e319ec0;
static PyCodeObject *codeobj_d80175b0c8eb83fd0d0af5ceea280a6e;
static PyCodeObject *codeobj_c0e4dee49373eb7d19151df0c7bbfbb7;
static PyCodeObject *codeobj_054877761f3d24f83f06f7f3fc8299cb;
static PyCodeObject *codeobj_8a2290929fd1ad8285a26f0655b001f9;
static PyCodeObject *codeobj_5b1a4e92abe65dbc8127a5f9593dafe2;
static PyCodeObject *codeobj_cc4a2a5140387fc274bc05bb1f8e5e02;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_e1cd464182fc089c26292e53b068db75;
    codeobj_36654de1f2cc4f57453c82aa0e319ec0 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_922f1f05229c346ca34fb7da4c918094, const_tuple_empty, 0, 0, 0);
    codeobj_d80175b0c8eb83fd0d0af5ceea280a6e = MAKE_CODEOBJECT(module_filename_obj, 58, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_colorama_text, const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, 0, 0);
    codeobj_c0e4dee49373eb7d19151df0c7bbfbb7 = MAKE_CODEOBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_deinit, const_tuple_empty, 0, 0, 0);
    codeobj_054877761f3d24f83f06f7f3fc8299cb = MAKE_CODEOBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_init, const_tuple_b606439de20329d1b378141bdd1d0460_tuple, 4, 0, 0);
    codeobj_8a2290929fd1ad8285a26f0655b001f9 = MAKE_CODEOBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_reinit, const_tuple_empty, 0, 0, 0);
    codeobj_5b1a4e92abe65dbc8127a5f9593dafe2 = MAKE_CODEOBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_reset_all, const_tuple_empty, 0, 0, 0);
    codeobj_cc4a2a5140387fc274bc05bb1f8e5e02 = MAKE_CODEOBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_wrap_stream, const_tuple_0b4df12de36c38c34b5cd3b0b8bfcd32_tuple, 5, 0, 0);
}

// The module function declarations.
static PyObject *colorama$initialise$$$function_4_colorama_text$$$genobj_1_colorama_text_maker(void);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_7_complex_call_helper_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_1_reset_all();


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_2_init(PyObject *defaults);


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_3_deinit();


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_4_colorama_text();


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_5_reinit();


static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_6_wrap_stream();


// The module function definitions.
static PyObject *impl_colorama$initialise$$$function_1_reset_all(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_5b1a4e92abe65dbc8127a5f9593dafe2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5b1a4e92abe65dbc8127a5f9593dafe2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_5b1a4e92abe65dbc8127a5f9593dafe2, codeobj_5b1a4e92abe65dbc8127a5f9593dafe2, module_colorama$initialise, 0);
    frame_5b1a4e92abe65dbc8127a5f9593dafe2 = cache_frame_5b1a4e92abe65dbc8127a5f9593dafe2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5b1a4e92abe65dbc8127a5f9593dafe2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5b1a4e92abe65dbc8127a5f9593dafe2) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_AnsiToWin32);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_AnsiToWin32);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 14356 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 19;

            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_AnsiToWin32);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_AnsiToWin32);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 14356 ], 33, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 20;

                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stdout);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_stdout);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 14389 ], 33, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 20;

                goto frame_exception_exit_1;
            }

            tmp_args_element_name_1 = tmp_mvar_value_3;
            frame_5b1a4e92abe65dbc8127a5f9593dafe2->m_frame.f_lineno = 20;
            tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto frame_exception_exit_1;
            }
            frame_5b1a4e92abe65dbc8127a5f9593dafe2->m_frame.f_lineno = 20;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_reset_all);
            Py_DECREF(tmp_called_instance_1);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;

                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5b1a4e92abe65dbc8127a5f9593dafe2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5b1a4e92abe65dbc8127a5f9593dafe2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5b1a4e92abe65dbc8127a5f9593dafe2, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_5b1a4e92abe65dbc8127a5f9593dafe2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5b1a4e92abe65dbc8127a5f9593dafe2, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5b1a4e92abe65dbc8127a5f9593dafe2,
        type_description_1
    );


    // Release cached frame.
    if (frame_5b1a4e92abe65dbc8127a5f9593dafe2 == cache_frame_5b1a4e92abe65dbc8127a5f9593dafe2) {
        Py_DECREF(frame_5b1a4e92abe65dbc8127a5f9593dafe2);
    }
    cache_frame_5b1a4e92abe65dbc8127a5f9593dafe2 = NULL;

    assertFrameObject(frame_5b1a4e92abe65dbc8127a5f9593dafe2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(colorama$initialise$$$function_1_reset_all);
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


static PyObject *impl_colorama$initialise$$$function_2_init(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_autoreset = python_pars[0];
    PyObject *par_convert = python_pars[1];
    PyObject *par_strip = python_pars[2];
    PyObject *par_wrap = python_pars[3];
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
    struct Nuitka_FrameObject *frame_054877761f3d24f83f06f7f3fc8299cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_054877761f3d24f83f06f7f3fc8299cb = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_054877761f3d24f83f06f7f3fc8299cb, codeobj_054877761f3d24f83f06f7f3fc8299cb, module_colorama$initialise, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_054877761f3d24f83f06f7f3fc8299cb = cache_frame_054877761f3d24f83f06f7f3fc8299cb;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_054877761f3d24f83f06f7f3fc8299cb);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_054877761f3d24f83f06f7f3fc8299cb) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_any_arg_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_capi_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_wrap);
        tmp_operand_name_1 = par_wrap;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_autoreset);
        tmp_list_element_1 = par_autoreset;
        tmp_any_arg_1 = PyList_New(3);
        Py_INCREF(tmp_list_element_1);
        PyList_SET_ITEM(tmp_any_arg_1, 0, tmp_list_element_1);
        CHECK_OBJECT(par_convert);
        tmp_list_element_1 = par_convert;
        Py_INCREF(tmp_list_element_1);
        PyList_SET_ITEM(tmp_any_arg_1, 1, tmp_list_element_1);
        CHECK_OBJECT(par_strip);
        tmp_list_element_1 = par_strip;
        Py_INCREF(tmp_list_element_1);
        PyList_SET_ITEM(tmp_any_arg_1, 2, tmp_list_element_1);
        tmp_capi_result_1 = BUILTIN_ANY(tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        assert(!(tmp_capi_result_1 == NULL));
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_capi_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_capi_result_1);

            exception_lineno = 25;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_capi_result_1);
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_ccef2723d82eb6f96393b9a051c5f85c;
            frame_054877761f3d24f83f06f7f3fc8299cb->m_frame.f_lineno = 26;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
            assert(!(tmp_raise_type_1 == NULL));
            exception_type = tmp_raise_type_1;
            exception_lineno = 26;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sys);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 676 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 31;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_stdout);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stdout, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sys);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 676 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 32;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_stderr);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stderr, tmp_assign_source_2);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sys);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 676 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 34;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_stdout);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = Py_None;
            UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stdout, tmp_assign_source_3);
        }
        goto branch_end_2;
        branch_no_2:;
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrap_stream);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_wrap_stream);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 14422 ], 33, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 38;
                type_description_1 = "oooo";
                goto try_except_handler_1;
            }

            tmp_called_name_1 = tmp_mvar_value_4;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stdout);

            if (unlikely(tmp_mvar_value_5 == NULL)) {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_stdout);
            }

            if (tmp_mvar_value_5 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 14389 ], 33, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 38;
                type_description_1 = "oooo";
                goto try_except_handler_1;
            }

            tmp_args_element_name_1 = tmp_mvar_value_5;
            CHECK_OBJECT(par_convert);
            tmp_args_element_name_2 = par_convert;
            CHECK_OBJECT(par_strip);
            tmp_args_element_name_3 = par_strip;
            CHECK_OBJECT(par_autoreset);
            tmp_args_element_name_4 = par_autoreset;
            CHECK_OBJECT(par_wrap);
            tmp_args_element_name_5 = par_wrap;
            frame_054877761f3d24f83f06f7f3fc8299cb->m_frame.f_lineno = 38;
            {
                PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
                tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_1, call_args);
            }

            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "oooo";
                goto try_except_handler_1;
            }
            assert(tmp_assign_unpack_1__assign_source == NULL);
            tmp_assign_unpack_1__assign_source = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            PyObject *tmp_mvar_value_6;
            CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
            tmp_assattr_name_1 = tmp_assign_unpack_1__assign_source;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys);

            if (unlikely(tmp_mvar_value_6 == NULL)) {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sys);
            }

            if (tmp_mvar_value_6 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 676 ], 25, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 37;
                type_description_1 = "oooo";
                goto try_except_handler_1;
            }

            tmp_assattr_target_1 = tmp_mvar_value_6;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_stdout, tmp_assattr_name_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "oooo";
                goto try_except_handler_1;
            }
        }
        goto try_end_1;
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

        Py_XDECREF(tmp_assign_unpack_1__assign_source);
        tmp_assign_unpack_1__assign_source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        try_end_1:;
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
            tmp_assign_source_5 = tmp_assign_unpack_1__assign_source;
            UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stdout, tmp_assign_source_5);
        }
        CHECK_OBJECT((PyObject *)tmp_assign_unpack_1__assign_source);
        Py_DECREF(tmp_assign_unpack_1__assign_source);
        tmp_assign_unpack_1__assign_source = NULL;

        branch_end_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sys);
        }

        if (tmp_mvar_value_7 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 676 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 39;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_7;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_stderr);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = Py_None;
            UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stderr, tmp_assign_source_6);
        }
        goto branch_end_3;
        branch_no_3:;
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrap_stream);

            if (unlikely(tmp_mvar_value_8 == NULL)) {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_wrap_stream);
            }

            if (tmp_mvar_value_8 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 14422 ], 33, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 43;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }

            tmp_called_name_2 = tmp_mvar_value_8;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stderr);

            if (unlikely(tmp_mvar_value_9 == NULL)) {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_stderr);
            }

            if (tmp_mvar_value_9 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 14455 ], 33, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 43;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }

            tmp_args_element_name_6 = tmp_mvar_value_9;
            CHECK_OBJECT(par_convert);
            tmp_args_element_name_7 = par_convert;
            CHECK_OBJECT(par_strip);
            tmp_args_element_name_8 = par_strip;
            CHECK_OBJECT(par_autoreset);
            tmp_args_element_name_9 = par_autoreset;
            CHECK_OBJECT(par_wrap);
            tmp_args_element_name_10 = par_wrap;
            frame_054877761f3d24f83f06f7f3fc8299cb->m_frame.f_lineno = 43;
            {
                PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10};
                tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_2, call_args);
            }

            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            assert(tmp_assign_unpack_2__assign_source == NULL);
            tmp_assign_unpack_2__assign_source = tmp_assign_source_7;
        }
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            PyObject *tmp_mvar_value_10;
            CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
            tmp_assattr_name_2 = tmp_assign_unpack_2__assign_source;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys);

            if (unlikely(tmp_mvar_value_10 == NULL)) {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sys);
            }

            if (tmp_mvar_value_10 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 676 ], 25, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 42;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }

            tmp_assattr_target_2 = tmp_mvar_value_10;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_stderr, tmp_assattr_name_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
        }
        goto try_end_2;
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

        Py_XDECREF(tmp_assign_unpack_2__assign_source);
        tmp_assign_unpack_2__assign_source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
            tmp_assign_source_8 = tmp_assign_unpack_2__assign_source;
            UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stderr, tmp_assign_source_8);
        }
        CHECK_OBJECT((PyObject *)tmp_assign_unpack_2__assign_source);
        Py_DECREF(tmp_assign_unpack_2__assign_source);
        tmp_assign_unpack_2__assign_source = NULL;

        branch_end_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_atexit_done);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_atexit_done);
        }

        if (tmp_mvar_value_11 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 14488 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_name_2 = tmp_mvar_value_11;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_11;
            PyObject *tmp_mvar_value_13;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_atexit);

            if (unlikely(tmp_mvar_value_12 == NULL)) {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_atexit);
            }

            if (tmp_mvar_value_12 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 14521 ], 28, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 47;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_12;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_register);
            if (tmp_called_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_reset_all);

            if (unlikely(tmp_mvar_value_13 == NULL)) {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_reset_all);
            }

            if (tmp_mvar_value_13 == NULL) {
                Py_DECREF(tmp_called_name_3);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 14549 ], 31, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 47;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_11 = tmp_mvar_value_13;
            frame_054877761f3d24f83f06f7f3fc8299cb->m_frame.f_lineno = 47;
            tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_11);
            Py_DECREF(tmp_called_name_3);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = Py_True;
            UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_atexit_done, tmp_assign_source_9);
        }
        branch_no_4:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_054877761f3d24f83f06f7f3fc8299cb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_054877761f3d24f83f06f7f3fc8299cb);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_054877761f3d24f83f06f7f3fc8299cb, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_054877761f3d24f83f06f7f3fc8299cb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_054877761f3d24f83f06f7f3fc8299cb, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_054877761f3d24f83f06f7f3fc8299cb,
        type_description_1,
        par_autoreset,
        par_convert,
        par_strip,
        par_wrap
    );


    // Release cached frame.
    if (frame_054877761f3d24f83f06f7f3fc8299cb == cache_frame_054877761f3d24f83f06f7f3fc8299cb) {
        Py_DECREF(frame_054877761f3d24f83f06f7f3fc8299cb);
    }
    cache_frame_054877761f3d24f83f06f7f3fc8299cb = NULL;

    assertFrameObject(frame_054877761f3d24f83f06f7f3fc8299cb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(colorama$initialise$$$function_2_init);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_autoreset);
    Py_DECREF(par_autoreset);
    CHECK_OBJECT(par_convert);
    Py_DECREF(par_convert);
    CHECK_OBJECT(par_strip);
    Py_DECREF(par_strip);
    CHECK_OBJECT(par_wrap);
    Py_DECREF(par_wrap);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_autoreset);
    Py_DECREF(par_autoreset);
    CHECK_OBJECT(par_convert);
    Py_DECREF(par_convert);
    CHECK_OBJECT(par_strip);
    Py_DECREF(par_strip);
    CHECK_OBJECT(par_wrap);
    Py_DECREF(par_wrap);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_colorama$initialise$$$function_3_deinit(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_c0e4dee49373eb7d19151df0c7bbfbb7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c0e4dee49373eb7d19151df0c7bbfbb7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_c0e4dee49373eb7d19151df0c7bbfbb7, codeobj_c0e4dee49373eb7d19151df0c7bbfbb7, module_colorama$initialise, 0);
    frame_c0e4dee49373eb7d19151df0c7bbfbb7 = cache_frame_c0e4dee49373eb7d19151df0c7bbfbb7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c0e4dee49373eb7d19151df0c7bbfbb7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c0e4dee49373eb7d19151df0c7bbfbb7) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stdout);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_stdout);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 14389 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 52;

            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_assattr_target_1;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stdout);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_stdout);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 14389 ], 33, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 53;

                goto frame_exception_exit_1;
            }

            tmp_assattr_name_1 = tmp_mvar_value_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sys);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 676 ], 25, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 53;

                goto frame_exception_exit_1;
            }

            tmp_assattr_target_1 = tmp_mvar_value_3;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_stdout, tmp_assattr_name_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stderr);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_stderr);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 14455 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 54;

            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_2 = tmp_mvar_value_4;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_assattr_target_2;
            PyObject *tmp_mvar_value_6;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stderr);

            if (unlikely(tmp_mvar_value_5 == NULL)) {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_stderr);
            }

            if (tmp_mvar_value_5 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 14455 ], 33, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 55;

                goto frame_exception_exit_1;
            }

            tmp_assattr_name_2 = tmp_mvar_value_5;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys);

            if (unlikely(tmp_mvar_value_6 == NULL)) {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sys);
            }

            if (tmp_mvar_value_6 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 676 ], 25, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 55;

                goto frame_exception_exit_1;
            }

            tmp_assattr_target_2 = tmp_mvar_value_6;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_stderr, tmp_assattr_name_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto frame_exception_exit_1;
            }
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c0e4dee49373eb7d19151df0c7bbfbb7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c0e4dee49373eb7d19151df0c7bbfbb7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c0e4dee49373eb7d19151df0c7bbfbb7, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_c0e4dee49373eb7d19151df0c7bbfbb7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c0e4dee49373eb7d19151df0c7bbfbb7, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c0e4dee49373eb7d19151df0c7bbfbb7,
        type_description_1
    );


    // Release cached frame.
    if (frame_c0e4dee49373eb7d19151df0c7bbfbb7 == cache_frame_c0e4dee49373eb7d19151df0c7bbfbb7) {
        Py_DECREF(frame_c0e4dee49373eb7d19151df0c7bbfbb7);
    }
    cache_frame_c0e4dee49373eb7d19151df0c7bbfbb7 = NULL;

    assertFrameObject(frame_c0e4dee49373eb7d19151df0c7bbfbb7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(colorama$initialise$$$function_3_deinit);
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


static PyObject *impl_colorama$initialise$$$function_4_colorama_text(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_args = PyCell_NEW1(python_pars[0]);
    struct Nuitka_CellObject *par_kwargs = PyCell_NEW1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = colorama$initialise$$$function_4_colorama_text$$$genobj_1_colorama_text_maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_args;
    Py_INCREF(((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0]);
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] = par_kwargs;
    Py_INCREF(((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1]);


    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(colorama$initialise$$$function_4_colorama_text);
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct colorama$initialise$$$function_4_colorama_text$$$genobj_1_colorama_text_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *colorama$initialise$$$function_4_colorama_text$$$genobj_1_colorama_text_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value ) {
    CHECK_OBJECT((PyObject *)generator);
    assert(Nuitka_Generator_Check( (PyObject *)generator ));

    // Heap access if used.
    struct colorama$initialise$$$function_4_colorama_text$$$genobj_1_colorama_text_locals *generator_heap = (struct colorama$initialise$$$function_4_colorama_text$$$genobj_1_colorama_text_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    MAKE_OR_REUSE_FRAME(cache_m_frame, codeobj_d80175b0c8eb83fd0d0af5ceea280a6e, module_colorama$initialise, sizeof(void *)+sizeof(void *));
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_init);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_init);
        }

        if (tmp_mvar_value_1 == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 14580 ], 26, 0);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 60;
            generator_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        if (PyCell_GET(generator->m_closure[0]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "args");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 60;
            generator_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg2_1 = PyCell_GET(generator->m_closure[0]);
        if (PyCell_GET(generator->m_closure[1]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "kwargs");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 60;
            generator_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = PyCell_GET(generator->m_closure[1]);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___internal__$$$function_7_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 60;
            generator_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_expression_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_expression_name_1 = Py_None;
        Py_INCREF(tmp_expression_name_1);
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 62;
            generator_heap->type_description_1 = "cc";
            goto try_except_handler_1;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception.
    generator_heap->exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(generator_heap->exception_preserved_type_1);
    generator_heap->exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(generator_heap->exception_preserved_value_1);
    generator_heap->exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(generator_heap->exception_preserved_tb_1);

    if (generator_heap->exception_keeper_tb_1 == NULL) {
        generator_heap->exception_keeper_tb_1 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        generator_heap->exception_keeper_tb_1 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_1, generator->m_frame, generator_heap->exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&generator_heap->exception_keeper_type_1, &generator_heap->exception_keeper_value_1, &generator_heap->exception_keeper_tb_1);
    PyException_SetTraceback(generator_heap->exception_keeper_value_1, (PyObject *)generator_heap->exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&generator_heap->exception_keeper_type_1, &generator_heap->exception_keeper_value_1, &generator_heap->exception_keeper_tb_1);
    // Tried code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_deinit);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_deinit);
        }

        if (tmp_mvar_value_2 == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 14606 ], 28, 0);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 64;
            generator_heap->type_description_1 = "cc";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        generator->m_frame->m_frame.f_lineno = 64;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 64;
            generator_heap->type_description_1 = "cc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 61;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "cc";
    goto try_except_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(colorama$initialise$$$function_4_colorama_text$$$genobj_1_colorama_text);
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(generator_heap->exception_preserved_type_1, generator_heap->exception_preserved_value_1, generator_heap->exception_preserved_tb_1);
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_deinit);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_deinit);
        }

        if (tmp_mvar_value_3 == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = UNSTREAM_STRING(&constant_bin[ 14606 ], 28, 0);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 64;
            generator_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        generator->m_frame->m_frame.f_lineno = 64;
        tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tmp_called_name_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 64;
            generator_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            generator_heap->type_description_1,
            generator->m_closure[0],
            generator->m_closure[1]
        );


        // Release cached frame.
        if (generator->m_frame == cache_m_frame) {
            Py_DECREF(generator->m_frame);
        }
        cache_m_frame = NULL;

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *colorama$initialise$$$function_4_colorama_text$$$genobj_1_colorama_text_maker(void) {
    return Nuitka_Generator_New(
        colorama$initialise$$$function_4_colorama_text$$$genobj_1_colorama_text_context,
        module_colorama$initialise,
        const_str_plain_colorama_text,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_d80175b0c8eb83fd0d0af5ceea280a6e,
        2,
        sizeof(struct colorama$initialise$$$function_4_colorama_text$$$genobj_1_colorama_text_locals)
    );
}


static PyObject *impl_colorama$initialise$$$function_5_reinit(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_8a2290929fd1ad8285a26f0655b001f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_8a2290929fd1ad8285a26f0655b001f9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_8a2290929fd1ad8285a26f0655b001f9, codeobj_8a2290929fd1ad8285a26f0655b001f9, module_colorama$initialise, 0);
    frame_8a2290929fd1ad8285a26f0655b001f9 = cache_frame_8a2290929fd1ad8285a26f0655b001f9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8a2290929fd1ad8285a26f0655b001f9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8a2290929fd1ad8285a26f0655b001f9) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stdout);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_wrapped_stdout);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 14634 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;

            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_assattr_target_1;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stdout);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_wrapped_stdout);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 14634 ], 36, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 69;

                goto frame_exception_exit_1;
            }

            tmp_assattr_name_1 = tmp_mvar_value_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sys);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 676 ], 25, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 69;

                goto frame_exception_exit_1;
            }

            tmp_assattr_target_1 = tmp_mvar_value_3;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_stdout, tmp_assattr_name_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stderr);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_wrapped_stderr);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 14670 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 70;

            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_2 = tmp_mvar_value_4;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_assattr_target_2;
            PyObject *tmp_mvar_value_6;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stderr);

            if (unlikely(tmp_mvar_value_5 == NULL)) {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_wrapped_stderr);
            }

            if (tmp_mvar_value_5 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 14670 ], 36, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 71;

                goto frame_exception_exit_1;
            }

            tmp_assattr_name_2 = tmp_mvar_value_5;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys);

            if (unlikely(tmp_mvar_value_6 == NULL)) {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sys);
            }

            if (tmp_mvar_value_6 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 676 ], 25, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 71;

                goto frame_exception_exit_1;
            }

            tmp_assattr_target_2 = tmp_mvar_value_6;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_stderr, tmp_assattr_name_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto frame_exception_exit_1;
            }
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8a2290929fd1ad8285a26f0655b001f9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8a2290929fd1ad8285a26f0655b001f9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8a2290929fd1ad8285a26f0655b001f9, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_8a2290929fd1ad8285a26f0655b001f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8a2290929fd1ad8285a26f0655b001f9, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8a2290929fd1ad8285a26f0655b001f9,
        type_description_1
    );


    // Release cached frame.
    if (frame_8a2290929fd1ad8285a26f0655b001f9 == cache_frame_8a2290929fd1ad8285a26f0655b001f9) {
        Py_DECREF(frame_8a2290929fd1ad8285a26f0655b001f9);
    }
    cache_frame_8a2290929fd1ad8285a26f0655b001f9 = NULL;

    assertFrameObject(frame_8a2290929fd1ad8285a26f0655b001f9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(colorama$initialise$$$function_5_reinit);
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


static PyObject *impl_colorama$initialise$$$function_6_wrap_stream(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[0];
    PyObject *par_convert = python_pars[1];
    PyObject *par_strip = python_pars[2];
    PyObject *par_autoreset = python_pars[3];
    PyObject *par_wrap = python_pars[4];
    PyObject *var_wrapper = NULL;
    struct Nuitka_FrameObject *frame_cc4a2a5140387fc274bc05bb1f8e5e02;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cc4a2a5140387fc274bc05bb1f8e5e02 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_cc4a2a5140387fc274bc05bb1f8e5e02, codeobj_cc4a2a5140387fc274bc05bb1f8e5e02, module_colorama$initialise, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_cc4a2a5140387fc274bc05bb1f8e5e02 = cache_frame_cc4a2a5140387fc274bc05bb1f8e5e02;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cc4a2a5140387fc274bc05bb1f8e5e02);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cc4a2a5140387fc274bc05bb1f8e5e02) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_wrap);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_wrap);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_AnsiToWin32);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_AnsiToWin32);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 14356 ], 33, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 76;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT(par_stream);
            tmp_tuple_element_1 = par_stream;
            tmp_args_name_1 = PyTuple_New(1);
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
            tmp_dict_key_1 = const_str_plain_convert;
            CHECK_OBJECT(par_convert);
            tmp_dict_value_1 = par_convert;
            tmp_kw_name_1 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = const_str_plain_strip;
            CHECK_OBJECT(par_strip);
            tmp_dict_value_2 = par_strip;
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = const_str_plain_autoreset;
            CHECK_OBJECT(par_autoreset);
            tmp_dict_value_3 = par_autoreset;
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            frame_cc4a2a5140387fc274bc05bb1f8e5e02->m_frame.f_lineno = 76;
            tmp_assign_source_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
            Py_DECREF(tmp_args_name_1);
            Py_DECREF(tmp_kw_name_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert(var_wrapper == NULL);
            var_wrapper = tmp_assign_source_1;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            int tmp_truth_name_2;
            CHECK_OBJECT(var_wrapper);
            tmp_called_instance_1 = var_wrapper;
            frame_cc4a2a5140387fc274bc05bb1f8e5e02->m_frame.f_lineno = 78;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_should_wrap);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
            if (tmp_truth_name_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_1);

                exception_lineno = 78;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF(tmp_call_result_1);
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                PyObject *tmp_assign_source_2;
                PyObject *tmp_source_name_1;
                CHECK_OBJECT(var_wrapper);
                tmp_source_name_1 = var_wrapper;
                tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_stream);
                if (tmp_assign_source_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 79;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_stream;
                    assert(old != NULL);
                    par_stream = tmp_assign_source_2;
                    Py_DECREF(old);
                }

            }
            branch_no_2:;
        }
        branch_no_1:;
    }
    if (par_stream == NULL) {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF(exception_type);
        exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "stream");
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 80;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_stream;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cc4a2a5140387fc274bc05bb1f8e5e02);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_cc4a2a5140387fc274bc05bb1f8e5e02);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cc4a2a5140387fc274bc05bb1f8e5e02);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cc4a2a5140387fc274bc05bb1f8e5e02, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_cc4a2a5140387fc274bc05bb1f8e5e02->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cc4a2a5140387fc274bc05bb1f8e5e02, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cc4a2a5140387fc274bc05bb1f8e5e02,
        type_description_1,
        par_stream,
        par_convert,
        par_strip,
        par_autoreset,
        par_wrap,
        var_wrapper
    );


    // Release cached frame.
    if (frame_cc4a2a5140387fc274bc05bb1f8e5e02 == cache_frame_cc4a2a5140387fc274bc05bb1f8e5e02) {
        Py_DECREF(frame_cc4a2a5140387fc274bc05bb1f8e5e02);
    }
    cache_frame_cc4a2a5140387fc274bc05bb1f8e5e02 = NULL;

    assertFrameObject(frame_cc4a2a5140387fc274bc05bb1f8e5e02);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(colorama$initialise$$$function_6_wrap_stream);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_stream);
    par_stream = NULL;

    Py_XDECREF(var_wrapper);
    var_wrapper = NULL;

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

    Py_XDECREF(par_stream);
    par_stream = NULL;

    Py_XDECREF(var_wrapper);
    var_wrapper = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(colorama$initialise$$$function_6_wrap_stream);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_convert);
    Py_DECREF(par_convert);
    CHECK_OBJECT(par_strip);
    Py_DECREF(par_strip);
    CHECK_OBJECT(par_autoreset);
    Py_DECREF(par_autoreset);
    CHECK_OBJECT(par_wrap);
    Py_DECREF(par_wrap);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_convert);
    Py_DECREF(par_convert);
    CHECK_OBJECT(par_strip);
    Py_DECREF(par_strip);
    CHECK_OBJECT(par_autoreset);
    Py_DECREF(par_autoreset);
    CHECK_OBJECT(par_wrap);
    Py_DECREF(par_wrap);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_1_reset_all() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function_1_reset_all,
        const_str_plain_reset_all,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5b1a4e92abe65dbc8127a5f9593dafe2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_colorama$initialise,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_2_init(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function_2_init,
        const_str_plain_init,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_054877761f3d24f83f06f7f3fc8299cb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_colorama$initialise,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_3_deinit() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function_3_deinit,
        const_str_plain_deinit,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c0e4dee49373eb7d19151df0c7bbfbb7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_colorama$initialise,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_4_colorama_text() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function_4_colorama_text,
        const_str_plain_colorama_text,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d80175b0c8eb83fd0d0af5ceea280a6e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_colorama$initialise,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_5_reinit() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function_5_reinit,
        const_str_plain_reinit,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8a2290929fd1ad8285a26f0655b001f9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_colorama$initialise,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_colorama$initialise$$$function_6_wrap_stream() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_colorama$initialise$$$function_6_wrap_stream,
        const_str_plain_wrap_stream,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cc4a2a5140387fc274bc05bb1f8e5e02,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_colorama$initialise,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_colorama$initialise =
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

function_impl_code functable_colorama$initialise[] = {
    impl_colorama$initialise$$$function_1_reset_all,
    impl_colorama$initialise$$$function_2_init,
    impl_colorama$initialise$$$function_3_deinit,
    impl_colorama$initialise$$$function_4_colorama_text,
    impl_colorama$initialise$$$function_5_reinit,
    impl_colorama$initialise$$$function_6_wrap_stream,
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

    function_impl_code *current = functable_colorama$initialise;
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

    if (offset > sizeof(functable_colorama$initialise) || offset < 0) {
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
        functable_colorama$initialise[offset],
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
        module_colorama$initialise,
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
PyObject *modulecode_colorama$initialise(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_colorama$initialise;
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
    PRINT_STRING("colorama.initialise: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("colorama.initialise: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("colorama.initialise: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initcolorama$initialise\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_colorama$initialise = Py_InitModule4(
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
    mdef_colorama$initialise.m_name = module_full_name;
    module_colorama$initialise = PyModule_Create(&mdef_colorama$initialise);
#endif

    moduledict_colorama$initialise = MODULE_DICT(module_colorama$initialise);

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
        moduledict_colorama$initialise,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_colorama$initialise,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_colorama$initialise,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_colorama$initialise,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_colorama$initialise,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_colorama$initialise);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_colorama$initialise);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_36654de1f2cc4f57453c82aa0e319ec0;
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
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_e1cd464182fc089c26292e53b068db75;
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_36654de1f2cc4f57453c82aa0e319ec0 = MAKE_MODULE_FRAME(codeobj_36654de1f2cc4f57453c82aa0e319ec0, module_colorama$initialise);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_36654de1f2cc4f57453c82aa0e319ec0);
    assert(Py_REFCNT(frame_36654de1f2cc4f57453c82aa0e319ec0) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_e1cd464182fc089c26292e53b068db75;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_atexit;
        tmp_globals_name_1 = (PyObject *)moduledict_colorama$initialise;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_36654de1f2cc4f57453c82aa0e319ec0->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_atexit, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_contextlib;
        tmp_globals_name_2 = (PyObject *)moduledict_colorama$initialise;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_36654de1f2cc4f57453c82aa0e319ec0->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_contextlib, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_sys;
        tmp_globals_name_3 = (PyObject *)moduledict_colorama$initialise;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_36654de1f2cc4f57453c82aa0e319ec0->m_frame.f_lineno = 4;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_ansitowin32;
        tmp_globals_name_4 = (PyObject *)moduledict_colorama$initialise;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_AnsiToWin32_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_36654de1f2cc4f57453c82aa0e319ec0->m_frame.f_lineno = 6;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
           tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_colorama$initialise,
                const_str_plain_AnsiToWin32,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_AnsiToWin32);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_AnsiToWin32, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_None;
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stdout, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = Py_None;
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_orig_stderr, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = Py_None;
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stdout, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = Py_None;
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrapped_stderr, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = Py_False;
        UPDATE_STRING_DICT0(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_atexit_done, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_colorama$initialise$$$function_1_reset_all();



        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_reset_all, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_false_none_none_true_tuple;
        Py_INCREF(tmp_defaults_1);
        tmp_assign_source_14 = MAKE_FUNCTION_colorama$initialise$$$function_2_init(tmp_defaults_1);



        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_init, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_FUNCTION_colorama$initialise$$$function_3_deinit();



        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_deinit, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_contextlib);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_contextlib);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 8053 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 58;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        tmp_args_element_name_1 = MAKE_FUNCTION_colorama$initialise$$$function_4_colorama_text();



        frame_36654de1f2cc4f57453c82aa0e319ec0->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_assign_source_16 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_contextmanager, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_colorama_text, tmp_assign_source_16);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_36654de1f2cc4f57453c82aa0e319ec0);
#endif
    popFrameStack();

    assertFrameObject(frame_36654de1f2cc4f57453c82aa0e319ec0);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_36654de1f2cc4f57453c82aa0e319ec0);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_36654de1f2cc4f57453c82aa0e319ec0, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_36654de1f2cc4f57453c82aa0e319ec0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_36654de1f2cc4f57453c82aa0e319ec0, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_colorama$initialise$$$function_5_reinit();



        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_reinit, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_colorama$initialise$$$function_6_wrap_stream();



        UPDATE_STRING_DICT1(moduledict_colorama$initialise, (Nuitka_StringObject *)const_str_plain_wrap_stream, tmp_assign_source_18);
    }

    return module_colorama$initialise;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
