/* Generated code for Python module 'urllib3.packages.backports.makefile'
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

/* The "_module_urllib3$packages$backports$makefile" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$packages$backports$makefile;
PyDictObject *moduledict_urllib3$packages$backports$makefile;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_b;
static PyObject *const_str_plain_BufferedRWPair;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_io;
extern PyObject *const_str_plain_buffer;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain__makefile_refs;
extern PyObject *const_str_plain_socket;
static PyObject *const_str_digest_397bad4f1f82195a3ed46c76f3f81db2;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_encoding;
static PyObject *const_str_plain_writing;
extern PyObject *const_str_plain_BufferedReader;
extern PyObject *const_str_plain_w;
extern PyObject *const_int_0;
static PyObject *const_set_401163d21cde59e9d84000b61cf44847;
static PyObject *const_str_digest_46ba7ada41bfc9e1958ff44bcc27a137;
static PyObject *const_str_digest_ffa90462ed056cbd39f2ebcac7b85df9;
static PyObject *const_str_plain_rawmode;
extern PyObject *const_int_neg_1;
static PyObject *const_tuple_str_plain_SocketIO_tuple;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_buffering;
extern PyObject *const_str_plain_text;
static PyObject *const_str_plain_DEFAULT_BUFFER_SIZE;
extern PyObject *const_str_plain_mode;
static PyObject *const_str_digest_3ba32eda37fbd9ee844096a9f9e3de70;
static PyObject *const_str_plain_SocketIO;
extern PyObject *const_str_plain_TextIOWrapper;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_backport_makefile;
static PyObject *const_str_plain_binary;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_BufferedWriter;
extern PyObject *const_str_plain_newline;
static PyObject *const_tuple_cbca45272716ffce2b2760b545c987c0_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_782a3f0e2f8a7742fb10a727995e1a91;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_cf4af7845cfa9f5a0e15afd29386c674;
static PyObject *const_tuple_str_plain_r_none_none_none_none_tuple;
static PyObject *const_str_plain_reading;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_errors;
extern PyObject *const_str_plain_raw;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain_BufferedRWPair = UNSTREAM_STRING_ASCII(&constant_bin[ 726801 ], 14, 1);
    const_str_digest_397bad4f1f82195a3ed46c76f3f81db2 = UNSTREAM_STRING_ASCII(&constant_bin[ 726815 ], 33, 0);
    const_str_plain_writing = UNSTREAM_STRING_ASCII(&constant_bin[ 359876 ], 7, 1);
    const_set_401163d21cde59e9d84000b61cf44847 = PySet_New(NULL);
    PySet_Add(const_set_401163d21cde59e9d84000b61cf44847, const_str_plain_r);
    PySet_Add(const_set_401163d21cde59e9d84000b61cf44847, const_str_plain_b);
    PySet_Add(const_set_401163d21cde59e9d84000b61cf44847, const_str_plain_w);
    assert(PySet_Size(const_set_401163d21cde59e9d84000b61cf44847) == 3);
    const_str_digest_46ba7ada41bfc9e1958ff44bcc27a137 = UNSTREAM_STRING_ASCII(&constant_bin[ 726848 ], 44, 0);
    const_str_digest_ffa90462ed056cbd39f2ebcac7b85df9 = UNSTREAM_STRING_ASCII(&constant_bin[ 726892 ], 38, 0);
    const_str_plain_rawmode = UNSTREAM_STRING_ASCII(&constant_bin[ 726930 ], 7, 1);
    const_tuple_str_plain_SocketIO_tuple = PyTuple_New(1);
    const_str_plain_SocketIO = UNSTREAM_STRING_ASCII(&constant_bin[ 31140 ], 8, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_SocketIO_tuple, 0, const_str_plain_SocketIO); Py_INCREF(const_str_plain_SocketIO);
    const_str_plain_DEFAULT_BUFFER_SIZE = UNSTREAM_STRING_ASCII(&constant_bin[ 726937 ], 19, 1);
    const_str_digest_3ba32eda37fbd9ee844096a9f9e3de70 = UNSTREAM_STRING_ASCII(&constant_bin[ 726956 ], 77, 0);
    const_str_plain_binary = UNSTREAM_STRING_ASCII(&constant_bin[ 6074 ], 6, 1);
    const_tuple_cbca45272716ffce2b2760b545c987c0_tuple = PyTuple_New(13);
    PyTuple_SET_ITEM(const_tuple_cbca45272716ffce2b2760b545c987c0_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_cbca45272716ffce2b2760b545c987c0_tuple, 1, const_str_plain_mode); Py_INCREF(const_str_plain_mode);
    PyTuple_SET_ITEM(const_tuple_cbca45272716ffce2b2760b545c987c0_tuple, 2, const_str_plain_buffering); Py_INCREF(const_str_plain_buffering);
    PyTuple_SET_ITEM(const_tuple_cbca45272716ffce2b2760b545c987c0_tuple, 3, const_str_plain_encoding); Py_INCREF(const_str_plain_encoding);
    PyTuple_SET_ITEM(const_tuple_cbca45272716ffce2b2760b545c987c0_tuple, 4, const_str_plain_errors); Py_INCREF(const_str_plain_errors);
    PyTuple_SET_ITEM(const_tuple_cbca45272716ffce2b2760b545c987c0_tuple, 5, const_str_plain_newline); Py_INCREF(const_str_plain_newline);
    PyTuple_SET_ITEM(const_tuple_cbca45272716ffce2b2760b545c987c0_tuple, 6, const_str_plain_writing); Py_INCREF(const_str_plain_writing);
    const_str_plain_reading = UNSTREAM_STRING_ASCII(&constant_bin[ 21345 ], 7, 1);
    PyTuple_SET_ITEM(const_tuple_cbca45272716ffce2b2760b545c987c0_tuple, 7, const_str_plain_reading); Py_INCREF(const_str_plain_reading);
    PyTuple_SET_ITEM(const_tuple_cbca45272716ffce2b2760b545c987c0_tuple, 8, const_str_plain_binary); Py_INCREF(const_str_plain_binary);
    PyTuple_SET_ITEM(const_tuple_cbca45272716ffce2b2760b545c987c0_tuple, 9, const_str_plain_rawmode); Py_INCREF(const_str_plain_rawmode);
    PyTuple_SET_ITEM(const_tuple_cbca45272716ffce2b2760b545c987c0_tuple, 10, const_str_plain_raw); Py_INCREF(const_str_plain_raw);
    PyTuple_SET_ITEM(const_tuple_cbca45272716ffce2b2760b545c987c0_tuple, 11, const_str_plain_buffer); Py_INCREF(const_str_plain_buffer);
    PyTuple_SET_ITEM(const_tuple_cbca45272716ffce2b2760b545c987c0_tuple, 12, const_str_plain_text); Py_INCREF(const_str_plain_text);
    const_str_digest_782a3f0e2f8a7742fb10a727995e1a91 = UNSTREAM_STRING_ASCII(&constant_bin[ 727033 ], 157, 0);
    const_str_digest_cf4af7845cfa9f5a0e15afd29386c674 = UNSTREAM_STRING_ASCII(&constant_bin[ 727190 ], 58, 0);
    const_tuple_str_plain_r_none_none_none_none_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_str_plain_r_none_none_none_none_tuple, 0, const_str_plain_r); Py_INCREF(const_str_plain_r);
    PyTuple_SET_ITEM(const_tuple_str_plain_r_none_none_none_none_tuple, 1, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_str_plain_r_none_none_none_none_tuple, 2, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_str_plain_r_none_none_none_none_tuple, 3, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_str_plain_r_none_none_none_none_tuple, 4, Py_None); Py_INCREF(Py_None);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$packages$backports$makefile(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_49338f66be75f8efc117ef1c0bf39e24;
static PyCodeObject *codeobj_66bc6149357336b0f583c5c82e360ffa;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_3ba32eda37fbd9ee844096a9f9e3de70;
    codeobj_49338f66be75f8efc117ef1c0bf39e24 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_46ba7ada41bfc9e1958ff44bcc27a137, const_tuple_empty, 0, 0, 0);
    codeobj_66bc6149357336b0f583c5c82e360ffa = MAKE_CODEOBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_backport_makefile, const_tuple_cbca45272716ffce2b2760b545c987c0_tuple, 6, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_urllib3$packages$backports$makefile$$$function_1_backport_makefile(PyObject *defaults);


// The module function definitions.
static PyObject *impl_urllib3$packages$backports$makefile$$$function_1_backport_makefile(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_mode = python_pars[1];
    PyObject *par_buffering = python_pars[2];
    PyObject *par_encoding = python_pars[3];
    PyObject *par_errors = python_pars[4];
    PyObject *par_newline = python_pars[5];
    nuitka_bool var_writing = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_reading = NULL;
    nuitka_bool var_binary = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_rawmode = NULL;
    PyObject *var_raw = NULL;
    PyObject *var_buffer = NULL;
    PyObject *var_text = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_66bc6149357336b0f583c5c82e360ffa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_66bc6149357336b0f583c5c82e360ffa = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_66bc6149357336b0f583c5c82e360ffa, codeobj_66bc6149357336b0f583c5c82e360ffa, module_urllib3$packages$backports$makefile, sizeof(nuitka_bool)+sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_66bc6149357336b0f583c5c82e360ffa = cache_frame_66bc6149357336b0f583c5c82e360ffa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_66bc6149357336b0f583c5c82e360ffa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_66bc6149357336b0f583c5c82e360ffa) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_set_arg_1;
        CHECK_OBJECT(par_mode);
        tmp_set_arg_1 = par_mode;
        tmp_compexpr_left_1 = PySet_New(tmp_set_arg_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = PySet_New(const_set_401163d21cde59e9d84000b61cf44847);
        tmp_operand_name_1 = RICH_COMPARE_LTE_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_1;
            tmp_left_name_1 = const_str_digest_ffa90462ed056cbd39f2ebcac7b85df9;
            CHECK_OBJECT(par_mode);
            tmp_tuple_element_1 = par_mode;
            tmp_right_name_1 = PyTuple_New(1);
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
            Py_DECREF(tmp_right_name_1);
            if (tmp_make_exception_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_1 = "ooooooboboooo";
                goto frame_exception_exit_1;
            }
            frame_66bc6149357336b0f583c5c82e360ffa->m_frame.f_lineno = 20;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
            Py_DECREF(tmp_make_exception_arg_1);
            assert(!(tmp_raise_type_1 == NULL));
            exception_type = tmp_raise_type_1;
            exception_lineno = 20;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_assign_source_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = const_str_plain_w;
        CHECK_OBJECT(par_mode);
        tmp_compexpr_right_2 = par_mode;
        tmp_res = PySequence_Contains(tmp_compexpr_right_2, tmp_compexpr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        var_writing = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_operand_name_2;
        tmp_compexpr_left_3 = const_str_plain_r;
        CHECK_OBJECT(par_mode);
        tmp_compexpr_right_3 = par_mode;
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 1) ? Py_True : Py_False;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        assert(var_writing != NUITKA_BOOL_UNASSIGNED);
        tmp_operand_name_2 = (var_writing == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        assert(!(tmp_res == -1));
        tmp_or_right_value_1 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_assign_source_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_2 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_reading == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_reading = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_3;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        CHECK_OBJECT(var_reading);
        tmp_or_left_value_2 = var_reading;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        assert(var_writing != NUITKA_BOOL_UNASSIGNED);
        tmp_or_right_value_2 = (var_writing == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
        tmp_operand_name_3 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_operand_name_3 = tmp_or_left_value_2;
        or_end_2:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_raise_type_2;
            tmp_raise_type_2 = PyExc_AssertionError;
            exception_type = tmp_raise_type_2;
            Py_INCREF(tmp_raise_type_2);
            exception_lineno = 25;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_assign_source_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = const_str_plain_b;
        CHECK_OBJECT(par_mode);
        tmp_compexpr_right_4 = par_mode;
        tmp_res = PySequence_Contains(tmp_compexpr_right_4, tmp_compexpr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        var_binary = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_str_empty;
        assert(var_rawmode == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_rawmode = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_reading);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_reading);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = const_str_plain_r;
            {
                PyObject *old = var_rawmode;
                assert(old != NULL);
                var_rawmode = tmp_assign_source_5;
                Py_INCREF(var_rawmode);
                Py_DECREF(old);
            }

        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        assert(var_writing != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_4 = var_writing;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT(var_rawmode);
            tmp_left_name_2 = var_rawmode;
            tmp_right_name_2 = const_str_plain_w;
            tmp_result = BINARY_OPERATION_ADD_UNICODE_UNICODE_INPLACE(&tmp_left_name_2, tmp_right_name_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_1 = "ooooooboboooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_6 = tmp_left_name_2;
            var_rawmode = tmp_assign_source_6;

        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain_SocketIO);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketIO);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 31134 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 32;
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_args_element_name_1 = par_self;
        if (var_rawmode == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "rawmode");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 32;
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = var_rawmode;
        frame_66bc6149357336b0f583c5c82e360ffa->m_frame.f_lineno = 32;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }
        assert(var_raw == NULL);
        var_raw = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__makefile_refs);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_attr_1__start == NULL);
        tmp_inplace_assign_attr_1__start = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT(tmp_inplace_assign_attr_1__start);
        tmp_left_name_3 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_3 = const_int_pos_1;
        tmp_assign_source_9 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_3, tmp_right_name_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooooboboooo";
            goto try_except_handler_2;
        }
        assert(tmp_inplace_assign_attr_1__end == NULL);
        tmp_inplace_assign_attr_1__end = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_attr_1__end);
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__makefile_refs, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooooboboooo";
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
    Py_DECREF(tmp_inplace_assign_attr_1__end);
    tmp_inplace_assign_attr_1__end = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
    Py_DECREF(tmp_inplace_assign_attr_1__start);
    tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
    Py_DECREF(tmp_inplace_assign_attr_1__end);
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
    Py_DECREF(tmp_inplace_assign_attr_1__start);
    tmp_inplace_assign_attr_1__start = NULL;

    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT(par_buffering);
        tmp_compexpr_left_5 = par_buffering;
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_5 = (tmp_compexpr_left_5 == tmp_compexpr_right_5) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = const_int_neg_1;
            {
                PyObject *old = par_buffering;
                assert(old != NULL);
                par_buffering = tmp_assign_source_10;
                Py_INCREF(par_buffering);
                Py_DECREF(old);
            }

        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT(par_buffering);
        tmp_compexpr_left_6 = par_buffering;
        tmp_compexpr_right_6 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain_io);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_io);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 5866 ], 24, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 37;
                type_description_1 = "ooooooboboooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_DEFAULT_BUFFER_SIZE);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_1 = "ooooooboboooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_buffering;
                assert(old != NULL);
                par_buffering = tmp_assign_source_11;
                Py_DECREF(old);
            }

        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        if (par_buffering == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "buffering");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 38;
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_7 = par_buffering;
        tmp_compexpr_right_7 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_7, tmp_compexpr_right_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_operand_name_4;
            assert(var_binary != NUITKA_BOOL_UNASSIGNED);
            tmp_operand_name_4 = (var_binary == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
            assert(!(tmp_res == -1));
            tmp_condition_result_8 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            branch_yes_8:;
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_make_exception_arg_2;
                tmp_make_exception_arg_2 = const_str_digest_397bad4f1f82195a3ed46c76f3f81db2;
                frame_66bc6149357336b0f583c5c82e360ffa->m_frame.f_lineno = 40;
                tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
                assert(!(tmp_raise_type_3 == NULL));
                exception_type = tmp_raise_type_3;
                exception_lineno = 40;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooboboooo";
                goto frame_exception_exit_1;
            }
            branch_no_8:;
        }
        CHECK_OBJECT(var_raw);
        tmp_return_value = var_raw;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_reading);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_reading);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        assert(var_writing != NUITKA_BOOL_UNASSIGNED);
        tmp_and_right_value_1 = var_writing;
        tmp_condition_result_9 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_9 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
        branch_yes_9:;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain_io);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_io);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 5866 ], 24, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 43;
                type_description_1 = "ooooooboboooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_BufferedRWPair);
            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_1 = "ooooooboboooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_raw);
            tmp_args_element_name_3 = var_raw;
            CHECK_OBJECT(var_raw);
            tmp_args_element_name_4 = var_raw;
            if (par_buffering == NULL) {
                Py_DECREF(tmp_called_name_2);
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "buffering");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 43;
                type_description_1 = "ooooooboboooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_5 = par_buffering;
            frame_66bc6149357336b0f583c5c82e360ffa->m_frame.f_lineno = 43;
            {
                PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
                tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_2, call_args);
            }

            Py_DECREF(tmp_called_name_2);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_1 = "ooooooboboooo";
                goto frame_exception_exit_1;
            }
            assert(var_buffer == NULL);
            var_buffer = tmp_assign_source_12;
        }
        goto branch_end_9;
        branch_no_9:;
        {
            nuitka_bool tmp_condition_result_10;
            int tmp_truth_name_3;
            CHECK_OBJECT(var_reading);
            tmp_truth_name_3 = CHECK_IF_TRUE(var_reading);
            if (tmp_truth_name_3 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_1 = "ooooooboboooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_10 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
            branch_yes_10:;
            {
                PyObject *tmp_assign_source_13;
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_4;
                PyObject *tmp_mvar_value_4;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_args_element_name_7;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain_io);

                if (unlikely(tmp_mvar_value_4 == NULL)) {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_io);
                }

                if (tmp_mvar_value_4 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 5866 ], 24, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 45;
                    type_description_1 = "ooooooboboooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_4 = tmp_mvar_value_4;
                tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_BufferedReader);
                if (tmp_called_name_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 45;
                    type_description_1 = "ooooooboboooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(var_raw);
                tmp_args_element_name_6 = var_raw;
                if (par_buffering == NULL) {
                    Py_DECREF(tmp_called_name_3);
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF(exception_type);
                    exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "buffering");
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 45;
                    type_description_1 = "ooooooboboooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_7 = par_buffering;
                frame_66bc6149357336b0f583c5c82e360ffa->m_frame.f_lineno = 45;
                {
                    PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7};
                    tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
                }

                Py_DECREF(tmp_called_name_3);
                if (tmp_assign_source_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 45;
                    type_description_1 = "ooooooboboooo";
                    goto frame_exception_exit_1;
                }
                assert(var_buffer == NULL);
                var_buffer = tmp_assign_source_13;
            }
            goto branch_end_10;
            branch_no_10:;
            {
                nuitka_bool tmp_condition_result_11;
                PyObject *tmp_operand_name_5;
                assert(var_writing != NUITKA_BOOL_UNASSIGNED);
                tmp_operand_name_5 = (var_writing == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
                tmp_res = CHECK_IF_TRUE(tmp_operand_name_5);
                assert(!(tmp_res == -1));
                tmp_condition_result_11 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_11;
                } else {
                    goto branch_no_11;
                }
                branch_yes_11:;
                {
                    PyObject *tmp_raise_type_4;
                    tmp_raise_type_4 = PyExc_AssertionError;
                    exception_type = tmp_raise_type_4;
                    Py_INCREF(tmp_raise_type_4);
                    exception_lineno = 47;
                    RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooooooboboooo";
                    goto frame_exception_exit_1;
                }
                branch_no_11:;
            }
            {
                PyObject *tmp_assign_source_14;
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_5;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_args_element_name_9;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain_io);

                if (unlikely(tmp_mvar_value_5 == NULL)) {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_io);
                }

                if (tmp_mvar_value_5 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 5866 ], 24, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 48;
                    type_description_1 = "ooooooboboooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_5 = tmp_mvar_value_5;
                tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_BufferedWriter);
                if (tmp_called_name_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 48;
                    type_description_1 = "ooooooboboooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(var_raw);
                tmp_args_element_name_8 = var_raw;
                if (par_buffering == NULL) {
                    Py_DECREF(tmp_called_name_4);
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF(exception_type);
                    exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "buffering");
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 48;
                    type_description_1 = "ooooooboboooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_9 = par_buffering;
                frame_66bc6149357336b0f583c5c82e360ffa->m_frame.f_lineno = 48;
                {
                    PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9};
                    tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
                }

                Py_DECREF(tmp_called_name_4);
                if (tmp_assign_source_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 48;
                    type_description_1 = "ooooooboboooo";
                    goto frame_exception_exit_1;
                }
                assert(var_buffer == NULL);
                var_buffer = tmp_assign_source_14;
            }
            branch_end_10:;
        }
        branch_end_9:;
    }
    {
        nuitka_bool tmp_condition_result_12;
        assert(var_binary != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_12 = var_binary;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
        branch_yes_12:;
        if (var_buffer == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "buffer");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 50;
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }

        tmp_return_value = var_buffer;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_12:;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain_io);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_io);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 5866 ], 24, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 51;
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_6;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_TextIOWrapper);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }
        if (var_buffer == NULL) {
            Py_DECREF(tmp_called_name_5);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "buffer");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 51;
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_10 = var_buffer;
        CHECK_OBJECT(par_encoding);
        tmp_args_element_name_11 = par_encoding;
        CHECK_OBJECT(par_errors);
        tmp_args_element_name_12 = par_errors;
        CHECK_OBJECT(par_newline);
        tmp_args_element_name_13 = par_newline;
        frame_66bc6149357336b0f583c5c82e360ffa->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = {tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13};
            tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_5, call_args);
        }

        Py_DECREF(tmp_called_name_5);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }
        assert(var_text == NULL);
        var_text = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_mode);
        tmp_assattr_name_2 = par_mode;
        CHECK_OBJECT(var_text);
        tmp_assattr_target_2 = var_text;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_mode, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooboboooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_66bc6149357336b0f583c5c82e360ffa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_66bc6149357336b0f583c5c82e360ffa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_66bc6149357336b0f583c5c82e360ffa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_66bc6149357336b0f583c5c82e360ffa, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_66bc6149357336b0f583c5c82e360ffa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_66bc6149357336b0f583c5c82e360ffa, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_66bc6149357336b0f583c5c82e360ffa,
        type_description_1,
        par_self,
        par_mode,
        par_buffering,
        par_encoding,
        par_errors,
        par_newline,
        (int)var_writing,
        var_reading,
        (int)var_binary,
        var_rawmode,
        var_raw,
        var_buffer,
        var_text
    );


    // Release cached frame.
    if (frame_66bc6149357336b0f583c5c82e360ffa == cache_frame_66bc6149357336b0f583c5c82e360ffa) {
        Py_DECREF(frame_66bc6149357336b0f583c5c82e360ffa);
    }
    cache_frame_66bc6149357336b0f583c5c82e360ffa = NULL;

    assertFrameObject(frame_66bc6149357336b0f583c5c82e360ffa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_text);
    tmp_return_value = var_text;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$packages$backports$makefile$$$function_1_backport_makefile);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_buffering);
    par_buffering = NULL;

    CHECK_OBJECT((PyObject *)var_reading);
    Py_DECREF(var_reading);
    var_reading = NULL;

    Py_XDECREF(var_rawmode);
    var_rawmode = NULL;

    CHECK_OBJECT((PyObject *)var_raw);
    Py_DECREF(var_raw);
    var_raw = NULL;

    Py_XDECREF(var_buffer);
    var_buffer = NULL;

    Py_XDECREF(var_text);
    var_text = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_buffering);
    par_buffering = NULL;

    Py_XDECREF(var_reading);
    var_reading = NULL;

    Py_XDECREF(var_rawmode);
    var_rawmode = NULL;

    Py_XDECREF(var_raw);
    var_raw = NULL;

    Py_XDECREF(var_buffer);
    var_buffer = NULL;

    Py_XDECREF(var_text);
    var_text = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$packages$backports$makefile$$$function_1_backport_makefile);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);
    CHECK_OBJECT(par_newline);
    Py_DECREF(par_newline);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_mode);
    Py_DECREF(par_mode);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);
    CHECK_OBJECT(par_newline);
    Py_DECREF(par_newline);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$backports$makefile$$$function_1_backport_makefile(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$backports$makefile$$$function_1_backport_makefile,
        const_str_plain_backport_makefile,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_66bc6149357336b0f583c5c82e360ffa,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$backports$makefile,
        const_str_digest_cf4af7845cfa9f5a0e15afd29386c674,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$packages$backports$makefile =
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

function_impl_code functable_urllib3$packages$backports$makefile[] = {
    impl_urllib3$packages$backports$makefile$$$function_1_backport_makefile,
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

    function_impl_code *current = functable_urllib3$packages$backports$makefile;
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

    if (offset > sizeof(functable_urllib3$packages$backports$makefile) || offset < 0) {
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
        functable_urllib3$packages$backports$makefile[offset],
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
        module_urllib3$packages$backports$makefile,
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
PyObject *modulecode_urllib3$packages$backports$makefile(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_urllib3$packages$backports$makefile;
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
    PRINT_STRING("urllib3.packages.backports.makefile: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("urllib3.packages.backports.makefile: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("urllib3.packages.backports.makefile: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initurllib3$packages$backports$makefile\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$packages$backports$makefile = Py_InitModule4(
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
    mdef_urllib3$packages$backports$makefile.m_name = module_full_name;
    module_urllib3$packages$backports$makefile = PyModule_Create(&mdef_urllib3$packages$backports$makefile);
#endif

    moduledict_urllib3$packages$backports$makefile = MODULE_DICT(module_urllib3$packages$backports$makefile);

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
        moduledict_urllib3$packages$backports$makefile,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_urllib3$packages$backports$makefile,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_urllib3$packages$backports$makefile,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$packages$backports$makefile,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$packages$backports$makefile,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_urllib3$packages$backports$makefile);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_urllib3$packages$backports$makefile);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_49338f66be75f8efc117ef1c0bf39e24;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_782a3f0e2f8a7742fb10a727995e1a91;
        UPDATE_STRING_DICT0(moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_3ba32eda37fbd9ee844096a9f9e3de70;
        UPDATE_STRING_DICT0(moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_49338f66be75f8efc117ef1c0bf39e24 = MAKE_MODULE_FRAME(codeobj_49338f66be75f8efc117ef1c0bf39e24, module_urllib3$packages$backports$makefile);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_49338f66be75f8efc117ef1c0bf39e24);
    assert(Py_REFCNT(frame_49338f66be75f8efc117ef1c0bf39e24) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_3ba32eda37fbd9ee844096a9f9e3de70;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_io;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$packages$backports$makefile;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_49338f66be75f8efc117ef1c0bf39e24->m_frame.f_lineno = 9;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain_io, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_socket;
        tmp_globals_name_2 = (PyObject *)moduledict_urllib3$packages$backports$makefile;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_SocketIO_tuple;
        tmp_level_name_2 = const_int_0;
        frame_49338f66be75f8efc117ef1c0bf39e24->m_frame.f_lineno = 11;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_SocketIO);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain_SocketIO, tmp_assign_source_5);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_49338f66be75f8efc117ef1c0bf39e24);
#endif
    popFrameStack();

    assertFrameObject(frame_49338f66be75f8efc117ef1c0bf39e24);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_49338f66be75f8efc117ef1c0bf39e24);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_49338f66be75f8efc117ef1c0bf39e24, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_49338f66be75f8efc117ef1c0bf39e24->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_49338f66be75f8efc117ef1c0bf39e24, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_str_plain_r_none_none_none_none_tuple;
        Py_INCREF(tmp_defaults_1);
        tmp_assign_source_6 = MAKE_FUNCTION_urllib3$packages$backports$makefile$$$function_1_backport_makefile(tmp_defaults_1);



        UPDATE_STRING_DICT1(moduledict_urllib3$packages$backports$makefile, (Nuitka_StringObject *)const_str_plain_backport_makefile, tmp_assign_source_6);
    }

    return module_urllib3$packages$backports$makefile;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
