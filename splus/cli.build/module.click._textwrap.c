/* Generated code for Python module 'click._textwrap'
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

/* The "_module_click$_textwrap" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_click$_textwrap;
PyDictObject *moduledict_click$_textwrap;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_res;
static PyObject *const_str_plain_cur_len;
static PyObject *const_str_plain_cut;
extern PyObject *const_str_plain_idx;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_plain_reversed_chunks;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_contextmanager;
static PyObject *const_str_digest_6f16fdb3ab5bc69bf2e627862918f951;
static PyObject *const_tuple_30422a1cad57549feab55b3fb67203d4_tuple;
static PyObject *const_str_plain_break_long_words;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_last;
static PyObject *const_str_digest_56ad16a10cdda71d6a1ba299dba035bd;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_indent_only;
static PyObject *const_str_plain_cur_line;
extern PyObject *const_str_plain_width;
extern PyObject *const_str_plain_pop;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_max;
static PyObject *const_tuple_9299fde5ec2b9b0cd17d0456d38580a1_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_newline;
extern PyObject *const_str_plain_subsequent_indent;
static PyObject *const_str_digest_51145902a4565fccb98baa4b26fbf9c9;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_TextWrapper;
static PyObject *const_str_digest_21f04f3c148058f9a4013655a5963df4;
static PyObject *const_str_digest_2f925d3845edd0531d6b840adb84c887;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_rv;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_space_left;
extern PyObject *const_str_plain_text;
extern PyObject *const_str_plain_line;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_textwrap;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_indent;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain__handle_long_word;
extern PyObject *const_str_plain_enumerate;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_contextlib;
extern PyObject *const_str_plain_splitlines;
static PyObject *const_str_plain_old_subsequent_indent;
extern PyObject *const_str_plain_initial_indent;
extern PyObject *const_str_plain_append;
static PyObject *const_str_plain_old_initial_indent;
static PyObject *const_str_digest_dda02756cf52c460b0f9c3e5b83115ca;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_type;
static PyObject *const_tuple_f59489c529e734b7dbbf6e5c27c45edc_tuple;
extern PyObject *const_str_plain_extra_indent;
extern PyObject *const_tuple_str_plain_contextmanager_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___class__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain_cur_len = UNSTREAM_STRING_ASCII(&constant_bin[ 369064 ], 7, 1);
    const_str_plain_cut = UNSTREAM_STRING_ASCII(&constant_bin[ 356426 ], 3, 1);
    const_str_plain_reversed_chunks = UNSTREAM_STRING_ASCII(&constant_bin[ 369071 ], 15, 1);
    const_str_digest_6f16fdb3ab5bc69bf2e627862918f951 = UNSTREAM_STRING_ASCII(&constant_bin[ 369086 ], 24, 0);
    const_tuple_30422a1cad57549feab55b3fb67203d4_tuple = PyTuple_New(9);
    PyTuple_SET_ITEM(const_tuple_30422a1cad57549feab55b3fb67203d4_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_30422a1cad57549feab55b3fb67203d4_tuple, 1, const_str_plain_reversed_chunks); Py_INCREF(const_str_plain_reversed_chunks);
    const_str_plain_cur_line = UNSTREAM_STRING_ASCII(&constant_bin[ 369110 ], 8, 1);
    PyTuple_SET_ITEM(const_tuple_30422a1cad57549feab55b3fb67203d4_tuple, 2, const_str_plain_cur_line); Py_INCREF(const_str_plain_cur_line);
    PyTuple_SET_ITEM(const_tuple_30422a1cad57549feab55b3fb67203d4_tuple, 3, const_str_plain_cur_len); Py_INCREF(const_str_plain_cur_len);
    PyTuple_SET_ITEM(const_tuple_30422a1cad57549feab55b3fb67203d4_tuple, 4, const_str_plain_width); Py_INCREF(const_str_plain_width);
    const_str_plain_space_left = UNSTREAM_STRING_ASCII(&constant_bin[ 369118 ], 10, 1);
    PyTuple_SET_ITEM(const_tuple_30422a1cad57549feab55b3fb67203d4_tuple, 5, const_str_plain_space_left); Py_INCREF(const_str_plain_space_left);
    PyTuple_SET_ITEM(const_tuple_30422a1cad57549feab55b3fb67203d4_tuple, 6, const_str_plain_last); Py_INCREF(const_str_plain_last);
    PyTuple_SET_ITEM(const_tuple_30422a1cad57549feab55b3fb67203d4_tuple, 7, const_str_plain_cut); Py_INCREF(const_str_plain_cut);
    PyTuple_SET_ITEM(const_tuple_30422a1cad57549feab55b3fb67203d4_tuple, 8, const_str_plain_res); Py_INCREF(const_str_plain_res);
    const_str_plain_break_long_words = UNSTREAM_STRING_ASCII(&constant_bin[ 369128 ], 16, 1);
    const_str_digest_56ad16a10cdda71d6a1ba299dba035bd = UNSTREAM_STRING_ASCII(&constant_bin[ 369144 ], 57, 0);
    const_tuple_9299fde5ec2b9b0cd17d0456d38580a1_tuple = PyTuple_New(6);
    PyTuple_SET_ITEM(const_tuple_9299fde5ec2b9b0cd17d0456d38580a1_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_9299fde5ec2b9b0cd17d0456d38580a1_tuple, 1, const_str_plain_text); Py_INCREF(const_str_plain_text);
    PyTuple_SET_ITEM(const_tuple_9299fde5ec2b9b0cd17d0456d38580a1_tuple, 2, const_str_plain_rv); Py_INCREF(const_str_plain_rv);
    PyTuple_SET_ITEM(const_tuple_9299fde5ec2b9b0cd17d0456d38580a1_tuple, 3, const_str_plain_idx); Py_INCREF(const_str_plain_idx);
    PyTuple_SET_ITEM(const_tuple_9299fde5ec2b9b0cd17d0456d38580a1_tuple, 4, const_str_plain_line); Py_INCREF(const_str_plain_line);
    PyTuple_SET_ITEM(const_tuple_9299fde5ec2b9b0cd17d0456d38580a1_tuple, 5, const_str_plain_indent); Py_INCREF(const_str_plain_indent);
    const_str_digest_51145902a4565fccb98baa4b26fbf9c9 = UNSTREAM_STRING_ASCII(&constant_bin[ 369094 ], 15, 0);
    const_str_digest_21f04f3c148058f9a4013655a5963df4 = UNSTREAM_STRING_ASCII(&constant_bin[ 369201 ], 29, 0);
    const_str_digest_2f925d3845edd0531d6b840adb84c887 = UNSTREAM_STRING_ASCII(&constant_bin[ 369230 ], 23, 0);
    const_str_plain_textwrap = UNSTREAM_STRING_ASCII(&constant_bin[ 8091 ], 8, 1);
    const_str_plain__handle_long_word = UNSTREAM_STRING_ASCII(&constant_bin[ 369213 ], 17, 1);
    const_str_plain_old_subsequent_indent = UNSTREAM_STRING_ASCII(&constant_bin[ 369253 ], 21, 1);
    const_str_plain_old_initial_indent = UNSTREAM_STRING_ASCII(&constant_bin[ 369274 ], 18, 1);
    const_str_digest_dda02756cf52c460b0f9c3e5b83115ca = UNSTREAM_STRING_ASCII(&constant_bin[ 369292 ], 24, 0);
    const_tuple_f59489c529e734b7dbbf6e5c27c45edc_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_f59489c529e734b7dbbf6e5c27c45edc_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_f59489c529e734b7dbbf6e5c27c45edc_tuple, 1, const_str_plain_indent); Py_INCREF(const_str_plain_indent);
    PyTuple_SET_ITEM(const_tuple_f59489c529e734b7dbbf6e5c27c45edc_tuple, 2, const_str_plain_old_initial_indent); Py_INCREF(const_str_plain_old_initial_indent);
    PyTuple_SET_ITEM(const_tuple_f59489c529e734b7dbbf6e5c27c45edc_tuple, 3, const_str_plain_old_subsequent_indent); Py_INCREF(const_str_plain_old_subsequent_indent);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_click$_textwrap(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_1f3331f44d260449d71d66051f01d277;
static PyCodeObject *codeobj_5053471946153aecb2e17dcf17a019a4;
static PyCodeObject *codeobj_725b06d532ee7814eeb15f9726a81653;
static PyCodeObject *codeobj_c37d9d36d4a71684788933a73d46faac;
static PyCodeObject *codeobj_499a11509f20b1141481db14e619ce01;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_56ad16a10cdda71d6a1ba299dba035bd;
    codeobj_1f3331f44d260449d71d66051f01d277 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_6f16fdb3ab5bc69bf2e627862918f951, const_tuple_empty, 0, 0, 0);
    codeobj_5053471946153aecb2e17dcf17a019a4 = MAKE_CODEOBJECT(module_filename_obj, 5, CO_NOFREE, const_str_plain_TextWrapper, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_725b06d532ee7814eeb15f9726a81653 = MAKE_CODEOBJECT(module_filename_obj, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__handle_long_word, const_tuple_30422a1cad57549feab55b3fb67203d4_tuple, 5, 0, 0);
    codeobj_c37d9d36d4a71684788933a73d46faac = MAKE_CODEOBJECT(module_filename_obj, 19, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_extra_indent, const_tuple_f59489c529e734b7dbbf6e5c27c45edc_tuple, 2, 0, 0);
    codeobj_499a11509f20b1141481db14e619ce01 = MAKE_CODEOBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_indent_only, const_tuple_9299fde5ec2b9b0cd17d0456d38580a1_tuple, 2, 0, 0);
}

// The module function declarations.
static PyObject *click$_textwrap$$$function_2_extra_indent$$$genobj_1_extra_indent_maker(void);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_click$_textwrap$$$function_1__handle_long_word();


static PyObject *MAKE_FUNCTION_click$_textwrap$$$function_2_extra_indent();


static PyObject *MAKE_FUNCTION_click$_textwrap$$$function_3_indent_only();


// The module function definitions.
static PyObject *impl_click$_textwrap$$$function_1__handle_long_word(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_reversed_chunks = python_pars[1];
    PyObject *par_cur_line = python_pars[2];
    PyObject *par_cur_len = python_pars[3];
    PyObject *par_width = python_pars[4];
    PyObject *var_space_left = NULL;
    PyObject *var_last = NULL;
    PyObject *var_cut = NULL;
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_725b06d532ee7814eeb15f9726a81653;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_725b06d532ee7814eeb15f9726a81653 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_725b06d532ee7814eeb15f9726a81653, codeobj_725b06d532ee7814eeb15f9726a81653, module_click$_textwrap, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_725b06d532ee7814eeb15f9726a81653 = cache_frame_725b06d532ee7814eeb15f9726a81653;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_725b06d532ee7814eeb15f9726a81653);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_725b06d532ee7814eeb15f9726a81653) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = LOOKUP_BUILTIN(const_str_plain_max);
        assert(tmp_called_name_1 != NULL);
        CHECK_OBJECT(par_width);
        tmp_left_name_1 = par_width;
        CHECK_OBJECT(par_cur_len);
        tmp_right_name_1 = par_cur_len;
        tmp_args_element_name_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = const_int_pos_1;
        frame_725b06d532ee7814eeb15f9726a81653->m_frame.f_lineno = 8;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_space_left == NULL);
        var_space_left = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_break_long_words);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 10;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT(par_reversed_chunks);
            tmp_subscribed_name_1 = par_reversed_chunks;
            tmp_subscript_name_1 = const_int_neg_1;
            tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, -1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_last == NULL);
            var_last = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_start_name_1;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_step_name_1;
            CHECK_OBJECT(var_last);
            tmp_subscribed_name_2 = var_last;
            tmp_start_name_1 = Py_None;
            CHECK_OBJECT(var_space_left);
            tmp_stop_name_1 = var_space_left;
            tmp_step_name_1 = Py_None;
            tmp_subscript_name_2 = MAKE_SLICEOBJ3(tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1);
            assert(!(tmp_subscript_name_2 == NULL));
            tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_2, tmp_subscript_name_2);
            Py_DECREF(tmp_subscript_name_2);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 12;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_cut == NULL);
            var_cut = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_start_name_2;
            PyObject *tmp_stop_name_2;
            PyObject *tmp_step_name_2;
            CHECK_OBJECT(var_last);
            tmp_subscribed_name_3 = var_last;
            CHECK_OBJECT(var_space_left);
            tmp_start_name_2 = var_space_left;
            tmp_stop_name_2 = Py_None;
            tmp_step_name_2 = Py_None;
            tmp_subscript_name_3 = MAKE_SLICEOBJ3(tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2);
            assert(!(tmp_subscript_name_3 == NULL));
            tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_3, tmp_subscript_name_3);
            Py_DECREF(tmp_subscript_name_3);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_res == NULL);
            var_res = tmp_assign_source_4;
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT(par_cur_line);
            tmp_called_instance_1 = par_cur_line;
            CHECK_OBJECT(var_cut);
            tmp_args_element_name_3 = var_cut;
            frame_725b06d532ee7814eeb15f9726a81653->m_frame.f_lineno = 14;
            {
                PyObject *call_args[] = {tmp_args_element_name_3};
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_append, call_args);
            }

            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            int tmp_ass_subscript_res_1;
            CHECK_OBJECT(var_res);
            tmp_ass_subvalue_1 = var_res;
            CHECK_OBJECT(par_reversed_chunks);
            tmp_ass_subscribed_1 = par_reversed_chunks;
            tmp_ass_subscript_1 = const_int_neg_1;
            tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_1, tmp_ass_subscript_1, -1, tmp_ass_subvalue_1);
            if (tmp_ass_subscript_res_1 == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            CHECK_OBJECT(par_cur_line);
            tmp_operand_name_1 = par_cur_line;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;
                type_description_1 = "ooooooooo";
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
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_2;
                PyObject *tmp_call_result_2;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_called_instance_2;
                CHECK_OBJECT(par_cur_line);
                tmp_source_name_2 = par_cur_line;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_append);
                if (tmp_called_name_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 17;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_reversed_chunks);
                tmp_called_instance_2 = par_reversed_chunks;
                frame_725b06d532ee7814eeb15f9726a81653->m_frame.f_lineno = 17;
                tmp_args_element_name_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_pop);
                if (tmp_args_element_name_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_2);

                    exception_lineno = 17;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_725b06d532ee7814eeb15f9726a81653->m_frame.f_lineno = 17;
                tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_4);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_args_element_name_4);
                if (tmp_call_result_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 17;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_2);
            }
            branch_no_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_725b06d532ee7814eeb15f9726a81653);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_725b06d532ee7814eeb15f9726a81653);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_725b06d532ee7814eeb15f9726a81653, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_725b06d532ee7814eeb15f9726a81653->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_725b06d532ee7814eeb15f9726a81653, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_725b06d532ee7814eeb15f9726a81653,
        type_description_1,
        par_self,
        par_reversed_chunks,
        par_cur_line,
        par_cur_len,
        par_width,
        var_space_left,
        var_last,
        var_cut,
        var_res
    );


    // Release cached frame.
    if (frame_725b06d532ee7814eeb15f9726a81653 == cache_frame_725b06d532ee7814eeb15f9726a81653) {
        Py_DECREF(frame_725b06d532ee7814eeb15f9726a81653);
    }
    cache_frame_725b06d532ee7814eeb15f9726a81653 = NULL;

    assertFrameObject(frame_725b06d532ee7814eeb15f9726a81653);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(click$_textwrap$$$function_1__handle_long_word);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_space_left);
    Py_DECREF(var_space_left);
    var_space_left = NULL;

    Py_XDECREF(var_last);
    var_last = NULL;

    Py_XDECREF(var_cut);
    var_cut = NULL;

    Py_XDECREF(var_res);
    var_res = NULL;

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

    Py_XDECREF(var_space_left);
    var_space_left = NULL;

    Py_XDECREF(var_last);
    var_last = NULL;

    Py_XDECREF(var_cut);
    var_cut = NULL;

    Py_XDECREF(var_res);
    var_res = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(click$_textwrap$$$function_1__handle_long_word);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_reversed_chunks);
    Py_DECREF(par_reversed_chunks);
    CHECK_OBJECT(par_cur_line);
    Py_DECREF(par_cur_line);
    CHECK_OBJECT(par_cur_len);
    Py_DECREF(par_cur_len);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_reversed_chunks);
    Py_DECREF(par_reversed_chunks);
    CHECK_OBJECT(par_cur_line);
    Py_DECREF(par_cur_line);
    CHECK_OBJECT(par_cur_len);
    Py_DECREF(par_cur_len);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_click$_textwrap$$$function_2_extra_indent(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1(python_pars[0]);
    struct Nuitka_CellObject *par_indent = PyCell_NEW1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = click$_textwrap$$$function_2_extra_indent$$$genobj_1_extra_indent_maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_indent;
    Py_INCREF(((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0]);
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] = par_self;
    Py_INCREF(((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1]);


    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(click$_textwrap$$$function_2_extra_indent);
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_indent);
    Py_DECREF(par_indent);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct click$_textwrap$$$function_2_extra_indent$$$genobj_1_extra_indent_locals {
    PyObject *var_old_initial_indent;
    PyObject *var_old_subsequent_indent;
    PyObject *tmp_inplace_assign_attr_1__end;
    PyObject *tmp_inplace_assign_attr_1__start;
    PyObject *tmp_inplace_assign_attr_2__end;
    PyObject *tmp_inplace_assign_attr_2__start;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
};

static PyObject *click$_textwrap$$$function_2_extra_indent$$$genobj_1_extra_indent_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value ) {
    CHECK_OBJECT((PyObject *)generator);
    assert(Nuitka_Generator_Check( (PyObject *)generator ));

    // Heap access if used.
    struct click$_textwrap$$$function_2_extra_indent$$$genobj_1_extra_indent_locals *generator_heap = (struct click$_textwrap$$$function_2_extra_indent$$$genobj_1_extra_indent_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_old_initial_indent = NULL;
    generator_heap->var_old_subsequent_indent = NULL;
    generator_heap->tmp_inplace_assign_attr_1__end = NULL;
    generator_heap->tmp_inplace_assign_attr_1__start = NULL;
    generator_heap->tmp_inplace_assign_attr_2__end = NULL;
    generator_heap->tmp_inplace_assign_attr_2__start = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_m_frame, codeobj_c37d9d36d4a71684788933a73d46faac, module_click$_textwrap, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        if (PyCell_GET(generator->m_closure[1]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 21;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = PyCell_GET(generator->m_closure[1]);
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_initial_indent);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 21;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_old_initial_indent == NULL);
        generator_heap->var_old_initial_indent = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_2;
        if (PyCell_GET(generator->m_closure[1]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 22;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = PyCell_GET(generator->m_closure[1]);
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_subsequent_indent);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 22;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_old_subsequent_indent == NULL);
        generator_heap->var_old_subsequent_indent = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_3;
        if (PyCell_GET(generator->m_closure[1]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 23;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = PyCell_GET(generator->m_closure[1]);
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_initial_indent);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 23;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_inplace_assign_attr_1__start == NULL);
        generator_heap->tmp_inplace_assign_attr_1__start = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_attr_1__start);
        tmp_left_name_1 = generator_heap->tmp_inplace_assign_attr_1__start;
        if (PyCell_GET(generator->m_closure[0]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "indent");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 23;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_2;
        }

        tmp_right_name_1 = PyCell_GET(generator->m_closure[0]);
        tmp_assign_source_4 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 23;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_inplace_assign_attr_1__end == NULL);
        generator_heap->tmp_inplace_assign_attr_1__end = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_attr_1__end);
        tmp_assattr_name_1 = generator_heap->tmp_inplace_assign_attr_1__end;
        if (PyCell_GET(generator->m_closure[1]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 23;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_3;
        }

        tmp_assattr_target_1 = PyCell_GET(generator->m_closure[1]);
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_initial_indent, tmp_assattr_name_1);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 23;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT((PyObject *)generator_heap->tmp_inplace_assign_attr_1__end);
    Py_DECREF(generator_heap->tmp_inplace_assign_attr_1__end);
    generator_heap->tmp_inplace_assign_attr_1__end = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    CHECK_OBJECT((PyObject *)generator_heap->tmp_inplace_assign_attr_1__start);
    Py_DECREF(generator_heap->tmp_inplace_assign_attr_1__start);
    generator_heap->tmp_inplace_assign_attr_1__start = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT((PyObject *)generator_heap->tmp_inplace_assign_attr_1__end);
    Py_DECREF(generator_heap->tmp_inplace_assign_attr_1__end);
    generator_heap->tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT((PyObject *)generator_heap->tmp_inplace_assign_attr_1__start);
    Py_DECREF(generator_heap->tmp_inplace_assign_attr_1__start);
    generator_heap->tmp_inplace_assign_attr_1__start = NULL;

    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_source_name_4;
        if (PyCell_GET(generator->m_closure[1]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 24;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = PyCell_GET(generator->m_closure[1]);
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_subsequent_indent);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 24;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_inplace_assign_attr_2__start == NULL);
        generator_heap->tmp_inplace_assign_attr_2__start = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_attr_2__start);
        tmp_left_name_2 = generator_heap->tmp_inplace_assign_attr_2__start;
        if (PyCell_GET(generator->m_closure[0]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "indent");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 24;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_4;
        }

        tmp_right_name_2 = PyCell_GET(generator->m_closure[0]);
        tmp_assign_source_6 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 24;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_4;
        }
        assert(generator_heap->tmp_inplace_assign_attr_2__end == NULL);
        generator_heap->tmp_inplace_assign_attr_2__end = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_attr_2__end);
        tmp_assattr_name_2 = generator_heap->tmp_inplace_assign_attr_2__end;
        if (PyCell_GET(generator->m_closure[1]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 24;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_5;
        }

        tmp_assattr_target_2 = PyCell_GET(generator->m_closure[1]);
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_subsequent_indent, tmp_assattr_name_2);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 24;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT((PyObject *)generator_heap->tmp_inplace_assign_attr_2__end);
    Py_DECREF(generator_heap->tmp_inplace_assign_attr_2__end);
    generator_heap->tmp_inplace_assign_attr_2__end = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT((PyObject *)generator_heap->tmp_inplace_assign_attr_2__start);
    Py_DECREF(generator_heap->tmp_inplace_assign_attr_2__start);
    generator_heap->tmp_inplace_assign_attr_2__start = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT((PyObject *)generator_heap->tmp_inplace_assign_attr_2__end);
    Py_DECREF(generator_heap->tmp_inplace_assign_attr_2__end);
    generator_heap->tmp_inplace_assign_attr_2__end = NULL;

    CHECK_OBJECT((PyObject *)generator_heap->tmp_inplace_assign_attr_2__start);
    Py_DECREF(generator_heap->tmp_inplace_assign_attr_2__start);
    generator_heap->tmp_inplace_assign_attr_2__start = NULL;

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


            generator_heap->exception_lineno = 26;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_6;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
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

    if (generator_heap->exception_keeper_tb_5 == NULL) {
        generator_heap->exception_keeper_tb_5 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_5);
    } else if (generator_heap->exception_keeper_lineno_5 != 0) {
        generator_heap->exception_keeper_tb_5 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_5, generator->m_frame, generator_heap->exception_keeper_lineno_5);
    }

    NORMALIZE_EXCEPTION(&generator_heap->exception_keeper_type_5, &generator_heap->exception_keeper_value_5, &generator_heap->exception_keeper_tb_5);
    PyException_SetTraceback(generator_heap->exception_keeper_value_5, (PyObject *)generator_heap->exception_keeper_tb_5);
    PUBLISH_EXCEPTION(&generator_heap->exception_keeper_type_5, &generator_heap->exception_keeper_value_5, &generator_heap->exception_keeper_tb_5);
    // Tried code:
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(generator_heap->var_old_initial_indent);
        tmp_assattr_name_3 = generator_heap->var_old_initial_indent;
        if (PyCell_GET(generator->m_closure[1]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 28;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_7;
        }

        tmp_assattr_target_3 = PyCell_GET(generator->m_closure[1]);
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_initial_indent, tmp_assattr_name_3);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 28;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_7;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(generator_heap->var_old_subsequent_indent);
        tmp_assattr_name_4 = generator_heap->var_old_subsequent_indent;
        if (PyCell_GET(generator->m_closure[1]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 29;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_7;
        }

        tmp_assattr_target_4 = PyCell_GET(generator->m_closure[1]);
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain_subsequent_indent, tmp_assattr_name_4);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 29;
            generator_heap->type_description_1 = "ccoo";
            goto try_except_handler_7;
        }
    }
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 25;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ccoo";
    goto try_except_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(click$_textwrap$$$function_2_extra_indent$$$genobj_1_extra_indent);
    return NULL;
    // Exception handler code:
    try_except_handler_7:;
    generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(generator_heap->exception_preserved_type_1, generator_heap->exception_preserved_value_1, generator_heap->exception_preserved_tb_1);
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_6;
    generator_heap->exception_value = generator_heap->exception_keeper_value_6;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_6;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(generator_heap->var_old_initial_indent);
        tmp_assattr_name_5 = generator_heap->var_old_initial_indent;
        if (PyCell_GET(generator->m_closure[1]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 28;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = PyCell_GET(generator->m_closure[1]);
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain_initial_indent, tmp_assattr_name_5);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 28;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(generator_heap->var_old_subsequent_indent);
        tmp_assattr_name_6 = generator_heap->var_old_subsequent_indent;
        if (PyCell_GET(generator->m_closure[1]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 29;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_6 = PyCell_GET(generator->m_closure[1]);
        generator_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain_subsequent_indent, tmp_assattr_name_6);
        if (generator_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 29;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
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
            generator->m_closure[1],
            generator->m_closure[0],
            generator_heap->var_old_initial_indent,
            generator_heap->var_old_subsequent_indent
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
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_7 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_7 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_7 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_old_initial_indent);
    generator_heap->var_old_initial_indent = NULL;

    Py_XDECREF(generator_heap->var_old_subsequent_indent);
    generator_heap->var_old_subsequent_indent = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_7;
    generator_heap->exception_value = generator_heap->exception_keeper_value_7;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_7;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:
    try_end_6:;
    CHECK_OBJECT((PyObject *)generator_heap->var_old_initial_indent);
    Py_DECREF(generator_heap->var_old_initial_indent);
    generator_heap->var_old_initial_indent = NULL;

    CHECK_OBJECT((PyObject *)generator_heap->var_old_subsequent_indent);
    Py_DECREF(generator_heap->var_old_subsequent_indent);
    generator_heap->var_old_subsequent_indent = NULL;



    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *click$_textwrap$$$function_2_extra_indent$$$genobj_1_extra_indent_maker(void) {
    return Nuitka_Generator_New(
        click$_textwrap$$$function_2_extra_indent$$$genobj_1_extra_indent_context,
        module_click$_textwrap,
        const_str_plain_extra_indent,
#if PYTHON_VERSION >= 350
        const_str_digest_dda02756cf52c460b0f9c3e5b83115ca,
#endif
        codeobj_c37d9d36d4a71684788933a73d46faac,
        2,
        sizeof(struct click$_textwrap$$$function_2_extra_indent$$$genobj_1_extra_indent_locals)
    );
}


static PyObject *impl_click$_textwrap$$$function_3_indent_only(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_text = python_pars[1];
    PyObject *var_rv = NULL;
    PyObject *var_idx = NULL;
    PyObject *var_line = NULL;
    PyObject *var_indent = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_499a11509f20b1141481db14e619ce01;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_499a11509f20b1141481db14e619ce01 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_rv == NULL);
        var_rv = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_499a11509f20b1141481db14e619ce01, codeobj_499a11509f20b1141481db14e619ce01, module_click$_textwrap, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_499a11509f20b1141481db14e619ce01 = cache_frame_499a11509f20b1141481db14e619ce01;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_499a11509f20b1141481db14e619ce01);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_499a11509f20b1141481db14e619ce01) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        tmp_called_name_1 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_text);
        tmp_called_instance_1 = par_text;
        frame_499a11509f20b1141481db14e619ce01->m_frame.f_lineno = 33;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_splitlines);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_499a11509f20b1141481db14e619ce01->m_frame.f_lineno = 33;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 33;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 33;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 33;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL)
            {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration))
                {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooo";
                    exception_lineno = 33;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format(PyExc_ValueError, "too many values to unpack");
#else
            PyErr_Format(PyExc_ValueError, "too many values to unpack (expected 2)");
#endif
            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            type_description_1 = "oooooo";
            exception_lineno = 33;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_idx;
            var_idx = tmp_assign_source_7;
            Py_INCREF(var_idx);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_8;
            Py_INCREF(var_line);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_initial_indent);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_indent;
            var_indent = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_idx);
        tmp_compexpr_left_1 = var_idx;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooo";
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
            PyObject *tmp_assign_source_10;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT(par_self);
            tmp_source_name_2 = par_self;
            tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_subsequent_indent);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_indent;
                assert(old != NULL);
                var_indent = tmp_assign_source_10;
                Py_DECREF(old);
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(var_rv);
        tmp_source_name_3 = var_rv;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_append);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_indent);
        tmp_left_name_1 = var_indent;
        CHECK_OBJECT(var_line);
        tmp_right_name_1 = var_line;
        tmp_args_element_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 37;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_499a11509f20b1141481db14e619ce01->m_frame.f_lineno = 37;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 33;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_3;
        tmp_called_instance_2 = const_str_newline;
        CHECK_OBJECT(var_rv);
        tmp_args_element_name_3 = var_rv;
        frame_499a11509f20b1141481db14e619ce01->m_frame.f_lineno = 38;
        {
            PyObject *call_args[] = {tmp_args_element_name_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_join, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_499a11509f20b1141481db14e619ce01);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_499a11509f20b1141481db14e619ce01);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_499a11509f20b1141481db14e619ce01);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_499a11509f20b1141481db14e619ce01, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_499a11509f20b1141481db14e619ce01->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_499a11509f20b1141481db14e619ce01, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_499a11509f20b1141481db14e619ce01,
        type_description_1,
        par_self,
        par_text,
        var_rv,
        var_idx,
        var_line,
        var_indent
    );


    // Release cached frame.
    if (frame_499a11509f20b1141481db14e619ce01 == cache_frame_499a11509f20b1141481db14e619ce01) {
        Py_DECREF(frame_499a11509f20b1141481db14e619ce01);
    }
    cache_frame_499a11509f20b1141481db14e619ce01 = NULL;

    assertFrameObject(frame_499a11509f20b1141481db14e619ce01);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(click$_textwrap$$$function_3_indent_only);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_rv);
    Py_DECREF(var_rv);
    var_rv = NULL;

    Py_XDECREF(var_idx);
    var_idx = NULL;

    Py_XDECREF(var_line);
    var_line = NULL;

    Py_XDECREF(var_indent);
    var_indent = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)var_rv);
    Py_DECREF(var_rv);
    var_rv = NULL;

    Py_XDECREF(var_idx);
    var_idx = NULL;

    Py_XDECREF(var_line);
    var_line = NULL;

    Py_XDECREF(var_indent);
    var_indent = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(click$_textwrap$$$function_3_indent_only);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_click$_textwrap$$$function_1__handle_long_word() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_textwrap$$$function_1__handle_long_word,
        const_str_plain__handle_long_word,
#if PYTHON_VERSION >= 300
        const_str_digest_21f04f3c148058f9a4013655a5963df4,
#endif
        codeobj_725b06d532ee7814eeb15f9726a81653,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_click$_textwrap,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_textwrap$$$function_2_extra_indent() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_textwrap$$$function_2_extra_indent,
        const_str_plain_extra_indent,
#if PYTHON_VERSION >= 300
        const_str_digest_dda02756cf52c460b0f9c3e5b83115ca,
#endif
        codeobj_c37d9d36d4a71684788933a73d46faac,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_click$_textwrap,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_textwrap$$$function_3_indent_only() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_textwrap$$$function_3_indent_only,
        const_str_plain_indent_only,
#if PYTHON_VERSION >= 300
        const_str_digest_2f925d3845edd0531d6b840adb84c887,
#endif
        codeobj_499a11509f20b1141481db14e619ce01,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_click$_textwrap,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_click$_textwrap =
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

function_impl_code functable_click$_textwrap[] = {
    impl_click$_textwrap$$$function_1__handle_long_word,
    impl_click$_textwrap$$$function_2_extra_indent,
    impl_click$_textwrap$$$function_3_indent_only,
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

    function_impl_code *current = functable_click$_textwrap;
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

    if (offset > sizeof(functable_click$_textwrap) || offset < 0) {
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
        functable_click$_textwrap[offset],
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
        module_click$_textwrap,
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
PyObject *modulecode_click$_textwrap(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_click$_textwrap;
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
    PRINT_STRING("click._textwrap: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("click._textwrap: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("click._textwrap: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initclick$_textwrap\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_click$_textwrap = Py_InitModule4(
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
    mdef_click$_textwrap.m_name = module_full_name;
    module_click$_textwrap = PyModule_Create(&mdef_click$_textwrap);
#endif

    moduledict_click$_textwrap = MODULE_DICT(module_click$_textwrap);

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
        moduledict_click$_textwrap,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_click$_textwrap,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$_textwrap, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_click$_textwrap,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$_textwrap, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_click$_textwrap,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$_textwrap, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_click$_textwrap,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_click$_textwrap);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_click$_textwrap);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_click$_textwrap, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_click$_textwrap, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_click$_textwrap, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_click$_textwrap, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_click$_textwrap, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_click$_textwrap, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_1f3331f44d260449d71d66051f01d277;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_click$_textwrap_5 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_5053471946153aecb2e17dcf17a019a4_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_5053471946153aecb2e17dcf17a019a4_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_click$_textwrap, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_56ad16a10cdda71d6a1ba299dba035bd;
        UPDATE_STRING_DICT0(moduledict_click$_textwrap, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_1f3331f44d260449d71d66051f01d277 = MAKE_MODULE_FRAME(codeobj_1f3331f44d260449d71d66051f01d277, module_click$_textwrap);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_1f3331f44d260449d71d66051f01d277);
    assert(Py_REFCNT(frame_1f3331f44d260449d71d66051f01d277) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_56ad16a10cdda71d6a1ba299dba035bd;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_click$_textwrap, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_click$_textwrap, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_click$_textwrap, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_textwrap;
        tmp_globals_name_1 = (PyObject *)moduledict_click$_textwrap;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_1f3331f44d260449d71d66051f01d277->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$_textwrap, (Nuitka_StringObject *)const_str_plain_textwrap, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_contextlib;
        tmp_globals_name_2 = (PyObject *)moduledict_click$_textwrap;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_contextmanager_tuple;
        tmp_level_name_2 = const_int_0;
        frame_1f3331f44d260449d71d66051f01d277->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_contextmanager);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_click$_textwrap, (Nuitka_StringObject *)const_str_plain_contextmanager, tmp_assign_source_5);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_click$_textwrap, (Nuitka_StringObject *)const_str_plain_textwrap);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_textwrap);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 8085 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 5;

            goto try_except_handler_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_TextWrapper);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        tmp_assign_source_6 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_6, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_7 = impl___internal__$$$function_3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_1, tmp_key_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = const_str_plain_metaclass;
        tmp_metaclass_name_1 = DICT_GET_ITEM(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_subscribed_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = const_int_0;
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_9 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        tmp_key_name_3 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_3, tmp_key_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_source_name_2 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr(tmp_source_name_2, const_str_plain___prepare__);
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_source_name_3 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain___prepare__);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5;

                goto try_except_handler_1;
            }
            tmp_tuple_element_2 = const_str_plain_TextWrapper;
            tmp_args_name_1 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_1f3331f44d260449d71d66051f01d277->m_frame.f_lineno = 5;
            tmp_assign_source_10 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_name_1);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5;

                goto try_except_handler_1;
            }
            assert(tmp_class_creation_1__prepared == NULL);
            tmp_class_creation_1__prepared = tmp_assign_source_10;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_source_name_4 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr(tmp_source_name_4, const_str_plain___getitem__);
            tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5;

                goto try_except_handler_1;
            }
            tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_raise_value_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_5;
                PyObject *tmp_type_arg_2;
                tmp_raise_type_1 = PyExc_TypeError;
                tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT(tmp_class_creation_1__metaclass);
                tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
                tmp_getattr_attr_1 = const_str_plain___name__;
                tmp_getattr_default_1 = const_str_angle_metaclass;
                tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 5;

                    goto try_except_handler_1;
                }
                tmp_right_name_1 = PyTuple_New(2);
                PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_3);
                CHECK_OBJECT(tmp_class_creation_1__prepared);
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_5 = BUILTIN_TYPE1(tmp_type_arg_2);
                assert(!(tmp_source_name_5 == NULL));
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain___name__);
                Py_DECREF(tmp_source_name_5);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_right_name_1);

                    exception_lineno = 5;

                    goto try_except_handler_1;
                }
                PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_3);
                tmp_raise_value_1 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
                Py_DECREF(tmp_right_name_1);
                if (tmp_raise_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 5;

                    goto try_except_handler_1;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF(tmp_raise_type_1);
                exception_value = tmp_raise_value_1;
                exception_lineno = 5;
                RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

                goto try_except_handler_1;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = PyDict_New();
            assert(tmp_class_creation_1__prepared == NULL);
            tmp_class_creation_1__prepared = tmp_assign_source_11;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_12;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_click$_textwrap_5 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_51145902a4565fccb98baa4b26fbf9c9;
        tmp_res = PyObject_SetItem(locals_click$_textwrap_5, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_3;
        }
        tmp_dictset_value = const_str_plain_TextWrapper;
        tmp_res = PyObject_SetItem(locals_click$_textwrap_5, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_3;
        }
        MAKE_OR_REUSE_FRAME(cache_frame_5053471946153aecb2e17dcf17a019a4_2, codeobj_5053471946153aecb2e17dcf17a019a4, module_click$_textwrap, sizeof(void *));
        frame_5053471946153aecb2e17dcf17a019a4_2 = cache_frame_5053471946153aecb2e17dcf17a019a4_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_5053471946153aecb2e17dcf17a019a4_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_5053471946153aecb2e17dcf17a019a4_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_click$_textwrap$$$function_1__handle_long_word();



        tmp_res = PyObject_SetItem(locals_click$_textwrap_5, const_str_plain__handle_long_word, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_1;
            tmp_called_name_2 = PyObject_GetItem(locals_click$_textwrap_5, const_str_plain_contextmanager);

            if (tmp_called_name_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_click$_textwrap, (Nuitka_StringObject *)const_str_plain_contextmanager);

                    if (unlikely(tmp_mvar_value_4 == NULL)) {
                        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_contextmanager);
                    }

                    if (tmp_mvar_value_4 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 8115 ], 36, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 19;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }

                    tmp_called_name_2 = tmp_mvar_value_4;
                    Py_INCREF(tmp_called_name_2);
                }
            }

            tmp_args_element_name_1 = MAKE_FUNCTION_click$_textwrap$$$function_2_extra_indent();



            frame_5053471946153aecb2e17dcf17a019a4_2->m_frame.f_lineno = 19;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_click$_textwrap_5, const_str_plain_extra_indent, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_click$_textwrap$$$function_3_indent_only();



        tmp_res = PyObject_SetItem(locals_click$_textwrap_5, const_str_plain_indent_only, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5053471946153aecb2e17dcf17a019a4_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_5053471946153aecb2e17dcf17a019a4_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5053471946153aecb2e17dcf17a019a4_2, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_5053471946153aecb2e17dcf17a019a4_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5053471946153aecb2e17dcf17a019a4_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_5053471946153aecb2e17dcf17a019a4_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if (frame_5053471946153aecb2e17dcf17a019a4_2 == cache_frame_5053471946153aecb2e17dcf17a019a4_2) {
            Py_DECREF(frame_5053471946153aecb2e17dcf17a019a4_2);
        }
        cache_frame_5053471946153aecb2e17dcf17a019a4_2 = NULL;

        assertFrameObject(frame_5053471946153aecb2e17dcf17a019a4_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_compexpr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5;

                goto try_except_handler_3;
            }
            tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            branch_yes_4:;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_dictset_value = tmp_class_creation_1__bases_orig;
            tmp_res = PyObject_SetItem(locals_click$_textwrap_5, const_str_plain___orig_bases__, tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5;

                goto try_except_handler_3;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_TextWrapper;
            tmp_args_name_2 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_click$_textwrap_5;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_1f3331f44d260449d71d66051f01d277->m_frame.f_lineno = 5;
            tmp_assign_source_13 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 5;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_13;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_12 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_12);
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(click$_textwrap);
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_click$_textwrap_5);
        locals_click$_textwrap_5 = NULL;
        goto try_return_handler_2;
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

        Py_DECREF(locals_click$_textwrap_5);
        locals_click$_textwrap_5 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(click$_textwrap);
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT((PyObject *)outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(click$_textwrap);
        return NULL;
        outline_exception_1:;
        exception_lineno = 5;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_click$_textwrap, (Nuitka_StringObject *)const_str_plain_TextWrapper, tmp_assign_source_12);
    }
    goto try_end_1;
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

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1f3331f44d260449d71d66051f01d277);
#endif
    popFrameStack();

    assertFrameObject(frame_1f3331f44d260449d71d66051f01d277);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1f3331f44d260449d71d66051f01d277);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_1f3331f44d260449d71d66051f01d277, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_1f3331f44d260449d71d66051f01d277->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1f3331f44d260449d71d66051f01d277, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    CHECK_OBJECT((PyObject *)tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;


    return module_click$_textwrap;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
