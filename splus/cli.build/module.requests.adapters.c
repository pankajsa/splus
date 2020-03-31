/* Generated code for Python module 'requests.adapters'
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

/* The "_module_requests$adapters" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$adapters;
PyDictObject *moduledict_requests$adapters;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_headers;
static PyObject *const_str_plain_isdir;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_skip_accept_encoding;
extern PyObject *const_str_digest_867cf107290997ea3f46e9cff397e1db;
extern PyObject *const_str_plain_proxy_url;
static PyObject *const_tuple_str_plain_NewConnectionError_tuple;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_decode_content;
static PyObject *const_tuple_c962b7f633f0bcd18920cb998098da8e_tuple;
static PyObject *const_str_plain_proxy_manager;
extern PyObject *const_str_plain_encode;
extern PyObject *const_tuple_str_plain_CaseInsensitiveDict_tuple;
static PyObject *const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple;
static PyObject *const_str_digest_e5209e5e03de97a661af697c02841e7a;
static PyObject *const_str_digest_8c58dbeb2a2c13a119eaf790ea7782dd;
extern PyObject *const_str_plain_InvalidURL;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain_build_response;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_plain_models;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain__HTTPError;
extern PyObject *const_str_plain_path;
extern PyObject *const_tuple_str_plain_args_str_plain_kwargs_tuple;
extern PyObject *const_str_plain_proxies;
static PyObject *const_tuple_6cdb677ec4584549230d89c8e343b130_tuple;
static PyObject *const_str_digest_94f8254fa141c33ed65ea27f59ed9d62;
extern PyObject *const_str_digest_3c9527fc53ea2272c2080ca035d6631c;
extern PyObject *const_str_plain_proxy;
extern PyObject *const_str_plain_exceptions;
static PyObject *const_tuple_str_digest_381fd3348aa52a96bff9cd9e1ea4f162_tuple;
static PyObject *const_tuple_str_plain_MaxRetryError_tuple;
extern PyObject *const_tuple_int_0_tuple;
static PyObject *const_str_digest_46268be1785799fb5b96bebc078469e2;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_str_plain_HTTPAdapter;
extern PyObject *const_int_0;
static PyObject *const_str_digest_689f43089124f06b15e9987dc8e6f0cd;
extern PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
extern PyObject *const_str_plain_response;
extern PyObject *const_str_plain_PoolManager;
static PyObject *const_str_plain_max_retries;
extern PyObject *const_str_plain_cookies;
extern PyObject *const_str_plain_extract_cookies_to_jar;
extern PyObject *const_str_plain_preload_content;
extern PyObject *const_str_plain_ResponseError;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_prepend_scheme_if_needed;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_basestring;
static PyObject *const_str_digest_b80c93ea6c3e5d185c1d8985f749f6d3;
static PyObject *const_str_digest_bfa093c614acefeadc8693bd26119f2c;
static PyObject *const_str_digest_f1fccf6352a44c8bf8595b234fb96ec9;
extern PyObject *const_str_plain_password;
extern PyObject *const_str_plain_SOCKSProxyManager;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_geturl;
extern PyObject *const_str_plain_ConnectTimeoutError;
static PyObject *const_str_digest_64ad7ce704a2035b2f3a90397c090ca7;
static PyObject *const_str_plain_cert_verify;
extern PyObject *const_str_plain_state;
static PyObject *const_tuple_str_plain_SSLError_tuple;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_digest_d9e923e371e62d15476d82fc18912a89;
extern PyObject *const_str_plain_url;
static PyObject *const_tuple_str_plain_SOCKSProxyManager_tuple;
extern PyObject *const_tuple_bytes_digest_103d73ccb44d3ba17b2afce6d3b01e78_tuple;
static PyObject *const_str_plain_DEFAULT_POOLSIZE;
extern PyObject *const_str_plain_get_auth_from_url;
extern PyObject *const_tuple_str_plain_Timeout_tuple;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_digest_92450e54ff68c1856b3f5b6ca477f571;
extern PyObject *const_str_plain_http;
static PyObject *const_str_plain_pool_maxsize;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_DEFAULT_CA_BUNDLE_PATH;
static PyObject *const_str_plain_init_poolmanager;
static PyObject *const_str_digest_ac9f80996ecd26d1a23399c02013ff79;
static PyObject *const_tuple_str_plain_self_str_plain_request_str_plain_kwargs_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_8eda945652fc1bca806aa3da22ec6fa8;
static PyObject *const_tuple_bd356f6cf3258844d460b87e1636571d_tuple;
static PyObject *const_str_digest_381fd3348aa52a96bff9cd9e1ea4f162;
static PyObject *const_dict_d57bfa9a8ed7a88f3af4f0a6e5cfc141;
static PyObject *const_tuple_str_plain_ProtocolError_tuple;
static PyObject *const_str_plain_pool_block;
static PyObject *const_str_digest_3753a9b47e94d50e84fafceba56d25b3;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_digest_c8562bbff9d721153deb2fdd066393d0;
static PyObject *const_str_digest_92d7a028a7de3fecbe9df9c1fa24ee6e;
extern PyObject *const_str_plain_connect;
extern PyObject *const_str_plain_reason;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_str_plain_get_connection;
extern PyObject *const_str_plain_close;
static PyObject *const_tuple_str_digest_d166bac2cd9f995554d196b16ef3feee_tuple;
extern PyObject *const_str_plain_path_url;
extern PyObject *const_str_plain_urlparse;
static PyObject *const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_58d849cc27a8bb92406c0789468590b3;
extern PyObject *const_str_plain_parse_url;
static PyObject *const_str_plain__pool_block;
extern PyObject *const_str_plain_value;
static PyObject *const_tuple_str_plain_socks_tuple;
extern PyObject *const_str_plain_connection_from_url;
extern PyObject *const_tuple_str_plain_extract_cookies_to_jar_tuple;
static PyObject *const_str_plain_DEFAULT_POOLBLOCK;
static PyObject *const_str_plain_using_socks_proxy;
extern PyObject *const_str_plain_conn;
static PyObject *const_str_plain_TimeoutSauce;
static PyObject *const_str_digest_cf164d66984f410735aac772ffcc2043;
extern PyObject *const_str_plain_structures;
extern PyObject *const_str_plain_pool;
extern PyObject *const_str_plain_retries;
extern PyObject *const_str_plain_raw;
static PyObject *const_tuple_str_plain_LocationValueError_tuple;
extern PyObject *const_str_plain_getresponse;
static PyObject *const_str_plain_proxy_manager_for;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_NewConnectionError;
static PyObject *const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple;
extern PyObject *const_str_plain_config;
static PyObject *const_str_digest_ab462680d0487f574012e6a7b3ea2cfd;
extern PyObject *const_str_plain_ProtocolError;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_ReadTimeoutError;
extern PyObject *const_str_plain_putrequest;
extern PyObject *const_str_plain_maxsize;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_ca_cert_dir;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_endheaders;
extern PyObject *const_str_plain_from_httplib;
extern PyObject *const_str_plain_parsed;
extern PyObject *const_str_plain_HTTPError;
extern PyObject *const_str_plain_InvalidSchema;
static PyObject *const_list_b210aeadbd087eaaf628d5f4d13acd25_list;
extern PyObject *const_str_plain_ConnectionError;
extern PyObject *const_str_plain_CERT_NONE;
extern PyObject *const_str_plain_pool_kwargs;
static PyObject *const_str_digest_2bdec81ec502026c4a660b15852a5925;
extern PyObject *const_str_plain_req;
static PyObject *const_dict_96e45a30326f2854cb930a7737e3b26d;
extern PyObject *const_str_plain_socket;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_slice_int_pos_2_none_none;
extern PyObject *const_str_plain___init__;
extern PyObject *const_tuple_str_plain_HTTPResponse_tuple;
static PyObject *const_str_plain_DEFAULT_RETRIES;
extern PyObject *const_str_plain_method;
extern PyObject *const_str_plain_MaxRetryError;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_pool_connections;
extern PyObject *const_str_plain_compat;
extern PyObject *const_str_plain_Retry;
static PyObject *const_tuple_str_plain_ConnectTimeoutError_tuple;
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
extern PyObject *const_str_plain_request;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_str_plain_from_int;
extern PyObject *const_str_plain_num_pools;
static PyObject *const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple;
extern PyObject *const_str_plain_scheme;
extern PyObject *const_str_plain_assert_same_host;
extern PyObject *const_str_plain_ReadTimeout;
extern PyObject *const_tuple_a95b72743b8804bf0e9cb38b968c0b18_tuple;
extern PyObject *const_str_plain_putheader;
extern PyObject *const_str_plain_body;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_block;
static PyObject *const_str_plain_DEFAULT_POOL_TIMEOUT;
extern PyObject *const_str_plain_CERT_REQUIRED;
static PyObject *const_tuple_str_plain_ReadTimeoutError_tuple;
static PyObject *const_str_digest_3e65357a65a5cf0df20a8efd5394db63;
extern PyObject *const_str_plain_InvalidProxyURL;
static PyObject *const_str_plain__ProxyError;
extern PyObject *const_tuple_str_plain_Retry_tuple;
static PyObject *const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple;
extern PyObject *const_str_plain_https;
static PyObject *const_str_plain__pool_connections;
extern PyObject *const_str_digest_58d55cc0c39ccfcef76de1f9740cddf4;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_buffering;
static PyObject *const_str_digest_a3b4e21c527f3872bb2a3cad05caced3;
extern PyObject *const_tuple_empty;
extern PyObject *const_int_pos_10;
static PyObject *const_str_digest_4dd75d7a0434de0e965e971794e16108;
static PyObject *const_str_digest_39c1bfc1fe8b17be2911255cb6ddbfdc;
extern PyObject *const_str_plain_stream;
extern PyObject *const_str_digest_901e90eee70586f15ff5cd8bfbf848b6;
extern PyObject *const_str_plain_connection;
static PyObject *const_str_digest_075bd0c67293e615df9afdc934c155c9;
static PyObject *const_tuple_str_plain_ResponseError_tuple;
static PyObject *const_str_digest_a634c3a07d79eddfe1581301d16e55a1;
extern PyObject *const_str_plain___setstate__;
static PyObject *const_tuple_cc17bce855601e690729aaf10181f873_tuple;
extern PyObject *const_str_plain_CaseInsensitiveDict;
extern PyObject *const_str_plain_exists;
extern PyObject *const_str_plain_urlopen;
static PyObject *const_str_digest_afe1e7d238142b45d91be75903c1f969;
static PyObject *const_tuple_402e5278992b88e3d2e7fcf25552ac4f_tuple;
extern PyObject *const_str_plain_socks;
extern PyObject *const_str_plain_cert_reqs;
static PyObject *const_str_plain_proxy_scheme;
static PyObject *const_str_digest_fff293e3e7fde90d706cca79c91fa423;
static PyObject *const_str_digest_8381db4e5b50dbe02cf5623d3436dc6f;
static PyObject *const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple;
extern PyObject *const_str_plain___class__;
extern PyObject *const_tuple_str_plain_attr_str_plain_self_tuple;
static PyObject *const_str_plain__SSLError;
extern PyObject *const_str_plain_ClosedPoolError;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_BaseAdapter;
static PyObject *const_str_digest_3d43a254760496216c28528a54f67ae7;
static PyObject *const_str_plain_add_headers;
static PyObject *const_str_plain_manager;
extern PyObject *const_str_plain_extract_zipped_paths;
extern PyObject *const_str_plain___getstate__;
extern PyObject *const_str_plain__get_conn;
static PyObject *const_tuple_str_plain_PoolManager_str_plain_proxy_from_url_tuple;
static PyObject *const_str_plain_proxy_pool;
extern PyObject *const_str_plain_resp;
static PyObject *const_str_digest_a72d819fa9b462ca35152a67acf9f95b;
extern PyObject *const_str_plain_SSLError;
extern PyObject *const_tuple_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014_tuple;
extern PyObject *const_tuple_str_plain__basic_auth_str_tuple;
extern PyObject *const_str_angle_dictcontraction;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_digest_19fdcf2df08a408493d23f0c1c422714;
extern PyObject *const_str_plain_proxy_from_url;
static PyObject *const_tuple_str_plain_ClosedPoolError_tuple;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd;
static PyObject *const_tuple_str_plain_urlparse_str_plain_basestring_tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_LocationValueError;
extern PyObject *const_str_plain_args;
static PyObject *const_str_digest_e399ba4554180f37de594a6743234f17;
extern PyObject *const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
extern PyObject *const_str_plain_ConnectTimeout;
static PyObject *const_tuple_false_none_true_none_none_tuple;
extern PyObject *const_str_plain_items;
static PyObject *const_str_plain_proxy_kwargs;
static PyObject *const_str_digest_d166bac2cd9f995554d196b16ef3feee;
static PyObject *const_tuple_str_plain_ProxyError_tuple;
static PyObject *const_str_plain__pool_maxsize;
extern PyObject *const_str_plain_redirect;
extern PyObject *const_str_plain_status;
extern PyObject *const_str_plain_host;
static PyObject *const_str_digest_583f837ef2184e324997463a2ea927a1;
extern PyObject *const_str_plain_proxy_headers;
extern PyObject *const_bytes_digest_103d73ccb44d3ba17b2afce6d3b01e78;
extern PyObject *const_str_plain___attrs__;
extern PyObject *const_str_plain_request_url;
extern PyObject *const_str_plain_ProxyError;
extern PyObject *const_str_plain_poolmanager;
extern PyObject *const_str_plain_username;
static PyObject *const_str_digest_0e90a733b836dccf8b7d0124401998c8;
extern PyObject *const_str_plain_status_code;
extern PyObject *const_str_plain_send;
extern PyObject *const_str_plain_attr;
extern PyObject *const_str_plain_Response;
extern PyObject *const_str_plain_cert_file;
extern PyObject *const_str_plain_cert;
static PyObject *const_tuple_str_plain_Response_tuple;
static PyObject *const_str_digest_f564af29e8441da03b9e6bf26a88cc81;
extern PyObject *const_str_plain_strict;
static PyObject *const_tuple_str_plain_self_str_plain_proxy_tuple;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_tuple_str_plain_HTTPError_tuple;
static PyObject *const_str_digest_f0960f14478e5a2fef4fc81736af77be;
extern PyObject *const_str_plain_HTTPResponse;
extern PyObject *const_dict_f965c4886458f8f721a7913cea1cd007;
static PyObject *const_tuple_str_plain_https_tuple;
extern PyObject *const_str_plain_Timeout;
static PyObject *const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple;
static PyObject *const_str_plain_connections;
extern PyObject *const_str_plain_select_proxy;
static PyObject *const_str_digest_c2c00751ef6093a3f812bf922a66511f;
extern PyObject *const_str_plain_verify;
static PyObject *const_str_plain_cert_loc;
extern PyObject *const_str_plain_urldefragauth;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_str_digest_dbc92a2b5167052219bbed5a2180ad0b;
extern PyObject *const_str_plain_values;
extern PyObject *const_str_plain_ca_certs;
static PyObject *const_str_plain_is_proxied_http_request;
extern PyObject *const_str_plain_get_encoding_from_headers;
extern PyObject *const_str_plain_auth;
extern PyObject *const_tuple_str_plain_parse_url_tuple;
extern PyObject *const_str_plain__basic_auth_str;
static PyObject *const_str_digest_bb4ba86a57b66cae0a694169c648e9c1;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_clear;
extern PyObject *const_str_plain_key_file;
extern PyObject *const_str_plain_RetryError;
extern PyObject *const_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain_isdir = UNSTREAM_STRING_ASCII(&constant_bin[ 629466 ], 5, 1);
    const_tuple_str_plain_NewConnectionError_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_NewConnectionError_tuple, 0, const_str_plain_NewConnectionError); Py_INCREF(const_str_plain_NewConnectionError);
    const_tuple_c962b7f633f0bcd18920cb998098da8e_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_c962b7f633f0bcd18920cb998098da8e_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_c962b7f633f0bcd18920cb998098da8e_tuple, 1, const_str_plain_proxy); Py_INCREF(const_str_plain_proxy);
    PyTuple_SET_ITEM(const_tuple_c962b7f633f0bcd18920cb998098da8e_tuple, 2, const_str_plain_headers); Py_INCREF(const_str_plain_headers);
    PyTuple_SET_ITEM(const_tuple_c962b7f633f0bcd18920cb998098da8e_tuple, 3, const_str_plain_username); Py_INCREF(const_str_plain_username);
    PyTuple_SET_ITEM(const_tuple_c962b7f633f0bcd18920cb998098da8e_tuple, 4, const_str_plain_password); Py_INCREF(const_str_plain_password);
    const_str_plain_proxy_manager = UNSTREAM_STRING_ASCII(&constant_bin[ 629471 ], 13, 1);
    const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple, 1, const_str_plain_req); Py_INCREF(const_str_plain_req);
    PyTuple_SET_ITEM(const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple, 2, const_str_plain_resp); Py_INCREF(const_str_plain_resp);
    PyTuple_SET_ITEM(const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple, 3, const_str_plain_response); Py_INCREF(const_str_plain_response);
    const_str_digest_e5209e5e03de97a661af697c02841e7a = UNSTREAM_STRING_ASCII(&constant_bin[ 629484 ], 29, 0);
    const_str_digest_8c58dbeb2a2c13a119eaf790ea7782dd = UNSTREAM_STRING_ASCII(&constant_bin[ 629513 ], 534, 0);
    const_str_plain_build_response = UNSTREAM_STRING_ASCII(&constant_bin[ 630047 ], 14, 1);
    const_str_plain__HTTPError = UNSTREAM_STRING_ASCII(&constant_bin[ 20995 ], 10, 1);
    const_tuple_6cdb677ec4584549230d89c8e343b130_tuple = PyTuple_New(6);
    PyTuple_SET_ITEM(const_tuple_6cdb677ec4584549230d89c8e343b130_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain_pool_connections = UNSTREAM_STRING_ASCII(&constant_bin[ 630061 ], 16, 1);
    PyTuple_SET_ITEM(const_tuple_6cdb677ec4584549230d89c8e343b130_tuple, 1, const_str_plain_pool_connections); Py_INCREF(const_str_plain_pool_connections);
    const_str_plain_pool_maxsize = UNSTREAM_STRING_ASCII(&constant_bin[ 630077 ], 12, 1);
    PyTuple_SET_ITEM(const_tuple_6cdb677ec4584549230d89c8e343b130_tuple, 2, const_str_plain_pool_maxsize); Py_INCREF(const_str_plain_pool_maxsize);
    const_str_plain_max_retries = UNSTREAM_STRING_ASCII(&constant_bin[ 630089 ], 11, 1);
    PyTuple_SET_ITEM(const_tuple_6cdb677ec4584549230d89c8e343b130_tuple, 3, const_str_plain_max_retries); Py_INCREF(const_str_plain_max_retries);
    const_str_plain_pool_block = UNSTREAM_STRING_ASCII(&constant_bin[ 630100 ], 10, 1);
    PyTuple_SET_ITEM(const_tuple_6cdb677ec4584549230d89c8e343b130_tuple, 4, const_str_plain_pool_block); Py_INCREF(const_str_plain_pool_block);
    PyTuple_SET_ITEM(const_tuple_6cdb677ec4584549230d89c8e343b130_tuple, 5, const_str_plain___class__); Py_INCREF(const_str_plain___class__);
    const_str_digest_94f8254fa141c33ed65ea27f59ed9d62 = UNSTREAM_STRING_ASCII(&constant_bin[ 630110 ], 23, 0);
    const_tuple_str_digest_381fd3348aa52a96bff9cd9e1ea4f162_tuple = PyTuple_New(1);
    const_str_digest_381fd3348aa52a96bff9cd9e1ea4f162 = UNSTREAM_STRING_ASCII(&constant_bin[ 630133 ], 39, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_381fd3348aa52a96bff9cd9e1ea4f162_tuple, 0, const_str_digest_381fd3348aa52a96bff9cd9e1ea4f162); Py_INCREF(const_str_digest_381fd3348aa52a96bff9cd9e1ea4f162);
    const_tuple_str_plain_MaxRetryError_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_MaxRetryError_tuple, 0, const_str_plain_MaxRetryError); Py_INCREF(const_str_plain_MaxRetryError);
    const_str_digest_46268be1785799fb5b96bebc078469e2 = UNSTREAM_STRING_ASCII(&constant_bin[ 630172 ], 16, 0);
    const_str_digest_689f43089124f06b15e9987dc8e6f0cd = UNSTREAM_STRING_ASCII(&constant_bin[ 630188 ], 33, 0);
    const_str_digest_b80c93ea6c3e5d185c1d8985f749f6d3 = UNSTREAM_STRING_ASCII(&constant_bin[ 630221 ], 26, 0);
    const_str_digest_bfa093c614acefeadc8693bd26119f2c = UNSTREAM_STRING_ASCII(&constant_bin[ 630247 ], 463, 0);
    const_str_digest_f1fccf6352a44c8bf8595b234fb96ec9 = UNSTREAM_STRING_ASCII(&constant_bin[ 630710 ], 26, 0);
    const_str_digest_64ad7ce704a2035b2f3a90397c090ca7 = UNSTREAM_STRING_ASCII(&constant_bin[ 630736 ], 438, 0);
    const_str_plain_cert_verify = UNSTREAM_STRING_ASCII(&constant_bin[ 630122 ], 11, 1);
    const_tuple_str_plain_SSLError_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_SSLError_tuple, 0, const_str_plain_SSLError); Py_INCREF(const_str_plain_SSLError);
    const_str_digest_d9e923e371e62d15476d82fc18912a89 = UNSTREAM_STRING_ASCII(&constant_bin[ 631174 ], 23, 0);
    const_tuple_str_plain_SOCKSProxyManager_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_SOCKSProxyManager_tuple, 0, const_str_plain_SOCKSProxyManager); Py_INCREF(const_str_plain_SOCKSProxyManager);
    const_str_plain_DEFAULT_POOLSIZE = UNSTREAM_STRING_ASCII(&constant_bin[ 21098 ], 16, 1);
    const_str_digest_92450e54ff68c1856b3f5b6ca477f571 = UNSTREAM_STRING_ASCII(&constant_bin[ 631197 ], 69, 0);
    const_str_plain_init_poolmanager = UNSTREAM_STRING_ASCII(&constant_bin[ 631266 ], 16, 1);
    const_str_digest_ac9f80996ecd26d1a23399c02013ff79 = UNSTREAM_STRING_ASCII(&constant_bin[ 631282 ], 59, 0);
    const_tuple_str_plain_self_str_plain_request_str_plain_kwargs_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_request_str_plain_kwargs_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_request_str_plain_kwargs_tuple, 1, const_str_plain_request); Py_INCREF(const_str_plain_request);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_request_str_plain_kwargs_tuple, 2, const_str_plain_kwargs); Py_INCREF(const_str_plain_kwargs);
    const_str_digest_8eda945652fc1bca806aa3da22ec6fa8 = UNSTREAM_STRING_ASCII(&constant_bin[ 631341 ], 16, 0);
    const_tuple_bd356f6cf3258844d460b87e1636571d_tuple = PyTuple_New(7);
    PyTuple_SET_ITEM(const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, 1, const_str_plain_request); Py_INCREF(const_str_plain_request);
    PyTuple_SET_ITEM(const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, 2, const_str_plain_stream); Py_INCREF(const_str_plain_stream);
    PyTuple_SET_ITEM(const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, 3, const_str_plain_timeout); Py_INCREF(const_str_plain_timeout);
    PyTuple_SET_ITEM(const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, 4, const_str_plain_verify); Py_INCREF(const_str_plain_verify);
    PyTuple_SET_ITEM(const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, 5, const_str_plain_cert); Py_INCREF(const_str_plain_cert);
    PyTuple_SET_ITEM(const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, 6, const_str_plain_proxies); Py_INCREF(const_str_plain_proxies);
    const_dict_d57bfa9a8ed7a88f3af4f0a6e5cfc141 = _PyDict_NewPresized( 1 );
    PyDict_SetItem(const_dict_d57bfa9a8ed7a88f3af4f0a6e5cfc141, const_str_plain_skip_accept_encoding, Py_True);
    assert(PyDict_Size(const_dict_d57bfa9a8ed7a88f3af4f0a6e5cfc141) == 1);
    const_tuple_str_plain_ProtocolError_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_ProtocolError_tuple, 0, const_str_plain_ProtocolError); Py_INCREF(const_str_plain_ProtocolError);
    const_str_digest_3753a9b47e94d50e84fafceba56d25b3 = UNSTREAM_STRING_ASCII(&constant_bin[ 631357 ], 114, 0);
    const_str_digest_92d7a028a7de3fecbe9df9c1fa24ee6e = UNSTREAM_STRING_ASCII(&constant_bin[ 631471 ], 835, 0);
    const_str_plain_get_connection = UNSTREAM_STRING_ASCII(&constant_bin[ 630233 ], 14, 1);
    const_tuple_str_digest_d166bac2cd9f995554d196b16ef3feee_tuple = PyTuple_New(1);
    const_str_digest_d166bac2cd9f995554d196b16ef3feee = UNSTREAM_STRING_ASCII(&constant_bin[ 632306 ], 70, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_d166bac2cd9f995554d196b16ef3feee_tuple, 0, const_str_digest_d166bac2cd9f995554d196b16ef3feee); Py_INCREF(const_str_digest_d166bac2cd9f995554d196b16ef3feee);
    const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple = PyTuple_New(7);
    PyTuple_SET_ITEM(const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple, 0, const_str_plain_DEFAULT_CA_BUNDLE_PATH); Py_INCREF(const_str_plain_DEFAULT_CA_BUNDLE_PATH);
    PyTuple_SET_ITEM(const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple, 1, const_str_plain_extract_zipped_paths); Py_INCREF(const_str_plain_extract_zipped_paths);
    PyTuple_SET_ITEM(const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple, 2, const_str_plain_get_encoding_from_headers); Py_INCREF(const_str_plain_get_encoding_from_headers);
    PyTuple_SET_ITEM(const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple, 3, const_str_plain_prepend_scheme_if_needed); Py_INCREF(const_str_plain_prepend_scheme_if_needed);
    PyTuple_SET_ITEM(const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple, 4, const_str_plain_get_auth_from_url); Py_INCREF(const_str_plain_get_auth_from_url);
    PyTuple_SET_ITEM(const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple, 5, const_str_plain_urldefragauth); Py_INCREF(const_str_plain_urldefragauth);
    PyTuple_SET_ITEM(const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple, 6, const_str_plain_select_proxy); Py_INCREF(const_str_plain_select_proxy);
    const_str_digest_58d849cc27a8bb92406c0789468590b3 = UNSTREAM_STRING_ASCII(&constant_bin[ 632376 ], 20, 0);
    const_str_plain__pool_block = UNSTREAM_STRING_ASCII(&constant_bin[ 632396 ], 11, 1);
    const_tuple_str_plain_socks_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_socks_tuple, 0, const_str_plain_socks); Py_INCREF(const_str_plain_socks);
    const_str_plain_DEFAULT_POOLBLOCK = UNSTREAM_STRING_ASCII(&constant_bin[ 21136 ], 17, 1);
    const_str_plain_using_socks_proxy = UNSTREAM_STRING_ASCII(&constant_bin[ 632407 ], 17, 1);
    const_str_plain_TimeoutSauce = UNSTREAM_STRING_ASCII(&constant_bin[ 20403 ], 12, 1);
    const_str_digest_cf164d66984f410735aac772ffcc2043 = UNSTREAM_STRING_ASCII(&constant_bin[ 632424 ], 575, 0);
    const_tuple_str_plain_LocationValueError_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_LocationValueError_tuple, 0, const_str_plain_LocationValueError); Py_INCREF(const_str_plain_LocationValueError);
    const_str_plain_proxy_manager_for = UNSTREAM_STRING_ASCII(&constant_bin[ 629496 ], 17, 1);
    const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple = PyTuple_New(6);
    PyTuple_SET_ITEM(const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple, 1, const_str_plain_conn); Py_INCREF(const_str_plain_conn);
    PyTuple_SET_ITEM(const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple, 2, const_str_plain_url); Py_INCREF(const_str_plain_url);
    PyTuple_SET_ITEM(const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple, 3, const_str_plain_verify); Py_INCREF(const_str_plain_verify);
    PyTuple_SET_ITEM(const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple, 4, const_str_plain_cert); Py_INCREF(const_str_plain_cert);
    const_str_plain_cert_loc = UNSTREAM_STRING_ASCII(&constant_bin[ 632999 ], 8, 1);
    PyTuple_SET_ITEM(const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple, 5, const_str_plain_cert_loc); Py_INCREF(const_str_plain_cert_loc);
    const_str_digest_ab462680d0487f574012e6a7b3ea2cfd = UNSTREAM_STRING_ASCII(&constant_bin[ 633007 ], 162, 0);
    const_list_b210aeadbd087eaaf628d5f4d13acd25_list = PyList_New(5);
    PyList_SET_ITEM(const_list_b210aeadbd087eaaf628d5f4d13acd25_list, 0, const_str_plain_max_retries); Py_INCREF(const_str_plain_max_retries);
    PyList_SET_ITEM(const_list_b210aeadbd087eaaf628d5f4d13acd25_list, 1, const_str_plain_config); Py_INCREF(const_str_plain_config);
    const_str_plain__pool_connections = UNSTREAM_STRING_ASCII(&constant_bin[ 633169 ], 17, 1);
    PyList_SET_ITEM(const_list_b210aeadbd087eaaf628d5f4d13acd25_list, 2, const_str_plain__pool_connections); Py_INCREF(const_str_plain__pool_connections);
    const_str_plain__pool_maxsize = UNSTREAM_STRING_ASCII(&constant_bin[ 633186 ], 13, 1);
    PyList_SET_ITEM(const_list_b210aeadbd087eaaf628d5f4d13acd25_list, 3, const_str_plain__pool_maxsize); Py_INCREF(const_str_plain__pool_maxsize);
    PyList_SET_ITEM(const_list_b210aeadbd087eaaf628d5f4d13acd25_list, 4, const_str_plain__pool_block); Py_INCREF(const_str_plain__pool_block);
    const_str_digest_2bdec81ec502026c4a660b15852a5925 = UNSTREAM_STRING_ASCII(&constant_bin[ 633199 ], 24, 0);
    const_dict_96e45a30326f2854cb930a7737e3b26d = _PyDict_NewPresized( 1 );
    PyDict_SetItem(const_dict_96e45a30326f2854cb930a7737e3b26d, const_str_plain_read, Py_False);
    assert(PyDict_Size(const_dict_96e45a30326f2854cb930a7737e3b26d) == 1);
    const_str_plain_DEFAULT_RETRIES = UNSTREAM_STRING_ASCII(&constant_bin[ 19557 ], 15, 1);
    const_tuple_str_plain_ConnectTimeoutError_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_ConnectTimeoutError_tuple, 0, const_str_plain_ConnectTimeoutError); Py_INCREF(const_str_plain_ConnectTimeoutError);
    const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple = PyTuple_New(7);
    PyTuple_SET_ITEM(const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple, 1, const_str_plain_proxy); Py_INCREF(const_str_plain_proxy);
    const_str_plain_proxy_kwargs = UNSTREAM_STRING_ASCII(&constant_bin[ 630559 ], 12, 1);
    PyTuple_SET_ITEM(const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple, 2, const_str_plain_proxy_kwargs); Py_INCREF(const_str_plain_proxy_kwargs);
    const_str_plain_manager = UNSTREAM_STRING_ASCII(&constant_bin[ 8128 ], 7, 1);
    PyTuple_SET_ITEM(const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple, 3, const_str_plain_manager); Py_INCREF(const_str_plain_manager);
    PyTuple_SET_ITEM(const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple, 4, const_str_plain_username); Py_INCREF(const_str_plain_username);
    PyTuple_SET_ITEM(const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple, 5, const_str_plain_password); Py_INCREF(const_str_plain_password);
    PyTuple_SET_ITEM(const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple, 6, const_str_plain_proxy_headers); Py_INCREF(const_str_plain_proxy_headers);
    const_str_plain_DEFAULT_POOL_TIMEOUT = UNSTREAM_STRING_ASCII(&constant_bin[ 20437 ], 20, 1);
    const_tuple_str_plain_ReadTimeoutError_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_ReadTimeoutError_tuple, 0, const_str_plain_ReadTimeoutError); Py_INCREF(const_str_plain_ReadTimeoutError);
    const_str_digest_3e65357a65a5cf0df20a8efd5394db63 = UNSTREAM_STRING_ASCII(&constant_bin[ 633223 ], 57, 0);
    const_str_plain__ProxyError = UNSTREAM_STRING_ASCII(&constant_bin[ 20832 ], 11, 1);
    const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain_connections = UNSTREAM_STRING_ASCII(&constant_bin[ 459403 ], 11, 1);
    PyTuple_SET_ITEM(const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple, 1, const_str_plain_connections); Py_INCREF(const_str_plain_connections);
    PyTuple_SET_ITEM(const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple, 2, const_str_plain_maxsize); Py_INCREF(const_str_plain_maxsize);
    PyTuple_SET_ITEM(const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple, 3, const_str_plain_block); Py_INCREF(const_str_plain_block);
    PyTuple_SET_ITEM(const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple, 4, const_str_plain_pool_kwargs); Py_INCREF(const_str_plain_pool_kwargs);
    const_str_digest_a3b4e21c527f3872bb2a3cad05caced3 = UNSTREAM_STRING_ASCII(&constant_bin[ 633280 ], 396, 0);
    const_str_digest_4dd75d7a0434de0e965e971794e16108 = UNSTREAM_STRING_ASCII(&constant_bin[ 633676 ], 49, 0);
    const_str_digest_39c1bfc1fe8b17be2911255cb6ddbfdc = UNSTREAM_STRING_ASCII(&constant_bin[ 633725 ], 28, 0);
    const_str_digest_075bd0c67293e615df9afdc934c155c9 = UNSTREAM_STRING_ASCII(&constant_bin[ 633753 ], 24, 0);
    const_tuple_str_plain_ResponseError_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_ResponseError_tuple, 0, const_str_plain_ResponseError); Py_INCREF(const_str_plain_ResponseError);
    const_str_digest_a634c3a07d79eddfe1581301d16e55a1 = UNSTREAM_STRING_ASCII(&constant_bin[ 633777 ], 26, 0);
    const_tuple_cc17bce855601e690729aaf10181f873_tuple = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 633803 ], 137);
    const_str_digest_afe1e7d238142b45d91be75903c1f969 = UNSTREAM_STRING_ASCII(&constant_bin[ 633940 ], 20, 0);
    const_tuple_402e5278992b88e3d2e7fcf25552ac4f_tuple = PyTuple_New(9);
    PyTuple_SET_ITEM(const_tuple_402e5278992b88e3d2e7fcf25552ac4f_tuple, 0, const_str_plain_ConnectionError); Py_INCREF(const_str_plain_ConnectionError);
    PyTuple_SET_ITEM(const_tuple_402e5278992b88e3d2e7fcf25552ac4f_tuple, 1, const_str_plain_ConnectTimeout); Py_INCREF(const_str_plain_ConnectTimeout);
    PyTuple_SET_ITEM(const_tuple_402e5278992b88e3d2e7fcf25552ac4f_tuple, 2, const_str_plain_ReadTimeout); Py_INCREF(const_str_plain_ReadTimeout);
    PyTuple_SET_ITEM(const_tuple_402e5278992b88e3d2e7fcf25552ac4f_tuple, 3, const_str_plain_SSLError); Py_INCREF(const_str_plain_SSLError);
    PyTuple_SET_ITEM(const_tuple_402e5278992b88e3d2e7fcf25552ac4f_tuple, 4, const_str_plain_ProxyError); Py_INCREF(const_str_plain_ProxyError);
    PyTuple_SET_ITEM(const_tuple_402e5278992b88e3d2e7fcf25552ac4f_tuple, 5, const_str_plain_RetryError); Py_INCREF(const_str_plain_RetryError);
    PyTuple_SET_ITEM(const_tuple_402e5278992b88e3d2e7fcf25552ac4f_tuple, 6, const_str_plain_InvalidSchema); Py_INCREF(const_str_plain_InvalidSchema);
    PyTuple_SET_ITEM(const_tuple_402e5278992b88e3d2e7fcf25552ac4f_tuple, 7, const_str_plain_InvalidProxyURL); Py_INCREF(const_str_plain_InvalidProxyURL);
    PyTuple_SET_ITEM(const_tuple_402e5278992b88e3d2e7fcf25552ac4f_tuple, 8, const_str_plain_InvalidURL); Py_INCREF(const_str_plain_InvalidURL);
    const_str_plain_proxy_scheme = UNSTREAM_STRING_ASCII(&constant_bin[ 633960 ], 12, 1);
    const_str_digest_fff293e3e7fde90d706cca79c91fa423 = UNSTREAM_STRING_ASCII(&constant_bin[ 633972 ], 895, 0);
    const_str_digest_8381db4e5b50dbe02cf5623d3436dc6f = UNSTREAM_STRING_ASCII(&constant_bin[ 634867 ], 17, 0);
    const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple = PyTuple_New(9);
    PyTuple_SET_ITEM(const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple, 1, const_str_plain_request); Py_INCREF(const_str_plain_request);
    PyTuple_SET_ITEM(const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple, 2, const_str_plain_proxies); Py_INCREF(const_str_plain_proxies);
    PyTuple_SET_ITEM(const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple, 3, const_str_plain_proxy); Py_INCREF(const_str_plain_proxy);
    PyTuple_SET_ITEM(const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple, 4, const_str_plain_scheme); Py_INCREF(const_str_plain_scheme);
    const_str_plain_is_proxied_http_request = UNSTREAM_STRING_ASCII(&constant_bin[ 634884 ], 23, 1);
    PyTuple_SET_ITEM(const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple, 5, const_str_plain_is_proxied_http_request); Py_INCREF(const_str_plain_is_proxied_http_request);
    PyTuple_SET_ITEM(const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple, 6, const_str_plain_using_socks_proxy); Py_INCREF(const_str_plain_using_socks_proxy);
    PyTuple_SET_ITEM(const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple, 7, const_str_plain_proxy_scheme); Py_INCREF(const_str_plain_proxy_scheme);
    PyTuple_SET_ITEM(const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple, 8, const_str_plain_url); Py_INCREF(const_str_plain_url);
    const_str_plain__SSLError = UNSTREAM_STRING_ASCII(&constant_bin[ 20897 ], 9, 1);
    const_str_plain_BaseAdapter = UNSTREAM_STRING_ASCII(&constant_bin[ 19524 ], 11, 1);
    const_str_digest_3d43a254760496216c28528a54f67ae7 = UNSTREAM_STRING_ASCII(&constant_bin[ 634907 ], 23, 0);
    const_str_plain_add_headers = UNSTREAM_STRING_ASCII(&constant_bin[ 634919 ], 11, 1);
    const_tuple_str_plain_PoolManager_str_plain_proxy_from_url_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_PoolManager_str_plain_proxy_from_url_tuple, 0, const_str_plain_PoolManager); Py_INCREF(const_str_plain_PoolManager);
    PyTuple_SET_ITEM(const_tuple_str_plain_PoolManager_str_plain_proxy_from_url_tuple, 1, const_str_plain_proxy_from_url); Py_INCREF(const_str_plain_proxy_from_url);
    const_str_plain_proxy_pool = UNSTREAM_STRING_ASCII(&constant_bin[ 634930 ], 10, 1);
    const_str_digest_a72d819fa9b462ca35152a67acf9f95b = UNSTREAM_STRING_ASCII(&constant_bin[ 634940 ], 26, 0);
    const_str_digest_19fdcf2df08a408493d23f0c1c422714 = UNSTREAM_STRING_ASCII(&constant_bin[ 634966 ], 1167, 0);
    const_tuple_str_plain_ClosedPoolError_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_ClosedPoolError_tuple, 0, const_str_plain_ClosedPoolError); Py_INCREF(const_str_plain_ClosedPoolError);
    const_tuple_str_plain_urlparse_str_plain_basestring_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_urlparse_str_plain_basestring_tuple, 0, const_str_plain_urlparse); Py_INCREF(const_str_plain_urlparse);
    PyTuple_SET_ITEM(const_tuple_str_plain_urlparse_str_plain_basestring_tuple, 1, const_str_plain_basestring); Py_INCREF(const_str_plain_basestring);
    const_str_digest_e399ba4554180f37de594a6743234f17 = UNSTREAM_STRING_ASCII(&constant_bin[ 636133 ], 7, 0);
    const_tuple_false_none_true_none_none_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_false_none_true_none_none_tuple, 0, Py_False); Py_INCREF(Py_False);
    PyTuple_SET_ITEM(const_tuple_false_none_true_none_none_tuple, 1, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_false_none_true_none_none_tuple, 2, Py_True); Py_INCREF(Py_True);
    PyTuple_SET_ITEM(const_tuple_false_none_true_none_none_tuple, 3, Py_None); Py_INCREF(Py_None);
    PyTuple_SET_ITEM(const_tuple_false_none_true_none_none_tuple, 4, Py_None); Py_INCREF(Py_None);
    const_tuple_str_plain_ProxyError_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_ProxyError_tuple, 0, const_str_plain_ProxyError); Py_INCREF(const_str_plain_ProxyError);
    const_str_digest_583f837ef2184e324997463a2ea927a1 = UNSTREAM_STRING_ASCII(&constant_bin[ 636140 ], 137, 0);
    const_str_digest_0e90a733b836dccf8b7d0124401998c8 = UNSTREAM_STRING_ASCII(&constant_bin[ 636277 ], 546, 0);
    const_tuple_str_plain_Response_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_Response_tuple, 0, const_str_plain_Response); Py_INCREF(const_str_plain_Response);
    const_str_digest_f564af29e8441da03b9e6bf26a88cc81 = UNSTREAM_STRING_ASCII(&constant_bin[ 629692 ], 17, 0);
    const_tuple_str_plain_self_str_plain_proxy_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_proxy_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_proxy_tuple, 1, const_str_plain_proxy); Py_INCREF(const_str_plain_proxy);
    const_str_digest_f0960f14478e5a2fef4fc81736af77be = UNSTREAM_STRING_ASCII(&constant_bin[ 636823 ], 577, 0);
    const_tuple_str_plain_https_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_https_tuple, 0, const_str_plain_https); Py_INCREF(const_str_plain_https);
    const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple = PyTuple_New(8);
    PyTuple_SET_ITEM(const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple, 1, const_str_plain_url); Py_INCREF(const_str_plain_url);
    PyTuple_SET_ITEM(const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple, 2, const_str_plain_proxies); Py_INCREF(const_str_plain_proxies);
    PyTuple_SET_ITEM(const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple, 3, const_str_plain_proxy); Py_INCREF(const_str_plain_proxy);
    PyTuple_SET_ITEM(const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple, 4, const_str_plain_proxy_url); Py_INCREF(const_str_plain_proxy_url);
    PyTuple_SET_ITEM(const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple, 5, const_str_plain_proxy_manager); Py_INCREF(const_str_plain_proxy_manager);
    PyTuple_SET_ITEM(const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple, 6, const_str_plain_conn); Py_INCREF(const_str_plain_conn);
    PyTuple_SET_ITEM(const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple, 7, const_str_plain_parsed); Py_INCREF(const_str_plain_parsed);
    const_str_digest_c2c00751ef6093a3f812bf922a66511f = UNSTREAM_STRING_ASCII(&constant_bin[ 637400 ], 17, 0);
    const_str_digest_dbc92a2b5167052219bbed5a2180ad0b = UNSTREAM_STRING_ASCII(&constant_bin[ 637417 ], 520, 0);
    const_str_digest_bb4ba86a57b66cae0a694169c648e9c1 = UNSTREAM_STRING_ASCII(&constant_bin[ 637937 ], 25, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$adapters(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_cc041afb620f28dd8c3d3a69a884b994;
static PyCodeObject *codeobj_57dea2c39f5fc1cfee135e9688a72b58;
static PyCodeObject *codeobj_cc0c27cb95fca605046d334971888564;
static PyCodeObject *codeobj_28539ee21c0cf589428515260236a41b;
static PyCodeObject *codeobj_30d829bdbc354ab3b409b440770273d2;
static PyCodeObject *codeobj_341b696faa8057142203cd4044e2336a;
static PyCodeObject *codeobj_b06850dbb15d82e67114602679343958;
static PyCodeObject *codeobj_6a7ec43538efc4d1be3d504cb3ab032e;
static PyCodeObject *codeobj_2f6aedf88c4d84fce66e7b17625fea5d;
static PyCodeObject *codeobj_5c9981512425bf31afafcfe7ed7bc8c9;
static PyCodeObject *codeobj_70f9ef5b75f78f241a57af92f5077606;
static PyCodeObject *codeobj_76eaafc44bfc9fefc19a2259f9939086;
static PyCodeObject *codeobj_1552e48e051e8f82758509fb240ff79f;
static PyCodeObject *codeobj_506038eb249ce32dd62e6c44443cc9d6;
static PyCodeObject *codeobj_2a5c41f2c48e3563847b08dd72883d30;
static PyCodeObject *codeobj_34464d4b9c70a2a62e86833648accb3d;
static PyCodeObject *codeobj_9a5dd723d3097d5819cc2e3152ff134c;
static PyCodeObject *codeobj_57a511cd873dc3dc624e3165e0e38e48;
static PyCodeObject *codeobj_21a0af1ea824ec3a59033428c2d0f2ff;
static PyCodeObject *codeobj_1e0a22a91c486c7f987549373411f48d;
static PyCodeObject *codeobj_9cad0070da42b24f25ccb7c0be48a073;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_ac9f80996ecd26d1a23399c02013ff79;
    codeobj_cc041afb620f28dd8c3d3a69a884b994 = MAKE_CODEOBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_angle_dictcontraction, const_tuple_str_plain_attr_str_plain_self_tuple, 1, 0, 0);
    codeobj_57dea2c39f5fc1cfee135e9688a72b58 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_a72d819fa9b462ca35152a67acf9f95b, const_tuple_empty, 0, 0, 0);
    codeobj_cc0c27cb95fca605046d334971888564 = MAKE_CODEOBJECT(module_filename_obj, 55, CO_NOFREE, const_str_plain_BaseAdapter, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_28539ee21c0cf589428515260236a41b = MAKE_CODEOBJECT(module_filename_obj, 84, CO_NOFREE, const_str_plain_HTTPAdapter, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_30d829bdbc354ab3b409b440770273d2 = MAKE_CODEOBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_SOCKSProxyManager, const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, 0, 0);
    codeobj_341b696faa8057142203cd4044e2336a = MAKE_CODEOBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___getstate__, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_b06850dbb15d82e67114602679343958 = MAKE_CODEOBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, const_tuple_str_plain_self_str_plain___class___tuple, 1, 0, 0);
    codeobj_6a7ec43538efc4d1be3d504cb3ab032e = MAKE_CODEOBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, const_tuple_6cdb677ec4584549230d89c8e343b130_tuple, 5, 0, 0);
    codeobj_2f6aedf88c4d84fce66e7b17625fea5d = MAKE_CODEOBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___setstate__, const_tuple_a95b72743b8804bf0e9cb38b968c0b18_tuple, 2, 0, 0);
    codeobj_5c9981512425bf31afafcfe7ed7bc8c9 = MAKE_CODEOBJECT(module_filename_obj, 358, CO_VARKEYWORDS | CO_NOFREE, const_str_plain_add_headers, const_tuple_str_plain_self_str_plain_request_str_plain_kwargs_tuple, 2, 0, 0);
    codeobj_70f9ef5b75f78f241a57af92f5077606 = MAKE_CODEOBJECT(module_filename_obj, 255, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_build_response, const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple, 3, 0, 0);
    codeobj_76eaafc44bfc9fefc19a2259f9939086 = MAKE_CODEOBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_cert_verify, const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple, 5, 0, 0);
    codeobj_1552e48e051e8f82758509fb240ff79f = MAKE_CODEOBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_close, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_506038eb249ce32dd62e6c44443cc9d6 = MAKE_CODEOBJECT(module_filename_obj, 319, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_close, const_tuple_str_plain_self_str_plain_proxy_tuple, 1, 0, 0);
    codeobj_2a5c41f2c48e3563847b08dd72883d30 = MAKE_CODEOBJECT(module_filename_obj, 292, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_get_connection, const_tuple_ed0faa1b27daeaafd23817c2c8e1608d_tuple, 3, 0, 0);
    codeobj_34464d4b9c70a2a62e86833648accb3d = MAKE_CODEOBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_init_poolmanager, const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple, 4, 0, 0);
    codeobj_9a5dd723d3097d5819cc2e3152ff134c = MAKE_CODEOBJECT(module_filename_obj, 372, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_proxy_headers, const_tuple_c962b7f633f0bcd18920cb998098da8e_tuple, 2, 0, 0);
    codeobj_57a511cd873dc3dc624e3165e0e38e48 = MAKE_CODEOBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_proxy_manager_for, const_tuple_a2e6b39acdd1ecae7644488ae1c342c3_tuple, 2, 0, 0);
    codeobj_21a0af1ea824ec3a59033428c2d0f2ff = MAKE_CODEOBJECT(module_filename_obj, 329, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_request_url, const_tuple_b290affe11bdd6c85d44e5fe1f99f9b5_tuple, 3, 0, 0);
    codeobj_1e0a22a91c486c7f987549373411f48d = MAKE_CODEOBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_send, const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, 7, 0, 0);
    codeobj_9cad0070da42b24f25ccb7c0be48a073 = MAKE_CODEOBJECT(module_filename_obj, 394, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_send, const_tuple_cc17bce855601e690729aaf10181f873_tuple, 7, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_9_complex_call_helper_keywords_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_10_cert_verify();


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_11_build_response();


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_12_get_connection(PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_13_close();


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_14_request_url();


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_15_add_headers();


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_16_proxy_headers();


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_17_send(PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_1_SOCKSProxyManager();


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_2___init__();


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_3_send(PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_4_close();


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_5___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_6___getstate__();


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_7___setstate__();


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_8_init_poolmanager(PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_9_proxy_manager_for();


// The module function definitions.
static PyObject *impl_requests$adapters$$$function_1_SOCKSProxyManager(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    struct Nuitka_FrameObject *frame_30d829bdbc354ab3b409b440770273d2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_30d829bdbc354ab3b409b440770273d2 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_30d829bdbc354ab3b409b440770273d2, codeobj_30d829bdbc354ab3b409b440770273d2, module_requests$adapters, sizeof(void *)+sizeof(void *));
    frame_30d829bdbc354ab3b409b440770273d2 = cache_frame_30d829bdbc354ab3b409b440770273d2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_30d829bdbc354ab3b409b440770273d2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_30d829bdbc354ab3b409b440770273d2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_InvalidSchema);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidSchema);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19483 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_30d829bdbc354ab3b409b440770273d2->m_frame.f_lineno = 47;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1(tmp_called_name_1, &PyTuple_GET_ITEM(const_tuple_str_digest_381fd3348aa52a96bff9cd9e1ea4f162_tuple, 0));

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 47;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_30d829bdbc354ab3b409b440770273d2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_30d829bdbc354ab3b409b440770273d2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_30d829bdbc354ab3b409b440770273d2, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_30d829bdbc354ab3b409b440770273d2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_30d829bdbc354ab3b409b440770273d2, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_30d829bdbc354ab3b409b440770273d2,
        type_description_1,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if (frame_30d829bdbc354ab3b409b440770273d2 == cache_frame_30d829bdbc354ab3b409b440770273d2) {
        Py_DECREF(frame_30d829bdbc354ab3b409b440770273d2);
    }
    cache_frame_30d829bdbc354ab3b409b440770273d2 = NULL;

    assertFrameObject(frame_30d829bdbc354ab3b409b440770273d2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_1_SOCKSProxyManager);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_requests$adapters$$$function_2___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b06850dbb15d82e67114602679343958;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b06850dbb15d82e67114602679343958 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_b06850dbb15d82e67114602679343958, codeobj_b06850dbb15d82e67114602679343958, module_requests$adapters, sizeof(void *)+sizeof(void *));
    frame_b06850dbb15d82e67114602679343958 = cache_frame_b06850dbb15d82e67114602679343958;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b06850dbb15d82e67114602679343958);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b06850dbb15d82e67114602679343958) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_BaseAdapter);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseAdapter);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19518 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        frame_b06850dbb15d82e67114602679343958->m_frame.f_lineno = 59;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain___init__);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b06850dbb15d82e67114602679343958);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b06850dbb15d82e67114602679343958);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b06850dbb15d82e67114602679343958, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_b06850dbb15d82e67114602679343958->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b06850dbb15d82e67114602679343958, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b06850dbb15d82e67114602679343958,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame.
    if (frame_b06850dbb15d82e67114602679343958 == cache_frame_b06850dbb15d82e67114602679343958) {
        Py_DECREF(frame_b06850dbb15d82e67114602679343958);
    }
    cache_frame_b06850dbb15d82e67114602679343958 = NULL;

    assertFrameObject(frame_b06850dbb15d82e67114602679343958);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_2___init__);
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


static PyObject *impl_requests$adapters$$$function_3_send(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *par_stream = python_pars[2];
    PyObject *par_timeout = python_pars[3];
    PyObject *par_verify = python_pars[4];
    PyObject *par_cert = python_pars[5];
    PyObject *par_proxies = python_pars[6];
    struct Nuitka_FrameObject *frame_1e0a22a91c486c7f987549373411f48d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1e0a22a91c486c7f987549373411f48d = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_1e0a22a91c486c7f987549373411f48d, codeobj_1e0a22a91c486c7f987549373411f48d, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_1e0a22a91c486c7f987549373411f48d = cache_frame_1e0a22a91c486c7f987549373411f48d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1e0a22a91c486c7f987549373411f48d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1e0a22a91c486c7f987549373411f48d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 77;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1e0a22a91c486c7f987549373411f48d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1e0a22a91c486c7f987549373411f48d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1e0a22a91c486c7f987549373411f48d, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_1e0a22a91c486c7f987549373411f48d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e0a22a91c486c7f987549373411f48d, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1e0a22a91c486c7f987549373411f48d,
        type_description_1,
        par_self,
        par_request,
        par_stream,
        par_timeout,
        par_verify,
        par_cert,
        par_proxies
    );


    // Release cached frame.
    if (frame_1e0a22a91c486c7f987549373411f48d == cache_frame_1e0a22a91c486c7f987549373411f48d) {
        Py_DECREF(frame_1e0a22a91c486c7f987549373411f48d);
    }
    cache_frame_1e0a22a91c486c7f987549373411f48d = NULL;

    assertFrameObject(frame_1e0a22a91c486c7f987549373411f48d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_3_send);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);
    CHECK_OBJECT(par_verify);
    Py_DECREF(par_verify);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_proxies);
    Py_DECREF(par_proxies);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_requests$adapters$$$function_4_close(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1552e48e051e8f82758509fb240ff79f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1552e48e051e8f82758509fb240ff79f = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_1552e48e051e8f82758509fb240ff79f, codeobj_1552e48e051e8f82758509fb240ff79f, module_requests$adapters, sizeof(void *));
    frame_1552e48e051e8f82758509fb240ff79f = cache_frame_1552e48e051e8f82758509fb240ff79f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1552e48e051e8f82758509fb240ff79f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1552e48e051e8f82758509fb240ff79f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 81;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1552e48e051e8f82758509fb240ff79f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1552e48e051e8f82758509fb240ff79f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1552e48e051e8f82758509fb240ff79f, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_1552e48e051e8f82758509fb240ff79f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1552e48e051e8f82758509fb240ff79f, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1552e48e051e8f82758509fb240ff79f,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_1552e48e051e8f82758509fb240ff79f == cache_frame_1552e48e051e8f82758509fb240ff79f) {
        Py_DECREF(frame_1552e48e051e8f82758509fb240ff79f);
    }
    cache_frame_1552e48e051e8f82758509fb240ff79f = NULL;

    assertFrameObject(frame_1552e48e051e8f82758509fb240ff79f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_4_close);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_requests$adapters$$$function_5___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_pool_connections = python_pars[1];
    PyObject *par_pool_maxsize = python_pars[2];
    PyObject *par_max_retries = python_pars[3];
    PyObject *par_pool_block = python_pars[4];
    struct Nuitka_FrameObject *frame_6a7ec43538efc4d1be3d504cb3ab032e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6a7ec43538efc4d1be3d504cb3ab032e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_6a7ec43538efc4d1be3d504cb3ab032e, codeobj_6a7ec43538efc4d1be3d504cb3ab032e, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_6a7ec43538efc4d1be3d504cb3ab032e = cache_frame_6a7ec43538efc4d1be3d504cb3ab032e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6a7ec43538efc4d1be3d504cb3ab032e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6a7ec43538efc4d1be3d504cb3ab032e) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_max_retries);
        tmp_compexpr_left_1 = par_max_retries;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_RETRIES);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_RETRIES);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19551 ], 37, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 116;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_Retry);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 19588 ], 27, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 117;
                type_description_1 = "oooooN";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            tmp_args_name_1 = const_tuple_int_0_tuple;
            tmp_kw_name_1 = PyDict_Copy(const_dict_96e45a30326f2854cb930a7737e3b26d);
            frame_6a7ec43538efc4d1be3d504cb3ab032e->m_frame.f_lineno = 117;
            tmp_assattr_name_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
            Py_DECREF(tmp_kw_name_1);
            if (tmp_assattr_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_1 = "oooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_max_retries, tmp_assattr_name_1);
            Py_DECREF(tmp_assattr_name_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_1 = "oooooN";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_assattr_target_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_Retry);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 19588 ], 27, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 119;
                type_description_1 = "oooooN";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_3;
            CHECK_OBJECT(par_max_retries);
            tmp_args_element_name_1 = par_max_retries;
            frame_6a7ec43538efc4d1be3d504cb3ab032e->m_frame.f_lineno = 119;
            {
                PyObject *call_args[] = {tmp_args_element_name_1};
                tmp_assattr_name_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_from_int, call_args);
            }

            if (tmp_assattr_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_1 = "oooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_max_retries, tmp_assattr_name_2);
            Py_DECREF(tmp_assattr_name_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_1 = "oooooN";
                goto frame_exception_exit_1;
            }
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = PyDict_New();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_config, tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = PyDict_New();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain_proxy_manager, tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_HTTPAdapter);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPAdapter);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19615 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 123;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_4;
        CHECK_OBJECT(par_self);
        tmp_object_name_1 = par_self;
        tmp_called_instance_2 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        frame_6a7ec43538efc4d1be3d504cb3ab032e->m_frame.f_lineno = 123;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain___init__);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_pool_connections);
        tmp_assattr_name_5 = par_pool_connections;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain__pool_connections, tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_pool_maxsize);
        tmp_assattr_name_6 = par_pool_maxsize;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain__pool_maxsize, tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_pool_block);
        tmp_assattr_name_7 = par_pool_block;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, const_str_plain__pool_block, tmp_assattr_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_init_poolmanager);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_pool_connections);
        tmp_tuple_element_1 = par_pool_connections;
        tmp_args_name_2 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_pool_maxsize);
        tmp_tuple_element_1 = par_pool_maxsize;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_1);
        tmp_dict_key_1 = const_str_plain_block;
        CHECK_OBJECT(par_pool_block);
        tmp_dict_value_1 = par_pool_block;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_6a7ec43538efc4d1be3d504cb3ab032e->m_frame.f_lineno = 129;
        tmp_call_result_2 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6a7ec43538efc4d1be3d504cb3ab032e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6a7ec43538efc4d1be3d504cb3ab032e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6a7ec43538efc4d1be3d504cb3ab032e, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_6a7ec43538efc4d1be3d504cb3ab032e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6a7ec43538efc4d1be3d504cb3ab032e, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6a7ec43538efc4d1be3d504cb3ab032e,
        type_description_1,
        par_self,
        par_pool_connections,
        par_pool_maxsize,
        par_max_retries,
        par_pool_block,
        NULL
    );


    // Release cached frame.
    if (frame_6a7ec43538efc4d1be3d504cb3ab032e == cache_frame_6a7ec43538efc4d1be3d504cb3ab032e) {
        Py_DECREF(frame_6a7ec43538efc4d1be3d504cb3ab032e);
    }
    cache_frame_6a7ec43538efc4d1be3d504cb3ab032e = NULL;

    assertFrameObject(frame_6a7ec43538efc4d1be3d504cb3ab032e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_5___init__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_pool_connections);
    Py_DECREF(par_pool_connections);
    CHECK_OBJECT(par_pool_maxsize);
    Py_DECREF(par_pool_maxsize);
    CHECK_OBJECT(par_max_retries);
    Py_DECREF(par_max_retries);
    CHECK_OBJECT(par_pool_block);
    Py_DECREF(par_pool_block);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_pool_connections);
    Py_DECREF(par_pool_connections);
    CHECK_OBJECT(par_pool_maxsize);
    Py_DECREF(par_pool_maxsize);
    CHECK_OBJECT(par_max_retries);
    Py_DECREF(par_max_retries);
    CHECK_OBJECT(par_pool_block);
    Py_DECREF(par_pool_block);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$adapters$$$function_6___getstate__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *outline_0_var_attr = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_341b696faa8057142203cd4044e2336a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_cc041afb620f28dd8c3d3a69a884b994_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_cc041afb620f28dd8c3d3a69a884b994_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_341b696faa8057142203cd4044e2336a = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_341b696faa8057142203cd4044e2336a, codeobj_341b696faa8057142203cd4044e2336a, module_requests$adapters, sizeof(void *));
    frame_341b696faa8057142203cd4044e2336a = cache_frame_341b696faa8057142203cd4044e2336a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_341b696faa8057142203cd4044e2336a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_341b696faa8057142203cd4044e2336a) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain___attrs__);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        assert(tmp_dictcontraction_1__$0 == NULL);
        tmp_dictcontraction_1__$0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyDict_New();
        assert(tmp_dictcontraction_1__contraction == NULL);
        tmp_dictcontraction_1__contraction = tmp_assign_source_2;
    }
    MAKE_OR_REUSE_FRAME(cache_frame_cc041afb620f28dd8c3d3a69a884b994_2, codeobj_cc041afb620f28dd8c3d3a69a884b994, module_requests$adapters, sizeof(void *)+sizeof(void *));
    frame_cc041afb620f28dd8c3d3a69a884b994_2 = cache_frame_cc041afb620f28dd8c3d3a69a884b994_2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cc041afb620f28dd8c3d3a69a884b994_2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cc041afb620f28dd8c3d3a69a884b994_2) == 2); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        tmp_next_source_1 = tmp_dictcontraction_1__$0;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "oo";
                exception_lineno = 132;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_dictcontraction_1__iter_value_0;
            tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
        tmp_assign_source_4 = tmp_dictcontraction_1__iter_value_0;
        {
            PyObject *old = outline_0_var_attr;
            outline_0_var_attr = tmp_assign_source_4;
            Py_INCREF(outline_0_var_attr);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(par_self);
        tmp_getattr_target_1 = par_self;
        CHECK_OBJECT(outline_0_var_attr);
        tmp_getattr_attr_1 = outline_0_var_attr;
        tmp_getattr_default_1 = Py_None;
        tmp_dictset_value = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_dictset_dict = tmp_dictcontraction_1__contraction;
        CHECK_OBJECT(outline_0_var_attr);
        tmp_dictset_key = outline_0_var_attr;
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 132;
        type_description_2 = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_dictcontraction_1__contraction);
    tmp_return_value = tmp_dictcontraction_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_6___getstate__);
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT((PyObject *)tmp_dictcontraction_1__$0);
    Py_DECREF(tmp_dictcontraction_1__$0);
    tmp_dictcontraction_1__$0 = NULL;

    CHECK_OBJECT((PyObject *)tmp_dictcontraction_1__contraction);
    Py_DECREF(tmp_dictcontraction_1__contraction);
    tmp_dictcontraction_1__contraction = NULL;

    Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
    tmp_dictcontraction_1__iter_value_0 = NULL;

    goto frame_return_exit_2;
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

    CHECK_OBJECT((PyObject *)tmp_dictcontraction_1__$0);
    Py_DECREF(tmp_dictcontraction_1__$0);
    tmp_dictcontraction_1__$0 = NULL;

    CHECK_OBJECT((PyObject *)tmp_dictcontraction_1__contraction);
    Py_DECREF(tmp_dictcontraction_1__contraction);
    tmp_dictcontraction_1__contraction = NULL;

    Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
    tmp_dictcontraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cc041afb620f28dd8c3d3a69a884b994_2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_cc041afb620f28dd8c3d3a69a884b994_2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cc041afb620f28dd8c3d3a69a884b994_2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cc041afb620f28dd8c3d3a69a884b994_2, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_cc041afb620f28dd8c3d3a69a884b994_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cc041afb620f28dd8c3d3a69a884b994_2, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cc041afb620f28dd8c3d3a69a884b994_2,
        type_description_2,
        outline_0_var_attr,
        par_self
    );


    // Release cached frame.
    if (frame_cc041afb620f28dd8c3d3a69a884b994_2 == cache_frame_cc041afb620f28dd8c3d3a69a884b994_2) {
        Py_DECREF(frame_cc041afb620f28dd8c3d3a69a884b994_2);
    }
    cache_frame_cc041afb620f28dd8c3d3a69a884b994_2 = NULL;

    assertFrameObject(frame_cc041afb620f28dd8c3d3a69a884b994_2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "o";
    goto try_except_handler_1;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_6___getstate__);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(outline_0_var_attr);
    outline_0_var_attr = NULL;

    goto outline_result_1;
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

    Py_XDECREF(outline_0_var_attr);
    outline_0_var_attr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_6___getstate__);
    return NULL;
    outline_exception_1:;
    exception_lineno = 132;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_341b696faa8057142203cd4044e2336a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_341b696faa8057142203cd4044e2336a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_341b696faa8057142203cd4044e2336a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_341b696faa8057142203cd4044e2336a, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_341b696faa8057142203cd4044e2336a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_341b696faa8057142203cd4044e2336a, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_341b696faa8057142203cd4044e2336a,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_341b696faa8057142203cd4044e2336a == cache_frame_341b696faa8057142203cd4044e2336a) {
        Py_DECREF(frame_341b696faa8057142203cd4044e2336a);
    }
    cache_frame_341b696faa8057142203cd4044e2336a = NULL;

    assertFrameObject(frame_341b696faa8057142203cd4044e2336a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_2:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_6___getstate__);
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


static PyObject *impl_requests$adapters$$$function_7___setstate__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_state = python_pars[1];
    PyObject *var_attr = NULL;
    PyObject *var_value = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_2f6aedf88c4d84fce66e7b17625fea5d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
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
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2f6aedf88c4d84fce66e7b17625fea5d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_2f6aedf88c4d84fce66e7b17625fea5d, codeobj_2f6aedf88c4d84fce66e7b17625fea5d, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_2f6aedf88c4d84fce66e7b17625fea5d = cache_frame_2f6aedf88c4d84fce66e7b17625fea5d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2f6aedf88c4d84fce66e7b17625fea5d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2f6aedf88c4d84fce66e7b17625fea5d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = PyDict_New();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_proxy_manager, tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = PyDict_New();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_config, tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_state);
        tmp_called_instance_1 = par_state;
        frame_2f6aedf88c4d84fce66e7b17625fea5d->m_frame.f_lineno = 140;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_items);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 140;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 140;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 140;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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

                    type_description_1 = "oooo";
                    exception_lineno = 140;
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

            type_description_1 = "oooo";
            exception_lineno = 140;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_attr;
            var_attr = tmp_assign_source_6;
            Py_INCREF(var_attr);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_7;
            Py_INCREF(var_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_setattr_target_1;
        PyObject *tmp_setattr_attr_1;
        PyObject *tmp_setattr_value_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_self);
        tmp_setattr_target_1 = par_self;
        CHECK_OBJECT(var_attr);
        tmp_setattr_attr_1 = var_attr;
        CHECK_OBJECT(var_value);
        tmp_setattr_value_1 = var_value;
        tmp_capi_result_1 = BUILTIN_SETATTR(tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 140;
        type_description_1 = "oooo";
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
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_init_poolmanager);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__pool_connections);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 143;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__pool_maxsize);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_name_1);

            exception_lineno = 143;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_dict_key_1 = const_str_plain_block;
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__pool_block);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_name_1);

            exception_lineno = 144;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_2f6aedf88c4d84fce66e7b17625fea5d->m_frame.f_lineno = 143;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2f6aedf88c4d84fce66e7b17625fea5d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2f6aedf88c4d84fce66e7b17625fea5d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2f6aedf88c4d84fce66e7b17625fea5d, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_2f6aedf88c4d84fce66e7b17625fea5d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2f6aedf88c4d84fce66e7b17625fea5d, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2f6aedf88c4d84fce66e7b17625fea5d,
        type_description_1,
        par_self,
        par_state,
        var_attr,
        var_value
    );


    // Release cached frame.
    if (frame_2f6aedf88c4d84fce66e7b17625fea5d == cache_frame_2f6aedf88c4d84fce66e7b17625fea5d) {
        Py_DECREF(frame_2f6aedf88c4d84fce66e7b17625fea5d);
    }
    cache_frame_2f6aedf88c4d84fce66e7b17625fea5d = NULL;

    assertFrameObject(frame_2f6aedf88c4d84fce66e7b17625fea5d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_7___setstate__);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_attr);
    var_attr = NULL;

    Py_XDECREF(var_value);
    var_value = NULL;

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

    Py_XDECREF(var_attr);
    var_attr = NULL;

    Py_XDECREF(var_value);
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_7___setstate__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_state);
    Py_DECREF(par_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$adapters$$$function_8_init_poolmanager(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connections = python_pars[1];
    PyObject *par_maxsize = python_pars[2];
    PyObject *par_block = python_pars[3];
    PyObject *par_pool_kwargs = python_pars[4];
    struct Nuitka_FrameObject *frame_34464d4b9c70a2a62e86833648accb3d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_34464d4b9c70a2a62e86833648accb3d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_34464d4b9c70a2a62e86833648accb3d, codeobj_34464d4b9c70a2a62e86833648accb3d, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_34464d4b9c70a2a62e86833648accb3d = cache_frame_34464d4b9c70a2a62e86833648accb3d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_34464d4b9c70a2a62e86833648accb3d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_34464d4b9c70a2a62e86833648accb3d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_connections);
        tmp_assattr_name_1 = par_connections;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__pool_connections, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_maxsize);
        tmp_assattr_name_2 = par_maxsize;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__pool_maxsize, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_block);
        tmp_assattr_name_3 = par_block;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain__pool_block, tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_assattr_target_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_PoolManager);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolManager);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19648 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 163;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        tmp_dict_key_1 = const_str_plain_num_pools;
        CHECK_OBJECT(par_connections);
        tmp_dict_value_1 = par_connections;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_maxsize;
        CHECK_OBJECT(par_maxsize);
        tmp_dict_value_2 = par_maxsize;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain_block;
        CHECK_OBJECT(par_block);
        tmp_dict_value_3 = par_block;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_strict;
        tmp_dict_value_4 = Py_True;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_pool_kwargs);
        tmp_dircall_arg3_1 = par_pool_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assattr_name_4 = impl___internal__$$$function_9_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assattr_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain_poolmanager, tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_34464d4b9c70a2a62e86833648accb3d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_34464d4b9c70a2a62e86833648accb3d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_34464d4b9c70a2a62e86833648accb3d, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_34464d4b9c70a2a62e86833648accb3d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_34464d4b9c70a2a62e86833648accb3d, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_34464d4b9c70a2a62e86833648accb3d,
        type_description_1,
        par_self,
        par_connections,
        par_maxsize,
        par_block,
        par_pool_kwargs
    );


    // Release cached frame.
    if (frame_34464d4b9c70a2a62e86833648accb3d == cache_frame_34464d4b9c70a2a62e86833648accb3d) {
        Py_DECREF(frame_34464d4b9c70a2a62e86833648accb3d);
    }
    cache_frame_34464d4b9c70a2a62e86833648accb3d = NULL;

    assertFrameObject(frame_34464d4b9c70a2a62e86833648accb3d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_8_init_poolmanager);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connections);
    Py_DECREF(par_connections);
    CHECK_OBJECT(par_maxsize);
    Py_DECREF(par_maxsize);
    CHECK_OBJECT(par_block);
    Py_DECREF(par_block);
    CHECK_OBJECT(par_pool_kwargs);
    Py_DECREF(par_pool_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connections);
    Py_DECREF(par_connections);
    CHECK_OBJECT(par_maxsize);
    Py_DECREF(par_maxsize);
    CHECK_OBJECT(par_block);
    Py_DECREF(par_block);
    CHECK_OBJECT(par_pool_kwargs);
    Py_DECREF(par_pool_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$adapters$$$function_9_proxy_manager_for(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_proxy = python_pars[1];
    PyObject *par_proxy_kwargs = python_pars[2];
    PyObject *var_manager = NULL;
    PyObject *var_username = NULL;
    PyObject *var_password = NULL;
    PyObject *var_proxy_headers = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_57a511cd873dc3dc624e3165e0e38e48;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_57a511cd873dc3dc624e3165e0e38e48 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_57a511cd873dc3dc624e3165e0e38e48, codeobj_57a511cd873dc3dc624e3165e0e38e48, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_57a511cd873dc3dc624e3165e0e38e48 = cache_frame_57a511cd873dc3dc624e3165e0e38e48;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_57a511cd873dc3dc624e3165e0e38e48);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_57a511cd873dc3dc624e3165e0e38e48) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_proxy);
        tmp_compexpr_left_1 = par_proxy;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_proxy_manager);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT(par_self);
            tmp_source_name_2 = par_self;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_proxy_manager);
            if (tmp_subscribed_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_proxy);
            tmp_subscript_name_1 = par_proxy;
            tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
            Py_DECREF(tmp_subscribed_name_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_manager == NULL);
            var_manager = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_1;
            int tmp_truth_name_1;
            CHECK_OBJECT(par_proxy);
            tmp_called_instance_2 = par_proxy;
            frame_57a511cd873dc3dc624e3165e0e38e48->m_frame.f_lineno = 180;
            tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_lower);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_57a511cd873dc3dc624e3165e0e38e48->m_frame.f_lineno = 180;
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM(const_tuple_str_plain_socks_tuple, 0));

            Py_DECREF(tmp_called_instance_1);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
            if (tmp_truth_name_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_1);

                exception_lineno = 180;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF(tmp_call_result_1);
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
            branch_yes_2:;
            // Tried code:
            {
                PyObject *tmp_assign_source_2;
                PyObject *tmp_iter_arg_1;
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_args_element_name_1;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_get_auth_from_url);

                if (unlikely(tmp_mvar_value_1 == NULL)) {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_get_auth_from_url);
                }

                if (tmp_mvar_value_1 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 19681 ], 39, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 181;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_2;
                }

                tmp_called_name_1 = tmp_mvar_value_1;
                CHECK_OBJECT(par_proxy);
                tmp_args_element_name_1 = par_proxy;
                frame_57a511cd873dc3dc624e3165e0e38e48->m_frame.f_lineno = 181;
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
                if (tmp_iter_arg_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 181;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
                Py_DECREF(tmp_iter_arg_1);
                if (tmp_assign_source_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 181;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_2;
                }
                assert(tmp_tuple_unpack_1__source_iter == NULL);
                tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_unpack_1;
                CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
                tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
                tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
                if (tmp_assign_source_3 == NULL) {
                    if (!ERROR_OCCURRED()) {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF(exception_type);
                        exception_value = NULL;
                        exception_tb = NULL;
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    }


                    type_description_1 = "ooooooo";
                    exception_lineno = 181;
                    goto try_except_handler_3;
                }
                assert(tmp_tuple_unpack_1__element_1 == NULL);
                tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            }
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_unpack_2;
                CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
                tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
                tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
                if (tmp_assign_source_4 == NULL) {
                    if (!ERROR_OCCURRED()) {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF(exception_type);
                        exception_value = NULL;
                        exception_tb = NULL;
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    }


                    type_description_1 = "ooooooo";
                    exception_lineno = 181;
                    goto try_except_handler_3;
                }
                assert(tmp_tuple_unpack_1__element_2 == NULL);
                tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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

                            type_description_1 = "ooooooo";
                            exception_lineno = 181;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 181;
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
                PyObject *tmp_assign_source_5;
                CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
                tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
                assert(var_username == NULL);
                Py_INCREF(tmp_assign_source_5);
                var_username = tmp_assign_source_5;
            }
            Py_XDECREF(tmp_tuple_unpack_1__element_1);
            tmp_tuple_unpack_1__element_1 = NULL;

            {
                PyObject *tmp_assign_source_6;
                CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
                tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
                assert(var_password == NULL);
                Py_INCREF(tmp_assign_source_6);
                var_password = tmp_assign_source_6;
            }
            Py_XDECREF(tmp_tuple_unpack_1__element_2);
            tmp_tuple_unpack_1__element_2 = NULL;

            // Tried code:
            {
                PyObject *tmp_assign_source_7;
                PyObject *tmp_dircall_arg1_1;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_dircall_arg2_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_dircall_arg3_1;
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                PyObject *tmp_dict_key_3;
                PyObject *tmp_dict_value_3;
                PyObject *tmp_source_name_3;
                PyObject *tmp_dict_key_4;
                PyObject *tmp_dict_value_4;
                PyObject *tmp_source_name_4;
                PyObject *tmp_dict_key_5;
                PyObject *tmp_dict_value_5;
                PyObject *tmp_source_name_5;
                PyObject *tmp_dircall_arg4_1;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager);

                if (unlikely(tmp_mvar_value_2 == NULL)) {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager);
                }

                if (tmp_mvar_value_2 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 19720 ], 39, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 182;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }

                tmp_dircall_arg1_1 = tmp_mvar_value_2;
                CHECK_OBJECT(par_proxy);
                tmp_tuple_element_1 = par_proxy;
                tmp_dircall_arg2_1 = PyTuple_New(1);
                Py_INCREF(tmp_tuple_element_1);
                PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
                tmp_dict_key_1 = const_str_plain_username;
                CHECK_OBJECT(var_username);
                tmp_dict_value_1 = var_username;
                tmp_dircall_arg3_1 = _PyDict_NewPresized( 5 );
                tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = const_str_plain_password;
                CHECK_OBJECT(var_password);
                tmp_dict_value_2 = var_password;
                tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = const_str_plain_num_pools;
                CHECK_OBJECT(par_self);
                tmp_source_name_3 = par_self;
                tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__pool_connections);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dircall_arg2_1);
                    Py_DECREF(tmp_dircall_arg3_1);

                    exception_lineno = 186;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = const_str_plain_maxsize;
                CHECK_OBJECT(par_self);
                tmp_source_name_4 = par_self;
                tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__pool_maxsize);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dircall_arg2_1);
                    Py_DECREF(tmp_dircall_arg3_1);

                    exception_lineno = 187;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = const_str_plain_block;
                CHECK_OBJECT(par_self);
                tmp_source_name_5 = par_self;
                tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain__pool_block);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dircall_arg2_1);
                    Py_DECREF(tmp_dircall_arg3_1);

                    exception_lineno = 188;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                CHECK_OBJECT(par_proxy_kwargs);
                tmp_dircall_arg4_1 = par_proxy_kwargs;
                Py_INCREF(tmp_dircall_arg1_1);
                Py_INCREF(tmp_dircall_arg4_1);

                {
                    PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
                    tmp_assign_source_7 = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict(dir_call_args);
                }
                if (tmp_assign_source_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 182;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                assert(tmp_assign_unpack_1__assign_source == NULL);
                tmp_assign_unpack_1__assign_source = tmp_assign_source_7;
            }
            {
                PyObject *tmp_assign_source_8;
                CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
                tmp_assign_source_8 = tmp_assign_unpack_1__assign_source;
                assert(var_manager == NULL);
                Py_INCREF(tmp_assign_source_8);
                var_manager = tmp_assign_source_8;
            }
            {
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_source_name_6;
                PyObject *tmp_ass_subscript_1;
                CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
                tmp_ass_subvalue_1 = tmp_assign_unpack_1__assign_source;
                CHECK_OBJECT(par_self);
                tmp_source_name_6 = par_self;
                tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_proxy_manager);
                if (tmp_ass_subscribed_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 182;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT(par_proxy);
                tmp_ass_subscript_1 = par_proxy;
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
                Py_DECREF(tmp_ass_subscribed_1);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 182;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
            }
            goto try_end_3;
            // Exception handler code:
            try_except_handler_4:;
            exception_keeper_type_3 = exception_type;
            exception_keeper_value_3 = exception_value;
            exception_keeper_tb_3 = exception_tb;
            exception_keeper_lineno_3 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF(tmp_assign_unpack_1__assign_source);
            tmp_assign_unpack_1__assign_source = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto frame_exception_exit_1;
            // End of try:
            try_end_3:;
            CHECK_OBJECT((PyObject *)tmp_assign_unpack_1__assign_source);
            Py_DECREF(tmp_assign_unpack_1__assign_source);
            tmp_assign_unpack_1__assign_source = NULL;

            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_called_instance_3;
                PyObject *tmp_args_element_name_2;
                CHECK_OBJECT(par_self);
                tmp_called_instance_3 = par_self;
                CHECK_OBJECT(par_proxy);
                tmp_args_element_name_2 = par_proxy;
                frame_57a511cd873dc3dc624e3165e0e38e48->m_frame.f_lineno = 192;
                {
                    PyObject *call_args[] = {tmp_args_element_name_2};
                    tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_proxy_headers, call_args);
                }

                if (tmp_assign_source_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 192;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                assert(var_proxy_headers == NULL);
                var_proxy_headers = tmp_assign_source_9;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_dircall_arg1_2;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_dircall_arg2_2;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_dircall_arg3_2;
                PyObject *tmp_dict_key_6;
                PyObject *tmp_dict_value_6;
                PyObject *tmp_dict_key_7;
                PyObject *tmp_dict_value_7;
                PyObject *tmp_source_name_7;
                PyObject *tmp_dict_key_8;
                PyObject *tmp_dict_value_8;
                PyObject *tmp_source_name_8;
                PyObject *tmp_dict_key_9;
                PyObject *tmp_dict_value_9;
                PyObject *tmp_source_name_9;
                PyObject *tmp_dircall_arg4_2;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_proxy_from_url);

                if (unlikely(tmp_mvar_value_3 == NULL)) {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_proxy_from_url);
                }

                if (tmp_mvar_value_3 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 19759 ], 36, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 193;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }

                tmp_dircall_arg1_2 = tmp_mvar_value_3;
                CHECK_OBJECT(par_proxy);
                tmp_tuple_element_2 = par_proxy;
                tmp_dircall_arg2_2 = PyTuple_New(1);
                Py_INCREF(tmp_tuple_element_2);
                PyTuple_SET_ITEM(tmp_dircall_arg2_2, 0, tmp_tuple_element_2);
                tmp_dict_key_6 = const_str_plain_proxy_headers;
                CHECK_OBJECT(var_proxy_headers);
                tmp_dict_value_6 = var_proxy_headers;
                tmp_dircall_arg3_2 = _PyDict_NewPresized( 4 );
                tmp_res = PyDict_SetItem(tmp_dircall_arg3_2, tmp_dict_key_6, tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = const_str_plain_num_pools;
                CHECK_OBJECT(par_self);
                tmp_source_name_7 = par_self;
                tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain__pool_connections);
                if (tmp_dict_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dircall_arg2_2);
                    Py_DECREF(tmp_dircall_arg3_2);

                    exception_lineno = 196;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
                tmp_res = PyDict_SetItem(tmp_dircall_arg3_2, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = const_str_plain_maxsize;
                CHECK_OBJECT(par_self);
                tmp_source_name_8 = par_self;
                tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain__pool_maxsize);
                if (tmp_dict_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dircall_arg2_2);
                    Py_DECREF(tmp_dircall_arg3_2);

                    exception_lineno = 197;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
                tmp_res = PyDict_SetItem(tmp_dircall_arg3_2, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = const_str_plain_block;
                CHECK_OBJECT(par_self);
                tmp_source_name_9 = par_self;
                tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain__pool_block);
                if (tmp_dict_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_dircall_arg2_2);
                    Py_DECREF(tmp_dircall_arg3_2);

                    exception_lineno = 198;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
                tmp_res = PyDict_SetItem(tmp_dircall_arg3_2, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                CHECK_OBJECT(par_proxy_kwargs);
                tmp_dircall_arg4_2 = par_proxy_kwargs;
                Py_INCREF(tmp_dircall_arg1_2);
                Py_INCREF(tmp_dircall_arg4_2);

                {
                    PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
                    tmp_assign_source_10 = impl___internal__$$$function_8_complex_call_helper_pos_keywords_star_dict(dir_call_args);
                }
                if (tmp_assign_source_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 193;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
                assert(tmp_assign_unpack_2__assign_source == NULL);
                tmp_assign_unpack_2__assign_source = tmp_assign_source_10;
            }
            {
                PyObject *tmp_assign_source_11;
                CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
                tmp_assign_source_11 = tmp_assign_unpack_2__assign_source;
                assert(var_manager == NULL);
                Py_INCREF(tmp_assign_source_11);
                var_manager = tmp_assign_source_11;
            }
            {
                PyObject *tmp_ass_subvalue_2;
                PyObject *tmp_ass_subscribed_2;
                PyObject *tmp_source_name_10;
                PyObject *tmp_ass_subscript_2;
                CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
                tmp_ass_subvalue_2 = tmp_assign_unpack_2__assign_source;
                CHECK_OBJECT(par_self);
                tmp_source_name_10 = par_self;
                tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_proxy_manager);
                if (tmp_ass_subscribed_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 193;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
                CHECK_OBJECT(par_proxy);
                tmp_ass_subscript_2 = par_proxy;
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
                Py_DECREF(tmp_ass_subscribed_2);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 193;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
            }
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

            Py_XDECREF(tmp_assign_unpack_2__assign_source);
            tmp_assign_unpack_2__assign_source = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto frame_exception_exit_1;
            // End of try:
            try_end_4:;
            CHECK_OBJECT((PyObject *)tmp_assign_unpack_2__assign_source);
            Py_DECREF(tmp_assign_unpack_2__assign_source);
            tmp_assign_unpack_2__assign_source = NULL;

            branch_end_2:;
        }
        branch_end_1:;
    }
    if (var_manager == NULL) {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF(exception_type);
        exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "manager");
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 201;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_manager;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_57a511cd873dc3dc624e3165e0e38e48);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_57a511cd873dc3dc624e3165e0e38e48);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_57a511cd873dc3dc624e3165e0e38e48);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_57a511cd873dc3dc624e3165e0e38e48, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_57a511cd873dc3dc624e3165e0e38e48->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_57a511cd873dc3dc624e3165e0e38e48, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_57a511cd873dc3dc624e3165e0e38e48,
        type_description_1,
        par_self,
        par_proxy,
        par_proxy_kwargs,
        var_manager,
        var_username,
        var_password,
        var_proxy_headers
    );


    // Release cached frame.
    if (frame_57a511cd873dc3dc624e3165e0e38e48 == cache_frame_57a511cd873dc3dc624e3165e0e38e48) {
        Py_DECREF(frame_57a511cd873dc3dc624e3165e0e38e48);
    }
    cache_frame_57a511cd873dc3dc624e3165e0e38e48 = NULL;

    assertFrameObject(frame_57a511cd873dc3dc624e3165e0e38e48);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_9_proxy_manager_for);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_manager);
    var_manager = NULL;

    Py_XDECREF(var_username);
    var_username = NULL;

    Py_XDECREF(var_password);
    var_password = NULL;

    Py_XDECREF(var_proxy_headers);
    var_proxy_headers = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_manager);
    var_manager = NULL;

    Py_XDECREF(var_username);
    var_username = NULL;

    Py_XDECREF(var_password);
    var_password = NULL;

    Py_XDECREF(var_proxy_headers);
    var_proxy_headers = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_9_proxy_manager_for);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_proxy);
    Py_DECREF(par_proxy);
    CHECK_OBJECT(par_proxy_kwargs);
    Py_DECREF(par_proxy_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_proxy);
    Py_DECREF(par_proxy);
    CHECK_OBJECT(par_proxy_kwargs);
    Py_DECREF(par_proxy_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$adapters$$$function_10_cert_verify(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_conn = python_pars[1];
    PyObject *par_url = python_pars[2];
    PyObject *par_verify = python_pars[3];
    PyObject *par_cert = python_pars[4];
    PyObject *var_cert_loc = NULL;
    struct Nuitka_FrameObject *frame_76eaafc44bfc9fefc19a2259f9939086;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_76eaafc44bfc9fefc19a2259f9939086 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_76eaafc44bfc9fefc19a2259f9939086, codeobj_76eaafc44bfc9fefc19a2259f9939086, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_76eaafc44bfc9fefc19a2259f9939086 = cache_frame_76eaafc44bfc9fefc19a2259f9939086;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_76eaafc44bfc9fefc19a2259f9939086);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_76eaafc44bfc9fefc19a2259f9939086) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_url);
        tmp_called_instance_2 = par_url;
        frame_76eaafc44bfc9fefc19a2259f9939086->m_frame.f_lineno = 215;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_lower);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_76eaafc44bfc9fefc19a2259f9939086->m_frame.f_lineno = 215;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM(const_tuple_str_plain_https_tuple, 0));

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 215;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_verify);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_verify);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_1;
            tmp_assign_source_1 = Py_None;
            assert(var_cert_loc == NULL);
            Py_INCREF(tmp_assign_source_1);
            var_cert_loc = tmp_assign_source_1;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(par_verify);
            tmp_compexpr_left_1 = par_verify;
            tmp_compexpr_right_1 = Py_True;
            tmp_condition_result_2 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                PyObject *tmp_assign_source_2;
                CHECK_OBJECT(par_verify);
                tmp_assign_source_2 = par_verify;
                {
                    PyObject *old = var_cert_loc;
                    assert(old != NULL);
                    var_cert_loc = tmp_assign_source_2;
                    Py_INCREF(var_cert_loc);
                    Py_DECREF(old);
                }

            }
            branch_no_2:;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            CHECK_OBJECT(var_cert_loc);
            tmp_operand_name_1 = var_cert_loc;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_mvar_value_2;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_extract_zipped_paths);

                if (unlikely(tmp_mvar_value_1 == NULL)) {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_extract_zipped_paths);
                }

                if (tmp_mvar_value_1 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 19795 ], 42, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 224;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_1 = tmp_mvar_value_1;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_CA_BUNDLE_PATH);

                if (unlikely(tmp_mvar_value_2 == NULL)) {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_CA_BUNDLE_PATH);
                }

                if (tmp_mvar_value_2 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 19837 ], 44, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 224;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_1 = tmp_mvar_value_2;
                frame_76eaafc44bfc9fefc19a2259f9939086->m_frame.f_lineno = 224;
                tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
                if (tmp_assign_source_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 224;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_cert_loc;
                    assert(old != NULL);
                    var_cert_loc = tmp_assign_source_3;
                    Py_DECREF(old);
                }

            }
            branch_no_3:;
        }
        {
            nuitka_bool tmp_condition_result_4;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            if (var_cert_loc == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "cert_loc");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 226;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_operand_name_2 = var_cert_loc;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
            if (tmp_or_left_truth_1 == 1) {
                goto or_left_1;
            } else {
                goto or_right_1;
            }
            or_right_1:;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_os);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_os);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 28 ], 24, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 226;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_source_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_path);
            if (tmp_source_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_exists);
            Py_DECREF(tmp_source_name_1);
            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            if (var_cert_loc == NULL) {
                Py_DECREF(tmp_called_name_2);
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "cert_loc");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 226;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_2 = var_cert_loc;
            frame_76eaafc44bfc9fefc19a2259f9939086->m_frame.f_lineno = 226;
            tmp_operand_name_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
            Py_DECREF(tmp_called_name_2);
            if (tmp_operand_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
            Py_DECREF(tmp_operand_name_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_4 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_condition_result_4 = tmp_or_left_value_1;
            or_end_1:;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            branch_yes_4:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_3;
                PyObject *tmp_args_element_name_3;
                tmp_source_name_3 = const_str_digest_92450e54ff68c1856b3f5b6ca477f571;
                tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_format);
                assert(!(tmp_called_name_3 == NULL));
                if (var_cert_loc == NULL) {
                    Py_DECREF(tmp_called_name_3);
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF(exception_type);
                    exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "cert_loc");
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 228;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_3 = var_cert_loc;
                frame_76eaafc44bfc9fefc19a2259f9939086->m_frame.f_lineno = 227;
                tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
                Py_DECREF(tmp_called_name_3);
                if (tmp_make_exception_arg_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 227;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                frame_76eaafc44bfc9fefc19a2259f9939086->m_frame.f_lineno = 227;
                tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_IOError, tmp_make_exception_arg_1);
                Py_DECREF(tmp_make_exception_arg_1);
                assert(!(tmp_raise_type_1 == NULL));
                exception_type = tmp_raise_type_1;
                exception_lineno = 227;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_assattr_name_1 = const_str_plain_CERT_REQUIRED;
            CHECK_OBJECT(par_conn);
            tmp_assattr_target_1 = par_conn;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_cert_reqs, tmp_assattr_name_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_4;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_os);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_os);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 28 ], 24, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 232;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_4;
            tmp_source_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_path);
            if (tmp_source_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_isdir);
            Py_DECREF(tmp_source_name_4);
            if (tmp_called_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            if (var_cert_loc == NULL) {
                Py_DECREF(tmp_called_name_4);
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "cert_loc");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 232;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_4 = var_cert_loc;
            frame_76eaafc44bfc9fefc19a2259f9939086->m_frame.f_lineno = 232;
            tmp_operand_name_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
            Py_DECREF(tmp_called_name_4);
            if (tmp_operand_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
            Py_DECREF(tmp_operand_name_4);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_assattr_target_2;
                if (var_cert_loc == NULL) {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF(exception_type);
                    exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "cert_loc");
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 233;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_assattr_name_2 = var_cert_loc;
                CHECK_OBJECT(par_conn);
                tmp_assattr_target_2 = par_conn;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_ca_certs, tmp_assattr_name_2);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 233;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_5;
            branch_no_5:;
            {
                PyObject *tmp_assattr_name_3;
                PyObject *tmp_assattr_target_3;
                if (var_cert_loc == NULL) {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF(exception_type);
                    exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "cert_loc");
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 235;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_assattr_name_3 = var_cert_loc;
                CHECK_OBJECT(par_conn);
                tmp_assattr_target_3 = par_conn;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_ca_cert_dir, tmp_assattr_name_3);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 235;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
            }
            branch_end_5:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_assattr_target_4;
            tmp_assattr_name_4 = const_str_plain_CERT_NONE;
            CHECK_OBJECT(par_conn);
            tmp_assattr_target_4 = par_conn;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain_cert_reqs, tmp_assattr_name_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_5;
            PyObject *tmp_assattr_target_5;
            tmp_assattr_name_5 = Py_None;
            CHECK_OBJECT(par_conn);
            tmp_assattr_target_5 = par_conn;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain_ca_certs, tmp_assattr_name_5);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_6;
            PyObject *tmp_assattr_target_6;
            tmp_assattr_name_6 = Py_None;
            CHECK_OBJECT(par_conn);
            tmp_assattr_target_6 = par_conn;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain_ca_cert_dir, tmp_assattr_name_6);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_cert);
        tmp_truth_name_3 = CHECK_IF_TRUE(par_cert);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_operand_name_5;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            PyObject *tmp_mvar_value_5;
            CHECK_OBJECT(par_cert);
            tmp_isinstance_inst_1 = par_cert;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_basestring);

            if (unlikely(tmp_mvar_value_5 == NULL)) {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring);
            }

            if (tmp_mvar_value_5 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 19881 ], 32, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 242;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_isinstance_cls_1 = tmp_mvar_value_5;
            tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_5 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_5);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_7 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
            branch_yes_7:;
            {
                PyObject *tmp_assattr_name_7;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                PyObject *tmp_assattr_target_7;
                CHECK_OBJECT(par_cert);
                tmp_subscribed_name_1 = par_cert;
                tmp_subscript_name_1 = const_int_0;
                tmp_assattr_name_7 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
                if (tmp_assattr_name_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 243;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_conn);
                tmp_assattr_target_7 = par_conn;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, const_str_plain_cert_file, tmp_assattr_name_7);
                Py_DECREF(tmp_assattr_name_7);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 243;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assattr_name_8;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_assattr_target_8;
                CHECK_OBJECT(par_cert);
                tmp_subscribed_name_2 = par_cert;
                tmp_subscript_name_2 = const_int_pos_1;
                tmp_assattr_name_8 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_2, tmp_subscript_name_2, 1);
                if (tmp_assattr_name_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 244;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_conn);
                tmp_assattr_target_8 = par_conn;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, const_str_plain_key_file, tmp_assattr_name_8);
                Py_DECREF(tmp_assattr_name_8);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 244;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_7;
            branch_no_7:;
            {
                PyObject *tmp_assattr_name_9;
                PyObject *tmp_assattr_target_9;
                CHECK_OBJECT(par_cert);
                tmp_assattr_name_9 = par_cert;
                CHECK_OBJECT(par_conn);
                tmp_assattr_target_9 = par_conn;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, const_str_plain_cert_file, tmp_assattr_name_9);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 246;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assattr_name_10;
                PyObject *tmp_assattr_target_10;
                tmp_assattr_name_10 = Py_None;
                CHECK_OBJECT(par_conn);
                tmp_assattr_target_10 = par_conn;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, const_str_plain_key_file, tmp_assattr_name_10);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 247;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
            }
            branch_end_7:;
        }
        {
            nuitka_bool tmp_condition_result_8;
            int tmp_and_left_truth_2;
            nuitka_bool tmp_and_left_value_2;
            nuitka_bool tmp_and_right_value_2;
            PyObject *tmp_source_name_6;
            PyObject *tmp_attribute_value_1;
            int tmp_truth_name_4;
            PyObject *tmp_operand_name_6;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_7;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT(par_conn);
            tmp_source_name_6 = par_conn;
            tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_cert_file);
            if (tmp_attribute_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_1);
            if (tmp_truth_name_4 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_attribute_value_1);

                exception_lineno = 248;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_2 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF(tmp_attribute_value_1);
            tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
            if (tmp_and_left_truth_2 == 1) {
                goto and_right_2;
            } else {
                goto and_left_2;
            }
            and_right_2:;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_os);

            if (unlikely(tmp_mvar_value_6 == NULL)) {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_os);
            }

            if (tmp_mvar_value_6 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 28 ], 24, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 248;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_6;
            tmp_source_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_path);
            if (tmp_source_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_exists);
            Py_DECREF(tmp_source_name_7);
            if (tmp_called_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_conn);
            tmp_source_name_9 = par_conn;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_cert_file);
            if (tmp_args_element_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_5);

                exception_lineno = 248;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_76eaafc44bfc9fefc19a2259f9939086->m_frame.f_lineno = 248;
            tmp_operand_name_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_5);
            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_operand_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_6);
            Py_DECREF(tmp_operand_name_6);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_8 = tmp_and_right_value_2;
            goto and_end_2;
            and_left_2:;
            tmp_condition_result_8 = tmp_and_left_value_2;
            and_end_2:;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            branch_yes_8:;
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_2;
                PyObject *tmp_called_name_6;
                PyObject *tmp_source_name_10;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_source_name_11;
                tmp_source_name_10 = const_str_digest_3e65357a65a5cf0df20a8efd5394db63;
                tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_format);
                assert(!(tmp_called_name_6 == NULL));
                CHECK_OBJECT(par_conn);
                tmp_source_name_11 = par_conn;
                tmp_args_element_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_cert_file);
                if (tmp_args_element_name_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_6);

                    exception_lineno = 250;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                frame_76eaafc44bfc9fefc19a2259f9939086->m_frame.f_lineno = 249;
                tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_6);
                Py_DECREF(tmp_called_name_6);
                Py_DECREF(tmp_args_element_name_6);
                if (tmp_make_exception_arg_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 249;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                frame_76eaafc44bfc9fefc19a2259f9939086->m_frame.f_lineno = 249;
                tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_IOError, tmp_make_exception_arg_2);
                Py_DECREF(tmp_make_exception_arg_2);
                assert(!(tmp_raise_type_2 == NULL));
                exception_type = tmp_raise_type_2;
                exception_lineno = 249;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            branch_no_8:;
        }
        {
            nuitka_bool tmp_condition_result_9;
            int tmp_and_left_truth_3;
            nuitka_bool tmp_and_left_value_3;
            nuitka_bool tmp_and_right_value_3;
            PyObject *tmp_source_name_12;
            PyObject *tmp_attribute_value_2;
            int tmp_truth_name_5;
            PyObject *tmp_operand_name_7;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_13;
            PyObject *tmp_source_name_14;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_source_name_15;
            CHECK_OBJECT(par_conn);
            tmp_source_name_12 = par_conn;
            tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_key_file);
            if (tmp_attribute_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_5 = CHECK_IF_TRUE(tmp_attribute_value_2);
            if (tmp_truth_name_5 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_attribute_value_2);

                exception_lineno = 251;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_3 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF(tmp_attribute_value_2);
            tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
            if (tmp_and_left_truth_3 == 1) {
                goto and_right_3;
            } else {
                goto and_left_3;
            }
            and_right_3:;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_os);

            if (unlikely(tmp_mvar_value_7 == NULL)) {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_os);
            }

            if (tmp_mvar_value_7 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 28 ], 24, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 251;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_14 = tmp_mvar_value_7;
            tmp_source_name_13 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_path);
            if (tmp_source_name_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_exists);
            Py_DECREF(tmp_source_name_13);
            if (tmp_called_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_conn);
            tmp_source_name_15 = par_conn;
            tmp_args_element_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_key_file);
            if (tmp_args_element_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_7);

                exception_lineno = 251;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_76eaafc44bfc9fefc19a2259f9939086->m_frame.f_lineno = 251;
            tmp_operand_name_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_7);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_args_element_name_7);
            if (tmp_operand_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_7);
            Py_DECREF(tmp_operand_name_7);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_9 = tmp_and_right_value_3;
            goto and_end_3;
            and_left_3:;
            tmp_condition_result_9 = tmp_and_left_value_3;
            and_end_3:;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
            branch_yes_9:;
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_make_exception_arg_3;
                PyObject *tmp_called_name_8;
                PyObject *tmp_source_name_16;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_source_name_17;
                tmp_source_name_16 = const_str_digest_4dd75d7a0434de0e965e971794e16108;
                tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain_format);
                assert(!(tmp_called_name_8 == NULL));
                CHECK_OBJECT(par_conn);
                tmp_source_name_17 = par_conn;
                tmp_args_element_name_8 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain_key_file);
                if (tmp_args_element_name_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_8);

                    exception_lineno = 253;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                frame_76eaafc44bfc9fefc19a2259f9939086->m_frame.f_lineno = 252;
                tmp_make_exception_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_8);
                Py_DECREF(tmp_called_name_8);
                Py_DECREF(tmp_args_element_name_8);
                if (tmp_make_exception_arg_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 252;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                frame_76eaafc44bfc9fefc19a2259f9939086->m_frame.f_lineno = 252;
                tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_IOError, tmp_make_exception_arg_3);
                Py_DECREF(tmp_make_exception_arg_3);
                assert(!(tmp_raise_type_3 == NULL));
                exception_type = tmp_raise_type_3;
                exception_lineno = 252;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            branch_no_9:;
        }
        branch_no_6:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_76eaafc44bfc9fefc19a2259f9939086);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_76eaafc44bfc9fefc19a2259f9939086);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_76eaafc44bfc9fefc19a2259f9939086, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_76eaafc44bfc9fefc19a2259f9939086->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_76eaafc44bfc9fefc19a2259f9939086, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_76eaafc44bfc9fefc19a2259f9939086,
        type_description_1,
        par_self,
        par_conn,
        par_url,
        par_verify,
        par_cert,
        var_cert_loc
    );


    // Release cached frame.
    if (frame_76eaafc44bfc9fefc19a2259f9939086 == cache_frame_76eaafc44bfc9fefc19a2259f9939086) {
        Py_DECREF(frame_76eaafc44bfc9fefc19a2259f9939086);
    }
    cache_frame_76eaafc44bfc9fefc19a2259f9939086 = NULL;

    assertFrameObject(frame_76eaafc44bfc9fefc19a2259f9939086);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_10_cert_verify);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_cert_loc);
    var_cert_loc = NULL;

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

    Py_XDECREF(var_cert_loc);
    var_cert_loc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_10_cert_verify);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_conn);
    Py_DECREF(par_conn);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_verify);
    Py_DECREF(par_verify);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_conn);
    Py_DECREF(par_conn);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_verify);
    Py_DECREF(par_verify);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$adapters$$$function_11_build_response(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_req = python_pars[1];
    PyObject *par_resp = python_pars[2];
    PyObject *var_response = NULL;
    struct Nuitka_FrameObject *frame_70f9ef5b75f78f241a57af92f5077606;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_70f9ef5b75f78f241a57af92f5077606 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_70f9ef5b75f78f241a57af92f5077606, codeobj_70f9ef5b75f78f241a57af92f5077606, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_70f9ef5b75f78f241a57af92f5077606 = cache_frame_70f9ef5b75f78f241a57af92f5077606;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_70f9ef5b75f78f241a57af92f5077606);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_70f9ef5b75f78f241a57af92f5077606) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_Response);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Response);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19913 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 265;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_70f9ef5b75f78f241a57af92f5077606->m_frame.f_lineno = 265;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_response == NULL);
        var_response = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_resp);
        tmp_getattr_target_1 = par_resp;
        tmp_getattr_attr_1 = const_str_plain_status;
        tmp_getattr_default_1 = Py_None;
        tmp_assattr_name_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_response);
        tmp_assattr_target_1 = var_response;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_status_code, tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        PyObject *tmp_assattr_target_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_CaseInsensitiveDict);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CaseInsensitiveDict);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19943 ], 41, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 271;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT(par_resp);
        tmp_getattr_target_2 = par_resp;
        tmp_getattr_attr_2 = const_str_plain_headers;
        tmp_getattr_default_2 = PyDict_New();
        tmp_args_element_name_1 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        Py_DECREF(tmp_getattr_default_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_70f9ef5b75f78f241a57af92f5077606->m_frame.f_lineno = 271;
        tmp_assattr_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_response);
        tmp_assattr_target_2 = var_response;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_headers, tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_assattr_target_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_get_encoding_from_headers);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_get_encoding_from_headers);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19984 ], 47, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT(var_response);
        tmp_source_name_1 = var_response;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_headers);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_70f9ef5b75f78f241a57af92f5077606->m_frame.f_lineno = 274;
        tmp_assattr_name_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assattr_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_response);
        tmp_assattr_target_3 = var_response;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_encoding, tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_resp);
        tmp_assattr_name_4 = par_resp;
        CHECK_OBJECT(var_response);
        tmp_assattr_target_4 = var_response;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain_raw, tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(var_response);
        tmp_source_name_3 = var_response;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_raw);
        if (tmp_source_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_reason);
        Py_DECREF(tmp_source_name_2);
        if (tmp_assattr_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_response);
        tmp_assattr_target_5 = var_response;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain_reason, tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT(par_req);
        tmp_source_name_4 = par_req;
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_url);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assattr_name_6;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_assattr_target_6;
            CHECK_OBJECT(par_req);
            tmp_source_name_5 = par_req;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_url);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_70f9ef5b75f78f241a57af92f5077606->m_frame.f_lineno = 279;
            tmp_assattr_name_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM(const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0));

            Py_DECREF(tmp_called_instance_1);
            if (tmp_assattr_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_response);
            tmp_assattr_target_6 = var_response;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain_url, tmp_assattr_name_6);
            Py_DECREF(tmp_assattr_name_6);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assattr_name_7;
            PyObject *tmp_source_name_6;
            PyObject *tmp_assattr_target_7;
            CHECK_OBJECT(par_req);
            tmp_source_name_6 = par_req;
            tmp_assattr_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_url);
            if (tmp_assattr_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_response);
            tmp_assattr_target_7 = var_response;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, const_str_plain_url, tmp_assattr_name_7);
            Py_DECREF(tmp_assattr_name_7);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_7;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20031 ], 44, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 284;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT(var_response);
        tmp_source_name_7 = var_response;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_cookies);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_req);
        tmp_args_element_name_4 = par_req;
        CHECK_OBJECT(par_resp);
        tmp_args_element_name_5 = par_resp;
        frame_70f9ef5b75f78f241a57af92f5077606->m_frame.f_lineno = 284;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_4, call_args);
        }

        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_req);
        tmp_assattr_name_8 = par_req;
        CHECK_OBJECT(var_response);
        tmp_assattr_target_8 = var_response;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, const_str_plain_request, tmp_assattr_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_self);
        tmp_assattr_name_9 = par_self;
        CHECK_OBJECT(var_response);
        tmp_assattr_target_9 = var_response;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, const_str_plain_connection, tmp_assattr_name_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_70f9ef5b75f78f241a57af92f5077606);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_70f9ef5b75f78f241a57af92f5077606);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_70f9ef5b75f78f241a57af92f5077606, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_70f9ef5b75f78f241a57af92f5077606->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_70f9ef5b75f78f241a57af92f5077606, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_70f9ef5b75f78f241a57af92f5077606,
        type_description_1,
        par_self,
        par_req,
        par_resp,
        var_response
    );


    // Release cached frame.
    if (frame_70f9ef5b75f78f241a57af92f5077606 == cache_frame_70f9ef5b75f78f241a57af92f5077606) {
        Py_DECREF(frame_70f9ef5b75f78f241a57af92f5077606);
    }
    cache_frame_70f9ef5b75f78f241a57af92f5077606 = NULL;

    assertFrameObject(frame_70f9ef5b75f78f241a57af92f5077606);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_response);
    tmp_return_value = var_response;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_11_build_response);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_response);
    Py_DECREF(var_response);
    var_response = NULL;

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

    Py_XDECREF(var_response);
    var_response = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_11_build_response);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_req);
    Py_DECREF(par_req);
    CHECK_OBJECT(par_resp);
    Py_DECREF(par_resp);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_req);
    Py_DECREF(par_req);
    CHECK_OBJECT(par_resp);
    Py_DECREF(par_resp);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$adapters$$$function_12_get_connection(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *par_proxies = python_pars[2];
    PyObject *var_proxy = NULL;
    PyObject *var_proxy_url = NULL;
    PyObject *var_proxy_manager = NULL;
    PyObject *var_conn = NULL;
    PyObject *var_parsed = NULL;
    struct Nuitka_FrameObject *frame_2a5c41f2c48e3563847b08dd72883d30;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2a5c41f2c48e3563847b08dd72883d30 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_2a5c41f2c48e3563847b08dd72883d30, codeobj_2a5c41f2c48e3563847b08dd72883d30, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_2a5c41f2c48e3563847b08dd72883d30 = cache_frame_2a5c41f2c48e3563847b08dd72883d30;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2a5c41f2c48e3563847b08dd72883d30);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2a5c41f2c48e3563847b08dd72883d30) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_select_proxy);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_select_proxy);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20075 ], 34, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 301;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_1 = par_url;
        CHECK_OBJECT(par_proxies);
        tmp_args_element_name_2 = par_proxies;
        frame_2a5c41f2c48e3563847b08dd72883d30->m_frame.f_lineno = 301;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_proxy == NULL);
        var_proxy = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_proxy);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_proxy);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooo";
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_prepend_scheme_if_needed);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_prepend_scheme_if_needed);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20109 ], 46, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 304;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT(var_proxy);
            tmp_args_element_name_3 = var_proxy;
            tmp_args_element_name_4 = const_str_plain_http;
            frame_2a5c41f2c48e3563847b08dd72883d30->m_frame.f_lineno = 304;
            {
                PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
            }

            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_proxy;
                assert(old != NULL);
                var_proxy = tmp_assign_source_2;
                Py_DECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_parse_url);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_parse_url);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20155 ], 31, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 305;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT(var_proxy);
            tmp_args_element_name_5 = var_proxy;
            frame_2a5c41f2c48e3563847b08dd72883d30->m_frame.f_lineno = 305;
            tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_5);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_proxy_url == NULL);
            var_proxy_url = tmp_assign_source_3;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT(var_proxy_url);
            tmp_source_name_1 = var_proxy_url;
            tmp_operand_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_host);
            if (tmp_operand_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
            Py_DECREF(tmp_operand_name_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_1 = "oooooooo";
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_4;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_InvalidProxyURL);

                if (unlikely(tmp_mvar_value_4 == NULL)) {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidProxyURL);
                }

                if (tmp_mvar_value_4 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 20186 ], 37, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 307;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_4 = tmp_mvar_value_4;
                frame_2a5c41f2c48e3563847b08dd72883d30->m_frame.f_lineno = 307;
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1(tmp_called_name_4, &PyTuple_GET_ITEM(const_tuple_str_digest_d166bac2cd9f995554d196b16ef3feee_tuple, 0));

                if (tmp_raise_type_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 307;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_1;
                exception_lineno = 307;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT(par_self);
            tmp_called_instance_1 = par_self;
            CHECK_OBJECT(var_proxy);
            tmp_args_element_name_6 = var_proxy;
            frame_2a5c41f2c48e3563847b08dd72883d30->m_frame.f_lineno = 309;
            {
                PyObject *call_args[] = {tmp_args_element_name_6};
                tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_proxy_manager_for, call_args);
            }

            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_proxy_manager == NULL);
            var_proxy_manager = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_7;
            CHECK_OBJECT(var_proxy_manager);
            tmp_called_instance_2 = var_proxy_manager;
            CHECK_OBJECT(par_url);
            tmp_args_element_name_7 = par_url;
            frame_2a5c41f2c48e3563847b08dd72883d30->m_frame.f_lineno = 310;
            {
                PyObject *call_args[] = {tmp_args_element_name_7};
                tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_connection_from_url, call_args);
            }

            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_conn == NULL);
            var_conn = tmp_assign_source_5;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_8;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_urlparse);

            if (unlikely(tmp_mvar_value_5 == NULL)) {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse);
            }

            if (tmp_mvar_value_5 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20223 ], 30, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 313;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_5;
            CHECK_OBJECT(par_url);
            tmp_args_element_name_8 = par_url;
            frame_2a5c41f2c48e3563847b08dd72883d30->m_frame.f_lineno = 313;
            tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_8);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_parsed == NULL);
            var_parsed = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_instance_3;
            CHECK_OBJECT(var_parsed);
            tmp_called_instance_3 = var_parsed;
            frame_2a5c41f2c48e3563847b08dd72883d30->m_frame.f_lineno = 314;
            tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_geturl);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_url;
                assert(old != NULL);
                par_url = tmp_assign_source_7;
                Py_DECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_9;
            CHECK_OBJECT(par_self);
            tmp_source_name_2 = par_self;
            tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_poolmanager);
            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_url);
            tmp_args_element_name_9 = par_url;
            frame_2a5c41f2c48e3563847b08dd72883d30->m_frame.f_lineno = 315;
            {
                PyObject *call_args[] = {tmp_args_element_name_9};
                tmp_assign_source_8 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_connection_from_url, call_args);
            }

            Py_DECREF(tmp_called_instance_4);
            if (tmp_assign_source_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_conn == NULL);
            var_conn = tmp_assign_source_8;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2a5c41f2c48e3563847b08dd72883d30);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2a5c41f2c48e3563847b08dd72883d30);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2a5c41f2c48e3563847b08dd72883d30, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_2a5c41f2c48e3563847b08dd72883d30->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2a5c41f2c48e3563847b08dd72883d30, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2a5c41f2c48e3563847b08dd72883d30,
        type_description_1,
        par_self,
        par_url,
        par_proxies,
        var_proxy,
        var_proxy_url,
        var_proxy_manager,
        var_conn,
        var_parsed
    );


    // Release cached frame.
    if (frame_2a5c41f2c48e3563847b08dd72883d30 == cache_frame_2a5c41f2c48e3563847b08dd72883d30) {
        Py_DECREF(frame_2a5c41f2c48e3563847b08dd72883d30);
    }
    cache_frame_2a5c41f2c48e3563847b08dd72883d30 = NULL;

    assertFrameObject(frame_2a5c41f2c48e3563847b08dd72883d30);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_conn);
    tmp_return_value = var_conn;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_12_get_connection);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)par_url);
    Py_DECREF(par_url);
    par_url = NULL;

    CHECK_OBJECT((PyObject *)var_proxy);
    Py_DECREF(var_proxy);
    var_proxy = NULL;

    Py_XDECREF(var_proxy_url);
    var_proxy_url = NULL;

    Py_XDECREF(var_proxy_manager);
    var_proxy_manager = NULL;

    CHECK_OBJECT((PyObject *)var_conn);
    Py_DECREF(var_conn);
    var_conn = NULL;

    Py_XDECREF(var_parsed);
    var_parsed = NULL;

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

    CHECK_OBJECT((PyObject *)par_url);
    Py_DECREF(par_url);
    par_url = NULL;

    Py_XDECREF(var_proxy);
    var_proxy = NULL;

    Py_XDECREF(var_proxy_url);
    var_proxy_url = NULL;

    Py_XDECREF(var_proxy_manager);
    var_proxy_manager = NULL;

    Py_XDECREF(var_parsed);
    var_parsed = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_12_get_connection);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_proxies);
    Py_DECREF(par_proxies);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_proxies);
    Py_DECREF(par_proxies);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$adapters$$$function_13_close(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_proxy = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_506038eb249ce32dd62e6c44443cc9d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_506038eb249ce32dd62e6c44443cc9d6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_506038eb249ce32dd62e6c44443cc9d6, codeobj_506038eb249ce32dd62e6c44443cc9d6, module_requests$adapters, sizeof(void *)+sizeof(void *));
    frame_506038eb249ce32dd62e6c44443cc9d6 = cache_frame_506038eb249ce32dd62e6c44443cc9d6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_506038eb249ce32dd62e6c44443cc9d6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_506038eb249ce32dd62e6c44443cc9d6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_poolmanager);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_506038eb249ce32dd62e6c44443cc9d6->m_frame.f_lineno = 325;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_clear);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_proxy_manager);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_506038eb249ce32dd62e6c44443cc9d6->m_frame.f_lineno = 326;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_values);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
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
                exception_lineno = 326;
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
            PyObject *old = var_proxy;
            var_proxy = tmp_assign_source_3;
            Py_INCREF(var_proxy);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_proxy);
        tmp_called_instance_3 = var_proxy;
        frame_506038eb249ce32dd62e6c44443cc9d6->m_frame.f_lineno = 327;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_clear);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 326;
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
    RESTORE_FRAME_EXCEPTION(frame_506038eb249ce32dd62e6c44443cc9d6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_506038eb249ce32dd62e6c44443cc9d6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_506038eb249ce32dd62e6c44443cc9d6, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_506038eb249ce32dd62e6c44443cc9d6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_506038eb249ce32dd62e6c44443cc9d6, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_506038eb249ce32dd62e6c44443cc9d6,
        type_description_1,
        par_self,
        var_proxy
    );


    // Release cached frame.
    if (frame_506038eb249ce32dd62e6c44443cc9d6 == cache_frame_506038eb249ce32dd62e6c44443cc9d6) {
        Py_DECREF(frame_506038eb249ce32dd62e6c44443cc9d6);
    }
    cache_frame_506038eb249ce32dd62e6c44443cc9d6 = NULL;

    assertFrameObject(frame_506038eb249ce32dd62e6c44443cc9d6);

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
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_13_close);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_proxy);
    var_proxy = NULL;

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

    Py_XDECREF(var_proxy);
    var_proxy = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_13_close);
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


static PyObject *impl_requests$adapters$$$function_14_request_url(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *par_proxies = python_pars[2];
    PyObject *var_proxy = NULL;
    PyObject *var_scheme = NULL;
    PyObject *var_is_proxied_http_request = NULL;
    PyObject *var_using_socks_proxy = NULL;
    PyObject *var_proxy_scheme = NULL;
    PyObject *var_url = NULL;
    struct Nuitka_FrameObject *frame_21a0af1ea824ec3a59033428c2d0f2ff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_21a0af1ea824ec3a59033428c2d0f2ff = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_21a0af1ea824ec3a59033428c2d0f2ff, codeobj_21a0af1ea824ec3a59033428c2d0f2ff, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_21a0af1ea824ec3a59033428c2d0f2ff = cache_frame_21a0af1ea824ec3a59033428c2d0f2ff;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_21a0af1ea824ec3a59033428c2d0f2ff);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_21a0af1ea824ec3a59033428c2d0f2ff) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_select_proxy);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_select_proxy);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20075 ], 34, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 343;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_request);
        tmp_source_name_1 = par_request;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_url);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_proxies);
        tmp_args_element_name_2 = par_proxies;
        frame_21a0af1ea824ec3a59033428c2d0f2ff->m_frame.f_lineno = 343;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_proxy == NULL);
        var_proxy = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_urlparse);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20223 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 344;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT(par_request);
        tmp_source_name_3 = par_request;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_url);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_21a0af1ea824ec3a59033428c2d0f2ff->m_frame.f_lineno = 344;
        tmp_source_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_source_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_scheme);
        Py_DECREF(tmp_source_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_scheme == NULL);
        var_scheme = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_proxy);
        tmp_and_left_value_1 = var_proxy;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_scheme);
        tmp_compexpr_left_1 = var_scheme;
        tmp_compexpr_right_1 = const_str_plain_https;
        tmp_and_right_value_1 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_assign_source_3 = tmp_and_left_value_1;
        and_end_1:;
        assert(var_is_proxied_http_request == NULL);
        var_is_proxied_http_request = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_False;
        assert(var_using_socks_proxy == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_using_socks_proxy = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_proxy);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_proxy);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_urlparse);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20223 ], 30, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 349;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT(var_proxy);
            tmp_args_element_name_4 = var_proxy;
            frame_21a0af1ea824ec3a59033428c2d0f2ff->m_frame.f_lineno = 349;
            tmp_source_name_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_4);
            if (tmp_source_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_scheme);
            Py_DECREF(tmp_source_name_4);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_21a0af1ea824ec3a59033428c2d0f2ff->m_frame.f_lineno = 349;
            tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_lower);
            Py_DECREF(tmp_called_instance_1);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_proxy_scheme == NULL);
            var_proxy_scheme = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_instance_2;
            CHECK_OBJECT(var_proxy_scheme);
            tmp_called_instance_2 = var_proxy_scheme;
            frame_21a0af1ea824ec3a59033428c2d0f2ff->m_frame.f_lineno = 350;
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_startswith, &PyTuple_GET_ITEM(const_tuple_str_plain_socks_tuple, 0));

            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_using_socks_proxy;
                assert(old != NULL);
                var_using_socks_proxy = tmp_assign_source_6;
                Py_DECREF(old);
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT(par_request);
        tmp_source_name_5 = par_request;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_path_url);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_url == NULL);
        var_url = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_2;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(var_is_proxied_http_request);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_is_proxied_http_request);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ooooooooo";
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
        CHECK_OBJECT(var_using_socks_proxy);
        tmp_operand_name_1 = var_using_socks_proxy;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_2 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_6;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_urldefragauth);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_urldefragauth);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20253 ], 35, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 354;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_4;
            CHECK_OBJECT(par_request);
            tmp_source_name_6 = par_request;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_url);
            if (tmp_args_element_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_21a0af1ea824ec3a59033428c2d0f2ff->m_frame.f_lineno = 354;
            tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_5);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_assign_source_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_url;
                assert(old != NULL);
                var_url = tmp_assign_source_8;
                Py_DECREF(old);
            }

        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_21a0af1ea824ec3a59033428c2d0f2ff);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_21a0af1ea824ec3a59033428c2d0f2ff);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_21a0af1ea824ec3a59033428c2d0f2ff, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_21a0af1ea824ec3a59033428c2d0f2ff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_21a0af1ea824ec3a59033428c2d0f2ff, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_21a0af1ea824ec3a59033428c2d0f2ff,
        type_description_1,
        par_self,
        par_request,
        par_proxies,
        var_proxy,
        var_scheme,
        var_is_proxied_http_request,
        var_using_socks_proxy,
        var_proxy_scheme,
        var_url
    );


    // Release cached frame.
    if (frame_21a0af1ea824ec3a59033428c2d0f2ff == cache_frame_21a0af1ea824ec3a59033428c2d0f2ff) {
        Py_DECREF(frame_21a0af1ea824ec3a59033428c2d0f2ff);
    }
    cache_frame_21a0af1ea824ec3a59033428c2d0f2ff = NULL;

    assertFrameObject(frame_21a0af1ea824ec3a59033428c2d0f2ff);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_url);
    tmp_return_value = var_url;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_14_request_url);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_proxy);
    Py_DECREF(var_proxy);
    var_proxy = NULL;

    CHECK_OBJECT((PyObject *)var_scheme);
    Py_DECREF(var_scheme);
    var_scheme = NULL;

    CHECK_OBJECT((PyObject *)var_is_proxied_http_request);
    Py_DECREF(var_is_proxied_http_request);
    var_is_proxied_http_request = NULL;

    CHECK_OBJECT((PyObject *)var_using_socks_proxy);
    Py_DECREF(var_using_socks_proxy);
    var_using_socks_proxy = NULL;

    Py_XDECREF(var_proxy_scheme);
    var_proxy_scheme = NULL;

    CHECK_OBJECT((PyObject *)var_url);
    Py_DECREF(var_url);
    var_url = NULL;

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

    Py_XDECREF(var_proxy);
    var_proxy = NULL;

    Py_XDECREF(var_scheme);
    var_scheme = NULL;

    Py_XDECREF(var_is_proxied_http_request);
    var_is_proxied_http_request = NULL;

    Py_XDECREF(var_using_socks_proxy);
    var_using_socks_proxy = NULL;

    Py_XDECREF(var_proxy_scheme);
    var_proxy_scheme = NULL;

    Py_XDECREF(var_url);
    var_url = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_14_request_url);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_proxies);
    Py_DECREF(par_proxies);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_proxies);
    Py_DECREF(par_proxies);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$adapters$$$function_16_proxy_headers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_proxy = python_pars[1];
    PyObject *var_headers = NULL;
    PyObject *var_username = NULL;
    PyObject *var_password = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_9a5dd723d3097d5819cc2e3152ff134c;
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
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_9a5dd723d3097d5819cc2e3152ff134c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert(var_headers == NULL);
        var_headers = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_9a5dd723d3097d5819cc2e3152ff134c, codeobj_9a5dd723d3097d5819cc2e3152ff134c, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_9a5dd723d3097d5819cc2e3152ff134c = cache_frame_9a5dd723d3097d5819cc2e3152ff134c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9a5dd723d3097d5819cc2e3152ff134c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9a5dd723d3097d5819cc2e3152ff134c) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_get_auth_from_url);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_get_auth_from_url);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19681 ], 39, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 386;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_proxy);
        tmp_args_element_name_1 = par_proxy;
        frame_9a5dd723d3097d5819cc2e3152ff134c->m_frame.f_lineno = 386;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 386;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 386;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 386;
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

            type_description_1 = "ooooo";
            exception_lineno = 386;
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
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_username == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_username = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_password == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_password = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_username);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_username);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooooo";
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__basic_auth_str);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__basic_auth_str);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20288 ], 37, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 389;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT(var_username);
            tmp_args_element_name_2 = var_username;
            CHECK_OBJECT(var_password);
            tmp_args_element_name_3 = var_password;
            frame_9a5dd723d3097d5819cc2e3152ff134c->m_frame.f_lineno = 389;
            {
                PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
            }

            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 389;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_headers);
            tmp_dictset_dict = var_headers;
            tmp_dictset_key = const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
            tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9a5dd723d3097d5819cc2e3152ff134c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9a5dd723d3097d5819cc2e3152ff134c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9a5dd723d3097d5819cc2e3152ff134c, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_9a5dd723d3097d5819cc2e3152ff134c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9a5dd723d3097d5819cc2e3152ff134c, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9a5dd723d3097d5819cc2e3152ff134c,
        type_description_1,
        par_self,
        par_proxy,
        var_headers,
        var_username,
        var_password
    );


    // Release cached frame.
    if (frame_9a5dd723d3097d5819cc2e3152ff134c == cache_frame_9a5dd723d3097d5819cc2e3152ff134c) {
        Py_DECREF(frame_9a5dd723d3097d5819cc2e3152ff134c);
    }
    cache_frame_9a5dd723d3097d5819cc2e3152ff134c = NULL;

    assertFrameObject(frame_9a5dd723d3097d5819cc2e3152ff134c);

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
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_16_proxy_headers);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_headers);
    Py_DECREF(var_headers);
    var_headers = NULL;

    CHECK_OBJECT((PyObject *)var_username);
    Py_DECREF(var_username);
    var_username = NULL;

    CHECK_OBJECT((PyObject *)var_password);
    Py_DECREF(var_password);
    var_password = NULL;

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

    CHECK_OBJECT((PyObject *)var_headers);
    Py_DECREF(var_headers);
    var_headers = NULL;

    Py_XDECREF(var_username);
    var_username = NULL;

    Py_XDECREF(var_password);
    var_password = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_16_proxy_headers);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_proxy);
    Py_DECREF(par_proxy);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_proxy);
    Py_DECREF(par_proxy);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$adapters$$$function_17_send(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *par_stream = python_pars[2];
    PyObject *par_timeout = python_pars[3];
    PyObject *par_verify = python_pars[4];
    PyObject *par_cert = python_pars[5];
    PyObject *par_proxies = python_pars[6];
    PyObject *var_conn = NULL;
    PyObject *var_e = NULL;
    PyObject *var_url = NULL;
    nuitka_bool var_chunked = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_connect = NULL;
    PyObject *var_read = NULL;
    PyObject *var_err = NULL;
    PyObject *var_resp = NULL;
    PyObject *var_low_conn = NULL;
    PyObject *var_header = NULL;
    PyObject *var_value = NULL;
    PyObject *var_i = NULL;
    PyObject *var_r = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_9cad0070da42b24f25ccb7c0be48a073;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_preserved_type_4;
    PyObject *exception_preserved_value_4;
    PyTracebackObject *exception_preserved_tb_4;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_preserved_type_5;
    PyObject *exception_preserved_value_5;
    PyTracebackObject *exception_preserved_tb_5;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9cad0070da42b24f25ccb7c0be48a073 = NULL;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_9cad0070da42b24f25ccb7c0be48a073, codeobj_9cad0070da42b24f25ccb7c0be48a073, module_requests$adapters, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_9cad0070da42b24f25ccb7c0be48a073 = cache_frame_9cad0070da42b24f25ccb7c0be48a073;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9cad0070da42b24f25ccb7c0be48a073);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9cad0070da42b24f25ccb7c0be48a073) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_get_connection);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oooooooooobooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_request);
        tmp_source_name_2 = par_request;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_url);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 412;
            type_description_1 = "oooooooooobooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_proxies);
        tmp_args_element_name_2 = par_proxies;
        frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 412;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oooooooooobooooooooo";
            goto try_except_handler_2;
        }
        assert(var_conn == NULL);
        var_conn = tmp_assign_source_1;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_9cad0070da42b24f25ccb7c0be48a073, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_9cad0070da42b24f25ccb7c0be48a073, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    PyException_SetTraceback(exception_keeper_value_1, (PyObject *)exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_LocationValueError);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_LocationValueError);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20325 ], 40, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 413;
            type_description_1 = "oooooooooobooooooooo";
            goto try_except_handler_3;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "oooooooooobooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = EXC_VALUE(PyThreadState_GET());
            assert(var_e == NULL);
            Py_INCREF(tmp_assign_source_2);
            var_e = tmp_assign_source_2;
        }
        // Tried code:
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_InvalidURL);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidURL);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20365 ], 32, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 414;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_4;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT(var_e);
            tmp_tuple_element_1 = var_e;
            tmp_args_name_1 = PyTuple_New(1);
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
            tmp_dict_key_1 = const_str_plain_request;
            CHECK_OBJECT(par_request);
            tmp_dict_value_1 = par_request;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 414;
            tmp_raise_type_1 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1);
            Py_DECREF(tmp_args_name_1);
            Py_DECREF(tmp_kw_name_1);
            if (tmp_raise_type_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_4;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 414;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooooooooobooooooooo";
            goto try_except_handler_4;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_17_send);
        return NULL;
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

        Py_XDECREF(var_e);
        var_e = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 411;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_9cad0070da42b24f25ccb7c0be48a073->m_frame) frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooooobooooooooo";
        goto try_except_handler_3;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_17_send);
    return NULL;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_cert_verify);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooooooooobooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_conn);
        tmp_args_element_name_3 = var_conn;
        CHECK_OBJECT(par_request);
        tmp_source_name_4 = par_request;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_url);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 416;
            type_description_1 = "oooooooooobooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_verify);
        tmp_args_element_name_5 = par_verify;
        CHECK_OBJECT(par_cert);
        tmp_args_element_name_6 = par_cert;
        frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 416;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooooooooobooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_request);
        tmp_args_element_name_7 = par_request;
        CHECK_OBJECT(par_proxies);
        tmp_args_element_name_8 = par_proxies;
        frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 417;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain_request_url, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oooooooooobooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_url == NULL);
        var_url = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
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
        CHECK_OBJECT(par_self);
        tmp_source_name_5 = par_self;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_add_headers);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "oooooooooobooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_tuple_element_2 = par_request;
        tmp_args_name_2 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_2);
        tmp_dict_key_2 = const_str_plain_stream;
        CHECK_OBJECT(par_stream);
        tmp_dict_value_2 = par_stream;
        tmp_kw_name_2 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain_timeout;
        CHECK_OBJECT(par_timeout);
        tmp_dict_value_3 = par_timeout;
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_verify;
        CHECK_OBJECT(par_verify);
        tmp_dict_value_4 = par_verify;
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = const_str_plain_cert;
        CHECK_OBJECT(par_cert);
        tmp_dict_value_5 = par_cert;
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = const_str_plain_proxies;
        CHECK_OBJECT(par_proxies);
        tmp_dict_value_6 = par_proxies;
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 418;
        tmp_call_result_2 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "oooooooooobooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        nuitka_bool tmp_assign_source_4;
        PyObject *tmp_operand_name_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT(par_request);
        tmp_source_name_6 = par_request;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_body);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooooooooobooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_or_left_value_1 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? Py_True : Py_False;
        Py_DECREF(tmp_compexpr_left_2);
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_compexpr_left_3 = const_str_digest_3c9527fc53ea2272c2080ca035d6631c;
        CHECK_OBJECT(par_request);
        tmp_source_name_7 = par_request;
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_headers);
        if (tmp_compexpr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooooooooobooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        Py_DECREF(tmp_compexpr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "oooooooooobooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res == 1) ? Py_True : Py_False;
        tmp_operand_name_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_operand_name_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        assert(!(tmp_res == -1));
        tmp_assign_source_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        var_chunked = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_timeout);
        tmp_isinstance_inst_1 = par_timeout;
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "oooooooooobooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_timeout);
            tmp_iter_arg_1 = par_timeout;
            tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 424;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_6;
            }
            assert(tmp_tuple_unpack_1__source_iter == NULL);
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
            if (tmp_assign_source_6 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooobooooooooo";
                exception_lineno = 424;
                goto try_except_handler_7;
            }
            assert(tmp_tuple_unpack_1__element_1 == NULL);
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
            if (tmp_assign_source_7 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooobooooooooo";
                exception_lineno = 424;
                goto try_except_handler_7;
            }
            assert(tmp_tuple_unpack_1__element_2 == NULL);
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                        type_description_1 = "oooooooooobooooooooo";
                        exception_lineno = 424;
                        goto try_except_handler_7;
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

                type_description_1 = "oooooooooobooooooooo";
                exception_lineno = 424;
                goto try_except_handler_7;
            }
        }
        goto try_end_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
        Py_DECREF(tmp_tuple_unpack_1__source_iter);
        tmp_tuple_unpack_1__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_6;
        // End of try:
        try_end_2:;
        goto try_end_3;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_tuple_unpack_1__element_1);
        tmp_tuple_unpack_1__element_1 = NULL;

        Py_XDECREF(tmp_tuple_unpack_1__element_2);
        tmp_tuple_unpack_1__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_5;
        // End of try:
        try_end_3:;
        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
        Py_DECREF(tmp_tuple_unpack_1__source_iter);
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
            tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
            assert(var_connect == NULL);
            Py_INCREF(tmp_assign_source_8);
            var_connect = tmp_assign_source_8;
        }
        Py_XDECREF(tmp_tuple_unpack_1__element_1);
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
            tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
            assert(var_read == NULL);
            Py_INCREF(tmp_assign_source_9);
            var_read = tmp_assign_source_9;
        }
        Py_XDECREF(tmp_tuple_unpack_1__element_2);
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_kw_name_3;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_TimeoutSauce);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeoutSauce);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20397 ], 34, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 425;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_5;
            }

            tmp_called_name_5 = tmp_mvar_value_3;
            tmp_dict_key_7 = const_str_plain_connect;
            CHECK_OBJECT(var_connect);
            tmp_dict_value_7 = var_connect;
            tmp_kw_name_3 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = const_str_plain_read;
            CHECK_OBJECT(var_read);
            tmp_dict_value_8 = var_read;
            tmp_res = PyDict_SetItem(tmp_kw_name_3, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 425;
            tmp_assign_source_10 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_5, tmp_kw_name_3);
            Py_DECREF(tmp_kw_name_3);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = par_timeout;
                assert(old != NULL);
                par_timeout = tmp_assign_source_10;
                Py_DECREF(old);
            }

        }
        goto try_end_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Preserve existing published exception.
        exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF(exception_preserved_type_2);
        exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF(exception_preserved_value_2);
        exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF(exception_preserved_tb_2);

        if (exception_keeper_tb_6 == NULL) {
            exception_keeper_tb_6 = MAKE_TRACEBACK(frame_9cad0070da42b24f25ccb7c0be48a073, exception_keeper_lineno_6);
        } else if (exception_keeper_lineno_6 != 0) {
            exception_keeper_tb_6 = ADD_TRACEBACK(exception_keeper_tb_6, frame_9cad0070da42b24f25ccb7c0be48a073, exception_keeper_lineno_6);
        }

        NORMALIZE_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
        PyException_SetTraceback(exception_keeper_value_6, (PyObject *)exception_keeper_tb_6);
        PUBLISH_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
        // Tried code:
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_4 = PyExc_ValueError;
            tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_4, tmp_compexpr_right_4);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 426;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_8;
            }
            tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_assign_source_11;
                tmp_assign_source_11 = EXC_VALUE(PyThreadState_GET());
                assert(var_e == NULL);
                Py_INCREF(tmp_assign_source_11);
                var_e = tmp_assign_source_11;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_12;
                PyObject *tmp_called_instance_2;
                PyObject *tmp_args_element_name_9;
                tmp_called_instance_2 = const_str_digest_3753a9b47e94d50e84fafceba56d25b3;
                CHECK_OBJECT(par_timeout);
                tmp_args_element_name_9 = par_timeout;
                frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 428;
                {
                    PyObject *call_args[] = {tmp_args_element_name_9};
                    tmp_assign_source_12 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_format, call_args);
                }

                if (tmp_assign_source_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 428;
                    type_description_1 = "oooooooooobooooooooo";
                    goto try_except_handler_9;
                }
                assert(var_err == NULL);
                var_err = tmp_assign_source_12;
            }
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_1;
                CHECK_OBJECT(var_err);
                tmp_make_exception_arg_1 = var_err;
                frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 431;
                tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
                assert(!(tmp_raise_type_2 == NULL));
                exception_type = tmp_raise_type_2;
                exception_lineno = 431;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_9;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_17_send);
            return NULL;
            // Exception handler code:
            try_except_handler_9:;
            exception_keeper_type_7 = exception_type;
            exception_keeper_value_7 = exception_value;
            exception_keeper_tb_7 = exception_tb;
            exception_keeper_lineno_7 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF(var_e);
            var_e = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_7;
            exception_value = exception_keeper_value_7;
            exception_tb = exception_keeper_tb_7;
            exception_lineno = exception_keeper_lineno_7;

            goto try_except_handler_8;
            // End of try:
            goto branch_end_3;
            branch_no_3:;
            tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            if (unlikely(tmp_result == false)) {
                exception_lineno = 423;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_9cad0070da42b24f25ccb7c0be48a073->m_frame) frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooooooobooooooooo";
            goto try_except_handler_8;
            branch_end_3:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_17_send);
        return NULL;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Restore previous exception.
        SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto frame_exception_exit_1;
        // End of try:
        // End of try:
        try_end_4:;
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            PyObject *tmp_mvar_value_4;
            CHECK_OBJECT(par_timeout);
            tmp_isinstance_inst_2 = par_timeout;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_TimeoutSauce);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeoutSauce);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20397 ], 34, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 432;
                type_description_1 = "oooooooooobooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_isinstance_cls_2 = tmp_mvar_value_4;
            tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "oooooooooobooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "oooooooooobooooooooo";
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
                PyObject *tmp_assign_source_13;
                PyObject *tmp_called_name_6;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_kw_name_4;
                PyObject *tmp_dict_key_9;
                PyObject *tmp_dict_value_9;
                PyObject *tmp_dict_key_10;
                PyObject *tmp_dict_value_10;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_TimeoutSauce);

                if (unlikely(tmp_mvar_value_5 == NULL)) {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeoutSauce);
                }

                if (tmp_mvar_value_5 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 20397 ], 34, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 435;
                    type_description_1 = "oooooooooobooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_6 = tmp_mvar_value_5;
                tmp_dict_key_9 = const_str_plain_connect;
                CHECK_OBJECT(par_timeout);
                tmp_dict_value_9 = par_timeout;
                tmp_kw_name_4 = _PyDict_NewPresized( 2 );
                tmp_res = PyDict_SetItem(tmp_kw_name_4, tmp_dict_key_9, tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = const_str_plain_read;
                CHECK_OBJECT(par_timeout);
                tmp_dict_value_10 = par_timeout;
                tmp_res = PyDict_SetItem(tmp_kw_name_4, tmp_dict_key_10, tmp_dict_value_10);
                assert(!(tmp_res != 0));
                frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 435;
                tmp_assign_source_13 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_6, tmp_kw_name_4);
                Py_DECREF(tmp_kw_name_4);
                if (tmp_assign_source_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 435;
                    type_description_1 = "oooooooooobooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_timeout;
                    assert(old != NULL);
                    par_timeout = tmp_assign_source_13;
                    Py_DECREF(old);
                }

            }
            branch_no_4:;
        }
        branch_end_2:;
    }
    // Tried code:
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_3;
        assert(var_chunked != NUITKA_BOOL_UNASSIGNED);
        tmp_operand_name_3 = (var_chunked == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_8;
            PyObject *tmp_kw_name_5;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_source_name_9;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_source_name_10;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_source_name_11;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            PyObject *tmp_source_name_12;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            CHECK_OBJECT(var_conn);
            tmp_source_name_8 = var_conn;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_urlopen);
            if (tmp_called_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 439;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_10;
            }
            tmp_dict_key_11 = const_str_plain_method;
            CHECK_OBJECT(par_request);
            tmp_source_name_9 = par_request;
            tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_method);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_7);

                exception_lineno = 440;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_10;
            }
            tmp_kw_name_5 = _PyDict_NewPresized( 10 );
            tmp_res = PyDict_SetItem(tmp_kw_name_5, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = const_str_plain_url;
            CHECK_OBJECT(var_url);
            tmp_dict_value_12 = var_url;
            tmp_res = PyDict_SetItem(tmp_kw_name_5, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = const_str_plain_body;
            CHECK_OBJECT(par_request);
            tmp_source_name_10 = par_request;
            tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_body);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_7);
                Py_DECREF(tmp_kw_name_5);

                exception_lineno = 442;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_10;
            }
            tmp_res = PyDict_SetItem(tmp_kw_name_5, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = const_str_plain_headers;
            CHECK_OBJECT(par_request);
            tmp_source_name_11 = par_request;
            tmp_dict_value_14 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_headers);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_7);
                Py_DECREF(tmp_kw_name_5);

                exception_lineno = 443;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_10;
            }
            tmp_res = PyDict_SetItem(tmp_kw_name_5, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = const_str_plain_redirect;
            tmp_dict_value_15 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_name_5, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = const_str_plain_assert_same_host;
            tmp_dict_value_16 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_name_5, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = const_str_plain_preload_content;
            tmp_dict_value_17 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_name_5, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = const_str_plain_decode_content;
            tmp_dict_value_18 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_name_5, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = const_str_plain_retries;
            CHECK_OBJECT(par_self);
            tmp_source_name_12 = par_self;
            tmp_dict_value_19 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_max_retries);
            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_7);
                Py_DECREF(tmp_kw_name_5);

                exception_lineno = 448;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_10;
            }
            tmp_res = PyDict_SetItem(tmp_kw_name_5, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_20 = const_str_plain_timeout;
            if (par_timeout == NULL) {
                Py_DECREF(tmp_called_name_7);
                Py_DECREF(tmp_kw_name_5);
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "timeout");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 449;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_10;
            }

            tmp_dict_value_20 = par_timeout;
            tmp_res = PyDict_SetItem(tmp_kw_name_5, tmp_dict_key_20, tmp_dict_value_20);
            assert(!(tmp_res != 0));
            frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 439;
            tmp_assign_source_14 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_7, tmp_kw_name_5);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_kw_name_5);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 439;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_10;
            }
            assert(var_resp == NULL);
            var_resp = tmp_assign_source_14;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_source_name_13;
            PyObject *tmp_attribute_name_1;
            CHECK_OBJECT(var_conn);
            tmp_source_name_13 = var_conn;
            tmp_attribute_name_1 = const_str_plain_proxy_pool;
            tmp_res = BUILTIN_HASATTR_BOOL(tmp_source_name_13, tmp_attribute_name_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_10;
            }
            tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
            branch_yes_6:;
            {
                PyObject *tmp_assign_source_15;
                PyObject *tmp_source_name_14;
                CHECK_OBJECT(var_conn);
                tmp_source_name_14 = var_conn;
                tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_proxy_pool);
                if (tmp_assign_source_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 455;
                    type_description_1 = "oooooooooobooooooooo";
                    goto try_except_handler_10;
                }
                {
                    PyObject *old = var_conn;
                    assert(old != NULL);
                    var_conn = tmp_assign_source_15;
                    Py_DECREF(old);
                }

            }
            branch_no_6:;
        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_15;
            PyObject *tmp_kw_name_6;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            PyObject *tmp_mvar_value_6;
            CHECK_OBJECT(var_conn);
            tmp_source_name_15 = var_conn;
            tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain__get_conn);
            if (tmp_called_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 457;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_10;
            }
            tmp_dict_key_21 = const_str_plain_timeout;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOL_TIMEOUT);

            if (unlikely(tmp_mvar_value_6 == NULL)) {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOL_TIMEOUT);
            }

            if (tmp_mvar_value_6 == NULL) {
                Py_DECREF(tmp_called_name_8);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20431 ], 42, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 457;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_10;
            }

            tmp_dict_value_21 = tmp_mvar_value_6;
            tmp_kw_name_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_name_6, tmp_dict_key_21, tmp_dict_value_21);
            assert(!(tmp_res != 0));
            frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 457;
            tmp_assign_source_16 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_8, tmp_kw_name_6);
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_kw_name_6);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 457;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_10;
            }
            assert(var_low_conn == NULL);
            var_low_conn = tmp_assign_source_16;
        }
        // Tried code:
        {
            PyObject *tmp_called_name_9;
            PyObject *tmp_source_name_16;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_source_name_17;
            PyObject *tmp_kw_name_7;
            CHECK_OBJECT(var_low_conn);
            tmp_source_name_16 = var_low_conn;
            tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain_putrequest);
            if (tmp_called_name_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 460;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_11;
            }
            CHECK_OBJECT(par_request);
            tmp_source_name_17 = par_request;
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain_method);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_9);

                exception_lineno = 460;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_11;
            }
            tmp_args_name_3 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_args_name_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_url);
            tmp_tuple_element_3 = var_url;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_3, 1, tmp_tuple_element_3);
            tmp_kw_name_7 = PyDict_Copy(const_dict_d57bfa9a8ed7a88f3af4f0a6e5cfc141);
            frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 460;
            tmp_call_result_3 = CALL_FUNCTION(tmp_called_name_9, tmp_args_name_3, tmp_kw_name_7);
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_name_3);
            Py_DECREF(tmp_kw_name_7);
            if (tmp_call_result_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 460;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_11;
            }
            Py_DECREF(tmp_call_result_3);
        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_18;
            CHECK_OBJECT(par_request);
            tmp_source_name_18 = par_request;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain_headers);
            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_11;
            }
            frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 464;
            tmp_iter_arg_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_items);
            Py_DECREF(tmp_called_instance_3);
            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_11;
            }
            tmp_assign_source_17 = MAKE_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_11;
            }
            assert(tmp_for_loop_1__for_iterator == NULL);
            tmp_for_loop_1__for_iterator = tmp_assign_source_17;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT(tmp_for_loop_1__for_iterator);
            tmp_next_source_1 = tmp_for_loop_1__for_iterator;
            tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_18 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooooobooooooooo";
                    exception_lineno = 464;
                    goto try_except_handler_12;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_18;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(tmp_for_loop_1__iter_value);
            tmp_iter_arg_3 = tmp_for_loop_1__iter_value;
            tmp_assign_source_19 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_13;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__source_iter;
                tmp_tuple_unpack_2__source_iter = tmp_assign_source_19;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_20 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
            if (tmp_assign_source_20 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooobooooooooo";
                exception_lineno = 464;
                goto try_except_handler_14;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_1;
                tmp_tuple_unpack_2__element_1 = tmp_assign_source_20;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_21 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
            if (tmp_assign_source_21 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "oooooooooobooooooooo";
                exception_lineno = 464;
                goto try_except_handler_14;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_2;
                tmp_tuple_unpack_2__element_2 = tmp_assign_source_21;
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

                        type_description_1 = "oooooooooobooooooooo";
                        exception_lineno = 464;
                        goto try_except_handler_14;
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

                type_description_1 = "oooooooooobooooooooo";
                exception_lineno = 464;
                goto try_except_handler_14;
            }
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_2__source_iter);
        Py_DECREF(tmp_tuple_unpack_2__source_iter);
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_13;
        // End of try:
        try_end_5:;
        goto try_end_6;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_tuple_unpack_2__element_1);
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF(tmp_tuple_unpack_2__element_2);
        tmp_tuple_unpack_2__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_12;
        // End of try:
        try_end_6:;
        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_2__source_iter);
        Py_DECREF(tmp_tuple_unpack_2__source_iter);
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
            tmp_assign_source_22 = tmp_tuple_unpack_2__element_1;
            {
                PyObject *old = var_header;
                var_header = tmp_assign_source_22;
                Py_INCREF(var_header);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_tuple_unpack_2__element_1);
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_23;
            CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
            tmp_assign_source_23 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var_value;
                var_value = tmp_assign_source_23;
                Py_INCREF(var_value);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_tuple_unpack_2__element_2);
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            CHECK_OBJECT(var_low_conn);
            tmp_called_instance_4 = var_low_conn;
            CHECK_OBJECT(var_header);
            tmp_args_element_name_10 = var_header;
            CHECK_OBJECT(var_value);
            tmp_args_element_name_11 = var_value;
            frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 465;
            {
                PyObject *call_args[] = {tmp_args_element_name_10, tmp_args_element_name_11};
                tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_4, const_str_plain_putheader, call_args);
            }

            if (tmp_call_result_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 465;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_12;
            }
            Py_DECREF(tmp_call_result_4);
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "oooooooooobooooooooo";
            goto try_except_handler_12;
        }
        goto loop_start_1;
        loop_end_1:;
        goto try_end_7;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
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
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_11;
        // End of try:
        try_end_7:;
        Py_XDECREF(tmp_for_loop_1__iter_value);
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
        Py_DECREF(tmp_for_loop_1__for_iterator);
        tmp_for_loop_1__for_iterator = NULL;

        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_call_result_5;
            CHECK_OBJECT(var_low_conn);
            tmp_called_instance_5 = var_low_conn;
            frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 467;
            tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, const_str_plain_endheaders);
            if (tmp_call_result_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 467;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_11;
            }
            Py_DECREF(tmp_call_result_5);
        }
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_source_name_19;
            CHECK_OBJECT(par_request);
            tmp_source_name_19 = par_request;
            tmp_iter_arg_4 = LOOKUP_ATTRIBUTE(tmp_source_name_19, const_str_plain_body);
            if (tmp_iter_arg_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_11;
            }
            tmp_assign_source_24 = MAKE_ITERATOR(tmp_iter_arg_4);
            Py_DECREF(tmp_iter_arg_4);
            if (tmp_assign_source_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_11;
            }
            assert(tmp_for_loop_2__for_iterator == NULL);
            tmp_for_loop_2__for_iterator = tmp_assign_source_24;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT(tmp_for_loop_2__for_iterator);
            tmp_next_source_2 = tmp_for_loop_2__for_iterator;
            tmp_assign_source_25 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_25 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooooobooooooooo";
                    exception_lineno = 469;
                    goto try_except_handler_15;
                }
            }

            {
                PyObject *old = tmp_for_loop_2__iter_value;
                tmp_for_loop_2__iter_value = tmp_assign_source_25;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_26;
            CHECK_OBJECT(tmp_for_loop_2__iter_value);
            tmp_assign_source_26 = tmp_for_loop_2__iter_value;
            {
                PyObject *old = var_i;
                var_i = tmp_assign_source_26;
                Py_INCREF(var_i);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_called_name_10;
            PyObject *tmp_source_name_20;
            PyObject *tmp_call_result_6;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_hex_arg_1;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT(var_low_conn);
            tmp_source_name_20 = var_low_conn;
            tmp_called_name_10 = LOOKUP_ATTRIBUTE(tmp_source_name_20, const_str_plain_send);
            if (tmp_called_name_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 470;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_15;
            }
            CHECK_OBJECT(var_i);
            tmp_len_arg_1 = var_i;
            tmp_hex_arg_1 = BUILTIN_LEN(tmp_len_arg_1);
            if (tmp_hex_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_10);

                exception_lineno = 470;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_15;
            }
            tmp_subscribed_name_1 = BUILTIN_HEX(tmp_hex_arg_1);
            Py_DECREF(tmp_hex_arg_1);
            if (tmp_subscribed_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_10);

                exception_lineno = 470;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_15;
            }
            tmp_subscript_name_1 = const_slice_int_pos_2_none_none;
            tmp_called_instance_6 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
            Py_DECREF(tmp_subscribed_name_1);
            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_10);

                exception_lineno = 470;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_15;
            }
            frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 470;
            tmp_args_element_name_12 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, const_str_plain_encode, &PyTuple_GET_ITEM(const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0));

            Py_DECREF(tmp_called_instance_6);
            if (tmp_args_element_name_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_10);

                exception_lineno = 470;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_15;
            }
            frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 470;
            tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_10, tmp_args_element_name_12);
            Py_DECREF(tmp_called_name_10);
            Py_DECREF(tmp_args_element_name_12);
            if (tmp_call_result_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 470;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_15;
            }
            Py_DECREF(tmp_call_result_6);
        }
        {
            PyObject *tmp_called_instance_7;
            PyObject *tmp_call_result_7;
            CHECK_OBJECT(var_low_conn);
            tmp_called_instance_7 = var_low_conn;
            frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 471;
            tmp_call_result_7 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, const_str_plain_send, &PyTuple_GET_ITEM(const_tuple_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014_tuple, 0));

            if (tmp_call_result_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 471;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_15;
            }
            Py_DECREF(tmp_call_result_7);
        }
        {
            PyObject *tmp_called_instance_8;
            PyObject *tmp_call_result_8;
            PyObject *tmp_args_element_name_13;
            CHECK_OBJECT(var_low_conn);
            tmp_called_instance_8 = var_low_conn;
            CHECK_OBJECT(var_i);
            tmp_args_element_name_13 = var_i;
            frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 472;
            {
                PyObject *call_args[] = {tmp_args_element_name_13};
                tmp_call_result_8 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_8, const_str_plain_send, call_args);
            }

            if (tmp_call_result_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_15;
            }
            Py_DECREF(tmp_call_result_8);
        }
        {
            PyObject *tmp_called_instance_9;
            PyObject *tmp_call_result_9;
            CHECK_OBJECT(var_low_conn);
            tmp_called_instance_9 = var_low_conn;
            frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 473;
            tmp_call_result_9 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_9, const_str_plain_send, &PyTuple_GET_ITEM(const_tuple_bytes_digest_e22048e4de62b4d2ac355aed7a0f9014_tuple, 0));

            if (tmp_call_result_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 473;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_15;
            }
            Py_DECREF(tmp_call_result_9);
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "oooooooooobooooooooo";
            goto try_except_handler_15;
        }
        goto loop_start_2;
        loop_end_2:;
        goto try_end_8;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_for_loop_2__iter_value);
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_2__for_iterator);
        Py_DECREF(tmp_for_loop_2__for_iterator);
        tmp_for_loop_2__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_11;
        // End of try:
        try_end_8:;
        Py_XDECREF(tmp_for_loop_2__iter_value);
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_2__for_iterator);
        Py_DECREF(tmp_for_loop_2__for_iterator);
        tmp_for_loop_2__for_iterator = NULL;

        {
            PyObject *tmp_called_instance_10;
            PyObject *tmp_call_result_10;
            CHECK_OBJECT(var_low_conn);
            tmp_called_instance_10 = var_low_conn;
            frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 474;
            tmp_call_result_10 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_10, const_str_plain_send, &PyTuple_GET_ITEM(const_tuple_bytes_digest_103d73ccb44d3ba17b2afce6d3b01e78_tuple, 0));

            if (tmp_call_result_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_11;
            }
            Py_DECREF(tmp_call_result_10);
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_name_11;
            PyObject *tmp_source_name_21;
            PyObject *tmp_kw_name_8;
            CHECK_OBJECT(var_low_conn);
            tmp_source_name_21 = var_low_conn;
            tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_source_name_21, const_str_plain_getresponse);
            if (tmp_called_name_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 479;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_16;
            }
            tmp_kw_name_8 = PyDict_Copy(const_dict_f965c4886458f8f721a7913cea1cd007);
            frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 479;
            tmp_assign_source_27 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_11, tmp_kw_name_8);
            Py_DECREF(tmp_called_name_11);
            Py_DECREF(tmp_kw_name_8);
            if (tmp_assign_source_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 479;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_16;
            }
            assert(var_r == NULL);
            var_r = tmp_assign_source_27;
        }
        goto try_end_9;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Preserve existing published exception.
        exception_preserved_type_3 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF(exception_preserved_type_3);
        exception_preserved_value_3 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF(exception_preserved_value_3);
        exception_preserved_tb_3 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF(exception_preserved_tb_3);

        if (exception_keeper_tb_13 == NULL) {
            exception_keeper_tb_13 = MAKE_TRACEBACK(frame_9cad0070da42b24f25ccb7c0be48a073, exception_keeper_lineno_13);
        } else if (exception_keeper_lineno_13 != 0) {
            exception_keeper_tb_13 = ADD_TRACEBACK(exception_keeper_tb_13, frame_9cad0070da42b24f25ccb7c0be48a073, exception_keeper_lineno_13);
        }

        NORMALIZE_EXCEPTION(&exception_keeper_type_13, &exception_keeper_value_13, &exception_keeper_tb_13);
        PyException_SetTraceback(exception_keeper_value_13, (PyObject *)exception_keeper_tb_13);
        PUBLISH_EXCEPTION(&exception_keeper_type_13, &exception_keeper_value_13, &exception_keeper_tb_13);
        // Tried code:
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_5 = PyExc_TypeError;
            tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_5, tmp_compexpr_right_5);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 480;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_17;
            }
            tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
            branch_yes_7:;
            {
                PyObject *tmp_assign_source_28;
                PyObject *tmp_called_instance_11;
                CHECK_OBJECT(var_low_conn);
                tmp_called_instance_11 = var_low_conn;
                frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 482;
                tmp_assign_source_28 = CALL_METHOD_NO_ARGS(tmp_called_instance_11, const_str_plain_getresponse);
                if (tmp_assign_source_28 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 482;
                    type_description_1 = "oooooooooobooooooooo";
                    goto try_except_handler_17;
                }
                assert(var_r == NULL);
                var_r = tmp_assign_source_28;
            }
            goto branch_end_7;
            branch_no_7:;
            tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            if (unlikely(tmp_result == false)) {
                exception_lineno = 477;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_9cad0070da42b24f25ccb7c0be48a073->m_frame) frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooooooobooooooooo";
            goto try_except_handler_17;
            branch_end_7:;
        }
        goto try_end_10;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Restore previous exception.
        SET_CURRENT_EXCEPTION(exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3);
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_11;
        // End of try:
        try_end_10:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION(exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3);
        goto try_end_9;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_17_send);
        return NULL;
        // End of try:
        try_end_9:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_name_12;
            PyObject *tmp_source_name_22;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_9;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            PyObject *tmp_dict_key_23;
            PyObject *tmp_dict_value_23;
            PyObject *tmp_dict_key_24;
            PyObject *tmp_dict_value_24;
            PyObject *tmp_dict_key_25;
            PyObject *tmp_dict_value_25;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_HTTPResponse);

            if (unlikely(tmp_mvar_value_7 == NULL)) {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPResponse);
            }

            if (tmp_mvar_value_7 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20473 ], 34, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 484;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_11;
            }

            tmp_source_name_22 = tmp_mvar_value_7;
            tmp_called_name_12 = LOOKUP_ATTRIBUTE(tmp_source_name_22, const_str_plain_from_httplib);
            if (tmp_called_name_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_11;
            }
            if (var_r == NULL) {
                Py_DECREF(tmp_called_name_12);
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "r");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 485;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_11;
            }

            tmp_tuple_element_4 = var_r;
            tmp_args_name_4 = PyTuple_New(1);
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_4, 0, tmp_tuple_element_4);
            tmp_dict_key_22 = const_str_plain_pool;
            CHECK_OBJECT(var_conn);
            tmp_dict_value_22 = var_conn;
            tmp_kw_name_9 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_kw_name_9, tmp_dict_key_22, tmp_dict_value_22);
            assert(!(tmp_res != 0));
            tmp_dict_key_23 = const_str_plain_connection;
            CHECK_OBJECT(var_low_conn);
            tmp_dict_value_23 = var_low_conn;
            tmp_res = PyDict_SetItem(tmp_kw_name_9, tmp_dict_key_23, tmp_dict_value_23);
            assert(!(tmp_res != 0));
            tmp_dict_key_24 = const_str_plain_preload_content;
            tmp_dict_value_24 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_name_9, tmp_dict_key_24, tmp_dict_value_24);
            assert(!(tmp_res != 0));
            tmp_dict_key_25 = const_str_plain_decode_content;
            tmp_dict_value_25 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_name_9, tmp_dict_key_25, tmp_dict_value_25);
            assert(!(tmp_res != 0));
            frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 484;
            tmp_assign_source_29 = CALL_FUNCTION(tmp_called_name_12, tmp_args_name_4, tmp_kw_name_9);
            Py_DECREF(tmp_called_name_12);
            Py_DECREF(tmp_args_name_4);
            Py_DECREF(tmp_kw_name_9);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_11;
            }
            assert(var_resp == NULL);
            var_resp = tmp_assign_source_29;
        }
        goto try_end_11;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Preserve existing published exception.
        exception_preserved_type_4 = EXC_TYPE(PyThreadState_GET());
        Py_XINCREF(exception_preserved_type_4);
        exception_preserved_value_4 = EXC_VALUE(PyThreadState_GET());
        Py_XINCREF(exception_preserved_value_4);
        exception_preserved_tb_4 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
        Py_XINCREF(exception_preserved_tb_4);

        if (exception_keeper_tb_15 == NULL) {
            exception_keeper_tb_15 = MAKE_TRACEBACK(frame_9cad0070da42b24f25ccb7c0be48a073, exception_keeper_lineno_15);
        } else if (exception_keeper_lineno_15 != 0) {
            exception_keeper_tb_15 = ADD_TRACEBACK(exception_keeper_tb_15, frame_9cad0070da42b24f25ccb7c0be48a073, exception_keeper_lineno_15);
        }

        NORMALIZE_EXCEPTION(&exception_keeper_type_15, &exception_keeper_value_15, &exception_keeper_tb_15);
        PyException_SetTraceback(exception_keeper_value_15, (PyObject *)exception_keeper_tb_15);
        PUBLISH_EXCEPTION(&exception_keeper_type_15, &exception_keeper_value_15, &exception_keeper_tb_15);
        // Tried code:
        {
            PyObject *tmp_called_instance_12;
            PyObject *tmp_call_result_11;
            CHECK_OBJECT(var_low_conn);
            tmp_called_instance_12 = var_low_conn;
            frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 494;
            tmp_call_result_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_12, const_str_plain_close);
            if (tmp_call_result_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 494;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_18;
            }
            Py_DECREF(tmp_call_result_11);
        }
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 495;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_9cad0070da42b24f25ccb7c0be48a073->m_frame) frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooooobooooooooo";
        goto try_except_handler_18;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_17_send);
        return NULL;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Restore previous exception.
        SET_CURRENT_EXCEPTION(exception_preserved_type_4, exception_preserved_value_4, exception_preserved_tb_4);
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_10;
        // End of try:
        // End of try:
        try_end_11:;
        branch_end_5:;
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_5 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_5);
    exception_preserved_value_5 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_5);
    exception_preserved_tb_5 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_5);

    if (exception_keeper_tb_17 == NULL) {
        exception_keeper_tb_17 = MAKE_TRACEBACK(frame_9cad0070da42b24f25ccb7c0be48a073, exception_keeper_lineno_17);
    } else if (exception_keeper_lineno_17 != 0) {
        exception_keeper_tb_17 = ADD_TRACEBACK(exception_keeper_tb_17, frame_9cad0070da42b24f25ccb7c0be48a073, exception_keeper_lineno_17);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_17, &exception_keeper_value_17, &exception_keeper_tb_17);
    PyException_SetTraceback(exception_keeper_value_17, (PyObject *)exception_keeper_tb_17);
    PUBLISH_EXCEPTION(&exception_keeper_type_17, &exception_keeper_value_17, &exception_keeper_tb_17);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_source_name_23;
        PyObject *tmp_mvar_value_9;
        tmp_compexpr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ProtocolError);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProtocolError);
        }

        if (tmp_mvar_value_8 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20507 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 497;
            type_description_1 = "oooooooooobooooooooo";
            goto try_except_handler_19;
        }

        tmp_tuple_element_5 = tmp_mvar_value_8;
        tmp_compexpr_right_6 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_5);
        PyTuple_SET_ITEM(tmp_compexpr_right_6, 0, tmp_tuple_element_5);
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_socket);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_socket);
        }

        if (tmp_mvar_value_9 == NULL) {
            Py_DECREF(tmp_compexpr_right_6);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20542 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 497;
            type_description_1 = "oooooooooobooooooooo";
            goto try_except_handler_19;
        }

        tmp_source_name_23 = tmp_mvar_value_9;
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_source_name_23, const_str_plain_error);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_right_6);

            exception_lineno = 497;
            type_description_1 = "oooooooooobooooooooo";
            goto try_except_handler_19;
        }
        PyTuple_SET_ITEM(tmp_compexpr_right_6, 1, tmp_tuple_element_5);
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_6, tmp_compexpr_right_6);
        Py_DECREF(tmp_compexpr_right_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "oooooooooobooooooooo";
            goto try_except_handler_19;
        }
        tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
        branch_yes_8:;
        {
            PyObject *tmp_assign_source_30;
            tmp_assign_source_30 = EXC_VALUE(PyThreadState_GET());
            assert(var_err == NULL);
            Py_INCREF(tmp_assign_source_30);
            var_err = tmp_assign_source_30;
        }
        // Tried code:
        {
            PyObject *tmp_raise_type_3;
            PyObject *tmp_called_name_13;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_10;
            PyObject *tmp_dict_key_26;
            PyObject *tmp_dict_value_26;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ConnectionError);

            if (unlikely(tmp_mvar_value_10 == NULL)) {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError);
            }

            if (tmp_mvar_value_10 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20570 ], 37, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 498;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_20;
            }

            tmp_called_name_13 = tmp_mvar_value_10;
            CHECK_OBJECT(var_err);
            tmp_tuple_element_6 = var_err;
            tmp_args_name_5 = PyTuple_New(1);
            Py_INCREF(tmp_tuple_element_6);
            PyTuple_SET_ITEM(tmp_args_name_5, 0, tmp_tuple_element_6);
            tmp_dict_key_26 = const_str_plain_request;
            CHECK_OBJECT(par_request);
            tmp_dict_value_26 = par_request;
            tmp_kw_name_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_name_10, tmp_dict_key_26, tmp_dict_value_26);
            assert(!(tmp_res != 0));
            frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 498;
            tmp_raise_type_3 = CALL_FUNCTION(tmp_called_name_13, tmp_args_name_5, tmp_kw_name_10);
            Py_DECREF(tmp_args_name_5);
            Py_DECREF(tmp_kw_name_10);
            if (tmp_raise_type_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 498;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_20;
            }
            exception_type = tmp_raise_type_3;
            exception_lineno = 498;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooooooooobooooooooo";
            goto try_except_handler_20;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_17_send);
        return NULL;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(var_err);
        var_err = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto try_except_handler_19;
        // End of try:
        goto branch_end_8;
        branch_no_8:;
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            PyObject *tmp_mvar_value_11;
            tmp_compexpr_left_7 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_MaxRetryError);

            if (unlikely(tmp_mvar_value_11 == NULL)) {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MaxRetryError);
            }

            if (tmp_mvar_value_11 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 20607 ], 35, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 500;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_19;
            }

            tmp_compexpr_right_7 = tmp_mvar_value_11;
            tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_7, tmp_compexpr_right_7);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 500;
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_19;
            }
            tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
            branch_yes_9:;
            {
                PyObject *tmp_assign_source_31;
                tmp_assign_source_31 = EXC_VALUE(PyThreadState_GET());
                assert(var_e == NULL);
                Py_INCREF(tmp_assign_source_31);
                var_e = tmp_assign_source_31;
            }
            // Tried code:
            {
                nuitka_bool tmp_condition_result_10;
                PyObject *tmp_isinstance_inst_3;
                PyObject *tmp_isinstance_cls_3;
                PyObject *tmp_source_name_24;
                PyObject *tmp_mvar_value_12;
                CHECK_OBJECT(var_e);
                tmp_source_name_24 = var_e;
                tmp_isinstance_inst_3 = LOOKUP_ATTRIBUTE(tmp_source_name_24, const_str_plain_reason);
                if (tmp_isinstance_inst_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 501;
                    type_description_1 = "oooooooooobooooooooo";
                    goto try_except_handler_21;
                }
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError);

                if (unlikely(tmp_mvar_value_12 == NULL)) {
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError);
                }

                if (tmp_mvar_value_12 == NULL) {
                    Py_DECREF(tmp_isinstance_inst_3);
                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 20642 ], 41, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 501;
                    type_description_1 = "oooooooooobooooooooo";
                    goto try_except_handler_21;
                }

                tmp_isinstance_cls_3 = tmp_mvar_value_12;
                tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
                Py_DECREF(tmp_isinstance_inst_3);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 501;
                    type_description_1 = "oooooooooobooooooooo";
                    goto try_except_handler_21;
                }
                tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_10;
                } else {
                    goto branch_no_10;
                }
                branch_yes_10:;
                {
                    nuitka_bool tmp_condition_result_11;
                    PyObject *tmp_operand_name_4;
                    PyObject *tmp_isinstance_inst_4;
                    PyObject *tmp_isinstance_cls_4;
                    PyObject *tmp_source_name_25;
                    PyObject *tmp_mvar_value_13;
                    CHECK_OBJECT(var_e);
                    tmp_source_name_25 = var_e;
                    tmp_isinstance_inst_4 = LOOKUP_ATTRIBUTE(tmp_source_name_25, const_str_plain_reason);
                    if (tmp_isinstance_inst_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 503;
                        type_description_1 = "oooooooooobooooooooo";
                        goto try_except_handler_21;
                    }
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_NewConnectionError);

                    if (unlikely(tmp_mvar_value_13 == NULL)) {
                        tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NewConnectionError);
                    }

                    if (tmp_mvar_value_13 == NULL) {
                        Py_DECREF(tmp_isinstance_inst_4);
                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 20683 ], 40, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 503;
                        type_description_1 = "oooooooooobooooooooo";
                        goto try_except_handler_21;
                    }

                    tmp_isinstance_cls_4 = tmp_mvar_value_13;
                    tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
                    Py_DECREF(tmp_isinstance_inst_4);
                    if (tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 503;
                        type_description_1 = "oooooooooobooooooooo";
                        goto try_except_handler_21;
                    }
                    tmp_operand_name_4 = (tmp_res != 0) ? Py_True : Py_False;
                    tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
                    if (tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 503;
                        type_description_1 = "oooooooooobooooooooo";
                        goto try_except_handler_21;
                    }
                    tmp_condition_result_11 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_11;
                    } else {
                        goto branch_no_11;
                    }
                    branch_yes_11:;
                    {
                        PyObject *tmp_raise_type_4;
                        PyObject *tmp_called_name_14;
                        PyObject *tmp_mvar_value_14;
                        PyObject *tmp_args_name_6;
                        PyObject *tmp_tuple_element_7;
                        PyObject *tmp_kw_name_11;
                        PyObject *tmp_dict_key_27;
                        PyObject *tmp_dict_value_27;
                        tmp_mvar_value_14 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ConnectTimeout);

                        if (unlikely(tmp_mvar_value_14 == NULL)) {
                            tmp_mvar_value_14 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectTimeout);
                        }

                        if (tmp_mvar_value_14 == NULL) {

                            exception_type = PyExc_NameError;
                            Py_INCREF(exception_type);
                            exception_value = UNSTREAM_STRING(&constant_bin[ 20723 ], 36, 0);
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                            CHAIN_EXCEPTION(exception_value);

                            exception_lineno = 504;
                            type_description_1 = "oooooooooobooooooooo";
                            goto try_except_handler_21;
                        }

                        tmp_called_name_14 = tmp_mvar_value_14;
                        CHECK_OBJECT(var_e);
                        tmp_tuple_element_7 = var_e;
                        tmp_args_name_6 = PyTuple_New(1);
                        Py_INCREF(tmp_tuple_element_7);
                        PyTuple_SET_ITEM(tmp_args_name_6, 0, tmp_tuple_element_7);
                        tmp_dict_key_27 = const_str_plain_request;
                        CHECK_OBJECT(par_request);
                        tmp_dict_value_27 = par_request;
                        tmp_kw_name_11 = _PyDict_NewPresized( 1 );
                        tmp_res = PyDict_SetItem(tmp_kw_name_11, tmp_dict_key_27, tmp_dict_value_27);
                        assert(!(tmp_res != 0));
                        frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 504;
                        tmp_raise_type_4 = CALL_FUNCTION(tmp_called_name_14, tmp_args_name_6, tmp_kw_name_11);
                        Py_DECREF(tmp_args_name_6);
                        Py_DECREF(tmp_kw_name_11);
                        if (tmp_raise_type_4 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 504;
                            type_description_1 = "oooooooooobooooooooo";
                            goto try_except_handler_21;
                        }
                        exception_type = tmp_raise_type_4;
                        exception_lineno = 504;
                        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                        type_description_1 = "oooooooooobooooooooo";
                        goto try_except_handler_21;
                    }
                    branch_no_11:;
                }
                branch_no_10:;
            }
            {
                nuitka_bool tmp_condition_result_12;
                PyObject *tmp_isinstance_inst_5;
                PyObject *tmp_isinstance_cls_5;
                PyObject *tmp_source_name_26;
                PyObject *tmp_mvar_value_15;
                CHECK_OBJECT(var_e);
                tmp_source_name_26 = var_e;
                tmp_isinstance_inst_5 = LOOKUP_ATTRIBUTE(tmp_source_name_26, const_str_plain_reason);
                if (tmp_isinstance_inst_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 506;
                    type_description_1 = "oooooooooobooooooooo";
                    goto try_except_handler_21;
                }
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ResponseError);

                if (unlikely(tmp_mvar_value_15 == NULL)) {
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ResponseError);
                }

                if (tmp_mvar_value_15 == NULL) {
                    Py_DECREF(tmp_isinstance_inst_5);
                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 20759 ], 35, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 506;
                    type_description_1 = "oooooooooobooooooooo";
                    goto try_except_handler_21;
                }

                tmp_isinstance_cls_5 = tmp_mvar_value_15;
                tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
                Py_DECREF(tmp_isinstance_inst_5);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 506;
                    type_description_1 = "oooooooooobooooooooo";
                    goto try_except_handler_21;
                }
                tmp_condition_result_12 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_12;
                } else {
                    goto branch_no_12;
                }
                branch_yes_12:;
                {
                    PyObject *tmp_raise_type_5;
                    PyObject *tmp_called_name_15;
                    PyObject *tmp_mvar_value_16;
                    PyObject *tmp_args_name_7;
                    PyObject *tmp_tuple_element_8;
                    PyObject *tmp_kw_name_12;
                    PyObject *tmp_dict_key_28;
                    PyObject *tmp_dict_value_28;
                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_RetryError);

                    if (unlikely(tmp_mvar_value_16 == NULL)) {
                        tmp_mvar_value_16 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_RetryError);
                    }

                    if (tmp_mvar_value_16 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 20794 ], 32, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 507;
                        type_description_1 = "oooooooooobooooooooo";
                        goto try_except_handler_21;
                    }

                    tmp_called_name_15 = tmp_mvar_value_16;
                    CHECK_OBJECT(var_e);
                    tmp_tuple_element_8 = var_e;
                    tmp_args_name_7 = PyTuple_New(1);
                    Py_INCREF(tmp_tuple_element_8);
                    PyTuple_SET_ITEM(tmp_args_name_7, 0, tmp_tuple_element_8);
                    tmp_dict_key_28 = const_str_plain_request;
                    CHECK_OBJECT(par_request);
                    tmp_dict_value_28 = par_request;
                    tmp_kw_name_12 = _PyDict_NewPresized( 1 );
                    tmp_res = PyDict_SetItem(tmp_kw_name_12, tmp_dict_key_28, tmp_dict_value_28);
                    assert(!(tmp_res != 0));
                    frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 507;
                    tmp_raise_type_5 = CALL_FUNCTION(tmp_called_name_15, tmp_args_name_7, tmp_kw_name_12);
                    Py_DECREF(tmp_args_name_7);
                    Py_DECREF(tmp_kw_name_12);
                    if (tmp_raise_type_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 507;
                        type_description_1 = "oooooooooobooooooooo";
                        goto try_except_handler_21;
                    }
                    exception_type = tmp_raise_type_5;
                    exception_lineno = 507;
                    RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooooobooooooooo";
                    goto try_except_handler_21;
                }
                branch_no_12:;
            }
            {
                nuitka_bool tmp_condition_result_13;
                PyObject *tmp_isinstance_inst_6;
                PyObject *tmp_isinstance_cls_6;
                PyObject *tmp_source_name_27;
                PyObject *tmp_mvar_value_17;
                CHECK_OBJECT(var_e);
                tmp_source_name_27 = var_e;
                tmp_isinstance_inst_6 = LOOKUP_ATTRIBUTE(tmp_source_name_27, const_str_plain_reason);
                if (tmp_isinstance_inst_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 509;
                    type_description_1 = "oooooooooobooooooooo";
                    goto try_except_handler_21;
                }
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__ProxyError);

                if (unlikely(tmp_mvar_value_17 == NULL)) {
                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__ProxyError);
                }

                if (tmp_mvar_value_17 == NULL) {
                    Py_DECREF(tmp_isinstance_inst_6);
                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 20826 ], 33, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 509;
                    type_description_1 = "oooooooooobooooooooo";
                    goto try_except_handler_21;
                }

                tmp_isinstance_cls_6 = tmp_mvar_value_17;
                tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_6, tmp_isinstance_cls_6);
                Py_DECREF(tmp_isinstance_inst_6);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 509;
                    type_description_1 = "oooooooooobooooooooo";
                    goto try_except_handler_21;
                }
                tmp_condition_result_13 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_13;
                } else {
                    goto branch_no_13;
                }
                branch_yes_13:;
                {
                    PyObject *tmp_raise_type_6;
                    PyObject *tmp_called_name_16;
                    PyObject *tmp_mvar_value_18;
                    PyObject *tmp_args_name_8;
                    PyObject *tmp_tuple_element_9;
                    PyObject *tmp_kw_name_13;
                    PyObject *tmp_dict_key_29;
                    PyObject *tmp_dict_value_29;
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ProxyError);

                    if (unlikely(tmp_mvar_value_18 == NULL)) {
                        tmp_mvar_value_18 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProxyError);
                    }

                    if (tmp_mvar_value_18 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 20859 ], 32, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 510;
                        type_description_1 = "oooooooooobooooooooo";
                        goto try_except_handler_21;
                    }

                    tmp_called_name_16 = tmp_mvar_value_18;
                    CHECK_OBJECT(var_e);
                    tmp_tuple_element_9 = var_e;
                    tmp_args_name_8 = PyTuple_New(1);
                    Py_INCREF(tmp_tuple_element_9);
                    PyTuple_SET_ITEM(tmp_args_name_8, 0, tmp_tuple_element_9);
                    tmp_dict_key_29 = const_str_plain_request;
                    CHECK_OBJECT(par_request);
                    tmp_dict_value_29 = par_request;
                    tmp_kw_name_13 = _PyDict_NewPresized( 1 );
                    tmp_res = PyDict_SetItem(tmp_kw_name_13, tmp_dict_key_29, tmp_dict_value_29);
                    assert(!(tmp_res != 0));
                    frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 510;
                    tmp_raise_type_6 = CALL_FUNCTION(tmp_called_name_16, tmp_args_name_8, tmp_kw_name_13);
                    Py_DECREF(tmp_args_name_8);
                    Py_DECREF(tmp_kw_name_13);
                    if (tmp_raise_type_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 510;
                        type_description_1 = "oooooooooobooooooooo";
                        goto try_except_handler_21;
                    }
                    exception_type = tmp_raise_type_6;
                    exception_lineno = 510;
                    RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooooobooooooooo";
                    goto try_except_handler_21;
                }
                branch_no_13:;
            }
            {
                nuitka_bool tmp_condition_result_14;
                PyObject *tmp_isinstance_inst_7;
                PyObject *tmp_isinstance_cls_7;
                PyObject *tmp_source_name_28;
                PyObject *tmp_mvar_value_19;
                CHECK_OBJECT(var_e);
                tmp_source_name_28 = var_e;
                tmp_isinstance_inst_7 = LOOKUP_ATTRIBUTE(tmp_source_name_28, const_str_plain_reason);
                if (tmp_isinstance_inst_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 512;
                    type_description_1 = "oooooooooobooooooooo";
                    goto try_except_handler_21;
                }
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__SSLError);

                if (unlikely(tmp_mvar_value_19 == NULL)) {
                    tmp_mvar_value_19 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__SSLError);
                }

                if (tmp_mvar_value_19 == NULL) {
                    Py_DECREF(tmp_isinstance_inst_7);
                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 20891 ], 31, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 512;
                    type_description_1 = "oooooooooobooooooooo";
                    goto try_except_handler_21;
                }

                tmp_isinstance_cls_7 = tmp_mvar_value_19;
                tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_7, tmp_isinstance_cls_7);
                Py_DECREF(tmp_isinstance_inst_7);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 512;
                    type_description_1 = "oooooooooobooooooooo";
                    goto try_except_handler_21;
                }
                tmp_condition_result_14 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_14;
                } else {
                    goto branch_no_14;
                }
                branch_yes_14:;
                {
                    PyObject *tmp_raise_type_7;
                    PyObject *tmp_called_name_17;
                    PyObject *tmp_mvar_value_20;
                    PyObject *tmp_args_name_9;
                    PyObject *tmp_tuple_element_10;
                    PyObject *tmp_kw_name_14;
                    PyObject *tmp_dict_key_30;
                    PyObject *tmp_dict_value_30;
                    tmp_mvar_value_20 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_SSLError);

                    if (unlikely(tmp_mvar_value_20 == NULL)) {
                        tmp_mvar_value_20 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError);
                    }

                    if (tmp_mvar_value_20 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 20922 ], 30, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 514;
                        type_description_1 = "oooooooooobooooooooo";
                        goto try_except_handler_21;
                    }

                    tmp_called_name_17 = tmp_mvar_value_20;
                    CHECK_OBJECT(var_e);
                    tmp_tuple_element_10 = var_e;
                    tmp_args_name_9 = PyTuple_New(1);
                    Py_INCREF(tmp_tuple_element_10);
                    PyTuple_SET_ITEM(tmp_args_name_9, 0, tmp_tuple_element_10);
                    tmp_dict_key_30 = const_str_plain_request;
                    CHECK_OBJECT(par_request);
                    tmp_dict_value_30 = par_request;
                    tmp_kw_name_14 = _PyDict_NewPresized( 1 );
                    tmp_res = PyDict_SetItem(tmp_kw_name_14, tmp_dict_key_30, tmp_dict_value_30);
                    assert(!(tmp_res != 0));
                    frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 514;
                    tmp_raise_type_7 = CALL_FUNCTION(tmp_called_name_17, tmp_args_name_9, tmp_kw_name_14);
                    Py_DECREF(tmp_args_name_9);
                    Py_DECREF(tmp_kw_name_14);
                    if (tmp_raise_type_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 514;
                        type_description_1 = "oooooooooobooooooooo";
                        goto try_except_handler_21;
                    }
                    exception_type = tmp_raise_type_7;
                    exception_lineno = 514;
                    RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooooobooooooooo";
                    goto try_except_handler_21;
                }
                branch_no_14:;
            }
            {
                PyObject *tmp_raise_type_8;
                PyObject *tmp_called_name_18;
                PyObject *tmp_mvar_value_21;
                PyObject *tmp_args_name_10;
                PyObject *tmp_tuple_element_11;
                PyObject *tmp_kw_name_15;
                PyObject *tmp_dict_key_31;
                PyObject *tmp_dict_value_31;
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ConnectionError);

                if (unlikely(tmp_mvar_value_21 == NULL)) {
                    tmp_mvar_value_21 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError);
                }

                if (tmp_mvar_value_21 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 20570 ], 37, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 516;
                    type_description_1 = "oooooooooobooooooooo";
                    goto try_except_handler_21;
                }

                tmp_called_name_18 = tmp_mvar_value_21;
                CHECK_OBJECT(var_e);
                tmp_tuple_element_11 = var_e;
                tmp_args_name_10 = PyTuple_New(1);
                Py_INCREF(tmp_tuple_element_11);
                PyTuple_SET_ITEM(tmp_args_name_10, 0, tmp_tuple_element_11);
                tmp_dict_key_31 = const_str_plain_request;
                CHECK_OBJECT(par_request);
                tmp_dict_value_31 = par_request;
                tmp_kw_name_15 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem(tmp_kw_name_15, tmp_dict_key_31, tmp_dict_value_31);
                assert(!(tmp_res != 0));
                frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 516;
                tmp_raise_type_8 = CALL_FUNCTION(tmp_called_name_18, tmp_args_name_10, tmp_kw_name_15);
                Py_DECREF(tmp_args_name_10);
                Py_DECREF(tmp_kw_name_15);
                if (tmp_raise_type_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 516;
                    type_description_1 = "oooooooooobooooooooo";
                    goto try_except_handler_21;
                }
                exception_type = tmp_raise_type_8;
                exception_lineno = 516;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooobooooooooo";
                goto try_except_handler_21;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_17_send);
            return NULL;
            // Exception handler code:
            try_except_handler_21:;
            exception_keeper_type_19 = exception_type;
            exception_keeper_value_19 = exception_value;
            exception_keeper_tb_19 = exception_tb;
            exception_keeper_lineno_19 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF(var_e);
            var_e = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_19;
            exception_value = exception_keeper_value_19;
            exception_tb = exception_keeper_tb_19;
            exception_lineno = exception_keeper_lineno_19;

            goto try_except_handler_19;
            // End of try:
            goto branch_end_9;
            branch_no_9:;
            {
                nuitka_bool tmp_condition_result_15;
                PyObject *tmp_compexpr_left_8;
                PyObject *tmp_compexpr_right_8;
                PyObject *tmp_mvar_value_22;
                tmp_compexpr_left_8 = EXC_TYPE(PyThreadState_GET());
                tmp_mvar_value_22 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ClosedPoolError);

                if (unlikely(tmp_mvar_value_22 == NULL)) {
                    tmp_mvar_value_22 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ClosedPoolError);
                }

                if (tmp_mvar_value_22 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 20952 ], 37, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 518;
                    type_description_1 = "oooooooooobooooooooo";
                    goto try_except_handler_19;
                }

                tmp_compexpr_right_8 = tmp_mvar_value_22;
                tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_8, tmp_compexpr_right_8);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 518;
                    type_description_1 = "oooooooooobooooooooo";
                    goto try_except_handler_19;
                }
                tmp_condition_result_15 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_15;
                } else {
                    goto branch_no_15;
                }
                branch_yes_15:;
                {
                    PyObject *tmp_assign_source_32;
                    tmp_assign_source_32 = EXC_VALUE(PyThreadState_GET());
                    assert(var_e == NULL);
                    Py_INCREF(tmp_assign_source_32);
                    var_e = tmp_assign_source_32;
                }
                // Tried code:
                {
                    PyObject *tmp_raise_type_9;
                    PyObject *tmp_called_name_19;
                    PyObject *tmp_mvar_value_23;
                    PyObject *tmp_args_name_11;
                    PyObject *tmp_tuple_element_12;
                    PyObject *tmp_kw_name_16;
                    PyObject *tmp_dict_key_32;
                    PyObject *tmp_dict_value_32;
                    tmp_mvar_value_23 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ConnectionError);

                    if (unlikely(tmp_mvar_value_23 == NULL)) {
                        tmp_mvar_value_23 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError);
                    }

                    if (tmp_mvar_value_23 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 20570 ], 37, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 519;
                        type_description_1 = "oooooooooobooooooooo";
                        goto try_except_handler_22;
                    }

                    tmp_called_name_19 = tmp_mvar_value_23;
                    CHECK_OBJECT(var_e);
                    tmp_tuple_element_12 = var_e;
                    tmp_args_name_11 = PyTuple_New(1);
                    Py_INCREF(tmp_tuple_element_12);
                    PyTuple_SET_ITEM(tmp_args_name_11, 0, tmp_tuple_element_12);
                    tmp_dict_key_32 = const_str_plain_request;
                    CHECK_OBJECT(par_request);
                    tmp_dict_value_32 = par_request;
                    tmp_kw_name_16 = _PyDict_NewPresized( 1 );
                    tmp_res = PyDict_SetItem(tmp_kw_name_16, tmp_dict_key_32, tmp_dict_value_32);
                    assert(!(tmp_res != 0));
                    frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 519;
                    tmp_raise_type_9 = CALL_FUNCTION(tmp_called_name_19, tmp_args_name_11, tmp_kw_name_16);
                    Py_DECREF(tmp_args_name_11);
                    Py_DECREF(tmp_kw_name_16);
                    if (tmp_raise_type_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 519;
                        type_description_1 = "oooooooooobooooooooo";
                        goto try_except_handler_22;
                    }
                    exception_type = tmp_raise_type_9;
                    exception_lineno = 519;
                    RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooooobooooooooo";
                    goto try_except_handler_22;
                }
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_17_send);
                return NULL;
                // Exception handler code:
                try_except_handler_22:;
                exception_keeper_type_20 = exception_type;
                exception_keeper_value_20 = exception_value;
                exception_keeper_tb_20 = exception_tb;
                exception_keeper_lineno_20 = exception_lineno;
                exception_type = NULL;
                exception_value = NULL;
                exception_tb = NULL;
                exception_lineno = 0;

                Py_XDECREF(var_e);
                var_e = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_20;
                exception_value = exception_keeper_value_20;
                exception_tb = exception_keeper_tb_20;
                exception_lineno = exception_keeper_lineno_20;

                goto try_except_handler_19;
                // End of try:
                goto branch_end_15;
                branch_no_15:;
                {
                    nuitka_bool tmp_condition_result_16;
                    PyObject *tmp_compexpr_left_9;
                    PyObject *tmp_compexpr_right_9;
                    PyObject *tmp_mvar_value_24;
                    tmp_compexpr_left_9 = EXC_TYPE(PyThreadState_GET());
                    tmp_mvar_value_24 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__ProxyError);

                    if (unlikely(tmp_mvar_value_24 == NULL)) {
                        tmp_mvar_value_24 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__ProxyError);
                    }

                    if (tmp_mvar_value_24 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 20826 ], 33, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 521;
                        type_description_1 = "oooooooooobooooooooo";
                        goto try_except_handler_19;
                    }

                    tmp_compexpr_right_9 = tmp_mvar_value_24;
                    tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_9, tmp_compexpr_right_9);
                    if (tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 521;
                        type_description_1 = "oooooooooobooooooooo";
                        goto try_except_handler_19;
                    }
                    tmp_condition_result_16 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_16;
                    } else {
                        goto branch_no_16;
                    }
                    branch_yes_16:;
                    {
                        PyObject *tmp_assign_source_33;
                        tmp_assign_source_33 = EXC_VALUE(PyThreadState_GET());
                        assert(var_e == NULL);
                        Py_INCREF(tmp_assign_source_33);
                        var_e = tmp_assign_source_33;
                    }
                    // Tried code:
                    {
                        PyObject *tmp_raise_type_10;
                        PyObject *tmp_called_name_20;
                        PyObject *tmp_mvar_value_25;
                        PyObject *tmp_args_element_name_14;
                        tmp_mvar_value_25 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ProxyError);

                        if (unlikely(tmp_mvar_value_25 == NULL)) {
                            tmp_mvar_value_25 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProxyError);
                        }

                        if (tmp_mvar_value_25 == NULL) {

                            exception_type = PyExc_NameError;
                            Py_INCREF(exception_type);
                            exception_value = UNSTREAM_STRING(&constant_bin[ 20859 ], 32, 0);
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                            CHAIN_EXCEPTION(exception_value);

                            exception_lineno = 522;
                            type_description_1 = "oooooooooobooooooooo";
                            goto try_except_handler_23;
                        }

                        tmp_called_name_20 = tmp_mvar_value_25;
                        CHECK_OBJECT(var_e);
                        tmp_args_element_name_14 = var_e;
                        frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 522;
                        tmp_raise_type_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_20, tmp_args_element_name_14);
                        if (tmp_raise_type_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 522;
                            type_description_1 = "oooooooooobooooooooo";
                            goto try_except_handler_23;
                        }
                        exception_type = tmp_raise_type_10;
                        exception_lineno = 522;
                        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                        type_description_1 = "oooooooooobooooooooo";
                        goto try_except_handler_23;
                    }
                    // tried codes exits in all cases
                    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_17_send);
                    return NULL;
                    // Exception handler code:
                    try_except_handler_23:;
                    exception_keeper_type_21 = exception_type;
                    exception_keeper_value_21 = exception_value;
                    exception_keeper_tb_21 = exception_tb;
                    exception_keeper_lineno_21 = exception_lineno;
                    exception_type = NULL;
                    exception_value = NULL;
                    exception_tb = NULL;
                    exception_lineno = 0;

                    Py_XDECREF(var_e);
                    var_e = NULL;

                    // Re-raise.
                    exception_type = exception_keeper_type_21;
                    exception_value = exception_keeper_value_21;
                    exception_tb = exception_keeper_tb_21;
                    exception_lineno = exception_keeper_lineno_21;

                    goto try_except_handler_19;
                    // End of try:
                    goto branch_end_16;
                    branch_no_16:;
                    {
                        nuitka_bool tmp_condition_result_17;
                        PyObject *tmp_compexpr_left_10;
                        PyObject *tmp_compexpr_right_10;
                        PyObject *tmp_tuple_element_13;
                        PyObject *tmp_mvar_value_26;
                        PyObject *tmp_mvar_value_27;
                        tmp_compexpr_left_10 = EXC_TYPE(PyThreadState_GET());
                        tmp_mvar_value_26 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__SSLError);

                        if (unlikely(tmp_mvar_value_26 == NULL)) {
                            tmp_mvar_value_26 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__SSLError);
                        }

                        if (tmp_mvar_value_26 == NULL) {

                            exception_type = PyExc_NameError;
                            Py_INCREF(exception_type);
                            exception_value = UNSTREAM_STRING(&constant_bin[ 20891 ], 31, 0);
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                            CHAIN_EXCEPTION(exception_value);

                            exception_lineno = 524;
                            type_description_1 = "oooooooooobooooooooo";
                            goto try_except_handler_19;
                        }

                        tmp_tuple_element_13 = tmp_mvar_value_26;
                        tmp_compexpr_right_10 = PyTuple_New(2);
                        Py_INCREF(tmp_tuple_element_13);
                        PyTuple_SET_ITEM(tmp_compexpr_right_10, 0, tmp_tuple_element_13);
                        tmp_mvar_value_27 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__HTTPError);

                        if (unlikely(tmp_mvar_value_27 == NULL)) {
                            tmp_mvar_value_27 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__HTTPError);
                        }

                        if (tmp_mvar_value_27 == NULL) {
                            Py_DECREF(tmp_compexpr_right_10);
                            exception_type = PyExc_NameError;
                            Py_INCREF(exception_type);
                            exception_value = UNSTREAM_STRING(&constant_bin[ 20989 ], 32, 0);
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                            CHAIN_EXCEPTION(exception_value);

                            exception_lineno = 524;
                            type_description_1 = "oooooooooobooooooooo";
                            goto try_except_handler_19;
                        }

                        tmp_tuple_element_13 = tmp_mvar_value_27;
                        Py_INCREF(tmp_tuple_element_13);
                        PyTuple_SET_ITEM(tmp_compexpr_right_10, 1, tmp_tuple_element_13);
                        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_10, tmp_compexpr_right_10);
                        Py_DECREF(tmp_compexpr_right_10);
                        if (tmp_res == -1) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 524;
                            type_description_1 = "oooooooooobooooooooo";
                            goto try_except_handler_19;
                        }
                        tmp_condition_result_17 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                            goto branch_yes_17;
                        } else {
                            goto branch_no_17;
                        }
                        branch_yes_17:;
                        {
                            PyObject *tmp_assign_source_34;
                            tmp_assign_source_34 = EXC_VALUE(PyThreadState_GET());
                            assert(var_e == NULL);
                            Py_INCREF(tmp_assign_source_34);
                            var_e = tmp_assign_source_34;
                        }
                        // Tried code:
                        {
                            nuitka_bool tmp_condition_result_18;
                            PyObject *tmp_isinstance_inst_8;
                            PyObject *tmp_isinstance_cls_8;
                            PyObject *tmp_mvar_value_28;
                            CHECK_OBJECT(var_e);
                            tmp_isinstance_inst_8 = var_e;
                            tmp_mvar_value_28 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__SSLError);

                            if (unlikely(tmp_mvar_value_28 == NULL)) {
                                tmp_mvar_value_28 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__SSLError);
                            }

                            if (tmp_mvar_value_28 == NULL) {

                                exception_type = PyExc_NameError;
                                Py_INCREF(exception_type);
                                exception_value = UNSTREAM_STRING(&constant_bin[ 20891 ], 31, 0);
                                exception_tb = NULL;
                                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                                CHAIN_EXCEPTION(exception_value);

                                exception_lineno = 525;
                                type_description_1 = "oooooooooobooooooooo";
                                goto try_except_handler_24;
                            }

                            tmp_isinstance_cls_8 = tmp_mvar_value_28;
                            tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_8, tmp_isinstance_cls_8);
                            if (tmp_res == -1) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 525;
                                type_description_1 = "oooooooooobooooooooo";
                                goto try_except_handler_24;
                            }
                            tmp_condition_result_18 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                                goto branch_yes_18;
                            } else {
                                goto branch_no_18;
                            }
                            branch_yes_18:;
                            {
                                PyObject *tmp_raise_type_11;
                                PyObject *tmp_called_name_21;
                                PyObject *tmp_mvar_value_29;
                                PyObject *tmp_args_name_12;
                                PyObject *tmp_tuple_element_14;
                                PyObject *tmp_kw_name_17;
                                PyObject *tmp_dict_key_33;
                                PyObject *tmp_dict_value_33;
                                tmp_mvar_value_29 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_SSLError);

                                if (unlikely(tmp_mvar_value_29 == NULL)) {
                                    tmp_mvar_value_29 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError);
                                }

                                if (tmp_mvar_value_29 == NULL) {

                                    exception_type = PyExc_NameError;
                                    Py_INCREF(exception_type);
                                    exception_value = UNSTREAM_STRING(&constant_bin[ 20922 ], 30, 0);
                                    exception_tb = NULL;
                                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                                    CHAIN_EXCEPTION(exception_value);

                                    exception_lineno = 527;
                                    type_description_1 = "oooooooooobooooooooo";
                                    goto try_except_handler_24;
                                }

                                tmp_called_name_21 = tmp_mvar_value_29;
                                CHECK_OBJECT(var_e);
                                tmp_tuple_element_14 = var_e;
                                tmp_args_name_12 = PyTuple_New(1);
                                Py_INCREF(tmp_tuple_element_14);
                                PyTuple_SET_ITEM(tmp_args_name_12, 0, tmp_tuple_element_14);
                                tmp_dict_key_33 = const_str_plain_request;
                                CHECK_OBJECT(par_request);
                                tmp_dict_value_33 = par_request;
                                tmp_kw_name_17 = _PyDict_NewPresized( 1 );
                                tmp_res = PyDict_SetItem(tmp_kw_name_17, tmp_dict_key_33, tmp_dict_value_33);
                                assert(!(tmp_res != 0));
                                frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 527;
                                tmp_raise_type_11 = CALL_FUNCTION(tmp_called_name_21, tmp_args_name_12, tmp_kw_name_17);
                                Py_DECREF(tmp_args_name_12);
                                Py_DECREF(tmp_kw_name_17);
                                if (tmp_raise_type_11 == NULL) {
                                    assert(ERROR_OCCURRED());

                                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                    exception_lineno = 527;
                                    type_description_1 = "oooooooooobooooooooo";
                                    goto try_except_handler_24;
                                }
                                exception_type = tmp_raise_type_11;
                                exception_lineno = 527;
                                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                                type_description_1 = "oooooooooobooooooooo";
                                goto try_except_handler_24;
                            }
                            goto branch_end_18;
                            branch_no_18:;
                            {
                                nuitka_bool tmp_condition_result_19;
                                PyObject *tmp_isinstance_inst_9;
                                PyObject *tmp_isinstance_cls_9;
                                PyObject *tmp_mvar_value_30;
                                CHECK_OBJECT(var_e);
                                tmp_isinstance_inst_9 = var_e;
                                tmp_mvar_value_30 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError);

                                if (unlikely(tmp_mvar_value_30 == NULL)) {
                                    tmp_mvar_value_30 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError);
                                }

                                if (tmp_mvar_value_30 == NULL) {

                                    exception_type = PyExc_NameError;
                                    Py_INCREF(exception_type);
                                    exception_value = UNSTREAM_STRING(&constant_bin[ 21021 ], 38, 0);
                                    exception_tb = NULL;
                                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                                    CHAIN_EXCEPTION(exception_value);

                                    exception_lineno = 528;
                                    type_description_1 = "oooooooooobooooooooo";
                                    goto try_except_handler_24;
                                }

                                tmp_isinstance_cls_9 = tmp_mvar_value_30;
                                tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_9, tmp_isinstance_cls_9);
                                if (tmp_res == -1) {
                                    assert(ERROR_OCCURRED());

                                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                    exception_lineno = 528;
                                    type_description_1 = "oooooooooobooooooooo";
                                    goto try_except_handler_24;
                                }
                                tmp_condition_result_19 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                                if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
                                    goto branch_yes_19;
                                } else {
                                    goto branch_no_19;
                                }
                                branch_yes_19:;
                                {
                                    PyObject *tmp_raise_type_12;
                                    PyObject *tmp_called_name_22;
                                    PyObject *tmp_mvar_value_31;
                                    PyObject *tmp_args_name_13;
                                    PyObject *tmp_tuple_element_15;
                                    PyObject *tmp_kw_name_18;
                                    PyObject *tmp_dict_key_34;
                                    PyObject *tmp_dict_value_34;
                                    tmp_mvar_value_31 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ReadTimeout);

                                    if (unlikely(tmp_mvar_value_31 == NULL)) {
                                        tmp_mvar_value_31 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ReadTimeout);
                                    }

                                    if (tmp_mvar_value_31 == NULL) {

                                        exception_type = PyExc_NameError;
                                        Py_INCREF(exception_type);
                                        exception_value = UNSTREAM_STRING(&constant_bin[ 21059 ], 33, 0);
                                        exception_tb = NULL;
                                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                                        CHAIN_EXCEPTION(exception_value);

                                        exception_lineno = 529;
                                        type_description_1 = "oooooooooobooooooooo";
                                        goto try_except_handler_24;
                                    }

                                    tmp_called_name_22 = tmp_mvar_value_31;
                                    CHECK_OBJECT(var_e);
                                    tmp_tuple_element_15 = var_e;
                                    tmp_args_name_13 = PyTuple_New(1);
                                    Py_INCREF(tmp_tuple_element_15);
                                    PyTuple_SET_ITEM(tmp_args_name_13, 0, tmp_tuple_element_15);
                                    tmp_dict_key_34 = const_str_plain_request;
                                    CHECK_OBJECT(par_request);
                                    tmp_dict_value_34 = par_request;
                                    tmp_kw_name_18 = _PyDict_NewPresized( 1 );
                                    tmp_res = PyDict_SetItem(tmp_kw_name_18, tmp_dict_key_34, tmp_dict_value_34);
                                    assert(!(tmp_res != 0));
                                    frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 529;
                                    tmp_raise_type_12 = CALL_FUNCTION(tmp_called_name_22, tmp_args_name_13, tmp_kw_name_18);
                                    Py_DECREF(tmp_args_name_13);
                                    Py_DECREF(tmp_kw_name_18);
                                    if (tmp_raise_type_12 == NULL) {
                                        assert(ERROR_OCCURRED());

                                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                        exception_lineno = 529;
                                        type_description_1 = "oooooooooobooooooooo";
                                        goto try_except_handler_24;
                                    }
                                    exception_type = tmp_raise_type_12;
                                    exception_lineno = 529;
                                    RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                                    type_description_1 = "oooooooooobooooooooo";
                                    goto try_except_handler_24;
                                }
                                goto branch_end_19;
                                branch_no_19:;
                                tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                                if (unlikely(tmp_result == false)) {
                                    exception_lineno = 531;
                                }

                                if (exception_tb && exception_tb->tb_frame == &frame_9cad0070da42b24f25ccb7c0be48a073->m_frame) frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = exception_tb->tb_lineno;
                                type_description_1 = "oooooooooobooooooooo";
                                goto try_except_handler_24;
                                branch_end_19:;
                            }
                            branch_end_18:;
                        }
                        // tried codes exits in all cases
                        NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_17_send);
                        return NULL;
                        // Exception handler code:
                        try_except_handler_24:;
                        exception_keeper_type_22 = exception_type;
                        exception_keeper_value_22 = exception_value;
                        exception_keeper_tb_22 = exception_tb;
                        exception_keeper_lineno_22 = exception_lineno;
                        exception_type = NULL;
                        exception_value = NULL;
                        exception_tb = NULL;
                        exception_lineno = 0;

                        Py_XDECREF(var_e);
                        var_e = NULL;

                        // Re-raise.
                        exception_type = exception_keeper_type_22;
                        exception_value = exception_keeper_value_22;
                        exception_tb = exception_keeper_tb_22;
                        exception_lineno = exception_keeper_lineno_22;

                        goto try_except_handler_19;
                        // End of try:
                        goto branch_end_17;
                        branch_no_17:;
                        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        if (unlikely(tmp_result == false)) {
                            exception_lineno = 437;
                        }

                        if (exception_tb && exception_tb->tb_frame == &frame_9cad0070da42b24f25ccb7c0be48a073->m_frame) frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = exception_tb->tb_lineno;
                        type_description_1 = "oooooooooobooooooooo";
                        goto try_except_handler_19;
                        branch_end_17:;
                    }
                    branch_end_16:;
                }
                branch_end_15:;
            }
            branch_end_9:;
        }
        branch_end_8:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_17_send);
    return NULL;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_5, exception_preserved_value_5, exception_preserved_tb_5);
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_12:;
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        CHECK_OBJECT(par_self);
        tmp_called_instance_13 = par_self;
        CHECK_OBJECT(par_request);
        tmp_args_element_name_15 = par_request;
        CHECK_OBJECT(var_resp);
        tmp_args_element_name_16 = var_resp;
        frame_9cad0070da42b24f25ccb7c0be48a073->m_frame.f_lineno = 533;
        {
            PyObject *call_args[] = {tmp_args_element_name_15, tmp_args_element_name_16};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(tmp_called_instance_13, const_str_plain_build_response, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "oooooooooobooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9cad0070da42b24f25ccb7c0be48a073);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9cad0070da42b24f25ccb7c0be48a073);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9cad0070da42b24f25ccb7c0be48a073);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9cad0070da42b24f25ccb7c0be48a073, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_9cad0070da42b24f25ccb7c0be48a073->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9cad0070da42b24f25ccb7c0be48a073, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9cad0070da42b24f25ccb7c0be48a073,
        type_description_1,
        par_self,
        par_request,
        par_stream,
        par_timeout,
        par_verify,
        par_cert,
        par_proxies,
        var_conn,
        var_e,
        var_url,
        (int)var_chunked,
        var_connect,
        var_read,
        var_err,
        var_resp,
        var_low_conn,
        var_header,
        var_value,
        var_i,
        var_r
    );


    // Release cached frame.
    if (frame_9cad0070da42b24f25ccb7c0be48a073 == cache_frame_9cad0070da42b24f25ccb7c0be48a073) {
        Py_DECREF(frame_9cad0070da42b24f25ccb7c0be48a073);
    }
    cache_frame_9cad0070da42b24f25ccb7c0be48a073 = NULL;

    assertFrameObject(frame_9cad0070da42b24f25ccb7c0be48a073);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_17_send);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_timeout);
    par_timeout = NULL;

    Py_XDECREF(var_conn);
    var_conn = NULL;

    CHECK_OBJECT((PyObject *)var_url);
    Py_DECREF(var_url);
    var_url = NULL;

    Py_XDECREF(var_connect);
    var_connect = NULL;

    Py_XDECREF(var_read);
    var_read = NULL;

    CHECK_OBJECT((PyObject *)var_resp);
    Py_DECREF(var_resp);
    var_resp = NULL;

    Py_XDECREF(var_low_conn);
    var_low_conn = NULL;

    Py_XDECREF(var_header);
    var_header = NULL;

    Py_XDECREF(var_value);
    var_value = NULL;

    Py_XDECREF(var_i);
    var_i = NULL;

    Py_XDECREF(var_r);
    var_r = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_timeout);
    par_timeout = NULL;

    Py_XDECREF(var_conn);
    var_conn = NULL;

    Py_XDECREF(var_e);
    var_e = NULL;

    Py_XDECREF(var_url);
    var_url = NULL;

    Py_XDECREF(var_connect);
    var_connect = NULL;

    Py_XDECREF(var_read);
    var_read = NULL;

    Py_XDECREF(var_err);
    var_err = NULL;

    Py_XDECREF(var_resp);
    var_resp = NULL;

    Py_XDECREF(var_low_conn);
    var_low_conn = NULL;

    Py_XDECREF(var_header);
    var_header = NULL;

    Py_XDECREF(var_value);
    var_value = NULL;

    Py_XDECREF(var_i);
    var_i = NULL;

    Py_XDECREF(var_r);
    var_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$adapters$$$function_17_send);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_verify);
    Py_DECREF(par_verify);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_proxies);
    Py_DECREF(par_proxies);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_verify);
    Py_DECREF(par_verify);
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_proxies);
    Py_DECREF(par_proxies);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_10_cert_verify() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_10_cert_verify,
        const_str_plain_cert_verify,
#if PYTHON_VERSION >= 300
        const_str_digest_94f8254fa141c33ed65ea27f59ed9d62,
#endif
        codeobj_76eaafc44bfc9fefc19a2259f9939086,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_f0960f14478e5a2fef4fc81736af77be,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_11_build_response() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_11_build_response,
        const_str_plain_build_response,
#if PYTHON_VERSION >= 300
        const_str_digest_f1fccf6352a44c8bf8595b234fb96ec9,
#endif
        codeobj_70f9ef5b75f78f241a57af92f5077606,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_64ad7ce704a2035b2f3a90397c090ca7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_12_get_connection(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_12_get_connection,
        const_str_plain_get_connection,
#if PYTHON_VERSION >= 300
        const_str_digest_b80c93ea6c3e5d185c1d8985f749f6d3,
#endif
        codeobj_2a5c41f2c48e3563847b08dd72883d30,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_a3b4e21c527f3872bb2a3cad05caced3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_13_close() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_13_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        const_str_digest_8381db4e5b50dbe02cf5623d3436dc6f,
#endif
        codeobj_506038eb249ce32dd62e6c44443cc9d6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_ab462680d0487f574012e6a7b3ea2cfd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_14_request_url() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_14_request_url,
        const_str_plain_request_url,
#if PYTHON_VERSION >= 300
        const_str_digest_d9e923e371e62d15476d82fc18912a89,
#endif
        codeobj_21a0af1ea824ec3a59033428c2d0f2ff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_cf164d66984f410735aac772ffcc2043,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_15_add_headers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_add_headers,
#if PYTHON_VERSION >= 300
        const_str_digest_3d43a254760496216c28528a54f67ae7,
#endif
        codeobj_5c9981512425bf31afafcfe7ed7bc8c9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_0e90a733b836dccf8b7d0124401998c8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_16_proxy_headers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_16_proxy_headers,
        const_str_plain_proxy_headers,
#if PYTHON_VERSION >= 300
        const_str_digest_bb4ba86a57b66cae0a694169c648e9c1,
#endif
        codeobj_9a5dd723d3097d5819cc2e3152ff134c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_dbc92a2b5167052219bbed5a2180ad0b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_17_send(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_17_send,
        const_str_plain_send,
#if PYTHON_VERSION >= 300
        const_str_digest_8eda945652fc1bca806aa3da22ec6fa8,
#endif
        codeobj_9cad0070da42b24f25ccb7c0be48a073,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_fff293e3e7fde90d706cca79c91fa423,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_1_SOCKSProxyManager() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_1_SOCKSProxyManager,
        const_str_plain_SOCKSProxyManager,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_30d829bdbc354ab3b409b440770273d2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_2___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_58d849cc27a8bb92406c0789468590b3,
#endif
        codeobj_b06850dbb15d82e67114602679343958,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_3_send(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_3_send,
        const_str_plain_send,
#if PYTHON_VERSION >= 300
        const_str_digest_46268be1785799fb5b96bebc078469e2,
#endif
        codeobj_1e0a22a91c486c7f987549373411f48d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_92d7a028a7de3fecbe9df9c1fa24ee6e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_4_close() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_4_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        const_str_digest_c2c00751ef6093a3f812bf922a66511f,
#endif
        codeobj_1552e48e051e8f82758509fb240ff79f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_689f43089124f06b15e9987dc8e6f0cd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_5___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_afe1e7d238142b45d91be75903c1f969,
#endif
        codeobj_6a7ec43538efc4d1be3d504cb3ab032e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_6___getstate__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_6___getstate__,
        const_str_plain___getstate__,
#if PYTHON_VERSION >= 300
        const_str_digest_075bd0c67293e615df9afdc934c155c9,
#endif
        codeobj_341b696faa8057142203cd4044e2336a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_7___setstate__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_7___setstate__,
        const_str_plain___setstate__,
#if PYTHON_VERSION >= 300
        const_str_digest_2bdec81ec502026c4a660b15852a5925,
#endif
        codeobj_2f6aedf88c4d84fce66e7b17625fea5d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_8_init_poolmanager(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_8_init_poolmanager,
        const_str_plain_init_poolmanager,
#if PYTHON_VERSION >= 300
        const_str_digest_39c1bfc1fe8b17be2911255cb6ddbfdc,
#endif
        codeobj_34464d4b9c70a2a62e86833648accb3d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_8c58dbeb2a2c13a119eaf790ea7782dd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_9_proxy_manager_for() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_9_proxy_manager_for,
        const_str_plain_proxy_manager_for,
#if PYTHON_VERSION >= 300
        const_str_digest_e5209e5e03de97a661af697c02841e7a,
#endif
        codeobj_57a511cd873dc3dc624e3165e0e38e48,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_bfa093c614acefeadc8693bd26119f2c,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$adapters =
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

function_impl_code functable_requests$adapters[] = {
    impl_requests$adapters$$$function_1_SOCKSProxyManager,
    impl_requests$adapters$$$function_2___init__,
    impl_requests$adapters$$$function_3_send,
    impl_requests$adapters$$$function_4_close,
    impl_requests$adapters$$$function_5___init__,
    impl_requests$adapters$$$function_6___getstate__,
    impl_requests$adapters$$$function_7___setstate__,
    impl_requests$adapters$$$function_8_init_poolmanager,
    impl_requests$adapters$$$function_9_proxy_manager_for,
    impl_requests$adapters$$$function_10_cert_verify,
    impl_requests$adapters$$$function_11_build_response,
    impl_requests$adapters$$$function_12_get_connection,
    impl_requests$adapters$$$function_13_close,
    impl_requests$adapters$$$function_14_request_url,
    NULL,
    impl_requests$adapters$$$function_16_proxy_headers,
    impl_requests$adapters$$$function_17_send,
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

    function_impl_code *current = functable_requests$adapters;
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

    if (offset > sizeof(functable_requests$adapters) || offset < 0) {
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
        functable_requests$adapters[offset],
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
        module_requests$adapters,
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
PyObject *modulecode_requests$adapters(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_requests$adapters;
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
    PRINT_STRING("requests.adapters: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("requests.adapters: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("requests.adapters: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initrequests$adapters\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$adapters = Py_InitModule4(
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
    mdef_requests$adapters.m_name = module_full_name;
    module_requests$adapters = PyModule_Create(&mdef_requests$adapters);
#endif

    moduledict_requests$adapters = MODULE_DICT(module_requests$adapters);

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
        moduledict_requests$adapters,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_requests$adapters,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_requests$adapters,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$adapters,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$adapters,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_requests$adapters);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_requests$adapters);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    struct Nuitka_FrameObject *frame_57dea2c39f5fc1cfee135e9688a72b58;
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
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_requests$adapters_55 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_cc0c27cb95fca605046d334971888564_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_cc0c27cb95fca605046d334971888564_2 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *locals_requests$adapters_84 = NULL;
    struct Nuitka_FrameObject *frame_28539ee21c0cf589428515260236a41b_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_28539ee21c0cf589428515260236a41b_3 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_583f837ef2184e324997463a2ea927a1;
        UPDATE_STRING_DICT0(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_ac9f80996ecd26d1a23399c02013ff79;
        UPDATE_STRING_DICT0(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_57dea2c39f5fc1cfee135e9688a72b58 = MAKE_MODULE_FRAME(codeobj_57dea2c39f5fc1cfee135e9688a72b58, module_requests$adapters);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_57dea2c39f5fc1cfee135e9688a72b58);
    assert(Py_REFCNT(frame_57dea2c39f5fc1cfee135e9688a72b58) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_ac9f80996ecd26d1a23399c02013ff79;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_e399ba4554180f37de594a6743234f17;
        tmp_globals_name_1 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 11;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_socket;
        tmp_globals_name_2 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 12;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_socket, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_901e90eee70586f15ff5cd8bfbf848b6;
        tmp_globals_name_3 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_PoolManager_str_plain_proxy_from_url_tuple;
        tmp_level_name_3 = const_int_0;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 14;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_PoolManager);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_PoolManager, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_proxy_from_url);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_proxy_from_url, tmp_assign_source_8);
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
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_58d55cc0c39ccfcef76de1f9740cddf4;
        tmp_globals_name_4 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_HTTPResponse_tuple;
        tmp_level_name_4 = const_int_0;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 15;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_HTTPResponse);
        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_HTTPResponse, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_867cf107290997ea3f46e9cff397e1db;
        tmp_globals_name_5 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_parse_url_tuple;
        tmp_level_name_5 = const_int_0;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 16;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_parse_url);
        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_parse_url, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_867cf107290997ea3f46e9cff397e1db;
        tmp_globals_name_6 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_Timeout_tuple;
        tmp_level_name_6 = const_int_0;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 17;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_Timeout);
        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_TimeoutSauce, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd;
        tmp_globals_name_7 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_Retry_tuple;
        tmp_level_name_7 = const_int_0;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 18;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_Retry);
        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_Retry, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_8 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_ClosedPoolError_tuple;
        tmp_level_name_8 = const_int_0;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 19;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_ClosedPoolError);
        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ClosedPoolError, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_9 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_ConnectTimeoutError_tuple;
        tmp_level_name_9 = const_int_0;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 20;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_ConnectTimeoutError);
        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_10 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = const_tuple_str_plain_HTTPError_tuple;
        tmp_level_name_10 = const_int_0;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 21;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain_HTTPError);
        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__HTTPError, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_11 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = const_tuple_str_plain_MaxRetryError_tuple;
        tmp_level_name_11 = const_int_0;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 22;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_10, const_str_plain_MaxRetryError);
        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_MaxRetryError, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_name_12;
        PyObject *tmp_locals_name_12;
        PyObject *tmp_fromlist_name_12;
        PyObject *tmp_level_name_12;
        tmp_name_name_12 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_12 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_12 = Py_None;
        tmp_fromlist_name_12 = const_tuple_str_plain_NewConnectionError_tuple;
        tmp_level_name_12 = const_int_0;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 23;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_11, const_str_plain_NewConnectionError);
        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_NewConnectionError, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_13;
        PyObject *tmp_globals_name_13;
        PyObject *tmp_locals_name_13;
        PyObject *tmp_fromlist_name_13;
        PyObject *tmp_level_name_13;
        tmp_name_name_13 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_13 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_13 = Py_None;
        tmp_fromlist_name_13 = const_tuple_str_plain_ProxyError_tuple;
        tmp_level_name_13 = const_int_0;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 24;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_12, const_str_plain_ProxyError);
        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__ProxyError, tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_name_14;
        PyObject *tmp_globals_name_14;
        PyObject *tmp_locals_name_14;
        PyObject *tmp_fromlist_name_14;
        PyObject *tmp_level_name_14;
        tmp_name_name_14 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_14 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_14 = Py_None;
        tmp_fromlist_name_14 = const_tuple_str_plain_ProtocolError_tuple;
        tmp_level_name_14 = const_int_0;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 25;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_13, const_str_plain_ProtocolError);
        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ProtocolError, tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_name_15;
        PyObject *tmp_globals_name_15;
        PyObject *tmp_locals_name_15;
        PyObject *tmp_fromlist_name_15;
        PyObject *tmp_level_name_15;
        tmp_name_name_15 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_15 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_15 = Py_None;
        tmp_fromlist_name_15 = const_tuple_str_plain_ReadTimeoutError_tuple;
        tmp_level_name_15 = const_int_0;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 26;
        tmp_import_name_from_14 = IMPORT_MODULE5(tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15, tmp_level_name_15);
        if (tmp_import_name_from_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_14, const_str_plain_ReadTimeoutError);
        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError, tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_name_16;
        PyObject *tmp_globals_name_16;
        PyObject *tmp_locals_name_16;
        PyObject *tmp_fromlist_name_16;
        PyObject *tmp_level_name_16;
        tmp_name_name_16 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_16 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_16 = Py_None;
        tmp_fromlist_name_16 = const_tuple_str_plain_SSLError_tuple;
        tmp_level_name_16 = const_int_0;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 27;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_name_16, tmp_globals_name_16, tmp_locals_name_16, tmp_fromlist_name_16, tmp_level_name_16);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_15, const_str_plain_SSLError);
        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__SSLError, tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_name_17;
        PyObject *tmp_globals_name_17;
        PyObject *tmp_locals_name_17;
        PyObject *tmp_fromlist_name_17;
        PyObject *tmp_level_name_17;
        tmp_name_name_17 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_17 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_17 = Py_None;
        tmp_fromlist_name_17 = const_tuple_str_plain_ResponseError_tuple;
        tmp_level_name_17 = const_int_0;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 28;
        tmp_import_name_from_16 = IMPORT_MODULE5(tmp_name_name_17, tmp_globals_name_17, tmp_locals_name_17, tmp_fromlist_name_17, tmp_level_name_17);
        if (tmp_import_name_from_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_16, const_str_plain_ResponseError);
        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ResponseError, tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_name_18;
        PyObject *tmp_globals_name_18;
        PyObject *tmp_locals_name_18;
        PyObject *tmp_fromlist_name_18;
        PyObject *tmp_level_name_18;
        tmp_name_name_18 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_18 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_18 = Py_None;
        tmp_fromlist_name_18 = const_tuple_str_plain_LocationValueError_tuple;
        tmp_level_name_18 = const_int_0;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 29;
        tmp_import_name_from_17 = IMPORT_MODULE5(tmp_name_name_18, tmp_globals_name_18, tmp_locals_name_18, tmp_fromlist_name_18, tmp_level_name_18);
        if (tmp_import_name_from_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_17, const_str_plain_LocationValueError);
        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_LocationValueError, tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_name_19;
        PyObject *tmp_globals_name_19;
        PyObject *tmp_locals_name_19;
        PyObject *tmp_fromlist_name_19;
        PyObject *tmp_level_name_19;
        tmp_name_name_19 = const_str_plain_models;
        tmp_globals_name_19 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_19 = Py_None;
        tmp_fromlist_name_19 = const_tuple_str_plain_Response_tuple;
        tmp_level_name_19 = const_int_pos_1;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 31;
        tmp_import_name_from_18 = IMPORT_MODULE5(tmp_name_name_19, tmp_globals_name_19, tmp_locals_name_19, tmp_fromlist_name_19, tmp_level_name_19);
        if (tmp_import_name_from_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
           tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_requests$adapters,
                const_str_plain_Response,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_18, const_str_plain_Response);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_Response, tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_name_name_20;
        PyObject *tmp_globals_name_20;
        PyObject *tmp_locals_name_20;
        PyObject *tmp_fromlist_name_20;
        PyObject *tmp_level_name_20;
        tmp_name_name_20 = const_str_plain_compat;
        tmp_globals_name_20 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_20 = Py_None;
        tmp_fromlist_name_20 = const_tuple_str_plain_urlparse_str_plain_basestring_tuple;
        tmp_level_name_20 = const_int_pos_1;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 32;
        tmp_assign_source_25 = IMPORT_MODULE5(tmp_name_name_20, tmp_globals_name_20, tmp_locals_name_20, tmp_fromlist_name_20, tmp_level_name_20);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_25;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_19 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
           tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_requests$adapters,
                const_str_plain_urlparse,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_19, const_str_plain_urlparse);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_urlparse, tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_20 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
           tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_requests$adapters,
                const_str_plain_basestring,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_20, const_str_plain_basestring);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_basestring, tmp_assign_source_27);
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

    CHECK_OBJECT((PyObject *)tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT((PyObject *)tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_name_name_21;
        PyObject *tmp_globals_name_21;
        PyObject *tmp_locals_name_21;
        PyObject *tmp_fromlist_name_21;
        PyObject *tmp_level_name_21;
        tmp_name_name_21 = const_str_plain_utils;
        tmp_globals_name_21 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_21 = Py_None;
        tmp_fromlist_name_21 = const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple;
        tmp_level_name_21 = const_int_pos_1;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 33;
        tmp_assign_source_28 = IMPORT_MODULE5(tmp_name_name_21, tmp_globals_name_21, tmp_locals_name_21, tmp_fromlist_name_21, tmp_level_name_21);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_28;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_21 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
           tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_requests$adapters,
                const_str_plain_DEFAULT_CA_BUNDLE_PATH,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_21, const_str_plain_DEFAULT_CA_BUNDLE_PATH);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_CA_BUNDLE_PATH, tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_22 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_22)) {
           tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_requests$adapters,
                const_str_plain_extract_zipped_paths,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_22, const_str_plain_extract_zipped_paths);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_extract_zipped_paths, tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_23 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_23)) {
           tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_requests$adapters,
                const_str_plain_get_encoding_from_headers,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_23, const_str_plain_get_encoding_from_headers);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_get_encoding_from_headers, tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_24 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_24)) {
           tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_requests$adapters,
                const_str_plain_prepend_scheme_if_needed,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_32 = IMPORT_NAME(tmp_import_name_from_24, const_str_plain_prepend_scheme_if_needed);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_prepend_scheme_if_needed, tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_25 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_25)) {
           tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_requests$adapters,
                const_str_plain_get_auth_from_url,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_33 = IMPORT_NAME(tmp_import_name_from_25, const_str_plain_get_auth_from_url);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_get_auth_from_url, tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_26 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_26)) {
           tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_requests$adapters,
                const_str_plain_urldefragauth,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_34 = IMPORT_NAME(tmp_import_name_from_26, const_str_plain_urldefragauth);
        }

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_urldefragauth, tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_27 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_27)) {
           tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_requests$adapters,
                const_str_plain_select_proxy,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_35 = IMPORT_NAME(tmp_import_name_from_27, const_str_plain_select_proxy);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_select_proxy, tmp_assign_source_35);
    }
    goto try_end_3;
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

    CHECK_OBJECT((PyObject *)tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT((PyObject *)tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;

    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_28;
        PyObject *tmp_name_name_22;
        PyObject *tmp_globals_name_22;
        PyObject *tmp_locals_name_22;
        PyObject *tmp_fromlist_name_22;
        PyObject *tmp_level_name_22;
        tmp_name_name_22 = const_str_plain_structures;
        tmp_globals_name_22 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_22 = Py_None;
        tmp_fromlist_name_22 = const_tuple_str_plain_CaseInsensitiveDict_tuple;
        tmp_level_name_22 = const_int_pos_1;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 36;
        tmp_import_name_from_28 = IMPORT_MODULE5(tmp_name_name_22, tmp_globals_name_22, tmp_locals_name_22, tmp_fromlist_name_22, tmp_level_name_22);
        if (tmp_import_name_from_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_28)) {
           tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_requests$adapters,
                const_str_plain_CaseInsensitiveDict,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_36 = IMPORT_NAME(tmp_import_name_from_28, const_str_plain_CaseInsensitiveDict);
        }

        Py_DECREF(tmp_import_name_from_28);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_CaseInsensitiveDict, tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_29;
        PyObject *tmp_name_name_23;
        PyObject *tmp_globals_name_23;
        PyObject *tmp_locals_name_23;
        PyObject *tmp_fromlist_name_23;
        PyObject *tmp_level_name_23;
        tmp_name_name_23 = const_str_plain_cookies;
        tmp_globals_name_23 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_23 = Py_None;
        tmp_fromlist_name_23 = const_tuple_str_plain_extract_cookies_to_jar_tuple;
        tmp_level_name_23 = const_int_pos_1;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 37;
        tmp_import_name_from_29 = IMPORT_MODULE5(tmp_name_name_23, tmp_globals_name_23, tmp_locals_name_23, tmp_fromlist_name_23, tmp_level_name_23);
        if (tmp_import_name_from_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_29)) {
           tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_requests$adapters,
                const_str_plain_extract_cookies_to_jar,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_37 = IMPORT_NAME(tmp_import_name_from_29, const_str_plain_extract_cookies_to_jar);
        }

        Py_DECREF(tmp_import_name_from_29);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar, tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_name_name_24;
        PyObject *tmp_globals_name_24;
        PyObject *tmp_locals_name_24;
        PyObject *tmp_fromlist_name_24;
        PyObject *tmp_level_name_24;
        tmp_name_name_24 = const_str_plain_exceptions;
        tmp_globals_name_24 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_24 = Py_None;
        tmp_fromlist_name_24 = const_tuple_402e5278992b88e3d2e7fcf25552ac4f_tuple;
        tmp_level_name_24 = const_int_pos_1;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 38;
        tmp_assign_source_38 = IMPORT_MODULE5(tmp_name_name_24, tmp_globals_name_24, tmp_locals_name_24, tmp_fromlist_name_24, tmp_level_name_24);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_38;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_30 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_30)) {
           tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_requests$adapters,
                const_str_plain_ConnectionError,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_39 = IMPORT_NAME(tmp_import_name_from_30, const_str_plain_ConnectionError);
        }

        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ConnectionError, tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_31;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_31 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_31)) {
           tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_31,
                (PyObject *)moduledict_requests$adapters,
                const_str_plain_ConnectTimeout,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_40 = IMPORT_NAME(tmp_import_name_from_31, const_str_plain_ConnectTimeout);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ConnectTimeout, tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_32;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_32 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_32)) {
           tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_32,
                (PyObject *)moduledict_requests$adapters,
                const_str_plain_ReadTimeout,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_41 = IMPORT_NAME(tmp_import_name_from_32, const_str_plain_ReadTimeout);
        }

        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ReadTimeout, tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_33;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_33 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_33)) {
           tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_33,
                (PyObject *)moduledict_requests$adapters,
                const_str_plain_SSLError,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_42 = IMPORT_NAME(tmp_import_name_from_33, const_str_plain_SSLError);
        }

        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_SSLError, tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_34;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_34 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_34)) {
           tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_34,
                (PyObject *)moduledict_requests$adapters,
                const_str_plain_ProxyError,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_43 = IMPORT_NAME(tmp_import_name_from_34, const_str_plain_ProxyError);
        }

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ProxyError, tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_35;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_35 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_35)) {
           tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_35,
                (PyObject *)moduledict_requests$adapters,
                const_str_plain_RetryError,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_44 = IMPORT_NAME(tmp_import_name_from_35, const_str_plain_RetryError);
        }

        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_RetryError, tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_36;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_36 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_36)) {
           tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_36,
                (PyObject *)moduledict_requests$adapters,
                const_str_plain_InvalidSchema,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_45 = IMPORT_NAME(tmp_import_name_from_36, const_str_plain_InvalidSchema);
        }

        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_InvalidSchema, tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_import_name_from_37;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_37 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_37)) {
           tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_37,
                (PyObject *)moduledict_requests$adapters,
                const_str_plain_InvalidProxyURL,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_46 = IMPORT_NAME(tmp_import_name_from_37, const_str_plain_InvalidProxyURL);
        }

        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_InvalidProxyURL, tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_38;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_38 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_38)) {
           tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_38,
                (PyObject *)moduledict_requests$adapters,
                const_str_plain_InvalidURL,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_47 = IMPORT_NAME(tmp_import_name_from_38, const_str_plain_InvalidURL);
        }

        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_InvalidURL, tmp_assign_source_47);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT((PyObject *)tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;

    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_39;
        PyObject *tmp_name_name_25;
        PyObject *tmp_globals_name_25;
        PyObject *tmp_locals_name_25;
        PyObject *tmp_fromlist_name_25;
        PyObject *tmp_level_name_25;
        tmp_name_name_25 = const_str_plain_auth;
        tmp_globals_name_25 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_25 = Py_None;
        tmp_fromlist_name_25 = const_tuple_str_plain__basic_auth_str_tuple;
        tmp_level_name_25 = const_int_pos_1;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 41;
        tmp_import_name_from_39 = IMPORT_MODULE5(tmp_name_name_25, tmp_globals_name_25, tmp_locals_name_25, tmp_fromlist_name_25, tmp_level_name_25);
        if (tmp_import_name_from_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_39)) {
           tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_39,
                (PyObject *)moduledict_requests$adapters,
                const_str_plain__basic_auth_str,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_48 = IMPORT_NAME(tmp_import_name_from_39, const_str_plain__basic_auth_str);
        }

        Py_DECREF(tmp_import_name_from_39);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__basic_auth_str, tmp_assign_source_48);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_import_name_from_40;
        PyObject *tmp_name_name_26;
        PyObject *tmp_globals_name_26;
        PyObject *tmp_locals_name_26;
        PyObject *tmp_fromlist_name_26;
        PyObject *tmp_level_name_26;
        tmp_name_name_26 = const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
        tmp_globals_name_26 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_26 = Py_None;
        tmp_fromlist_name_26 = const_tuple_str_plain_SOCKSProxyManager_tuple;
        tmp_level_name_26 = const_int_0;
        frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 44;
        tmp_import_name_from_40 = IMPORT_MODULE5(tmp_name_name_26, tmp_globals_name_26, tmp_locals_name_26, tmp_fromlist_name_26, tmp_level_name_26);
        if (tmp_import_name_from_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_5;
        }
        tmp_assign_source_49 = IMPORT_NAME(tmp_import_name_from_40, const_str_plain_SOCKSProxyManager);
        Py_DECREF(tmp_import_name_from_40);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager, tmp_assign_source_49);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
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
        exception_keeper_tb_5 = MAKE_TRACEBACK(frame_57dea2c39f5fc1cfee135e9688a72b58, exception_keeper_lineno_5);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_57dea2c39f5fc1cfee135e9688a72b58, exception_keeper_lineno_5);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    PyException_SetTraceback(exception_keeper_value_5, (PyObject *)exception_keeper_tb_5);
    PUBLISH_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_6;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_50;
            tmp_assign_source_50 = MAKE_FUNCTION_requests$adapters$$$function_1_SOCKSProxyManager();



            UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager, tmp_assign_source_50);
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 43;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame) frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_6;
        branch_end_1:;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto try_end_5;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$adapters);
    return NULL;
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = Py_False;
        UPDATE_STRING_DICT0(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLBLOCK, tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = const_int_pos_10;
        UPDATE_STRING_DICT0(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLSIZE, tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = const_int_0;
        UPDATE_STRING_DICT0(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_RETRIES, tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = Py_None;
        UPDATE_STRING_DICT0(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOL_TIMEOUT, tmp_assign_source_54);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_object_tuple;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_55 = impl___internal__$$$function_3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_3;
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


            exception_lineno = 55;

            goto try_except_handler_7;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
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


            exception_lineno = 55;

            goto try_except_handler_7;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_7;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
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


            exception_lineno = 55;

            goto try_except_handler_7;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_7;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_57 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_57;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        tmp_key_name_3 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_3, tmp_key_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_7;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_7;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_source_name_1 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr(tmp_source_name_1, const_str_plain___prepare__);
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain___prepare__);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto try_except_handler_7;
            }
            tmp_tuple_element_1 = const_str_plain_BaseAdapter;
            tmp_args_name_1 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_1 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 55;
            tmp_assign_source_58 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_name_1);
            if (tmp_assign_source_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto try_except_handler_7;
            }
            assert(tmp_class_creation_1__prepared == NULL);
            tmp_class_creation_1__prepared = tmp_assign_source_58;
        }
        {
            nuitka_bool tmp_condition_result_6;
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


                exception_lineno = 55;

                goto try_except_handler_7;
            }
            tmp_condition_result_6 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            branch_yes_4:;
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


                    exception_lineno = 55;

                    goto try_except_handler_7;
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

                    exception_lineno = 55;

                    goto try_except_handler_7;
                }
                PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_2);
                tmp_raise_value_1 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
                Py_DECREF(tmp_right_name_1);
                if (tmp_raise_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 55;

                    goto try_except_handler_7;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF(tmp_raise_type_1);
                exception_value = tmp_raise_value_1;
                exception_lineno = 55;
                RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

                goto try_except_handler_7;
            }
            branch_no_4:;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_59;
            tmp_assign_source_59 = PyDict_New();
            assert(tmp_class_creation_1__prepared == NULL);
            tmp_class_creation_1__prepared = tmp_assign_source_59;
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_assign_source_60;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_requests$adapters_55 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_f564af29e8441da03b9e6bf26a88cc81;
        tmp_res = PyObject_SetItem(locals_requests$adapters_55, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_9;
        }
        tmp_dictset_value = const_str_digest_a634c3a07d79eddfe1581301d16e55a1;
        tmp_res = PyObject_SetItem(locals_requests$adapters_55, const_str_plain___doc__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_9;
        }
        tmp_dictset_value = const_str_plain_BaseAdapter;
        tmp_res = PyObject_SetItem(locals_requests$adapters_55, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto try_except_handler_9;
        }
        MAKE_OR_REUSE_FRAME(cache_frame_cc0c27cb95fca605046d334971888564_2, codeobj_cc0c27cb95fca605046d334971888564, module_requests$adapters, sizeof(void *));
        frame_cc0c27cb95fca605046d334971888564_2 = cache_frame_cc0c27cb95fca605046d334971888564_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_cc0c27cb95fca605046d334971888564_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_cc0c27cb95fca605046d334971888564_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_2___init__();



        tmp_res = PyObject_SetItem(locals_requests$adapters_55, const_str_plain___init__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_false_none_true_none_none_tuple;
            Py_INCREF(tmp_defaults_1);
            tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_3_send(tmp_defaults_1);



            tmp_res = PyObject_SetItem(locals_requests$adapters_55, const_str_plain_send, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_4_close();



        tmp_res = PyObject_SetItem(locals_requests$adapters_55, const_str_plain_close, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_cc0c27cb95fca605046d334971888564_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_cc0c27cb95fca605046d334971888564_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_cc0c27cb95fca605046d334971888564_2, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_cc0c27cb95fca605046d334971888564_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_cc0c27cb95fca605046d334971888564_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_cc0c27cb95fca605046d334971888564_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if (frame_cc0c27cb95fca605046d334971888564_2 == cache_frame_cc0c27cb95fca605046d334971888564_2) {
            Py_DECREF(frame_cc0c27cb95fca605046d334971888564_2);
        }
        cache_frame_cc0c27cb95fca605046d334971888564_2 = NULL;

        assertFrameObject(frame_cc0c27cb95fca605046d334971888564_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_9;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_2 = tmp_class_creation_1__bases;
            tmp_compexpr_right_2 = const_tuple_type_object_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto try_except_handler_9;
            }
            tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
            branch_yes_5:;
            tmp_dictset_value = const_tuple_type_object_tuple;
            tmp_res = PyObject_SetItem(locals_requests$adapters_55, const_str_plain___orig_bases__, tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto try_except_handler_9;
            }
            branch_no_5:;
        }
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = const_str_plain_BaseAdapter;
            tmp_args_name_2 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_requests$adapters_55;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 55;
            tmp_assign_source_61 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto try_except_handler_9;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_61;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_60 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_60);
        goto try_return_handler_9;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$adapters);
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_requests$adapters_55);
        locals_requests$adapters_55 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_requests$adapters_55);
        locals_requests$adapters_55 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$adapters);
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT((PyObject *)outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;

        goto outline_result_1;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(requests$adapters);
        return NULL;
        outline_exception_1:;
        exception_lineno = 55;
        goto try_except_handler_7;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_BaseAdapter, tmp_assign_source_60);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
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

    // Tried code:
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_BaseAdapter);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseAdapter);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19518 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 84;

            goto try_except_handler_10;
        }

        tmp_tuple_element_4 = tmp_mvar_value_3;
        tmp_assign_source_62 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_4);
        PyTuple_SET_ITEM(tmp_assign_source_62, 0, tmp_tuple_element_4);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_63 = impl___internal__$$$function_3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_4, tmp_key_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_10;
        }
        tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = const_str_plain_metaclass;
        tmp_metaclass_name_2 = DICT_GET_ITEM(tmp_dict_name_5, tmp_key_name_5);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_10;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_10;
        }
        tmp_condition_result_9 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_subscribed_name_2 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = const_int_0;
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_2, tmp_subscript_name_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_10;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_10;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_2);
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_65 = SELECT_METACLASS(tmp_metaclass_name_2, tmp_bases_name_2);
        Py_DECREF(tmp_metaclass_name_2);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_65;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_name_6;
        tmp_key_name_6 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_6, tmp_key_name_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_10;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_10;
        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_source_name_5 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr(tmp_source_name_5, const_str_plain___prepare__);
        tmp_condition_result_11 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_source_name_6 = tmp_class_creation_2__metaclass;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain___prepare__);
            if (tmp_called_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto try_except_handler_10;
            }
            tmp_tuple_element_5 = const_str_plain_HTTPAdapter;
            tmp_args_name_3 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_5);
            PyTuple_SET_ITEM(tmp_args_name_3, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_5 = tmp_class_creation_2__bases;
            Py_INCREF(tmp_tuple_element_5);
            PyTuple_SET_ITEM(tmp_args_name_3, 1, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 84;
            tmp_assign_source_66 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_name_3);
            if (tmp_assign_source_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto try_except_handler_10;
            }
            assert(tmp_class_creation_2__prepared == NULL);
            tmp_class_creation_2__prepared = tmp_assign_source_66;
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_source_name_7 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr(tmp_source_name_7, const_str_plain___getitem__);
            tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto try_except_handler_10;
            }
            tmp_condition_result_12 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            branch_yes_8:;
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_raise_value_2;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_tuple_element_6;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_8;
                PyObject *tmp_type_arg_4;
                tmp_raise_type_2 = PyExc_TypeError;
                tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT(tmp_class_creation_2__metaclass);
                tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
                tmp_getattr_attr_2 = const_str_plain___name__;
                tmp_getattr_default_2 = const_str_angle_metaclass;
                tmp_tuple_element_6 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
                if (tmp_tuple_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;

                    goto try_except_handler_10;
                }
                tmp_right_name_2 = PyTuple_New(2);
                PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_6);
                CHECK_OBJECT(tmp_class_creation_2__prepared);
                tmp_type_arg_4 = tmp_class_creation_2__prepared;
                tmp_source_name_8 = BUILTIN_TYPE1(tmp_type_arg_4);
                assert(!(tmp_source_name_8 == NULL));
                tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain___name__);
                Py_DECREF(tmp_source_name_8);
                if (tmp_tuple_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_right_name_2);

                    exception_lineno = 84;

                    goto try_except_handler_10;
                }
                PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_6);
                tmp_raise_value_2 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
                Py_DECREF(tmp_right_name_2);
                if (tmp_raise_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;

                    goto try_except_handler_10;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF(tmp_raise_type_2);
                exception_value = tmp_raise_value_2;
                exception_lineno = 84;
                RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

                goto try_except_handler_10;
            }
            branch_no_8:;
        }
        goto branch_end_7;
        branch_no_7:;
        {
            PyObject *tmp_assign_source_67;
            tmp_assign_source_67 = PyDict_New();
            assert(tmp_class_creation_2__prepared == NULL);
            tmp_class_creation_2__prepared = tmp_assign_source_67;
        }
        branch_end_7:;
    }
    {
        PyObject *tmp_assign_source_68;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_requests$adapters_84 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_f564af29e8441da03b9e6bf26a88cc81;
        tmp_res = PyObject_SetItem(locals_requests$adapters_84, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_12;
        }
        tmp_dictset_value = const_str_digest_19fdcf2df08a408493d23f0c1c422714;
        tmp_res = PyObject_SetItem(locals_requests$adapters_84, const_str_plain___doc__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_12;
        }
        tmp_dictset_value = const_str_plain_HTTPAdapter;
        tmp_res = PyObject_SetItem(locals_requests$adapters_84, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_12;
        }
        MAKE_OR_REUSE_FRAME(cache_frame_28539ee21c0cf589428515260236a41b_3, codeobj_28539ee21c0cf589428515260236a41b, module_requests$adapters, sizeof(void *));
        frame_28539ee21c0cf589428515260236a41b_3 = cache_frame_28539ee21c0cf589428515260236a41b_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_28539ee21c0cf589428515260236a41b_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_28539ee21c0cf589428515260236a41b_3) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = LIST_COPY(const_list_b210aeadbd087eaaf628d5f4d13acd25_list);
        tmp_res = PyObject_SetItem(locals_requests$adapters_84, const_str_plain___attrs__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_mvar_value_7;
            tmp_tuple_element_7 = PyObject_GetItem(locals_requests$adapters_84, const_str_plain_DEFAULT_POOLSIZE);

            if (tmp_tuple_element_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLSIZE);

                    if (unlikely(tmp_mvar_value_4 == NULL)) {
                        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLSIZE);
                    }

                    if (tmp_mvar_value_4 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 21092 ], 38, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 113;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }

                    tmp_tuple_element_7 = tmp_mvar_value_4;
                    Py_INCREF(tmp_tuple_element_7);
                }
            }

            tmp_defaults_2 = PyTuple_New(4);
            PyTuple_SET_ITEM(tmp_defaults_2, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = PyObject_GetItem(locals_requests$adapters_84, const_str_plain_DEFAULT_POOLSIZE);

            if (tmp_tuple_element_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLSIZE);

                    if (unlikely(tmp_mvar_value_5 == NULL)) {
                        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLSIZE);
                    }

                    if (tmp_mvar_value_5 == NULL) {
                        Py_DECREF(tmp_defaults_2);
                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 21092 ], 38, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 114;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }

                    tmp_tuple_element_7 = tmp_mvar_value_5;
                    Py_INCREF(tmp_tuple_element_7);
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_2, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = PyObject_GetItem(locals_requests$adapters_84, const_str_plain_DEFAULT_RETRIES);

            if (tmp_tuple_element_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_RETRIES);

                    if (unlikely(tmp_mvar_value_6 == NULL)) {
                        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_RETRIES);
                    }

                    if (tmp_mvar_value_6 == NULL) {
                        Py_DECREF(tmp_defaults_2);
                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 19551 ], 37, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 114;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }

                    tmp_tuple_element_7 = tmp_mvar_value_6;
                    Py_INCREF(tmp_tuple_element_7);
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_2, 2, tmp_tuple_element_7);
            tmp_tuple_element_7 = PyObject_GetItem(locals_requests$adapters_84, const_str_plain_DEFAULT_POOLBLOCK);

            if (tmp_tuple_element_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLBLOCK);

                    if (unlikely(tmp_mvar_value_7 == NULL)) {
                        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLBLOCK);
                    }

                    if (tmp_mvar_value_7 == NULL) {
                        Py_DECREF(tmp_defaults_2);
                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 21130 ], 39, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 115;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }

                    tmp_tuple_element_7 = tmp_mvar_value_7;
                    Py_INCREF(tmp_tuple_element_7);
                }
            }

            PyTuple_SET_ITEM(tmp_defaults_2, 3, tmp_tuple_element_7);
            tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_5___init__(tmp_defaults_2);



            tmp_res = PyObject_SetItem(locals_requests$adapters_84, const_str_plain___init__, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_6___getstate__();



        tmp_res = PyObject_SetItem(locals_requests$adapters_84, const_str_plain___getstate__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_7___setstate__();



        tmp_res = PyObject_SetItem(locals_requests$adapters_84, const_str_plain___setstate__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_mvar_value_8;
            tmp_tuple_element_8 = PyObject_GetItem(locals_requests$adapters_84, const_str_plain_DEFAULT_POOLBLOCK);

            if (tmp_tuple_element_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLBLOCK);

                    if (unlikely(tmp_mvar_value_8 == NULL)) {
                        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLBLOCK);
                    }

                    if (tmp_mvar_value_8 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 21130 ], 39, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 146;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }

                    tmp_tuple_element_8 = tmp_mvar_value_8;
                    Py_INCREF(tmp_tuple_element_8);
                }
            }

            tmp_defaults_3 = PyTuple_New(1);
            PyTuple_SET_ITEM(tmp_defaults_3, 0, tmp_tuple_element_8);
            tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_8_init_poolmanager(tmp_defaults_3);



            tmp_res = PyObject_SetItem(locals_requests$adapters_84, const_str_plain_init_poolmanager, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_9_proxy_manager_for();



        tmp_res = PyObject_SetItem(locals_requests$adapters_84, const_str_plain_proxy_manager_for, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_10_cert_verify();



        tmp_res = PyObject_SetItem(locals_requests$adapters_84, const_str_plain_cert_verify, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_11_build_response();



        tmp_res = PyObject_SetItem(locals_requests$adapters_84, const_str_plain_build_response, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = const_tuple_none_tuple;
            Py_INCREF(tmp_defaults_4);
            tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_12_get_connection(tmp_defaults_4);



            tmp_res = PyObject_SetItem(locals_requests$adapters_84, const_str_plain_get_connection, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_13_close();



        tmp_res = PyObject_SetItem(locals_requests$adapters_84, const_str_plain_close, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_14_request_url();



        tmp_res = PyObject_SetItem(locals_requests$adapters_84, const_str_plain_request_url, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_15_add_headers();



        tmp_res = PyObject_SetItem(locals_requests$adapters_84, const_str_plain_add_headers, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_16_proxy_headers();



        tmp_res = PyObject_SetItem(locals_requests$adapters_84, const_str_plain_proxy_headers, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_false_none_true_none_none_tuple;
            Py_INCREF(tmp_defaults_5);
            tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_17_send(tmp_defaults_5);



            tmp_res = PyObject_SetItem(locals_requests$adapters_84, const_str_plain_send, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_28539ee21c0cf589428515260236a41b_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_28539ee21c0cf589428515260236a41b_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_28539ee21c0cf589428515260236a41b_3, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_28539ee21c0cf589428515260236a41b_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_28539ee21c0cf589428515260236a41b_3, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_28539ee21c0cf589428515260236a41b_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if (frame_28539ee21c0cf589428515260236a41b_3 == cache_frame_28539ee21c0cf589428515260236a41b_3) {
            Py_DECREF(frame_28539ee21c0cf589428515260236a41b_3);
        }
        cache_frame_28539ee21c0cf589428515260236a41b_3 = NULL;

        assertFrameObject(frame_28539ee21c0cf589428515260236a41b_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_12;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_compexpr_left_3 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_compexpr_right_3 = tmp_class_creation_2__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto try_except_handler_12;
            }
            tmp_condition_result_13 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
            branch_yes_9:;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_dictset_value = tmp_class_creation_2__bases_orig;
            tmp_res = PyObject_SetItem(locals_requests$adapters_84, const_str_plain___orig_bases__, tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto try_except_handler_12;
            }
            branch_no_9:;
        }
        {
            PyObject *tmp_assign_source_69;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_9 = const_str_plain_HTTPAdapter;
            tmp_args_name_4 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_args_name_4, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_9 = tmp_class_creation_2__bases;
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_args_name_4, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_requests$adapters_84;
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_args_name_4, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame.f_lineno = 84;
            tmp_assign_source_69 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4);
            Py_DECREF(tmp_args_name_4);
            if (tmp_assign_source_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto try_except_handler_12;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_69;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_68 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_68);
        goto try_return_handler_12;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$adapters);
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_requests$adapters_84);
        locals_requests$adapters_84 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_requests$adapters_84);
        locals_requests$adapters_84 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$adapters);
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT((PyObject *)outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;

        goto outline_result_2;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(requests$adapters);
        return NULL;
        outline_exception_2:;
        exception_lineno = 84;
        goto try_except_handler_10;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_HTTPAdapter, tmp_assign_source_68);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;

    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_57dea2c39f5fc1cfee135e9688a72b58);
#endif
    popFrameStack();

    assertFrameObject(frame_57dea2c39f5fc1cfee135e9688a72b58);

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_57dea2c39f5fc1cfee135e9688a72b58);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_57dea2c39f5fc1cfee135e9688a72b58, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_57dea2c39f5fc1cfee135e9688a72b58->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_57dea2c39f5fc1cfee135e9688a72b58, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
    CHECK_OBJECT((PyObject *)tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;


    return module_requests$adapters;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
