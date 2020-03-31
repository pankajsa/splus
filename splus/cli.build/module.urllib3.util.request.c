/* Generated code for Python module 'urllib3.util.request'
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

/* The "_module_urllib3$util$request" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$request;
PyDictObject *moduledict_urllib3$util$request;

/* The declarations of module constants used, if any. */
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
extern PyObject *const_str_plain_headers;
static PyObject *const_tuple_bf13d4977692576812fdd050c4821ab2_tuple;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_body_pos;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_UnrewindableBodyError_tuple;
static PyObject *const_tuple_str_plain_b_str_plain_integer_types_tuple;
extern PyObject *const_str_plain_seek;
extern PyObject *const_str_digest_edd9cb70c3537b6a2b58ab6b4487087a;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc;
static PyObject *const_str_digest_de34be5091ab4ac19953db79567103ed;
extern PyObject *const_str_plain_basic_auth;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_body;
extern PyObject *const_str_plain_pos;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_0209911ea85084279425c4a3b9b4322a;
extern PyObject *const_str_plain_str;
static PyObject *const_str_plain_ACCEPT_ENCODING;
extern PyObject *const_str_chr_44;
static PyObject *const_str_digest_8b11285fb79bca8c9b65cdb3bcd47537;
static PyObject *const_str_digest_77bc5054242d5f3e5269bd07a4342f1b;
static PyObject *const_str_plain_accept_encoding;
extern PyObject *const_str_digest_141f53ac830b1d16e6fa74a381d6e6a2;
static PyObject *const_str_digest_a97b46010ba2d7a042fbaf3749619f69;
static PyObject *const_str_digest_5f141d838086b56fa77388201c41468d;
extern PyObject *const_str_plain_base64;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_integer_types;
static PyObject *const_str_digest_5bbc1e7723c5316999b643d8effd069e;
static PyObject *const_str_plain_proxy_basic_auth;
static PyObject *const_str_digest_726f4c9a876879b008c85b6851a1570f;
extern PyObject *const_str_plain_tell;
extern PyObject *const_str_plain_exceptions;
static PyObject *const_str_plain_authorization;
extern PyObject *const_tuple_str_plain_b64encode_tuple;
extern PyObject *const_str_digest_f4cf83dd2e7e2f235646bf31dc9dfbff;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_decode;
static PyObject *const_str_plain_keep_alive;
extern PyObject *const_str_plain_list;
extern PyObject *const_tuple_none_none_none_none_none_none_tuple;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_str_plain_UnrewindableBodyError;
extern PyObject *const_str_plain_connection;
extern PyObject *const_int_0;
static PyObject *const_str_digest_d50409c0c67db292fd3ed476bfe9cbf2;
static PyObject *const_str_digest_62602cb6603929977f40e7e98d6957ef;
extern PyObject *const_str_plain_origin;
static PyObject *const_tuple_str_plain_body_str_plain_pos_tuple;
static PyObject *const_str_digest_47d4abcbaab2ba783709ab98383a7f12;
static PyObject *const_tuple_str_digest_de34be5091ab4ac19953db79567103ed_tuple;
static PyObject *const_str_digest_ddf86e8e76816cbf1b0e04f2c09fb410;
static PyObject *const_str_plain__FAILEDTELL;
static PyObject *const_str_digest_cc5c142a5aaab5d4cf43012035230cc0;
extern PyObject *const_str_plain_body_seek;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_tuple_type_OSError_type_OSError_tuple;
static PyObject *const_tuple_str_plain_body_str_plain_body_pos_str_plain_body_seek_tuple;
extern PyObject *const_str_plain_rewind_body;
static PyObject *const_tuple_str_digest_5bbc1e7723c5316999b643d8effd069e_tuple;
static PyObject *const_str_plain_user_agent;
static PyObject *const_str_plain_disable_cache;
extern PyObject *const_str_plain_set_file_position;
extern PyObject *const_str_plain_b64encode;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_make_headers;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_tuple_bf13d4977692576812fdd050c4821ab2_tuple = PyTuple_New(7);
    const_str_plain_keep_alive = UNSTREAM_STRING_ASCII(&constant_bin[ 748223 ], 10, 1);
    PyTuple_SET_ITEM(const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 0, const_str_plain_keep_alive); Py_INCREF(const_str_plain_keep_alive);
    const_str_plain_accept_encoding = UNSTREAM_STRING_ASCII(&constant_bin[ 748233 ], 15, 1);
    PyTuple_SET_ITEM(const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 1, const_str_plain_accept_encoding); Py_INCREF(const_str_plain_accept_encoding);
    const_str_plain_user_agent = UNSTREAM_STRING_ASCII(&constant_bin[ 25006 ], 10, 1);
    PyTuple_SET_ITEM(const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 2, const_str_plain_user_agent); Py_INCREF(const_str_plain_user_agent);
    PyTuple_SET_ITEM(const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 3, const_str_plain_basic_auth); Py_INCREF(const_str_plain_basic_auth);
    const_str_plain_proxy_basic_auth = UNSTREAM_STRING_ASCII(&constant_bin[ 748248 ], 16, 1);
    PyTuple_SET_ITEM(const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 4, const_str_plain_proxy_basic_auth); Py_INCREF(const_str_plain_proxy_basic_auth);
    const_str_plain_disable_cache = UNSTREAM_STRING_ASCII(&constant_bin[ 748264 ], 13, 1);
    PyTuple_SET_ITEM(const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 5, const_str_plain_disable_cache); Py_INCREF(const_str_plain_disable_cache);
    PyTuple_SET_ITEM(const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 6, const_str_plain_headers); Py_INCREF(const_str_plain_headers);
    const_tuple_str_plain_UnrewindableBodyError_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_UnrewindableBodyError_tuple, 0, const_str_plain_UnrewindableBodyError); Py_INCREF(const_str_plain_UnrewindableBodyError);
    const_tuple_str_plain_b_str_plain_integer_types_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_b_str_plain_integer_types_tuple, 0, const_str_plain_b); Py_INCREF(const_str_plain_b);
    PyTuple_SET_ITEM(const_tuple_str_plain_b_str_plain_integer_types_tuple, 1, const_str_plain_integer_types); Py_INCREF(const_str_plain_integer_types);
    const_str_digest_de34be5091ab4ac19953db79567103ed = UNSTREAM_STRING_ASCII(&constant_bin[ 748277 ], 65, 0);
    const_str_digest_0209911ea85084279425c4a3b9b4322a = UNSTREAM_STRING_ASCII(&constant_bin[ 748342 ], 230, 0);
    const_str_plain_ACCEPT_ENCODING = UNSTREAM_STRING_ASCII(&constant_bin[ 32199 ], 15, 1);
    const_str_digest_8b11285fb79bca8c9b65cdb3bcd47537 = UNSTREAM_STRING_ASCII(&constant_bin[ 748572 ], 13, 0);
    const_str_digest_77bc5054242d5f3e5269bd07a4342f1b = UNSTREAM_STRING_ASCII(&constant_bin[ 748585 ], 12, 0);
    const_str_digest_a97b46010ba2d7a042fbaf3749619f69 = UNSTREAM_STRING_ASCII(&constant_bin[ 748597 ], 8, 0);
    const_str_digest_5f141d838086b56fa77388201c41468d = UNSTREAM_STRING_ASCII(&constant_bin[ 748605 ], 52, 0);
    const_str_digest_5bbc1e7723c5316999b643d8effd069e = UNSTREAM_STRING_ASCII(&constant_bin[ 748657 ], 82, 0);
    const_str_digest_726f4c9a876879b008c85b6851a1570f = UNSTREAM_STRING_ASCII(&constant_bin[ 748739 ], 10, 0);
    const_str_plain_authorization = UNSTREAM_STRING_ASCII(&constant_bin[ 748749 ], 13, 1);
    const_str_digest_d50409c0c67db292fd3ed476bfe9cbf2 = UNSTREAM_STRING_ASCII(&constant_bin[ 748762 ], 19, 0);
    const_str_digest_62602cb6603929977f40e7e98d6957ef = UNSTREAM_STRING_ASCII(&constant_bin[ 748781 ], 29, 0);
    const_tuple_str_plain_body_str_plain_pos_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_body_str_plain_pos_tuple, 0, const_str_plain_body); Py_INCREF(const_str_plain_body);
    PyTuple_SET_ITEM(const_tuple_str_plain_body_str_plain_pos_tuple, 1, const_str_plain_pos); Py_INCREF(const_str_plain_pos);
    const_str_digest_47d4abcbaab2ba783709ab98383a7f12 = UNSTREAM_STRING_ASCII(&constant_bin[ 748810 ], 1035, 0);
    const_tuple_str_digest_de34be5091ab4ac19953db79567103ed_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_de34be5091ab4ac19953db79567103ed_tuple, 0, const_str_digest_de34be5091ab4ac19953db79567103ed); Py_INCREF(const_str_digest_de34be5091ab4ac19953db79567103ed);
    const_str_digest_ddf86e8e76816cbf1b0e04f2c09fb410 = UNSTREAM_STRING_ASCII(&constant_bin[ 749845 ], 62, 0);
    const_str_plain__FAILEDTELL = UNSTREAM_STRING_ASCII(&constant_bin[ 32236 ], 11, 1);
    const_str_digest_cc5c142a5aaab5d4cf43012035230cc0 = UNSTREAM_STRING_ASCII(&constant_bin[ 749907 ], 127, 0);
    const_tuple_str_plain_body_str_plain_body_pos_str_plain_body_seek_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_body_str_plain_body_pos_str_plain_body_seek_tuple, 0, const_str_plain_body); Py_INCREF(const_str_plain_body);
    PyTuple_SET_ITEM(const_tuple_str_plain_body_str_plain_body_pos_str_plain_body_seek_tuple, 1, const_str_plain_body_pos); Py_INCREF(const_str_plain_body_pos);
    PyTuple_SET_ITEM(const_tuple_str_plain_body_str_plain_body_pos_str_plain_body_seek_tuple, 2, const_str_plain_body_seek); Py_INCREF(const_str_plain_body_seek);
    const_tuple_str_digest_5bbc1e7723c5316999b643d8effd069e_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_5bbc1e7723c5316999b643d8effd069e_tuple, 0, const_str_digest_5bbc1e7723c5316999b643d8effd069e); Py_INCREF(const_str_digest_5bbc1e7723c5316999b643d8effd069e);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$util$request(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_15c92d0183396b96cc043510d1933a2e;
static PyCodeObject *codeobj_0a12b071548c16ec8e45ee0d619aa423;
static PyCodeObject *codeobj_0efe50bc679c9446be681e0462bdd6a3;
static PyCodeObject *codeobj_b0b60452ade20df0d57faed50ecca6c5;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_ddf86e8e76816cbf1b0e04f2c09fb410;
    codeobj_15c92d0183396b96cc043510d1933a2e = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_62602cb6603929977f40e7e98d6957ef, const_tuple_empty, 0, 0, 0);
    codeobj_0a12b071548c16ec8e45ee0d619aa423 = MAKE_CODEOBJECT(module_filename_obj, 11, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_make_headers, const_tuple_bf13d4977692576812fdd050c4821ab2_tuple, 6, 0, 0);
    codeobj_0efe50bc679c9446be681e0462bdd6a3 = MAKE_CODEOBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_rewind_body, const_tuple_str_plain_body_str_plain_body_pos_str_plain_body_seek_tuple, 2, 0, 0);
    codeobj_b0b60452ade20df0d57faed50ecca6c5 = MAKE_CODEOBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_set_file_position, const_tuple_str_plain_body_str_plain_pos_tuple, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function_1_make_headers(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function_2_set_file_position();


static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function_3_rewind_body();


// The module function definitions.
static PyObject *impl_urllib3$util$request$$$function_1_make_headers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_keep_alive = python_pars[0];
    PyObject *par_accept_encoding = python_pars[1];
    PyObject *par_user_agent = python_pars[2];
    PyObject *par_basic_auth = python_pars[3];
    PyObject *par_proxy_basic_auth = python_pars[4];
    PyObject *par_disable_cache = python_pars[5];
    PyObject *var_headers = NULL;
    struct Nuitka_FrameObject *frame_0a12b071548c16ec8e45ee0d619aa423;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    static struct Nuitka_FrameObject *cache_frame_0a12b071548c16ec8e45ee0d619aa423 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert(var_headers == NULL);
        var_headers = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_0a12b071548c16ec8e45ee0d619aa423, codeobj_0a12b071548c16ec8e45ee0d619aa423, module_urllib3$util$request, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_0a12b071548c16ec8e45ee0d619aa423 = cache_frame_0a12b071548c16ec8e45ee0d619aa423;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0a12b071548c16ec8e45ee0d619aa423);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0a12b071548c16ec8e45ee0d619aa423) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_accept_encoding);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_accept_encoding);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooo";
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            CHECK_OBJECT(par_accept_encoding);
            tmp_isinstance_inst_1 = par_accept_encoding;
            tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
            tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "ooooooo";
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
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_isinstance_inst_2;
                PyObject *tmp_isinstance_cls_2;
                CHECK_OBJECT(par_accept_encoding);
                tmp_isinstance_inst_2 = par_accept_encoding;
                tmp_isinstance_cls_2 = (PyObject *)&PyList_Type;
                tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 51;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_3;
                } else {
                    goto branch_no_3;
                }
                branch_yes_3:;
                {
                    PyObject *tmp_assign_source_2;
                    PyObject *tmp_called_instance_1;
                    PyObject *tmp_args_element_name_1;
                    tmp_called_instance_1 = const_str_chr_44;
                    CHECK_OBJECT(par_accept_encoding);
                    tmp_args_element_name_1 = par_accept_encoding;
                    frame_0a12b071548c16ec8e45ee0d619aa423->m_frame.f_lineno = 52;
                    {
                        PyObject *call_args[] = {tmp_args_element_name_1};
                        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_join, call_args);
                    }

                    if (tmp_assign_source_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 52;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = par_accept_encoding;
                        assert(old != NULL);
                        par_accept_encoding = tmp_assign_source_2;
                        Py_DECREF(old);
                    }

                }
                goto branch_end_3;
                branch_no_3:;
                {
                    PyObject *tmp_assign_source_3;
                    PyObject *tmp_mvar_value_1;
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_ACCEPT_ENCODING);

                    if (unlikely(tmp_mvar_value_1 == NULL)) {
                        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ACCEPT_ENCODING);
                    }

                    if (tmp_mvar_value_1 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 32193 ], 37, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 54;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_assign_source_3 = tmp_mvar_value_1;
                    {
                        PyObject *old = par_accept_encoding;
                        assert(old != NULL);
                        par_accept_encoding = tmp_assign_source_3;
                        Py_INCREF(par_accept_encoding);
                        Py_DECREF(old);
                    }

                }
                branch_end_3:;
            }
            branch_no_2:;
        }
        if (par_accept_encoding == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "accept_encoding");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 55;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dictset_value = par_accept_encoding;
        CHECK_OBJECT(var_headers);
        tmp_dictset_dict = var_headers;
        tmp_dictset_key = const_str_digest_f4cf83dd2e7e2f235646bf31dc9dfbff;
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        assert(!(tmp_res != 0));
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_user_agent);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_user_agent);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        branch_yes_4:;
        CHECK_OBJECT(par_user_agent);
        tmp_dictset_value = par_user_agent;
        CHECK_OBJECT(var_headers);
        tmp_dictset_dict = var_headers;
        tmp_dictset_key = const_str_digest_726f4c9a876879b008c85b6851a1570f;
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        assert(!(tmp_res != 0));
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_keep_alive);
        tmp_truth_name_3 = CHECK_IF_TRUE(par_keep_alive);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
        branch_yes_5:;
        tmp_dictset_value = const_str_digest_141f53ac830b1d16e6fa74a381d6e6a2;
        CHECK_OBJECT(var_headers);
        tmp_dictset_dict = var_headers;
        tmp_dictset_key = const_str_plain_connection;
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        assert(!(tmp_res != 0));
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_4;
        CHECK_OBJECT(par_basic_auth);
        tmp_truth_name_4 = CHECK_IF_TRUE(par_basic_auth);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_3;
            tmp_left_name_1 = const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_b64encode);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_b64encode);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 21306 ], 31, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 65;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_b);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_b);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 27153 ], 23, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 65;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT(par_basic_auth);
            tmp_args_element_name_3 = par_basic_auth;
            frame_0a12b071548c16ec8e45ee0d619aa423->m_frame.f_lineno = 65;
            tmp_args_element_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
            if (tmp_args_element_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_0a12b071548c16ec8e45ee0d619aa423->m_frame.f_lineno = 65;
            tmp_called_instance_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_0a12b071548c16ec8e45ee0d619aa423->m_frame.f_lineno = 65;
            tmp_right_name_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_decode, &PyTuple_GET_ITEM(const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0));

            Py_DECREF(tmp_called_instance_2);
            if (tmp_right_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dictset_value = BINARY_OPERATION_ADD_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
            Py_DECREF(tmp_right_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_headers);
            tmp_dictset_dict = var_headers;
            tmp_dictset_key = const_str_plain_authorization;
            tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_5;
        CHECK_OBJECT(par_proxy_basic_auth);
        tmp_truth_name_5 = CHECK_IF_TRUE(par_proxy_basic_auth);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_5;
            tmp_left_name_2 = const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_b64encode);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_b64encode);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 21306 ], 31, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 69;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_4;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_b);

            if (unlikely(tmp_mvar_value_5 == NULL)) {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_b);
            }

            if (tmp_mvar_value_5 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 27153 ], 23, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 69;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_5;
            CHECK_OBJECT(par_proxy_basic_auth);
            tmp_args_element_name_5 = par_proxy_basic_auth;
            frame_0a12b071548c16ec8e45ee0d619aa423->m_frame.f_lineno = 69;
            tmp_args_element_name_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_5);
            if (tmp_args_element_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_0a12b071548c16ec8e45ee0d619aa423->m_frame.f_lineno = 69;
            tmp_called_instance_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_4);
            Py_DECREF(tmp_args_element_name_4);
            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_0a12b071548c16ec8e45ee0d619aa423->m_frame.f_lineno = 69;
            tmp_right_name_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_decode, &PyTuple_GET_ITEM(const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0));

            Py_DECREF(tmp_called_instance_3);
            if (tmp_right_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dictset_value = BINARY_OPERATION_ADD_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
            Py_DECREF(tmp_right_name_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_headers);
            tmp_dictset_dict = var_headers;
            tmp_dictset_key = const_str_digest_d50409c0c67db292fd3ed476bfe9cbf2;
            tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_6;
        CHECK_OBJECT(par_disable_cache);
        tmp_truth_name_6 = CHECK_IF_TRUE(par_disable_cache);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
        branch_yes_8:;
        tmp_dictset_value = const_str_digest_a97b46010ba2d7a042fbaf3749619f69;
        CHECK_OBJECT(var_headers);
        tmp_dictset_dict = var_headers;
        tmp_dictset_key = const_str_digest_8b11285fb79bca8c9b65cdb3bcd47537;
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        assert(!(tmp_res != 0));
        branch_no_8:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0a12b071548c16ec8e45ee0d619aa423);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0a12b071548c16ec8e45ee0d619aa423);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0a12b071548c16ec8e45ee0d619aa423, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_0a12b071548c16ec8e45ee0d619aa423->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0a12b071548c16ec8e45ee0d619aa423, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0a12b071548c16ec8e45ee0d619aa423,
        type_description_1,
        par_keep_alive,
        par_accept_encoding,
        par_user_agent,
        par_basic_auth,
        par_proxy_basic_auth,
        par_disable_cache,
        var_headers
    );


    // Release cached frame.
    if (frame_0a12b071548c16ec8e45ee0d619aa423 == cache_frame_0a12b071548c16ec8e45ee0d619aa423) {
        Py_DECREF(frame_0a12b071548c16ec8e45ee0d619aa423);
    }
    cache_frame_0a12b071548c16ec8e45ee0d619aa423 = NULL;

    assertFrameObject(frame_0a12b071548c16ec8e45ee0d619aa423);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_headers);
    tmp_return_value = var_headers;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$util$request$$$function_1_make_headers);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_accept_encoding);
    par_accept_encoding = NULL;

    CHECK_OBJECT((PyObject *)var_headers);
    Py_DECREF(var_headers);
    var_headers = NULL;

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

    Py_XDECREF(par_accept_encoding);
    par_accept_encoding = NULL;

    CHECK_OBJECT((PyObject *)var_headers);
    Py_DECREF(var_headers);
    var_headers = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$request$$$function_1_make_headers);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_keep_alive);
    Py_DECREF(par_keep_alive);
    CHECK_OBJECT(par_user_agent);
    Py_DECREF(par_user_agent);
    CHECK_OBJECT(par_basic_auth);
    Py_DECREF(par_basic_auth);
    CHECK_OBJECT(par_proxy_basic_auth);
    Py_DECREF(par_proxy_basic_auth);
    CHECK_OBJECT(par_disable_cache);
    Py_DECREF(par_disable_cache);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_keep_alive);
    Py_DECREF(par_keep_alive);
    CHECK_OBJECT(par_user_agent);
    Py_DECREF(par_user_agent);
    CHECK_OBJECT(par_basic_auth);
    Py_DECREF(par_basic_auth);
    CHECK_OBJECT(par_proxy_basic_auth);
    Py_DECREF(par_proxy_basic_auth);
    CHECK_OBJECT(par_disable_cache);
    Py_DECREF(par_disable_cache);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$request$$$function_2_set_file_position(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_body = python_pars[0];
    PyObject *par_pos = python_pars[1];
    struct Nuitka_FrameObject *frame_b0b60452ade20df0d57faed50ecca6c5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b0b60452ade20df0d57faed50ecca6c5 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_b0b60452ade20df0d57faed50ecca6c5, codeobj_b0b60452ade20df0d57faed50ecca6c5, module_urllib3$util$request, sizeof(void *)+sizeof(void *));
    frame_b0b60452ade20df0d57faed50ecca6c5 = cache_frame_b0b60452ade20df0d57faed50ecca6c5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b0b60452ade20df0d57faed50ecca6c5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b0b60452ade20df0d57faed50ecca6c5) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_pos);
        tmp_compexpr_left_1 = par_pos;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_rewind_body);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_rewind_body);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 23662 ], 33, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 83;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT(par_body);
            tmp_args_element_name_1 = par_body;
            CHECK_OBJECT(par_pos);
            tmp_args_element_name_2 = par_pos;
            frame_b0b60452ade20df0d57faed50ecca6c5->m_frame.f_lineno = 83;
            {
                PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
            }

            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_getattr_target_1;
            PyObject *tmp_getattr_attr_1;
            PyObject *tmp_getattr_default_1;
            CHECK_OBJECT(par_body);
            tmp_getattr_target_1 = par_body;
            tmp_getattr_attr_1 = const_str_plain_tell;
            tmp_getattr_default_1 = Py_None;
            tmp_compexpr_left_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
            if (tmp_compexpr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = Py_None;
            tmp_condition_result_2 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF(tmp_compexpr_left_2);
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
            branch_yes_2:;
            // Tried code:
            {
                PyObject *tmp_assign_source_1;
                PyObject *tmp_called_instance_1;
                CHECK_OBJECT(par_body);
                tmp_called_instance_1 = par_body;
                frame_b0b60452ade20df0d57faed50ecca6c5->m_frame.f_lineno = 86;
                tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_tell);
                if (tmp_assign_source_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 86;
                    type_description_1 = "oo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = par_pos;
                    assert(old != NULL);
                    par_pos = tmp_assign_source_1;
                    Py_DECREF(old);
                }

            }
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

            // Preserve existing published exception.
            exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
            Py_XINCREF(exception_preserved_type_1);
            exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
            Py_XINCREF(exception_preserved_value_1);
            exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
            Py_XINCREF(exception_preserved_tb_1);

            if (exception_keeper_tb_1 == NULL) {
                exception_keeper_tb_1 = MAKE_TRACEBACK(frame_b0b60452ade20df0d57faed50ecca6c5, exception_keeper_lineno_1);
            } else if (exception_keeper_lineno_1 != 0) {
                exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_b0b60452ade20df0d57faed50ecca6c5, exception_keeper_lineno_1);
            }

            NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
            PyException_SetTraceback(exception_keeper_value_1, (PyObject *)exception_keeper_tb_1);
            PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
            // Tried code:
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
                tmp_compexpr_right_3 = const_tuple_type_OSError_type_OSError_tuple;
                tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_3, tmp_compexpr_right_3);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 87;
                    type_description_1 = "oo";
                    goto try_except_handler_3;
                }
                tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_3;
                } else {
                    goto branch_no_3;
                }
                branch_yes_3:;
                {
                    PyObject *tmp_assign_source_2;
                    PyObject *tmp_mvar_value_2;
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain__FAILEDTELL);

                    if (unlikely(tmp_mvar_value_2 == NULL)) {
                        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__FAILEDTELL);
                    }

                    if (tmp_mvar_value_2 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 32230 ], 33, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 90;
                        type_description_1 = "oo";
                        goto try_except_handler_3;
                    }

                    tmp_assign_source_2 = tmp_mvar_value_2;
                    {
                        PyObject *old = par_pos;
                        assert(old != NULL);
                        par_pos = tmp_assign_source_2;
                        Py_INCREF(par_pos);
                        Py_DECREF(old);
                    }

                }
                goto branch_end_3;
                branch_no_3:;
                tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                if (unlikely(tmp_result == false)) {
                    exception_lineno = 85;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_b0b60452ade20df0d57faed50ecca6c5->m_frame) frame_b0b60452ade20df0d57faed50ecca6c5->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "oo";
                goto try_except_handler_3;
                branch_end_3:;
            }
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

            // Restore previous exception.
            SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto frame_exception_exit_1;
            // End of try:
            try_end_2:;
            // Restore previous exception.
            SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
            goto try_end_1;
            // exception handler codes exits in all cases
            NUITKA_CANNOT_GET_HERE(urllib3$util$request$$$function_2_set_file_position);
            return NULL;
            // End of try:
            try_end_1:;
            branch_no_2:;
        }
        branch_end_1:;
    }
    if (par_pos == NULL) {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF(exception_type);
        exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "pos");
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 92;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_pos;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b0b60452ade20df0d57faed50ecca6c5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b0b60452ade20df0d57faed50ecca6c5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b0b60452ade20df0d57faed50ecca6c5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b0b60452ade20df0d57faed50ecca6c5, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_b0b60452ade20df0d57faed50ecca6c5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b0b60452ade20df0d57faed50ecca6c5, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b0b60452ade20df0d57faed50ecca6c5,
        type_description_1,
        par_body,
        par_pos
    );


    // Release cached frame.
    if (frame_b0b60452ade20df0d57faed50ecca6c5 == cache_frame_b0b60452ade20df0d57faed50ecca6c5) {
        Py_DECREF(frame_b0b60452ade20df0d57faed50ecca6c5);
    }
    cache_frame_b0b60452ade20df0d57faed50ecca6c5 = NULL;

    assertFrameObject(frame_b0b60452ade20df0d57faed50ecca6c5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$util$request$$$function_2_set_file_position);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_pos);
    par_pos = NULL;

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

    Py_XDECREF(par_pos);
    par_pos = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$request$$$function_2_set_file_position);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$request$$$function_3_rewind_body(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_body = python_pars[0];
    PyObject *par_body_pos = python_pars[1];
    PyObject *var_body_seek = NULL;
    struct Nuitka_FrameObject *frame_0efe50bc679c9446be681e0462bdd6a3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_0efe50bc679c9446be681e0462bdd6a3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_0efe50bc679c9446be681e0462bdd6a3, codeobj_0efe50bc679c9446be681e0462bdd6a3, module_urllib3$util$request, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_0efe50bc679c9446be681e0462bdd6a3 = cache_frame_0efe50bc679c9446be681e0462bdd6a3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0efe50bc679c9446be681e0462bdd6a3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0efe50bc679c9446be681e0462bdd6a3) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(par_body);
        tmp_getattr_target_1 = par_body;
        tmp_getattr_attr_1 = const_str_plain_seek;
        tmp_getattr_default_1 = Py_None;
        tmp_assign_source_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_body_seek == NULL);
        var_body_seek = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(var_body_seek);
        tmp_compexpr_left_1 = var_body_seek;
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_body_pos);
        tmp_isinstance_inst_1 = par_body_pos;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_integer_types);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_integer_types);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 25270 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 107;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        // Tried code:
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT(var_body_seek);
            tmp_called_name_1 = var_body_seek;
            CHECK_OBJECT(par_body_pos);
            tmp_args_element_name_1 = par_body_pos;
            frame_0efe50bc679c9446be681e0462bdd6a3->m_frame.f_lineno = 109;
            tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            Py_DECREF(tmp_call_result_1);
        }
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

        // Preserve existing published exception.
        exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF(exception_preserved_type_1);
        exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF(exception_preserved_value_1);
        exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF(exception_preserved_tb_1);

        if (exception_keeper_tb_1 == NULL) {
            exception_keeper_tb_1 = MAKE_TRACEBACK(frame_0efe50bc679c9446be681e0462bdd6a3, exception_keeper_lineno_1);
        } else if (exception_keeper_lineno_1 != 0) {
            exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_0efe50bc679c9446be681e0462bdd6a3, exception_keeper_lineno_1);
        }

        NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
        PyException_SetTraceback(exception_keeper_value_1, (PyObject *)exception_keeper_tb_1);
        PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
        // Tried code:
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_2 = const_tuple_type_OSError_type_OSError_tuple;
            tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_2;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_UnrewindableBodyError);

                if (unlikely(tmp_mvar_value_2 == NULL)) {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_UnrewindableBodyError);
                }

                if (tmp_mvar_value_2 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 25305 ], 43, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 111;
                    type_description_1 = "ooo";
                    goto try_except_handler_3;
                }

                tmp_called_name_2 = tmp_mvar_value_2;
                frame_0efe50bc679c9446be681e0462bdd6a3->m_frame.f_lineno = 111;
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1(tmp_called_name_2, &PyTuple_GET_ITEM(const_tuple_str_digest_de34be5091ab4ac19953db79567103ed_tuple, 0));

                if (tmp_raise_type_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 111;
                    type_description_1 = "ooo";
                    goto try_except_handler_3;
                }
                exception_type = tmp_raise_type_1;
                exception_lineno = 111;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            goto branch_end_2;
            branch_no_2:;
            tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            if (unlikely(tmp_result == false)) {
                exception_lineno = 108;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_0efe50bc679c9446be681e0462bdd6a3->m_frame) frame_0efe50bc679c9446be681e0462bdd6a3->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooo";
            goto try_except_handler_3;
            branch_end_2:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(urllib3$util$request$$$function_3_rewind_body);
        return NULL;
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

        // Restore previous exception.
        SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        // End of try:
        try_end_1:;
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_mvar_value_3;
            CHECK_OBJECT(par_body_pos);
            tmp_compexpr_left_3 = par_body_pos;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain__FAILEDTELL);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__FAILEDTELL);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 32230 ], 33, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 113;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_3 = tmp_mvar_value_3;
            tmp_condition_result_3 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_4;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_UnrewindableBodyError);

                if (unlikely(tmp_mvar_value_4 == NULL)) {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_UnrewindableBodyError);
                }

                if (tmp_mvar_value_4 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 25305 ], 43, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 114;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_4;
                frame_0efe50bc679c9446be681e0462bdd6a3->m_frame.f_lineno = 114;
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1(tmp_called_name_3, &PyTuple_GET_ITEM(const_tuple_str_digest_5bbc1e7723c5316999b643d8effd069e_tuple, 0));

                if (tmp_raise_type_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 114;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_2;
                exception_lineno = 114;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_make_exception_arg_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_type_arg_1;
                tmp_left_name_1 = const_str_digest_5f141d838086b56fa77388201c41468d;
                CHECK_OBJECT(par_body_pos);
                tmp_type_arg_1 = par_body_pos;
                tmp_right_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
                assert(!(tmp_right_name_1 == NULL));
                tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
                Py_DECREF(tmp_right_name_1);
                if (tmp_make_exception_arg_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 117;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                frame_0efe50bc679c9446be681e0462bdd6a3->m_frame.f_lineno = 117;
                tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
                Py_DECREF(tmp_make_exception_arg_1);
                assert(!(tmp_raise_type_3 == NULL));
                exception_type = tmp_raise_type_3;
                exception_lineno = 117;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            branch_end_3:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0efe50bc679c9446be681e0462bdd6a3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0efe50bc679c9446be681e0462bdd6a3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0efe50bc679c9446be681e0462bdd6a3, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_0efe50bc679c9446be681e0462bdd6a3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0efe50bc679c9446be681e0462bdd6a3, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0efe50bc679c9446be681e0462bdd6a3,
        type_description_1,
        par_body,
        par_body_pos,
        var_body_seek
    );


    // Release cached frame.
    if (frame_0efe50bc679c9446be681e0462bdd6a3 == cache_frame_0efe50bc679c9446be681e0462bdd6a3) {
        Py_DECREF(frame_0efe50bc679c9446be681e0462bdd6a3);
    }
    cache_frame_0efe50bc679c9446be681e0462bdd6a3 = NULL;

    assertFrameObject(frame_0efe50bc679c9446be681e0462bdd6a3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$util$request$$$function_3_rewind_body);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_body_seek);
    Py_DECREF(var_body_seek);
    var_body_seek = NULL;

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

    Py_XDECREF(var_body_seek);
    var_body_seek = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$request$$$function_3_rewind_body);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);
    CHECK_OBJECT(par_body_pos);
    Py_DECREF(par_body_pos);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);
    CHECK_OBJECT(par_body_pos);
    Py_DECREF(par_body_pos);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function_1_make_headers(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$request$$$function_1_make_headers,
        const_str_plain_make_headers,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0a12b071548c16ec8e45ee0d619aa423,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$request,
        const_str_digest_47d4abcbaab2ba783709ab98383a7f12,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function_2_set_file_position() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$request$$$function_2_set_file_position,
        const_str_plain_set_file_position,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b0b60452ade20df0d57faed50ecca6c5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$request,
        const_str_digest_cc5c142a5aaab5d4cf43012035230cc0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$request$$$function_3_rewind_body() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$request$$$function_3_rewind_body,
        const_str_plain_rewind_body,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0efe50bc679c9446be681e0462bdd6a3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$request,
        const_str_digest_0209911ea85084279425c4a3b9b4322a,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$util$request =
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

function_impl_code functable_urllib3$util$request[] = {
    impl_urllib3$util$request$$$function_1_make_headers,
    impl_urllib3$util$request$$$function_2_set_file_position,
    impl_urllib3$util$request$$$function_3_rewind_body,
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

    function_impl_code *current = functable_urllib3$util$request;
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

    if (offset > sizeof(functable_urllib3$util$request) || offset < 0) {
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
        functable_urllib3$util$request[offset],
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
        module_urllib3$util$request,
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
PyObject *modulecode_urllib3$util$request(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_urllib3$util$request;
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
    PRINT_STRING("urllib3.util.request: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("urllib3.util.request: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("urllib3.util.request: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initurllib3$util$request\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$util$request = Py_InitModule4(
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
    mdef_urllib3$util$request.m_name = module_full_name;
    module_urllib3$util$request = PyModule_Create(&mdef_urllib3$util$request);
#endif

    moduledict_urllib3$util$request = MODULE_DICT(module_urllib3$util$request);

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
        moduledict_urllib3$util$request,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$request,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$request,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$request,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$request,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_urllib3$util$request);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_urllib3$util$request);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_15c92d0183396b96cc043510d1933a2e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_ddf86e8e76816cbf1b0e04f2c09fb410;
        UPDATE_STRING_DICT0(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_15c92d0183396b96cc043510d1933a2e = MAKE_MODULE_FRAME(codeobj_15c92d0183396b96cc043510d1933a2e, module_urllib3$util$request);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_15c92d0183396b96cc043510d1933a2e);
    assert(Py_REFCNT(frame_15c92d0183396b96cc043510d1933a2e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_ddf86e8e76816cbf1b0e04f2c09fb410;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        frame_15c92d0183396b96cc043510d1933a2e->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_1 == NULL));
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_absolute_import);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_base64;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$util$request;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_b64encode_tuple;
        tmp_level_name_1 = const_int_0;
        frame_15c92d0183396b96cc043510d1933a2e->m_frame.f_lineno = 2;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_b64encode);
        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_b64encode, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_edd9cb70c3537b6a2b58ab6b4487087a;
        tmp_globals_name_2 = (PyObject *)moduledict_urllib3$util$request;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_b_str_plain_integer_types_tuple;
        tmp_level_name_2 = const_int_pos_2;
        frame_15c92d0183396b96cc043510d1933a2e->m_frame.f_lineno = 4;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
           tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_urllib3$util$request,
                const_str_plain_b,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_b);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_b, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
           tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_urllib3$util$request,
                const_str_plain_integer_types,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_integer_types);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_8);
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

    CHECK_OBJECT((PyObject *)tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT((PyObject *)tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_exceptions;
        tmp_globals_name_3 = (PyObject *)moduledict_urllib3$util$request;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_UnrewindableBodyError_tuple;
        tmp_level_name_3 = const_int_pos_2;
        frame_15c92d0183396b96cc043510d1933a2e->m_frame.f_lineno = 5;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_urllib3$util$request,
                const_str_plain_UnrewindableBodyError,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_UnrewindableBodyError);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_UnrewindableBodyError, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_str_digest_77bc5054242d5f3e5269bd07a4342f1b;
        UPDATE_STRING_DICT0(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_ACCEPT_ENCODING, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = (PyObject *)&PyBaseObject_Type;
        frame_15c92d0183396b96cc043510d1933a2e->m_frame.f_lineno = 8;
        tmp_assign_source_11 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain__FAILEDTELL, tmp_assign_source_11);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_15c92d0183396b96cc043510d1933a2e);
#endif
    popFrameStack();

    assertFrameObject(frame_15c92d0183396b96cc043510d1933a2e);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_15c92d0183396b96cc043510d1933a2e);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_15c92d0183396b96cc043510d1933a2e, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_15c92d0183396b96cc043510d1933a2e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_15c92d0183396b96cc043510d1933a2e, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_none_none_none_none_none_none_tuple;
        Py_INCREF(tmp_defaults_1);
        tmp_assign_source_12 = MAKE_FUNCTION_urllib3$util$request$$$function_1_make_headers(tmp_defaults_1);



        UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_make_headers, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_urllib3$util$request$$$function_2_set_file_position();



        UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_set_file_position, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_FUNCTION_urllib3$util$request$$$function_3_rewind_body();



        UPDATE_STRING_DICT1(moduledict_urllib3$util$request, (Nuitka_StringObject *)const_str_plain_rewind_body, tmp_assign_source_14);
    }

    return module_urllib3$util$request;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
