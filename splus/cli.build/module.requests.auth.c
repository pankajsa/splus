/* Generated code for Python module 'requests.auth'
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

/* The "_module_requests$auth" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$auth;
PyDictObject *moduledict_requests$auth;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_threading;
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
extern PyObject *const_str_plain_warn;
static PyObject *const_str_plain_handle_401;
extern PyObject *const_str_plain_headers;
static PyObject *const_str_plain_sha512_utf8;
static PyObject *const_str_digest_51abe40552a340600cafb395a2df7065;
static PyObject *const_str_digest_91012c747d1826684889b0187ce7d184;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_digest_7b8850a6b4d3502f6f32cd3625c4afca;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_a48752b2d8c32906209a579a59eb860e;
extern PyObject *const_str_plain_request;
extern PyObject *const_str_plain___name__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_str_digest_e56c710cf2c13b7ef6797f95632e4090;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_latin1;
static PyObject *const_str_digest_41f78ead2be3f88523470f0013b27f8f;
extern PyObject *const_str_digest_67889f3b65748dbd83938a67635b28e4;
static PyObject *const_str_plain_nonce;
extern PyObject *const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
static PyObject *const_tuple_str_digest_58295a7b2ee00e12bd235bdf35e32b18_tuple;
extern PyObject *const_str_plain_encode;
static PyObject *const_str_digest_df91c2e0090a913ed1897e8fca207ea2;
extern PyObject *const_str_plain__internal_utils;
extern PyObject *const_str_plain_is_redirect;
static PyObject *const_str_digest_fe0ad47fb591025246f4d96ff82e1a89;
extern PyObject *const_tuple_str_chr_44_tuple;
extern PyObject *const_str_plain_seek;
static PyObject *const_str_plain_chal;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_sub;
static PyObject *const_str_plain_authstr;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_plain_category;
static PyObject *const_str_plain_MD5;
static PyObject *const_tuple_str_plain_parse_dict_header_tuple;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_body;
static PyObject *const_str_plain_algorithm;
static PyObject *const_str_digest_507ca0310b2f37ea4b2584d4cca02846;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_chr_63;
static PyObject *const_tuple_str_plain_opaque_tuple;
static PyObject *const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain_pos;
static PyObject *const_str_digest_7d7309ebed4abfa9aab0d6db44793741;
static PyObject *const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_str_plain_urlparse_str_plain_str_str_plain_basestring_tuple;
extern PyObject *const_str_plain_lower;
static PyObject *const_str_digest_4bfd8366dcc8506d555a9e4dbdeb488d;
static PyObject *const_tuple_523c034648fd62337f533a55bf071c15_tuple;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain_flags;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_urlparse;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_str;
extern PyObject *const_tuple_str_plain_to_native_string_tuple;
extern PyObject *const_str_plain___ne__;
static PyObject *const_str_digest_b0f8a4a055f15da2a394551a1933d695;
static PyObject *const_str_digest_3ae56c31f64e988caab68621b896b25f;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_chr_44;
static PyObject *const_str_plain_hexdigest;
static PyObject *const_str_digest_1ea32972192734a29d79f357f7d9be3e;
static PyObject *const_str_plain_SHA;
static PyObject *const_str_plain_AuthBase;
static PyObject *const_str_plain_realm;
extern PyObject *const_str_plain_hashlib;
extern PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_digest_f2d2f5f01d8d9360355c50eb1d09d771;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_DeprecationWarning;
static PyObject *const_str_plain_num_401_calls;
static PyObject *const_str_digest_065e009455d4c4ad1356e1bac835c3a1;
extern PyObject *const_tuple_str_plain_extract_cookies_to_jar_tuple;
extern PyObject *const_str_plain_query;
static PyObject *const_str_plain_sha512;
extern PyObject *const_str_plain_IGNORECASE;
extern PyObject *const_tuple_str_plain_latin1_tuple;
static PyObject *const_str_digest_1e080f858ef601c43605cc71a556333d;
extern PyObject *const_str_plain_init;
static PyObject *const_str_digest_f3a7a1ca53a484562486747f6ddca3a9;
extern PyObject *const_str_plain_base64;
extern PyObject *const_int_pos_8;
static PyObject *const_str_digest_a664f80c1075d8cfb85f49618afc684b;
extern PyObject *const_str_plain__r;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_last_nonce;
extern PyObject *const_str_plain_username;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_status_code;
static PyObject *const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple;
static PyObject *const_str_digest_a88adb7a245cfc6a39c69917da364c05;
extern PyObject *const_str_plain_prepare_cookies;
extern PyObject *const_str_plain_HTTPBasicAuth;
static PyObject *const_str_plain_sha_utf8;
extern PyObject *const_str_plain_raw;
extern PyObject *const_str_plain_tell;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_send;
static PyObject *const_str_digest_7565d3f493b69797b6a3c9c487eadc9f;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_tuple_str_plain_b64encode_tuple;
extern PyObject *const_str_plain_compile;
extern PyObject *const_str_plain_urandom;
static PyObject *const_str_plain_md5_utf8;
extern PyObject *const_str_plain_split;
static PyObject *const_str_digest_60aadb6b5e6f7210d6b0e13a6cd7dbcb;
static PyObject *const_str_digest_7c3d6be840d0505baea6486b3a2fb076;
extern PyObject *const_int_pos_500;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_cb06648d43a209f35d822642f76d8852;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_int_pos_400;
static PyObject *const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple;
extern PyObject *const_str_plain_connection;
static PyObject *const_str_digest_c3a9a47fda757d3a3b31995c197a305a;
extern PyObject *const_str_plain_count;
extern PyObject *const_str_plain___eq__;
extern PyObject *const_int_0;
static PyObject *const_str_digest_0a5fd62f7361e9a432a63066256a497f;
static PyObject *const_tuple_str_plain_qop_tuple;
extern PyObject *const_str_plain_upper;
extern PyObject *const_str_plain_content;
extern PyObject *const_str_plain__cookies;
extern PyObject *const_str_plain_response;
static PyObject *const_str_digest_58295a7b2ee00e12bd235bdf35e32b18;
extern PyObject *const_str_plain_Authorization;
static PyObject *const_str_plain_hash_utf8;
extern PyObject *const_str_plain_cookies;
static PyObject *const_slice_none_int_pos_16_none;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_extract_cookies_to_jar;
static PyObject *const_str_plain_handle_redirect;
extern PyObject *const_str_plain_to_native_string;
static PyObject *const_tuple_str_plain_algorithm_tuple;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_digest_437d9d9283e7705920d4361a76539982;
extern PyObject *const_str_plain_x;
static PyObject *const_str_plain_CONTENT_TYPE_FORM_URLENCODED;
static PyObject *const_str_digest_acf0af13ef75ff62ec9955ae4dcea3e9;
static PyObject *const_str_digest_0ca141503f179b28e3129781569b5edb;
static PyObject *const_str_plain_CONTENT_TYPE_MULTI_PART;
static PyObject *const_str_digest_37d3a2307e31335fa61f05d3486fd568;
extern PyObject *const_tuple_str_plain_self_str_plain_r_tuple;
extern PyObject *const_str_angle_lambda;
static PyObject *const_str_digest_a82f8015cfcad4d42fa43483823a6f72;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_d69b853fcab0d61d934c8e6dc6bd2d6a;
static PyObject *const_str_plain_s_auth;
extern PyObject *const_str_plain_parse_dict_header;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_digest_01a11c701578b78bc17e57844dca83b0;
static PyObject *const_str_digest_3267db0b9e319da1a85ef722557dd6fe;
static PyObject *const_str_digest_128a37116d6d30cc1592bb98f4d24b46;
static PyObject *const_str_plain_ctime;
extern PyObject *const_str_plain_basestring;
extern PyObject *const_str_plain_password;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain__thread_local;
extern PyObject *const_str_chr_47;
static PyObject *const_str_digest_2fc3f96e0216dbc7dcd34461a1c4d2ee;
extern PyObject *const_str_plain_sha1;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_sha256_utf8;
static PyObject *const_str_digest_fe400b7786b755fe7fa07749cdd2ff1e;
static PyObject *const_str_plain_prep;
static PyObject *const_tuple_136046813187593286870b153208de90_tuple;
static PyObject *const_str_digest_a49a175904e70dd9f5dc0f52dbebbfdb;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_digest;
extern PyObject *const_str_plain_local;
extern PyObject *const_str_plain_other;
extern PyObject *const_str_plain_auth;
static PyObject *const_str_plain_build_digest_header;
static PyObject *const_str_digest_1086311fbf6e3245df872c941ed6e8ad;
extern PyObject *const_str_plain__basic_auth_str;
static PyObject *const_str_digest_e1ae02aba66d45ac9d7f070694408d22;
static PyObject *const_str_digest_5bf0e52ad3af9d76b6e6716841011fd0;
static PyObject *const_str_digest_69c286e01655beff40436b2cda33b552;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_dict_d96fc9db79024853de9fbab06f7c41d9;
extern PyObject *const_str_plain_history;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_url;
static PyObject *const_tuple_str_digest_a88adb7a245cfc6a39c69917da364c05_str_empty_tuple;
static PyObject *const_str_digest_919a2045e823b128b54cfd720f73e3bf;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_qop;
extern PyObject *const_bytes_chr_58;
static PyObject *const_tuple_int_pos_8_tuple;
static PyObject *const_str_plain_init_per_thread_state;
extern PyObject *const_str_plain_md5;
extern PyObject *const_str_plain_method;
extern PyObject *const_str_plain_b64encode;
extern PyObject *const_str_plain___call__;
extern PyObject *const_str_plain_register_hook;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_digest_5d735bc80d16f0fedbdde78344a2d394;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_sha256;
static PyObject *const_str_digest_ee22ae99a5537f5b922bb4b122196ae7;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_compat;
extern PyObject *const_str_plain_format;
static PyObject *const_str_plain_nonce_count;
static PyObject *const_str_plain_opaque;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_aa04245735e0a296f4eee2c81c6c24b4;
static PyObject *const_str_digest_67bc2e2875f2a676ae8e8f2595c69cad;
static PyObject *const_str_digest_7a006474c4967997a79cedaecd602a45;
extern PyObject *const_str_plain_pat;
static PyObject *const_str_plain_HTTPDigestAuth;
static PyObject *const_str_plain_HTTPProxyAuth;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain_handle_401 = UNSTREAM_STRING_ASCII(&constant_bin[ 643049 ], 10, 1);
    const_str_plain_sha512_utf8 = UNSTREAM_STRING_ASCII(&constant_bin[ 643059 ], 11, 1);
    const_str_digest_51abe40552a340600cafb395a2df7065 = UNSTREAM_STRING_ASCII(&constant_bin[ 643070 ], 22, 0);
    const_str_digest_91012c747d1826684889b0187ce7d184 = UNSTREAM_STRING_ASCII(&constant_bin[ 643092 ], 7, 0);
    const_str_digest_7b8850a6b4d3502f6f32cd3625c4afca = UNSTREAM_STRING_ASCII(&constant_bin[ 643099 ], 8, 0);
    const_str_digest_a48752b2d8c32906209a579a59eb860e = UNSTREAM_STRING_ASCII(&constant_bin[ 643107 ], 52, 0);
    const_str_digest_e56c710cf2c13b7ef6797f95632e4090 = UNSTREAM_STRING_ASCII(&constant_bin[ 643159 ], 183, 0);
    const_str_digest_41f78ead2be3f88523470f0013b27f8f = UNSTREAM_STRING_ASCII(&constant_bin[ 643342 ], 52, 0);
    const_str_plain_nonce = UNSTREAM_STRING_ASCII(&constant_bin[ 643394 ], 5, 1);
    const_tuple_str_digest_58295a7b2ee00e12bd235bdf35e32b18_tuple = PyTuple_New(1);
    const_str_digest_58295a7b2ee00e12bd235bdf35e32b18 = UNSTREAM_STRING_ASCII(&constant_bin[ 643399 ], 7, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_58295a7b2ee00e12bd235bdf35e32b18_tuple, 0, const_str_digest_58295a7b2ee00e12bd235bdf35e32b18); Py_INCREF(const_str_digest_58295a7b2ee00e12bd235bdf35e32b18);
    const_str_digest_df91c2e0090a913ed1897e8fca207ea2 = UNSTREAM_STRING_ASCII(&constant_bin[ 632970 ], 29, 0);
    const_str_digest_fe0ad47fb591025246f4d96ff82e1a89 = UNSTREAM_STRING_ASCII(&constant_bin[ 643406 ], 111, 0);
    const_str_plain_chal = UNSTREAM_STRING_ASCII(&constant_bin[ 643517 ], 4, 1);
    const_str_plain_authstr = UNSTREAM_STRING_ASCII(&constant_bin[ 643521 ], 7, 1);
    const_str_plain_MD5 = UNSTREAM_STRING_ASCII(&constant_bin[ 643528 ], 3, 1);
    const_tuple_str_plain_parse_dict_header_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_parse_dict_header_tuple, 0, const_str_plain_parse_dict_header); Py_INCREF(const_str_plain_parse_dict_header);
    const_str_plain_algorithm = UNSTREAM_STRING_ASCII(&constant_bin[ 459545 ], 9, 1);
    const_str_digest_507ca0310b2f37ea4b2584d4cca02846 = UNSTREAM_STRING_ASCII(&constant_bin[ 643531 ], 28, 0);
    const_tuple_str_plain_opaque_tuple = PyTuple_New(1);
    const_str_plain_opaque = UNSTREAM_STRING_ASCII(&constant_bin[ 643559 ], 6, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_opaque_tuple, 0, const_str_plain_opaque); Py_INCREF(const_str_plain_opaque);
    const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple, 0, const_str_plain_s); Py_INCREF(const_str_plain_s);
    PyTuple_SET_ITEM(const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple, 1, const_str_plain_d); Py_INCREF(const_str_plain_d);
    const_str_plain_hash_utf8 = UNSTREAM_STRING_ASCII(&constant_bin[ 643565 ], 9, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple, 2, const_str_plain_hash_utf8); Py_INCREF(const_str_plain_hash_utf8);
    const_str_digest_7d7309ebed4abfa9aab0d6db44793741 = UNSTREAM_STRING_ASCII(&constant_bin[ 643574 ], 13, 0);
    const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple, 1, const_str_plain_r); Py_INCREF(const_str_plain_r);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple, 2, const_str_plain_kwargs); Py_INCREF(const_str_plain_kwargs);
    const_tuple_str_plain_urlparse_str_plain_str_str_plain_basestring_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_urlparse_str_plain_str_str_plain_basestring_tuple, 0, const_str_plain_urlparse); Py_INCREF(const_str_plain_urlparse);
    PyTuple_SET_ITEM(const_tuple_str_plain_urlparse_str_plain_str_str_plain_basestring_tuple, 1, const_str_plain_str); Py_INCREF(const_str_plain_str);
    PyTuple_SET_ITEM(const_tuple_str_plain_urlparse_str_plain_str_str_plain_basestring_tuple, 2, const_str_plain_basestring); Py_INCREF(const_str_plain_basestring);
    const_str_digest_4bfd8366dcc8506d555a9e4dbdeb488d = UNSTREAM_STRING_ASCII(&constant_bin[ 643587 ], 93, 0);
    const_tuple_523c034648fd62337f533a55bf071c15_tuple = PyTuple_New(7);
    PyTuple_SET_ITEM(const_tuple_523c034648fd62337f533a55bf071c15_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_523c034648fd62337f533a55bf071c15_tuple, 1, const_str_plain_r); Py_INCREF(const_str_plain_r);
    PyTuple_SET_ITEM(const_tuple_523c034648fd62337f533a55bf071c15_tuple, 2, const_str_plain_kwargs); Py_INCREF(const_str_plain_kwargs);
    const_str_plain_s_auth = UNSTREAM_STRING_ASCII(&constant_bin[ 643680 ], 6, 1);
    PyTuple_SET_ITEM(const_tuple_523c034648fd62337f533a55bf071c15_tuple, 3, const_str_plain_s_auth); Py_INCREF(const_str_plain_s_auth);
    PyTuple_SET_ITEM(const_tuple_523c034648fd62337f533a55bf071c15_tuple, 4, const_str_plain_pat); Py_INCREF(const_str_plain_pat);
    const_str_plain_prep = UNSTREAM_STRING_ASCII(&constant_bin[ 20115 ], 4, 1);
    PyTuple_SET_ITEM(const_tuple_523c034648fd62337f533a55bf071c15_tuple, 5, const_str_plain_prep); Py_INCREF(const_str_plain_prep);
    PyTuple_SET_ITEM(const_tuple_523c034648fd62337f533a55bf071c15_tuple, 6, const_str_plain__r); Py_INCREF(const_str_plain__r);
    const_str_digest_b0f8a4a055f15da2a394551a1933d695 = UNSTREAM_STRING_ASCII(&constant_bin[ 643686 ], 14, 0);
    const_str_digest_3ae56c31f64e988caab68621b896b25f = UNSTREAM_STRING_ASCII(&constant_bin[ 643700 ], 22, 0);
    const_str_plain_hexdigest = UNSTREAM_STRING_ASCII(&constant_bin[ 643722 ], 9, 1);
    const_str_digest_1ea32972192734a29d79f357f7d9be3e = UNSTREAM_STRING_ASCII(&constant_bin[ 643731 ], 55, 0);
    const_str_plain_SHA = UNSTREAM_STRING_ASCII(&constant_bin[ 643092 ], 3, 1);
    const_str_plain_AuthBase = UNSTREAM_STRING_ASCII(&constant_bin[ 21442 ], 8, 1);
    const_str_plain_realm = UNSTREAM_STRING_ASCII(&constant_bin[ 643786 ], 5, 1);
    const_str_plain_num_401_calls = UNSTREAM_STRING_ASCII(&constant_bin[ 643791 ], 13, 1);
    const_str_digest_065e009455d4c4ad1356e1bac835c3a1 = UNSTREAM_STRING_ASCII(&constant_bin[ 643804 ], 55, 0);
    const_str_plain_sha512 = UNSTREAM_STRING_ASCII(&constant_bin[ 643059 ], 6, 1);
    const_str_digest_1e080f858ef601c43605cc71a556333d = UNSTREAM_STRING_ASCII(&constant_bin[ 643859 ], 7, 0);
    const_str_digest_f3a7a1ca53a484562486747f6ddca3a9 = UNSTREAM_STRING_ASCII(&constant_bin[ 643866 ], 22, 0);
    const_str_digest_a664f80c1075d8cfb85f49618afc684b = UNSTREAM_STRING_ASCII(&constant_bin[ 643888 ], 63, 0);
    const_str_plain_last_nonce = UNSTREAM_STRING_ASCII(&constant_bin[ 643951 ], 10, 1);
    const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, 1, const_str_plain_username); Py_INCREF(const_str_plain_username);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, 2, const_str_plain_password); Py_INCREF(const_str_plain_password);
    const_str_digest_a88adb7a245cfc6a39c69917da364c05 = UNSTREAM_STRING_ASCII(&constant_bin[ 643961 ], 16, 0);
    const_str_plain_sha_utf8 = UNSTREAM_STRING_ASCII(&constant_bin[ 643151 ], 8, 1);
    const_str_digest_7565d3f493b69797b6a3c9c487eadc9f = UNSTREAM_STRING_ASCII(&constant_bin[ 643977 ], 20, 0);
    const_str_plain_md5_utf8 = UNSTREAM_STRING_ASCII(&constant_bin[ 643997 ], 8, 1);
    const_str_digest_60aadb6b5e6f7210d6b0e13a6cd7dbcb = UNSTREAM_STRING_ASCII(&constant_bin[ 644005 ], 17, 0);
    const_str_digest_7c3d6be840d0505baea6486b3a2fb076 = UNSTREAM_STRING_ASCII(&constant_bin[ 644022 ], 30, 0);
    const_str_digest_cb06648d43a209f35d822642f76d8852 = UNSTREAM_STRING_ASCII(&constant_bin[ 644052 ], 20, 0);
    const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple, 0, const_str_plain_username); Py_INCREF(const_str_plain_username);
    PyTuple_SET_ITEM(const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple, 1, const_str_plain_password); Py_INCREF(const_str_plain_password);
    PyTuple_SET_ITEM(const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple, 2, const_str_plain_authstr); Py_INCREF(const_str_plain_authstr);
    const_str_digest_c3a9a47fda757d3a3b31995c197a305a = UNSTREAM_STRING_ASCII(&constant_bin[ 644072 ], 21, 0);
    const_str_digest_0a5fd62f7361e9a432a63066256a497f = UNSTREAM_STRING_ASCII(&constant_bin[ 644093 ], 183, 0);
    const_tuple_str_plain_qop_tuple = PyTuple_New(1);
    const_str_plain_qop = UNSTREAM_STRING_ASCII(&constant_bin[ 644276 ], 3, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_qop_tuple, 0, const_str_plain_qop); Py_INCREF(const_str_plain_qop);
    const_slice_none_int_pos_16_none = PySlice_New(Py_None, const_int_pos_16, Py_None);
    const_str_plain_handle_redirect = UNSTREAM_STRING_ASCII(&constant_bin[ 644037 ], 15, 1);
    const_tuple_str_plain_algorithm_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_algorithm_tuple, 0, const_str_plain_algorithm); Py_INCREF(const_str_plain_algorithm);
    const_str_digest_437d9d9283e7705920d4361a76539982 = UNSTREAM_STRING_ASCII(&constant_bin[ 644279 ], 52, 0);
    const_str_plain_CONTENT_TYPE_FORM_URLENCODED = UNSTREAM_STRING_ASCII(&constant_bin[ 644331 ], 28, 1);
    const_str_digest_acf0af13ef75ff62ec9955ae4dcea3e9 = UNSTREAM_STRING_ASCII(&constant_bin[ 644359 ], 64, 0);
    const_str_digest_0ca141503f179b28e3129781569b5edb = UNSTREAM_STRING_ASCII(&constant_bin[ 644423 ], 55, 0);
    const_str_plain_CONTENT_TYPE_MULTI_PART = UNSTREAM_STRING_ASCII(&constant_bin[ 644478 ], 23, 1);
    const_str_digest_37d3a2307e31335fa61f05d3486fd568 = UNSTREAM_STRING_ASCII(&constant_bin[ 644501 ], 36, 0);
    const_str_digest_a82f8015cfcad4d42fa43483823a6f72 = UNSTREAM_STRING_ASCII(&constant_bin[ 644537 ], 32, 0);
    const_str_digest_d69b853fcab0d61d934c8e6dc6bd2d6a = UNSTREAM_STRING_ASCII(&constant_bin[ 644569 ], 16, 0);
    const_str_digest_01a11c701578b78bc17e57844dca83b0 = UNSTREAM_STRING_ASCII(&constant_bin[ 644585 ], 4, 0);
    const_str_digest_3267db0b9e319da1a85ef722557dd6fe = UNSTREAM_STRING_ASCII(&constant_bin[ 644589 ], 61, 0);
    const_str_digest_128a37116d6d30cc1592bb98f4d24b46 = UNSTREAM_STRING_ASCII(&constant_bin[ 644650 ], 22, 0);
    const_str_plain_ctime = UNSTREAM_STRING_ASCII(&constant_bin[ 644672 ], 5, 1);
    const_str_plain__thread_local = UNSTREAM_STRING_ASCII(&constant_bin[ 644677 ], 13, 1);
    const_str_digest_2fc3f96e0216dbc7dcd34461a1c4d2ee = UNSTREAM_STRING_ASCII(&constant_bin[ 644690 ], 52, 0);
    const_str_plain_sha256_utf8 = UNSTREAM_STRING_ASCII(&constant_bin[ 643848 ], 11, 1);
    const_str_digest_fe400b7786b755fe7fa07749cdd2ff1e = UNSTREAM_STRING_ASCII(&constant_bin[ 644742 ], 62, 0);
    const_tuple_136046813187593286870b153208de90_tuple = PyMarshal_ReadObjectFromString((char *)&constant_bin[ 644804 ], 219);
    const_str_digest_a49a175904e70dd9f5dc0f52dbebbfdb = UNSTREAM_STRING_ASCII(&constant_bin[ 645023 ], 8, 0);
    const_str_plain_build_digest_header = UNSTREAM_STRING_ASCII(&constant_bin[ 643122 ], 19, 1);
    const_str_digest_1086311fbf6e3245df872c941ed6e8ad = UNSTREAM_STRING_ASCII(&constant_bin[ 645031 ], 21, 0);
    const_str_digest_e1ae02aba66d45ac9d7f070694408d22 = UNSTREAM_STRING_ASCII(&constant_bin[ 645052 ], 19, 0);
    const_str_digest_5bf0e52ad3af9d76b6e6716841011fd0 = UNSTREAM_STRING_ASCII(&constant_bin[ 645071 ], 41, 0);
    const_str_digest_69c286e01655beff40436b2cda33b552 = UNSTREAM_STRING_ASCII(&constant_bin[ 645112 ], 9, 0);
    const_dict_d96fc9db79024853de9fbab06f7c41d9 = _PyDict_NewPresized( 1 );
    PyDict_SetItem(const_dict_d96fc9db79024853de9fbab06f7c41d9, const_str_plain_count, const_int_pos_1);
    assert(PyDict_Size(const_dict_d96fc9db79024853de9fbab06f7c41d9) == 1);
    const_tuple_str_digest_a88adb7a245cfc6a39c69917da364c05_str_empty_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_digest_a88adb7a245cfc6a39c69917da364c05_str_empty_tuple, 0, const_str_digest_a88adb7a245cfc6a39c69917da364c05); Py_INCREF(const_str_digest_a88adb7a245cfc6a39c69917da364c05);
    PyTuple_SET_ITEM(const_tuple_str_digest_a88adb7a245cfc6a39c69917da364c05_str_empty_tuple, 1, const_str_empty); Py_INCREF(const_str_empty);
    const_str_digest_919a2045e823b128b54cfd720f73e3bf = UNSTREAM_STRING_ASCII(&constant_bin[ 645121 ], 28, 0);
    const_tuple_int_pos_8_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_int_pos_8_tuple, 0, const_int_pos_8); Py_INCREF(const_int_pos_8);
    const_str_plain_init_per_thread_state = UNSTREAM_STRING_ASCII(&constant_bin[ 644516 ], 21, 1);
    const_str_digest_ee22ae99a5537f5b922bb4b122196ae7 = UNSTREAM_STRING_ASCII(&constant_bin[ 645149 ], 23, 0);
    const_str_plain_nonce_count = UNSTREAM_STRING_ASCII(&constant_bin[ 645172 ], 11, 1);
    const_str_digest_aa04245735e0a296f4eee2c81c6c24b4 = UNSTREAM_STRING_ASCII(&constant_bin[ 645183 ], 25, 0);
    const_str_digest_67bc2e2875f2a676ae8e8f2595c69cad = UNSTREAM_STRING_ASCII(&constant_bin[ 643107 ], 34, 0);
    const_str_digest_7a006474c4967997a79cedaecd602a45 = UNSTREAM_STRING_ASCII(&constant_bin[ 645208 ], 23, 0);
    const_str_plain_HTTPDigestAuth = UNSTREAM_STRING_ASCII(&constant_bin[ 643107 ], 14, 1);
    const_str_plain_HTTPProxyAuth = UNSTREAM_STRING_ASCII(&constant_bin[ 644650 ], 13, 1);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$auth(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_49a0a1b501fe741a30322c0675ff4d57;
static PyCodeObject *codeobj_31c5cff77f6e5b2874742d9e052c758b;
static PyCodeObject *codeobj_f97898daf1c20e6fc87ab49a5061c7db;
static PyCodeObject *codeobj_8634cf718102c054736afa1980bbe406;
static PyCodeObject *codeobj_dda5c26f77d009d43e7170e4a2d5b0ae;
static PyCodeObject *codeobj_e736912366e6eb45eed321a89ef225ee;
static PyCodeObject *codeobj_14aad80b738dfb2fbf7ee91d9955493f;
static PyCodeObject *codeobj_95dd8073b8ccf7b2583d4a50a7ce93ea;
static PyCodeObject *codeobj_c97737131748de6d30b174103fc0f66a;
static PyCodeObject *codeobj_f4428954416bdb818b1d9ab978214db2;
static PyCodeObject *codeobj_8fa257e4c0594b5e9e75062882f43f1e;
static PyCodeObject *codeobj_7a8447f11667ada94155f3bd2fc5bdfd;
static PyCodeObject *codeobj_ce20f5ff8dcca1226032ca6ff74fc15e;
static PyCodeObject *codeobj_1415eb5f775e82b1d716c088c348e8f4;
static PyCodeObject *codeobj_74e2d71630ae6decab0ccdedd1b22381;
static PyCodeObject *codeobj_e48527654cd8f0f408bb3f885abd40d3;
static PyCodeObject *codeobj_881995f222c2fa3a7027a470df3643f4;
static PyCodeObject *codeobj_acf6237378e09ec927e19c2054595557;
static PyCodeObject *codeobj_96b663c01239ead45ea5933b42f0193d;
static PyCodeObject *codeobj_ba5a4e21b74f317e2a1493321cc1c608;
static PyCodeObject *codeobj_832a24c057df6f683199bae35426fc0c;
static PyCodeObject *codeobj_0b2886732758ba8d30f8eb7d96304e0b;
static PyCodeObject *codeobj_f5bf62abff2343d9a54cbf956f9c76bc;
static PyCodeObject *codeobj_9df9079fbe6c40e16b35de2958eea861;
static PyCodeObject *codeobj_b300000583233bc0e5740b94813a42b5;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_1ea32972192734a29d79f357f7d9be3e;
    codeobj_49a0a1b501fe741a30322c0675ff4d57 = MAKE_CODEOBJECT(module_filename_obj, 169, CO_OPTIMIZED | CO_NEWLOCALS, const_str_angle_lambda, const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple, 2, 0, 0);
    codeobj_31c5cff77f6e5b2874742d9e052c758b = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_3ae56c31f64e988caab68621b896b25f, const_tuple_empty, 0, 0, 0);
    codeobj_f97898daf1c20e6fc87ab49a5061c7db = MAKE_CODEOBJECT(module_filename_obj, 72, CO_NOFREE, const_str_plain_AuthBase, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_8634cf718102c054736afa1980bbe406 = MAKE_CODEOBJECT(module_filename_obj, 79, CO_NOFREE, const_str_plain_HTTPBasicAuth, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_dda5c26f77d009d43e7170e4a2d5b0ae = MAKE_CODEOBJECT(module_filename_obj, 108, CO_NOFREE, const_str_plain_HTTPDigestAuth, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_e736912366e6eb45eed321a89ef225ee = MAKE_CODEOBJECT(module_filename_obj, 100, CO_NOFREE, const_str_plain_HTTPProxyAuth, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_14aad80b738dfb2fbf7ee91d9955493f = MAKE_CODEOBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___call__, const_tuple_str_plain_self_str_plain_r_tuple, 2, 0, 0);
    codeobj_95dd8073b8ccf7b2583d4a50a7ce93ea = MAKE_CODEOBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___call__, const_tuple_str_plain_self_str_plain_r_tuple, 2, 0, 0);
    codeobj_c97737131748de6d30b174103fc0f66a = MAKE_CODEOBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___call__, const_tuple_str_plain_self_str_plain_r_tuple, 2, 0, 0);
    codeobj_f4428954416bdb818b1d9ab978214db2 = MAKE_CODEOBJECT(module_filename_obj, 278, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___call__, const_tuple_str_plain_self_str_plain_r_tuple, 2, 0, 0);
    codeobj_8fa257e4c0594b5e9e75062882f43f1e = MAKE_CODEOBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___eq__, const_tuple_str_plain_self_str_plain_other_tuple, 2, 0, 0);
    codeobj_7a8447f11667ada94155f3bd2fc5bdfd = MAKE_CODEOBJECT(module_filename_obj, 298, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___eq__, const_tuple_str_plain_self_str_plain_other_tuple, 2, 0, 0);
    codeobj_ce20f5ff8dcca1226032ca6ff74fc15e = MAKE_CODEOBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___init__, const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, 3, 0, 0);
    codeobj_1415eb5f775e82b1d716c088c348e8f4 = MAKE_CODEOBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___init__, const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, 3, 0, 0);
    codeobj_74e2d71630ae6decab0ccdedd1b22381 = MAKE_CODEOBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___ne__, const_tuple_str_plain_self_str_plain_other_tuple, 2, 0, 0);
    codeobj_e48527654cd8f0f408bb3f885abd40d3 = MAKE_CODEOBJECT(module_filename_obj, 304, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___ne__, const_tuple_str_plain_self_str_plain_other_tuple, 2, 0, 0);
    codeobj_881995f222c2fa3a7027a470df3643f4 = MAKE_CODEOBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__basic_auth_str, const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple, 2, 0, 0);
    codeobj_acf6237378e09ec927e19c2054595557 = MAKE_CODEOBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_build_digest_header, const_tuple_136046813187593286870b153208de90_tuple, 3, 0, 0);
    codeobj_96b663c01239ead45ea5933b42f0193d = MAKE_CODEOBJECT(module_filename_obj, 234, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_handle_401, const_tuple_523c034648fd62337f533a55bf071c15_tuple, 2, 0, 0);
    codeobj_ba5a4e21b74f317e2a1493321cc1c608 = MAKE_CODEOBJECT(module_filename_obj, 229, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_handle_redirect, const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple, 2, 0, 0);
    codeobj_832a24c057df6f683199bae35426fc0c = MAKE_CODEOBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_init_per_thread_state, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_0b2886732758ba8d30f8eb7d96304e0b = MAKE_CODEOBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_md5_utf8, const_tuple_str_plain_x_tuple, 1, 0, 0);
    codeobj_f5bf62abff2343d9a54cbf956f9c76bc = MAKE_CODEOBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_sha256_utf8, const_tuple_str_plain_x_tuple, 1, 0, 0);
    codeobj_9df9079fbe6c40e16b35de2958eea861 = MAKE_CODEOBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_sha512_utf8, const_tuple_str_plain_x_tuple, 1, 0, 0);
    codeobj_b300000583233bc0e5740b94813a42b5 = MAKE_CODEOBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_sha_utf8, const_tuple_str_plain_x_tuple, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_pos_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header();


static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_1_md5_utf8();


static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_2_sha_utf8();


static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_3_sha256_utf8();


static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_4_sha512_utf8();


static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_5_lambda();


static PyObject *MAKE_FUNCTION_requests$auth$$$function_11_handle_redirect();


static PyObject *MAKE_FUNCTION_requests$auth$$$function_12_handle_401();


static PyObject *MAKE_FUNCTION_requests$auth$$$function_13___call__();


static PyObject *MAKE_FUNCTION_requests$auth$$$function_14___eq__();


static PyObject *MAKE_FUNCTION_requests$auth$$$function_15___ne__();


static PyObject *MAKE_FUNCTION_requests$auth$$$function_1__basic_auth_str();


static PyObject *MAKE_FUNCTION_requests$auth$$$function_2___call__();


static PyObject *MAKE_FUNCTION_requests$auth$$$function_3___init__();


static PyObject *MAKE_FUNCTION_requests$auth$$$function_4___eq__();


static PyObject *MAKE_FUNCTION_requests$auth$$$function_5___ne__();


static PyObject *MAKE_FUNCTION_requests$auth$$$function_6___call__();


static PyObject *MAKE_FUNCTION_requests$auth$$$function_7___call__();


static PyObject *MAKE_FUNCTION_requests$auth$$$function_8___init__();


static PyObject *MAKE_FUNCTION_requests$auth$$$function_9_init_per_thread_state();


// The module function definitions.
static PyObject *impl_requests$auth$$$function_1__basic_auth_str(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_username = python_pars[0];
    PyObject *par_password = python_pars[1];
    PyObject *var_authstr = NULL;
    struct Nuitka_FrameObject *frame_881995f222c2fa3a7027a470df3643f4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_881995f222c2fa3a7027a470df3643f4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_881995f222c2fa3a7027a470df3643f4, codeobj_881995f222c2fa3a7027a470df3643f4, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_881995f222c2fa3a7027a470df3643f4 = cache_frame_881995f222c2fa3a7027a470df3643f4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_881995f222c2fa3a7027a470df3643f4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_881995f222c2fa3a7027a470df3643f4) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_username);
        tmp_isinstance_inst_1 = par_username;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_basestring);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19881 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooo";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_warnings);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 19137 ], 30, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 39;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_warn);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_called_instance_1 = const_str_digest_0a5fd62f7361e9a432a63066256a497f;
            CHECK_OBJECT(par_username);
            tmp_args_element_name_1 = par_username;
            frame_881995f222c2fa3a7027a470df3643f4->m_frame.f_lineno = 40;
            {
                PyObject *call_args[] = {tmp_args_element_name_1};
                tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_format, call_args);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);

                exception_lineno = 40;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_1 = PyTuple_New(1);
            PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
            tmp_dict_key_1 = const_str_plain_category;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_DeprecationWarning);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning);
            }

            if (tmp_mvar_value_3 == NULL) {
                Py_DECREF(tmp_called_name_1);
                Py_DECREF(tmp_args_name_1);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 21228 ], 40, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 44;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_1 = tmp_mvar_value_3;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            frame_881995f222c2fa3a7027a470df3643f4->m_frame.f_lineno = 39;
            tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_name_1);
            Py_DECREF(tmp_kw_name_1);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_str);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 15520 ], 25, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 46;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_4;
            CHECK_OBJECT(par_username);
            tmp_args_element_name_2 = par_username;
            frame_881995f222c2fa3a7027a470df3643f4->m_frame.f_lineno = 46;
            tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_username;
                assert(old != NULL);
                par_username = tmp_assign_source_1;
                Py_DECREF(old);
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_mvar_value_5;
        CHECK_OBJECT(par_password);
        tmp_isinstance_inst_2 = par_password;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_basestring);

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

            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_2 = tmp_mvar_value_5;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
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
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_warnings);

            if (unlikely(tmp_mvar_value_6 == NULL)) {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings);
            }

            if (tmp_mvar_value_6 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 19137 ], 30, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 49;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_6;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_warn);
            if (tmp_called_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_called_instance_2 = const_str_digest_e56c710cf2c13b7ef6797f95632e4090;
            CHECK_OBJECT(par_password);
            tmp_args_element_name_3 = par_password;
            frame_881995f222c2fa3a7027a470df3643f4->m_frame.f_lineno = 50;
            {
                PyObject *call_args[] = {tmp_args_element_name_3};
                tmp_tuple_element_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_format, call_args);
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_3);

                exception_lineno = 50;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_2 = PyTuple_New(1);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_2);
            tmp_dict_key_2 = const_str_plain_category;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_DeprecationWarning);

            if (unlikely(tmp_mvar_value_7 == NULL)) {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning);
            }

            if (tmp_mvar_value_7 == NULL) {
                Py_DECREF(tmp_called_name_3);
                Py_DECREF(tmp_args_name_2);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 21228 ], 40, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 54;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_2 = tmp_mvar_value_7;
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            frame_881995f222c2fa3a7027a470df3643f4->m_frame.f_lineno = 49;
            tmp_call_result_2 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_name_2);
            Py_DECREF(tmp_kw_name_2);
            if (tmp_call_result_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_2);
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str);

            if (unlikely(tmp_mvar_value_8 == NULL)) {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_str);
            }

            if (tmp_mvar_value_8 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 15520 ], 25, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 56;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_8;
            CHECK_OBJECT(par_password);
            tmp_args_element_name_4 = par_password;
            frame_881995f222c2fa3a7027a470df3643f4->m_frame.f_lineno = 56;
            tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_password;
                assert(old != NULL);
                par_password = tmp_assign_source_2;
                Py_DECREF(old);
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        PyObject *tmp_mvar_value_9;
        CHECK_OBJECT(par_username);
        tmp_isinstance_inst_3 = par_username;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_str);
        }

        if (tmp_mvar_value_9 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15520 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_3 = tmp_mvar_value_9;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooo";
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_3;
            CHECK_OBJECT(par_username);
            tmp_called_instance_3 = par_username;
            frame_881995f222c2fa3a7027a470df3643f4->m_frame.f_lineno = 60;
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_encode, &PyTuple_GET_ITEM(const_tuple_str_plain_latin1_tuple, 0));

            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_username;
                assert(old != NULL);
                par_username = tmp_assign_source_3;
                Py_DECREF(old);
            }

        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        PyObject *tmp_mvar_value_10;
        CHECK_OBJECT(par_password);
        tmp_isinstance_inst_4 = par_password;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_str);
        }

        if (tmp_mvar_value_10 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15520 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_4 = tmp_mvar_value_10;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_instance_4;
            CHECK_OBJECT(par_password);
            tmp_called_instance_4 = par_password;
            frame_881995f222c2fa3a7027a470df3643f4->m_frame.f_lineno = 63;
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_encode, &PyTuple_GET_ITEM(const_tuple_str_plain_latin1_tuple, 0));

            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_password;
                assert(old != NULL);
                par_password = tmp_assign_source_4;
                Py_DECREF(old);
            }

        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_tuple_element_3;
        tmp_left_name_1 = const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_to_native_string);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_to_native_string);
        }

        if (tmp_mvar_value_11 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21268 ], 38, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_11;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_b64encode);

        if (unlikely(tmp_mvar_value_12 == NULL)) {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_b64encode);
        }

        if (tmp_mvar_value_12 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21306 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_12;
        tmp_source_name_3 = const_bytes_chr_58;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_join);
        assert(!(tmp_called_name_7 == NULL));
        if (par_username == NULL) {
            Py_DECREF(tmp_called_name_7);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "username");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = par_username;
        tmp_args_element_name_7 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_args_element_name_7, 0, tmp_tuple_element_3);
        if (par_password == NULL) {
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_args_element_name_7);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "password");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = par_password;
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_args_element_name_7, 1, tmp_tuple_element_3);
        frame_881995f222c2fa3a7027a470df3643f4->m_frame.f_lineno = 66;
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_7);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_881995f222c2fa3a7027a470df3643f4->m_frame.f_lineno = 66;
        tmp_called_instance_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_6);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_881995f222c2fa3a7027a470df3643f4->m_frame.f_lineno = 66;
        tmp_args_element_name_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, const_str_plain_strip);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_881995f222c2fa3a7027a470df3643f4->m_frame.f_lineno = 65;
        tmp_right_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_5);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_ADD_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_authstr == NULL);
        var_authstr = tmp_assign_source_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_881995f222c2fa3a7027a470df3643f4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_881995f222c2fa3a7027a470df3643f4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_881995f222c2fa3a7027a470df3643f4, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_881995f222c2fa3a7027a470df3643f4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_881995f222c2fa3a7027a470df3643f4, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_881995f222c2fa3a7027a470df3643f4,
        type_description_1,
        par_username,
        par_password,
        var_authstr
    );


    // Release cached frame.
    if (frame_881995f222c2fa3a7027a470df3643f4 == cache_frame_881995f222c2fa3a7027a470df3643f4) {
        Py_DECREF(frame_881995f222c2fa3a7027a470df3643f4);
    }
    cache_frame_881995f222c2fa3a7027a470df3643f4 = NULL;

    assertFrameObject(frame_881995f222c2fa3a7027a470df3643f4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_authstr);
    tmp_return_value = var_authstr;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_1__basic_auth_str);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_username);
    par_username = NULL;

    Py_XDECREF(par_password);
    par_password = NULL;

    CHECK_OBJECT((PyObject *)var_authstr);
    Py_DECREF(var_authstr);
    var_authstr = NULL;

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

    Py_XDECREF(par_username);
    par_username = NULL;

    Py_XDECREF(par_password);
    par_password = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_1__basic_auth_str);
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


static PyObject *impl_requests$auth$$$function_2___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_r = python_pars[1];
    struct Nuitka_FrameObject *frame_14aad80b738dfb2fbf7ee91d9955493f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_14aad80b738dfb2fbf7ee91d9955493f = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_14aad80b738dfb2fbf7ee91d9955493f, codeobj_14aad80b738dfb2fbf7ee91d9955493f, module_requests$auth, sizeof(void *)+sizeof(void *));
    frame_14aad80b738dfb2fbf7ee91d9955493f = cache_frame_14aad80b738dfb2fbf7ee91d9955493f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_14aad80b738dfb2fbf7ee91d9955493f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_14aad80b738dfb2fbf7ee91d9955493f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_str_digest_507ca0310b2f37ea4b2584d4cca02846;
        frame_14aad80b738dfb2fbf7ee91d9955493f->m_frame.f_lineno = 76;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 76;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_14aad80b738dfb2fbf7ee91d9955493f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_14aad80b738dfb2fbf7ee91d9955493f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_14aad80b738dfb2fbf7ee91d9955493f, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_14aad80b738dfb2fbf7ee91d9955493f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_14aad80b738dfb2fbf7ee91d9955493f, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_14aad80b738dfb2fbf7ee91d9955493f,
        type_description_1,
        par_self,
        par_r
    );


    // Release cached frame.
    if (frame_14aad80b738dfb2fbf7ee91d9955493f == cache_frame_14aad80b738dfb2fbf7ee91d9955493f) {
        Py_DECREF(frame_14aad80b738dfb2fbf7ee91d9955493f);
    }
    cache_frame_14aad80b738dfb2fbf7ee91d9955493f = NULL;

    assertFrameObject(frame_14aad80b738dfb2fbf7ee91d9955493f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_2___call__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_requests$auth$$$function_3___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_username = python_pars[1];
    PyObject *par_password = python_pars[2];
    struct Nuitka_FrameObject *frame_ce20f5ff8dcca1226032ca6ff74fc15e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ce20f5ff8dcca1226032ca6ff74fc15e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_ce20f5ff8dcca1226032ca6ff74fc15e, codeobj_ce20f5ff8dcca1226032ca6ff74fc15e, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_ce20f5ff8dcca1226032ca6ff74fc15e = cache_frame_ce20f5ff8dcca1226032ca6ff74fc15e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ce20f5ff8dcca1226032ca6ff74fc15e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ce20f5ff8dcca1226032ca6ff74fc15e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_username);
        tmp_assattr_name_1 = par_username;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_username, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_password);
        tmp_assattr_name_2 = par_password;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_password, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ce20f5ff8dcca1226032ca6ff74fc15e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ce20f5ff8dcca1226032ca6ff74fc15e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ce20f5ff8dcca1226032ca6ff74fc15e, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_ce20f5ff8dcca1226032ca6ff74fc15e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ce20f5ff8dcca1226032ca6ff74fc15e, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ce20f5ff8dcca1226032ca6ff74fc15e,
        type_description_1,
        par_self,
        par_username,
        par_password
    );


    // Release cached frame.
    if (frame_ce20f5ff8dcca1226032ca6ff74fc15e == cache_frame_ce20f5ff8dcca1226032ca6ff74fc15e) {
        Py_DECREF(frame_ce20f5ff8dcca1226032ca6ff74fc15e);
    }
    cache_frame_ce20f5ff8dcca1226032ca6ff74fc15e = NULL;

    assertFrameObject(frame_ce20f5ff8dcca1226032ca6ff74fc15e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_3___init__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_username);
    Py_DECREF(par_username);
    CHECK_OBJECT(par_password);
    Py_DECREF(par_password);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_username);
    Py_DECREF(par_username);
    CHECK_OBJECT(par_password);
    Py_DECREF(par_password);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function_4___eq__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_8fa257e4c0594b5e9e75062882f43f1e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8fa257e4c0594b5e9e75062882f43f1e = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_8fa257e4c0594b5e9e75062882f43f1e, codeobj_8fa257e4c0594b5e9e75062882f43f1e, module_requests$auth, sizeof(void *)+sizeof(void *));
    frame_8fa257e4c0594b5e9e75062882f43f1e = cache_frame_8fa257e4c0594b5e9e75062882f43f1e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8fa257e4c0594b5e9e75062882f43f1e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8fa257e4c0594b5e9e75062882f43f1e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_all_arg_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_username);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_getattr_target_1 = par_other;
        tmp_getattr_attr_1 = const_str_plain_username;
        tmp_getattr_default_1 = Py_None;
        tmp_compexpr_right_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = RICH_COMPARE_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_all_arg_1 = PyList_New(2);
        PyList_SET_ITEM(tmp_all_arg_1, 0, tmp_list_element_1);
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_password);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_all_arg_1);

            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_getattr_target_2 = par_other;
        tmp_getattr_attr_2 = const_str_plain_password;
        tmp_getattr_default_2 = Py_None;
        tmp_compexpr_right_2 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_all_arg_1);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = RICH_COMPARE_EQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_all_arg_1);

            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_all_arg_1, 1, tmp_list_element_1);
        tmp_return_value = BUILTIN_ALL(tmp_all_arg_1);
        Py_DECREF(tmp_all_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8fa257e4c0594b5e9e75062882f43f1e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8fa257e4c0594b5e9e75062882f43f1e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8fa257e4c0594b5e9e75062882f43f1e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8fa257e4c0594b5e9e75062882f43f1e, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_8fa257e4c0594b5e9e75062882f43f1e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8fa257e4c0594b5e9e75062882f43f1e, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8fa257e4c0594b5e9e75062882f43f1e,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if (frame_8fa257e4c0594b5e9e75062882f43f1e == cache_frame_8fa257e4c0594b5e9e75062882f43f1e) {
        Py_DECREF(frame_8fa257e4c0594b5e9e75062882f43f1e);
    }
    cache_frame_8fa257e4c0594b5e9e75062882f43f1e = NULL;

    assertFrameObject(frame_8fa257e4c0594b5e9e75062882f43f1e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_4___eq__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function_5___ne__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_74e2d71630ae6decab0ccdedd1b22381;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_74e2d71630ae6decab0ccdedd1b22381 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_74e2d71630ae6decab0ccdedd1b22381, codeobj_74e2d71630ae6decab0ccdedd1b22381, module_requests$auth, sizeof(void *)+sizeof(void *));
    frame_74e2d71630ae6decab0ccdedd1b22381 = cache_frame_74e2d71630ae6decab0ccdedd1b22381;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_74e2d71630ae6decab0ccdedd1b22381);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_74e2d71630ae6decab0ccdedd1b22381) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_self);
        tmp_compexpr_left_1 = par_self;
        CHECK_OBJECT(par_other);
        tmp_compexpr_right_1 = par_other;
        tmp_operand_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_74e2d71630ae6decab0ccdedd1b22381);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_74e2d71630ae6decab0ccdedd1b22381);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_74e2d71630ae6decab0ccdedd1b22381);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_74e2d71630ae6decab0ccdedd1b22381, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_74e2d71630ae6decab0ccdedd1b22381->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_74e2d71630ae6decab0ccdedd1b22381, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_74e2d71630ae6decab0ccdedd1b22381,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if (frame_74e2d71630ae6decab0ccdedd1b22381 == cache_frame_74e2d71630ae6decab0ccdedd1b22381) {
        Py_DECREF(frame_74e2d71630ae6decab0ccdedd1b22381);
    }
    cache_frame_74e2d71630ae6decab0ccdedd1b22381 = NULL;

    assertFrameObject(frame_74e2d71630ae6decab0ccdedd1b22381);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_5___ne__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function_6___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_r = python_pars[1];
    struct Nuitka_FrameObject *frame_95dd8073b8ccf7b2583d4a50a7ce93ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_95dd8073b8ccf7b2583d4a50a7ce93ea = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_95dd8073b8ccf7b2583d4a50a7ce93ea, codeobj_95dd8073b8ccf7b2583d4a50a7ce93ea, module_requests$auth, sizeof(void *)+sizeof(void *));
    frame_95dd8073b8ccf7b2583d4a50a7ce93ea = cache_frame_95dd8073b8ccf7b2583d4a50a7ce93ea;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_95dd8073b8ccf7b2583d4a50a7ce93ea);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_95dd8073b8ccf7b2583d4a50a7ce93ea) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_ass_subscript_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain__basic_auth_str);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__basic_auth_str);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20288 ], 37, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_username);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_password);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_95dd8073b8ccf7b2583d4a50a7ce93ea->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_r);
        tmp_source_name_3 = par_r;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_headers);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = const_str_plain_Authorization;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_95dd8073b8ccf7b2583d4a50a7ce93ea);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_95dd8073b8ccf7b2583d4a50a7ce93ea);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_95dd8073b8ccf7b2583d4a50a7ce93ea, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_95dd8073b8ccf7b2583d4a50a7ce93ea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_95dd8073b8ccf7b2583d4a50a7ce93ea, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_95dd8073b8ccf7b2583d4a50a7ce93ea,
        type_description_1,
        par_self,
        par_r
    );


    // Release cached frame.
    if (frame_95dd8073b8ccf7b2583d4a50a7ce93ea == cache_frame_95dd8073b8ccf7b2583d4a50a7ce93ea) {
        Py_DECREF(frame_95dd8073b8ccf7b2583d4a50a7ce93ea);
    }
    cache_frame_95dd8073b8ccf7b2583d4a50a7ce93ea = NULL;

    assertFrameObject(frame_95dd8073b8ccf7b2583d4a50a7ce93ea);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT(par_r);
    tmp_return_value = par_r;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_6___call__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function_7___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_r = python_pars[1];
    struct Nuitka_FrameObject *frame_c97737131748de6d30b174103fc0f66a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c97737131748de6d30b174103fc0f66a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_c97737131748de6d30b174103fc0f66a, codeobj_c97737131748de6d30b174103fc0f66a, module_requests$auth, sizeof(void *)+sizeof(void *));
    frame_c97737131748de6d30b174103fc0f66a = cache_frame_c97737131748de6d30b174103fc0f66a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c97737131748de6d30b174103fc0f66a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c97737131748de6d30b174103fc0f66a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_ass_subscript_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain__basic_auth_str);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__basic_auth_str);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20288 ], 37, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_username);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_password);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c97737131748de6d30b174103fc0f66a->m_frame.f_lineno = 104;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_r);
        tmp_source_name_3 = par_r;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_headers);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c97737131748de6d30b174103fc0f66a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c97737131748de6d30b174103fc0f66a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c97737131748de6d30b174103fc0f66a, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_c97737131748de6d30b174103fc0f66a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c97737131748de6d30b174103fc0f66a, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c97737131748de6d30b174103fc0f66a,
        type_description_1,
        par_self,
        par_r
    );


    // Release cached frame.
    if (frame_c97737131748de6d30b174103fc0f66a == cache_frame_c97737131748de6d30b174103fc0f66a) {
        Py_DECREF(frame_c97737131748de6d30b174103fc0f66a);
    }
    cache_frame_c97737131748de6d30b174103fc0f66a = NULL;

    assertFrameObject(frame_c97737131748de6d30b174103fc0f66a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT(par_r);
    tmp_return_value = par_r;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_7___call__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function_8___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_username = python_pars[1];
    PyObject *par_password = python_pars[2];
    struct Nuitka_FrameObject *frame_1415eb5f775e82b1d716c088c348e8f4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1415eb5f775e82b1d716c088c348e8f4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_1415eb5f775e82b1d716c088c348e8f4, codeobj_1415eb5f775e82b1d716c088c348e8f4, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_1415eb5f775e82b1d716c088c348e8f4 = cache_frame_1415eb5f775e82b1d716c088c348e8f4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1415eb5f775e82b1d716c088c348e8f4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1415eb5f775e82b1d716c088c348e8f4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_username);
        tmp_assattr_name_1 = par_username;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_username, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_password);
        tmp_assattr_name_2 = par_password;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_password, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_assattr_target_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_threading);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_threading);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21337 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 115;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_1415eb5f775e82b1d716c088c348e8f4->m_frame.f_lineno = 115;
        tmp_assattr_name_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_local);
        if (tmp_assattr_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain__thread_local, tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1415eb5f775e82b1d716c088c348e8f4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1415eb5f775e82b1d716c088c348e8f4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1415eb5f775e82b1d716c088c348e8f4, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_1415eb5f775e82b1d716c088c348e8f4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1415eb5f775e82b1d716c088c348e8f4, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1415eb5f775e82b1d716c088c348e8f4,
        type_description_1,
        par_self,
        par_username,
        par_password
    );


    // Release cached frame.
    if (frame_1415eb5f775e82b1d716c088c348e8f4 == cache_frame_1415eb5f775e82b1d716c088c348e8f4) {
        Py_DECREF(frame_1415eb5f775e82b1d716c088c348e8f4);
    }
    cache_frame_1415eb5f775e82b1d716c088c348e8f4 = NULL;

    assertFrameObject(frame_1415eb5f775e82b1d716c088c348e8f4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_8___init__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_username);
    Py_DECREF(par_username);
    CHECK_OBJECT(par_password);
    Py_DECREF(par_password);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_username);
    Py_DECREF(par_username);
    CHECK_OBJECT(par_password);
    Py_DECREF(par_password);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function_9_init_per_thread_state(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_832a24c057df6f683199bae35426fc0c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_832a24c057df6f683199bae35426fc0c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_832a24c057df6f683199bae35426fc0c, codeobj_832a24c057df6f683199bae35426fc0c, module_requests$auth, sizeof(void *));
    frame_832a24c057df6f683199bae35426fc0c = cache_frame_832a24c057df6f683199bae35426fc0c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_832a24c057df6f683199bae35426fc0c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_832a24c057df6f683199bae35426fc0c) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__thread_local);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_attribute_name_1 = const_str_plain_init;
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_source_name_1, tmp_attribute_name_1);
        Py_DECREF(tmp_source_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "o";
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            PyObject *tmp_source_name_3;
            tmp_assattr_name_1 = Py_True;
            CHECK_OBJECT(par_self);
            tmp_source_name_3 = par_self;
            tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__thread_local);
            if (tmp_assattr_target_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_init, tmp_assattr_name_1);
            Py_DECREF(tmp_assattr_target_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            PyObject *tmp_source_name_4;
            tmp_assattr_name_2 = const_str_empty;
            CHECK_OBJECT(par_self);
            tmp_source_name_4 = par_self;
            tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__thread_local);
            if (tmp_assattr_target_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_last_nonce, tmp_assattr_name_2);
            Py_DECREF(tmp_assattr_target_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_assattr_target_3;
            PyObject *tmp_source_name_5;
            tmp_assattr_name_3 = const_int_0;
            CHECK_OBJECT(par_self);
            tmp_source_name_5 = par_self;
            tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain__thread_local);
            if (tmp_assattr_target_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_nonce_count, tmp_assattr_name_3);
            Py_DECREF(tmp_assattr_target_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_assattr_target_4;
            PyObject *tmp_source_name_6;
            tmp_assattr_name_4 = PyDict_New();
            CHECK_OBJECT(par_self);
            tmp_source_name_6 = par_self;
            tmp_assattr_target_4 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain__thread_local);
            if (tmp_assattr_target_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_assattr_name_4);

                exception_lineno = 123;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain_chal, tmp_assattr_name_4);
            Py_DECREF(tmp_assattr_name_4);
            Py_DECREF(tmp_assattr_target_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_5;
            PyObject *tmp_assattr_target_5;
            PyObject *tmp_source_name_7;
            tmp_assattr_name_5 = Py_None;
            CHECK_OBJECT(par_self);
            tmp_source_name_7 = par_self;
            tmp_assattr_target_5 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain__thread_local);
            if (tmp_assattr_target_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain_pos, tmp_assattr_name_5);
            Py_DECREF(tmp_assattr_target_5);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_6;
            PyObject *tmp_assattr_target_6;
            PyObject *tmp_source_name_8;
            tmp_assattr_name_6 = Py_None;
            CHECK_OBJECT(par_self);
            tmp_source_name_8 = par_self;
            tmp_assattr_target_6 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain__thread_local);
            if (tmp_assattr_target_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain_num_401_calls, tmp_assattr_name_6);
            Py_DECREF(tmp_assattr_target_6);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_832a24c057df6f683199bae35426fc0c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_832a24c057df6f683199bae35426fc0c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_832a24c057df6f683199bae35426fc0c, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_832a24c057df6f683199bae35426fc0c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_832a24c057df6f683199bae35426fc0c, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_832a24c057df6f683199bae35426fc0c,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_832a24c057df6f683199bae35426fc0c == cache_frame_832a24c057df6f683199bae35426fc0c) {
        Py_DECREF(frame_832a24c057df6f683199bae35426fc0c);
    }
    cache_frame_832a24c057df6f683199bae35426fc0c = NULL;

    assertFrameObject(frame_832a24c057df6f683199bae35426fc0c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_9_init_per_thread_state);
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


static PyObject *impl_requests$auth$$$function_10_build_digest_header(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_method = python_pars[1];
    PyObject *par_url = python_pars[2];
    PyObject *var_realm = NULL;
    PyObject *var_nonce = NULL;
    PyObject *var_qop = NULL;
    PyObject *var_algorithm = NULL;
    PyObject *var_opaque = NULL;
    struct Nuitka_CellObject *var_hash_utf8 = PyCell_EMPTY();
    PyObject *var__algorithm = NULL;
    PyObject *var_md5_utf8 = NULL;
    PyObject *var_sha_utf8 = NULL;
    PyObject *var_sha256_utf8 = NULL;
    PyObject *var_sha512_utf8 = NULL;
    PyObject *var_KD = NULL;
    PyObject *var_p_parsed = NULL;
    PyObject *var_path = NULL;
    PyObject *var_A1 = NULL;
    PyObject *var_A2 = NULL;
    PyObject *var_HA1 = NULL;
    PyObject *var_HA2 = NULL;
    PyObject *var_ncvalue = NULL;
    PyObject *var_s = NULL;
    PyObject *var_cnonce = NULL;
    PyObject *var_respdig = NULL;
    PyObject *var_noncebit = NULL;
    PyObject *var_base = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_acf6237378e09ec927e19c2054595557;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_acf6237378e09ec927e19c2054595557 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_acf6237378e09ec927e19c2054595557, codeobj_acf6237378e09ec927e19c2054595557, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_acf6237378e09ec927e19c2054595557 = cache_frame_acf6237378e09ec927e19c2054595557;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_acf6237378e09ec927e19c2054595557);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_acf6237378e09ec927e19c2054595557) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__thread_local);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_chal);
        Py_DECREF(tmp_source_name_1);
        if (tmp_subscribed_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_str_plain_realm;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_subscribed_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_realm == NULL);
        var_realm = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__thread_local);
        if (tmp_source_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_chal);
        Py_DECREF(tmp_source_name_3);
        if (tmp_subscribed_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_str_plain_nonce;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_2, tmp_subscript_name_2);
        Py_DECREF(tmp_subscribed_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nonce == NULL);
        var_nonce = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT(par_self);
        tmp_source_name_6 = par_self;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain__thread_local);
        if (tmp_source_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_chal);
        Py_DECREF(tmp_source_name_5);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_acf6237378e09ec927e19c2054595557->m_frame.f_lineno = 134;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_qop_tuple, 0));

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_qop == NULL);
        var_qop = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT(par_self);
        tmp_source_name_8 = par_self;
        tmp_source_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain__thread_local);
        if (tmp_source_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_chal);
        Py_DECREF(tmp_source_name_7);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_acf6237378e09ec927e19c2054595557->m_frame.f_lineno = 135;
        tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_algorithm_tuple, 0));

        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_algorithm == NULL);
        var_algorithm = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        CHECK_OBJECT(par_self);
        tmp_source_name_10 = par_self;
        tmp_source_name_9 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain__thread_local);
        if (tmp_source_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_chal);
        Py_DECREF(tmp_source_name_9);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_acf6237378e09ec927e19c2054595557->m_frame.f_lineno = 136;
        tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_opaque_tuple, 0));

        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_opaque == NULL);
        var_opaque = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_None;
        assert(PyCell_GET(var_hash_utf8) == NULL);
        Py_INCREF(tmp_assign_source_6);
        PyCell_SET(var_hash_utf8, tmp_assign_source_6);

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_algorithm);
        tmp_compexpr_left_1 = var_algorithm;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = const_str_plain_MD5;
            assert(var__algorithm == NULL);
            Py_INCREF(tmp_assign_source_7);
            var__algorithm = tmp_assign_source_7;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_instance_4;
            CHECK_OBJECT(var_algorithm);
            tmp_called_instance_4 = var_algorithm;
            frame_acf6237378e09ec927e19c2054595557->m_frame.f_lineno = 142;
            tmp_assign_source_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, const_str_plain_upper);
            if (tmp_assign_source_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(var__algorithm == NULL);
            var__algorithm = tmp_assign_source_8;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(var__algorithm);
        tmp_compexpr_left_2 = var__algorithm;
        tmp_compexpr_right_2 = const_str_plain_MD5;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var__algorithm);
        tmp_compexpr_left_3 = var__algorithm;
        tmp_compexpr_right_3 = const_str_digest_a49a175904e70dd9f5dc0f52dbebbfdb;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_1_md5_utf8();



            assert(var_md5_utf8 == NULL);
            var_md5_utf8 = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(var_md5_utf8);
            tmp_assign_source_10 = var_md5_utf8;
            {
                PyObject *old = PyCell_GET(var_hash_utf8);
                PyCell_SET(var_hash_utf8, tmp_assign_source_10);
                Py_INCREF(tmp_assign_source_10);
                Py_XDECREF(old);
            }

        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT(var__algorithm);
            tmp_compexpr_left_4 = var__algorithm;
            tmp_compexpr_right_4 = const_str_plain_SHA;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_1 = "oooooooocooooooNoooooooooooo";
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
                PyObject *tmp_assign_source_11;
                tmp_assign_source_11 = MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_2_sha_utf8();



                assert(var_sha_utf8 == NULL);
                var_sha_utf8 = tmp_assign_source_11;
            }
            {
                PyObject *tmp_assign_source_12;
                CHECK_OBJECT(var_sha_utf8);
                tmp_assign_source_12 = var_sha_utf8;
                {
                    PyObject *old = PyCell_GET(var_hash_utf8);
                    PyCell_SET(var_hash_utf8, tmp_assign_source_12);
                    Py_INCREF(tmp_assign_source_12);
                    Py_XDECREF(old);
                }

            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                CHECK_OBJECT(var__algorithm);
                tmp_compexpr_left_5 = var__algorithm;
                tmp_compexpr_right_5 = const_str_digest_1e080f858ef601c43605cc71a556333d;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 156;
                    type_description_1 = "oooooooocooooooNoooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_4;
                } else {
                    goto branch_no_4;
                }
                branch_yes_4:;
                {
                    PyObject *tmp_assign_source_13;
                    tmp_assign_source_13 = MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_3_sha256_utf8();



                    assert(var_sha256_utf8 == NULL);
                    var_sha256_utf8 = tmp_assign_source_13;
                }
                {
                    PyObject *tmp_assign_source_14;
                    CHECK_OBJECT(var_sha256_utf8);
                    tmp_assign_source_14 = var_sha256_utf8;
                    {
                        PyObject *old = PyCell_GET(var_hash_utf8);
                        PyCell_SET(var_hash_utf8, tmp_assign_source_14);
                        Py_INCREF(tmp_assign_source_14);
                        Py_XDECREF(old);
                    }

                }
                goto branch_end_4;
                branch_no_4:;
                {
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_compexpr_left_6;
                    PyObject *tmp_compexpr_right_6;
                    CHECK_OBJECT(var__algorithm);
                    tmp_compexpr_left_6 = var__algorithm;
                    tmp_compexpr_right_6 = const_str_digest_91012c747d1826684889b0187ce7d184;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
                    if (tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 162;
                        type_description_1 = "oooooooocooooooNoooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_5;
                    } else {
                        goto branch_no_5;
                    }
                    branch_yes_5:;
                    {
                        PyObject *tmp_assign_source_15;
                        tmp_assign_source_15 = MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_4_sha512_utf8();



                        assert(var_sha512_utf8 == NULL);
                        var_sha512_utf8 = tmp_assign_source_15;
                    }
                    {
                        PyObject *tmp_assign_source_16;
                        CHECK_OBJECT(var_sha512_utf8);
                        tmp_assign_source_16 = var_sha512_utf8;
                        {
                            PyObject *old = PyCell_GET(var_hash_utf8);
                            PyCell_SET(var_hash_utf8, tmp_assign_source_16);
                            Py_INCREF(tmp_assign_source_16);
                            Py_XDECREF(old);
                        }

                    }
                    branch_no_5:;
                }
                branch_end_4:;
            }
            branch_end_3:;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_5_lambda();

        ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[0] = var_hash_utf8;
        Py_INCREF(((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[0]);


        assert(var_KD == NULL);
        var_KD = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        if (PyCell_GET(var_hash_utf8) == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "hash_utf8");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_7 = PyCell_GET(var_hash_utf8);
        tmp_compexpr_right_7 = Py_None;
        tmp_condition_result_6 = (tmp_compexpr_left_7 == tmp_compexpr_right_7) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        branch_yes_6:;
        tmp_return_value = Py_None;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_6:;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_urlparse);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 20223 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 176;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_url);
        tmp_args_element_name_1 = par_url;
        frame_acf6237378e09ec927e19c2054595557->m_frame.f_lineno = 176;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_p_parsed == NULL);
        var_p_parsed = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_source_name_11;
        CHECK_OBJECT(var_p_parsed);
        tmp_source_name_11 = var_p_parsed;
        tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_path);
        if (tmp_or_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 178;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        tmp_or_right_value_2 = const_str_chr_47;
        Py_INCREF(tmp_or_right_value_2);
        tmp_assign_source_19 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_assign_source_19 = tmp_or_left_value_2;
        or_end_2:;
        assert(var_path == NULL);
        var_path = tmp_assign_source_19;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_source_name_12;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_p_parsed);
        tmp_source_name_12 = var_p_parsed;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_query);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 179;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_source_name_13;
            CHECK_OBJECT(var_path);
            tmp_left_name_1 = var_path;
            tmp_left_name_2 = const_str_chr_63;
            CHECK_OBJECT(var_p_parsed);
            tmp_source_name_13 = var_p_parsed;
            tmp_right_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_query);
            if (tmp_right_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = BINARY_OPERATION_ADD_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
            Py_DECREF(tmp_right_name_2);
            if (tmp_right_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_1, tmp_right_name_1);
            Py_DECREF(tmp_right_name_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_20 = tmp_left_name_1;
            var_path = tmp_assign_source_20;

        }
        branch_no_7:;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_14;
        PyObject *tmp_source_name_15;
        tmp_left_name_3 = const_str_digest_7b8850a6b4d3502f6f32cd3625c4afca;
        CHECK_OBJECT(par_self);
        tmp_source_name_14 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain_username);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = PyTuple_New(3);
        PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_realm);
        tmp_tuple_element_1 = var_realm;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_right_name_3, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_source_name_15 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_password);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_right_name_3);

            exception_lineno = 182;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM(tmp_right_name_3, 2, tmp_tuple_element_1);
        tmp_assign_source_21 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_A1 == NULL);
        var_A1 = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_tuple_element_2;
        tmp_left_name_4 = const_str_digest_f2d2f5f01d8d9360355c50eb1d09d771;
        CHECK_OBJECT(par_method);
        tmp_tuple_element_2 = par_method;
        tmp_right_name_4 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_right_name_4, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_path);
        tmp_tuple_element_2 = var_path;
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_right_name_4, 1, tmp_tuple_element_2);
        tmp_assign_source_22 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_A2 == NULL);
        var_A2 = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        if (PyCell_GET(var_hash_utf8) == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "hash_utf8");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 185;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = PyCell_GET(var_hash_utf8);
        CHECK_OBJECT(var_A1);
        tmp_args_element_name_2 = var_A1;
        frame_acf6237378e09ec927e19c2054595557->m_frame.f_lineno = 185;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_HA1 == NULL);
        var_HA1 = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        if (PyCell_GET(var_hash_utf8) == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "hash_utf8");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = PyCell_GET(var_hash_utf8);
        CHECK_OBJECT(var_A2);
        tmp_args_element_name_3 = var_A2;
        frame_acf6237378e09ec927e19c2054595557->m_frame.f_lineno = 186;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_HA2 == NULL);
        var_HA2 = tmp_assign_source_24;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_source_name_16;
        PyObject *tmp_source_name_17;
        CHECK_OBJECT(var_nonce);
        tmp_compexpr_left_8 = var_nonce;
        CHECK_OBJECT(par_self);
        tmp_source_name_17 = par_self;
        tmp_source_name_16 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain__thread_local);
        if (tmp_source_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_8 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain_last_nonce);
        Py_DECREF(tmp_source_name_16);
        if (tmp_compexpr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_8, tmp_compexpr_right_8);
        Py_DECREF(tmp_compexpr_right_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
        branch_yes_8:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_source_name_18;
            PyObject *tmp_source_name_19;
            CHECK_OBJECT(par_self);
            tmp_source_name_19 = par_self;
            tmp_source_name_18 = LOOKUP_ATTRIBUTE(tmp_source_name_19, const_str_plain__thread_local);
            if (tmp_source_name_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_25 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain_nonce_count);
            Py_DECREF(tmp_source_name_18);
            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_inplace_assign_attr_1__start == NULL);
            tmp_inplace_assign_attr_1__start = tmp_assign_source_25;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            CHECK_OBJECT(tmp_inplace_assign_attr_1__start);
            tmp_left_name_5 = tmp_inplace_assign_attr_1__start;
            tmp_right_name_5 = const_int_pos_1;
            tmp_assign_source_26 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_5, tmp_right_name_5);
            if (tmp_assign_source_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_inplace_assign_attr_1__end == NULL);
            tmp_inplace_assign_attr_1__end = tmp_assign_source_26;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            PyObject *tmp_source_name_20;
            CHECK_OBJECT(tmp_inplace_assign_attr_1__end);
            tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT(par_self);
            tmp_source_name_20 = par_self;
            tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_source_name_20, const_str_plain__thread_local);
            if (tmp_assattr_target_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto try_except_handler_3;
            }
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_nonce_count, tmp_assattr_name_1);
            Py_DECREF(tmp_assattr_target_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_1 = "oooooooocooooooNoooooooooooo";
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

        goto branch_end_8;
        branch_no_8:;
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            PyObject *tmp_source_name_21;
            tmp_assattr_name_2 = const_int_pos_1;
            CHECK_OBJECT(par_self);
            tmp_source_name_21 = par_self;
            tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tmp_source_name_21, const_str_plain__thread_local);
            if (tmp_assattr_target_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_nonce_count, tmp_assattr_name_2);
            Py_DECREF(tmp_assattr_target_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_8:;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_source_name_22;
        PyObject *tmp_source_name_23;
        tmp_left_name_6 = const_str_digest_01a11c701578b78bc17e57844dca83b0;
        CHECK_OBJECT(par_self);
        tmp_source_name_23 = par_self;
        tmp_source_name_22 = LOOKUP_ATTRIBUTE(tmp_source_name_23, const_str_plain__thread_local);
        if (tmp_source_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_22, const_str_plain_nonce_count);
        Py_DECREF(tmp_source_name_22);
        if (tmp_right_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_6, tmp_right_name_6);
        Py_DECREF(tmp_right_name_6);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ncvalue == NULL);
        var_ncvalue = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_24;
        PyObject *tmp_source_name_25;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_str);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15520 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 193;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_25 = par_self;
        tmp_source_name_24 = LOOKUP_ATTRIBUTE(tmp_source_name_25, const_str_plain__thread_local);
        if (tmp_source_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_24, const_str_plain_nonce_count);
        Py_DECREF(tmp_source_name_24);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_acf6237378e09ec927e19c2054595557->m_frame.f_lineno = 193;
        tmp_called_instance_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_acf6237378e09ec927e19c2054595557->m_frame.f_lineno = 193;
        tmp_assign_source_28 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_encode, &PyTuple_GET_ITEM(const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0));

        Py_DECREF(tmp_called_instance_5);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_s == NULL);
        var_s = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(var_s);
        tmp_left_name_7 = var_s;
        CHECK_OBJECT(var_nonce);
        tmp_called_instance_6 = var_nonce;
        frame_acf6237378e09ec927e19c2054595557->m_frame.f_lineno = 194;
        tmp_right_name_7 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, const_str_plain_encode, &PyTuple_GET_ITEM(const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0));

        if (tmp_right_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_7, tmp_right_name_7);
        Py_DECREF(tmp_right_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_29 = tmp_left_name_7;
        var_s = tmp_assign_source_29;

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT(var_s);
        tmp_left_name_8 = var_s;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_time);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_time);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 7581 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 195;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_8 = tmp_mvar_value_3;
        frame_acf6237378e09ec927e19c2054595557->m_frame.f_lineno = 195;
        tmp_called_instance_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, const_str_plain_ctime);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_acf6237378e09ec927e19c2054595557->m_frame.f_lineno = 195;
        tmp_right_name_8 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, const_str_plain_encode, &PyTuple_GET_ITEM(const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0));

        Py_DECREF(tmp_called_instance_7);
        if (tmp_right_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_8, tmp_right_name_8);
        Py_DECREF(tmp_right_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_30 = tmp_left_name_8;
        var_s = tmp_assign_source_30;

    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_mvar_value_4;
        CHECK_OBJECT(var_s);
        tmp_left_name_9 = var_s;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_os);

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

            exception_lineno = 196;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_9 = tmp_mvar_value_4;
        frame_acf6237378e09ec927e19c2054595557->m_frame.f_lineno = 196;
        tmp_right_name_9 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_9, const_str_plain_urandom, &PyTuple_GET_ITEM(const_tuple_int_pos_8_tuple, 0));

        if (tmp_right_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_9, tmp_right_name_9);
        Py_DECREF(tmp_right_name_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_31 = tmp_left_name_9;
        var_s = tmp_assign_source_31;

    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_subscript_name_3;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_hashlib);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21368 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 198;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_11 = tmp_mvar_value_5;
        CHECK_OBJECT(var_s);
        tmp_args_element_name_5 = var_s;
        frame_acf6237378e09ec927e19c2054595557->m_frame.f_lineno = 198;
        {
            PyObject *call_args[] = {tmp_args_element_name_5};
            tmp_called_instance_10 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_11, const_str_plain_sha1, call_args);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_acf6237378e09ec927e19c2054595557->m_frame.f_lineno = 198;
        tmp_subscribed_name_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, const_str_plain_hexdigest);
        Py_DECREF(tmp_called_instance_10);
        if (tmp_subscribed_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = const_slice_none_int_pos_16_none;
        tmp_assign_source_32 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_3, tmp_subscript_name_3);
        Py_DECREF(tmp_subscribed_name_3);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cnonce == NULL);
        var_cnonce = tmp_assign_source_32;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        CHECK_OBJECT(var__algorithm);
        tmp_compexpr_left_9 = var__algorithm;
        tmp_compexpr_right_9 = const_str_digest_a49a175904e70dd9f5dc0f52dbebbfdb;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_9, tmp_compexpr_right_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
        branch_yes_9:;
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            PyObject *tmp_tuple_element_3;
            if (PyCell_GET(var_hash_utf8) == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "hash_utf8");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 200;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = PyCell_GET(var_hash_utf8);
            tmp_left_name_10 = const_str_digest_7b8850a6b4d3502f6f32cd3625c4afca;
            CHECK_OBJECT(var_HA1);
            tmp_tuple_element_3 = var_HA1;
            tmp_right_name_10 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_right_name_10, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_nonce);
            tmp_tuple_element_3 = var_nonce;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_right_name_10, 1, tmp_tuple_element_3);
            CHECK_OBJECT(var_cnonce);
            tmp_tuple_element_3 = var_cnonce;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_right_name_10, 2, tmp_tuple_element_3);
            tmp_args_element_name_6 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_10, tmp_right_name_10);
            Py_DECREF(tmp_right_name_10);
            if (tmp_args_element_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_acf6237378e09ec927e19c2054595557->m_frame.f_lineno = 200;
            tmp_assign_source_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_6);
            Py_DECREF(tmp_args_element_name_6);
            if (tmp_assign_source_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_HA1;
                assert(old != NULL);
                var_HA1 = tmp_assign_source_33;
                Py_DECREF(old);
            }

        }
        branch_no_9:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(var_qop);
        tmp_operand_name_1 = var_qop;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
        branch_yes_10:;
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_11;
            PyObject *tmp_tuple_element_4;
            CHECK_OBJECT(var_KD);
            tmp_called_name_6 = var_KD;
            CHECK_OBJECT(var_HA1);
            tmp_args_element_name_7 = var_HA1;
            tmp_left_name_11 = const_str_digest_f2d2f5f01d8d9360355c50eb1d09d771;
            CHECK_OBJECT(var_nonce);
            tmp_tuple_element_4 = var_nonce;
            tmp_right_name_11 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_right_name_11, 0, tmp_tuple_element_4);
            CHECK_OBJECT(var_HA2);
            tmp_tuple_element_4 = var_HA2;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_right_name_11, 1, tmp_tuple_element_4);
            tmp_args_element_name_8 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_11, tmp_right_name_11);
            Py_DECREF(tmp_right_name_11);
            if (tmp_args_element_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_acf6237378e09ec927e19c2054595557->m_frame.f_lineno = 203;
            {
                PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8};
                tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_6, call_args);
            }

            Py_DECREF(tmp_args_element_name_8);
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_respdig == NULL);
            var_respdig = tmp_assign_source_34;
        }
        goto branch_end_10;
        branch_no_10:;
        {
            nuitka_bool tmp_condition_result_11;
            int tmp_or_left_truth_3;
            nuitka_bool tmp_or_left_value_3;
            nuitka_bool tmp_or_right_value_3;
            PyObject *tmp_compexpr_left_10;
            PyObject *tmp_compexpr_right_10;
            PyObject *tmp_compexpr_left_11;
            PyObject *tmp_compexpr_right_11;
            PyObject *tmp_called_instance_12;
            CHECK_OBJECT(var_qop);
            tmp_compexpr_left_10 = var_qop;
            tmp_compexpr_right_10 = const_str_plain_auth;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_10, tmp_compexpr_right_10);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_left_value_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
            if (tmp_or_left_truth_3 == 1) {
                goto or_left_3;
            } else {
                goto or_right_3;
            }
            or_right_3:;
            tmp_compexpr_left_11 = const_str_plain_auth;
            CHECK_OBJECT(var_qop);
            tmp_called_instance_12 = var_qop;
            frame_acf6237378e09ec927e19c2054595557->m_frame.f_lineno = 204;
            tmp_compexpr_right_11 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_12, const_str_plain_split, &PyTuple_GET_ITEM(const_tuple_str_chr_44_tuple, 0));

            if (tmp_compexpr_right_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PySequence_Contains(tmp_compexpr_right_11, tmp_compexpr_left_11);
            Py_DECREF(tmp_compexpr_right_11);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_3 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_11 = tmp_or_right_value_3;
            goto or_end_3;
            or_left_3:;
            tmp_condition_result_11 = tmp_or_left_value_3;
            or_end_3:;
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto branch_yes_11;
            } else {
                goto branch_no_11;
            }
            branch_yes_11:;
            {
                PyObject *tmp_assign_source_35;
                PyObject *tmp_left_name_12;
                PyObject *tmp_right_name_12;
                PyObject *tmp_tuple_element_5;
                tmp_left_name_12 = const_str_digest_b0f8a4a055f15da2a394551a1933d695;
                CHECK_OBJECT(var_nonce);
                tmp_tuple_element_5 = var_nonce;
                tmp_right_name_12 = PyTuple_New(5);
                Py_INCREF(tmp_tuple_element_5);
                PyTuple_SET_ITEM(tmp_right_name_12, 0, tmp_tuple_element_5);
                CHECK_OBJECT(var_ncvalue);
                tmp_tuple_element_5 = var_ncvalue;
                Py_INCREF(tmp_tuple_element_5);
                PyTuple_SET_ITEM(tmp_right_name_12, 1, tmp_tuple_element_5);
                CHECK_OBJECT(var_cnonce);
                tmp_tuple_element_5 = var_cnonce;
                Py_INCREF(tmp_tuple_element_5);
                PyTuple_SET_ITEM(tmp_right_name_12, 2, tmp_tuple_element_5);
                tmp_tuple_element_5 = const_str_plain_auth;
                Py_INCREF(tmp_tuple_element_5);
                PyTuple_SET_ITEM(tmp_right_name_12, 3, tmp_tuple_element_5);
                CHECK_OBJECT(var_HA2);
                tmp_tuple_element_5 = var_HA2;
                Py_INCREF(tmp_tuple_element_5);
                PyTuple_SET_ITEM(tmp_right_name_12, 4, tmp_tuple_element_5);
                tmp_assign_source_35 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_12, tmp_right_name_12);
                Py_DECREF(tmp_right_name_12);
                if (tmp_assign_source_35 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 205;
                    type_description_1 = "oooooooocooooooNoooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert(var_noncebit == NULL);
                var_noncebit = tmp_assign_source_35;
            }
            {
                PyObject *tmp_assign_source_36;
                PyObject *tmp_called_name_7;
                PyObject *tmp_args_element_name_9;
                PyObject *tmp_args_element_name_10;
                CHECK_OBJECT(var_KD);
                tmp_called_name_7 = var_KD;
                CHECK_OBJECT(var_HA1);
                tmp_args_element_name_9 = var_HA1;
                CHECK_OBJECT(var_noncebit);
                tmp_args_element_name_10 = var_noncebit;
                frame_acf6237378e09ec927e19c2054595557->m_frame.f_lineno = 208;
                {
                    PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10};
                    tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_7, call_args);
                }

                if (tmp_assign_source_36 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 208;
                    type_description_1 = "oooooooocooooooNoooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert(var_respdig == NULL);
                var_respdig = tmp_assign_source_36;
            }
            goto branch_end_11;
            branch_no_11:;
            tmp_return_value = Py_None;
            Py_INCREF(tmp_return_value);
            goto frame_return_exit_1;
            branch_end_11:;
        }
        branch_end_10:;
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_source_name_26;
        CHECK_OBJECT(var_nonce);
        tmp_assattr_name_3 = var_nonce;
        CHECK_OBJECT(par_self);
        tmp_source_name_26 = par_self;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tmp_source_name_26, const_str_plain__thread_local);
        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_last_nonce, tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_source_name_27;
        tmp_left_name_13 = const_str_digest_fe400b7786b755fe7fa07749cdd2ff1e;
        CHECK_OBJECT(par_self);
        tmp_source_name_27 = par_self;
        tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_source_name_27, const_str_plain_username);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_13 = PyTuple_New(5);
        PyTuple_SET_ITEM(tmp_right_name_13, 0, tmp_tuple_element_6);
        CHECK_OBJECT(var_realm);
        tmp_tuple_element_6 = var_realm;
        Py_INCREF(tmp_tuple_element_6);
        PyTuple_SET_ITEM(tmp_right_name_13, 1, tmp_tuple_element_6);
        CHECK_OBJECT(var_nonce);
        tmp_tuple_element_6 = var_nonce;
        Py_INCREF(tmp_tuple_element_6);
        PyTuple_SET_ITEM(tmp_right_name_13, 2, tmp_tuple_element_6);
        CHECK_OBJECT(var_path);
        tmp_tuple_element_6 = var_path;
        Py_INCREF(tmp_tuple_element_6);
        PyTuple_SET_ITEM(tmp_right_name_13, 3, tmp_tuple_element_6);
        if (var_respdig == NULL) {
            Py_DECREF(tmp_right_name_13);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "respdig");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 217;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_6 = var_respdig;
        Py_INCREF(tmp_tuple_element_6);
        PyTuple_SET_ITEM(tmp_right_name_13, 4, tmp_tuple_element_6);
        tmp_assign_source_37 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_13, tmp_right_name_13);
        Py_DECREF(tmp_right_name_13);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_base == NULL);
        var_base = tmp_assign_source_37;
    }
    {
        nuitka_bool tmp_condition_result_12;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_opaque);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_opaque);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
        branch_yes_12:;
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_left_name_14;
            PyObject *tmp_right_name_14;
            PyObject *tmp_left_name_15;
            PyObject *tmp_right_name_15;
            CHECK_OBJECT(var_base);
            tmp_left_name_14 = var_base;
            tmp_left_name_15 = const_str_digest_7d7309ebed4abfa9aab0d6db44793741;
            CHECK_OBJECT(var_opaque);
            tmp_right_name_15 = var_opaque;
            tmp_right_name_14 = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_15, tmp_right_name_15);
            if (tmp_right_name_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_14, tmp_right_name_14);
            Py_DECREF(tmp_right_name_14);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_38 = tmp_left_name_14;
            var_base = tmp_assign_source_38;

        }
        branch_no_12:;
    }
    {
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_algorithm);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_algorithm);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
        branch_yes_13:;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_left_name_16;
            PyObject *tmp_right_name_16;
            PyObject *tmp_left_name_17;
            PyObject *tmp_right_name_17;
            CHECK_OBJECT(var_base);
            tmp_left_name_16 = var_base;
            tmp_left_name_17 = const_str_digest_d69b853fcab0d61d934c8e6dc6bd2d6a;
            CHECK_OBJECT(var_algorithm);
            tmp_right_name_17 = var_algorithm;
            tmp_right_name_16 = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_17, tmp_right_name_17);
            if (tmp_right_name_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_16, tmp_right_name_16);
            Py_DECREF(tmp_right_name_16);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_39 = tmp_left_name_16;
            var_base = tmp_assign_source_39;

        }
        branch_no_13:;
    }
    {
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_qop);
        tmp_truth_name_4 = CHECK_IF_TRUE(var_qop);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
        branch_yes_14:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_left_name_18;
            PyObject *tmp_right_name_18;
            PyObject *tmp_left_name_19;
            PyObject *tmp_right_name_19;
            PyObject *tmp_tuple_element_7;
            if (var_base == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "base");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 225;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_18 = var_base;
            tmp_left_name_19 = const_str_digest_a82f8015cfcad4d42fa43483823a6f72;
            CHECK_OBJECT(var_ncvalue);
            tmp_tuple_element_7 = var_ncvalue;
            tmp_right_name_19 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_7);
            PyTuple_SET_ITEM(tmp_right_name_19, 0, tmp_tuple_element_7);
            CHECK_OBJECT(var_cnonce);
            tmp_tuple_element_7 = var_cnonce;
            Py_INCREF(tmp_tuple_element_7);
            PyTuple_SET_ITEM(tmp_right_name_19, 1, tmp_tuple_element_7);
            tmp_right_name_18 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_19, tmp_right_name_19);
            Py_DECREF(tmp_right_name_19);
            if (tmp_right_name_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_18, tmp_right_name_18);
            Py_DECREF(tmp_right_name_18);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_1 = "oooooooocooooooNoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_40 = tmp_left_name_18;
            var_base = tmp_assign_source_40;

        }
        branch_no_14:;
    }
    {
        PyObject *tmp_left_name_20;
        PyObject *tmp_right_name_20;
        tmp_left_name_20 = const_str_digest_69c286e01655beff40436b2cda33b552;
        if (var_base == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "base");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 227;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_20 = var_base;
        tmp_return_value = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_20, tmp_right_name_20);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooooooocooooooNoooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_acf6237378e09ec927e19c2054595557);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_acf6237378e09ec927e19c2054595557);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_acf6237378e09ec927e19c2054595557);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_acf6237378e09ec927e19c2054595557, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_acf6237378e09ec927e19c2054595557->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_acf6237378e09ec927e19c2054595557, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_acf6237378e09ec927e19c2054595557,
        type_description_1,
        par_self,
        par_method,
        par_url,
        var_realm,
        var_nonce,
        var_qop,
        var_algorithm,
        var_opaque,
        var_hash_utf8,
        var__algorithm,
        var_md5_utf8,
        var_sha_utf8,
        var_sha256_utf8,
        var_sha512_utf8,
        var_KD,
        NULL,
        var_p_parsed,
        var_path,
        var_A1,
        var_A2,
        var_HA1,
        var_HA2,
        var_ncvalue,
        var_s,
        var_cnonce,
        var_respdig,
        var_noncebit,
        var_base
    );


    // Release cached frame.
    if (frame_acf6237378e09ec927e19c2054595557 == cache_frame_acf6237378e09ec927e19c2054595557) {
        Py_DECREF(frame_acf6237378e09ec927e19c2054595557);
    }
    cache_frame_acf6237378e09ec927e19c2054595557 = NULL;

    assertFrameObject(frame_acf6237378e09ec927e19c2054595557);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_10_build_digest_header);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_realm);
    Py_DECREF(var_realm);
    var_realm = NULL;

    CHECK_OBJECT((PyObject *)var_nonce);
    Py_DECREF(var_nonce);
    var_nonce = NULL;

    CHECK_OBJECT((PyObject *)var_qop);
    Py_DECREF(var_qop);
    var_qop = NULL;

    CHECK_OBJECT((PyObject *)var_algorithm);
    Py_DECREF(var_algorithm);
    var_algorithm = NULL;

    CHECK_OBJECT((PyObject *)var_opaque);
    Py_DECREF(var_opaque);
    var_opaque = NULL;

    CHECK_OBJECT((PyObject *)var_hash_utf8);
    Py_DECREF(var_hash_utf8);
    var_hash_utf8 = NULL;

    CHECK_OBJECT((PyObject *)var__algorithm);
    Py_DECREF(var__algorithm);
    var__algorithm = NULL;

    Py_XDECREF(var_md5_utf8);
    var_md5_utf8 = NULL;

    Py_XDECREF(var_sha_utf8);
    var_sha_utf8 = NULL;

    Py_XDECREF(var_sha256_utf8);
    var_sha256_utf8 = NULL;

    Py_XDECREF(var_sha512_utf8);
    var_sha512_utf8 = NULL;

    CHECK_OBJECT((PyObject *)var_KD);
    Py_DECREF(var_KD);
    var_KD = NULL;

    Py_XDECREF(var_p_parsed);
    var_p_parsed = NULL;

    Py_XDECREF(var_path);
    var_path = NULL;

    Py_XDECREF(var_A1);
    var_A1 = NULL;

    Py_XDECREF(var_A2);
    var_A2 = NULL;

    Py_XDECREF(var_HA1);
    var_HA1 = NULL;

    Py_XDECREF(var_HA2);
    var_HA2 = NULL;

    Py_XDECREF(var_ncvalue);
    var_ncvalue = NULL;

    Py_XDECREF(var_s);
    var_s = NULL;

    Py_XDECREF(var_cnonce);
    var_cnonce = NULL;

    Py_XDECREF(var_respdig);
    var_respdig = NULL;

    Py_XDECREF(var_noncebit);
    var_noncebit = NULL;

    Py_XDECREF(var_base);
    var_base = NULL;

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

    Py_XDECREF(var_realm);
    var_realm = NULL;

    Py_XDECREF(var_nonce);
    var_nonce = NULL;

    Py_XDECREF(var_qop);
    var_qop = NULL;

    Py_XDECREF(var_algorithm);
    var_algorithm = NULL;

    Py_XDECREF(var_opaque);
    var_opaque = NULL;

    CHECK_OBJECT((PyObject *)var_hash_utf8);
    Py_DECREF(var_hash_utf8);
    var_hash_utf8 = NULL;

    Py_XDECREF(var__algorithm);
    var__algorithm = NULL;

    Py_XDECREF(var_md5_utf8);
    var_md5_utf8 = NULL;

    Py_XDECREF(var_sha_utf8);
    var_sha_utf8 = NULL;

    Py_XDECREF(var_sha256_utf8);
    var_sha256_utf8 = NULL;

    Py_XDECREF(var_sha512_utf8);
    var_sha512_utf8 = NULL;

    Py_XDECREF(var_KD);
    var_KD = NULL;

    Py_XDECREF(var_p_parsed);
    var_p_parsed = NULL;

    Py_XDECREF(var_path);
    var_path = NULL;

    Py_XDECREF(var_A1);
    var_A1 = NULL;

    Py_XDECREF(var_A2);
    var_A2 = NULL;

    Py_XDECREF(var_HA1);
    var_HA1 = NULL;

    Py_XDECREF(var_HA2);
    var_HA2 = NULL;

    Py_XDECREF(var_ncvalue);
    var_ncvalue = NULL;

    Py_XDECREF(var_s);
    var_s = NULL;

    Py_XDECREF(var_cnonce);
    var_cnonce = NULL;

    Py_XDECREF(var_respdig);
    var_respdig = NULL;

    Py_XDECREF(var_noncebit);
    var_noncebit = NULL;

    Py_XDECREF(var_base);
    var_base = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_10_build_digest_header);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);    assert(exception_type);
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

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function_10_build_digest_header$$$function_1_md5_utf8(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_0b2886732758ba8d30f8eb7d96304e0b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0b2886732758ba8d30f8eb7d96304e0b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_0b2886732758ba8d30f8eb7d96304e0b, codeobj_0b2886732758ba8d30f8eb7d96304e0b, module_requests$auth, sizeof(void *));
    frame_0b2886732758ba8d30f8eb7d96304e0b = cache_frame_0b2886732758ba8d30f8eb7d96304e0b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0b2886732758ba8d30f8eb7d96304e0b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0b2886732758ba8d30f8eb7d96304e0b) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_x);
        tmp_isinstance_inst_1 = par_x;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_str);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15520 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 146;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "o";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT(par_x);
            tmp_called_instance_1 = par_x;
            frame_0b2886732758ba8d30f8eb7d96304e0b->m_frame.f_lineno = 147;
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM(const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0));

            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_x;
                assert(old != NULL);
                par_x = tmp_assign_source_1;
                Py_DECREF(old);
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_hashlib);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21368 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 148;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_2;
        CHECK_OBJECT(par_x);
        tmp_args_element_name_1 = par_x;
        frame_0b2886732758ba8d30f8eb7d96304e0b->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_called_instance_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_md5, call_args);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_0b2886732758ba8d30f8eb7d96304e0b->m_frame.f_lineno = 148;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_hexdigest);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0b2886732758ba8d30f8eb7d96304e0b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0b2886732758ba8d30f8eb7d96304e0b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0b2886732758ba8d30f8eb7d96304e0b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0b2886732758ba8d30f8eb7d96304e0b, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_0b2886732758ba8d30f8eb7d96304e0b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0b2886732758ba8d30f8eb7d96304e0b, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0b2886732758ba8d30f8eb7d96304e0b,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if (frame_0b2886732758ba8d30f8eb7d96304e0b == cache_frame_0b2886732758ba8d30f8eb7d96304e0b) {
        Py_DECREF(frame_0b2886732758ba8d30f8eb7d96304e0b);
    }
    cache_frame_0b2886732758ba8d30f8eb7d96304e0b = NULL;

    assertFrameObject(frame_0b2886732758ba8d30f8eb7d96304e0b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_10_build_digest_header$$$function_1_md5_utf8);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)par_x);
    Py_DECREF(par_x);
    par_x = NULL;

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

    Py_XDECREF(par_x);
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_10_build_digest_header$$$function_1_md5_utf8);
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


static PyObject *impl_requests$auth$$$function_10_build_digest_header$$$function_2_sha_utf8(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_b300000583233bc0e5740b94813a42b5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b300000583233bc0e5740b94813a42b5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_b300000583233bc0e5740b94813a42b5, codeobj_b300000583233bc0e5740b94813a42b5, module_requests$auth, sizeof(void *));
    frame_b300000583233bc0e5740b94813a42b5 = cache_frame_b300000583233bc0e5740b94813a42b5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b300000583233bc0e5740b94813a42b5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b300000583233bc0e5740b94813a42b5) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_x);
        tmp_isinstance_inst_1 = par_x;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_str);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15520 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 152;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "o";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT(par_x);
            tmp_called_instance_1 = par_x;
            frame_b300000583233bc0e5740b94813a42b5->m_frame.f_lineno = 153;
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM(const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0));

            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_x;
                assert(old != NULL);
                par_x = tmp_assign_source_1;
                Py_DECREF(old);
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_hashlib);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21368 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_2;
        CHECK_OBJECT(par_x);
        tmp_args_element_name_1 = par_x;
        frame_b300000583233bc0e5740b94813a42b5->m_frame.f_lineno = 154;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_called_instance_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_sha1, call_args);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b300000583233bc0e5740b94813a42b5->m_frame.f_lineno = 154;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_hexdigest);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b300000583233bc0e5740b94813a42b5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b300000583233bc0e5740b94813a42b5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b300000583233bc0e5740b94813a42b5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b300000583233bc0e5740b94813a42b5, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_b300000583233bc0e5740b94813a42b5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b300000583233bc0e5740b94813a42b5, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b300000583233bc0e5740b94813a42b5,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if (frame_b300000583233bc0e5740b94813a42b5 == cache_frame_b300000583233bc0e5740b94813a42b5) {
        Py_DECREF(frame_b300000583233bc0e5740b94813a42b5);
    }
    cache_frame_b300000583233bc0e5740b94813a42b5 = NULL;

    assertFrameObject(frame_b300000583233bc0e5740b94813a42b5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_10_build_digest_header$$$function_2_sha_utf8);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)par_x);
    Py_DECREF(par_x);
    par_x = NULL;

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

    Py_XDECREF(par_x);
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_10_build_digest_header$$$function_2_sha_utf8);
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


static PyObject *impl_requests$auth$$$function_10_build_digest_header$$$function_3_sha256_utf8(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_f5bf62abff2343d9a54cbf956f9c76bc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f5bf62abff2343d9a54cbf956f9c76bc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_f5bf62abff2343d9a54cbf956f9c76bc, codeobj_f5bf62abff2343d9a54cbf956f9c76bc, module_requests$auth, sizeof(void *));
    frame_f5bf62abff2343d9a54cbf956f9c76bc = cache_frame_f5bf62abff2343d9a54cbf956f9c76bc;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f5bf62abff2343d9a54cbf956f9c76bc);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f5bf62abff2343d9a54cbf956f9c76bc) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_x);
        tmp_isinstance_inst_1 = par_x;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_str);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15520 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 158;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "o";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT(par_x);
            tmp_called_instance_1 = par_x;
            frame_f5bf62abff2343d9a54cbf956f9c76bc->m_frame.f_lineno = 159;
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM(const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0));

            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_x;
                assert(old != NULL);
                par_x = tmp_assign_source_1;
                Py_DECREF(old);
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_hashlib);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21368 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 160;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_2;
        CHECK_OBJECT(par_x);
        tmp_args_element_name_1 = par_x;
        frame_f5bf62abff2343d9a54cbf956f9c76bc->m_frame.f_lineno = 160;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_called_instance_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_sha256, call_args);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f5bf62abff2343d9a54cbf956f9c76bc->m_frame.f_lineno = 160;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_hexdigest);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f5bf62abff2343d9a54cbf956f9c76bc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f5bf62abff2343d9a54cbf956f9c76bc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f5bf62abff2343d9a54cbf956f9c76bc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f5bf62abff2343d9a54cbf956f9c76bc, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_f5bf62abff2343d9a54cbf956f9c76bc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f5bf62abff2343d9a54cbf956f9c76bc, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f5bf62abff2343d9a54cbf956f9c76bc,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if (frame_f5bf62abff2343d9a54cbf956f9c76bc == cache_frame_f5bf62abff2343d9a54cbf956f9c76bc) {
        Py_DECREF(frame_f5bf62abff2343d9a54cbf956f9c76bc);
    }
    cache_frame_f5bf62abff2343d9a54cbf956f9c76bc = NULL;

    assertFrameObject(frame_f5bf62abff2343d9a54cbf956f9c76bc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_10_build_digest_header$$$function_3_sha256_utf8);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)par_x);
    Py_DECREF(par_x);
    par_x = NULL;

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

    Py_XDECREF(par_x);
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_10_build_digest_header$$$function_3_sha256_utf8);
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


static PyObject *impl_requests$auth$$$function_10_build_digest_header$$$function_4_sha512_utf8(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_9df9079fbe6c40e16b35de2958eea861;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9df9079fbe6c40e16b35de2958eea861 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_9df9079fbe6c40e16b35de2958eea861, codeobj_9df9079fbe6c40e16b35de2958eea861, module_requests$auth, sizeof(void *));
    frame_9df9079fbe6c40e16b35de2958eea861 = cache_frame_9df9079fbe6c40e16b35de2958eea861;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9df9079fbe6c40e16b35de2958eea861);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9df9079fbe6c40e16b35de2958eea861) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_x);
        tmp_isinstance_inst_1 = par_x;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_str);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 15520 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 164;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "o";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT(par_x);
            tmp_called_instance_1 = par_x;
            frame_9df9079fbe6c40e16b35de2958eea861->m_frame.f_lineno = 165;
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM(const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0));

            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_x;
                assert(old != NULL);
                par_x = tmp_assign_source_1;
                Py_DECREF(old);
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_hashlib);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21368 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 166;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_2;
        CHECK_OBJECT(par_x);
        tmp_args_element_name_1 = par_x;
        frame_9df9079fbe6c40e16b35de2958eea861->m_frame.f_lineno = 166;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_called_instance_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_sha512, call_args);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_9df9079fbe6c40e16b35de2958eea861->m_frame.f_lineno = 166;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_hexdigest);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9df9079fbe6c40e16b35de2958eea861);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9df9079fbe6c40e16b35de2958eea861);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9df9079fbe6c40e16b35de2958eea861);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9df9079fbe6c40e16b35de2958eea861, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_9df9079fbe6c40e16b35de2958eea861->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9df9079fbe6c40e16b35de2958eea861, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9df9079fbe6c40e16b35de2958eea861,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if (frame_9df9079fbe6c40e16b35de2958eea861 == cache_frame_9df9079fbe6c40e16b35de2958eea861) {
        Py_DECREF(frame_9df9079fbe6c40e16b35de2958eea861);
    }
    cache_frame_9df9079fbe6c40e16b35de2958eea861 = NULL;

    assertFrameObject(frame_9df9079fbe6c40e16b35de2958eea861);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_10_build_digest_header$$$function_4_sha512_utf8);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)par_x);
    Py_DECREF(par_x);
    par_x = NULL;

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

    Py_XDECREF(par_x);
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_10_build_digest_header$$$function_4_sha512_utf8);
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


static PyObject *impl_requests$auth$$$function_10_build_digest_header$$$function_5_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    PyObject *par_d = python_pars[1];
    struct Nuitka_FrameObject *frame_49a0a1b501fe741a30322c0675ff4d57;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_49a0a1b501fe741a30322c0675ff4d57 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_49a0a1b501fe741a30322c0675ff4d57, codeobj_49a0a1b501fe741a30322c0675ff4d57, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_49a0a1b501fe741a30322c0675ff4d57 = cache_frame_49a0a1b501fe741a30322c0675ff4d57;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_49a0a1b501fe741a30322c0675ff4d57);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_49a0a1b501fe741a30322c0675ff4d57) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        if (PyCell_GET(self->m_closure[0]) == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "hash_utf8");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = PyCell_GET(self->m_closure[0]);
        tmp_left_name_1 = const_str_digest_f2d2f5f01d8d9360355c50eb1d09d771;
        CHECK_OBJECT(par_s);
        tmp_tuple_element_1 = par_s;
        tmp_right_name_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_d);
        tmp_tuple_element_1 = par_d;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        tmp_args_element_name_1 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_49a0a1b501fe741a30322c0675ff4d57->m_frame.f_lineno = 169;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_49a0a1b501fe741a30322c0675ff4d57);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_49a0a1b501fe741a30322c0675ff4d57);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_49a0a1b501fe741a30322c0675ff4d57);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_49a0a1b501fe741a30322c0675ff4d57, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_49a0a1b501fe741a30322c0675ff4d57->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_49a0a1b501fe741a30322c0675ff4d57, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_49a0a1b501fe741a30322c0675ff4d57,
        type_description_1,
        par_s,
        par_d,
        self->m_closure[0]
    );


    // Release cached frame.
    if (frame_49a0a1b501fe741a30322c0675ff4d57 == cache_frame_49a0a1b501fe741a30322c0675ff4d57) {
        Py_DECREF(frame_49a0a1b501fe741a30322c0675ff4d57);
    }
    cache_frame_49a0a1b501fe741a30322c0675ff4d57 = NULL;

    assertFrameObject(frame_49a0a1b501fe741a30322c0675ff4d57);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_10_build_digest_header$$$function_5_lambda);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function_11_handle_redirect(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_r = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    struct Nuitka_FrameObject *frame_ba5a4e21b74f317e2a1493321cc1c608;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_ba5a4e21b74f317e2a1493321cc1c608 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_ba5a4e21b74f317e2a1493321cc1c608, codeobj_ba5a4e21b74f317e2a1493321cc1c608, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_ba5a4e21b74f317e2a1493321cc1c608 = cache_frame_ba5a4e21b74f317e2a1493321cc1c608;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ba5a4e21b74f317e2a1493321cc1c608);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ba5a4e21b74f317e2a1493321cc1c608) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_r);
        tmp_source_name_1 = par_r;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_is_redirect);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 231;
            type_description_1 = "ooo";
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            PyObject *tmp_source_name_2;
            tmp_assattr_name_1 = const_int_pos_1;
            CHECK_OBJECT(par_self);
            tmp_source_name_2 = par_self;
            tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__thread_local);
            if (tmp_assattr_target_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_num_401_calls, tmp_assattr_name_1);
            Py_DECREF(tmp_assattr_target_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ba5a4e21b74f317e2a1493321cc1c608);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ba5a4e21b74f317e2a1493321cc1c608);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ba5a4e21b74f317e2a1493321cc1c608, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_ba5a4e21b74f317e2a1493321cc1c608->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ba5a4e21b74f317e2a1493321cc1c608, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ba5a4e21b74f317e2a1493321cc1c608,
        type_description_1,
        par_self,
        par_r,
        par_kwargs
    );


    // Release cached frame.
    if (frame_ba5a4e21b74f317e2a1493321cc1c608 == cache_frame_ba5a4e21b74f317e2a1493321cc1c608) {
        Py_DECREF(frame_ba5a4e21b74f317e2a1493321cc1c608);
    }
    cache_frame_ba5a4e21b74f317e2a1493321cc1c608 = NULL;

    assertFrameObject(frame_ba5a4e21b74f317e2a1493321cc1c608);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_11_handle_redirect);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function_12_handle_401(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_r = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_s_auth = NULL;
    PyObject *var_pat = NULL;
    PyObject *var_prep = NULL;
    PyObject *var__r = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_96b663c01239ead45ea5933b42f0193d;
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
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_96b663c01239ead45ea5933b42f0193d = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_96b663c01239ead45ea5933b42f0193d, codeobj_96b663c01239ead45ea5933b42f0193d, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_96b663c01239ead45ea5933b42f0193d = cache_frame_96b663c01239ead45ea5933b42f0193d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_96b663c01239ead45ea5933b42f0193d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_96b663c01239ead45ea5933b42f0193d) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT(par_r);
            tmp_source_name_1 = par_r;
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_status_code);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_comparison_chain_1__operand_2 == NULL);
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            tmp_compexpr_left_1 = const_int_pos_400;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_compexpr_right_1 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_2 = RICH_COMPARE_LTE_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_comparison_chain_1__comparison_result == NULL);
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_2;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_name_2 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
            branch_yes_2:;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_name_1 = tmp_comparison_chain_1__comparison_result;
            Py_INCREF(tmp_operand_name_1);
            goto try_return_handler_2;
            branch_no_2:;
        }
        {
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_compexpr_left_2 = tmp_comparison_chain_1__operand_2;
            tmp_compexpr_right_2 = const_int_pos_500;
            tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_operand_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            goto try_return_handler_2;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$auth$$$function_12_handle_401);
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT((PyObject *)tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;

        CHECK_OBJECT((PyObject *)tmp_comparison_chain_1__comparison_result);
        Py_DECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;

        goto outline_result_1;
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

        Py_XDECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;

        Py_XDECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(requests$auth$$$function_12_handle_401);
        return NULL;
        outline_result_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooooooo";
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            PyObject *tmp_source_name_2;
            tmp_assattr_name_1 = const_int_pos_1;
            CHECK_OBJECT(par_self);
            tmp_source_name_2 = par_self;
            tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__thread_local);
            if (tmp_assattr_target_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_num_401_calls, tmp_assattr_name_1);
            Py_DECREF(tmp_assattr_target_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        CHECK_OBJECT(par_r);
        tmp_return_value = par_r;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__thread_local);
        if (tmp_source_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_pos);
        Py_DECREF(tmp_source_name_3);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_compexpr_left_3 != tmp_compexpr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_source_name_7;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_8;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT(par_r);
            tmp_source_name_7 = par_r;
            tmp_source_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_request);
            if (tmp_source_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_source_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_body);
            Py_DECREF(tmp_source_name_6);
            if (tmp_source_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_seek);
            Py_DECREF(tmp_source_name_5);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_9 = par_self;
            tmp_source_name_8 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain__thread_local);
            if (tmp_source_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);

                exception_lineno = 250;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_pos);
            Py_DECREF(tmp_source_name_8);
            if (tmp_args_element_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);

                exception_lineno = 250;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_96b663c01239ead45ea5933b42f0193d->m_frame.f_lineno = 250;
            tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_10;
        CHECK_OBJECT(par_r);
        tmp_source_name_10 = par_r;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_headers);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_96b663c01239ead45ea5933b42f0193d->m_frame.f_lineno = 251;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_digest_a88adb7a245cfc6a39c69917da364c05_str_empty_tuple, 0));

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_s_auth == NULL);
        var_s_auth = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_11;
        PyObject *tmp_source_name_12;
        tmp_compexpr_left_4 = const_str_plain_digest;
        CHECK_OBJECT(var_s_auth);
        tmp_called_instance_2 = var_s_auth;
        frame_96b663c01239ead45ea5933b42f0193d->m_frame.f_lineno = 253;
        tmp_compexpr_right_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_lower);
        if (tmp_compexpr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_4, tmp_compexpr_left_4);
        Py_DECREF(tmp_compexpr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_self);
        tmp_source_name_12 = par_self;
        tmp_source_name_11 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain__thread_local);
        if (tmp_source_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_num_401_calls);
        Py_DECREF(tmp_source_name_11);
        if (tmp_compexpr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_left_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_4 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_4 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_source_name_13;
            PyObject *tmp_source_name_14;
            CHECK_OBJECT(par_self);
            tmp_source_name_14 = par_self;
            tmp_source_name_13 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain__thread_local);
            if (tmp_source_name_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_num_401_calls);
            Py_DECREF(tmp_source_name_13);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_inplace_assign_attr_1__start == NULL);
            tmp_inplace_assign_attr_1__start = tmp_assign_source_4;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT(tmp_inplace_assign_attr_1__start);
            tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
            tmp_right_name_1 = const_int_pos_1;
            tmp_assign_source_5 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            assert(tmp_inplace_assign_attr_1__end == NULL);
            tmp_inplace_assign_attr_1__end = tmp_assign_source_5;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            PyObject *tmp_source_name_15;
            CHECK_OBJECT(tmp_inplace_assign_attr_1__end);
            tmp_assattr_name_2 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT(par_self);
            tmp_source_name_15 = par_self;
            tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain__thread_local);
            if (tmp_assattr_target_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_1 = "ooooooo";
                goto try_except_handler_4;
            }
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_num_401_calls, tmp_assattr_name_2);
            Py_DECREF(tmp_assattr_target_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_1 = "ooooooo";
                goto try_except_handler_4;
            }
        }
        goto try_end_1;
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

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
        Py_DECREF(tmp_inplace_assign_attr_1__end);
        tmp_inplace_assign_attr_1__end = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        try_end_1:;
        goto try_end_2;
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

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
        Py_DECREF(tmp_inplace_assign_attr_1__start);
        tmp_inplace_assign_attr_1__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

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
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_16;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_source_name_17;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_re);

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

                exception_lineno = 256;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_16 = tmp_mvar_value_1;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain_compile);
            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_1 = const_tuple_str_digest_58295a7b2ee00e12bd235bdf35e32b18_tuple;
            tmp_dict_key_1 = const_str_plain_flags;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_re);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_re);
            }

            if (tmp_mvar_value_2 == NULL) {
                Py_DECREF(tmp_called_name_2);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 2261 ], 24, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 256;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_17 = tmp_mvar_value_2;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain_IGNORECASE);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 256;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            frame_96b663c01239ead45ea5933b42f0193d->m_frame.f_lineno = 256;
            tmp_assign_source_6 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_kw_name_1);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_pat == NULL);
            var_pat = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_18;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_assattr_target_3;
            PyObject *tmp_source_name_19;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_parse_dict_header);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_parse_dict_header);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 21397 ], 39, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 257;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT(var_pat);
            tmp_source_name_18 = var_pat;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain_sub);
            if (tmp_called_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_1 = const_str_empty;
            tmp_args_name_2 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_s_auth);
            tmp_tuple_element_1 = var_s_auth;
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_1);
            tmp_kw_name_2 = PyDict_Copy(const_dict_d96fc9db79024853de9fbab06f7c41d9);
            frame_96b663c01239ead45ea5933b42f0193d->m_frame.f_lineno = 257;
            tmp_args_element_name_2 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_name_2);
            Py_DECREF(tmp_kw_name_2);
            if (tmp_args_element_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_96b663c01239ead45ea5933b42f0193d->m_frame.f_lineno = 257;
            tmp_assattr_name_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_assattr_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_19 = par_self;
            tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tmp_source_name_19, const_str_plain__thread_local);
            if (tmp_assattr_target_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_assattr_name_3);

                exception_lineno = 257;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_chal, tmp_assattr_name_3);
            Py_DECREF(tmp_assattr_name_3);
            Py_DECREF(tmp_assattr_target_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_source_name_20;
            PyObject *tmp_attribute_value_1;
            CHECK_OBJECT(par_r);
            tmp_source_name_20 = par_r;
            tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_20, const_str_plain_content);
            if (tmp_attribute_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_attribute_value_1);
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT(par_r);
            tmp_called_instance_3 = par_r;
            frame_96b663c01239ead45ea5933b42f0193d->m_frame.f_lineno = 262;
            tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_close);
            if (tmp_call_result_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_2);
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_source_name_21;
            CHECK_OBJECT(par_r);
            tmp_source_name_21 = par_r;
            tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_source_name_21, const_str_plain_request);
            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_96b663c01239ead45ea5933b42f0193d->m_frame.f_lineno = 263;
            tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, const_str_plain_copy);
            Py_DECREF(tmp_called_instance_4);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert(var_prep == NULL);
            var_prep = tmp_assign_source_7;
        }
        {
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_source_name_22;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_23;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_24;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar);

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

                exception_lineno = 264;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_4;
            CHECK_OBJECT(var_prep);
            tmp_source_name_22 = var_prep;
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_22, const_str_plain__cookies);
            if (tmp_args_element_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_r);
            tmp_source_name_23 = par_r;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_23, const_str_plain_request);
            if (tmp_args_element_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_name_3);

                exception_lineno = 264;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_r);
            tmp_source_name_24 = par_r;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_24, const_str_plain_raw);
            if (tmp_args_element_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_name_3);
                Py_DECREF(tmp_args_element_name_4);

                exception_lineno = 264;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_96b663c01239ead45ea5933b42f0193d->m_frame.f_lineno = 264;
            {
                PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_5, call_args);
            }

            Py_DECREF(tmp_args_element_name_3);
            Py_DECREF(tmp_args_element_name_4);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_call_result_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_3);
        }
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_25;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_source_name_26;
            CHECK_OBJECT(var_prep);
            tmp_source_name_25 = var_prep;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_25, const_str_plain_prepare_cookies);
            if (tmp_called_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_prep);
            tmp_source_name_26 = var_prep;
            tmp_args_element_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_26, const_str_plain__cookies);
            if (tmp_args_element_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_6);

                exception_lineno = 265;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_96b663c01239ead45ea5933b42f0193d->m_frame.f_lineno = 265;
            tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_6);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_element_name_6);
            if (tmp_call_result_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_4);
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_27;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_source_name_28;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_source_name_29;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_source_name_30;
            PyObject *tmp_ass_subscript_1;
            CHECK_OBJECT(par_self);
            tmp_source_name_27 = par_self;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_27, const_str_plain_build_digest_header);
            if (tmp_called_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_prep);
            tmp_source_name_28 = var_prep;
            tmp_args_element_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_28, const_str_plain_method);
            if (tmp_args_element_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_7);

                exception_lineno = 268;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_prep);
            tmp_source_name_29 = var_prep;
            tmp_args_element_name_8 = LOOKUP_ATTRIBUTE(tmp_source_name_29, const_str_plain_url);
            if (tmp_args_element_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_7);
                Py_DECREF(tmp_args_element_name_7);

                exception_lineno = 268;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_96b663c01239ead45ea5933b42f0193d->m_frame.f_lineno = 267;
            {
                PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8};
                tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_7, call_args);
            }

            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_args_element_name_7);
            Py_DECREF(tmp_args_element_name_8);
            if (tmp_ass_subvalue_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_prep);
            tmp_source_name_30 = var_prep;
            tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_source_name_30, const_str_plain_headers);
            if (tmp_ass_subscribed_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_1);

                exception_lineno = 267;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subscript_1 = const_str_plain_Authorization;
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);
            Py_DECREF(tmp_ass_subvalue_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_source_name_31;
            PyObject *tmp_source_name_32;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_dircall_arg3_1;
            CHECK_OBJECT(par_r);
            tmp_source_name_32 = par_r;
            tmp_source_name_31 = LOOKUP_ATTRIBUTE(tmp_source_name_32, const_str_plain_connection);
            if (tmp_source_name_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_source_name_31, const_str_plain_send);
            Py_DECREF(tmp_source_name_31);
            if (tmp_dircall_arg1_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_prep);
            tmp_tuple_element_2 = var_prep;
            tmp_dircall_arg2_1 = PyTuple_New(1);
            Py_INCREF(tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_kwargs);
            tmp_dircall_arg3_1 = par_kwargs;
            Py_INCREF(tmp_dircall_arg3_1);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
                tmp_assign_source_8 = impl___internal__$$$function_1_complex_call_helper_pos_star_dict(dir_call_args);
            }
            if (tmp_assign_source_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert(var__r == NULL);
            var__r = tmp_assign_source_8;
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_source_name_33;
            PyObject *tmp_call_result_5;
            PyObject *tmp_args_element_name_9;
            CHECK_OBJECT(var__r);
            tmp_source_name_33 = var__r;
            tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_source_name_33, const_str_plain_history);
            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_r);
            tmp_args_element_name_9 = par_r;
            frame_96b663c01239ead45ea5933b42f0193d->m_frame.f_lineno = 270;
            {
                PyObject *call_args[] = {tmp_args_element_name_9};
                tmp_call_result_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_append, call_args);
            }

            Py_DECREF(tmp_called_instance_5);
            if (tmp_call_result_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_5);
        }
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_assattr_target_4;
            CHECK_OBJECT(var_prep);
            tmp_assattr_name_4 = var_prep;
            CHECK_OBJECT(var__r);
            tmp_assattr_target_4 = var__r;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain_request, tmp_assattr_name_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        CHECK_OBJECT(var__r);
        tmp_return_value = var__r;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_4:;
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_source_name_34;
        tmp_assattr_name_5 = const_int_pos_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_34 = par_self;
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE(tmp_source_name_34, const_str_plain__thread_local);
        if (tmp_assattr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain_num_401_calls, tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_target_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_96b663c01239ead45ea5933b42f0193d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_96b663c01239ead45ea5933b42f0193d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_96b663c01239ead45ea5933b42f0193d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_96b663c01239ead45ea5933b42f0193d, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_96b663c01239ead45ea5933b42f0193d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96b663c01239ead45ea5933b42f0193d, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_96b663c01239ead45ea5933b42f0193d,
        type_description_1,
        par_self,
        par_r,
        par_kwargs,
        var_s_auth,
        var_pat,
        var_prep,
        var__r
    );


    // Release cached frame.
    if (frame_96b663c01239ead45ea5933b42f0193d == cache_frame_96b663c01239ead45ea5933b42f0193d) {
        Py_DECREF(frame_96b663c01239ead45ea5933b42f0193d);
    }
    cache_frame_96b663c01239ead45ea5933b42f0193d = NULL;

    assertFrameObject(frame_96b663c01239ead45ea5933b42f0193d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(par_r);
    tmp_return_value = par_r;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_12_handle_401);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_s_auth);
    var_s_auth = NULL;

    Py_XDECREF(var_pat);
    var_pat = NULL;

    Py_XDECREF(var_prep);
    var_prep = NULL;

    Py_XDECREF(var__r);
    var__r = NULL;

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

    Py_XDECREF(var_s_auth);
    var_s_auth = NULL;

    Py_XDECREF(var_pat);
    var_pat = NULL;

    Py_XDECREF(var_prep);
    var_prep = NULL;

    Py_XDECREF(var__r);
    var__r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_12_handle_401);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function_13___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_r = python_pars[1];
    struct Nuitka_FrameObject *frame_f4428954416bdb818b1d9ab978214db2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
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
    static struct Nuitka_FrameObject *cache_frame_f4428954416bdb818b1d9ab978214db2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_f4428954416bdb818b1d9ab978214db2, codeobj_f4428954416bdb818b1d9ab978214db2, module_requests$auth, sizeof(void *)+sizeof(void *));
    frame_f4428954416bdb818b1d9ab978214db2 = cache_frame_f4428954416bdb818b1d9ab978214db2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f4428954416bdb818b1d9ab978214db2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f4428954416bdb818b1d9ab978214db2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_f4428954416bdb818b1d9ab978214db2->m_frame.f_lineno = 280;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_init_per_thread_state);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__thread_local);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_last_nonce);
        Py_DECREF(tmp_source_name_1);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 282;
            type_description_1 = "oo";
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
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_source_name_6;
            PyObject *tmp_ass_subscript_1;
            CHECK_OBJECT(par_self);
            tmp_source_name_3 = par_self;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_build_digest_header);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_r);
            tmp_source_name_4 = par_r;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_method);
            if (tmp_args_element_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);

                exception_lineno = 283;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_r);
            tmp_source_name_5 = par_r;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_url);
            if (tmp_args_element_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);
                Py_DECREF(tmp_args_element_name_1);

                exception_lineno = 283;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_f4428954416bdb818b1d9ab978214db2->m_frame.f_lineno = 283;
            {
                PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
                tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
            }

            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_ass_subvalue_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_r);
            tmp_source_name_6 = par_r;
            tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_headers);
            if (tmp_ass_subscribed_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_1);

                exception_lineno = 283;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subscript_1 = const_str_plain_Authorization;
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);
            Py_DECREF(tmp_ass_subvalue_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT(par_r);
        tmp_source_name_7 = par_r;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_body);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        frame_f4428954416bdb818b1d9ab978214db2->m_frame.f_lineno = 285;
        tmp_assattr_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_tell);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_self);
        tmp_source_name_8 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain__thread_local);
        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_1);

            exception_lineno = 285;
            type_description_1 = "oo";
            goto try_except_handler_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_pos, tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oo";
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_f4428954416bdb818b1d9ab978214db2, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_f4428954416bdb818b1d9ab978214db2, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    PyException_SetTraceback(exception_keeper_value_1, (PyObject *)exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            PyObject *tmp_source_name_9;
            tmp_assattr_name_2 = Py_None;
            CHECK_OBJECT(par_self);
            tmp_source_name_9 = par_self;
            tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain__thread_local);
            if (tmp_assattr_target_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_pos, tmp_assattr_name_2);
            Py_DECREF(tmp_assattr_target_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;
                type_description_1 = "oo";
                goto try_except_handler_2;
            }
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 284;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_f4428954416bdb818b1d9ab978214db2->m_frame) frame_f4428954416bdb818b1d9ab978214db2->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto try_except_handler_2;
        branch_end_2:;
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
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_13___call__);
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_10;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_11;
        CHECK_OBJECT(par_r);
        tmp_source_name_10 = par_r;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_register_hook);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = const_str_plain_response;
        CHECK_OBJECT(par_self);
        tmp_source_name_11 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_handle_401);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f4428954416bdb818b1d9ab978214db2->m_frame.f_lineno = 292;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_12;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_13;
        CHECK_OBJECT(par_r);
        tmp_source_name_12 = par_r;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_register_hook);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = const_str_plain_response;
        CHECK_OBJECT(par_self);
        tmp_source_name_13 = par_self;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_handle_redirect);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 293;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f4428954416bdb818b1d9ab978214db2->m_frame.f_lineno = 293;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_source_name_14;
        tmp_assattr_name_3 = const_int_pos_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_14 = par_self;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain__thread_local);
        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_num_401_calls, tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f4428954416bdb818b1d9ab978214db2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f4428954416bdb818b1d9ab978214db2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f4428954416bdb818b1d9ab978214db2, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_f4428954416bdb818b1d9ab978214db2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f4428954416bdb818b1d9ab978214db2, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f4428954416bdb818b1d9ab978214db2,
        type_description_1,
        par_self,
        par_r
    );


    // Release cached frame.
    if (frame_f4428954416bdb818b1d9ab978214db2 == cache_frame_f4428954416bdb818b1d9ab978214db2) {
        Py_DECREF(frame_f4428954416bdb818b1d9ab978214db2);
    }
    cache_frame_f4428954416bdb818b1d9ab978214db2 = NULL;

    assertFrameObject(frame_f4428954416bdb818b1d9ab978214db2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT(par_r);
    tmp_return_value = par_r;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_13___call__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function_14___eq__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_7a8447f11667ada94155f3bd2fc5bdfd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7a8447f11667ada94155f3bd2fc5bdfd = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_7a8447f11667ada94155f3bd2fc5bdfd, codeobj_7a8447f11667ada94155f3bd2fc5bdfd, module_requests$auth, sizeof(void *)+sizeof(void *));
    frame_7a8447f11667ada94155f3bd2fc5bdfd = cache_frame_7a8447f11667ada94155f3bd2fc5bdfd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7a8447f11667ada94155f3bd2fc5bdfd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7a8447f11667ada94155f3bd2fc5bdfd) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_all_arg_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_username);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_getattr_target_1 = par_other;
        tmp_getattr_attr_1 = const_str_plain_username;
        tmp_getattr_default_1 = Py_None;
        tmp_compexpr_right_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 300;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = RICH_COMPARE_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_all_arg_1 = PyList_New(2);
        PyList_SET_ITEM(tmp_all_arg_1, 0, tmp_list_element_1);
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_password);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_all_arg_1);

            exception_lineno = 301;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_getattr_target_2 = par_other;
        tmp_getattr_attr_2 = const_str_plain_password;
        tmp_getattr_default_2 = Py_None;
        tmp_compexpr_right_2 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_all_arg_1);
            Py_DECREF(tmp_compexpr_left_2);

            exception_lineno = 301;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = RICH_COMPARE_EQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_all_arg_1);

            exception_lineno = 301;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_all_arg_1, 1, tmp_list_element_1);
        tmp_return_value = BUILTIN_ALL(tmp_all_arg_1);
        Py_DECREF(tmp_all_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7a8447f11667ada94155f3bd2fc5bdfd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7a8447f11667ada94155f3bd2fc5bdfd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7a8447f11667ada94155f3bd2fc5bdfd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7a8447f11667ada94155f3bd2fc5bdfd, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_7a8447f11667ada94155f3bd2fc5bdfd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7a8447f11667ada94155f3bd2fc5bdfd, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7a8447f11667ada94155f3bd2fc5bdfd,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if (frame_7a8447f11667ada94155f3bd2fc5bdfd == cache_frame_7a8447f11667ada94155f3bd2fc5bdfd) {
        Py_DECREF(frame_7a8447f11667ada94155f3bd2fc5bdfd);
    }
    cache_frame_7a8447f11667ada94155f3bd2fc5bdfd = NULL;

    assertFrameObject(frame_7a8447f11667ada94155f3bd2fc5bdfd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_14___eq__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function_15___ne__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_e48527654cd8f0f408bb3f885abd40d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e48527654cd8f0f408bb3f885abd40d3 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_e48527654cd8f0f408bb3f885abd40d3, codeobj_e48527654cd8f0f408bb3f885abd40d3, module_requests$auth, sizeof(void *)+sizeof(void *));
    frame_e48527654cd8f0f408bb3f885abd40d3 = cache_frame_e48527654cd8f0f408bb3f885abd40d3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e48527654cd8f0f408bb3f885abd40d3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e48527654cd8f0f408bb3f885abd40d3) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_self);
        tmp_compexpr_left_1 = par_self;
        CHECK_OBJECT(par_other);
        tmp_compexpr_right_1 = par_other;
        tmp_operand_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e48527654cd8f0f408bb3f885abd40d3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e48527654cd8f0f408bb3f885abd40d3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e48527654cd8f0f408bb3f885abd40d3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e48527654cd8f0f408bb3f885abd40d3, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_e48527654cd8f0f408bb3f885abd40d3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e48527654cd8f0f408bb3f885abd40d3, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e48527654cd8f0f408bb3f885abd40d3,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if (frame_e48527654cd8f0f408bb3f885abd40d3 == cache_frame_e48527654cd8f0f408bb3f885abd40d3) {
        Py_DECREF(frame_e48527654cd8f0f408bb3f885abd40d3);
    }
    cache_frame_e48527654cd8f0f408bb3f885abd40d3 = NULL;

    assertFrameObject(frame_e48527654cd8f0f408bb3f885abd40d3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$auth$$$function_15___ne__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_10_build_digest_header,
        const_str_plain_build_digest_header,
#if PYTHON_VERSION >= 300
        const_str_digest_67bc2e2875f2a676ae8e8f2595c69cad,
#endif
        codeobj_acf6237378e09ec927e19c2054595557,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        const_str_digest_df91c2e0090a913ed1897e8fca207ea2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_1_md5_utf8() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_10_build_digest_header$$$function_1_md5_utf8,
        const_str_plain_md5_utf8,
#if PYTHON_VERSION >= 300
        const_str_digest_437d9d9283e7705920d4361a76539982,
#endif
        codeobj_0b2886732758ba8d30f8eb7d96304e0b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_2_sha_utf8() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_10_build_digest_header$$$function_2_sha_utf8,
        const_str_plain_sha_utf8,
#if PYTHON_VERSION >= 300
        const_str_digest_a48752b2d8c32906209a579a59eb860e,
#endif
        codeobj_b300000583233bc0e5740b94813a42b5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_3_sha256_utf8() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_10_build_digest_header$$$function_3_sha256_utf8,
        const_str_plain_sha256_utf8,
#if PYTHON_VERSION >= 300
        const_str_digest_065e009455d4c4ad1356e1bac835c3a1,
#endif
        codeobj_f5bf62abff2343d9a54cbf956f9c76bc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_4_sha512_utf8() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_10_build_digest_header$$$function_4_sha512_utf8,
        const_str_plain_sha512_utf8,
#if PYTHON_VERSION >= 300
        const_str_digest_0ca141503f179b28e3129781569b5edb,
#endif
        codeobj_9df9079fbe6c40e16b35de2958eea861,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_5_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_10_build_digest_header$$$function_5_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        const_str_digest_41f78ead2be3f88523470f0013b27f8f,
#endif
        codeobj_49a0a1b501fe741a30322c0675ff4d57,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_11_handle_redirect() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_11_handle_redirect,
        const_str_plain_handle_redirect,
#if PYTHON_VERSION >= 300
        const_str_digest_7c3d6be840d0505baea6486b3a2fb076,
#endif
        codeobj_ba5a4e21b74f317e2a1493321cc1c608,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        const_str_digest_5bf0e52ad3af9d76b6e6716841011fd0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_12_handle_401() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_12_handle_401,
        const_str_plain_handle_401,
#if PYTHON_VERSION >= 300
        const_str_digest_aa04245735e0a296f4eee2c81c6c24b4,
#endif
        codeobj_96b663c01239ead45ea5933b42f0193d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        const_str_digest_fe0ad47fb591025246f4d96ff82e1a89,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_13___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_13___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 300
        const_str_digest_7a006474c4967997a79cedaecd602a45,
#endif
        codeobj_f4428954416bdb818b1d9ab978214db2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_14___eq__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_14___eq__,
        const_str_plain___eq__,
#if PYTHON_VERSION >= 300
        const_str_digest_c3a9a47fda757d3a3b31995c197a305a,
#endif
        codeobj_7a8447f11667ada94155f3bd2fc5bdfd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_15___ne__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_15___ne__,
        const_str_plain___ne__,
#if PYTHON_VERSION >= 300
        const_str_digest_1086311fbf6e3245df872c941ed6e8ad,
#endif
        codeobj_e48527654cd8f0f408bb3f885abd40d3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_1__basic_auth_str() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_1__basic_auth_str,
        const_str_plain__basic_auth_str,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_881995f222c2fa3a7027a470df3643f4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        const_str_digest_919a2045e823b128b54cfd720f73e3bf,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_2___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_2___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 300
        const_str_digest_60aadb6b5e6f7210d6b0e13a6cd7dbcb,
#endif
        codeobj_14aad80b738dfb2fbf7ee91d9955493f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_3___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_51abe40552a340600cafb395a2df7065,
#endif
        codeobj_ce20f5ff8dcca1226032ca6ff74fc15e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_4___eq__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_4___eq__,
        const_str_plain___eq__,
#if PYTHON_VERSION >= 300
        const_str_digest_7565d3f493b69797b6a3c9c487eadc9f,
#endif
        codeobj_8fa257e4c0594b5e9e75062882f43f1e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_5___ne__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_5___ne__,
        const_str_plain___ne__,
#if PYTHON_VERSION >= 300
        const_str_digest_cb06648d43a209f35d822642f76d8852,
#endif
        codeobj_74e2d71630ae6decab0ccdedd1b22381,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_6___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_6___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 300
        const_str_digest_f3a7a1ca53a484562486747f6ddca3a9,
#endif
        codeobj_95dd8073b8ccf7b2583d4a50a7ce93ea,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_7___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_7___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 300
        const_str_digest_128a37116d6d30cc1592bb98f4d24b46,
#endif
        codeobj_c97737131748de6d30b174103fc0f66a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_8___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_ee22ae99a5537f5b922bb4b122196ae7,
#endif
        codeobj_1415eb5f775e82b1d716c088c348e8f4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_9_init_per_thread_state() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_9_init_per_thread_state,
        const_str_plain_init_per_thread_state,
#if PYTHON_VERSION >= 300
        const_str_digest_37d3a2307e31335fa61f05d3486fd568,
#endif
        codeobj_832a24c057df6f683199bae35426fc0c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$auth =
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

function_impl_code functable_requests$auth[] = {
    impl_requests$auth$$$function_10_build_digest_header$$$function_1_md5_utf8,
    impl_requests$auth$$$function_10_build_digest_header$$$function_2_sha_utf8,
    impl_requests$auth$$$function_10_build_digest_header$$$function_3_sha256_utf8,
    impl_requests$auth$$$function_10_build_digest_header$$$function_4_sha512_utf8,
    impl_requests$auth$$$function_10_build_digest_header$$$function_5_lambda,
    impl_requests$auth$$$function_1__basic_auth_str,
    impl_requests$auth$$$function_2___call__,
    impl_requests$auth$$$function_3___init__,
    impl_requests$auth$$$function_4___eq__,
    impl_requests$auth$$$function_5___ne__,
    impl_requests$auth$$$function_6___call__,
    impl_requests$auth$$$function_7___call__,
    impl_requests$auth$$$function_8___init__,
    impl_requests$auth$$$function_9_init_per_thread_state,
    impl_requests$auth$$$function_10_build_digest_header,
    impl_requests$auth$$$function_11_handle_redirect,
    impl_requests$auth$$$function_12_handle_401,
    impl_requests$auth$$$function_13___call__,
    impl_requests$auth$$$function_14___eq__,
    impl_requests$auth$$$function_15___ne__,
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

    function_impl_code *current = functable_requests$auth;
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

    if (offset > sizeof(functable_requests$auth) || offset < 0) {
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
        functable_requests$auth[offset],
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
        module_requests$auth,
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
PyObject *modulecode_requests$auth(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_requests$auth;
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
    PRINT_STRING("requests.auth: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("requests.auth: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("requests.auth: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initrequests$auth\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$auth = Py_InitModule4(
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
    mdef_requests$auth.m_name = module_full_name;
    module_requests$auth = PyModule_Create(&mdef_requests$auth);
#endif

    moduledict_requests$auth = MODULE_DICT(module_requests$auth);

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
        moduledict_requests$auth,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_requests$auth,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_requests$auth,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$auth,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$auth,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_requests$auth);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_requests$auth);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_31c5cff77f6e5b2874742d9e052c758b;
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
    PyObject *locals_requests$auth_72 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_f97898daf1c20e6fc87ab49a5061c7db_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_f97898daf1c20e6fc87ab49a5061c7db_2 = NULL;
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
    PyObject *locals_requests$auth_79 = NULL;
    struct Nuitka_FrameObject *frame_8634cf718102c054736afa1980bbe406_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_8634cf718102c054736afa1980bbe406_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_requests$auth_100 = NULL;
    struct Nuitka_FrameObject *frame_e736912366e6eb45eed321a89ef225ee_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_e736912366e6eb45eed321a89ef225ee_4 = NULL;
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
    PyObject *locals_requests$auth_108 = NULL;
    struct Nuitka_FrameObject *frame_dda5c26f77d009d43e7170e4a2d5b0ae_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_dda5c26f77d009d43e7170e4a2d5b0ae_5 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_4bfd8366dcc8506d555a9e4dbdeb488d;
        UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_1ea32972192734a29d79f357f7d9be3e;
        UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_31c5cff77f6e5b2874742d9e052c758b = MAKE_MODULE_FRAME(codeobj_31c5cff77f6e5b2874742d9e052c758b, module_requests$auth);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_31c5cff77f6e5b2874742d9e052c758b);
    assert(Py_REFCNT(frame_31c5cff77f6e5b2874742d9e052c758b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_1ea32972192734a29d79f357f7d9be3e;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_os;
        tmp_globals_name_1 = (PyObject *)moduledict_requests$auth;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_31c5cff77f6e5b2874742d9e052c758b->m_frame.f_lineno = 10;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_re;
        tmp_globals_name_2 = (PyObject *)moduledict_requests$auth;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_31c5cff77f6e5b2874742d9e052c758b->m_frame.f_lineno = 11;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_time;
        tmp_globals_name_3 = (PyObject *)moduledict_requests$auth;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_31c5cff77f6e5b2874742d9e052c758b->m_frame.f_lineno = 12;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_hashlib;
        tmp_globals_name_4 = (PyObject *)moduledict_requests$auth;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_31c5cff77f6e5b2874742d9e052c758b->m_frame.f_lineno = 13;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_hashlib, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_threading;
        tmp_globals_name_5 = (PyObject *)moduledict_requests$auth;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        tmp_level_name_5 = const_int_0;
        frame_31c5cff77f6e5b2874742d9e052c758b->m_frame.f_lineno = 14;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_threading, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_warnings;
        tmp_globals_name_6 = (PyObject *)moduledict_requests$auth;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = Py_None;
        tmp_level_name_6 = const_int_0;
        frame_31c5cff77f6e5b2874742d9e052c758b->m_frame.f_lineno = 15;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_base64;
        tmp_globals_name_7 = (PyObject *)moduledict_requests$auth;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_b64encode_tuple;
        tmp_level_name_7 = const_int_0;
        frame_31c5cff77f6e5b2874742d9e052c758b->m_frame.f_lineno = 17;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_b64encode);
        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_b64encode, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain_compat;
        tmp_globals_name_8 = (PyObject *)moduledict_requests$auth;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_urlparse_str_plain_str_str_plain_basestring_tuple;
        tmp_level_name_8 = const_int_pos_1;
        frame_31c5cff77f6e5b2874742d9e052c758b->m_frame.f_lineno = 19;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_requests$auth,
                const_str_plain_urlparse,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_urlparse);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_urlparse, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_requests$auth,
                const_str_plain_str,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_str);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_requests$auth,
                const_str_plain_basestring,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_basestring);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_basestring, tmp_assign_source_14);
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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_plain_cookies;
        tmp_globals_name_9 = (PyObject *)moduledict_requests$auth;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_extract_cookies_to_jar_tuple;
        tmp_level_name_9 = const_int_pos_1;
        frame_31c5cff77f6e5b2874742d9e052c758b->m_frame.f_lineno = 20;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_requests$auth,
                const_str_plain_extract_cookies_to_jar,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_extract_cookies_to_jar);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_plain__internal_utils;
        tmp_globals_name_10 = (PyObject *)moduledict_requests$auth;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = const_tuple_str_plain_to_native_string_tuple;
        tmp_level_name_10 = const_int_pos_1;
        frame_31c5cff77f6e5b2874742d9e052c758b->m_frame.f_lineno = 21;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
           tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_requests$auth,
                const_str_plain_to_native_string,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_to_native_string);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_to_native_string, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = const_str_plain_utils;
        tmp_globals_name_11 = (PyObject *)moduledict_requests$auth;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = const_tuple_str_plain_parse_dict_header_tuple;
        tmp_level_name_11 = const_int_pos_1;
        frame_31c5cff77f6e5b2874742d9e052c758b->m_frame.f_lineno = 22;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_requests$auth,
                const_str_plain_parse_dict_header,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_parse_dict_header);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_parse_dict_header, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = const_str_digest_5d735bc80d16f0fedbdde78344a2d394;
        UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_CONTENT_TYPE_FORM_URLENCODED, tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = const_str_digest_e1ae02aba66d45ac9d7f070694408d22;
        UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_CONTENT_TYPE_MULTI_PART, tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_requests$auth$$$function_1__basic_auth_str();



        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain__basic_auth_str, tmp_assign_source_20);
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


            exception_lineno = 72;

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


            exception_lineno = 72;

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


            exception_lineno = 72;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

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


            exception_lineno = 72;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

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


            exception_lineno = 72;

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


            exception_lineno = 72;

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


            exception_lineno = 72;

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


                exception_lineno = 72;

                goto try_except_handler_2;
            }
            tmp_tuple_element_1 = const_str_plain_AuthBase;
            tmp_args_name_1 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_1 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_31c5cff77f6e5b2874742d9e052c758b->m_frame.f_lineno = 72;
            tmp_assign_source_24 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_name_1);
            if (tmp_assign_source_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

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


                exception_lineno = 72;

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


                    exception_lineno = 72;

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

                    exception_lineno = 72;

                    goto try_except_handler_2;
                }
                PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_2);
                tmp_raise_value_1 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
                Py_DECREF(tmp_right_name_1);
                if (tmp_raise_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 72;

                    goto try_except_handler_2;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF(tmp_raise_type_1);
                exception_value = tmp_raise_value_1;
                exception_lineno = 72;
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
            locals_requests$auth_72 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_67889f3b65748dbd83938a67635b28e4;
        tmp_res = PyObject_SetItem(locals_requests$auth_72, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_digest_2fc3f96e0216dbc7dcd34461a1c4d2ee;
        tmp_res = PyObject_SetItem(locals_requests$auth_72, const_str_plain___doc__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_AuthBase;
        tmp_res = PyObject_SetItem(locals_requests$auth_72, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_4;
        }
        MAKE_OR_REUSE_FRAME(cache_frame_f97898daf1c20e6fc87ab49a5061c7db_2, codeobj_f97898daf1c20e6fc87ab49a5061c7db, module_requests$auth, sizeof(void *));
        frame_f97898daf1c20e6fc87ab49a5061c7db_2 = cache_frame_f97898daf1c20e6fc87ab49a5061c7db_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_f97898daf1c20e6fc87ab49a5061c7db_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_f97898daf1c20e6fc87ab49a5061c7db_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_2___call__();



        tmp_res = PyObject_SetItem(locals_requests$auth_72, const_str_plain___call__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_f97898daf1c20e6fc87ab49a5061c7db_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_f97898daf1c20e6fc87ab49a5061c7db_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f97898daf1c20e6fc87ab49a5061c7db_2, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_f97898daf1c20e6fc87ab49a5061c7db_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f97898daf1c20e6fc87ab49a5061c7db_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_f97898daf1c20e6fc87ab49a5061c7db_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if (frame_f97898daf1c20e6fc87ab49a5061c7db_2 == cache_frame_f97898daf1c20e6fc87ab49a5061c7db_2) {
            Py_DECREF(frame_f97898daf1c20e6fc87ab49a5061c7db_2);
        }
        cache_frame_f97898daf1c20e6fc87ab49a5061c7db_2 = NULL;

        assertFrameObject(frame_f97898daf1c20e6fc87ab49a5061c7db_2);

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
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            tmp_compexpr_right_1 = const_tuple_type_object_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto try_except_handler_4;
            }
            tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            branch_yes_4:;
            tmp_dictset_value = const_tuple_type_object_tuple;
            tmp_res = PyObject_SetItem(locals_requests$auth_72, const_str_plain___orig_bases__, tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto try_except_handler_4;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = const_str_plain_AuthBase;
            tmp_args_name_2 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_requests$auth_72;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_31c5cff77f6e5b2874742d9e052c758b->m_frame.f_lineno = 72;
            tmp_assign_source_27 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

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
        NUITKA_CANNOT_GET_HERE(requests$auth);
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_requests$auth_72);
        locals_requests$auth_72 = NULL;
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

        Py_DECREF(locals_requests$auth_72);
        locals_requests$auth_72 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$auth);
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
        NUITKA_CANNOT_GET_HERE(requests$auth);
        return NULL;
        outline_exception_1:;
        exception_lineno = 72;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_AuthBase, tmp_assign_source_26);
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

    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_AuthBase);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_AuthBase);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21436 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 79;

            goto try_except_handler_5;
        }

        tmp_tuple_element_4 = tmp_mvar_value_3;
        tmp_assign_source_28 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_4);
        PyTuple_SET_ITEM(tmp_assign_source_28, 0, tmp_tuple_element_4);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_29 = impl___internal__$$$function_3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_8;
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


            exception_lineno = 79;

            goto try_except_handler_5;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
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


            exception_lineno = 79;

            goto try_except_handler_5;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_5;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
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


            exception_lineno = 79;

            goto try_except_handler_5;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_5;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_2);
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_31 = SELECT_METACLASS(tmp_metaclass_name_2, tmp_bases_name_2);
        Py_DECREF(tmp_metaclass_name_2);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_31;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_name_6;
        tmp_key_name_6 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_6, tmp_key_name_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_5;
        }
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
        branch_yes_5:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_5;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_source_name_5 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr(tmp_source_name_5, const_str_plain___prepare__);
        tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_32;
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


                exception_lineno = 79;

                goto try_except_handler_5;
            }
            tmp_tuple_element_5 = const_str_plain_HTTPBasicAuth;
            tmp_args_name_3 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_5);
            PyTuple_SET_ITEM(tmp_args_name_3, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_5 = tmp_class_creation_2__bases;
            Py_INCREF(tmp_tuple_element_5);
            PyTuple_SET_ITEM(tmp_args_name_3, 1, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_31c5cff77f6e5b2874742d9e052c758b->m_frame.f_lineno = 79;
            tmp_assign_source_32 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_name_3);
            if (tmp_assign_source_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto try_except_handler_5;
            }
            assert(tmp_class_creation_2__prepared == NULL);
            tmp_class_creation_2__prepared = tmp_assign_source_32;
        }
        {
            nuitka_bool tmp_condition_result_11;
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


                exception_lineno = 79;

                goto try_except_handler_5;
            }
            tmp_condition_result_11 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
            branch_yes_7:;
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


                    exception_lineno = 79;

                    goto try_except_handler_5;
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

                    exception_lineno = 79;

                    goto try_except_handler_5;
                }
                PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_6);
                tmp_raise_value_2 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
                Py_DECREF(tmp_right_name_2);
                if (tmp_raise_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 79;

                    goto try_except_handler_5;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF(tmp_raise_type_2);
                exception_value = tmp_raise_value_2;
                exception_lineno = 79;
                RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

                goto try_except_handler_5;
            }
            branch_no_7:;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_33;
            tmp_assign_source_33 = PyDict_New();
            assert(tmp_class_creation_2__prepared == NULL);
            tmp_class_creation_2__prepared = tmp_assign_source_33;
        }
        branch_end_6:;
    }
    {
        PyObject *tmp_assign_source_34;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_requests$auth_79 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_67889f3b65748dbd83938a67635b28e4;
        tmp_res = PyObject_SetItem(locals_requests$auth_79, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_digest_a664f80c1075d8cfb85f49618afc684b;
        tmp_res = PyObject_SetItem(locals_requests$auth_79, const_str_plain___doc__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_plain_HTTPBasicAuth;
        tmp_res = PyObject_SetItem(locals_requests$auth_79, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_7;
        }
        MAKE_OR_REUSE_FRAME(cache_frame_8634cf718102c054736afa1980bbe406_3, codeobj_8634cf718102c054736afa1980bbe406, module_requests$auth, sizeof(void *));
        frame_8634cf718102c054736afa1980bbe406_3 = cache_frame_8634cf718102c054736afa1980bbe406_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_8634cf718102c054736afa1980bbe406_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_8634cf718102c054736afa1980bbe406_3) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_3___init__();



        tmp_res = PyObject_SetItem(locals_requests$auth_79, const_str_plain___init__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_4___eq__();



        tmp_res = PyObject_SetItem(locals_requests$auth_79, const_str_plain___eq__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_5___ne__();



        tmp_res = PyObject_SetItem(locals_requests$auth_79, const_str_plain___ne__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_6___call__();



        tmp_res = PyObject_SetItem(locals_requests$auth_79, const_str_plain___call__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_8634cf718102c054736afa1980bbe406_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_8634cf718102c054736afa1980bbe406_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8634cf718102c054736afa1980bbe406_3, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_8634cf718102c054736afa1980bbe406_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8634cf718102c054736afa1980bbe406_3, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_8634cf718102c054736afa1980bbe406_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if (frame_8634cf718102c054736afa1980bbe406_3 == cache_frame_8634cf718102c054736afa1980bbe406_3) {
            Py_DECREF(frame_8634cf718102c054736afa1980bbe406_3);
        }
        cache_frame_8634cf718102c054736afa1980bbe406_3 = NULL;

        assertFrameObject(frame_8634cf718102c054736afa1980bbe406_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_compexpr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_compexpr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto try_except_handler_7;
            }
            tmp_condition_result_12 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            branch_yes_8:;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_dictset_value = tmp_class_creation_2__bases_orig;
            tmp_res = PyObject_SetItem(locals_requests$auth_79, const_str_plain___orig_bases__, tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto try_except_handler_7;
            }
            branch_no_8:;
        }
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = const_str_plain_HTTPBasicAuth;
            tmp_args_name_4 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_7);
            PyTuple_SET_ITEM(tmp_args_name_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            Py_INCREF(tmp_tuple_element_7);
            PyTuple_SET_ITEM(tmp_args_name_4, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_requests$auth_79;
            Py_INCREF(tmp_tuple_element_7);
            PyTuple_SET_ITEM(tmp_args_name_4, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_31c5cff77f6e5b2874742d9e052c758b->m_frame.f_lineno = 79;
            tmp_assign_source_35 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4);
            Py_DECREF(tmp_args_name_4);
            if (tmp_assign_source_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_35;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_34 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_34);
        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$auth);
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_requests$auth_79);
        locals_requests$auth_79 = NULL;
        goto try_return_handler_6;
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

        Py_DECREF(locals_requests$auth_79);
        locals_requests$auth_79 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$auth);
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT((PyObject *)outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;

        goto outline_result_2;
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

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(requests$auth);
        return NULL;
        outline_exception_2:;
        exception_lineno = 79;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_HTTPBasicAuth, tmp_assign_source_34);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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

    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_HTTPBasicAuth);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPBasicAuth);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19046 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 100;

            goto try_except_handler_8;
        }

        tmp_tuple_element_8 = tmp_mvar_value_4;
        tmp_assign_source_36 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_8);
        PyTuple_SET_ITEM(tmp_assign_source_36, 0, tmp_tuple_element_8);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_37 = impl___internal__$$$function_3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = PyDict_New();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_bases_name_3;
        tmp_key_name_7 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_7, tmp_key_name_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        tmp_condition_result_13 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_name_8 = const_str_plain_metaclass;
        tmp_metaclass_name_3 = DICT_GET_ITEM(tmp_dict_name_8, tmp_key_name_8);
        if (tmp_metaclass_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        tmp_condition_result_14 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_subscribed_name_3 = tmp_class_creation_3__bases;
        tmp_subscript_name_3 = const_int_0;
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_3, tmp_subscript_name_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        tmp_metaclass_name_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_3);
        condexpr_end_6:;
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_name_3 = tmp_class_creation_3__bases;
        tmp_assign_source_39 = SELECT_METACLASS(tmp_metaclass_name_3, tmp_bases_name_3);
        Py_DECREF(tmp_metaclass_name_3);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_39;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_name_9;
        tmp_key_name_9 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_9, tmp_key_name_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        tmp_condition_result_15 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        branch_no_9:;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_source_name_9 = tmp_class_creation_3__metaclass;
        tmp_res = PyObject_HasAttr(tmp_source_name_9, const_str_plain___prepare__);
        tmp_condition_result_16 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
        branch_yes_10:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kw_name_5;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_source_name_10 = tmp_class_creation_3__metaclass;
            tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain___prepare__);
            if (tmp_called_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto try_except_handler_8;
            }
            tmp_tuple_element_9 = const_str_plain_HTTPProxyAuth;
            tmp_args_name_5 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_args_name_5, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_9 = tmp_class_creation_3__bases;
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_args_name_5, 1, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
            frame_31c5cff77f6e5b2874742d9e052c758b->m_frame.f_lineno = 100;
            tmp_assign_source_40 = CALL_FUNCTION(tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5);
            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_args_name_5);
            if (tmp_assign_source_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto try_except_handler_8;
            }
            assert(tmp_class_creation_3__prepared == NULL);
            tmp_class_creation_3__prepared = tmp_assign_source_40;
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_source_name_11;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_source_name_11 = tmp_class_creation_3__prepared;
            tmp_res = PyObject_HasAttr(tmp_source_name_11, const_str_plain___getitem__);
            tmp_operand_name_3 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto try_except_handler_8;
            }
            tmp_condition_result_17 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto branch_yes_11;
            } else {
                goto branch_no_11;
            }
            branch_yes_11:;
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_raise_value_3;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_tuple_element_10;
                PyObject *tmp_getattr_target_3;
                PyObject *tmp_getattr_attr_3;
                PyObject *tmp_getattr_default_3;
                PyObject *tmp_source_name_12;
                PyObject *tmp_type_arg_6;
                tmp_raise_type_3 = PyExc_TypeError;
                tmp_left_name_3 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT(tmp_class_creation_3__metaclass);
                tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
                tmp_getattr_attr_3 = const_str_plain___name__;
                tmp_getattr_default_3 = const_str_angle_metaclass;
                tmp_tuple_element_10 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
                if (tmp_tuple_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 100;

                    goto try_except_handler_8;
                }
                tmp_right_name_3 = PyTuple_New(2);
                PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_10);
                CHECK_OBJECT(tmp_class_creation_3__prepared);
                tmp_type_arg_6 = tmp_class_creation_3__prepared;
                tmp_source_name_12 = BUILTIN_TYPE1(tmp_type_arg_6);
                assert(!(tmp_source_name_12 == NULL));
                tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain___name__);
                Py_DECREF(tmp_source_name_12);
                if (tmp_tuple_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_right_name_3);

                    exception_lineno = 100;

                    goto try_except_handler_8;
                }
                PyTuple_SET_ITEM(tmp_right_name_3, 1, tmp_tuple_element_10);
                tmp_raise_value_3 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
                Py_DECREF(tmp_right_name_3);
                if (tmp_raise_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 100;

                    goto try_except_handler_8;
                }
                exception_type = tmp_raise_type_3;
                Py_INCREF(tmp_raise_type_3);
                exception_value = tmp_raise_value_3;
                exception_lineno = 100;
                RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

                goto try_except_handler_8;
            }
            branch_no_11:;
        }
        goto branch_end_10;
        branch_no_10:;
        {
            PyObject *tmp_assign_source_41;
            tmp_assign_source_41 = PyDict_New();
            assert(tmp_class_creation_3__prepared == NULL);
            tmp_class_creation_3__prepared = tmp_assign_source_41;
        }
        branch_end_10:;
    }
    {
        PyObject *tmp_assign_source_42;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_requests$auth_100 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_67889f3b65748dbd83938a67635b28e4;
        tmp_res = PyObject_SetItem(locals_requests$auth_100, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_10;
        }
        tmp_dictset_value = const_str_digest_3267db0b9e319da1a85ef722557dd6fe;
        tmp_res = PyObject_SetItem(locals_requests$auth_100, const_str_plain___doc__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_10;
        }
        tmp_dictset_value = const_str_plain_HTTPProxyAuth;
        tmp_res = PyObject_SetItem(locals_requests$auth_100, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_10;
        }
        MAKE_OR_REUSE_FRAME(cache_frame_e736912366e6eb45eed321a89ef225ee_4, codeobj_e736912366e6eb45eed321a89ef225ee, module_requests$auth, sizeof(void *));
        frame_e736912366e6eb45eed321a89ef225ee_4 = cache_frame_e736912366e6eb45eed321a89ef225ee_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_e736912366e6eb45eed321a89ef225ee_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_e736912366e6eb45eed321a89ef225ee_4) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_7___call__();



        tmp_res = PyObject_SetItem(locals_requests$auth_100, const_str_plain___call__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_e736912366e6eb45eed321a89ef225ee_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_e736912366e6eb45eed321a89ef225ee_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e736912366e6eb45eed321a89ef225ee_4, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_e736912366e6eb45eed321a89ef225ee_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e736912366e6eb45eed321a89ef225ee_4, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_e736912366e6eb45eed321a89ef225ee_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame.
        if (frame_e736912366e6eb45eed321a89ef225ee_4 == cache_frame_e736912366e6eb45eed321a89ef225ee_4) {
            Py_DECREF(frame_e736912366e6eb45eed321a89ef225ee_4);
        }
        cache_frame_e736912366e6eb45eed321a89ef225ee_4 = NULL;

        assertFrameObject(frame_e736912366e6eb45eed321a89ef225ee_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_10;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_compexpr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_compexpr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto try_except_handler_10;
            }
            tmp_condition_result_18 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
            branch_yes_12:;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_dictset_value = tmp_class_creation_3__bases_orig;
            tmp_res = PyObject_SetItem(locals_requests$auth_100, const_str_plain___orig_bases__, tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto try_except_handler_10;
            }
            branch_no_12:;
        }
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kw_name_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_name_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_11 = const_str_plain_HTTPProxyAuth;
            tmp_args_name_6 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_11);
            PyTuple_SET_ITEM(tmp_args_name_6, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_11 = tmp_class_creation_3__bases;
            Py_INCREF(tmp_tuple_element_11);
            PyTuple_SET_ITEM(tmp_args_name_6, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_requests$auth_100;
            Py_INCREF(tmp_tuple_element_11);
            PyTuple_SET_ITEM(tmp_args_name_6, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_31c5cff77f6e5b2874742d9e052c758b->m_frame.f_lineno = 100;
            tmp_assign_source_43 = CALL_FUNCTION(tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6);
            Py_DECREF(tmp_args_name_6);
            if (tmp_assign_source_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_43;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_42 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_42);
        goto try_return_handler_10;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$auth);
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_requests$auth_100);
        locals_requests$auth_100 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_requests$auth_100);
        locals_requests$auth_100 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$auth);
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT((PyObject *)outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;

        goto outline_result_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(requests$auth);
        return NULL;
        outline_exception_3:;
        exception_lineno = 100;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_HTTPProxyAuth, tmp_assign_source_42);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;

    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT((PyObject *)tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_AuthBase);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_AuthBase);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21436 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 108;

            goto try_except_handler_11;
        }

        tmp_tuple_element_12 = tmp_mvar_value_5;
        tmp_assign_source_44 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_12);
        PyTuple_SET_ITEM(tmp_assign_source_44, 0, tmp_tuple_element_12);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_45 = impl___internal__$$$function_3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = PyDict_New();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_metaclass_name_4;
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_key_name_10;
        PyObject *tmp_dict_name_10;
        PyObject *tmp_dict_name_11;
        PyObject *tmp_key_name_11;
        nuitka_bool tmp_condition_result_20;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_bases_name_4;
        tmp_key_name_10 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_10, tmp_key_name_10);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_11;
        }
        tmp_condition_result_19 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_name_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_name_11 = const_str_plain_metaclass;
        tmp_metaclass_name_4 = DICT_GET_ITEM(tmp_dict_name_11, tmp_key_name_11);
        if (tmp_metaclass_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_11;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_11;
        }
        tmp_condition_result_20 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_subscribed_name_4 = tmp_class_creation_4__bases;
        tmp_subscript_name_4 = const_int_0;
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_4, tmp_subscript_name_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_11;
        }
        tmp_metaclass_name_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_11;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_4);
        condexpr_end_8:;
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_name_4 = tmp_class_creation_4__bases;
        tmp_assign_source_47 = SELECT_METACLASS(tmp_metaclass_name_4, tmp_bases_name_4);
        Py_DECREF(tmp_metaclass_name_4);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_47;
    }
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_key_name_12;
        PyObject *tmp_dict_name_12;
        tmp_key_name_12 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_12, tmp_key_name_12);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_11;
        }
        tmp_condition_result_21 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
        branch_yes_13:;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_11;
        }
        branch_no_13:;
    }
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_source_name_13;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_source_name_13 = tmp_class_creation_4__metaclass;
        tmp_res = PyObject_HasAttr(tmp_source_name_13, const_str_plain___prepare__);
        tmp_condition_result_22 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
        branch_yes_14:;
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_14;
            PyObject *tmp_args_name_7;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kw_name_7;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_source_name_14 = tmp_class_creation_4__metaclass;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain___prepare__);
            if (tmp_called_name_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto try_except_handler_11;
            }
            tmp_tuple_element_13 = const_str_plain_HTTPDigestAuth;
            tmp_args_name_7 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_13);
            PyTuple_SET_ITEM(tmp_args_name_7, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_13 = tmp_class_creation_4__bases;
            Py_INCREF(tmp_tuple_element_13);
            PyTuple_SET_ITEM(tmp_args_name_7, 1, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;
            frame_31c5cff77f6e5b2874742d9e052c758b->m_frame.f_lineno = 108;
            tmp_assign_source_48 = CALL_FUNCTION(tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_args_name_7);
            if (tmp_assign_source_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto try_except_handler_11;
            }
            assert(tmp_class_creation_4__prepared == NULL);
            tmp_class_creation_4__prepared = tmp_assign_source_48;
        }
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_operand_name_4;
            PyObject *tmp_source_name_15;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_source_name_15 = tmp_class_creation_4__prepared;
            tmp_res = PyObject_HasAttr(tmp_source_name_15, const_str_plain___getitem__);
            tmp_operand_name_4 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto try_except_handler_11;
            }
            tmp_condition_result_23 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
            branch_yes_15:;
            {
                PyObject *tmp_raise_type_4;
                PyObject *tmp_raise_value_4;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_tuple_element_14;
                PyObject *tmp_getattr_target_4;
                PyObject *tmp_getattr_attr_4;
                PyObject *tmp_getattr_default_4;
                PyObject *tmp_source_name_16;
                PyObject *tmp_type_arg_8;
                tmp_raise_type_4 = PyExc_TypeError;
                tmp_left_name_4 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT(tmp_class_creation_4__metaclass);
                tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
                tmp_getattr_attr_4 = const_str_plain___name__;
                tmp_getattr_default_4 = const_str_angle_metaclass;
                tmp_tuple_element_14 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 108;

                    goto try_except_handler_11;
                }
                tmp_right_name_4 = PyTuple_New(2);
                PyTuple_SET_ITEM(tmp_right_name_4, 0, tmp_tuple_element_14);
                CHECK_OBJECT(tmp_class_creation_4__prepared);
                tmp_type_arg_8 = tmp_class_creation_4__prepared;
                tmp_source_name_16 = BUILTIN_TYPE1(tmp_type_arg_8);
                assert(!(tmp_source_name_16 == NULL));
                tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain___name__);
                Py_DECREF(tmp_source_name_16);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_right_name_4);

                    exception_lineno = 108;

                    goto try_except_handler_11;
                }
                PyTuple_SET_ITEM(tmp_right_name_4, 1, tmp_tuple_element_14);
                tmp_raise_value_4 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_4, tmp_right_name_4);
                Py_DECREF(tmp_right_name_4);
                if (tmp_raise_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 108;

                    goto try_except_handler_11;
                }
                exception_type = tmp_raise_type_4;
                Py_INCREF(tmp_raise_type_4);
                exception_value = tmp_raise_value_4;
                exception_lineno = 108;
                RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

                goto try_except_handler_11;
            }
            branch_no_15:;
        }
        goto branch_end_14;
        branch_no_14:;
        {
            PyObject *tmp_assign_source_49;
            tmp_assign_source_49 = PyDict_New();
            assert(tmp_class_creation_4__prepared == NULL);
            tmp_class_creation_4__prepared = tmp_assign_source_49;
        }
        branch_end_14:;
    }
    {
        PyObject *tmp_assign_source_50;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_requests$auth_108 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_67889f3b65748dbd83938a67635b28e4;
        tmp_res = PyObject_SetItem(locals_requests$auth_108, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        tmp_dictset_value = const_str_digest_acf0af13ef75ff62ec9955ae4dcea3e9;
        tmp_res = PyObject_SetItem(locals_requests$auth_108, const_str_plain___doc__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        tmp_dictset_value = const_str_plain_HTTPDigestAuth;
        tmp_res = PyObject_SetItem(locals_requests$auth_108, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        MAKE_OR_REUSE_FRAME(cache_frame_dda5c26f77d009d43e7170e4a2d5b0ae_5, codeobj_dda5c26f77d009d43e7170e4a2d5b0ae, module_requests$auth, sizeof(void *));
        frame_dda5c26f77d009d43e7170e4a2d5b0ae_5 = cache_frame_dda5c26f77d009d43e7170e4a2d5b0ae_5;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_dda5c26f77d009d43e7170e4a2d5b0ae_5);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_dda5c26f77d009d43e7170e4a2d5b0ae_5) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_8___init__();



        tmp_res = PyObject_SetItem(locals_requests$auth_108, const_str_plain___init__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_9_init_per_thread_state();



        tmp_res = PyObject_SetItem(locals_requests$auth_108, const_str_plain_init_per_thread_state, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header();



        tmp_res = PyObject_SetItem(locals_requests$auth_108, const_str_plain_build_digest_header, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_11_handle_redirect();



        tmp_res = PyObject_SetItem(locals_requests$auth_108, const_str_plain_handle_redirect, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_12_handle_401();



        tmp_res = PyObject_SetItem(locals_requests$auth_108, const_str_plain_handle_401, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_13___call__();



        tmp_res = PyObject_SetItem(locals_requests$auth_108, const_str_plain___call__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_14___eq__();



        tmp_res = PyObject_SetItem(locals_requests$auth_108, const_str_plain___eq__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_15___ne__();



        tmp_res = PyObject_SetItem(locals_requests$auth_108, const_str_plain___ne__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_dda5c26f77d009d43e7170e4a2d5b0ae_5);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_dda5c26f77d009d43e7170e4a2d5b0ae_5);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_dda5c26f77d009d43e7170e4a2d5b0ae_5, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_dda5c26f77d009d43e7170e4a2d5b0ae_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_dda5c26f77d009d43e7170e4a2d5b0ae_5, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_dda5c26f77d009d43e7170e4a2d5b0ae_5,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame.
        if (frame_dda5c26f77d009d43e7170e4a2d5b0ae_5 == cache_frame_dda5c26f77d009d43e7170e4a2d5b0ae_5) {
            Py_DECREF(frame_dda5c26f77d009d43e7170e4a2d5b0ae_5);
        }
        cache_frame_dda5c26f77d009d43e7170e4a2d5b0ae_5 = NULL;

        assertFrameObject(frame_dda5c26f77d009d43e7170e4a2d5b0ae_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_13;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_compexpr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_compexpr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto try_except_handler_13;
            }
            tmp_condition_result_24 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
            branch_yes_16:;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_dictset_value = tmp_class_creation_4__bases_orig;
            tmp_res = PyObject_SetItem(locals_requests$auth_108, const_str_plain___orig_bases__, tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto try_except_handler_13;
            }
            branch_no_16:;
        }
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kw_name_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_name_8 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_15 = const_str_plain_HTTPDigestAuth;
            tmp_args_name_8 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_15);
            PyTuple_SET_ITEM(tmp_args_name_8, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_15 = tmp_class_creation_4__bases;
            Py_INCREF(tmp_tuple_element_15);
            PyTuple_SET_ITEM(tmp_args_name_8, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_requests$auth_108;
            Py_INCREF(tmp_tuple_element_15);
            PyTuple_SET_ITEM(tmp_args_name_8, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;
            frame_31c5cff77f6e5b2874742d9e052c758b->m_frame.f_lineno = 108;
            tmp_assign_source_51 = CALL_FUNCTION(tmp_called_name_8, tmp_args_name_8, tmp_kw_name_8);
            Py_DECREF(tmp_args_name_8);
            if (tmp_assign_source_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto try_except_handler_13;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_51;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_50 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_50);
        goto try_return_handler_13;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$auth);
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_requests$auth_108);
        locals_requests$auth_108 = NULL;
        goto try_return_handler_12;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_requests$auth_108);
        locals_requests$auth_108 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$auth);
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT((PyObject *)outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;

        goto outline_result_4;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_4;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(requests$auth);
        return NULL;
        outline_exception_4:;
        exception_lineno = 108;
        goto try_except_handler_11;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_HTTPDigestAuth, tmp_assign_source_50);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;

    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_31c5cff77f6e5b2874742d9e052c758b);
#endif
    popFrameStack();

    assertFrameObject(frame_31c5cff77f6e5b2874742d9e052c758b);

    goto frame_no_exception_5;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_31c5cff77f6e5b2874742d9e052c758b);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_31c5cff77f6e5b2874742d9e052c758b, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_31c5cff77f6e5b2874742d9e052c758b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_31c5cff77f6e5b2874742d9e052c758b, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_5:;
    CHECK_OBJECT((PyObject *)tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;

    CHECK_OBJECT((PyObject *)tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;


    return module_requests$auth;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
