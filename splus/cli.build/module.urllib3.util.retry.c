/* Generated code for Python module 'urllib3.util.retry'
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

/* The "_module_urllib3$util$retry" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$util$retry;
PyDictObject *moduledict_urllib3$util$retry;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_itertools;
static PyObject *const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_be3c2e7a479fa0076df719ca5a930f72;
static PyObject *const_str_digest_96630de8eadb33fda97640a57fbbbd1c;
static PyObject *const_tuple_true_none_tuple;
static PyObject *const_str_plain_slept;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_plain_retry_date_tuple;
static PyObject *const_str_plain_RETRY_AFTER_STATUS_CODES;
static PyObject *const_str_plain__sleep_backoff;
static PyObject *const_int_pos_120;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_tuple_false_tuple;
static PyObject *const_str_plain_unknown;
static PyObject *const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_redirect_location;
static PyObject *const_str_plain_backoff_factor;
extern PyObject *const_str_plain_total;
static PyObject *const_str_digest_9bdc7bd568ca4c860ba3d9ea8f97a38f;
extern PyObject *const_str_plain_PUT;
static PyObject *const_str_plain_mktime;
extern PyObject *const_str_plain_err;
extern PyObject *const_str_plain_from_int;
static PyObject *const_str_digest_504591e526cc625e5b3bbfcf35d4ec2f;
extern PyObject *const_str_plain_raise_on_status;
static PyObject *const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple;
extern PyObject *const_str_plain_default;
static PyObject *const_str_digest_54874c179a81b955e41d4fd1580cddd0;
static PyObject *const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8;
extern PyObject *const_str_plain_GET;
extern PyObject *const_str_plain_email;
extern PyObject *const_str_plain_get_redirect_location;
static PyObject *const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_classmethod;
extern PyObject *const_str_plain_sleep_for_retry;
extern PyObject *const_str_plain_filter;
extern PyObject *const_str_plain_sleep;
extern PyObject *const_str_plain_cls;
extern PyObject *const_tuple_str_plain_self_str_plain_method_tuple;
extern PyObject *const_str_plain_read;
static PyObject *const_str_plain_respect_retry_after_header;
extern PyObject *const_str_plain_utils;
static PyObject *const_str_digest_297455e155b6c9736d87529e14591c5d;
static PyObject *const_int_pos_429;
static PyObject *const_str_digest_43a062f907032f59d25a421045c4a843;
extern PyObject *const_str_plain_connect;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_is_retry;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_str_plain_RequestHistory;
extern PyObject *const_str_plain_time;
static PyObject *const_str_digest_00aff75c087fe7f80636ea13a09e3e82;
static PyObject *const_int_pos_413;
extern PyObject *const_str_plain_redirect;
extern PyObject *const_tuple_str_digest_53eb1bcf3283c3fcccb95b51de02ce94_tuple;
extern PyObject *const_tuple_str_plain_namedtuple_tuple;
extern PyObject *const_str_plain_status;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_plain_consecutive_errors_len;
static PyObject *const_str_digest_52dc615064dbc739578d7b66bd4357d4;
extern PyObject *const_str_plain_packages;
static PyObject *const_str_digest_3d8456b692ba12d694b1345117db0cc2;
static PyObject *const_str_plain__is_method_retryable;
static PyObject *const_str_digest_b0594eafa05dc6a6810bb2c7c291548b;
extern PyObject *const_str_plain_min;
static PyObject *const_str_digest_61e2520c56b660178d4348ecd9080d8c;
static PyObject *const_str_plain_is_exhausted;
extern PyObject *const_str_plain_six;
static PyObject *const_str_plain_method_whitelist;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21;
static PyObject *const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple;
static PyObject *const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple;
extern PyObject *const_str_plain_seconds;
extern PyObject *const_str_plain_collections;
extern PyObject *const_str_plain__stacktrace;
extern PyObject *const_str_plain_SPECIFIC_ERROR;
static PyObject *const_str_plain_parse_retry_after;
static PyObject *const_str_digest_d3c5cf2f2d706173f393307c5fa372aa;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_4291b42c0261755daa9f58af16f24a8c;
static PyObject *const_str_digest_2d8b572caa8eac58f71c5c2fc1f268f9;
extern PyObject *const_str_plain_status_code;
extern PyObject *const_str_plain_new;
static PyObject *const_str_plain_BACKOFF_MAX;
static PyObject *const_str_digest_0ea7366bdeb0b49141acb3ad1441b7b5;
static PyObject *const_tuple_str_plain_self_str_plain_err_tuple;
extern PyObject *const_str_plain_reversed;
extern PyObject *const_str_plain_getheader;
extern PyObject *const_str_plain_retries;
static PyObject *const_str_digest_9db0c4e907a20455d898e46f602427d6;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_plain_exceptions;
static PyObject *const_str_digest_fc514c378d42c4c0744f71a520936e98;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain_error;
static PyObject *const_str_digest_d43b7afa583ad163d56ae0bbfdcdb575;
extern PyObject *const_str_plain_match;
static PyObject *const_list_int_pos_413_int_pos_429_int_pos_503_list;
extern PyObject *const_str_plain_ProtocolError;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_ReadTimeoutError;
static PyObject *const_str_digest_ca693a71271df261e783dd0ecf309ae0;
extern PyObject *const_tuple_int_pos_3_tuple;
static PyObject *const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple;
static PyObject *const_str_plain_frozenset;
extern PyObject *const_tuple_none_none_none_none_none_none_tuple;
static PyObject *const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple;
static PyObject *const_str_plain_TRACE;
extern PyObject *const_str_plain_DEFAULT;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_upper;
static PyObject *const_frozenset_8ca5bc4d58965b48d58ac59c23ac8fb4;
static PyObject *const_str_digest_541aafc09da4591a658272cb389856a5;
extern PyObject *const_str_plain_response;
static PyObject *const_str_plain_new_retries;
static PyObject *const_str_plain_get_retry_after;
static PyObject *const_str_digest_6659ea07dd436805b2630885700a6e61;
extern PyObject *const_str_plain_Authorization;
static PyObject *const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple;
static PyObject *const_str_plain_DEFAULT_METHOD_WHITELIST;
static PyObject *const_str_digest_7fb2c7a5424e28db1a201939b12c8399;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_log;
extern PyObject *const_str_plain_x;
static PyObject *const_str_digest_55857326d6523e3f76c12c271f391764;
static PyObject *const_str_plain_retry_after;
extern PyObject *const_str_plain_DELETE;
static PyObject *const_tuple_str_plain_self_str_plain_retry_counts_tuple;
extern PyObject *const_str_plain_increment;
static PyObject *const_str_plain_get_backoff_time;
extern PyObject *const_str_plain_namedtuple;
extern PyObject *const_str_plain_ResponseError;
static PyObject *const_tuple_str_plain_takewhile_tuple;
extern PyObject *const_str_angle_lambda;
static PyObject *const_str_digest_4506185023298da4a69876975fb76211;
extern PyObject *const_str_plain_type;
static PyObject *const_list_str_plain_Authorization_list;
extern PyObject *const_str_plain_InvalidHeader;
extern PyObject *const_str_plain_HEAD;
extern PyObject *const_str_plain_has_retry_after;
static PyObject *const_int_pos_503;
static PyObject *const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_cause;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_plain__is_connection_error;
extern PyObject *const_str_digest_93b5718dbdad50e34931a5c649b12b14;
static PyObject *const_str_plain__is_read_error;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_retry_counts;
static PyObject *const_str_digest_683309cb722498c00ca029ec4e15acbf;
extern PyObject *const_str_plain_debug;
extern PyObject *const_str_plain_kw;
static PyObject *const_str_digest_e80b9085df081452c8caeed4571c51b7;
static PyObject *const_str_plain_status_forcelist;
extern PyObject *const_str_plain_params;
extern PyObject *const_str_plain_update;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_ConnectTimeoutError;
static PyObject *const_str_digest_cfc303935f94cd9bd4759913289d5001;
static PyObject *const_list_ba42ffc828ddfcf79c24367abe35499c_list;
extern PyObject *const_str_plain_OPTIONS;
static PyObject *const_str_plain_new_retry;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_history;
extern PyObject *const_str_plain_url;
static PyObject *const_str_digest_423ef6c7c1b1873858e87102fe4de1ae;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_takewhile;
static PyObject *const_str_plain_parsedate;
static PyObject *const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple;
extern PyObject *const_str_plain___repr__;
extern PyObject *const_str_plain_remove_headers_on_redirect;
extern PyObject *const_tuple_str_plain_six_tuple;
extern PyObject *const_str_plain_method;
static PyObject *const_str_digest_02862dad88b03d79d6c3df8ba5e79ff6;
static PyObject *const_str_plain_retry_date;
static PyObject *const_str_plain_status_count;
static PyObject *const_str_plain_backoff;
static PyObject *const_str_digest_ed2c0b12f2250d745518387535c4958e;
static PyObject *const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple;
extern PyObject *const_str_plain_MaxRetryError;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_DEFAULT_REDIRECT_HEADERS_BLACKLIST;
extern PyObject *const_str_plain__pool;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_7e60379875538acb6d47a09b3bcd7fdf;
static PyObject *const_str_plain_backoff_value;
extern PyObject *const_str_plain_Retry;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_logging;
static PyObject *const_tuple_str_plain_self_str_plain_backoff_tuple;
extern PyObject *const_str_digest_53eb1bcf3283c3fcccb95b51de02ce94;
extern PyObject *const_str_plain_GENERIC_ERROR;
static PyObject *const_str_digest_adf0407d4b5f2535bca90601d487b350;
static PyObject *const_str_digest_3ff146bf2cbf06e10d34294d9109668e;
extern PyObject *const_str_plain_reraise;
static PyObject *const_str_digest_25ded409e041cb7d54dbe844ec9f890e;
extern PyObject *const_str_plain_raise_on_redirect;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list = PyList_New(5);
    PyList_SET_ITEM(const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list, 0, const_str_plain_method); Py_INCREF(const_str_plain_method);
    PyList_SET_ITEM(const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list, 1, const_str_plain_url); Py_INCREF(const_str_plain_url);
    PyList_SET_ITEM(const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list, 2, const_str_plain_error); Py_INCREF(const_str_plain_error);
    PyList_SET_ITEM(const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list, 3, const_str_plain_status); Py_INCREF(const_str_plain_status);
    PyList_SET_ITEM(const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list, 4, const_str_plain_redirect_location); Py_INCREF(const_str_plain_redirect_location);
    const_str_digest_be3c2e7a479fa0076df719ca5a930f72 = UNSTREAM_STRING_ASCII(&constant_bin[ 750853 ], 128, 0);
    const_str_digest_96630de8eadb33fda97640a57fbbbd1c = UNSTREAM_STRING_ASCII(&constant_bin[ 750981 ], 40, 0);
    const_tuple_true_none_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_true_none_tuple, 0, Py_True); Py_INCREF(Py_True);
    PyTuple_SET_ITEM(const_tuple_true_none_tuple, 1, Py_None); Py_INCREF(Py_None);
    const_str_plain_slept = UNSTREAM_STRING_ASCII(&constant_bin[ 751021 ], 5, 1);
    const_str_plain_retry_date_tuple = UNSTREAM_STRING_ASCII(&constant_bin[ 751026 ], 16, 1);
    const_str_plain_RETRY_AFTER_STATUS_CODES = UNSTREAM_STRING_ASCII(&constant_bin[ 751042 ], 24, 1);
    const_str_plain__sleep_backoff = UNSTREAM_STRING_ASCII(&constant_bin[ 751066 ], 14, 1);
    const_int_pos_120 = PyLong_FromUnsignedLong(120ul);
    const_str_plain_unknown = UNSTREAM_STRING_ASCII(&constant_bin[ 391670 ], 7, 1);
    const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple, 1, const_str_plain_method); Py_INCREF(const_str_plain_method);
    PyTuple_SET_ITEM(const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple, 2, const_str_plain_status_code); Py_INCREF(const_str_plain_status_code);
    PyTuple_SET_ITEM(const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple, 3, const_str_plain_has_retry_after); Py_INCREF(const_str_plain_has_retry_after);
    const_str_plain_backoff_factor = UNSTREAM_STRING_ASCII(&constant_bin[ 751080 ], 14, 1);
    const_str_digest_9bdc7bd568ca4c860ba3d9ea8f97a38f = UNSTREAM_STRING_ASCII(&constant_bin[ 751094 ], 21, 0);
    const_str_plain_mktime = UNSTREAM_STRING_ASCII(&constant_bin[ 751115 ], 6, 1);
    const_str_digest_504591e526cc625e5b3bbfcf35d4ec2f = UNSTREAM_STRING_ASCII(&constant_bin[ 751121 ], 20, 0);
    const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple, 1, const_str_plain_response); Py_INCREF(const_str_plain_response);
    const_str_plain_retry_after = UNSTREAM_STRING_ASCII(&constant_bin[ 702954 ], 11, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple, 2, const_str_plain_retry_after); Py_INCREF(const_str_plain_retry_after);
    const_str_digest_54874c179a81b955e41d4fd1580cddd0 = UNSTREAM_STRING_ASCII(&constant_bin[ 751141 ], 52, 0);
    const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8 = PyFrozenSet_New(NULL);
    PySet_Add(const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8, const_str_plain_PUT);
    PySet_Add(const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8, const_str_plain_GET);
    PySet_Add(const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8, const_str_plain_DELETE);
    PySet_Add(const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8, const_str_plain_HEAD);
    PySet_Add(const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8, const_str_plain_OPTIONS);
    const_str_plain_TRACE = UNSTREAM_STRING_ASCII(&constant_bin[ 751193 ], 5, 1);
    PySet_Add(const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8, const_str_plain_TRACE);
    assert(PySet_Size(const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8) == 6);
    const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple, 1, const_str_plain_kw); Py_INCREF(const_str_plain_kw);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple, 2, const_str_plain_params); Py_INCREF(const_str_plain_params);
    const_str_plain_respect_retry_after_header = UNSTREAM_STRING_ASCII(&constant_bin[ 751198 ], 26, 1);
    const_str_digest_297455e155b6c9736d87529e14591c5d = UNSTREAM_STRING_ASCII(&constant_bin[ 751224 ], 14, 0);
    const_int_pos_429 = PyLong_FromUnsignedLong(429ul);
    const_str_digest_43a062f907032f59d25a421045c4a843 = UNSTREAM_STRING_ASCII(&constant_bin[ 751238 ], 14, 0);
    const_str_plain_RequestHistory = UNSTREAM_STRING_ASCII(&constant_bin[ 32300 ], 14, 1);
    const_str_digest_00aff75c087fe7f80636ea13a09e3e82 = UNSTREAM_STRING_ASCII(&constant_bin[ 751252 ], 14, 0);
    const_int_pos_413 = PyLong_FromUnsignedLong(413ul);
    const_str_plain_consecutive_errors_len = UNSTREAM_STRING_ASCII(&constant_bin[ 751266 ], 22, 1);
    const_str_digest_52dc615064dbc739578d7b66bd4357d4 = UNSTREAM_STRING_ASCII(&constant_bin[ 751288 ], 30, 0);
    const_str_digest_3d8456b692ba12d694b1345117db0cc2 = UNSTREAM_STRING_ASCII(&constant_bin[ 751318 ], 27, 0);
    const_str_plain__is_method_retryable = UNSTREAM_STRING_ASCII(&constant_bin[ 751345 ], 20, 1);
    const_str_digest_b0594eafa05dc6a6810bb2c7c291548b = UNSTREAM_STRING_ASCII(&constant_bin[ 751094 ], 11, 0);
    const_str_digest_61e2520c56b660178d4348ecd9080d8c = UNSTREAM_STRING_ASCII(&constant_bin[ 751365 ], 4659, 0);
    const_str_plain_is_exhausted = UNSTREAM_STRING_ASCII(&constant_bin[ 756024 ], 12, 1);
    const_str_plain_method_whitelist = UNSTREAM_STRING_ASCII(&constant_bin[ 753770 ], 16, 1);
    const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21 = PyFrozenSet_New(NULL);
    const_int_pos_503 = PyLong_FromUnsignedLong(503ul);
    PySet_Add(const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21, const_int_pos_503);
    PySet_Add(const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21, const_int_pos_413);
    PySet_Add(const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21, const_int_pos_429);
    assert(PySet_Size(const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21) == 3);
    const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple = PyTuple_New(14);
    PyTuple_SET_ITEM(const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 1, const_str_plain_total); Py_INCREF(const_str_plain_total);
    PyTuple_SET_ITEM(const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 2, const_str_plain_connect); Py_INCREF(const_str_plain_connect);
    PyTuple_SET_ITEM(const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 3, const_str_plain_read); Py_INCREF(const_str_plain_read);
    PyTuple_SET_ITEM(const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 4, const_str_plain_redirect); Py_INCREF(const_str_plain_redirect);
    PyTuple_SET_ITEM(const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 5, const_str_plain_status); Py_INCREF(const_str_plain_status);
    PyTuple_SET_ITEM(const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 6, const_str_plain_method_whitelist); Py_INCREF(const_str_plain_method_whitelist);
    const_str_plain_status_forcelist = UNSTREAM_STRING_ASCII(&constant_bin[ 753666 ], 16, 1);
    PyTuple_SET_ITEM(const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 7, const_str_plain_status_forcelist); Py_INCREF(const_str_plain_status_forcelist);
    PyTuple_SET_ITEM(const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 8, const_str_plain_backoff_factor); Py_INCREF(const_str_plain_backoff_factor);
    PyTuple_SET_ITEM(const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 9, const_str_plain_raise_on_redirect); Py_INCREF(const_str_plain_raise_on_redirect);
    PyTuple_SET_ITEM(const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 10, const_str_plain_raise_on_status); Py_INCREF(const_str_plain_raise_on_status);
    PyTuple_SET_ITEM(const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 11, const_str_plain_history); Py_INCREF(const_str_plain_history);
    PyTuple_SET_ITEM(const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 12, const_str_plain_respect_retry_after_header); Py_INCREF(const_str_plain_respect_retry_after_header);
    PyTuple_SET_ITEM(const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 13, const_str_plain_remove_headers_on_redirect); Py_INCREF(const_str_plain_remove_headers_on_redirect);
    const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 0, const_str_plain_cls); Py_INCREF(const_str_plain_cls);
    PyTuple_SET_ITEM(const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 1, const_str_plain_retries); Py_INCREF(const_str_plain_retries);
    PyTuple_SET_ITEM(const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 2, const_str_plain_redirect); Py_INCREF(const_str_plain_redirect);
    PyTuple_SET_ITEM(const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 3, const_str_plain_default); Py_INCREF(const_str_plain_default);
    const_str_plain_new_retries = UNSTREAM_STRING_ASCII(&constant_bin[ 756036 ], 11, 1);
    PyTuple_SET_ITEM(const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 4, const_str_plain_new_retries); Py_INCREF(const_str_plain_new_retries);
    const_str_plain_parse_retry_after = UNSTREAM_STRING_ASCII(&constant_bin[ 756047 ], 17, 1);
    const_str_digest_d3c5cf2f2d706173f393307c5fa372aa = UNSTREAM_STRING_ASCII(&constant_bin[ 755509 ], 15, 0);
    const_str_digest_4291b42c0261755daa9f58af16f24a8c = UNSTREAM_STRING_ASCII(&constant_bin[ 756064 ], 14, 0);
    const_str_digest_2d8b572caa8eac58f71c5c2fc1f268f9 = UNSTREAM_STRING_ASCII(&constant_bin[ 756078 ], 20, 0);
    const_str_plain_BACKOFF_MAX = UNSTREAM_STRING_ASCII(&constant_bin[ 754910 ], 11, 1);
    const_str_digest_0ea7366bdeb0b49141acb3ad1441b7b5 = UNSTREAM_STRING_ASCII(&constant_bin[ 756098 ], 26, 0);
    const_tuple_str_plain_self_str_plain_err_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_err_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_err_tuple, 1, const_str_plain_err); Py_INCREF(const_str_plain_err);
    const_str_digest_9db0c4e907a20455d898e46f602427d6 = UNSTREAM_STRING_ASCII(&constant_bin[ 756124 ], 42, 0);
    const_str_digest_fc514c378d42c4c0744f71a520936e98 = UNSTREAM_STRING_ASCII(&constant_bin[ 756166 ], 74, 0);
    const_str_digest_d43b7afa583ad163d56ae0bbfdcdb575 = UNSTREAM_STRING_ASCII(&constant_bin[ 756240 ], 14, 0);
    const_list_int_pos_413_int_pos_429_int_pos_503_list = PyList_New(3);
    PyList_SET_ITEM(const_list_int_pos_413_int_pos_429_int_pos_503_list, 0, const_int_pos_413); Py_INCREF(const_int_pos_413);
    PyList_SET_ITEM(const_list_int_pos_413_int_pos_429_int_pos_503_list, 1, const_int_pos_429); Py_INCREF(const_int_pos_429);
    PyList_SET_ITEM(const_list_int_pos_413_int_pos_429_int_pos_503_list, 2, const_int_pos_503); Py_INCREF(const_int_pos_503);
    const_str_digest_ca693a71271df261e783dd0ecf309ae0 = UNSTREAM_STRING_ASCII(&constant_bin[ 756254 ], 9, 0);
    const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple = PyTuple_New(6);
    PyTuple_SET_ITEM(const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple, 0, const_str_plain_ConnectTimeoutError); Py_INCREF(const_str_plain_ConnectTimeoutError);
    PyTuple_SET_ITEM(const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple, 1, const_str_plain_MaxRetryError); Py_INCREF(const_str_plain_MaxRetryError);
    PyTuple_SET_ITEM(const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple, 2, const_str_plain_ProtocolError); Py_INCREF(const_str_plain_ProtocolError);
    PyTuple_SET_ITEM(const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple, 3, const_str_plain_ReadTimeoutError); Py_INCREF(const_str_plain_ReadTimeoutError);
    PyTuple_SET_ITEM(const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple, 4, const_str_plain_ResponseError); Py_INCREF(const_str_plain_ResponseError);
    PyTuple_SET_ITEM(const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple, 5, const_str_plain_InvalidHeader); Py_INCREF(const_str_plain_InvalidHeader);
    const_str_plain_frozenset = UNSTREAM_STRING_ASCII(&constant_bin[ 32368 ], 9, 1);
    const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple = PyTuple_New(17);
    PyTuple_SET_ITEM(const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 1, const_str_plain_method); Py_INCREF(const_str_plain_method);
    PyTuple_SET_ITEM(const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 2, const_str_plain_url); Py_INCREF(const_str_plain_url);
    PyTuple_SET_ITEM(const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 3, const_str_plain_response); Py_INCREF(const_str_plain_response);
    PyTuple_SET_ITEM(const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 4, const_str_plain_error); Py_INCREF(const_str_plain_error);
    PyTuple_SET_ITEM(const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 5, const_str_plain__pool); Py_INCREF(const_str_plain__pool);
    PyTuple_SET_ITEM(const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 6, const_str_plain__stacktrace); Py_INCREF(const_str_plain__stacktrace);
    PyTuple_SET_ITEM(const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 7, const_str_plain_total); Py_INCREF(const_str_plain_total);
    PyTuple_SET_ITEM(const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 8, const_str_plain_connect); Py_INCREF(const_str_plain_connect);
    PyTuple_SET_ITEM(const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 9, const_str_plain_read); Py_INCREF(const_str_plain_read);
    PyTuple_SET_ITEM(const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 10, const_str_plain_redirect); Py_INCREF(const_str_plain_redirect);
    const_str_plain_status_count = UNSTREAM_STRING_ASCII(&constant_bin[ 756263 ], 12, 1);
    PyTuple_SET_ITEM(const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 11, const_str_plain_status_count); Py_INCREF(const_str_plain_status_count);
    const_str_plain_cause = UNSTREAM_STRING_ASCII(&constant_bin[ 365207 ], 5, 1);
    PyTuple_SET_ITEM(const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 12, const_str_plain_cause); Py_INCREF(const_str_plain_cause);
    PyTuple_SET_ITEM(const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 13, const_str_plain_status); Py_INCREF(const_str_plain_status);
    PyTuple_SET_ITEM(const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 14, const_str_plain_redirect_location); Py_INCREF(const_str_plain_redirect_location);
    PyTuple_SET_ITEM(const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 15, const_str_plain_history); Py_INCREF(const_str_plain_history);
    const_str_plain_new_retry = UNSTREAM_STRING_ASCII(&constant_bin[ 756275 ], 9, 1);
    PyTuple_SET_ITEM(const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 16, const_str_plain_new_retry); Py_INCREF(const_str_plain_new_retry);
    const_frozenset_8ca5bc4d58965b48d58ac59c23ac8fb4 = PyFrozenSet_New(NULL);
    PySet_Add(const_frozenset_8ca5bc4d58965b48d58ac59c23ac8fb4, const_str_plain_Authorization);
    assert(PySet_Size(const_frozenset_8ca5bc4d58965b48d58ac59c23ac8fb4) == 1);
    const_str_digest_541aafc09da4591a658272cb389856a5 = UNSTREAM_STRING_ASCII(&constant_bin[ 756284 ], 124, 0);
    const_str_plain_get_retry_after = UNSTREAM_STRING_ASCII(&constant_bin[ 756408 ], 15, 1);
    const_str_digest_6659ea07dd436805b2630885700a6e61 = UNSTREAM_STRING_ASCII(&constant_bin[ 756423 ], 21, 0);
    const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple, 0, const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd); Py_INCREF(const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd);
    const_str_plain_DEFAULT_METHOD_WHITELIST = UNSTREAM_STRING_ASCII(&constant_bin[ 32399 ], 24, 1);
    const_str_digest_7fb2c7a5424e28db1a201939b12c8399 = UNSTREAM_STRING_ASCII(&constant_bin[ 756444 ], 123, 0);
    const_str_digest_55857326d6523e3f76c12c271f391764 = UNSTREAM_STRING_ASCII(&constant_bin[ 756567 ], 417, 0);
    const_tuple_str_plain_self_str_plain_retry_counts_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_retry_counts_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain_retry_counts = UNSTREAM_STRING_ASCII(&constant_bin[ 756984 ], 12, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_retry_counts_tuple, 1, const_str_plain_retry_counts); Py_INCREF(const_str_plain_retry_counts);
    const_str_plain_get_backoff_time = UNSTREAM_STRING_ASCII(&constant_bin[ 750987 ], 16, 1);
    const_tuple_str_plain_takewhile_tuple = PyTuple_New(1);
    const_str_plain_takewhile = UNSTREAM_STRING_ASCII(&constant_bin[ 32269 ], 9, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_takewhile_tuple, 0, const_str_plain_takewhile); Py_INCREF(const_str_plain_takewhile);
    const_str_digest_4506185023298da4a69876975fb76211 = UNSTREAM_STRING_ASCII(&constant_bin[ 756996 ], 18, 0);
    const_list_str_plain_Authorization_list = PyList_New(1);
    PyList_SET_ITEM(const_list_str_plain_Authorization_list, 0, const_str_plain_Authorization); Py_INCREF(const_str_plain_Authorization);
    const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple, 1, const_str_plain_response); Py_INCREF(const_str_plain_response);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple, 2, const_str_plain_slept); Py_INCREF(const_str_plain_slept);
    const_str_plain__is_connection_error = UNSTREAM_STRING_ASCII(&constant_bin[ 757014 ], 20, 1);
    const_str_plain__is_read_error = UNSTREAM_STRING_ASCII(&constant_bin[ 756084 ], 14, 1);
    const_str_digest_683309cb722498c00ca029ec4e15acbf = UNSTREAM_STRING_ASCII(&constant_bin[ 757034 ], 23, 0);
    const_str_digest_e80b9085df081452c8caeed4571c51b7 = UNSTREAM_STRING_ASCII(&constant_bin[ 750981 ], 22, 0);
    const_str_digest_cfc303935f94cd9bd4759913289d5001 = UNSTREAM_STRING_ASCII(&constant_bin[ 757057 ], 124, 0);
    const_list_ba42ffc828ddfcf79c24367abe35499c_list = PyList_New(6);
    PyList_SET_ITEM(const_list_ba42ffc828ddfcf79c24367abe35499c_list, 0, const_str_plain_HEAD); Py_INCREF(const_str_plain_HEAD);
    PyList_SET_ITEM(const_list_ba42ffc828ddfcf79c24367abe35499c_list, 1, const_str_plain_GET); Py_INCREF(const_str_plain_GET);
    PyList_SET_ITEM(const_list_ba42ffc828ddfcf79c24367abe35499c_list, 2, const_str_plain_PUT); Py_INCREF(const_str_plain_PUT);
    PyList_SET_ITEM(const_list_ba42ffc828ddfcf79c24367abe35499c_list, 3, const_str_plain_DELETE); Py_INCREF(const_str_plain_DELETE);
    PyList_SET_ITEM(const_list_ba42ffc828ddfcf79c24367abe35499c_list, 4, const_str_plain_OPTIONS); Py_INCREF(const_str_plain_OPTIONS);
    PyList_SET_ITEM(const_list_ba42ffc828ddfcf79c24367abe35499c_list, 5, const_str_plain_TRACE); Py_INCREF(const_str_plain_TRACE);
    const_str_digest_423ef6c7c1b1873858e87102fe4de1ae = UNSTREAM_STRING_ASCII(&constant_bin[ 757181 ], 60, 0);
    const_str_plain_parsedate = UNSTREAM_STRING_ASCII(&constant_bin[ 757241 ], 9, 1);
    const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple, 1, const_str_plain_consecutive_errors_len); Py_INCREF(const_str_plain_consecutive_errors_len);
    const_str_plain_backoff_value = UNSTREAM_STRING_ASCII(&constant_bin[ 757250 ], 13, 1);
    PyTuple_SET_ITEM(const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple, 2, const_str_plain_backoff_value); Py_INCREF(const_str_plain_backoff_value);
    const_str_digest_02862dad88b03d79d6c3df8ba5e79ff6 = UNSTREAM_STRING_ASCII(&constant_bin[ 757263 ], 24, 0);
    const_str_plain_retry_date = UNSTREAM_STRING_ASCII(&constant_bin[ 751026 ], 10, 1);
    const_str_plain_backoff = UNSTREAM_STRING_ASCII(&constant_bin[ 750991 ], 7, 1);
    const_str_digest_ed2c0b12f2250d745518387535c4958e = UNSTREAM_STRING_ASCII(&constant_bin[ 757287 ], 323, 0);
    const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple, 1, const_str_plain_retry_after); Py_INCREF(const_str_plain_retry_after);
    PyTuple_SET_ITEM(const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple, 2, const_str_plain_seconds); Py_INCREF(const_str_plain_seconds);
    PyTuple_SET_ITEM(const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple, 3, const_str_plain_retry_date_tuple); Py_INCREF(const_str_plain_retry_date_tuple);
    PyTuple_SET_ITEM(const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple, 4, const_str_plain_retry_date); Py_INCREF(const_str_plain_retry_date);
    const_str_plain_DEFAULT_REDIRECT_HEADERS_BLACKLIST = UNSTREAM_STRING_ASCII(&constant_bin[ 32445 ], 34, 1);
    const_str_digest_7e60379875538acb6d47a09b3bcd7fdf = UNSTREAM_STRING_ASCII(&constant_bin[ 757610 ], 26, 0);
    const_tuple_str_plain_self_str_plain_backoff_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_backoff_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_backoff_tuple, 1, const_str_plain_backoff); Py_INCREF(const_str_plain_backoff);
    const_str_digest_adf0407d4b5f2535bca90601d487b350 = UNSTREAM_STRING_ASCII(&constant_bin[ 757636 ], 36, 0);
    const_str_digest_3ff146bf2cbf06e10d34294d9109668e = UNSTREAM_STRING_ASCII(&constant_bin[ 757672 ], 33, 0);
    const_str_digest_25ded409e041cb7d54dbe844ec9f890e = UNSTREAM_STRING_ASCII(&constant_bin[ 757705 ], 376, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$util$retry(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_f5323df5ecf8c6170ccdcf43c8e9fa7c;
static PyCodeObject *codeobj_c0a0ce684f7c1a8d22bd56b415aa063a;
static PyCodeObject *codeobj_8c45fd950b0d6ca7712c85d0ffce86a9;
static PyCodeObject *codeobj_de9be9fae1b07b0dd345d7e4a1d614d6;
static PyCodeObject *codeobj_3472d844fd103a2340e48d9e453c58d6;
static PyCodeObject *codeobj_9fb5395eb6333c5783c03322b103bdb3;
static PyCodeObject *codeobj_bf091fdeadb85797f23799ebd5025c58;
static PyCodeObject *codeobj_5fb66f67fea9063ba55c8bdfda68323a;
static PyCodeObject *codeobj_587b389d500700a81745e36782697e1f;
static PyCodeObject *codeobj_70421d4f87e38398e7230e36867d710c;
static PyCodeObject *codeobj_daaf1dd45e93d4cebd5164a2b0a70eb2;
static PyCodeObject *codeobj_d55428f9dcf5e8b583000841fb3b0d97;
static PyCodeObject *codeobj_35f49103c34316a6a15374b5659c210f;
static PyCodeObject *codeobj_5d4960daa7c7f3a183ea22abbd7ecff8;
static PyCodeObject *codeobj_033fd868f939675c9854e6a8c7698e17;
static PyCodeObject *codeobj_083a826ebb93c52c41563c960f4aa88c;
static PyCodeObject *codeobj_d2a314761c4e3ca9ef91319d9a14fc0b;
static PyCodeObject *codeobj_e732c728ce59881267b686dbb561ad3e;
static PyCodeObject *codeobj_4eaf5f9eecc47e42f40c33fa2a648ea8;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_423ef6c7c1b1873858e87102fe4de1ae;
    codeobj_f5323df5ecf8c6170ccdcf43c8e9fa7c = MAKE_CODEOBJECT(module_filename_obj, 219, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_angle_lambda, const_tuple_str_plain_x_tuple, 1, 0, 0);
    codeobj_c0a0ce684f7c1a8d22bd56b415aa063a = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_3d8456b692ba12d694b1345117db0cc2, const_tuple_empty, 0, 0, 0);
    codeobj_8c45fd950b0d6ca7712c85d0ffce86a9 = MAKE_CODEOBJECT(module_filename_obj, 28, CO_NOFREE, const_str_plain_Retry, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_de9be9fae1b07b0dd345d7e4a1d614d6 = MAKE_CODEOBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___init__, const_tuple_3ac60ce25502ba13e4db7f8e96837917_tuple, 14, 0, 0);
    codeobj_3472d844fd103a2340e48d9e453c58d6 = MAKE_CODEOBJECT(module_filename_obj, 404, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___repr__, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_9fb5395eb6333c5783c03322b103bdb3 = MAKE_CODEOBJECT(module_filename_obj, 283, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__is_connection_error, const_tuple_str_plain_self_str_plain_err_tuple, 2, 0, 0);
    codeobj_bf091fdeadb85797f23799ebd5025c58 = MAKE_CODEOBJECT(module_filename_obj, 295, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__is_method_retryable, const_tuple_str_plain_self_str_plain_method_tuple, 2, 0, 0);
    codeobj_5fb66f67fea9063ba55c8bdfda68323a = MAKE_CODEOBJECT(module_filename_obj, 289, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__is_read_error, const_tuple_str_plain_self_str_plain_err_tuple, 2, 0, 0);
    codeobj_587b389d500700a81745e36782697e1f = MAKE_CODEOBJECT(module_filename_obj, 261, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__sleep_backoff, const_tuple_str_plain_self_str_plain_backoff_tuple, 1, 0, 0);
    codeobj_70421d4f87e38398e7230e36867d710c = MAKE_CODEOBJECT(module_filename_obj, 199, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_from_int, const_tuple_bcd1deaf1773ebd24911636fbe7aa8b1_tuple, 4, 0, 0);
    codeobj_daaf1dd45e93d4cebd5164a2b0a70eb2 = MAKE_CODEOBJECT(module_filename_obj, 213, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_get_backoff_time, const_tuple_c9e3a586d4f3f3473aae70b0fd105244_tuple, 1, 0, 0);
    codeobj_d55428f9dcf5e8b583000841fb3b0d97 = MAKE_CODEOBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_get_retry_after, const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple, 2, 0, 0);
    codeobj_35f49103c34316a6a15374b5659c210f = MAKE_CODEOBJECT(module_filename_obj, 329, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_increment, const_tuple_3e188220f0e761b8fd0b2530cc0b2a49_tuple, 7, 0, 0);
    codeobj_5d4960daa7c7f3a183ea22abbd7ecff8 = MAKE_CODEOBJECT(module_filename_obj, 320, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_is_exhausted, const_tuple_str_plain_self_str_plain_retry_counts_tuple, 1, 0, 0);
    codeobj_033fd868f939675c9854e6a8c7698e17 = MAKE_CODEOBJECT(module_filename_obj, 304, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_is_retry, const_tuple_af7a4b17458dd36fc41146a5b8a2af40_tuple, 4, 0, 0);
    codeobj_083a826ebb93c52c41563c960f4aa88c = MAKE_CODEOBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_new, const_tuple_str_plain_self_str_plain_kw_str_plain_params_tuple, 1, 0, 0);
    codeobj_d2a314761c4e3ca9ef91319d9a14fc0b = MAKE_CODEOBJECT(module_filename_obj, 227, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_parse_retry_after, const_tuple_7ec0339ea4b600c54d62b35ef1319da6_tuple, 2, 0, 0);
    codeobj_e732c728ce59881267b686dbb561ad3e = MAKE_CODEOBJECT(module_filename_obj, 267, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_sleep, const_tuple_str_plain_self_str_plain_response_str_plain_slept_tuple, 2, 0, 0);
    codeobj_4eaf5f9eecc47e42f40c33fa2a648ea8 = MAKE_CODEOBJECT(module_filename_obj, 253, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_sleep_for_retry, const_tuple_str_plain_self_str_plain_response_str_plain_retry_after_tuple, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_10__is_connection_error();


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_11__is_read_error();


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_12__is_method_retryable();


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_13_is_retry(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_14_is_exhausted();


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_15_increment(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_16___repr__();


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_2_new();


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_3_from_int(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_4_get_backoff_time();


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda();


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_5_parse_retry_after();


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_6_get_retry_after();


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_7_sleep_for_retry(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_8__sleep_backoff();


static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_9_sleep(PyObject *defaults);


// The module function definitions.
static PyObject *impl_urllib3$util$retry$$$function_1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_total = python_pars[1];
    PyObject *par_connect = python_pars[2];
    PyObject *par_read = python_pars[3];
    PyObject *par_redirect = python_pars[4];
    PyObject *par_status = python_pars[5];
    PyObject *par_method_whitelist = python_pars[6];
    PyObject *par_status_forcelist = python_pars[7];
    PyObject *par_backoff_factor = python_pars[8];
    PyObject *par_raise_on_redirect = python_pars[9];
    PyObject *par_raise_on_status = python_pars[10];
    PyObject *par_history = python_pars[11];
    PyObject *par_respect_retry_after_header = python_pars[12];
    PyObject *par_remove_headers_on_redirect = python_pars[13];
    struct Nuitka_FrameObject *frame_de9be9fae1b07b0dd345d7e4a1d614d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_de9be9fae1b07b0dd345d7e4a1d614d6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_de9be9fae1b07b0dd345d7e4a1d614d6, codeobj_de9be9fae1b07b0dd345d7e4a1d614d6, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_de9be9fae1b07b0dd345d7e4a1d614d6 = cache_frame_de9be9fae1b07b0dd345d7e4a1d614d6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_de9be9fae1b07b0dd345d7e4a1d614d6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_de9be9fae1b07b0dd345d7e4a1d614d6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_total);
        tmp_assattr_name_1 = par_total;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_total, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_connect);
        tmp_assattr_name_2 = par_connect;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_connect, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_read);
        tmp_assattr_name_3 = par_read;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_read, tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_status);
        tmp_assattr_name_4 = par_status;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain_status, tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_redirect);
        tmp_compexpr_left_1 = par_redirect;
        tmp_compexpr_right_1 = Py_False;
        tmp_or_left_value_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_total);
        tmp_compexpr_left_2 = par_total;
        tmp_compexpr_right_2 = Py_False;
        tmp_or_right_value_1 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            tmp_assign_source_1 = const_int_0;
            {
                PyObject *old = par_redirect;
                assert(old != NULL);
                par_redirect = tmp_assign_source_1;
                Py_INCREF(par_redirect);
                Py_DECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = Py_False;
            {
                PyObject *old = par_raise_on_redirect;
                assert(old != NULL);
                par_raise_on_redirect = tmp_assign_source_2;
                Py_INCREF(par_raise_on_redirect);
                Py_DECREF(old);
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_redirect);
        tmp_assattr_name_5 = par_redirect;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain_redirect, tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_status_forcelist);
        tmp_or_left_value_2 = par_status_forcelist;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        tmp_or_right_value_2 = PySet_New(NULL);
        tmp_assattr_name_6 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        Py_INCREF(tmp_or_left_value_2);
        tmp_assattr_name_6 = tmp_or_left_value_2;
        or_end_2:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain_status_forcelist, tmp_assattr_name_6);
        Py_DECREF(tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_method_whitelist);
        tmp_assattr_name_7 = par_method_whitelist;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, const_str_plain_method_whitelist, tmp_assattr_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_backoff_factor);
        tmp_assattr_name_8 = par_backoff_factor;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, const_str_plain_backoff_factor, tmp_assattr_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_raise_on_redirect);
        tmp_assattr_name_9 = par_raise_on_redirect;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, const_str_plain_raise_on_redirect, tmp_assattr_name_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_raise_on_status);
        tmp_assattr_name_10 = par_raise_on_status;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, const_str_plain_raise_on_status, tmp_assattr_name_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_11;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(par_history);
        tmp_or_left_value_3 = par_history;
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        tmp_or_right_value_3 = const_tuple_empty;
        tmp_assattr_name_11 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_assattr_name_11 = tmp_or_left_value_3;
        or_end_3:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, const_str_plain_history, tmp_assattr_name_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(par_respect_retry_after_header);
        tmp_assattr_name_12 = par_respect_retry_after_header;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, const_str_plain_respect_retry_after_header, tmp_assattr_name_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_13;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT(par_remove_headers_on_redirect);
        tmp_assattr_name_13 = par_remove_headers_on_redirect;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, const_str_plain_remove_headers_on_redirect, tmp_assattr_name_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_de9be9fae1b07b0dd345d7e4a1d614d6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_de9be9fae1b07b0dd345d7e4a1d614d6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_de9be9fae1b07b0dd345d7e4a1d614d6, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_de9be9fae1b07b0dd345d7e4a1d614d6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_de9be9fae1b07b0dd345d7e4a1d614d6, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_de9be9fae1b07b0dd345d7e4a1d614d6,
        type_description_1,
        par_self,
        par_total,
        par_connect,
        par_read,
        par_redirect,
        par_status,
        par_method_whitelist,
        par_status_forcelist,
        par_backoff_factor,
        par_raise_on_redirect,
        par_raise_on_status,
        par_history,
        par_respect_retry_after_header,
        par_remove_headers_on_redirect
    );


    // Release cached frame.
    if (frame_de9be9fae1b07b0dd345d7e4a1d614d6 == cache_frame_de9be9fae1b07b0dd345d7e4a1d614d6) {
        Py_DECREF(frame_de9be9fae1b07b0dd345d7e4a1d614d6);
    }
    cache_frame_de9be9fae1b07b0dd345d7e4a1d614d6 = NULL;

    assertFrameObject(frame_de9be9fae1b07b0dd345d7e4a1d614d6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_1___init__);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)par_redirect);
    Py_DECREF(par_redirect);
    par_redirect = NULL;

    CHECK_OBJECT((PyObject *)par_raise_on_redirect);
    Py_DECREF(par_raise_on_redirect);
    par_raise_on_redirect = NULL;

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

    Py_XDECREF(par_redirect);
    par_redirect = NULL;

    Py_XDECREF(par_raise_on_redirect);
    par_raise_on_redirect = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_1___init__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_total);
    Py_DECREF(par_total);
    CHECK_OBJECT(par_connect);
    Py_DECREF(par_connect);
    CHECK_OBJECT(par_read);
    Py_DECREF(par_read);
    CHECK_OBJECT(par_status);
    Py_DECREF(par_status);
    CHECK_OBJECT(par_method_whitelist);
    Py_DECREF(par_method_whitelist);
    CHECK_OBJECT(par_status_forcelist);
    Py_DECREF(par_status_forcelist);
    CHECK_OBJECT(par_backoff_factor);
    Py_DECREF(par_backoff_factor);
    CHECK_OBJECT(par_raise_on_status);
    Py_DECREF(par_raise_on_status);
    CHECK_OBJECT(par_history);
    Py_DECREF(par_history);
    CHECK_OBJECT(par_respect_retry_after_header);
    Py_DECREF(par_respect_retry_after_header);
    CHECK_OBJECT(par_remove_headers_on_redirect);
    Py_DECREF(par_remove_headers_on_redirect);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_total);
    Py_DECREF(par_total);
    CHECK_OBJECT(par_connect);
    Py_DECREF(par_connect);
    CHECK_OBJECT(par_read);
    Py_DECREF(par_read);
    CHECK_OBJECT(par_status);
    Py_DECREF(par_status);
    CHECK_OBJECT(par_method_whitelist);
    Py_DECREF(par_method_whitelist);
    CHECK_OBJECT(par_status_forcelist);
    Py_DECREF(par_status_forcelist);
    CHECK_OBJECT(par_backoff_factor);
    Py_DECREF(par_backoff_factor);
    CHECK_OBJECT(par_raise_on_status);
    Py_DECREF(par_raise_on_status);
    CHECK_OBJECT(par_history);
    Py_DECREF(par_history);
    CHECK_OBJECT(par_respect_retry_after_header);
    Py_DECREF(par_respect_retry_after_header);
    CHECK_OBJECT(par_remove_headers_on_redirect);
    Py_DECREF(par_remove_headers_on_redirect);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function_2_new(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_kw = python_pars[1];
    PyObject *var_params = NULL;
    struct Nuitka_FrameObject *frame_083a826ebb93c52c41563c960f4aa88c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_083a826ebb93c52c41563c960f4aa88c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_083a826ebb93c52c41563c960f4aa88c, codeobj_083a826ebb93c52c41563c960f4aa88c, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_083a826ebb93c52c41563c960f4aa88c = cache_frame_083a826ebb93c52c41563c960f4aa88c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_083a826ebb93c52c41563c960f4aa88c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_083a826ebb93c52c41563c960f4aa88c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_source_name_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_source_name_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_source_name_7;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_source_name_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_source_name_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_source_name_10;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_source_name_11;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_source_name_12;
        tmp_dict_key_1 = const_str_plain_total;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_total);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = _PyDict_NewPresized( 12 );
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_connect;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_connect);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_1);

            exception_lineno = 187;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain_read;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_read);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_1);

            exception_lineno = 187;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_redirect;
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_redirect);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_1);

            exception_lineno = 187;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = const_str_plain_status;
        CHECK_OBJECT(par_self);
        tmp_source_name_5 = par_self;
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_status);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_1);

            exception_lineno = 187;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = const_str_plain_method_whitelist;
        CHECK_OBJECT(par_self);
        tmp_source_name_6 = par_self;
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_method_whitelist);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_1);

            exception_lineno = 188;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_6, tmp_dict_value_6);
        Py_DECREF(tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = const_str_plain_status_forcelist;
        CHECK_OBJECT(par_self);
        tmp_source_name_7 = par_self;
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_status_forcelist);
        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_1);

            exception_lineno = 189;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_7, tmp_dict_value_7);
        Py_DECREF(tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = const_str_plain_backoff_factor;
        CHECK_OBJECT(par_self);
        tmp_source_name_8 = par_self;
        tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_backoff_factor);
        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_1);

            exception_lineno = 190;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_8, tmp_dict_value_8);
        Py_DECREF(tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = const_str_plain_raise_on_redirect;
        CHECK_OBJECT(par_self);
        tmp_source_name_9 = par_self;
        tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_raise_on_redirect);
        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_1);

            exception_lineno = 191;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_9, tmp_dict_value_9);
        Py_DECREF(tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = const_str_plain_raise_on_status;
        CHECK_OBJECT(par_self);
        tmp_source_name_10 = par_self;
        tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_raise_on_status);
        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_1);

            exception_lineno = 192;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_10, tmp_dict_value_10);
        Py_DECREF(tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = const_str_plain_history;
        CHECK_OBJECT(par_self);
        tmp_source_name_11 = par_self;
        tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_history);
        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_1);

            exception_lineno = 193;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_11, tmp_dict_value_11);
        Py_DECREF(tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = const_str_plain_remove_headers_on_redirect;
        CHECK_OBJECT(par_self);
        tmp_source_name_12 = par_self;
        tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_remove_headers_on_redirect);
        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_1);

            exception_lineno = 194;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_12, tmp_dict_value_12);
        Py_DECREF(tmp_dict_value_12);
        assert(!(tmp_res != 0));
        assert(var_params == NULL);
        var_params = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(var_params);
        tmp_called_instance_1 = var_params;
        CHECK_OBJECT(par_kw);
        tmp_args_element_name_1 = par_kw;
        frame_083a826ebb93c52c41563c960f4aa88c->m_frame.f_lineno = 196;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_update, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_dircall_arg2_1;
        CHECK_OBJECT(par_self);
        tmp_type_arg_1 = par_self;
        tmp_dircall_arg1_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_dircall_arg1_1 == NULL));
        CHECK_OBJECT(var_params);
        tmp_dircall_arg2_1 = var_params;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___internal__$$$function_5_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_083a826ebb93c52c41563c960f4aa88c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_083a826ebb93c52c41563c960f4aa88c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_083a826ebb93c52c41563c960f4aa88c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_083a826ebb93c52c41563c960f4aa88c, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_083a826ebb93c52c41563c960f4aa88c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_083a826ebb93c52c41563c960f4aa88c, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_083a826ebb93c52c41563c960f4aa88c,
        type_description_1,
        par_self,
        par_kw,
        var_params
    );


    // Release cached frame.
    if (frame_083a826ebb93c52c41563c960f4aa88c == cache_frame_083a826ebb93c52c41563c960f4aa88c) {
        Py_DECREF(frame_083a826ebb93c52c41563c960f4aa88c);
    }
    cache_frame_083a826ebb93c52c41563c960f4aa88c = NULL;

    assertFrameObject(frame_083a826ebb93c52c41563c960f4aa88c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_2_new);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_params);
    Py_DECREF(var_params);
    var_params = NULL;

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

    Py_XDECREF(var_params);
    var_params = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_2_new);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function_3_from_int(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_retries = python_pars[1];
    PyObject *par_redirect = python_pars[2];
    PyObject *par_default = python_pars[3];
    PyObject *var_new_retries = NULL;
    struct Nuitka_FrameObject *frame_70421d4f87e38398e7230e36867d710c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_70421d4f87e38398e7230e36867d710c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_70421d4f87e38398e7230e36867d710c, codeobj_70421d4f87e38398e7230e36867d710c, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_70421d4f87e38398e7230e36867d710c = cache_frame_70421d4f87e38398e7230e36867d710c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_70421d4f87e38398e7230e36867d710c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_70421d4f87e38398e7230e36867d710c) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_retries);
        tmp_compexpr_left_1 = par_retries;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT(par_default);
            tmp_compexpr_left_2 = par_default;
            tmp_compexpr_right_2 = Py_None;
            tmp_condition_result_2 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_1;
            } else {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            CHECK_OBJECT(par_default);
            tmp_assign_source_1 = par_default;
            Py_INCREF(tmp_assign_source_1);
            goto condexpr_end_1;
            condexpr_false_1:;
            CHECK_OBJECT(par_cls);
            tmp_source_name_1 = par_cls;
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_DEFAULT);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            condexpr_end_1:;
            {
                PyObject *old = par_retries;
                assert(old != NULL);
                par_retries = tmp_assign_source_1;
                Py_DECREF(old);
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_retries);
        tmp_isinstance_inst_1 = par_retries;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_Retry);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19588 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 205;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        CHECK_OBJECT(par_retries);
        tmp_return_value = par_retries;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_2;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_value_name_1;
        CHECK_OBJECT(par_redirect);
        tmp_value_name_1 = par_redirect;
        tmp_res = CHECK_IF_TRUE(tmp_value_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_and_right_value_1 = Py_None;
        tmp_assign_source_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_assign_source_2 = tmp_and_left_value_1;
        and_end_1:;
        {
            PyObject *old = par_redirect;
            assert(old != NULL);
            par_redirect = tmp_assign_source_2;
            Py_INCREF(par_redirect);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(par_cls);
        tmp_called_name_1 = par_cls;
        CHECK_OBJECT(par_retries);
        tmp_tuple_element_1 = par_retries;
        tmp_args_name_1 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = const_str_plain_redirect;
        CHECK_OBJECT(par_redirect);
        tmp_dict_value_1 = par_redirect;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_70421d4f87e38398e7230e36867d710c->m_frame.f_lineno = 209;
        tmp_assign_source_3 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_retries == NULL);
        var_new_retries = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_log);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_log);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28210 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 210;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        tmp_args_element_name_1 = const_str_digest_3ff146bf2cbf06e10d34294d9109668e;
        CHECK_OBJECT(par_retries);
        tmp_args_element_name_2 = par_retries;
        CHECK_OBJECT(var_new_retries);
        tmp_args_element_name_3 = var_new_retries;
        frame_70421d4f87e38398e7230e36867d710c->m_frame.f_lineno = 210;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_1, const_str_plain_debug, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_70421d4f87e38398e7230e36867d710c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_70421d4f87e38398e7230e36867d710c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_70421d4f87e38398e7230e36867d710c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_70421d4f87e38398e7230e36867d710c, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_70421d4f87e38398e7230e36867d710c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_70421d4f87e38398e7230e36867d710c, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_70421d4f87e38398e7230e36867d710c,
        type_description_1,
        par_cls,
        par_retries,
        par_redirect,
        par_default,
        var_new_retries
    );


    // Release cached frame.
    if (frame_70421d4f87e38398e7230e36867d710c == cache_frame_70421d4f87e38398e7230e36867d710c) {
        Py_DECREF(frame_70421d4f87e38398e7230e36867d710c);
    }
    cache_frame_70421d4f87e38398e7230e36867d710c = NULL;

    assertFrameObject(frame_70421d4f87e38398e7230e36867d710c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_new_retries);
    tmp_return_value = var_new_retries;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_3_from_int);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)par_retries);
    Py_DECREF(par_retries);
    par_retries = NULL;

    CHECK_OBJECT((PyObject *)par_redirect);
    Py_DECREF(par_redirect);
    par_redirect = NULL;

    Py_XDECREF(var_new_retries);
    var_new_retries = NULL;

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

    Py_XDECREF(par_retries);
    par_retries = NULL;

    CHECK_OBJECT((PyObject *)par_redirect);
    Py_DECREF(par_redirect);
    par_redirect = NULL;

    Py_XDECREF(var_new_retries);
    var_new_retries = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_3_from_int);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function_4_get_backoff_time(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_consecutive_errors_len = NULL;
    PyObject *var_backoff_value = NULL;
    struct Nuitka_FrameObject *frame_daaf1dd45e93d4cebd5164a2b0a70eb2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_daaf1dd45e93d4cebd5164a2b0a70eb2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_daaf1dd45e93d4cebd5164a2b0a70eb2, codeobj_daaf1dd45e93d4cebd5164a2b0a70eb2, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_daaf1dd45e93d4cebd5164a2b0a70eb2 = cache_frame_daaf1dd45e93d4cebd5164a2b0a70eb2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_daaf1dd45e93d4cebd5164a2b0a70eb2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_daaf1dd45e93d4cebd5164a2b0a70eb2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_takewhile);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_takewhile);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 32263 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = MAKE_FUNCTION_urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda();



        tmp_called_name_2 = (PyObject *)&PyReversed_Type;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_history);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 220;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_daaf1dd45e93d4cebd5164a2b0a70eb2->m_frame.f_lineno = 220;
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 220;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_daaf1dd45e93d4cebd5164a2b0a70eb2->m_frame.f_lineno = 219;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_len_arg_1 = PySequence_List(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_consecutive_errors_len == NULL);
        var_consecutive_errors_len = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_consecutive_errors_len);
        tmp_compexpr_left_1 = var_consecutive_errors_len;
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = const_int_0;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_left_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_backoff_factor);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = const_int_pos_2;
        CHECK_OBJECT(var_consecutive_errors_len);
        tmp_left_name_3 = var_consecutive_errors_len;
        tmp_right_name_3 = const_int_pos_1;
        tmp_right_name_2 = BINARY_OPERATION_SUB_LONG_LONG(tmp_left_name_3, tmp_right_name_3);
        assert(!(tmp_right_name_2 == NULL));
        tmp_right_name_1 = BINARY_OPERATION_POW_LONG_LONG(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 224;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_MUL_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_backoff_value == NULL);
        var_backoff_value = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_5;
        tmp_called_name_3 = LOOKUP_BUILTIN(const_str_plain_min);
        assert(tmp_called_name_3 != NULL);
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_BACKOFF_MAX);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_backoff_value);
        tmp_args_element_name_5 = var_backoff_value;
        frame_daaf1dd45e93d4cebd5164a2b0a70eb2->m_frame.f_lineno = 225;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_args_element_name_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_daaf1dd45e93d4cebd5164a2b0a70eb2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_daaf1dd45e93d4cebd5164a2b0a70eb2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_daaf1dd45e93d4cebd5164a2b0a70eb2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_daaf1dd45e93d4cebd5164a2b0a70eb2, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_daaf1dd45e93d4cebd5164a2b0a70eb2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_daaf1dd45e93d4cebd5164a2b0a70eb2, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_daaf1dd45e93d4cebd5164a2b0a70eb2,
        type_description_1,
        par_self,
        var_consecutive_errors_len,
        var_backoff_value
    );


    // Release cached frame.
    if (frame_daaf1dd45e93d4cebd5164a2b0a70eb2 == cache_frame_daaf1dd45e93d4cebd5164a2b0a70eb2) {
        Py_DECREF(frame_daaf1dd45e93d4cebd5164a2b0a70eb2);
    }
    cache_frame_daaf1dd45e93d4cebd5164a2b0a70eb2 = NULL;

    assertFrameObject(frame_daaf1dd45e93d4cebd5164a2b0a70eb2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_4_get_backoff_time);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_consecutive_errors_len);
    Py_DECREF(var_consecutive_errors_len);
    var_consecutive_errors_len = NULL;

    Py_XDECREF(var_backoff_value);
    var_backoff_value = NULL;

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

    Py_XDECREF(var_consecutive_errors_len);
    var_consecutive_errors_len = NULL;

    Py_XDECREF(var_backoff_value);
    var_backoff_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_4_get_backoff_time);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_f5323df5ecf8c6170ccdcf43c8e9fa7c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f5323df5ecf8c6170ccdcf43c8e9fa7c = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_f5323df5ecf8c6170ccdcf43c8e9fa7c, codeobj_f5323df5ecf8c6170ccdcf43c8e9fa7c, module_urllib3$util$retry, sizeof(void *));
    frame_f5323df5ecf8c6170ccdcf43c8e9fa7c = cache_frame_f5323df5ecf8c6170ccdcf43c8e9fa7c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f5323df5ecf8c6170ccdcf43c8e9fa7c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f5323df5ecf8c6170ccdcf43c8e9fa7c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_x);
        tmp_source_name_1 = par_x;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_redirect_location);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_return_value = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? Py_True : Py_False;
        Py_DECREF(tmp_compexpr_left_1);
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f5323df5ecf8c6170ccdcf43c8e9fa7c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f5323df5ecf8c6170ccdcf43c8e9fa7c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f5323df5ecf8c6170ccdcf43c8e9fa7c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f5323df5ecf8c6170ccdcf43c8e9fa7c, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_f5323df5ecf8c6170ccdcf43c8e9fa7c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f5323df5ecf8c6170ccdcf43c8e9fa7c, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f5323df5ecf8c6170ccdcf43c8e9fa7c,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if (frame_f5323df5ecf8c6170ccdcf43c8e9fa7c == cache_frame_f5323df5ecf8c6170ccdcf43c8e9fa7c) {
        Py_DECREF(frame_f5323df5ecf8c6170ccdcf43c8e9fa7c);
    }
    cache_frame_f5323df5ecf8c6170ccdcf43c8e9fa7c = NULL;

    assertFrameObject(frame_f5323df5ecf8c6170ccdcf43c8e9fa7c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function_5_parse_retry_after(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_retry_after = python_pars[1];
    PyObject *var_seconds = NULL;
    PyObject *var_retry_date_tuple = NULL;
    PyObject *var_retry_date = NULL;
    struct Nuitka_FrameObject *frame_d2a314761c4e3ca9ef91319d9a14fc0b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d2a314761c4e3ca9ef91319d9a14fc0b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_d2a314761c4e3ca9ef91319d9a14fc0b, codeobj_d2a314761c4e3ca9ef91319d9a14fc0b, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_d2a314761c4e3ca9ef91319d9a14fc0b = cache_frame_d2a314761c4e3ca9ef91319d9a14fc0b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d2a314761c4e3ca9ef91319d9a14fc0b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d2a314761c4e3ca9ef91319d9a14fc0b) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_re);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_re);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2261 ], 24, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 229;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        tmp_args_element_name_1 = const_str_digest_d43b7afa583ad163d56ae0bbfdcdb575;
        CHECK_OBJECT(par_retry_after);
        tmp_args_element_name_2 = par_retry_after;
        frame_d2a314761c4e3ca9ef91319d9a14fc0b->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain_match, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 229;
            type_description_1 = "ooooo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_int_arg_1;
            CHECK_OBJECT(par_retry_after);
            tmp_int_arg_1 = par_retry_after;
            tmp_assign_source_1 = PyNumber_Int(tmp_int_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert(var_seconds == NULL);
            var_seconds = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_email);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_email);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 30891 ], 27, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 232;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_utils);
            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_retry_after);
            tmp_args_element_name_3 = par_retry_after;
            frame_d2a314761c4e3ca9ef91319d9a14fc0b->m_frame.f_lineno = 232;
            {
                PyObject *call_args[] = {tmp_args_element_name_3};
                tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_parsedate, call_args);
            }

            Py_DECREF(tmp_called_instance_2);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert(var_retry_date_tuple == NULL);
            var_retry_date_tuple = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(var_retry_date_tuple);
            tmp_compexpr_left_1 = var_retry_date_tuple;
            tmp_compexpr_right_1 = Py_None;
            tmp_condition_result_2 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_InvalidHeader);

                if (unlikely(tmp_mvar_value_3 == NULL)) {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidHeader);
                }

                if (tmp_mvar_value_3 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 25235 ], 35, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 234;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_1 = tmp_mvar_value_3;
                tmp_left_name_1 = const_str_digest_52dc615064dbc739578d7b66bd4357d4;
                CHECK_OBJECT(par_retry_after);
                tmp_right_name_1 = par_retry_after;
                tmp_args_element_name_4 = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
                if (tmp_args_element_name_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 234;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                frame_d2a314761c4e3ca9ef91319d9a14fc0b->m_frame.f_lineno = 234;
                tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_4);
                Py_DECREF(tmp_args_element_name_4);
                if (tmp_raise_type_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 234;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_1;
                exception_lineno = 234;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_time);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_time);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 7581 ], 26, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 235;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_3 = tmp_mvar_value_4;
            CHECK_OBJECT(var_retry_date_tuple);
            tmp_args_element_name_5 = var_retry_date_tuple;
            frame_d2a314761c4e3ca9ef91319d9a14fc0b->m_frame.f_lineno = 235;
            {
                PyObject *call_args[] = {tmp_args_element_name_5};
                tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_mktime, call_args);
            }

            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert(var_retry_date == NULL);
            var_retry_date = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_mvar_value_5;
            CHECK_OBJECT(var_retry_date);
            tmp_left_name_2 = var_retry_date;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_time);

            if (unlikely(tmp_mvar_value_5 == NULL)) {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_time);
            }

            if (tmp_mvar_value_5 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 7581 ], 26, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 236;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_4 = tmp_mvar_value_5;
            frame_d2a314761c4e3ca9ef91319d9a14fc0b->m_frame.f_lineno = 236;
            tmp_right_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, const_str_plain_time);
            if (tmp_right_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
            Py_DECREF(tmp_right_name_2);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert(var_seconds == NULL);
            var_seconds = tmp_assign_source_4;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_seconds);
        tmp_compexpr_left_2 = var_seconds;
        tmp_compexpr_right_2 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooo";
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
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = const_int_0;
            {
                PyObject *old = var_seconds;
                assert(old != NULL);
                var_seconds = tmp_assign_source_5;
                Py_INCREF(var_seconds);
                Py_DECREF(old);
            }

        }
        branch_no_3:;
    }
    if (var_seconds == NULL) {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF(exception_type);
        exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "seconds");
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 241;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_seconds;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d2a314761c4e3ca9ef91319d9a14fc0b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d2a314761c4e3ca9ef91319d9a14fc0b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d2a314761c4e3ca9ef91319d9a14fc0b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d2a314761c4e3ca9ef91319d9a14fc0b, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_d2a314761c4e3ca9ef91319d9a14fc0b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d2a314761c4e3ca9ef91319d9a14fc0b, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d2a314761c4e3ca9ef91319d9a14fc0b,
        type_description_1,
        par_self,
        par_retry_after,
        var_seconds,
        var_retry_date_tuple,
        var_retry_date
    );


    // Release cached frame.
    if (frame_d2a314761c4e3ca9ef91319d9a14fc0b == cache_frame_d2a314761c4e3ca9ef91319d9a14fc0b) {
        Py_DECREF(frame_d2a314761c4e3ca9ef91319d9a14fc0b);
    }
    cache_frame_d2a314761c4e3ca9ef91319d9a14fc0b = NULL;

    assertFrameObject(frame_d2a314761c4e3ca9ef91319d9a14fc0b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_5_parse_retry_after);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_seconds);
    var_seconds = NULL;

    Py_XDECREF(var_retry_date_tuple);
    var_retry_date_tuple = NULL;

    Py_XDECREF(var_retry_date);
    var_retry_date = NULL;

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

    Py_XDECREF(var_seconds);
    var_seconds = NULL;

    Py_XDECREF(var_retry_date_tuple);
    var_retry_date_tuple = NULL;

    Py_XDECREF(var_retry_date);
    var_retry_date = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_5_parse_retry_after);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_retry_after);
    Py_DECREF(par_retry_after);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_retry_after);
    Py_DECREF(par_retry_after);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function_6_get_retry_after(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_response = python_pars[1];
    PyObject *var_retry_after = NULL;
    struct Nuitka_FrameObject *frame_d55428f9dcf5e8b583000841fb3b0d97;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d55428f9dcf5e8b583000841fb3b0d97 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_d55428f9dcf5e8b583000841fb3b0d97, codeobj_d55428f9dcf5e8b583000841fb3b0d97, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_d55428f9dcf5e8b583000841fb3b0d97 = cache_frame_d55428f9dcf5e8b583000841fb3b0d97;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d55428f9dcf5e8b583000841fb3b0d97);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d55428f9dcf5e8b583000841fb3b0d97) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_response);
        tmp_called_instance_1 = par_response;
        frame_d55428f9dcf5e8b583000841fb3b0d97->m_frame.f_lineno = 246;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_getheader, &PyTuple_GET_ITEM(const_tuple_str_digest_53eb1bcf3283c3fcccb95b51de02ce94_tuple, 0));

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_retry_after == NULL);
        var_retry_after = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_retry_after);
        tmp_compexpr_left_1 = var_retry_after;
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
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_retry_after);
        tmp_args_element_name_1 = var_retry_after;
        frame_d55428f9dcf5e8b583000841fb3b0d97->m_frame.f_lineno = 251;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_parse_retry_after, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d55428f9dcf5e8b583000841fb3b0d97);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d55428f9dcf5e8b583000841fb3b0d97);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d55428f9dcf5e8b583000841fb3b0d97);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d55428f9dcf5e8b583000841fb3b0d97, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_d55428f9dcf5e8b583000841fb3b0d97->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d55428f9dcf5e8b583000841fb3b0d97, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d55428f9dcf5e8b583000841fb3b0d97,
        type_description_1,
        par_self,
        par_response,
        var_retry_after
    );


    // Release cached frame.
    if (frame_d55428f9dcf5e8b583000841fb3b0d97 == cache_frame_d55428f9dcf5e8b583000841fb3b0d97) {
        Py_DECREF(frame_d55428f9dcf5e8b583000841fb3b0d97);
    }
    cache_frame_d55428f9dcf5e8b583000841fb3b0d97 = NULL;

    assertFrameObject(frame_d55428f9dcf5e8b583000841fb3b0d97);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_6_get_retry_after);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_retry_after);
    Py_DECREF(var_retry_after);
    var_retry_after = NULL;

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

    Py_XDECREF(var_retry_after);
    var_retry_after = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_6_get_retry_after);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function_7_sleep_for_retry(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_response = python_pars[1];
    PyObject *var_retry_after = NULL;
    struct Nuitka_FrameObject *frame_4eaf5f9eecc47e42f40c33fa2a648ea8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4eaf5f9eecc47e42f40c33fa2a648ea8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_4eaf5f9eecc47e42f40c33fa2a648ea8, codeobj_4eaf5f9eecc47e42f40c33fa2a648ea8, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_4eaf5f9eecc47e42f40c33fa2a648ea8 = cache_frame_4eaf5f9eecc47e42f40c33fa2a648ea8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4eaf5f9eecc47e42f40c33fa2a648ea8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4eaf5f9eecc47e42f40c33fa2a648ea8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_response);
        tmp_args_element_name_1 = par_response;
        frame_4eaf5f9eecc47e42f40c33fa2a648ea8->m_frame.f_lineno = 254;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_get_retry_after, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_retry_after == NULL);
        var_retry_after = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_retry_after);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_retry_after);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooo";
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_time);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_time);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 7581 ], 26, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 256;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_1;
            CHECK_OBJECT(var_retry_after);
            tmp_args_element_name_2 = var_retry_after;
            frame_4eaf5f9eecc47e42f40c33fa2a648ea8->m_frame.f_lineno = 256;
            {
                PyObject *call_args[] = {tmp_args_element_name_2};
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_sleep, call_args);
            }

            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        tmp_return_value = Py_True;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4eaf5f9eecc47e42f40c33fa2a648ea8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4eaf5f9eecc47e42f40c33fa2a648ea8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4eaf5f9eecc47e42f40c33fa2a648ea8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4eaf5f9eecc47e42f40c33fa2a648ea8, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_4eaf5f9eecc47e42f40c33fa2a648ea8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4eaf5f9eecc47e42f40c33fa2a648ea8, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4eaf5f9eecc47e42f40c33fa2a648ea8,
        type_description_1,
        par_self,
        par_response,
        var_retry_after
    );


    // Release cached frame.
    if (frame_4eaf5f9eecc47e42f40c33fa2a648ea8 == cache_frame_4eaf5f9eecc47e42f40c33fa2a648ea8) {
        Py_DECREF(frame_4eaf5f9eecc47e42f40c33fa2a648ea8);
    }
    cache_frame_4eaf5f9eecc47e42f40c33fa2a648ea8 = NULL;

    assertFrameObject(frame_4eaf5f9eecc47e42f40c33fa2a648ea8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_7_sleep_for_retry);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_retry_after);
    Py_DECREF(var_retry_after);
    var_retry_after = NULL;

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

    Py_XDECREF(var_retry_after);
    var_retry_after = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_7_sleep_for_retry);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function_8__sleep_backoff(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_backoff = NULL;
    struct Nuitka_FrameObject *frame_587b389d500700a81745e36782697e1f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_587b389d500700a81745e36782697e1f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_587b389d500700a81745e36782697e1f, codeobj_587b389d500700a81745e36782697e1f, module_urllib3$util$retry, sizeof(void *)+sizeof(void *));
    frame_587b389d500700a81745e36782697e1f = cache_frame_587b389d500700a81745e36782697e1f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_587b389d500700a81745e36782697e1f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_587b389d500700a81745e36782697e1f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_587b389d500700a81745e36782697e1f->m_frame.f_lineno = 262;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_get_backoff_time);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_backoff == NULL);
        var_backoff = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_backoff);
        tmp_compexpr_left_1 = var_backoff;
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = Py_None;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_time);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_time);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7581 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 265;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT(var_backoff);
        tmp_args_element_name_1 = var_backoff;
        frame_587b389d500700a81745e36782697e1f->m_frame.f_lineno = 265;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_sleep, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_587b389d500700a81745e36782697e1f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_587b389d500700a81745e36782697e1f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_587b389d500700a81745e36782697e1f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_587b389d500700a81745e36782697e1f, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_587b389d500700a81745e36782697e1f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_587b389d500700a81745e36782697e1f, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_587b389d500700a81745e36782697e1f,
        type_description_1,
        par_self,
        var_backoff
    );


    // Release cached frame.
    if (frame_587b389d500700a81745e36782697e1f == cache_frame_587b389d500700a81745e36782697e1f) {
        Py_DECREF(frame_587b389d500700a81745e36782697e1f);
    }
    cache_frame_587b389d500700a81745e36782697e1f = NULL;

    assertFrameObject(frame_587b389d500700a81745e36782697e1f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_8__sleep_backoff);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_backoff);
    Py_DECREF(var_backoff);
    var_backoff = NULL;

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

    Py_XDECREF(var_backoff);
    var_backoff = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_8__sleep_backoff);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function_9_sleep(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_response = python_pars[1];
    PyObject *var_slept = NULL;
    struct Nuitka_FrameObject *frame_e732c728ce59881267b686dbb561ad3e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e732c728ce59881267b686dbb561ad3e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_e732c728ce59881267b686dbb561ad3e, codeobj_e732c728ce59881267b686dbb561ad3e, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_e732c728ce59881267b686dbb561ad3e = cache_frame_e732c728ce59881267b686dbb561ad3e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e732c728ce59881267b686dbb561ad3e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e732c728ce59881267b686dbb561ad3e) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_response);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_response);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooo";
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT(par_self);
            tmp_called_instance_1 = par_self;
            CHECK_OBJECT(par_response);
            tmp_args_element_name_1 = par_response;
            frame_e732c728ce59881267b686dbb561ad3e->m_frame.f_lineno = 277;
            {
                PyObject *call_args[] = {tmp_args_element_name_1};
                tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_sleep_for_retry, call_args);
            }

            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            assert(var_slept == NULL);
            var_slept = tmp_assign_source_1;
        }
        {
            nuitka_bool tmp_condition_result_2;
            int tmp_truth_name_2;
            CHECK_OBJECT(var_slept);
            tmp_truth_name_2 = CHECK_IF_TRUE(var_slept);
            if (tmp_truth_name_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
            branch_yes_2:;
            tmp_return_value = Py_None;
            Py_INCREF(tmp_return_value);
            goto frame_return_exit_1;
            branch_no_2:;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_e732c728ce59881267b686dbb561ad3e->m_frame.f_lineno = 281;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain__sleep_backoff);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e732c728ce59881267b686dbb561ad3e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e732c728ce59881267b686dbb561ad3e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e732c728ce59881267b686dbb561ad3e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e732c728ce59881267b686dbb561ad3e, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_e732c728ce59881267b686dbb561ad3e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e732c728ce59881267b686dbb561ad3e, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e732c728ce59881267b686dbb561ad3e,
        type_description_1,
        par_self,
        par_response,
        var_slept
    );


    // Release cached frame.
    if (frame_e732c728ce59881267b686dbb561ad3e == cache_frame_e732c728ce59881267b686dbb561ad3e) {
        Py_DECREF(frame_e732c728ce59881267b686dbb561ad3e);
    }
    cache_frame_e732c728ce59881267b686dbb561ad3e = NULL;

    assertFrameObject(frame_e732c728ce59881267b686dbb561ad3e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_9_sleep);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_slept);
    var_slept = NULL;

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

    Py_XDECREF(var_slept);
    var_slept = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_9_sleep);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function_10__is_connection_error(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_err = python_pars[1];
    struct Nuitka_FrameObject *frame_9fb5395eb6333c5783c03322b103bdb3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_9fb5395eb6333c5783c03322b103bdb3 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_9fb5395eb6333c5783c03322b103bdb3, codeobj_9fb5395eb6333c5783c03322b103bdb3, module_urllib3$util$retry, sizeof(void *)+sizeof(void *));
    frame_9fb5395eb6333c5783c03322b103bdb3 = cache_frame_9fb5395eb6333c5783c03322b103bdb3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9fb5395eb6333c5783c03322b103bdb3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9fb5395eb6333c5783c03322b103bdb3) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_err);
        tmp_isinstance_inst_1 = par_err;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20642 ], 41, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 287;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9fb5395eb6333c5783c03322b103bdb3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9fb5395eb6333c5783c03322b103bdb3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9fb5395eb6333c5783c03322b103bdb3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9fb5395eb6333c5783c03322b103bdb3, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_9fb5395eb6333c5783c03322b103bdb3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9fb5395eb6333c5783c03322b103bdb3, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9fb5395eb6333c5783c03322b103bdb3,
        type_description_1,
        par_self,
        par_err
    );


    // Release cached frame.
    if (frame_9fb5395eb6333c5783c03322b103bdb3 == cache_frame_9fb5395eb6333c5783c03322b103bdb3) {
        Py_DECREF(frame_9fb5395eb6333c5783c03322b103bdb3);
    }
    cache_frame_9fb5395eb6333c5783c03322b103bdb3 = NULL;

    assertFrameObject(frame_9fb5395eb6333c5783c03322b103bdb3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_10__is_connection_error);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_err);
    Py_DECREF(par_err);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_err);
    Py_DECREF(par_err);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function_11__is_read_error(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_err = python_pars[1];
    struct Nuitka_FrameObject *frame_5fb66f67fea9063ba55c8bdfda68323a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5fb66f67fea9063ba55c8bdfda68323a = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_5fb66f67fea9063ba55c8bdfda68323a, codeobj_5fb66f67fea9063ba55c8bdfda68323a, module_urllib3$util$retry, sizeof(void *)+sizeof(void *));
    frame_5fb66f67fea9063ba55c8bdfda68323a = cache_frame_5fb66f67fea9063ba55c8bdfda68323a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5fb66f67fea9063ba55c8bdfda68323a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5fb66f67fea9063ba55c8bdfda68323a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT(par_err);
        tmp_isinstance_inst_1 = par_err;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21021 ], 38, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 293;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_isinstance_cls_1, 0, tmp_tuple_element_1);
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ProtocolError);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProtocolError);
        }

        if (tmp_mvar_value_2 == NULL) {
            Py_DECREF(tmp_isinstance_cls_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20507 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 293;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_2;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_isinstance_cls_1, 1, tmp_tuple_element_1);
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5fb66f67fea9063ba55c8bdfda68323a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5fb66f67fea9063ba55c8bdfda68323a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5fb66f67fea9063ba55c8bdfda68323a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5fb66f67fea9063ba55c8bdfda68323a, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_5fb66f67fea9063ba55c8bdfda68323a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5fb66f67fea9063ba55c8bdfda68323a, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5fb66f67fea9063ba55c8bdfda68323a,
        type_description_1,
        par_self,
        par_err
    );


    // Release cached frame.
    if (frame_5fb66f67fea9063ba55c8bdfda68323a == cache_frame_5fb66f67fea9063ba55c8bdfda68323a) {
        Py_DECREF(frame_5fb66f67fea9063ba55c8bdfda68323a);
    }
    cache_frame_5fb66f67fea9063ba55c8bdfda68323a = NULL;

    assertFrameObject(frame_5fb66f67fea9063ba55c8bdfda68323a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_11__is_read_error);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_err);
    Py_DECREF(par_err);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_err);
    Py_DECREF(par_err);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function_12__is_method_retryable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_method = python_pars[1];
    struct Nuitka_FrameObject *frame_bf091fdeadb85797f23799ebd5025c58;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bf091fdeadb85797f23799ebd5025c58 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_bf091fdeadb85797f23799ebd5025c58, codeobj_bf091fdeadb85797f23799ebd5025c58, module_urllib3$util$retry, sizeof(void *)+sizeof(void *));
    frame_bf091fdeadb85797f23799ebd5025c58 = cache_frame_bf091fdeadb85797f23799ebd5025c58;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bf091fdeadb85797f23799ebd5025c58);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bf091fdeadb85797f23799ebd5025c58) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_method_whitelist);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 299;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_method);
        tmp_called_instance_1 = par_method;
        frame_bf091fdeadb85797f23799ebd5025c58->m_frame.f_lineno = 299;
        tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_upper);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_method_whitelist);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 299;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_return_value = Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bf091fdeadb85797f23799ebd5025c58);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bf091fdeadb85797f23799ebd5025c58);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bf091fdeadb85797f23799ebd5025c58);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bf091fdeadb85797f23799ebd5025c58, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_bf091fdeadb85797f23799ebd5025c58->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf091fdeadb85797f23799ebd5025c58, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bf091fdeadb85797f23799ebd5025c58,
        type_description_1,
        par_self,
        par_method
    );


    // Release cached frame.
    if (frame_bf091fdeadb85797f23799ebd5025c58 == cache_frame_bf091fdeadb85797f23799ebd5025c58) {
        Py_DECREF(frame_bf091fdeadb85797f23799ebd5025c58);
    }
    cache_frame_bf091fdeadb85797f23799ebd5025c58 = NULL;

    assertFrameObject(frame_bf091fdeadb85797f23799ebd5025c58);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_12__is_method_retryable);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function_13_is_retry(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_method = python_pars[1];
    PyObject *par_status_code = python_pars[2];
    PyObject *par_has_retry_after = python_pars[3];
    struct Nuitka_FrameObject *frame_033fd868f939675c9854e6a8c7698e17;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_033fd868f939675c9854e6a8c7698e17 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_033fd868f939675c9854e6a8c7698e17, codeobj_033fd868f939675c9854e6a8c7698e17, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_033fd868f939675c9854e6a8c7698e17 = cache_frame_033fd868f939675c9854e6a8c7698e17;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_033fd868f939675c9854e6a8c7698e17);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_033fd868f939675c9854e6a8c7698e17) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_method);
        tmp_args_element_name_1 = par_method;
        frame_033fd868f939675c9854e6a8c7698e17->m_frame.f_lineno = 311;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain__is_method_retryable, call_args);
        }

        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_status_forcelist);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 314;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_status_code);
        tmp_compexpr_left_1 = par_status_code;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_status_forcelist);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
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
    {
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_source_name_3;
        int tmp_and_left_truth_3;
        PyObject *tmp_and_left_value_3;
        PyObject *tmp_and_right_value_3;
        PyObject *tmp_source_name_4;
        int tmp_and_left_truth_4;
        PyObject *tmp_and_left_value_4;
        PyObject *tmp_and_right_value_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_and_left_value_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_total);
        if (tmp_and_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_2);

            exception_lineno = 318;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        Py_DECREF(tmp_and_left_value_2);
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_and_left_value_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_respect_retry_after_header);
        if (tmp_and_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_3 = CHECK_IF_TRUE(tmp_and_left_value_3);
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_3);

            exception_lineno = 318;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        Py_DECREF(tmp_and_left_value_3);
        CHECK_OBJECT(par_has_retry_after);
        tmp_and_left_value_4 = par_has_retry_after;
        tmp_and_left_truth_4 = CHECK_IF_TRUE(tmp_and_left_value_4);
        if (tmp_and_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        CHECK_OBJECT(par_status_code);
        tmp_compexpr_left_2 = par_status_code;
        CHECK_OBJECT(par_self);
        tmp_source_name_5 = par_self;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_RETRY_AFTER_STATUS_CODES);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_2, tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_4 = (tmp_res == 1) ? Py_True : Py_False;
        tmp_and_right_value_3 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_and_right_value_3 = tmp_and_left_value_4;
        and_end_4:;
        Py_INCREF(tmp_and_right_value_3);
        tmp_and_right_value_2 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_and_right_value_2 = tmp_and_left_value_3;
        and_end_3:;
        tmp_return_value = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_return_value = tmp_and_left_value_2;
        and_end_2:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_033fd868f939675c9854e6a8c7698e17);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_033fd868f939675c9854e6a8c7698e17);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_033fd868f939675c9854e6a8c7698e17);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_033fd868f939675c9854e6a8c7698e17, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_033fd868f939675c9854e6a8c7698e17->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_033fd868f939675c9854e6a8c7698e17, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_033fd868f939675c9854e6a8c7698e17,
        type_description_1,
        par_self,
        par_method,
        par_status_code,
        par_has_retry_after
    );


    // Release cached frame.
    if (frame_033fd868f939675c9854e6a8c7698e17 == cache_frame_033fd868f939675c9854e6a8c7698e17) {
        Py_DECREF(frame_033fd868f939675c9854e6a8c7698e17);
    }
    cache_frame_033fd868f939675c9854e6a8c7698e17 = NULL;

    assertFrameObject(frame_033fd868f939675c9854e6a8c7698e17);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_13_is_retry);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_status_code);
    Py_DECREF(par_status_code);
    CHECK_OBJECT(par_has_retry_after);
    Py_DECREF(par_has_retry_after);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_status_code);
    Py_DECREF(par_status_code);
    CHECK_OBJECT(par_has_retry_after);
    Py_DECREF(par_has_retry_after);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function_14_is_exhausted(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_retry_counts = NULL;
    struct Nuitka_FrameObject *frame_5d4960daa7c7f3a183ea22abbd7ecff8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5d4960daa7c7f3a183ea22abbd7ecff8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_5d4960daa7c7f3a183ea22abbd7ecff8, codeobj_5d4960daa7c7f3a183ea22abbd7ecff8, module_urllib3$util$retry, sizeof(void *)+sizeof(void *));
    frame_5d4960daa7c7f3a183ea22abbd7ecff8 = cache_frame_5d4960daa7c7f3a183ea22abbd7ecff8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5d4960daa7c7f3a183ea22abbd7ecff8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5d4960daa7c7f3a183ea22abbd7ecff8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_total);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = PyTuple_New(5);
        PyTuple_SET_ITEM(tmp_assign_source_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_connect);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_1);

            exception_lineno = 322;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_read);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_1);

            exception_lineno = 322;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_redirect);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_1);

            exception_lineno = 322;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_1, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_source_name_5 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_status);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_1);

            exception_lineno = 322;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_assign_source_1, 4, tmp_tuple_element_1);
        assert(var_retry_counts == NULL);
        var_retry_counts = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = (PyObject *)&PyFilter_Type;
        tmp_args_element_name_1 = Py_None;
        CHECK_OBJECT(var_retry_counts);
        tmp_args_element_name_2 = var_retry_counts;
        frame_5d4960daa7c7f3a183ea22abbd7ecff8->m_frame.f_lineno = 323;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = PySequence_List(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_retry_counts;
            assert(old != NULL);
            var_retry_counts = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(var_retry_counts);
        tmp_operand_name_1 = var_retry_counts;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_called_name_2 = LOOKUP_BUILTIN(const_str_plain_min);
        assert(tmp_called_name_2 != NULL);
        CHECK_OBJECT(var_retry_counts);
        tmp_args_element_name_3 = var_retry_counts;
        frame_5d4960daa7c7f3a183ea22abbd7ecff8->m_frame.f_lineno = 327;
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_return_value = RICH_COMPARE_LT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5d4960daa7c7f3a183ea22abbd7ecff8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5d4960daa7c7f3a183ea22abbd7ecff8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5d4960daa7c7f3a183ea22abbd7ecff8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5d4960daa7c7f3a183ea22abbd7ecff8, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_5d4960daa7c7f3a183ea22abbd7ecff8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5d4960daa7c7f3a183ea22abbd7ecff8, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5d4960daa7c7f3a183ea22abbd7ecff8,
        type_description_1,
        par_self,
        var_retry_counts
    );


    // Release cached frame.
    if (frame_5d4960daa7c7f3a183ea22abbd7ecff8 == cache_frame_5d4960daa7c7f3a183ea22abbd7ecff8) {
        Py_DECREF(frame_5d4960daa7c7f3a183ea22abbd7ecff8);
    }
    cache_frame_5d4960daa7c7f3a183ea22abbd7ecff8 = NULL;

    assertFrameObject(frame_5d4960daa7c7f3a183ea22abbd7ecff8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_14_is_exhausted);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_retry_counts);
    Py_DECREF(var_retry_counts);
    var_retry_counts = NULL;

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

    Py_XDECREF(var_retry_counts);
    var_retry_counts = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_14_is_exhausted);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function_15_increment(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_method = python_pars[1];
    PyObject *par_url = python_pars[2];
    PyObject *par_response = python_pars[3];
    PyObject *par_error = python_pars[4];
    PyObject *par__pool = python_pars[5];
    PyObject *par__stacktrace = python_pars[6];
    PyObject *var_total = NULL;
    PyObject *var_connect = NULL;
    PyObject *var_read = NULL;
    PyObject *var_redirect = NULL;
    PyObject *var_status_count = NULL;
    PyObject *var_cause = NULL;
    PyObject *var_status = NULL;
    PyObject *var_redirect_location = NULL;
    PyObject *var_history = NULL;
    PyObject *var_new_retry = NULL;
    struct Nuitka_FrameObject *frame_35f49103c34316a6a15374b5659c210f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_35f49103c34316a6a15374b5659c210f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_35f49103c34316a6a15374b5659c210f, codeobj_35f49103c34316a6a15374b5659c210f, module_urllib3$util$retry, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_35f49103c34316a6a15374b5659c210f = cache_frame_35f49103c34316a6a15374b5659c210f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_35f49103c34316a6a15374b5659c210f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_35f49103c34316a6a15374b5659c210f) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_total);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_False;
        tmp_and_left_value_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_error);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_error);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_six);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_six);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 27560 ], 25, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 343;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            CHECK_OBJECT(par_error);
            tmp_type_arg_1 = par_error;
            tmp_args_element_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_args_element_name_1 == NULL));
            CHECK_OBJECT(par_error);
            tmp_args_element_name_2 = par_error;
            CHECK_OBJECT(par__stacktrace);
            tmp_args_element_name_3 = par__stacktrace;
            frame_35f49103c34316a6a15374b5659c210f->m_frame.f_lineno = 343;
            {
                PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
                tmp_raise_type_1 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_1, const_str_plain_reraise, call_args);
            }

            Py_DECREF(tmp_args_element_name_1);
            if (tmp_raise_type_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 343;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_total);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_total == NULL);
        var_total = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_total);
        tmp_compexpr_left_2 = var_total;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT(var_total);
            tmp_left_name_1 = var_total;
            tmp_right_name_1 = const_int_pos_1;
            tmp_result = BINARY_OPERATION_INPLACE(PyNumber_InPlaceSubtract, &tmp_left_name_1, tmp_right_name_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = tmp_left_name_1;
            var_total = tmp_assign_source_2;

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_connect);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_connect == NULL);
        var_connect = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_read);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_read == NULL);
        var_read = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT(par_self);
        tmp_source_name_5 = par_self;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_redirect);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_redirect == NULL);
        var_redirect = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT(par_self);
        tmp_source_name_6 = par_self;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_status);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_status_count == NULL);
        var_status_count = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = const_str_plain_unknown;
        assert(var_cause == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_cause = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_None;
        assert(var_status == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_status = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = Py_None;
        assert(var_redirect_location == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_redirect_location = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_error);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_error);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_error);
        tmp_args_element_name_4 = par_error;
        frame_35f49103c34316a6a15374b5659c210f->m_frame.f_lineno = 357;
        {
            PyObject *call_args[] = {tmp_args_element_name_4};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain__is_connection_error, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 357;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_1);
        tmp_condition_result_3 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_3 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT(var_connect);
            tmp_compexpr_left_3 = var_connect;
            tmp_compexpr_right_3 = Py_False;
            tmp_condition_result_4 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            branch_yes_4:;
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_called_instance_3;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_type_arg_2;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_args_element_name_7;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_six);

                if (unlikely(tmp_mvar_value_2 == NULL)) {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_six);
                }

                if (tmp_mvar_value_2 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 27560 ], 25, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 360;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_3 = tmp_mvar_value_2;
                CHECK_OBJECT(par_error);
                tmp_type_arg_2 = par_error;
                tmp_args_element_name_5 = BUILTIN_TYPE1(tmp_type_arg_2);
                assert(!(tmp_args_element_name_5 == NULL));
                CHECK_OBJECT(par_error);
                tmp_args_element_name_6 = par_error;
                CHECK_OBJECT(par__stacktrace);
                tmp_args_element_name_7 = par__stacktrace;
                frame_35f49103c34316a6a15374b5659c210f->m_frame.f_lineno = 360;
                {
                    PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7};
                    tmp_raise_type_2 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_3, const_str_plain_reraise, call_args);
                }

                Py_DECREF(tmp_args_element_name_5);
                if (tmp_raise_type_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 360;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_2;
                exception_lineno = 360;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            goto branch_end_4;
            branch_no_4:;
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                CHECK_OBJECT(var_connect);
                tmp_compexpr_left_4 = var_connect;
                tmp_compexpr_right_4 = Py_None;
                tmp_condition_result_5 = (tmp_compexpr_left_4 != tmp_compexpr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_5;
                } else {
                    goto branch_no_5;
                }
                branch_yes_5:;
                {
                    PyObject *tmp_assign_source_10;
                    PyObject *tmp_left_name_2;
                    PyObject *tmp_right_name_2;
                    CHECK_OBJECT(var_connect);
                    tmp_left_name_2 = var_connect;
                    tmp_right_name_2 = const_int_pos_1;
                    tmp_result = BINARY_OPERATION_INPLACE(PyNumber_InPlaceSubtract, &tmp_left_name_2, tmp_right_name_2);
                    if (tmp_result == false) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 362;
                        type_description_1 = "ooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_10 = tmp_left_name_2;
                    var_connect = tmp_assign_source_10;

                }
                branch_no_5:;
            }
            branch_end_4:;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_6;
            int tmp_and_left_truth_3;
            nuitka_bool tmp_and_left_value_3;
            nuitka_bool tmp_and_right_value_3;
            int tmp_truth_name_4;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_8;
            int tmp_truth_name_5;
            CHECK_OBJECT(par_error);
            tmp_truth_name_4 = CHECK_IF_TRUE(par_error);
            if (tmp_truth_name_4 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_3 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
            if (tmp_and_left_truth_3 == 1) {
                goto and_right_3;
            } else {
                goto and_left_3;
            }
            and_right_3:;
            CHECK_OBJECT(par_self);
            tmp_called_instance_4 = par_self;
            CHECK_OBJECT(par_error);
            tmp_args_element_name_8 = par_error;
            frame_35f49103c34316a6a15374b5659c210f->m_frame.f_lineno = 364;
            {
                PyObject *call_args[] = {tmp_args_element_name_8};
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain__is_read_error, call_args);
            }

            if (tmp_call_result_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_2);
            if (tmp_truth_name_5 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_2);

                exception_lineno = 364;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_3 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF(tmp_call_result_2);
            tmp_condition_result_6 = tmp_and_right_value_3;
            goto and_end_3;
            and_left_3:;
            tmp_condition_result_6 = tmp_and_left_value_3;
            and_end_3:;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
            branch_yes_6:;
            {
                nuitka_bool tmp_condition_result_7;
                int tmp_or_left_truth_1;
                nuitka_bool tmp_or_left_value_1;
                nuitka_bool tmp_or_right_value_1;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_operand_name_1;
                PyObject *tmp_called_instance_5;
                PyObject *tmp_args_element_name_9;
                CHECK_OBJECT(var_read);
                tmp_compexpr_left_5 = var_read;
                tmp_compexpr_right_5 = Py_False;
                tmp_or_left_value_1 = (tmp_compexpr_left_5 == tmp_compexpr_right_5) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
                if (tmp_or_left_truth_1 == 1) {
                    goto or_left_1;
                } else {
                    goto or_right_1;
                }
                or_right_1:;
                CHECK_OBJECT(par_self);
                tmp_called_instance_5 = par_self;
                CHECK_OBJECT(par_method);
                tmp_args_element_name_9 = par_method;
                frame_35f49103c34316a6a15374b5659c210f->m_frame.f_lineno = 366;
                {
                    PyObject *call_args[] = {tmp_args_element_name_9};
                    tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain__is_method_retryable, call_args);
                }

                if (tmp_operand_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 366;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
                Py_DECREF(tmp_operand_name_1);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 366;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_or_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_7 = tmp_or_right_value_1;
                goto or_end_1;
                or_left_1:;
                tmp_condition_result_7 = tmp_or_left_value_1;
                or_end_1:;
                if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_7;
                } else {
                    goto branch_no_7;
                }
                branch_yes_7:;
                {
                    PyObject *tmp_raise_type_3;
                    PyObject *tmp_called_instance_6;
                    PyObject *tmp_mvar_value_3;
                    PyObject *tmp_args_element_name_10;
                    PyObject *tmp_type_arg_3;
                    PyObject *tmp_args_element_name_11;
                    PyObject *tmp_args_element_name_12;
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_six);

                    if (unlikely(tmp_mvar_value_3 == NULL)) {
                        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_six);
                    }

                    if (tmp_mvar_value_3 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 27560 ], 25, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 367;
                        type_description_1 = "ooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_instance_6 = tmp_mvar_value_3;
                    CHECK_OBJECT(par_error);
                    tmp_type_arg_3 = par_error;
                    tmp_args_element_name_10 = BUILTIN_TYPE1(tmp_type_arg_3);
                    assert(!(tmp_args_element_name_10 == NULL));
                    CHECK_OBJECT(par_error);
                    tmp_args_element_name_11 = par_error;
                    CHECK_OBJECT(par__stacktrace);
                    tmp_args_element_name_12 = par__stacktrace;
                    frame_35f49103c34316a6a15374b5659c210f->m_frame.f_lineno = 367;
                    {
                        PyObject *call_args[] = {tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12};
                        tmp_raise_type_3 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_6, const_str_plain_reraise, call_args);
                    }

                    Py_DECREF(tmp_args_element_name_10);
                    if (tmp_raise_type_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 367;
                        type_description_1 = "ooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    exception_type = tmp_raise_type_3;
                    exception_lineno = 367;
                    RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                goto branch_end_7;
                branch_no_7:;
                {
                    nuitka_bool tmp_condition_result_8;
                    PyObject *tmp_compexpr_left_6;
                    PyObject *tmp_compexpr_right_6;
                    CHECK_OBJECT(var_read);
                    tmp_compexpr_left_6 = var_read;
                    tmp_compexpr_right_6 = Py_None;
                    tmp_condition_result_8 = (tmp_compexpr_left_6 != tmp_compexpr_right_6) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_8;
                    } else {
                        goto branch_no_8;
                    }
                    branch_yes_8:;
                    {
                        PyObject *tmp_assign_source_11;
                        PyObject *tmp_left_name_3;
                        PyObject *tmp_right_name_3;
                        CHECK_OBJECT(var_read);
                        tmp_left_name_3 = var_read;
                        tmp_right_name_3 = const_int_pos_1;
                        tmp_result = BINARY_OPERATION_INPLACE(PyNumber_InPlaceSubtract, &tmp_left_name_3, tmp_right_name_3);
                        if (tmp_result == false) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 369;
                            type_description_1 = "ooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_assign_source_11 = tmp_left_name_3;
                        var_read = tmp_assign_source_11;

                    }
                    branch_no_8:;
                }
                branch_end_7:;
            }
            goto branch_end_6;
            branch_no_6:;
            {
                nuitka_bool tmp_condition_result_9;
                int tmp_and_left_truth_4;
                nuitka_bool tmp_and_left_value_4;
                nuitka_bool tmp_and_right_value_4;
                int tmp_truth_name_6;
                PyObject *tmp_called_instance_7;
                PyObject *tmp_call_result_3;
                int tmp_truth_name_7;
                CHECK_OBJECT(par_response);
                tmp_truth_name_6 = CHECK_IF_TRUE(par_response);
                if (tmp_truth_name_6 == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 371;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_and_left_value_4 = tmp_truth_name_6 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
                if (tmp_and_left_truth_4 == 1) {
                    goto and_right_4;
                } else {
                    goto and_left_4;
                }
                and_right_4:;
                CHECK_OBJECT(par_response);
                tmp_called_instance_7 = par_response;
                frame_35f49103c34316a6a15374b5659c210f->m_frame.f_lineno = 371;
                tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, const_str_plain_get_redirect_location);
                if (tmp_call_result_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 371;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_truth_name_7 = CHECK_IF_TRUE(tmp_call_result_3);
                if (tmp_truth_name_7 == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_call_result_3);

                    exception_lineno = 371;
                    type_description_1 = "ooooooooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_and_right_value_4 = tmp_truth_name_7 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF(tmp_call_result_3);
                tmp_condition_result_9 = tmp_and_right_value_4;
                goto and_end_4;
                and_left_4:;
                tmp_condition_result_9 = tmp_and_left_value_4;
                and_end_4:;
                if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_9;
                } else {
                    goto branch_no_9;
                }
                branch_yes_9:;
                {
                    nuitka_bool tmp_condition_result_10;
                    PyObject *tmp_compexpr_left_7;
                    PyObject *tmp_compexpr_right_7;
                    CHECK_OBJECT(var_redirect);
                    tmp_compexpr_left_7 = var_redirect;
                    tmp_compexpr_right_7 = Py_None;
                    tmp_condition_result_10 = (tmp_compexpr_left_7 != tmp_compexpr_right_7) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_10;
                    } else {
                        goto branch_no_10;
                    }
                    branch_yes_10:;
                    {
                        PyObject *tmp_assign_source_12;
                        PyObject *tmp_left_name_4;
                        PyObject *tmp_right_name_4;
                        CHECK_OBJECT(var_redirect);
                        tmp_left_name_4 = var_redirect;
                        tmp_right_name_4 = const_int_pos_1;
                        tmp_result = BINARY_OPERATION_INPLACE(PyNumber_InPlaceSubtract, &tmp_left_name_4, tmp_right_name_4);
                        if (tmp_result == false) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 374;
                            type_description_1 = "ooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_assign_source_12 = tmp_left_name_4;
                        var_redirect = tmp_assign_source_12;

                    }
                    branch_no_10:;
                }
                {
                    PyObject *tmp_assign_source_13;
                    tmp_assign_source_13 = const_str_digest_93b5718dbdad50e34931a5c649b12b14;
                    {
                        PyObject *old = var_cause;
                        assert(old != NULL);
                        var_cause = tmp_assign_source_13;
                        Py_INCREF(var_cause);
                        Py_DECREF(old);
                    }

                }
                {
                    PyObject *tmp_assign_source_14;
                    PyObject *tmp_called_instance_8;
                    CHECK_OBJECT(par_response);
                    tmp_called_instance_8 = par_response;
                    frame_35f49103c34316a6a15374b5659c210f->m_frame.f_lineno = 376;
                    tmp_assign_source_14 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, const_str_plain_get_redirect_location);
                    if (tmp_assign_source_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 376;
                        type_description_1 = "ooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_redirect_location;
                        assert(old != NULL);
                        var_redirect_location = tmp_assign_source_14;
                        Py_DECREF(old);
                    }

                }
                {
                    PyObject *tmp_assign_source_15;
                    PyObject *tmp_source_name_7;
                    CHECK_OBJECT(par_response);
                    tmp_source_name_7 = par_response;
                    tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_status);
                    if (tmp_assign_source_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 377;
                        type_description_1 = "ooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_status;
                        assert(old != NULL);
                        var_status = tmp_assign_source_15;
                        Py_DECREF(old);
                    }

                }
                goto branch_end_9;
                branch_no_9:;
                {
                    PyObject *tmp_assign_source_16;
                    PyObject *tmp_source_name_8;
                    PyObject *tmp_mvar_value_4;
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ResponseError);

                    if (unlikely(tmp_mvar_value_4 == NULL)) {
                        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ResponseError);
                    }

                    if (tmp_mvar_value_4 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 20759 ], 35, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 382;
                        type_description_1 = "ooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_8 = tmp_mvar_value_4;
                    tmp_assign_source_16 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_GENERIC_ERROR);
                    if (tmp_assign_source_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 382;
                        type_description_1 = "ooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = var_cause;
                        assert(old != NULL);
                        var_cause = tmp_assign_source_16;
                        Py_DECREF(old);
                    }

                }
                {
                    nuitka_bool tmp_condition_result_11;
                    int tmp_and_left_truth_5;
                    nuitka_bool tmp_and_left_value_5;
                    nuitka_bool tmp_and_right_value_5;
                    int tmp_truth_name_8;
                    PyObject *tmp_source_name_9;
                    PyObject *tmp_attribute_value_1;
                    int tmp_truth_name_9;
                    CHECK_OBJECT(par_response);
                    tmp_truth_name_8 = CHECK_IF_TRUE(par_response);
                    if (tmp_truth_name_8 == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 383;
                        type_description_1 = "ooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_and_left_value_5 = tmp_truth_name_8 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
                    if (tmp_and_left_truth_5 == 1) {
                        goto and_right_5;
                    } else {
                        goto and_left_5;
                    }
                    and_right_5:;
                    CHECK_OBJECT(par_response);
                    tmp_source_name_9 = par_response;
                    tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_status);
                    if (tmp_attribute_value_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 383;
                        type_description_1 = "ooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_truth_name_9 = CHECK_IF_TRUE(tmp_attribute_value_1);
                    if (tmp_truth_name_9 == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_attribute_value_1);

                        exception_lineno = 383;
                        type_description_1 = "ooooooooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_and_right_value_5 = tmp_truth_name_9 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    Py_DECREF(tmp_attribute_value_1);
                    tmp_condition_result_11 = tmp_and_right_value_5;
                    goto and_end_5;
                    and_left_5:;
                    tmp_condition_result_11 = tmp_and_left_value_5;
                    and_end_5:;
                    if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_11;
                    } else {
                        goto branch_no_11;
                    }
                    branch_yes_11:;
                    {
                        nuitka_bool tmp_condition_result_12;
                        PyObject *tmp_compexpr_left_8;
                        PyObject *tmp_compexpr_right_8;
                        CHECK_OBJECT(var_status_count);
                        tmp_compexpr_left_8 = var_status_count;
                        tmp_compexpr_right_8 = Py_None;
                        tmp_condition_result_12 = (tmp_compexpr_left_8 != tmp_compexpr_right_8) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                            goto branch_yes_12;
                        } else {
                            goto branch_no_12;
                        }
                        branch_yes_12:;
                        {
                            PyObject *tmp_assign_source_17;
                            PyObject *tmp_left_name_5;
                            PyObject *tmp_right_name_5;
                            CHECK_OBJECT(var_status_count);
                            tmp_left_name_5 = var_status_count;
                            tmp_right_name_5 = const_int_pos_1;
                            tmp_result = BINARY_OPERATION_INPLACE(PyNumber_InPlaceSubtract, &tmp_left_name_5, tmp_right_name_5);
                            if (tmp_result == false) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 385;
                                type_description_1 = "ooooooooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_assign_source_17 = tmp_left_name_5;
                            var_status_count = tmp_assign_source_17;

                        }
                        branch_no_12:;
                    }
                    {
                        PyObject *tmp_assign_source_18;
                        PyObject *tmp_called_name_1;
                        PyObject *tmp_source_name_10;
                        PyObject *tmp_source_name_11;
                        PyObject *tmp_mvar_value_5;
                        PyObject *tmp_kw_name_1;
                        PyObject *tmp_dict_key_1;
                        PyObject *tmp_dict_value_1;
                        PyObject *tmp_source_name_12;
                        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ResponseError);

                        if (unlikely(tmp_mvar_value_5 == NULL)) {
                            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ResponseError);
                        }

                        if (tmp_mvar_value_5 == NULL) {

                            exception_type = PyExc_NameError;
                            Py_INCREF(exception_type);
                            exception_value = UNSTREAM_STRING(&constant_bin[ 20759 ], 35, 0);
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                            CHAIN_EXCEPTION(exception_value);

                            exception_lineno = 386;
                            type_description_1 = "ooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_11 = tmp_mvar_value_5;
                        tmp_source_name_10 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_SPECIFIC_ERROR);
                        if (tmp_source_name_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 386;
                            type_description_1 = "ooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_format);
                        Py_DECREF(tmp_source_name_10);
                        if (tmp_called_name_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 386;
                            type_description_1 = "ooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_dict_key_1 = const_str_plain_status_code;
                        CHECK_OBJECT(par_response);
                        tmp_source_name_12 = par_response;
                        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_status);
                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_name_1);

                            exception_lineno = 387;
                            type_description_1 = "ooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
                        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
                        Py_DECREF(tmp_dict_value_1);
                        assert(!(tmp_res != 0));
                        frame_35f49103c34316a6a15374b5659c210f->m_frame.f_lineno = 386;
                        tmp_assign_source_18 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kw_name_1);
                        Py_DECREF(tmp_called_name_1);
                        Py_DECREF(tmp_kw_name_1);
                        if (tmp_assign_source_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 386;
                            type_description_1 = "ooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = var_cause;
                            assert(old != NULL);
                            var_cause = tmp_assign_source_18;
                            Py_DECREF(old);
                        }

                    }
                    {
                        PyObject *tmp_assign_source_19;
                        PyObject *tmp_source_name_13;
                        CHECK_OBJECT(par_response);
                        tmp_source_name_13 = par_response;
                        tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_status);
                        if (tmp_assign_source_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 388;
                            type_description_1 = "ooooooooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        {
                            PyObject *old = var_status;
                            assert(old != NULL);
                            var_status = tmp_assign_source_19;
                            Py_DECREF(old);
                        }

                    }
                    branch_no_11:;
                }
                branch_end_9:;
            }
            branch_end_6:;
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_left_name_6;
        PyObject *tmp_source_name_14;
        PyObject *tmp_right_name_6;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        CHECK_OBJECT(par_self);
        tmp_source_name_14 = par_self;
        tmp_left_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_history);
        if (tmp_left_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_RequestHistory);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestHistory);
        }

        if (tmp_mvar_value_6 == NULL) {
            Py_DECREF(tmp_left_name_6);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 32294 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 390;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_6;
        CHECK_OBJECT(par_method);
        tmp_args_element_name_13 = par_method;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_14 = par_url;
        CHECK_OBJECT(par_error);
        tmp_args_element_name_15 = par_error;
        if (var_status == NULL) {
            Py_DECREF(tmp_left_name_6);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "status");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 390;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_16 = var_status;
        if (var_redirect_location == NULL) {
            Py_DECREF(tmp_left_name_6);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "redirect_location");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 390;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_17 = var_redirect_location;
        frame_35f49103c34316a6a15374b5659c210f->m_frame.f_lineno = 390;
        {
            PyObject *call_args[] = {tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS5(tmp_called_name_2, call_args);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);

            exception_lineno = 390;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_6 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_right_name_6, 0, tmp_tuple_element_1);
        tmp_assign_source_20 = BINARY_OPERATION_ADD_OBJECT_TUPLE(tmp_left_name_6, tmp_right_name_6);
        Py_DECREF(tmp_left_name_6);
        Py_DECREF(tmp_right_name_6);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_history == NULL);
        var_history = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_15;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        CHECK_OBJECT(par_self);
        tmp_source_name_15 = par_self;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_new);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = const_str_plain_total;
        CHECK_OBJECT(var_total);
        tmp_dict_value_2 = var_total;
        tmp_kw_name_2 = _PyDict_NewPresized( 6 );
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain_connect;
        if (var_connect == NULL) {
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_kw_name_2);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "connect");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 394;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_3 = var_connect;
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_read;
        if (var_read == NULL) {
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_kw_name_2);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "read");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 394;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_4 = var_read;
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = const_str_plain_redirect;
        if (var_redirect == NULL) {
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_kw_name_2);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "redirect");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 394;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_5 = var_redirect;
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = const_str_plain_status;
        if (var_status_count == NULL) {
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_kw_name_2);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "status_count");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 394;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_6 = var_status_count;
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = const_str_plain_history;
        CHECK_OBJECT(var_history);
        tmp_dict_value_7 = var_history;
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        frame_35f49103c34316a6a15374b5659c210f->m_frame.f_lineno = 392;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_3, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_retry == NULL);
        var_new_retry = tmp_assign_source_21;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_4;
        int tmp_truth_name_10;
        CHECK_OBJECT(var_new_retry);
        tmp_called_instance_9 = var_new_retry;
        frame_35f49103c34316a6a15374b5659c210f->m_frame.f_lineno = 397;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, const_str_plain_is_exhausted);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_call_result_4);
        if (tmp_truth_name_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_4);

            exception_lineno = 397;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_truth_name_10 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_4);
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
        branch_yes_13:;
        {
            PyObject *tmp_raise_type_4;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_18;
            PyObject *tmp_args_element_name_19;
            PyObject *tmp_args_element_name_20;
            int tmp_or_left_truth_2;
            PyObject *tmp_or_left_value_2;
            PyObject *tmp_or_right_value_2;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_21;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_MaxRetryError);

            if (unlikely(tmp_mvar_value_7 == NULL)) {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MaxRetryError);
            }

            if (tmp_mvar_value_7 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20607 ], 35, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 398;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_7;
            CHECK_OBJECT(par__pool);
            tmp_args_element_name_18 = par__pool;
            CHECK_OBJECT(par_url);
            tmp_args_element_name_19 = par_url;
            CHECK_OBJECT(par_error);
            tmp_or_left_value_2 = par_error;
            tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
            if (tmp_or_left_truth_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 398;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            if (tmp_or_left_truth_2 == 1) {
                goto or_left_2;
            } else {
                goto or_right_2;
            }
            or_right_2:;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ResponseError);

            if (unlikely(tmp_mvar_value_8 == NULL)) {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ResponseError);
            }

            if (tmp_mvar_value_8 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20759 ], 35, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 398;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_8;
            if (var_cause == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "cause");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 398;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_21 = var_cause;
            frame_35f49103c34316a6a15374b5659c210f->m_frame.f_lineno = 398;
            tmp_or_right_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_21);
            if (tmp_or_right_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 398;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_20 = tmp_or_right_value_2;
            goto or_end_2;
            or_left_2:;
            Py_INCREF(tmp_or_left_value_2);
            tmp_args_element_name_20 = tmp_or_left_value_2;
            or_end_2:;
            frame_35f49103c34316a6a15374b5659c210f->m_frame.f_lineno = 398;
            {
                PyObject *call_args[] = {tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20};
                tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, call_args);
            }

            Py_DECREF(tmp_args_element_name_20);
            if (tmp_raise_type_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 398;
                type_description_1 = "ooooooooooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_4;
            exception_lineno = 398;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_13:;
    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_22;
        PyObject *tmp_args_element_name_23;
        PyObject *tmp_args_element_name_24;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_log);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_log);
        }

        if (tmp_mvar_value_9 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 28210 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 400;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_10 = tmp_mvar_value_9;
        tmp_args_element_name_22 = const_str_digest_adf0407d4b5f2535bca90601d487b350;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_23 = par_url;
        CHECK_OBJECT(var_new_retry);
        tmp_args_element_name_24 = var_new_retry;
        frame_35f49103c34316a6a15374b5659c210f->m_frame.f_lineno = 400;
        {
            PyObject *call_args[] = {tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24};
            tmp_call_result_5 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_10, const_str_plain_debug, call_args);
        }

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_35f49103c34316a6a15374b5659c210f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_35f49103c34316a6a15374b5659c210f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_35f49103c34316a6a15374b5659c210f, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_35f49103c34316a6a15374b5659c210f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_35f49103c34316a6a15374b5659c210f, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_35f49103c34316a6a15374b5659c210f,
        type_description_1,
        par_self,
        par_method,
        par_url,
        par_response,
        par_error,
        par__pool,
        par__stacktrace,
        var_total,
        var_connect,
        var_read,
        var_redirect,
        var_status_count,
        var_cause,
        var_status,
        var_redirect_location,
        var_history,
        var_new_retry
    );


    // Release cached frame.
    if (frame_35f49103c34316a6a15374b5659c210f == cache_frame_35f49103c34316a6a15374b5659c210f) {
        Py_DECREF(frame_35f49103c34316a6a15374b5659c210f);
    }
    cache_frame_35f49103c34316a6a15374b5659c210f = NULL;

    assertFrameObject(frame_35f49103c34316a6a15374b5659c210f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_new_retry);
    tmp_return_value = var_new_retry;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_15_increment);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_total);
    Py_DECREF(var_total);
    var_total = NULL;

    Py_XDECREF(var_connect);
    var_connect = NULL;

    Py_XDECREF(var_read);
    var_read = NULL;

    Py_XDECREF(var_redirect);
    var_redirect = NULL;

    Py_XDECREF(var_status_count);
    var_status_count = NULL;

    Py_XDECREF(var_cause);
    var_cause = NULL;

    Py_XDECREF(var_status);
    var_status = NULL;

    Py_XDECREF(var_redirect_location);
    var_redirect_location = NULL;

    CHECK_OBJECT((PyObject *)var_history);
    Py_DECREF(var_history);
    var_history = NULL;

    CHECK_OBJECT((PyObject *)var_new_retry);
    Py_DECREF(var_new_retry);
    var_new_retry = NULL;

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

    Py_XDECREF(var_total);
    var_total = NULL;

    Py_XDECREF(var_connect);
    var_connect = NULL;

    Py_XDECREF(var_read);
    var_read = NULL;

    Py_XDECREF(var_redirect);
    var_redirect = NULL;

    Py_XDECREF(var_status_count);
    var_status_count = NULL;

    Py_XDECREF(var_cause);
    var_cause = NULL;

    Py_XDECREF(var_status);
    var_status = NULL;

    Py_XDECREF(var_redirect_location);
    var_redirect_location = NULL;

    Py_XDECREF(var_history);
    var_history = NULL;

    Py_XDECREF(var_new_retry);
    var_new_retry = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_15_increment);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);
    CHECK_OBJECT(par_error);
    Py_DECREF(par_error);
    CHECK_OBJECT(par__pool);
    Py_DECREF(par__pool);
    CHECK_OBJECT(par__stacktrace);
    Py_DECREF(par__stacktrace);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);
    CHECK_OBJECT(par_error);
    Py_DECREF(par_error);
    CHECK_OBJECT(par__pool);
    Py_DECREF(par__pool);
    CHECK_OBJECT(par__stacktrace);
    Py_DECREF(par__stacktrace);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$util$retry$$$function_16___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3472d844fd103a2340e48d9e453c58d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3472d844fd103a2340e48d9e453c58d6 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_3472d844fd103a2340e48d9e453c58d6, codeobj_3472d844fd103a2340e48d9e453c58d6, module_urllib3$util$retry, sizeof(void *));
    frame_3472d844fd103a2340e48d9e453c58d6 = cache_frame_3472d844fd103a2340e48d9e453c58d6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3472d844fd103a2340e48d9e453c58d6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3472d844fd103a2340e48d9e453c58d6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_source_name_1 = const_str_digest_541aafc09da4591a658272cb389856a5;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_format);
        assert(!(tmp_called_name_1 == NULL));
        tmp_dict_key_1 = const_str_plain_cls;
        CHECK_OBJECT(par_self);
        tmp_type_arg_1 = par_self;
        tmp_dict_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_dict_value_1 == NULL));
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_self;
        CHECK_OBJECT(par_self);
        tmp_dict_value_2 = par_self;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_3472d844fd103a2340e48d9e453c58d6->m_frame.f_lineno = 405;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3472d844fd103a2340e48d9e453c58d6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3472d844fd103a2340e48d9e453c58d6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3472d844fd103a2340e48d9e453c58d6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3472d844fd103a2340e48d9e453c58d6, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_3472d844fd103a2340e48d9e453c58d6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3472d844fd103a2340e48d9e453c58d6, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3472d844fd103a2340e48d9e453c58d6,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_3472d844fd103a2340e48d9e453c58d6 == cache_frame_3472d844fd103a2340e48d9e453c58d6) {
        Py_DECREF(frame_3472d844fd103a2340e48d9e453c58d6);
    }
    cache_frame_3472d844fd103a2340e48d9e453c58d6 = NULL;

    assertFrameObject(frame_3472d844fd103a2340e48d9e453c58d6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$util$retry$$$function_16___repr__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_10__is_connection_error() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_10__is_connection_error,
        const_str_plain__is_connection_error,
#if PYTHON_VERSION >= 300
        const_str_digest_7e60379875538acb6d47a09b3bcd7fdf,
#endif
        codeobj_9fb5395eb6333c5783c03322b103bdb3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        const_str_digest_7fb2c7a5424e28db1a201939b12c8399,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_11__is_read_error() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_11__is_read_error,
        const_str_plain__is_read_error,
#if PYTHON_VERSION >= 300
        const_str_digest_2d8b572caa8eac58f71c5c2fc1f268f9,
#endif
        codeobj_5fb66f67fea9063ba55c8bdfda68323a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        const_str_digest_be3c2e7a479fa0076df719ca5a930f72,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_12__is_method_retryable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_12__is_method_retryable,
        const_str_plain__is_method_retryable,
#if PYTHON_VERSION >= 300
        const_str_digest_0ea7366bdeb0b49141acb3ad1441b7b5,
#endif
        codeobj_bf091fdeadb85797f23799ebd5025c58,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        const_str_digest_cfc303935f94cd9bd4759913289d5001,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_13_is_retry(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_13_is_retry,
        const_str_plain_is_retry,
#if PYTHON_VERSION >= 300
        const_str_digest_43a062f907032f59d25a421045c4a843,
#endif
        codeobj_033fd868f939675c9854e6a8c7698e17,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        const_str_digest_25ded409e041cb7d54dbe844ec9f890e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_14_is_exhausted() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_14_is_exhausted,
        const_str_plain_is_exhausted,
#if PYTHON_VERSION >= 300
        const_str_digest_4506185023298da4a69876975fb76211,
#endif
        codeobj_5d4960daa7c7f3a183ea22abbd7ecff8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        const_str_digest_02862dad88b03d79d6c3df8ba5e79ff6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_15_increment(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_15_increment,
        const_str_plain_increment,
#if PYTHON_VERSION >= 300
        const_str_digest_d3c5cf2f2d706173f393307c5fa372aa,
#endif
        codeobj_35f49103c34316a6a15374b5659c210f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        const_str_digest_55857326d6523e3f76c12c271f391764,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_16___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_16___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 300
        const_str_digest_4291b42c0261755daa9f58af16f24a8c,
#endif
        codeobj_3472d844fd103a2340e48d9e453c58d6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_297455e155b6c9736d87529e14591c5d,
#endif
        codeobj_de9be9fae1b07b0dd345d7e4a1d614d6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_2_new() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_2_new,
        const_str_plain_new,
#if PYTHON_VERSION >= 300
        const_str_digest_ca693a71271df261e783dd0ecf309ae0,
#endif
        codeobj_083a826ebb93c52c41563c960f4aa88c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_3_from_int(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_3_from_int,
        const_str_plain_from_int,
#if PYTHON_VERSION >= 300
        const_str_digest_00aff75c087fe7f80636ea13a09e3e82,
#endif
        codeobj_70421d4f87e38398e7230e36867d710c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        const_str_digest_54874c179a81b955e41d4fd1580cddd0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_4_get_backoff_time() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_4_get_backoff_time,
        const_str_plain_get_backoff_time,
#if PYTHON_VERSION >= 300
        const_str_digest_e80b9085df081452c8caeed4571c51b7,
#endif
        codeobj_daaf1dd45e93d4cebd5164a2b0a70eb2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        const_str_digest_fc514c378d42c4c0744f71a520936e98,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        const_str_digest_96630de8eadb33fda97640a57fbbbd1c,
#endif
        codeobj_f5323df5ecf8c6170ccdcf43c8e9fa7c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_5_parse_retry_after() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_5_parse_retry_after,
        const_str_plain_parse_retry_after,
#if PYTHON_VERSION >= 300
        const_str_digest_683309cb722498c00ca029ec4e15acbf,
#endif
        codeobj_d2a314761c4e3ca9ef91319d9a14fc0b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_6_get_retry_after() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_6_get_retry_after,
        const_str_plain_get_retry_after,
#if PYTHON_VERSION >= 300
        const_str_digest_6659ea07dd436805b2630885700a6e61,
#endif
        codeobj_d55428f9dcf5e8b583000841fb3b0d97,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        const_str_digest_9db0c4e907a20455d898e46f602427d6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_7_sleep_for_retry(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_7_sleep_for_retry,
        const_str_plain_sleep_for_retry,
#if PYTHON_VERSION >= 300
        const_str_digest_9bdc7bd568ca4c860ba3d9ea8f97a38f,
#endif
        codeobj_4eaf5f9eecc47e42f40c33fa2a648ea8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_8__sleep_backoff() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_8__sleep_backoff,
        const_str_plain__sleep_backoff,
#if PYTHON_VERSION >= 300
        const_str_digest_504591e526cc625e5b3bbfcf35d4ec2f,
#endif
        codeobj_587b389d500700a81745e36782697e1f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$util$retry$$$function_9_sleep(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$util$retry$$$function_9_sleep,
        const_str_plain_sleep,
#if PYTHON_VERSION >= 300
        const_str_digest_b0594eafa05dc6a6810bb2c7c291548b,
#endif
        codeobj_e732c728ce59881267b686dbb561ad3e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$util$retry,
        const_str_digest_ed2c0b12f2250d745518387535c4958e,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$util$retry =
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

function_impl_code functable_urllib3$util$retry[] = {
    impl_urllib3$util$retry$$$function_4_get_backoff_time$$$function_1_lambda,
    impl_urllib3$util$retry$$$function_1___init__,
    impl_urllib3$util$retry$$$function_2_new,
    impl_urllib3$util$retry$$$function_3_from_int,
    impl_urllib3$util$retry$$$function_4_get_backoff_time,
    impl_urllib3$util$retry$$$function_5_parse_retry_after,
    impl_urllib3$util$retry$$$function_6_get_retry_after,
    impl_urllib3$util$retry$$$function_7_sleep_for_retry,
    impl_urllib3$util$retry$$$function_8__sleep_backoff,
    impl_urllib3$util$retry$$$function_9_sleep,
    impl_urllib3$util$retry$$$function_10__is_connection_error,
    impl_urllib3$util$retry$$$function_11__is_read_error,
    impl_urllib3$util$retry$$$function_12__is_method_retryable,
    impl_urllib3$util$retry$$$function_13_is_retry,
    impl_urllib3$util$retry$$$function_14_is_exhausted,
    impl_urllib3$util$retry$$$function_15_increment,
    impl_urllib3$util$retry$$$function_16___repr__,
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

    function_impl_code *current = functable_urllib3$util$retry;
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

    if (offset > sizeof(functable_urllib3$util$retry) || offset < 0) {
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
        functable_urllib3$util$retry[offset],
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
        module_urllib3$util$retry,
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
PyObject *modulecode_urllib3$util$retry(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_urllib3$util$retry;
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
    PRINT_STRING("urllib3.util.retry: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("urllib3.util.retry: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("urllib3.util.retry: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initurllib3$util$retry\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$util$retry = Py_InitModule4(
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
    mdef_urllib3$util$retry.m_name = module_full_name;
    module_urllib3$util$retry = PyModule_Create(&mdef_urllib3$util$retry);
#endif

    moduledict_urllib3$util$retry = MODULE_DICT(module_urllib3$util$retry);

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
        moduledict_urllib3$util$retry,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$retry,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_urllib3$util$retry,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$retry,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$util$retry,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_urllib3$util$retry);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_urllib3$util$retry);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_c0a0ce684f7c1a8d22bd56b415aa063a;
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
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_urllib3$util$retry_28 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_8c45fd950b0d6ca7712c85d0ffce86a9_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_8c45fd950b0d6ca7712c85d0ffce86a9_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_423ef6c7c1b1873858e87102fe4de1ae;
        UPDATE_STRING_DICT0(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_c0a0ce684f7c1a8d22bd56b415aa063a = MAKE_MODULE_FRAME(codeobj_c0a0ce684f7c1a8d22bd56b415aa063a, module_urllib3$util$retry);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_c0a0ce684f7c1a8d22bd56b415aa063a);
    assert(Py_REFCNT(frame_c0a0ce684f7c1a8d22bd56b415aa063a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_423ef6c7c1b1873858e87102fe4de1ae;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        frame_c0a0ce684f7c1a8d22bd56b415aa063a->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert(!(tmp_import_name_from_1 == NULL));
        tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_absolute_import);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_time;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$util$retry;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_c0a0ce684f7c1a8d22bd56b415aa063a->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_logging;
        tmp_globals_name_2 = (PyObject *)moduledict_urllib3$util$retry;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_c0a0ce684f7c1a8d22bd56b415aa063a->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_collections;
        tmp_globals_name_3 = (PyObject *)moduledict_urllib3$util$retry;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_namedtuple_tuple;
        tmp_level_name_3 = const_int_0;
        frame_c0a0ce684f7c1a8d22bd56b415aa063a->m_frame.f_lineno = 4;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_namedtuple);
        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_namedtuple, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_itertools;
        tmp_globals_name_4 = (PyObject *)moduledict_urllib3$util$retry;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_takewhile_tuple;
        tmp_level_name_4 = const_int_0;
        frame_c0a0ce684f7c1a8d22bd56b415aa063a->m_frame.f_lineno = 5;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        assert(!(tmp_import_name_from_3 == NULL));
        tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_takewhile);
        Py_DECREF(tmp_import_name_from_3);
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_takewhile, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_email;
        tmp_globals_name_5 = (PyObject *)moduledict_urllib3$util$retry;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        tmp_level_name_5 = const_int_0;
        frame_c0a0ce684f7c1a8d22bd56b415aa063a->m_frame.f_lineno = 6;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_email, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_re;
        tmp_globals_name_6 = (PyObject *)moduledict_urllib3$util$retry;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = Py_None;
        tmp_level_name_6 = const_int_0;
        frame_c0a0ce684f7c1a8d22bd56b415aa063a->m_frame.f_lineno = 7;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_exceptions;
        tmp_globals_name_7 = (PyObject *)moduledict_urllib3$util$retry;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_a621b0d04342c063d5cccb9ea4532d32_tuple;
        tmp_level_name_7 = const_int_pos_2;
        frame_c0a0ce684f7c1a8d22bd56b415aa063a->m_frame.f_lineno = 9;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_urllib3$util$retry,
                const_str_plain_ConnectTimeoutError,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_ConnectTimeoutError);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_urllib3$util$retry,
                const_str_plain_MaxRetryError,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_MaxRetryError);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_MaxRetryError, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_urllib3$util$retry,
                const_str_plain_ProtocolError,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_ProtocolError);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ProtocolError, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_urllib3$util$retry,
                const_str_plain_ReadTimeoutError,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_ReadTimeoutError);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
           tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_urllib3$util$retry,
                const_str_plain_ResponseError,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_ResponseError);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_ResponseError, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_urllib3$util$retry,
                const_str_plain_InvalidHeader,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain_InvalidHeader);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_InvalidHeader, tmp_assign_source_17);
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
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain_packages;
        tmp_globals_name_8 = (PyObject *)moduledict_urllib3$util$retry;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_six_tuple;
        tmp_level_name_8 = const_int_pos_2;
        frame_c0a0ce684f7c1a8d22bd56b415aa063a->m_frame.f_lineno = 17;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
           tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_urllib3$util$retry,
                const_str_plain_six,
                const_int_pos_2
            );
        } else {
           tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_10, const_str_plain_six);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_logging);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_logging);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 78 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 20;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        frame_c0a0ce684f7c1a8d22bd56b415aa063a->m_frame.f_lineno = 20;
        tmp_assign_source_19 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM(const_tuple_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd_tuple, 0));

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_namedtuple);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_namedtuple);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 32330 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_4;
        tmp_call_arg_element_1 = const_str_plain_RequestHistory;
        tmp_call_arg_element_2 = LIST_COPY(const_list_1ccb948c3d02c71f8a3f4f219d2603bc_list);
        frame_c0a0ce684f7c1a8d22bd56b415aa063a->m_frame.f_lineno = 24;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_RequestHistory, tmp_assign_source_20);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_object_tuple;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_21 = impl___internal__$$$function_3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
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


            exception_lineno = 28;

            goto try_except_handler_2;
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


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_2;
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


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_23 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_23;
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


            exception_lineno = 28;

            goto try_except_handler_2;
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


            exception_lineno = 28;

            goto try_except_handler_2;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_source_name_1 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr(tmp_source_name_1, const_str_plain___prepare__);
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain___prepare__);
            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_2;
            }
            tmp_tuple_element_1 = const_str_plain_Retry;
            tmp_args_name_1 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_1 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_c0a0ce684f7c1a8d22bd56b415aa063a->m_frame.f_lineno = 28;
            tmp_assign_source_24 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_name_1);
            if (tmp_assign_source_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_2;
            }
            assert(tmp_class_creation_1__prepared == NULL);
            tmp_class_creation_1__prepared = tmp_assign_source_24;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_source_name_3 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr(tmp_source_name_3, const_str_plain___getitem__);
            tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_2;
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
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_4;
                PyObject *tmp_type_arg_2;
                tmp_raise_type_1 = PyExc_TypeError;
                tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT(tmp_class_creation_1__metaclass);
                tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
                tmp_getattr_attr_1 = const_str_plain___name__;
                tmp_getattr_default_1 = const_str_angle_metaclass;
                tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 28;

                    goto try_except_handler_2;
                }
                tmp_right_name_1 = PyTuple_New(2);
                PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_2);
                CHECK_OBJECT(tmp_class_creation_1__prepared);
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_4 = BUILTIN_TYPE1(tmp_type_arg_2);
                assert(!(tmp_source_name_4 == NULL));
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain___name__);
                Py_DECREF(tmp_source_name_4);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_right_name_1);

                    exception_lineno = 28;

                    goto try_except_handler_2;
                }
                PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_2);
                tmp_raise_value_1 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
                Py_DECREF(tmp_right_name_1);
                if (tmp_raise_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 28;

                    goto try_except_handler_2;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF(tmp_raise_type_1);
                exception_value = tmp_raise_value_1;
                exception_lineno = 28;
                RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

                goto try_except_handler_2;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_25;
            tmp_assign_source_25 = PyDict_New();
            assert(tmp_class_creation_1__prepared == NULL);
            tmp_class_creation_1__prepared = tmp_assign_source_25;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_26;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_urllib3$util$retry_28 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd;
        tmp_res = PyObject_SetItem(locals_urllib3$util$retry_28, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_digest_61e2520c56b660178d4348ecd9080d8c;
        tmp_res = PyObject_SetItem(locals_urllib3$util$retry_28, const_str_plain___doc__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_Retry;
        tmp_res = PyObject_SetItem(locals_urllib3$util$retry_28, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_4;
        }
        MAKE_OR_REUSE_FRAME(cache_frame_8c45fd950b0d6ca7712c85d0ffce86a9_2, codeobj_8c45fd950b0d6ca7712c85d0ffce86a9, module_urllib3$util$retry, sizeof(void *));
        frame_8c45fd950b0d6ca7712c85d0ffce86a9_2 = cache_frame_8c45fd950b0d6ca7712c85d0ffce86a9_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_8c45fd950b0d6ca7712c85d0ffce86a9_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_8c45fd950b0d6ca7712c85d0ffce86a9_2) == 2); // Frame stack

        // Framed code:
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_name_3;
            PyObject *tmp_call_arg_element_3;
            tmp_res = MAPPING_HAS_ITEM(locals_urllib3$util$retry_28, const_str_plain_frozenset);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_name_3 = PyObject_GetItem(locals_urllib3$util$retry_28, const_str_plain_frozenset);

            if (tmp_called_name_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 32362 ], 31, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_call_arg_element_3 = LIST_COPY(const_list_ba42ffc828ddfcf79c24367abe35499c_list);
            frame_8c45fd950b0d6ca7712c85d0ffce86a9_2->m_frame.f_lineno = 149;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_call_arg_element_3);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_call_arg_element_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_dictset_value = const_frozenset_b8a478f09ef9e5fa2400b2068c7129e8;
            Py_INCREF(tmp_dictset_value);
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_urllib3$util$retry_28, const_str_plain_DEFAULT_METHOD_WHITELIST, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_name_4;
            PyObject *tmp_call_arg_element_4;
            tmp_res = MAPPING_HAS_ITEM(locals_urllib3$util$retry_28, const_str_plain_frozenset);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_name_4 = PyObject_GetItem(locals_urllib3$util$retry_28, const_str_plain_frozenset);

            if (tmp_called_name_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 32362 ], 31, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_call_arg_element_4 = LIST_COPY(const_list_int_pos_413_int_pos_429_int_pos_503_list);
            frame_8c45fd950b0d6ca7712c85d0ffce86a9_2->m_frame.f_lineno = 152;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_call_arg_element_4);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_call_arg_element_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_dictset_value = const_frozenset_90ee7ef4af5cffdbd371b1ed811aea21;
            Py_INCREF(tmp_dictset_value);
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_urllib3$util$retry_28, const_str_plain_RETRY_AFTER_STATUS_CODES, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_name_5;
            PyObject *tmp_call_arg_element_5;
            tmp_res = MAPPING_HAS_ITEM(locals_urllib3$util$retry_28, const_str_plain_frozenset);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_8 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_name_5 = PyObject_GetItem(locals_urllib3$util$retry_28, const_str_plain_frozenset);

            if (tmp_called_name_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 32362 ], 31, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_call_arg_element_5 = LIST_COPY(const_list_str_plain_Authorization_list);
            frame_8c45fd950b0d6ca7712c85d0ffce86a9_2->m_frame.f_lineno = 154;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_call_arg_element_5);
            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_call_arg_element_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_dictset_value = const_frozenset_8ca5bc4d58965b48d58ac59c23ac8fb4;
            Py_INCREF(tmp_dictset_value);
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_urllib3$util$retry_28, const_str_plain_DEFAULT_REDIRECT_HEADERS_BLACKLIST, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = const_int_pos_120;
        tmp_res = PyObject_SetItem(locals_urllib3$util$retry_28, const_str_plain_BACKOFF_MAX, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_3;
            tmp_tuple_element_3 = const_int_pos_10;
            tmp_defaults_1 = PyTuple_New(13);
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = Py_None;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_defaults_1, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = Py_None;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_defaults_1, 2, tmp_tuple_element_3);
            tmp_tuple_element_3 = Py_None;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_defaults_1, 3, tmp_tuple_element_3);
            tmp_tuple_element_3 = Py_None;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_defaults_1, 4, tmp_tuple_element_3);
            tmp_tuple_element_3 = PyObject_GetItem(locals_urllib3$util$retry_28, const_str_plain_DEFAULT_METHOD_WHITELIST);

            if (tmp_tuple_element_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                Py_DECREF(tmp_defaults_1);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 32393 ], 46, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 160;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_defaults_1);

                exception_lineno = 160;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            PyTuple_SET_ITEM(tmp_defaults_1, 5, tmp_tuple_element_3);
            tmp_tuple_element_3 = Py_None;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_defaults_1, 6, tmp_tuple_element_3);
            tmp_tuple_element_3 = const_int_0;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_defaults_1, 7, tmp_tuple_element_3);
            tmp_tuple_element_3 = Py_True;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_defaults_1, 8, tmp_tuple_element_3);
            tmp_tuple_element_3 = Py_True;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_defaults_1, 9, tmp_tuple_element_3);
            tmp_tuple_element_3 = Py_None;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_defaults_1, 10, tmp_tuple_element_3);
            tmp_tuple_element_3 = Py_True;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_defaults_1, 11, tmp_tuple_element_3);
            tmp_tuple_element_3 = PyObject_GetItem(locals_urllib3$util$retry_28, const_str_plain_DEFAULT_REDIRECT_HEADERS_BLACKLIST);

            if (tmp_tuple_element_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                Py_DECREF(tmp_defaults_1);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 32439 ], 56, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_defaults_1);

                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            PyTuple_SET_ITEM(tmp_defaults_1, 12, tmp_tuple_element_3);
            tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_1___init__(tmp_defaults_1);



            tmp_res = PyObject_SetItem(locals_urllib3$util$retry_28, const_str_plain___init__, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_2_new();



        tmp_res = PyObject_SetItem(locals_urllib3$util$retry_28, const_str_plain_new, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_defaults_2;
            PyObject *tmp_classmethod_arg_1;
            PyObject *tmp_defaults_3;
            tmp_res = MAPPING_HAS_ITEM(locals_urllib3$util$retry_28, const_str_plain_classmethod);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_name_6 = PyObject_GetItem(locals_urllib3$util$retry_28, const_str_plain_classmethod);

            if (tmp_called_name_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 2590 ], 33, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 199;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_defaults_2 = const_tuple_true_none_tuple;
            Py_INCREF(tmp_defaults_2);
            tmp_args_element_name_1 = MAKE_FUNCTION_urllib3$util$retry$$$function_3_from_int(tmp_defaults_2);



            frame_8c45fd950b0d6ca7712c85d0ffce86a9_2->m_frame.f_lineno = 199;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_defaults_3 = const_tuple_true_none_tuple;
            Py_INCREF(tmp_defaults_3);
            tmp_classmethod_arg_1 = MAKE_FUNCTION_urllib3$util$retry$$$function_3_from_int(tmp_defaults_3);



            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_urllib3$util$retry_28, const_str_plain_from_int, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_4_get_backoff_time();



        tmp_res = PyObject_SetItem(locals_urllib3$util$retry_28, const_str_plain_get_backoff_time, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_5_parse_retry_after();



        tmp_res = PyObject_SetItem(locals_urllib3$util$retry_28, const_str_plain_parse_retry_after, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_6_get_retry_after();



        tmp_res = PyObject_SetItem(locals_urllib3$util$retry_28, const_str_plain_get_retry_after, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = const_tuple_none_tuple;
            Py_INCREF(tmp_defaults_4);
            tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_7_sleep_for_retry(tmp_defaults_4);



            tmp_res = PyObject_SetItem(locals_urllib3$util$retry_28, const_str_plain_sleep_for_retry, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_8__sleep_backoff();



        tmp_res = PyObject_SetItem(locals_urllib3$util$retry_28, const_str_plain__sleep_backoff, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_none_tuple;
            Py_INCREF(tmp_defaults_5);
            tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_9_sleep(tmp_defaults_5);



            tmp_res = PyObject_SetItem(locals_urllib3$util$retry_28, const_str_plain_sleep, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_10__is_connection_error();



        tmp_res = PyObject_SetItem(locals_urllib3$util$retry_28, const_str_plain__is_connection_error, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_11__is_read_error();



        tmp_res = PyObject_SetItem(locals_urllib3$util$retry_28, const_str_plain__is_read_error, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_12__is_method_retryable();



        tmp_res = PyObject_SetItem(locals_urllib3$util$retry_28, const_str_plain__is_method_retryable, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = const_tuple_false_tuple;
            Py_INCREF(tmp_defaults_6);
            tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_13_is_retry(tmp_defaults_6);



            tmp_res = PyObject_SetItem(locals_urllib3$util$retry_28, const_str_plain_is_retry, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_14_is_exhausted();



        tmp_res = PyObject_SetItem(locals_urllib3$util$retry_28, const_str_plain_is_exhausted, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_7;
            tmp_defaults_7 = const_tuple_none_none_none_none_none_none_tuple;
            Py_INCREF(tmp_defaults_7);
            tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_15_increment(tmp_defaults_7);



            tmp_res = PyObject_SetItem(locals_urllib3$util$retry_28, const_str_plain_increment, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$util$retry$$$function_16___repr__();



        tmp_res = PyObject_SetItem(locals_urllib3$util$retry_28, const_str_plain___repr__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_8c45fd950b0d6ca7712c85d0ffce86a9_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_8c45fd950b0d6ca7712c85d0ffce86a9_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8c45fd950b0d6ca7712c85d0ffce86a9_2, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_8c45fd950b0d6ca7712c85d0ffce86a9_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8c45fd950b0d6ca7712c85d0ffce86a9_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_8c45fd950b0d6ca7712c85d0ffce86a9_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if (frame_8c45fd950b0d6ca7712c85d0ffce86a9_2 == cache_frame_8c45fd950b0d6ca7712c85d0ffce86a9_2) {
            Py_DECREF(frame_8c45fd950b0d6ca7712c85d0ffce86a9_2);
        }
        cache_frame_8c45fd950b0d6ca7712c85d0ffce86a9_2 = NULL;

        assertFrameObject(frame_8c45fd950b0d6ca7712c85d0ffce86a9_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            tmp_compexpr_right_1 = const_tuple_type_object_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_4;
            }
            tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            branch_yes_4:;
            tmp_dictset_value = const_tuple_type_object_tuple;
            tmp_res = PyObject_SetItem(locals_urllib3$util$retry_28, const_str_plain___orig_bases__, tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_4;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_7 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_Retry;
            tmp_args_name_2 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_urllib3$util$retry_28;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_c0a0ce684f7c1a8d22bd56b415aa063a->m_frame.f_lineno = 28;
            tmp_assign_source_27 = CALL_FUNCTION(tmp_called_name_7, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_27;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_26 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_26);
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(urllib3$util$retry);
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_urllib3$util$retry_28);
        locals_urllib3$util$retry_28 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_urllib3$util$retry_28);
        locals_urllib3$util$retry_28 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(urllib3$util$retry);
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT((PyObject *)outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;

        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(urllib3$util$retry);
        return NULL;
        outline_exception_1:;
        exception_lineno = 28;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_Retry, tmp_assign_source_26);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
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

    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_called_name_8;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_Retry);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19588 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 411;

            goto frame_exception_exit_1;
        }

        tmp_called_name_8 = tmp_mvar_value_5;
        frame_c0a0ce684f7c1a8d22bd56b415aa063a->m_frame.f_lineno = 411;
        tmp_assattr_name_3 = CALL_FUNCTION_WITH_ARGS1(tmp_called_name_8, &PyTuple_GET_ITEM(const_tuple_int_pos_3_tuple, 0));

        if (tmp_assattr_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_urllib3$util$retry, (Nuitka_StringObject *)const_str_plain_Retry);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry);
        }

        if (tmp_mvar_value_6 == NULL) {
            Py_DECREF(tmp_assattr_name_3);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19588 ], 27, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 411;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = tmp_mvar_value_6;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_DEFAULT, tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c0a0ce684f7c1a8d22bd56b415aa063a);
#endif
    popFrameStack();

    assertFrameObject(frame_c0a0ce684f7c1a8d22bd56b415aa063a);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c0a0ce684f7c1a8d22bd56b415aa063a);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_c0a0ce684f7c1a8d22bd56b415aa063a, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_c0a0ce684f7c1a8d22bd56b415aa063a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c0a0ce684f7c1a8d22bd56b415aa063a, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;

    return module_urllib3$util$retry;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
