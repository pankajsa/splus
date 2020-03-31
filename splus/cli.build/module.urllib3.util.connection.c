/* Generated code for Python module 'urllib3.util.connection'
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

/* The "_module_urllib3$util$connection" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$connection;
PyDictObject *moduledict_urllib3$util$connection;

/* The declarations of module constants used, if any. */
static PyObject *const_tuple_664060554d14024ab8680ac41d6791f0_tuple;
static PyObject *const_dict_f0ddba86f2ff0b11c47720a0dc503699;
static PyObject *const_str_plain_family;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_tuple_str_digest_9613c3fc04783ef5920752aa27696d66_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain__GLOBAL_DEFAULT_TIMEOUT;
static PyObject *const_tuple_str_plain_host_str_plain_sock_str_plain_has_ipv6_tuple;
extern PyObject *const_str_plain_err;
extern PyObject *const_str_plain_af;
extern PyObject *const_str_plain_is_connection_dropped;
extern PyObject *const_str_plain_strip;
static PyObject *const_str_digest_d3595e84d8b1645204321774ba0ba260;
extern PyObject *const_str_plain_is_appengine_sandbox;
static PyObject *const_str_plain_getaddrinfo;
static PyObject *const_str_plain_bind;
extern PyObject *const_str_plain_connect;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_tuple_str_plain__appengine_environ_tuple;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_res;
static PyObject *const_str_plain_HAS_IPV6;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain_host;
extern PyObject *const_str_plain_wait_for_read;
static PyObject *const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple;
extern PyObject *const_str_plain_sock;
extern PyObject *const_str_plain_wait;
extern PyObject *const_str_plain_conn;
static PyObject *const_str_plain_SOCK_STREAM;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_chr_91;
static PyObject *const_str_digest_7ae26a9ac4203d9df210c0bb52d7bd2e;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_settimeout;
static PyObject *const_str_digest_9a8281a0cd80f856cf9186c57571aa88;
static PyObject *const_str_plain_has_ipv6;
static PyObject *const_str_plain_socktype;
extern PyObject *const_str_plain__appengine_environ;
extern PyObject *const_str_plain_error;
static PyObject *const_str_plain_proto;
static PyObject *const_str_digest_fd9e06b160161212aff03b5b4dc7aa13;
extern PyObject *const_str_plain_False;
extern PyObject *const_tuple_str_chr_91_tuple;
static PyObject *const_str_plain_setsockopt;
extern PyObject *const_str_plain_source_address;
extern PyObject *const_int_0;
static PyObject *const_str_plain_allowed_gai_family;
extern PyObject *const_str_plain_NoWayToWaitForSocketError;
static PyObject *const_str_digest_3f9fec55820f857461da4f1e12840da5;
static PyObject *const_str_digest_aeb5cd6f1dbaf2b626ce2a85efef1442;
extern PyObject *const_str_plain_origin;
static PyObject *const_tuple_str_plain_conn_str_plain_sock_tuple;
static PyObject *const_str_plain_canonname;
extern PyObject *const_str_digest_9613c3fc04783ef5920752aa27696d66;
static PyObject *const_tuple_str_plain_NoWayToWaitForSocketError_str_plain_wait_for_read_tuple;
static PyObject *const_str_plain_AF_UNSPEC;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_sa;
static PyObject *const_tuple_str_digest_3f9fec55820f857461da4f1e12840da5_tuple;
static PyObject *const_str_plain__has_ipv6;
static PyObject *const_tuple_str_digest_d3595e84d8b1645204321774ba0ba260_tuple;
extern PyObject *const_str_plain_socket_options;
static PyObject *const_str_digest_bf7ea3c7e38d6b386518702b965c150a;
extern PyObject *const_str_plain_opt;
extern PyObject *const_str_plain_AF_INET6;
static PyObject *const_str_plain_contrib;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_socket;
extern PyObject *const_str_plain_port;
static PyObject *const_str_plain_address;
static PyObject *const_tuple_str_plain_family_tuple;
extern PyObject *const_str_plain_create_connection;
extern PyObject *const_str_plain_AF_INET;
static PyObject *const_str_plain__set_socket_options;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_float_0_0;
static PyObject *const_str_digest_595445e1dc171ee3baa1f78d32383a82;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_tuple_664060554d14024ab8680ac41d6791f0_tuple = PyTuple_New(16);
    const_str_plain_address = UNSTREAM_STRING_ASCII(&constant_bin[ 24762 ], 7, 1);
    PyTuple_SET_ITEM(const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 0, const_str_plain_address); Py_INCREF(const_str_plain_address);
    PyTuple_SET_ITEM(const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 1, const_str_plain_timeout); Py_INCREF(const_str_plain_timeout);
    PyTuple_SET_ITEM(const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 2, const_str_plain_source_address); Py_INCREF(const_str_plain_source_address);
    PyTuple_SET_ITEM(const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 3, const_str_plain_socket_options); Py_INCREF(const_str_plain_socket_options);
    PyTuple_SET_ITEM(const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 4, const_str_plain_host); Py_INCREF(const_str_plain_host);
    PyTuple_SET_ITEM(const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 5, const_str_plain_port); Py_INCREF(const_str_plain_port);
    PyTuple_SET_ITEM(const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 6, const_str_plain_err); Py_INCREF(const_str_plain_err);
    const_str_plain_family = UNSTREAM_STRING_ASCII(&constant_bin[ 32100 ], 6, 1);
    PyTuple_SET_ITEM(const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 7, const_str_plain_family); Py_INCREF(const_str_plain_family);
    PyTuple_SET_ITEM(const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 8, const_str_plain_res); Py_INCREF(const_str_plain_res);
    PyTuple_SET_ITEM(const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 9, const_str_plain_af); Py_INCREF(const_str_plain_af);
    const_str_plain_socktype = UNSTREAM_STRING_ASCII(&constant_bin[ 746730 ], 8, 1);
    PyTuple_SET_ITEM(const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 10, const_str_plain_socktype); Py_INCREF(const_str_plain_socktype);
    const_str_plain_proto = UNSTREAM_STRING_ASCII(&constant_bin[ 642361 ], 5, 1);
    PyTuple_SET_ITEM(const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 11, const_str_plain_proto); Py_INCREF(const_str_plain_proto);
    const_str_plain_canonname = UNSTREAM_STRING_ASCII(&constant_bin[ 746738 ], 9, 1);
    PyTuple_SET_ITEM(const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 12, const_str_plain_canonname); Py_INCREF(const_str_plain_canonname);
    const_str_plain_sa = UNSTREAM_STRING_ASCII(&constant_bin[ 998 ], 2, 1);
    PyTuple_SET_ITEM(const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 13, const_str_plain_sa); Py_INCREF(const_str_plain_sa);
    PyTuple_SET_ITEM(const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 14, const_str_plain_sock); Py_INCREF(const_str_plain_sock);
    PyTuple_SET_ITEM(const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 15, const_str_plain_e); Py_INCREF(const_str_plain_e);
    const_dict_f0ddba86f2ff0b11c47720a0dc503699 = _PyDict_NewPresized( 1 );
    PyDict_SetItem(const_dict_f0ddba86f2ff0b11c47720a0dc503699, const_str_plain_timeout, const_float_0_0);
    assert(PyDict_Size(const_dict_f0ddba86f2ff0b11c47720a0dc503699) == 1);
    const_tuple_str_plain_host_str_plain_sock_str_plain_has_ipv6_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_host_str_plain_sock_str_plain_has_ipv6_tuple, 0, const_str_plain_host); Py_INCREF(const_str_plain_host);
    PyTuple_SET_ITEM(const_tuple_str_plain_host_str_plain_sock_str_plain_has_ipv6_tuple, 1, const_str_plain_sock); Py_INCREF(const_str_plain_sock);
    const_str_plain_has_ipv6 = UNSTREAM_STRING_ASCII(&constant_bin[ 746747 ], 8, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_host_str_plain_sock_str_plain_has_ipv6_tuple, 2, const_str_plain_has_ipv6); Py_INCREF(const_str_plain_has_ipv6);
    const_str_digest_d3595e84d8b1645204321774ba0ba260 = UNSTREAM_STRING_ASCII(&constant_bin[ 746755 ], 33, 0);
    const_str_plain_getaddrinfo = UNSTREAM_STRING_ASCII(&constant_bin[ 746755 ], 11, 1);
    const_str_plain_bind = UNSTREAM_STRING_ASCII(&constant_bin[ 382293 ], 4, 1);
    const_str_plain_HAS_IPV6 = UNSTREAM_STRING_ASCII(&constant_bin[ 32169 ], 8, 1);
    const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple, 0, const_str_plain_sock); Py_INCREF(const_str_plain_sock);
    PyTuple_SET_ITEM(const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple, 1, const_str_plain_options); Py_INCREF(const_str_plain_options);
    PyTuple_SET_ITEM(const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple, 2, const_str_plain_opt); Py_INCREF(const_str_plain_opt);
    const_str_plain_SOCK_STREAM = UNSTREAM_STRING_ASCII(&constant_bin[ 746788 ], 11, 1);
    const_str_digest_7ae26a9ac4203d9df210c0bb52d7bd2e = UNSTREAM_STRING_ASCII(&constant_bin[ 746799 ], 32, 0);
    const_str_digest_9a8281a0cd80f856cf9186c57571aa88 = UNSTREAM_STRING_ASCII(&constant_bin[ 746831 ], 288, 0);
    const_str_digest_fd9e06b160161212aff03b5b4dc7aa13 = UNSTREAM_STRING_ASCII(&constant_bin[ 747119 ], 179, 0);
    const_str_plain_setsockopt = UNSTREAM_STRING_ASCII(&constant_bin[ 747298 ], 10, 1);
    const_str_plain_allowed_gai_family = UNSTREAM_STRING_ASCII(&constant_bin[ 32088 ], 18, 1);
    const_str_digest_3f9fec55820f857461da4f1e12840da5 = UNSTREAM_STRING_ASCII(&constant_bin[ 747308 ], 3, 0);
    const_str_digest_aeb5cd6f1dbaf2b626ce2a85efef1442 = UNSTREAM_STRING_ASCII(&constant_bin[ 747311 ], 65, 0);
    const_tuple_str_plain_conn_str_plain_sock_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_conn_str_plain_sock_tuple, 0, const_str_plain_conn); Py_INCREF(const_str_plain_conn);
    PyTuple_SET_ITEM(const_tuple_str_plain_conn_str_plain_sock_tuple, 1, const_str_plain_sock); Py_INCREF(const_str_plain_sock);
    const_tuple_str_plain_NoWayToWaitForSocketError_str_plain_wait_for_read_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_NoWayToWaitForSocketError_str_plain_wait_for_read_tuple, 0, const_str_plain_NoWayToWaitForSocketError); Py_INCREF(const_str_plain_NoWayToWaitForSocketError);
    PyTuple_SET_ITEM(const_tuple_str_plain_NoWayToWaitForSocketError_str_plain_wait_for_read_tuple, 1, const_str_plain_wait_for_read); Py_INCREF(const_str_plain_wait_for_read);
    const_str_plain_AF_UNSPEC = UNSTREAM_STRING_ASCII(&constant_bin[ 747208 ], 9, 1);
    const_tuple_str_digest_3f9fec55820f857461da4f1e12840da5_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_3f9fec55820f857461da4f1e12840da5_tuple, 0, const_str_digest_3f9fec55820f857461da4f1e12840da5); Py_INCREF(const_str_digest_3f9fec55820f857461da4f1e12840da5);
    const_str_plain__has_ipv6 = UNSTREAM_STRING_ASCII(&constant_bin[ 747376 ], 9, 1);
    const_tuple_str_digest_d3595e84d8b1645204321774ba0ba260_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_d3595e84d8b1645204321774ba0ba260_tuple, 0, const_str_digest_d3595e84d8b1645204321774ba0ba260); Py_INCREF(const_str_digest_d3595e84d8b1645204321774ba0ba260);
    const_str_digest_bf7ea3c7e38d6b386518702b965c150a = UNSTREAM_STRING_ASCII(&constant_bin[ 747385 ], 54, 0);
    const_str_plain_contrib = UNSTREAM_STRING_ASCII(&constant_bin[ 628616 ], 7, 1);
    const_tuple_str_plain_family_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_family_tuple, 0, const_str_plain_family); Py_INCREF(const_str_plain_family);
    const_str_plain__set_socket_options = UNSTREAM_STRING_ASCII(&constant_bin[ 32128 ], 19, 1);
    const_str_digest_595445e1dc171ee3baa1f78d32383a82 = UNSTREAM_STRING_ASCII(&constant_bin[ 747439 ], 612, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$util$connection(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b9a5718b105a48646ada9bed2a02b1bb;
static PyCodeObject *codeobj_4431b89b6164980321c0a2129f3e74ab;
static PyCodeObject *codeobj_4aa1ce1cae7fbdda75a34f9e62e07254;
static PyCodeObject *codeobj_74a7f304e707420eb772c70aa71efe10;
static PyCodeObject *codeobj_35d91798ae6efe5192c65b7cbdf16475;
static PyCodeObject *codeobj_7f6fa198711bfe18ac454e55c5dd03c3;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_aeb5cd6f1dbaf2b626ce2a85efef1442;
    codeobj_b9a5718b105a48646ada9bed2a02b1bb = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_7ae26a9ac4203d9df210c0bb52d7bd2e, const_tuple_empty, 0, 0, 0);
    codeobj_4431b89b6164980321c0a2129f3e74ab = MAKE_CODEOBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__has_ipv6, const_tuple_str_plain_host_str_plain_sock_str_plain_has_ipv6_tuple, 1, 0, 0);
    codeobj_4aa1ce1cae7fbdda75a34f9e62e07254 = MAKE_CODEOBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__set_socket_options, const_tuple_str_plain_sock_str_plain_options_str_plain_opt_tuple, 2, 0, 0);
    codeobj_74a7f304e707420eb772c70aa71efe10 = MAKE_CODEOBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_allowed_gai_family, const_tuple_str_plain_family_tuple, 0, 0, 0);
    codeobj_35d91798ae6efe5192c65b7cbdf16475 = MAKE_CODEOBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_create_connection, const_tuple_664060554d14024ab8680ac41d6791f0_tuple, 4, 0, 0);
    codeobj_7f6fa198711bfe18ac454e55c5dd03c3 = MAKE_CODEOBJECT(module_filename_obj, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_is_connection_dropped, const_tuple_str_plain_conn_str_plain_sock_tuple, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_10_complex_call_helper_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_1_is_connection_dropped();


static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_2_create_connection(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_3__set_socket_options();


static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_4_allowed_gai_family();


static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_5__has_ipv6();


// The module function definitions.
static PyObject *impl_urllib3$util$connection$$$function_1_is_connection_dropped(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_conn = python_pars[0];
    PyObject *var_sock = NULL;
    struct Nuitka_FrameObject *frame_7f6fa198711bfe18ac454e55c5dd03c3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_7f6fa198711bfe18ac454e55c5dd03c3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_7f6fa198711bfe18ac454e55c5dd03c3, codeobj_7f6fa198711bfe18ac454e55c5dd03c3, module_urllib3$util$connection, sizeof(void *)+sizeof(void *));
    frame_7f6fa198711bfe18ac454e55c5dd03c3 = cache_frame_7f6fa198711bfe18ac454e55c5dd03c3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7f6fa198711bfe18ac454e55c5dd03c3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7f6fa198711bfe18ac454e55c5dd03c3) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(par_conn);
        tmp_getattr_target_1 = par_conn;
        tmp_getattr_attr_1 = const_str_plain_sock;
        tmp_getattr_default_1 = Py_False;
        tmp_assign_source_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_sock == NULL);
        var_sock = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_sock);
        tmp_compexpr_left_1 = var_sock;
        tmp_compexpr_right_1 = Py_False;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_sock);
        tmp_compexpr_left_2 = var_sock;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        tmp_return_value = Py_True;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_2:;
    }
    // Tried code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_wait_for_read);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_wait_for_read);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 32000 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 24;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(var_sock);
        tmp_tuple_element_1 = var_sock;
        tmp_args_name_1 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_kw_name_1 = PyDict_Copy(const_dict_f0ddba86f2ff0b11c47720a0dc503699);
        frame_7f6fa198711bfe18ac454e55c5dd03c3->m_frame.f_lineno = 24;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$util$connection$$$function_1_is_connection_dropped);
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_7f6fa198711bfe18ac454e55c5dd03c3, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_7f6fa198711bfe18ac454e55c5dd03c3, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    PyException_SetTraceback(exception_keeper_value_1, (PyObject *)exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_mvar_value_2;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_NoWayToWaitForSocketError);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NoWayToWaitForSocketError);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 32035 ], 47, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 25;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }

        tmp_compexpr_right_3 = tmp_mvar_value_2;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
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
        tmp_return_value = Py_False;
        Py_INCREF(tmp_return_value);
        goto try_return_handler_3;
        goto branch_end_3;
        branch_no_3:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 22;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_7f6fa198711bfe18ac454e55c5dd03c3->m_frame) frame_7f6fa198711bfe18ac454e55c5dd03c3->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto try_except_handler_3;
        branch_end_3:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$util$connection$$$function_1_is_connection_dropped);
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto frame_return_exit_1;
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

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f6fa198711bfe18ac454e55c5dd03c3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f6fa198711bfe18ac454e55c5dd03c3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f6fa198711bfe18ac454e55c5dd03c3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7f6fa198711bfe18ac454e55c5dd03c3, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_7f6fa198711bfe18ac454e55c5dd03c3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f6fa198711bfe18ac454e55c5dd03c3, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7f6fa198711bfe18ac454e55c5dd03c3,
        type_description_1,
        par_conn,
        var_sock
    );


    // Release cached frame.
    if (frame_7f6fa198711bfe18ac454e55c5dd03c3 == cache_frame_7f6fa198711bfe18ac454e55c5dd03c3) {
        Py_DECREF(frame_7f6fa198711bfe18ac454e55c5dd03c3);
    }
    cache_frame_7f6fa198711bfe18ac454e55c5dd03c3 = NULL;

    assertFrameObject(frame_7f6fa198711bfe18ac454e55c5dd03c3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$util$connection$$$function_1_is_connection_dropped);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_sock);
    Py_DECREF(var_sock);
    var_sock = NULL;

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

    Py_XDECREF(var_sock);
    var_sock = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$connection$$$function_1_is_connection_dropped);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_conn);
    Py_DECREF(par_conn);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_conn);
    Py_DECREF(par_conn);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$connection$$$function_2_create_connection(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_address = python_pars[0];
    PyObject *par_timeout = python_pars[1];
    PyObject *par_source_address = python_pars[2];
    PyObject *par_socket_options = python_pars[3];
    PyObject *var_host = NULL;
    PyObject *var_port = NULL;
    PyObject *var_err = NULL;
    PyObject *var_family = NULL;
    PyObject *var_res = NULL;
    PyObject *var_af = NULL;
    PyObject *var_socktype = NULL;
    PyObject *var_proto = NULL;
    PyObject *var_canonname = NULL;
    PyObject *var_sa = NULL;
    PyObject *var_sock = NULL;
    PyObject *var_e = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__element_5 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_35d91798ae6efe5192c65b7cbdf16475;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    bool tmp_result;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_35d91798ae6efe5192c65b7cbdf16475 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_35d91798ae6efe5192c65b7cbdf16475, codeobj_35d91798ae6efe5192c65b7cbdf16475, module_urllib3$util$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_35d91798ae6efe5192c65b7cbdf16475 = cache_frame_35d91798ae6efe5192c65b7cbdf16475;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_35d91798ae6efe5192c65b7cbdf16475);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_35d91798ae6efe5192c65b7cbdf16475) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_address);
        tmp_iter_arg_1 = par_address;
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 47;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 47;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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

                    type_description_1 = "oooooooooooooooo";
                    exception_lineno = 47;
                    goto try_except_handler_3;
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

            type_description_1 = "oooooooooooooooo";
            exception_lineno = 47;
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

    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_host == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_host = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_port == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_port = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_host);
        tmp_called_instance_1 = var_host;
        frame_35d91798ae6efe5192c65b7cbdf16475->m_frame.f_lineno = 48;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM(const_tuple_str_chr_91_tuple, 0));

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 48;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_instance_2;
            CHECK_OBJECT(var_host);
            tmp_called_instance_2 = var_host;
            frame_35d91798ae6efe5192c65b7cbdf16475->m_frame.f_lineno = 49;
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_strip, &PyTuple_GET_ITEM(const_tuple_str_digest_9613c3fc04783ef5920752aa27696d66_tuple, 0));

            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_host;
                assert(old != NULL);
                var_host = tmp_assign_source_6;
                Py_DECREF(old);
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_None;
        assert(var_err == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_err = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_allowed_gai_family);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_allowed_gai_family);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 32082 ], 40, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 55;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_35d91798ae6efe5192c65b7cbdf16475->m_frame.f_lineno = 55;
        tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_family == NULL);
        var_family = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_socket);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20542 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_getaddrinfo);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_host);
        tmp_args_element_name_1 = var_host;
        CHECK_OBJECT(var_port);
        tmp_args_element_name_2 = var_port;
        CHECK_OBJECT(var_family);
        tmp_args_element_name_3 = var_family;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_socket);
        }

        if (tmp_mvar_value_3 == NULL) {
            Py_DECREF(tmp_called_name_2);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20542 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_SOCK_STREAM);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 57;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_35d91798ae6efe5192c65b7cbdf16475->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_9;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_10 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooo";
                exception_lineno = 57;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_11 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_res;
            var_res = tmp_assign_source_11;
            Py_INCREF(var_res);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(var_res);
        tmp_iter_arg_3 = var_res;
        tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_3, 0, 5);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 58;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_4, 1, 5);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 58;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_5, 2, 5);
        if (tmp_assign_source_15 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 58;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_3;
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tmp_unpack_6, 3, 5);
        if (tmp_assign_source_16 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 58;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_4;
            tmp_tuple_unpack_2__element_4 = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tmp_unpack_7, 4, 5);
        if (tmp_assign_source_17 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooo";
            exception_lineno = 58;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_5;
            tmp_tuple_unpack_2__element_5 = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

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

                    type_description_1 = "oooooooooooooooo";
                    exception_lineno = 58;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format(PyExc_ValueError, "too many values to unpack");
#else
            PyErr_Format(PyExc_ValueError, "too many values to unpack (expected 5)");
#endif
            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            type_description_1 = "oooooooooooooooo";
            exception_lineno = 58;
            goto try_except_handler_6;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    Py_XDECREF(tmp_tuple_unpack_2__element_4);
    tmp_tuple_unpack_2__element_4 = NULL;

    Py_XDECREF(tmp_tuple_unpack_2__element_5);
    tmp_tuple_unpack_2__element_5 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_18 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_af;
            var_af = tmp_assign_source_18;
            Py_INCREF(var_af);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_19 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_socktype;
            var_socktype = tmp_assign_source_19;
            Py_INCREF(var_socktype);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_20 = tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = var_proto;
            var_proto = tmp_assign_source_20;
            Py_INCREF(var_proto);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_4);
        tmp_assign_source_21 = tmp_tuple_unpack_2__element_4;
        {
            PyObject *old = var_canonname;
            var_canonname = tmp_assign_source_21;
            Py_INCREF(var_canonname);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_4);
    tmp_tuple_unpack_2__element_4 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_5);
        tmp_assign_source_22 = tmp_tuple_unpack_2__element_5;
        {
            PyObject *old = var_sa;
            var_sa = tmp_assign_source_22;
            Py_INCREF(var_sa);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_5);
    tmp_tuple_unpack_2__element_5 = NULL;

    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = Py_None;
        {
            PyObject *old = var_sock;
            var_sock = tmp_assign_source_23;
            Py_INCREF(var_sock);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_socket);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20542 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 61;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_instance_3 = tmp_mvar_value_4;
        CHECK_OBJECT(var_af);
        tmp_args_element_name_5 = var_af;
        CHECK_OBJECT(var_socktype);
        tmp_args_element_name_6 = var_socktype;
        CHECK_OBJECT(var_proto);
        tmp_args_element_name_7 = var_proto;
        frame_35d91798ae6efe5192c65b7cbdf16475->m_frame.f_lineno = 61;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_assign_source_24 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_3, const_str_plain_socket, call_args);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_sock;
            assert(old != NULL);
            var_sock = tmp_assign_source_24;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain__set_socket_options);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__set_socket_options);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 32122 ], 41, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 64;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_name_3 = tmp_mvar_value_5;
        CHECK_OBJECT(var_sock);
        tmp_args_element_name_8 = var_sock;
        CHECK_OBJECT(par_socket_options);
        tmp_args_element_name_9 = par_socket_options;
        frame_35d91798ae6efe5192c65b7cbdf16475->m_frame.f_lineno = 64;
        {
            PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_6;
        CHECK_OBJECT(par_timeout);
        tmp_compexpr_left_1 = par_timeout;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_socket);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20542 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_source_name_3 = tmp_mvar_value_6;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__GLOBAL_DEFAULT_TIMEOUT);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_2 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_10;
            CHECK_OBJECT(var_sock);
            tmp_called_instance_4 = var_sock;
            CHECK_OBJECT(par_timeout);
            tmp_args_element_name_10 = par_timeout;
            frame_35d91798ae6efe5192c65b7cbdf16475->m_frame.f_lineno = 67;
            {
                PyObject *call_args[] = {tmp_args_element_name_10};
                tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_settimeout, call_args);
            }

            if (tmp_call_result_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_7;
            }
            Py_DECREF(tmp_call_result_3);
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_source_address);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_source_address);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_element_name_11;
            CHECK_OBJECT(var_sock);
            tmp_called_instance_5 = var_sock;
            CHECK_OBJECT(par_source_address);
            tmp_args_element_name_11 = par_source_address;
            frame_35d91798ae6efe5192c65b7cbdf16475->m_frame.f_lineno = 69;
            {
                PyObject *call_args[] = {tmp_args_element_name_11};
                tmp_call_result_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_bind, call_args);
            }

            if (tmp_call_result_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_1 = "oooooooooooooooo";
                goto try_except_handler_7;
            }
            Py_DECREF(tmp_call_result_4);
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_12;
        CHECK_OBJECT(var_sock);
        tmp_called_instance_6 = var_sock;
        CHECK_OBJECT(var_sa);
        tmp_args_element_name_12 = var_sa;
        frame_35d91798ae6efe5192c65b7cbdf16475->m_frame.f_lineno = 70;
        {
            PyObject *call_args[] = {tmp_args_element_name_12};
            tmp_call_result_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, const_str_plain_connect, call_args);
        }

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_5);
    }
    CHECK_OBJECT(var_sock);
    tmp_return_value = var_sock;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$util$connection$$$function_2_create_connection);
    return NULL;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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

    if (exception_keeper_tb_5 == NULL) {
        exception_keeper_tb_5 = MAKE_TRACEBACK(frame_35d91798ae6efe5192c65b7cbdf16475, exception_keeper_lineno_5);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_35d91798ae6efe5192c65b7cbdf16475, exception_keeper_lineno_5);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    PyException_SetTraceback(exception_keeper_value_5, (PyObject *)exception_keeper_tb_5);
    PUBLISH_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_7;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_socket);
        }

        if (tmp_mvar_value_7 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20542 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 73;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_source_name_4 = tmp_mvar_value_7;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_error);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_assign_source_25;
            tmp_assign_source_25 = EXC_VALUE(PyThreadState_GET());
            {
                PyObject *old = var_e;
                var_e = tmp_assign_source_25;
                Py_INCREF(var_e);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_26;
            CHECK_OBJECT(var_e);
            tmp_assign_source_26 = var_e;
            {
                PyObject *old = var_err;
                var_err = tmp_assign_source_26;
                Py_INCREF(var_err);
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT(var_sock);
            tmp_compexpr_left_3 = var_sock;
            tmp_compexpr_right_3 = Py_None;
            tmp_condition_result_5 = (tmp_compexpr_left_3 != tmp_compexpr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_called_instance_7;
                PyObject *tmp_call_result_6;
                CHECK_OBJECT(var_sock);
                tmp_called_instance_7 = var_sock;
                frame_35d91798ae6efe5192c65b7cbdf16475->m_frame.f_lineno = 76;
                tmp_call_result_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, const_str_plain_close);
                if (tmp_call_result_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 76;
                    type_description_1 = "oooooooooooooooo";
                    goto try_except_handler_9;
                }
                Py_DECREF(tmp_call_result_6);
            }
            {
                PyObject *tmp_assign_source_27;
                tmp_assign_source_27 = Py_None;
                {
                    PyObject *old = var_sock;
                    assert(old != NULL);
                    var_sock = tmp_assign_source_27;
                    Py_INCREF(var_sock);
                    Py_DECREF(old);
                }

            }
            branch_no_5:;
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(var_e);
        var_e = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_8;
        // End of try:
        try_end_5:;
        Py_XDECREF(var_e);
        var_e = NULL;

        goto branch_end_4;
        branch_no_4:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 60;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_35d91798ae6efe5192c65b7cbdf16475->m_frame) frame_35d91798ae6efe5192c65b7cbdf16475->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_8;
        branch_end_4:;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_4;
    // End of try:
    try_end_6:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto try_end_7;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$util$connection$$$function_2_create_connection);
    return NULL;
    // End of try:
    try_end_7:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 57;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_8;
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT((PyObject *)tmp_for_loop_1__iter_value);
    Py_DECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        if (var_err == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "err");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 79;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_4 = var_err;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_6 = (tmp_compexpr_left_4 != tmp_compexpr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_raise_type_1;
            if (var_err == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "err");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 80;
                type_description_1 = "oooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_raise_type_1 = var_err;
            exception_type = tmp_raise_type_1;
            Py_INCREF(tmp_raise_type_1);
            exception_lineno = 80;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_6:;
    }
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_socket);
        }

        if (tmp_mvar_value_8 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20542 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 82;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_8 = tmp_mvar_value_8;
        frame_35d91798ae6efe5192c65b7cbdf16475->m_frame.f_lineno = 82;
        tmp_raise_type_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_8, const_str_plain_error, &PyTuple_GET_ITEM(const_tuple_str_digest_d3595e84d8b1645204321774ba0ba260_tuple, 0));

        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 82;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_35d91798ae6efe5192c65b7cbdf16475);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_35d91798ae6efe5192c65b7cbdf16475);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_35d91798ae6efe5192c65b7cbdf16475);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_35d91798ae6efe5192c65b7cbdf16475, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_35d91798ae6efe5192c65b7cbdf16475->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_35d91798ae6efe5192c65b7cbdf16475, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_35d91798ae6efe5192c65b7cbdf16475,
        type_description_1,
        par_address,
        par_timeout,
        par_source_address,
        par_socket_options,
        var_host,
        var_port,
        var_err,
        var_family,
        var_res,
        var_af,
        var_socktype,
        var_proto,
        var_canonname,
        var_sa,
        var_sock,
        var_e
    );


    // Release cached frame.
    if (frame_35d91798ae6efe5192c65b7cbdf16475 == cache_frame_35d91798ae6efe5192c65b7cbdf16475) {
        Py_DECREF(frame_35d91798ae6efe5192c65b7cbdf16475);
    }
    cache_frame_35d91798ae6efe5192c65b7cbdf16475 = NULL;

    assertFrameObject(frame_35d91798ae6efe5192c65b7cbdf16475);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$util$connection$$$function_2_create_connection);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_host);
    Py_DECREF(var_host);
    var_host = NULL;

    CHECK_OBJECT((PyObject *)var_port);
    Py_DECREF(var_port);
    var_port = NULL;

    Py_XDECREF(var_err);
    var_err = NULL;

    CHECK_OBJECT((PyObject *)var_family);
    Py_DECREF(var_family);
    var_family = NULL;

    CHECK_OBJECT((PyObject *)var_res);
    Py_DECREF(var_res);
    var_res = NULL;

    CHECK_OBJECT((PyObject *)var_af);
    Py_DECREF(var_af);
    var_af = NULL;

    CHECK_OBJECT((PyObject *)var_socktype);
    Py_DECREF(var_socktype);
    var_socktype = NULL;

    CHECK_OBJECT((PyObject *)var_proto);
    Py_DECREF(var_proto);
    var_proto = NULL;

    CHECK_OBJECT((PyObject *)var_canonname);
    Py_DECREF(var_canonname);
    var_canonname = NULL;

    CHECK_OBJECT((PyObject *)var_sa);
    Py_DECREF(var_sa);
    var_sa = NULL;

    CHECK_OBJECT((PyObject *)var_sock);
    Py_DECREF(var_sock);
    var_sock = NULL;

    Py_XDECREF(var_e);
    var_e = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_host);
    var_host = NULL;

    Py_XDECREF(var_port);
    var_port = NULL;

    Py_XDECREF(var_err);
    var_err = NULL;

    Py_XDECREF(var_family);
    var_family = NULL;

    Py_XDECREF(var_res);
    var_res = NULL;

    Py_XDECREF(var_af);
    var_af = NULL;

    Py_XDECREF(var_socktype);
    var_socktype = NULL;

    Py_XDECREF(var_proto);
    var_proto = NULL;

    Py_XDECREF(var_canonname);
    var_canonname = NULL;

    Py_XDECREF(var_sa);
    var_sa = NULL;

    Py_XDECREF(var_sock);
    var_sock = NULL;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$connection$$$function_2_create_connection);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_address);
    Py_DECREF(par_address);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_source_address);
    Py_DECREF(par_source_address);
    CHECK_OBJECT(par_socket_options);
    Py_DECREF(par_socket_options);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_address);
    Py_DECREF(par_address);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_source_address);
    Py_DECREF(par_source_address);
    CHECK_OBJECT(par_socket_options);
    Py_DECREF(par_socket_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$connection$$$function_3__set_socket_options(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sock = python_pars[0];
    PyObject *par_options = python_pars[1];
    PyObject *var_opt = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_4aa1ce1cae7fbdda75a34f9e62e07254;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_4aa1ce1cae7fbdda75a34f9e62e07254 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_options);
        tmp_compexpr_left_1 = par_options;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = Py_None;
        Py_INCREF(tmp_return_value);
        goto try_return_handler_1;
        branch_no_1:;
    }
    MAKE_OR_REUSE_FRAME(cache_frame_4aa1ce1cae7fbdda75a34f9e62e07254, codeobj_4aa1ce1cae7fbdda75a34f9e62e07254, module_urllib3$util$connection, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_4aa1ce1cae7fbdda75a34f9e62e07254 = cache_frame_4aa1ce1cae7fbdda75a34f9e62e07254;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4aa1ce1cae7fbdda75a34f9e62e07254);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4aa1ce1cae7fbdda75a34f9e62e07254) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_options);
        tmp_iter_arg_1 = par_options;
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 89;
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
            PyObject *old = var_opt;
            var_opt = tmp_assign_source_3;
            Py_INCREF(var_opt);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_sock);
        tmp_source_name_1 = par_sock;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_setsockopt);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_opt);
        tmp_dircall_arg2_1 = var_opt;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_call_result_1 = impl___internal__$$$function_10_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 89;
        type_description_1 = "ooo";
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
    RESTORE_FRAME_EXCEPTION(frame_4aa1ce1cae7fbdda75a34f9e62e07254);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4aa1ce1cae7fbdda75a34f9e62e07254);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4aa1ce1cae7fbdda75a34f9e62e07254, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_4aa1ce1cae7fbdda75a34f9e62e07254->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4aa1ce1cae7fbdda75a34f9e62e07254, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4aa1ce1cae7fbdda75a34f9e62e07254,
        type_description_1,
        par_sock,
        par_options,
        var_opt
    );


    // Release cached frame.
    if (frame_4aa1ce1cae7fbdda75a34f9e62e07254 == cache_frame_4aa1ce1cae7fbdda75a34f9e62e07254) {
        Py_DECREF(frame_4aa1ce1cae7fbdda75a34f9e62e07254);
    }
    cache_frame_4aa1ce1cae7fbdda75a34f9e62e07254 = NULL;

    assertFrameObject(frame_4aa1ce1cae7fbdda75a34f9e62e07254);

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

    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$util$connection$$$function_3__set_socket_options);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_opt);
    var_opt = NULL;

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

    Py_XDECREF(var_opt);
    var_opt = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$connection$$$function_3__set_socket_options);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$connection$$$function_4_allowed_gai_family(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_family = NULL;
    struct Nuitka_FrameObject *frame_74a7f304e707420eb772c70aa71efe10;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_74a7f304e707420eb772c70aa71efe10 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_74a7f304e707420eb772c70aa71efe10, codeobj_74a7f304e707420eb772c70aa71efe10, module_urllib3$util$connection, sizeof(void *));
    frame_74a7f304e707420eb772c70aa71efe10 = cache_frame_74a7f304e707420eb772c70aa71efe10;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_74a7f304e707420eb772c70aa71efe10);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_74a7f304e707420eb772c70aa71efe10) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_socket);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20542 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_AF_INET);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_family == NULL);
        var_family = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_HAS_IPV6);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HAS_IPV6);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 32163 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 99;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_2);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "o";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_socket);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20542 ], 28, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 100;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_AF_UNSPEC);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_family;
                assert(old != NULL);
                var_family = tmp_assign_source_2;
                Py_DECREF(old);
            }

        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_74a7f304e707420eb772c70aa71efe10);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_74a7f304e707420eb772c70aa71efe10);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_74a7f304e707420eb772c70aa71efe10, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_74a7f304e707420eb772c70aa71efe10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_74a7f304e707420eb772c70aa71efe10, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_74a7f304e707420eb772c70aa71efe10,
        type_description_1,
        var_family
    );


    // Release cached frame.
    if (frame_74a7f304e707420eb772c70aa71efe10 == cache_frame_74a7f304e707420eb772c70aa71efe10) {
        Py_DECREF(frame_74a7f304e707420eb772c70aa71efe10);
    }
    cache_frame_74a7f304e707420eb772c70aa71efe10 = NULL;

    assertFrameObject(frame_74a7f304e707420eb772c70aa71efe10);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_family);
    tmp_return_value = var_family;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$util$connection$$$function_4_allowed_gai_family);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_family);
    Py_DECREF(var_family);
    var_family = NULL;

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

    Py_XDECREF(var_family);
    var_family = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$connection$$$function_4_allowed_gai_family);
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


static PyObject *impl_urllib3$util$connection$$$function_5__has_ipv6(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_host = python_pars[0];
    PyObject *var_sock = NULL;
    nuitka_bool var_has_ipv6 = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_4431b89b6164980321c0a2129f3e74ab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_4431b89b6164980321c0a2129f3e74ab = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert(var_sock == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_sock = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_assign_source_2;
        tmp_assign_source_2 = NUITKA_BOOL_FALSE;
        var_has_ipv6 = tmp_assign_source_2;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_4431b89b6164980321c0a2129f3e74ab, codeobj_4431b89b6164980321c0a2129f3e74ab, module_urllib3$util$connection, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *));
    frame_4431b89b6164980321c0a2129f3e74ab = cache_frame_4431b89b6164980321c0a2129f3e74ab;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4431b89b6164980321c0a2129f3e74ab);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4431b89b6164980321c0a2129f3e74ab) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain__appengine_environ);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__appengine_environ);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 29493 ], 40, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 113;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_4431b89b6164980321c0a2129f3e74ab->m_frame.f_lineno = 113;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_is_appengine_sandbox);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 113;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_socket);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20542 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 116;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_has_ipv6);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 116;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_socket);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20542 ], 28, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 123;
                type_description_1 = "oob";
                goto try_except_handler_2;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_socket);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_1 = "oob";
                goto try_except_handler_2;
            }
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_socket);
            }

            if (tmp_mvar_value_4 == NULL) {
                Py_DECREF(tmp_called_name_1);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20542 ], 28, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 123;
                type_description_1 = "oob";
                goto try_except_handler_2;
            }

            tmp_source_name_3 = tmp_mvar_value_4;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_AF_INET6);
            if (tmp_args_element_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);

                exception_lineno = 123;
                type_description_1 = "oob";
                goto try_except_handler_2;
            }
            frame_4431b89b6164980321c0a2129f3e74ab->m_frame.f_lineno = 123;
            tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_1 = "oob";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_sock;
                assert(old != NULL);
                var_sock = tmp_assign_source_3;
                Py_DECREF(old);
            }

        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT(var_sock);
            tmp_called_instance_2 = var_sock;
            CHECK_OBJECT(par_host);
            tmp_tuple_element_1 = par_host;
            tmp_args_element_name_2 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_element_name_2, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = const_int_0;
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_element_name_2, 1, tmp_tuple_element_1);
            frame_4431b89b6164980321c0a2129f3e74ab->m_frame.f_lineno = 124;
            {
                PyObject *call_args[] = {tmp_args_element_name_2};
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_bind, call_args);
            }

            Py_DECREF(tmp_args_element_name_2);
            if (tmp_call_result_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_1 = "oob";
                goto try_except_handler_2;
            }
            Py_DECREF(tmp_call_result_2);
        }
        {
            nuitka_bool tmp_assign_source_4;
            tmp_assign_source_4 = NUITKA_BOOL_TRUE;
            var_has_ipv6 = tmp_assign_source_4;
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
            exception_keeper_tb_1 = MAKE_TRACEBACK(frame_4431b89b6164980321c0a2129f3e74ab, exception_keeper_lineno_1);
        } else if (exception_keeper_lineno_1 != 0) {
            exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_4431b89b6164980321c0a2129f3e74ab, exception_keeper_lineno_1);
        }

        NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
        PyException_SetTraceback(exception_keeper_value_1, (PyObject *)exception_keeper_tb_1);
        PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
        // Tried code:
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_1 = PyExc_Exception;
            tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_1 = "oob";
                goto try_except_handler_3;
            }
            tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_1 = "oob";
                goto try_except_handler_3;
            }
            tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
            branch_yes_3:;
            tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            if (unlikely(tmp_result == false)) {
                exception_lineno = 122;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_4431b89b6164980321c0a2129f3e74ab->m_frame) frame_4431b89b6164980321c0a2129f3e74ab->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oob";
            goto try_except_handler_3;
            branch_no_3:;
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
        NUITKA_CANNOT_GET_HERE(urllib3$util$connection$$$function_5__has_ipv6);
        return NULL;
        // End of try:
        try_end_1:;
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_3;
        if (var_sock == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "sock");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 129;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_3 = CHECK_IF_TRUE(var_sock);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_call_result_3;
            if (var_sock == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "sock");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 130;
                type_description_1 = "oob";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = var_sock;
            frame_4431b89b6164980321c0a2129f3e74ab->m_frame.f_lineno = 130;
            tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_close);
            if (tmp_call_result_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_1 = "oob";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_3);
        }
        branch_no_4:;
    }
    if (var_has_ipv6 == NUITKA_BOOL_UNASSIGNED) {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF(exception_type);
        exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "has_ipv6");
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 131;
        type_description_1 = "oob";
        goto frame_exception_exit_1;
    }

    tmp_return_value = (var_has_ipv6 == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4431b89b6164980321c0a2129f3e74ab);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4431b89b6164980321c0a2129f3e74ab);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4431b89b6164980321c0a2129f3e74ab);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4431b89b6164980321c0a2129f3e74ab, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_4431b89b6164980321c0a2129f3e74ab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4431b89b6164980321c0a2129f3e74ab, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4431b89b6164980321c0a2129f3e74ab,
        type_description_1,
        par_host,
        var_sock,
        (int)var_has_ipv6
    );


    // Release cached frame.
    if (frame_4431b89b6164980321c0a2129f3e74ab == cache_frame_4431b89b6164980321c0a2129f3e74ab) {
        Py_DECREF(frame_4431b89b6164980321c0a2129f3e74ab);
    }
    cache_frame_4431b89b6164980321c0a2129f3e74ab = NULL;

    assertFrameObject(frame_4431b89b6164980321c0a2129f3e74ab);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$util$connection$$$function_5__has_ipv6);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_sock);
    var_sock = NULL;

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

    Py_XDECREF(var_sock);
    var_sock = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$connection$$$function_5__has_ipv6);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_1_is_connection_dropped() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$connection$$$function_1_is_connection_dropped,
        const_str_plain_is_connection_dropped,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7f6fa198711bfe18ac454e55c5dd03c3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$connection,
        const_str_digest_9a8281a0cd80f856cf9186c57571aa88,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_2_create_connection(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$connection$$$function_2_create_connection,
        const_str_plain_create_connection,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_35d91798ae6efe5192c65b7cbdf16475,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$connection,
        const_str_digest_595445e1dc171ee3baa1f78d32383a82,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_3__set_socket_options() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$connection$$$function_3__set_socket_options,
        const_str_plain__set_socket_options,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4aa1ce1cae7fbdda75a34f9e62e07254,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$connection,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_4_allowed_gai_family() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$connection$$$function_4_allowed_gai_family,
        const_str_plain_allowed_gai_family,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_74a7f304e707420eb772c70aa71efe10,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$connection,
        const_str_digest_fd9e06b160161212aff03b5b4dc7aa13,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$connection$$$function_5__has_ipv6() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$connection$$$function_5__has_ipv6,
        const_str_plain__has_ipv6,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4431b89b6164980321c0a2129f3e74ab,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$connection,
        const_str_digest_bf7ea3c7e38d6b386518702b965c150a,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$util$connection =
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

function_impl_code functable_urllib3$util$connection[] = {
    impl_urllib3$util$connection$$$function_1_is_connection_dropped,
    impl_urllib3$util$connection$$$function_2_create_connection,
    impl_urllib3$util$connection$$$function_3__set_socket_options,
    impl_urllib3$util$connection$$$function_4_allowed_gai_family,
    impl_urllib3$util$connection$$$function_5__has_ipv6,
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

    function_impl_code *current = functable_urllib3$util$connection;
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

    if (offset > sizeof(functable_urllib3$util$connection) || offset < 0) {
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
        functable_urllib3$util$connection[offset],
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
        module_urllib3$util$connection,
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
PyObject *modulecode_urllib3$util$connection(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_urllib3$util$connection;
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
    PRINT_STRING("urllib3.util.connection: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("urllib3.util.connection: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("urllib3.util.connection: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initurllib3$util$connection\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$util$connection = Py_InitModule4(
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
    mdef_urllib3$util$connection.m_name = module_full_name;
    module_urllib3$util$connection = PyModule_Create(&mdef_urllib3$util$connection);
#endif

    moduledict_urllib3$util$connection = MODULE_DICT(module_urllib3$util$connection);

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
        moduledict_urllib3$util$connection,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$connection,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$connection,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$connection,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$connection,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_urllib3$util$connection);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_urllib3$util$connection);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_b9a5718b105a48646ada9bed2a02b1bb;
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
        UPDATE_STRING_DICT0(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_aeb5cd6f1dbaf2b626ce2a85efef1442;
        UPDATE_STRING_DICT0(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_b9a5718b105a48646ada9bed2a02b1bb = MAKE_MODULE_FRAME(codeobj_b9a5718b105a48646ada9bed2a02b1bb, module_urllib3$util$connection);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_b9a5718b105a48646ada9bed2a02b1bb);
    assert(Py_REFCNT(frame_b9a5718b105a48646ada9bed2a02b1bb) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_aeb5cd6f1dbaf2b626ce2a85efef1442;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        frame_b9a5718b105a48646ada9bed2a02b1bb->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_1 == NULL));
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_absolute_import);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_socket;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$util$connection;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_b9a5718b105a48646ada9bed2a02b1bb->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_wait;
        tmp_globals_name_2 = (PyObject *)moduledict_urllib3$util$connection;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_NoWayToWaitForSocketError_str_plain_wait_for_read_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_b9a5718b105a48646ada9bed2a02b1bb->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
           tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_urllib3$util$connection,
                const_str_plain_NoWayToWaitForSocketError,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_NoWayToWaitForSocketError);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_NoWayToWaitForSocketError, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
           tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_urllib3$util$connection,
                const_str_plain_wait_for_read,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_wait_for_read);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_wait_for_read, tmp_assign_source_8);
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
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_contrib;
        tmp_globals_name_3 = (PyObject *)moduledict_urllib3$util$connection;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain__appengine_environ_tuple;
        tmp_level_name_3 = const_int_pos_2;
        frame_b9a5718b105a48646ada9bed2a02b1bb->m_frame.f_lineno = 4;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_urllib3$util$connection,
                const_str_plain__appengine_environ,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain__appengine_environ);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain__appengine_environ, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_urllib3$util$connection$$$function_1_is_connection_dropped();



        UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_is_connection_dropped, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_socket);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_socket);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20542 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__GLOBAL_DEFAULT_TIMEOUT);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = PyTuple_New(3);
        PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_None;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_defaults_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_None;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_defaults_1, 2, tmp_tuple_element_1);
        tmp_assign_source_11 = MAKE_FUNCTION_urllib3$util$connection$$$function_2_create_connection(tmp_defaults_1);



        UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_create_connection, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_FUNCTION_urllib3$util$connection$$$function_3__set_socket_options();



        UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain__set_socket_options, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_FUNCTION_urllib3$util$connection$$$function_4_allowed_gai_family();



        UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_allowed_gai_family, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_FUNCTION_urllib3$util$connection$$$function_5__has_ipv6();



        UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain__has_ipv6, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain__has_ipv6);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__has_ipv6);
        }

        CHECK_OBJECT(tmp_mvar_value_4);
        tmp_called_name_1 = tmp_mvar_value_4;
        frame_b9a5718b105a48646ada9bed2a02b1bb->m_frame.f_lineno = 134;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1(tmp_called_name_1, &PyTuple_GET_ITEM(const_tuple_str_digest_3f9fec55820f857461da4f1e12840da5_tuple, 0));

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$connection, (Nuitka_StringObject *)const_str_plain_HAS_IPV6, tmp_assign_source_15);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b9a5718b105a48646ada9bed2a02b1bb);
#endif
    popFrameStack();

    assertFrameObject(frame_b9a5718b105a48646ada9bed2a02b1bb);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b9a5718b105a48646ada9bed2a02b1bb);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_b9a5718b105a48646ada9bed2a02b1bb, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_b9a5718b105a48646ada9bed2a02b1bb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b9a5718b105a48646ada9bed2a02b1bb, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module_urllib3$util$connection;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
