/* Generated code for Python module 'requests.cookies'
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

/* The "_module_requests$cookies" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$cookies;
PyDictObject *moduledict_requests$cookies;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_40890ce8458196445ad3a61ce14829f8;
extern PyObject *const_str_plain_headers;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_dict;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_plain_cookie_in_jar;
static PyObject *const_str_digest_4b43f2b2b4a017f703868c6cc21e7bf0;
static PyObject *const_str_digest_101fa36882b0f5da69e72374403c2c30;
extern PyObject *const_str_plain_object;
static PyObject *const_str_plain_badargs;
extern PyObject *const_str_plain_err;
static PyObject *const_str_digest_5266e491bdb204b2a45e0a788e9bac94;
extern PyObject *const_str_plain_default;
extern PyObject *const_tuple_str_plain_self_str_plain_name_str_plain___class___tuple;
static PyObject *const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple;
extern PyObject *const_str_plain_None;
static PyObject *const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple;
static PyObject *const_str_digest_e43e9402062b1dc16610d92a6e06da93;
static PyObject *const_str_plain_paths;
static PyObject *const_str_digest_5260d4b30ca681b2742e6bf6cec4b74a;
static PyObject *const_str_digest_aba783cd55ce183297e8f8d9ff1dc698;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_str_plain_MutableMapping;
static PyObject *const_str_digest_9559440875cf716ec7a8bef311cbaefe;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_time;
static PyObject *const_str_digest_5c9dad01a3c84d4b998a25c6f245d693;
static PyObject *const_str_plain_time_template;
static PyObject *const_str_digest_58821042b0e0d98cc3b40076b38affdd;
static PyObject *const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple;
extern PyObject *const_str_plain_path;
static PyObject *const_str_digest_ef5ef54fd7fab3dbc34eb13a254678ee;
extern PyObject *const_str_plain_iteritems;
extern PyObject *const_tuple_str_dot_tuple;
static PyObject *const_str_plain_get_new_headers;
static PyObject *const_str_plain_calendar;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_endswith;
static PyObject *const_str_digest_d4e8bce3e52a50e29fc0c09bd0f73e7f;
static PyObject *const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple;
static PyObject *const_str_plain_rfc2109;
static PyObject *const_str_plain_path_specified;
extern PyObject *const_str_plain_Host;
static PyObject *const_str_digest_edb2a15c85f24da38984c0b5356f21c0;
static PyObject *const_str_digest_f2419ba08dedfa0db3c34c39eaf2eb5d;
static PyObject *const_str_digest_bb11d917f97bb6215fd11706382927d9;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___contains__;
static PyObject *const_str_digest_ea904bab707be16235fbd17c19767f9f;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_str_plain_pop;
static PyObject *const_str_plain__cookies_lock;
extern PyObject *const_int_0;
extern PyObject *const_str_plain__original_response;
extern PyObject *const_str_plain_response;
extern PyObject *const_str_plain_cookies;
extern PyObject *const_str_plain_extract_cookies_to_jar;
static PyObject *const_str_digest_c6a3c61d8189ea3789c38808f9f3af27;
extern PyObject *const_str_plain_to_native_string;
extern PyObject *const_str_plain_type;
static PyObject *const_dict_81b3970727674c20ce12b1a4757dad21;
static PyObject *const_tuple_str_plain_self_str_plain_cookie_tuple;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_85e0ea626320458ddd4363cffbfdc559;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_08b25300475453472c10345ee7168b50;
static PyObject *const_str_digest_572b1e9f5dc0656103cb358a7cbea16a;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_port;
static PyObject *const_str_digest_2fd659d0d93422f0a9d09e643f3b5831;
static PyObject *const_str_digest_58ff5aeca7b13e22937ae8b6a9a6b876;
extern PyObject *const_str_plain_other;
static PyObject *const_str_digest_b270aaa39204bf1a293395efb6982c3e;
extern PyObject *const_str_plain_state;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_getheaders;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_itervalues;
extern PyObject *const_str_plain_merge_cookies;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple;
extern PyObject *const_str_plain_property;
extern PyObject *const_str_plain_startswith;
static PyObject *const_str_plain_dummy_threading;
extern PyObject *const_str_plain_threading;
static PyObject *const_str_plain_set;
static PyObject *const_str_digest_c9dd2760a1399f089d616717f6e41ae2;
static PyObject *const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple;
static PyObject *const_tuple_str_plain_path_tuple;
static PyObject *const_str_digest_8282cde113cd2232a516d421ec587b65;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_MockRequest;
static PyObject *const_tuple_str_chr_34_tuple;
static PyObject *const_str_digest_8faacd955b01a83efbe637cdfe6a3d3e;
static PyObject *const_str_digest_05ffb5bc39cd46e6936de7ec055f15aa;
static PyObject *const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple;
static PyObject *const_str_digest_0a2127aa931e582083c667383d216ebd;
extern PyObject *const_str_plain_fragment;
static PyObject *const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple;
static PyObject *const_str_digest_d3a4a40c67458b1207db4bc7ab20d310;
static PyObject *const_str_plain_get_type;
static PyObject *const_str_digest_445933e6a124a5d41f1f32e33f377bc9;
static PyObject *const_str_plain_set_cookie;
static PyObject *const_str_digest_0d84ffc2aed365c467af25f17254de9e;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_urlparse;
static PyObject *const_str_plain_MockResponse;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_1ffe275872914b64c240c8cb178005ea;
extern PyObject *const_str_plain_get_cookie_header;
extern PyObject *const_str_plain_iterkeys;
static PyObject *const_str_digest_33e1091efb89a5aa5c06480eca194fed;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_netloc;
static PyObject *const_dict_a5e68083723d45b7dd5e500852a4245b;
static PyObject *const_str_plain_comment;
extern PyObject *const_str_plain_cookiejar;
static PyObject *const_str_plain_add_unredirected_header;
extern PyObject *const_tuple_str_plain_self_str_plain_key_str_plain_val_tuple;
static PyObject *const_str_digest_2041229f0580a80f49d71dc1aca7539f;
static PyObject *const_str_plain_domain_specified;
static PyObject *const_str_plain_timegm;
static PyObject *const_str_digest_955b7d6fef0bcb66b462d15cb6f41169;
static PyObject *const_str_plain_list_domains;
extern PyObject *const_tuple_str_plain_self_str_plain_state_tuple;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_2a2d5b06d38da952ad812a68992fbb10;
static PyObject *const_tuple_str_plain__cookies_lock_tuple;
static PyObject *const_str_plain_new_cj;
static PyObject *const_str_digest_ccf021f29934e59f3e942390d0f913c3;
extern PyObject *const_tuple_none_true_tuple;
static PyObject *const_str_digest_94ebad60c38a4f103db32744a5bab84d;
static PyObject *const_tuple_str_plain_jar_str_plain_new_jar_str_plain_cookie_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_tuple_str_plain_self_str_plain_name_tuple;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_parsed;
static PyObject *const_str_plain_CookieConflictError;
extern PyObject *const_str_plain__copy_cookie_jar;
static PyObject *const_str_digest_8b10821fa8021c1e4a37a0c86a1d66c3;
static PyObject *const_tuple_95c52f105bd16b9093b126943b0df3d1_tuple;
static PyObject *const_str_plain_expires;
extern PyObject *const_str_plain_req;
static PyObject *const_str_digest_3bf0be43034abaeba92e7fa09bcc93d6;
extern PyObject *const_str_chr_47;
static PyObject *const_str_digest_dcd45b6ff6ecc7b26e302a149b58c85c;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_384c88e858c00a2981bdb05550c007ba;
static PyObject *const_str_digest_9bc80f2115d22815a80849e3086128b4;
extern PyObject *const_str_plain_cookiejar_from_dict;
static PyObject *const_str_plain_dictionary;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_version;
extern PyObject *const_str_plain_compat;
static PyObject *const_str_digest_b04a12651fd966784023636e22761d12;
extern PyObject *const_str_plain_RLock;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_empty;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_str_plain_list_paths;
static PyObject *const_tuple_str_plain_Cookie_tuple;
static PyObject *const_str_digest_4ab8b826d3a2372d4ae105e9807fdce0;
static PyObject *const_str_plain_set_policy;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_request;
static PyObject *const_str_digest_e02118ec259954e10ca6d6356803797f;
static PyObject *const_str_plain_toReturn;
static PyObject *const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple;
extern PyObject *const_str_plain__internal_utils;
static PyObject *const_str_plain_new_jar;
extern PyObject *const_str_plain_scheme;
static PyObject *const_str_digest_4ab2fe2bbda6a46b67fc97895794a2a7;
static PyObject *const_str_digest_8d200ac749deb0ed034c3f2346adcc3d;
static PyObject *const_str_plain_httponly;
static PyObject *const_tuple_ca917a44106411b262150e155c627a6c_tuple;
static PyObject *const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple;
extern PyObject *const_str_plain_get_host;
static PyObject *const_str_plain_domains;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_44db063164c966fa5386728c86c1a06f;
static PyObject *const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d;
extern PyObject *const_str_plain_cookielib;
static PyObject *const_str_plain_morsel_to_cookie;
static PyObject *const_str_digest_741e4a7055b20857d935a0f7ed1c4abe;
static PyObject *const_str_digest_ad2094029011821e111452c0603108d0;
static PyObject *const_str_digest_b19ae27d1753e06c28990a42518b1f44;
static PyObject *const_str_digest_0cf04dad003066735b1fdc1881f334a1;
static PyObject *const_str_digest_a90c9fe31ac91c19721e9fd9e6cf64bd;
static PyObject *const_str_plain_is_unverifiable;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_abdee8d713fb97eeec5c94da3e6ee72f;
static PyObject *const_str_digest_8aeec5b3f7298c5bac1e129b6ee9f59f;
extern PyObject *const_str_plain__r;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_2fb13ce01af8e322e1090db877e250bd;
static PyObject *const_str_plain_unverifiable;
extern PyObject *const_str_plain_append;
static PyObject *const_tuple_str_plain_Host_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple;
static PyObject *const_str_digest_59f19da226d4479328efe53726a2e397;
static PyObject *const_str_plain_has_header;
static PyObject *const_str_digest_58322b83779ad7d89ba5c63e2fe2855c;
static PyObject *const_str_plain_HttpOnly;
extern PyObject *const_str_plain_cookie_dict;
static PyObject *const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple;
extern PyObject *const_str_plain___setstate__;
static PyObject *const_str_digest_5427312272820286dba5b26f263d4c79;
extern PyObject *const_str_plain_val;
extern PyObject *const_str_plain_Cookie;
extern PyObject *const_str_plain_msg;
static PyObject *const_tuple_str_plain_self_str_plain_new_cj_tuple;
static PyObject *const_str_digest_dc064d287eb15bd1175f79fc7fcc5d69;
static PyObject *const_str_digest_a9d19ccf5848be851d2f630cfe17789d;
static PyObject *const_str_plain__new_headers;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_digest_c245c8a772b3a33119deac8565a08f57;
static PyObject *const_str_digest_b32fff81b34b2c7f10c1d1dc66bbef6d;
extern PyObject *const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple;
static PyObject *const_tuple_str_plain_cookie_tuple;
extern PyObject *const_str_plain___class__;
static PyObject *const_tuple_str_plain_self_str_plain_request_tuple;
static PyObject *const_str_plain_comment_url;
static PyObject *const_str_plain_get_policy;
static PyObject *const_str_plain_get_origin_req_host;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_138ef95cec671591d9bedfa7e0898703;
static PyObject *const_str_digest_95cacfdffdeafa2154ddb2520f2fb58f;
extern PyObject *const_str_plain_update;
extern PyObject *const_str_plain___getstate__;
static PyObject *const_str_plain_morsel;
static PyObject *const_str_digest_b30191bdb52236874918a4b5c3c5db8b;
static PyObject *const_str_plain_extract_cookies;
static PyObject *const_str_digest_f0c7ff82cbfe26b2f3f1df333f77ef1b;
extern PyObject *const_str_plain_urlunparse;
static PyObject *const_str_plain_port_specified;
static PyObject *const_str_plain_jar;
static PyObject *const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple;
extern PyObject *const_str_plain_get;
static PyObject *const_str_plain__policy;
static PyObject *const_str_plain_get_full_url;
static PyObject *const_str_plain_origin_req_host;
extern PyObject *const_str_plain_Morsel;
extern PyObject *const_tuple_type_RuntimeError_tuple;
extern PyObject *const_str_plain___delitem__;
static PyObject *const_str_digest_4f8d8ada6928f5a67aefe24138a8c253;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_plain_multiple_domains;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_str_digest_7fad1f4acdf828076344bcbd2f3093fc;
extern PyObject *const_str_plain_args;
static PyObject *const_str_plain_get_header;
extern PyObject *const_str_plain_items;
static PyObject *const_str_plain_domain_initial_dot;
static PyObject *const_tuple_0a21cfa0564c2ba78573baca86543185_tuple;
static PyObject *const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d;
static PyObject *const_str_plain__find_no_duplicates;
extern PyObject *const_str_dot;
static PyObject *const_str_plain__headers;
extern PyObject *const_str_plain_res;
extern PyObject *const_tuple_str_plain_to_native_string_tuple;
static PyObject *const_str_plain_names_from_jar;
extern PyObject *const_str_plain_host;
static PyObject *const_str_plain_create_cookie;
static PyObject *const_str_digest_c99227a29db521837b47fa67726c6a3c;
static PyObject *const_str_digest_573342b2a8e1af18fbe63f15ee63f11b;
extern PyObject *const_str_plain_query;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_domain;
static PyObject *const_str_digest_2aa7f18650b70bafed61b449ab43cbad;
extern PyObject *const_str_plain_strptime;
static PyObject *const_str_digest_12188133309ffc390643b7a732954d08;
static PyObject *const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple;
extern PyObject *const_str_plain_r;
static PyObject *const_str_digest_80fe00ea301d02293abaf9dea17cddac;
static PyObject *const_str_plain_add_cookie_header;
static PyObject *const_str_plain_get_dict;
extern PyObject *const_str_plain_rest;
extern PyObject *const_str_plain_encoding;
static PyObject *const_str_digest_b7276b78dcacf789cb138b9c3e16bfe6;
static PyObject *const_str_plain_overwrite;
static PyObject *const_str_digest_6f0eeed3729339eac6c86da181041a13;
static PyObject *const_str_digest_fb0e88f14b774d1e98d525584951eabc;
extern PyObject *const_str_angle_listcomp;
static PyObject *const_str_digest_28c35b2d382d530cb9f8e567735ee113;
static PyObject *const_str_digest_b1346a1fb1e8adfe69a204b827c8b2a3;
static PyObject *const_str_plain__find;
static PyObject *const_str_plain_clearables;
static PyObject *const_str_digest_dd3cc005839efdfe1c3c0f3b070086ba;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_tuple_b775387ae1f097f6a84b2e2acdad630d_tuple;
extern PyObject *const_str_plain_params;
extern PyObject *const_str_plain_RequestsCookieJar;
static PyObject *const_tuple_831032f065cd3258ed8a4829c50bfee2_tuple;
extern PyObject *const_str_plain_values;
static PyObject *const_str_digest_59021ee0ac4a578b9169d1a96b78e1da;
static PyObject *const_str_digest_0d043b9a6c2c506833bb59840ef22ffd;
extern PyObject *const_str_chr_34;
static PyObject *const_tuple_4631647c2089dc0399d32b223bd5e1cc_tuple;
extern PyObject *const_str_plain___setitem__;
static PyObject *const_str_plain_add_header;
static PyObject *const_str_digest_d61c39e15f1f0b76bd46a71165e3bbe6;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_clear;
extern PyObject *const_str_plain_CookieJar;
static PyObject *const_str_plain_remove_cookie_by_name;
extern PyObject *const_str_plain_discard;
static PyObject *const_str_plain_secure;
static PyObject *const_tuple_str_plain_domain_tuple;
static PyObject *const_str_digest_6d23da7eceea3baa2298ffd89ccc62c5;
extern PyObject *const_tuple_str_plain_self_str_plain_headers_tuple;
extern PyObject *const_str_plain_cookie;
static PyObject *const_str_digest_2074f4b4dde671f06897bcc11d0d41da;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_digest_40890ce8458196445ad3a61ce14829f8 = UNSTREAM_STRING_ASCII(&constant_bin[ 645853 ], 27, 0);
    const_str_plain_cookie_in_jar = UNSTREAM_STRING_ASCII(&constant_bin[ 645880 ], 13, 1);
    const_str_digest_4b43f2b2b4a017f703868c6cc21e7bf0 = UNSTREAM_STRING_ASCII(&constant_bin[ 645893 ], 31, 0);
    const_str_digest_101fa36882b0f5da69e72374403c2c30 = UNSTREAM_STRING_ASCII(&constant_bin[ 645924 ], 108, 0);
    const_str_plain_badargs = UNSTREAM_STRING_ASCII(&constant_bin[ 646032 ], 7, 1);
    const_str_digest_5266e491bdb204b2a45e0a788e9bac94 = UNSTREAM_STRING_ASCII(&constant_bin[ 646039 ], 50, 0);
    const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain_paths = UNSTREAM_STRING_ASCII(&constant_bin[ 19816 ], 5, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple, 1, const_str_plain_paths); Py_INCREF(const_str_plain_paths);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple, 2, const_str_plain_cookie); Py_INCREF(const_str_plain_cookie);
    const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple, 0, const_str_digest_c245c8a772b3a33119deac8565a08f57); Py_INCREF(const_str_digest_c245c8a772b3a33119deac8565a08f57);
    PyTuple_SET_ITEM(const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple, 1, const_str_empty); Py_INCREF(const_str_empty);
    const_str_digest_e43e9402062b1dc16610d92a6e06da93 = UNSTREAM_STRING_ASCII(&constant_bin[ 646089 ], 20, 0);
    const_str_digest_5260d4b30ca681b2742e6bf6cec4b74a = UNSTREAM_STRING_ASCII(&constant_bin[ 646109 ], 21, 0);
    const_str_digest_aba783cd55ce183297e8f8d9ff1dc698 = UNSTREAM_STRING_ASCII(&constant_bin[ 646130 ], 26, 0);
    const_str_digest_9559440875cf716ec7a8bef311cbaefe = UNSTREAM_STRING_ASCII(&constant_bin[ 646156 ], 26, 0);
    const_str_digest_5c9dad01a3c84d4b998a25c6f245d693 = UNSTREAM_STRING_ASCII(&constant_bin[ 646182 ], 65, 0);
    const_str_plain_time_template = UNSTREAM_STRING_ASCII(&constant_bin[ 646247 ], 13, 1);
    const_str_digest_58821042b0e0d98cc3b40076b38affdd = UNSTREAM_STRING_ASCII(&constant_bin[ 646260 ], 48, 0);
    const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple, 1, const_str_plain_domain); Py_INCREF(const_str_plain_domain);
    PyTuple_SET_ITEM(const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple, 2, const_str_plain_path); Py_INCREF(const_str_plain_path);
    const_str_plain_dictionary = UNSTREAM_STRING_ASCII(&constant_bin[ 383920 ], 10, 1);
    PyTuple_SET_ITEM(const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple, 3, const_str_plain_dictionary); Py_INCREF(const_str_plain_dictionary);
    PyTuple_SET_ITEM(const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple, 4, const_str_plain_cookie); Py_INCREF(const_str_plain_cookie);
    const_str_digest_ef5ef54fd7fab3dbc34eb13a254678ee = UNSTREAM_STRING_ASCII(&constant_bin[ 646308 ], 40, 0);
    const_str_plain_get_new_headers = UNSTREAM_STRING_ASCII(&constant_bin[ 646348 ], 15, 1);
    const_str_plain_calendar = UNSTREAM_STRING_ASCII(&constant_bin[ 21880 ], 8, 1);
    const_str_digest_d4e8bce3e52a50e29fc0c09bd0f73e7f = UNSTREAM_STRING_ASCII(&constant_bin[ 646363 ], 236, 0);
    const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple = PyTuple_New(5);
    const_str_plain_jar = UNSTREAM_STRING_ASCII(&constant_bin[ 20056 ], 3, 1);
    PyTuple_SET_ITEM(const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple, 0, const_str_plain_jar); Py_INCREF(const_str_plain_jar);
    PyTuple_SET_ITEM(const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple, 1, const_str_plain_request); Py_INCREF(const_str_plain_request);
    PyTuple_SET_ITEM(const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple, 2, const_str_plain_response); Py_INCREF(const_str_plain_response);
    PyTuple_SET_ITEM(const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple, 3, const_str_plain_req); Py_INCREF(const_str_plain_req);
    PyTuple_SET_ITEM(const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple, 4, const_str_plain_res); Py_INCREF(const_str_plain_res);
    const_str_plain_rfc2109 = UNSTREAM_STRING_ASCII(&constant_bin[ 646599 ], 7, 1);
    const_str_plain_path_specified = UNSTREAM_STRING_ASCII(&constant_bin[ 646606 ], 14, 1);
    const_str_digest_edb2a15c85f24da38984c0b5356f21c0 = UNSTREAM_STRING_ASCII(&constant_bin[ 646620 ], 24, 0);
    const_str_digest_f2419ba08dedfa0db3c34c39eaf2eb5d = UNSTREAM_STRING_ASCII(&constant_bin[ 646644 ], 163, 0);
    const_str_digest_bb11d917f97bb6215fd11706382927d9 = UNSTREAM_STRING_ASCII(&constant_bin[ 646807 ], 211, 0);
    const_str_digest_ea904bab707be16235fbd17c19767f9f = UNSTREAM_STRING_ASCII(&constant_bin[ 647018 ], 21, 0);
    const_str_plain__cookies_lock = UNSTREAM_STRING_ASCII(&constant_bin[ 647039 ], 13, 1);
    const_str_digest_c6a3c61d8189ea3789c38808f9f3af27 = UNSTREAM_STRING_ASCII(&constant_bin[ 647052 ], 689, 0);
    const_dict_81b3970727674c20ce12b1a4757dad21 = _PyDict_NewPresized( 1 );
    PyDict_SetItem(const_dict_81b3970727674c20ce12b1a4757dad21, const_str_plain_encoding, const_str_digest_c075052d723d6707083e869a0e3659bb);
    assert(PyDict_Size(const_dict_81b3970727674c20ce12b1a4757dad21) == 1);
    const_tuple_str_plain_self_str_plain_cookie_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_cookie_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_cookie_tuple, 1, const_str_plain_cookie); Py_INCREF(const_str_plain_cookie);
    const_str_digest_85e0ea626320458ddd4363cffbfdc559 = UNSTREAM_STRING_ASCII(&constant_bin[ 647741 ], 323, 0);
    const_str_digest_08b25300475453472c10345ee7168b50 = UNSTREAM_STRING_ASCII(&constant_bin[ 648064 ], 255, 0);
    const_str_digest_572b1e9f5dc0656103cb358a7cbea16a = UNSTREAM_STRING_ASCII(&constant_bin[ 648319 ], 22, 0);
    const_str_digest_2fd659d0d93422f0a9d09e643f3b5831 = UNSTREAM_STRING_ASCII(&constant_bin[ 648341 ], 30, 0);
    const_str_digest_58ff5aeca7b13e22937ae8b6a9a6b876 = UNSTREAM_STRING_ASCII(&constant_bin[ 648371 ], 132, 0);
    const_str_digest_b270aaa39204bf1a293395efb6982c3e = UNSTREAM_STRING_ASCII(&constant_bin[ 648503 ], 37, 0);
    const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple, 1, const_str_plain_name); Py_INCREF(const_str_plain_name);
    PyTuple_SET_ITEM(const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple, 2, const_str_plain_domain); Py_INCREF(const_str_plain_domain);
    PyTuple_SET_ITEM(const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple, 3, const_str_plain_path); Py_INCREF(const_str_plain_path);
    PyTuple_SET_ITEM(const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple, 4, const_str_plain_cookie); Py_INCREF(const_str_plain_cookie);
    const_str_plain_dummy_threading = UNSTREAM_STRING_ASCII(&constant_bin[ 648540 ], 15, 1);
    const_str_plain_set = UNSTREAM_STRING_ASCII(&constant_bin[ 6070 ], 3, 1);
    const_str_digest_c9dd2760a1399f089d616717f6e41ae2 = UNSTREAM_STRING_ASCII(&constant_bin[ 648555 ], 25, 0);
    const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain_domains = UNSTREAM_STRING_ASCII(&constant_bin[ 646070 ], 7, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple, 1, const_str_plain_domains); Py_INCREF(const_str_plain_domains);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple, 2, const_str_plain_cookie); Py_INCREF(const_str_plain_cookie);
    const_tuple_str_plain_path_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_path_tuple, 0, const_str_plain_path); Py_INCREF(const_str_plain_path);
    const_str_digest_8282cde113cd2232a516d421ec587b65 = UNSTREAM_STRING_ASCII(&constant_bin[ 648580 ], 149, 0);
    const_str_plain_MockRequest = UNSTREAM_STRING_ASCII(&constant_bin[ 21558 ], 11, 1);
    const_tuple_str_chr_34_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_chr_34_tuple, 0, const_str_chr_34); Py_INCREF(const_str_chr_34);
    const_str_digest_8faacd955b01a83efbe637cdfe6a3d3e = UNSTREAM_STRING_ASCII(&constant_bin[ 648729 ], 24, 0);
    const_str_digest_05ffb5bc39cd46e6936de7ec055f15aa = UNSTREAM_STRING_ASCII(&constant_bin[ 648753 ], 38, 0);
    const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple = PyTuple_New(3);
    const_str_plain_morsel = UNSTREAM_STRING_ASCII(&constant_bin[ 21696 ], 6, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple, 0, const_str_plain_morsel); Py_INCREF(const_str_plain_morsel);
    const_str_plain_expires = UNSTREAM_STRING_ASCII(&constant_bin[ 465650 ], 7, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple, 1, const_str_plain_expires); Py_INCREF(const_str_plain_expires);
    PyTuple_SET_ITEM(const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple, 2, const_str_plain_time_template); Py_INCREF(const_str_plain_time_template);
    const_str_digest_0a2127aa931e582083c667383d216ebd = UNSTREAM_STRING_ASCII(&constant_bin[ 648791 ], 28, 0);
    const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple, 1, const_str_plain_host); Py_INCREF(const_str_plain_host);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple, 2, const_str_plain_parsed); Py_INCREF(const_str_plain_parsed);
    const_str_digest_d3a4a40c67458b1207db4bc7ab20d310 = UNSTREAM_STRING_ASCII(&constant_bin[ 648819 ], 190, 0);
    const_str_plain_get_type = UNSTREAM_STRING_ASCII(&constant_bin[ 649009 ], 8, 1);
    const_str_digest_445933e6a124a5d41f1f32e33f377bc9 = UNSTREAM_STRING_ASCII(&constant_bin[ 649017 ], 20, 0);
    const_str_plain_set_cookie = UNSTREAM_STRING_ASCII(&constant_bin[ 649037 ], 10, 1);
    const_str_digest_0d84ffc2aed365c467af25f17254de9e = UNSTREAM_STRING_ASCII(&constant_bin[ 649047 ], 17, 0);
    const_str_plain_MockResponse = UNSTREAM_STRING_ASCII(&constant_bin[ 21591 ], 12, 1);
    const_str_digest_1ffe275872914b64c240c8cb178005ea = UNSTREAM_STRING_ASCII(&constant_bin[ 649064 ], 27, 0);
    const_str_digest_33e1091efb89a5aa5c06480eca194fed = UNSTREAM_STRING_ASCII(&constant_bin[ 649091 ], 498, 0);
    const_dict_a5e68083723d45b7dd5e500852a4245b = _PyDict_NewPresized( 1 );
    const_str_plain_HttpOnly = UNSTREAM_STRING_ASCII(&constant_bin[ 649589 ], 8, 1);
    PyDict_SetItem(const_dict_a5e68083723d45b7dd5e500852a4245b, const_str_plain_HttpOnly, Py_None);
    assert(PyDict_Size(const_dict_a5e68083723d45b7dd5e500852a4245b) == 1);
    const_str_plain_comment = UNSTREAM_STRING_ASCII(&constant_bin[ 649597 ], 7, 1);
    const_str_plain_add_unredirected_header = UNSTREAM_STRING_ASCII(&constant_bin[ 649604 ], 23, 1);
    const_str_digest_2041229f0580a80f49d71dc1aca7539f = UNSTREAM_STRING_ASCII(&constant_bin[ 649627 ], 23, 0);
    const_str_plain_domain_specified = UNSTREAM_STRING_ASCII(&constant_bin[ 649650 ], 16, 1);
    const_str_plain_timegm = UNSTREAM_STRING_ASCII(&constant_bin[ 649666 ], 6, 1);
    const_str_digest_955b7d6fef0bcb66b462d15cb6f41169 = UNSTREAM_STRING_ASCII(&constant_bin[ 649672 ], 173, 0);
    const_str_plain_list_domains = UNSTREAM_STRING_ASCII(&constant_bin[ 649845 ], 12, 1);
    const_str_digest_2a2d5b06d38da952ad812a68992fbb10 = UNSTREAM_STRING_ASCII(&constant_bin[ 649857 ], 22, 0);
    const_tuple_str_plain__cookies_lock_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain__cookies_lock_tuple, 0, const_str_plain__cookies_lock); Py_INCREF(const_str_plain__cookies_lock);
    const_str_plain_new_cj = UNSTREAM_STRING_ASCII(&constant_bin[ 649879 ], 6, 1);
    const_str_digest_ccf021f29934e59f3e942390d0f913c3 = UNSTREAM_STRING_ASCII(&constant_bin[ 649885 ], 22, 0);
    const_str_digest_94ebad60c38a4f103db32744a5bab84d = UNSTREAM_STRING_ASCII(&constant_bin[ 649907 ], 149, 0);
    const_tuple_str_plain_jar_str_plain_new_jar_str_plain_cookie_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_jar_str_plain_new_jar_str_plain_cookie_tuple, 0, const_str_plain_jar); Py_INCREF(const_str_plain_jar);
    const_str_plain_new_jar = UNSTREAM_STRING_ASCII(&constant_bin[ 650056 ], 7, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_jar_str_plain_new_jar_str_plain_cookie_tuple, 1, const_str_plain_new_jar); Py_INCREF(const_str_plain_new_jar);
    PyTuple_SET_ITEM(const_tuple_str_plain_jar_str_plain_new_jar_str_plain_cookie_tuple, 2, const_str_plain_cookie); Py_INCREF(const_str_plain_cookie);
    const_str_plain_CookieConflictError = UNSTREAM_STRING_ASCII(&constant_bin[ 21808 ], 19, 1);
    const_str_digest_8b10821fa8021c1e4a37a0c86a1d66c3 = UNSTREAM_STRING_ASCII(&constant_bin[ 650063 ], 29, 0);
    const_tuple_95c52f105bd16b9093b126943b0df3d1_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_95c52f105bd16b9093b126943b0df3d1_tuple, 0, const_str_plain_cookiejar); Py_INCREF(const_str_plain_cookiejar);
    PyTuple_SET_ITEM(const_tuple_95c52f105bd16b9093b126943b0df3d1_tuple, 1, const_str_plain_cookies); Py_INCREF(const_str_plain_cookies);
    PyTuple_SET_ITEM(const_tuple_95c52f105bd16b9093b126943b0df3d1_tuple, 2, const_str_plain_cookie_in_jar); Py_INCREF(const_str_plain_cookie_in_jar);
    const_str_digest_3bf0be43034abaeba92e7fa09bcc93d6 = UNSTREAM_STRING_ASCII(&constant_bin[ 650092 ], 28, 0);
    const_str_digest_dcd45b6ff6ecc7b26e302a149b58c85c = UNSTREAM_STRING_ASCII(&constant_bin[ 650120 ], 505, 0);
    const_str_digest_384c88e858c00a2981bdb05550c007ba = UNSTREAM_STRING_ASCII(&constant_bin[ 650625 ], 27, 0);
    const_str_digest_9bc80f2115d22815a80849e3086128b4 = UNSTREAM_STRING_ASCII(&constant_bin[ 648503 ], 23, 0);
    const_str_digest_b04a12651fd966784023636e22761d12 = UNSTREAM_STRING_ASCII(&constant_bin[ 650652 ], 245, 0);
    const_str_plain_list_paths = UNSTREAM_STRING_ASCII(&constant_bin[ 650897 ], 10, 1);
    const_tuple_str_plain_Cookie_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_Cookie_tuple, 0, const_str_plain_Cookie); Py_INCREF(const_str_plain_Cookie);
    const_str_digest_4ab8b826d3a2372d4ae105e9807fdce0 = UNSTREAM_STRING_ASCII(&constant_bin[ 646130 ], 21, 0);
    const_str_plain_set_policy = UNSTREAM_STRING_ASCII(&constant_bin[ 650907 ], 10, 1);
    const_str_digest_e02118ec259954e10ca6d6356803797f = UNSTREAM_STRING_ASCII(&constant_bin[ 650917 ], 192, 0);
    const_str_plain_toReturn = UNSTREAM_STRING_ASCII(&constant_bin[ 651109 ], 8, 1);
    const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple, 0, const_str_plain_cookie_dict); Py_INCREF(const_str_plain_cookie_dict);
    PyTuple_SET_ITEM(const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple, 1, const_str_plain_cookiejar); Py_INCREF(const_str_plain_cookiejar);
    const_str_plain_overwrite = UNSTREAM_STRING_ASCII(&constant_bin[ 366759 ], 9, 1);
    PyTuple_SET_ITEM(const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple, 2, const_str_plain_overwrite); Py_INCREF(const_str_plain_overwrite);
    const_str_plain_names_from_jar = UNSTREAM_STRING_ASCII(&constant_bin[ 651117 ], 14, 1);
    PyTuple_SET_ITEM(const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple, 3, const_str_plain_names_from_jar); Py_INCREF(const_str_plain_names_from_jar);
    PyTuple_SET_ITEM(const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple, 4, const_str_plain_name); Py_INCREF(const_str_plain_name);
    const_str_digest_4ab2fe2bbda6a46b67fc97895794a2a7 = UNSTREAM_STRING_ASCII(&constant_bin[ 651131 ], 24, 0);
    const_str_digest_8d200ac749deb0ed034c3f2346adcc3d = UNSTREAM_STRING_ASCII(&constant_bin[ 651155 ], 25, 0);
    const_str_plain_httponly = UNSTREAM_STRING_ASCII(&constant_bin[ 651180 ], 8, 1);
    const_tuple_ca917a44106411b262150e155c627a6c_tuple = PyTuple_New(6);
    PyTuple_SET_ITEM(const_tuple_ca917a44106411b262150e155c627a6c_tuple, 0, const_str_plain_cookiejar); Py_INCREF(const_str_plain_cookiejar);
    PyTuple_SET_ITEM(const_tuple_ca917a44106411b262150e155c627a6c_tuple, 1, const_str_plain_name); Py_INCREF(const_str_plain_name);
    PyTuple_SET_ITEM(const_tuple_ca917a44106411b262150e155c627a6c_tuple, 2, const_str_plain_domain); Py_INCREF(const_str_plain_domain);
    PyTuple_SET_ITEM(const_tuple_ca917a44106411b262150e155c627a6c_tuple, 3, const_str_plain_path); Py_INCREF(const_str_plain_path);
    const_str_plain_clearables = UNSTREAM_STRING_ASCII(&constant_bin[ 651188 ], 10, 1);
    PyTuple_SET_ITEM(const_tuple_ca917a44106411b262150e155c627a6c_tuple, 4, const_str_plain_clearables); Py_INCREF(const_str_plain_clearables);
    PyTuple_SET_ITEM(const_tuple_ca917a44106411b262150e155c627a6c_tuple, 5, const_str_plain_cookie); Py_INCREF(const_str_plain_cookie);
    const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple, 1, const_str_plain_name); Py_INCREF(const_str_plain_name);
    PyTuple_SET_ITEM(const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple, 2, const_str_plain_value); Py_INCREF(const_str_plain_value);
    PyTuple_SET_ITEM(const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple, 3, const_str_plain_kwargs); Py_INCREF(const_str_plain_kwargs);
    PyTuple_SET_ITEM(const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple, 4, const_str_plain_c); Py_INCREF(const_str_plain_c);
    const_str_digest_44db063164c966fa5386728c86c1a06f = UNSTREAM_STRING_ASCII(&constant_bin[ 651198 ], 27, 0);
    const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d = UNSTREAM_STRING_ASCII(&constant_bin[ 651225 ], 27, 0);
    const_str_plain_morsel_to_cookie = UNSTREAM_STRING_ASCII(&constant_bin[ 21696 ], 16, 1);
    const_str_digest_741e4a7055b20857d935a0f7ed1c4abe = UNSTREAM_STRING_ASCII(&constant_bin[ 651252 ], 227, 0);
    const_str_digest_ad2094029011821e111452c0603108d0 = UNSTREAM_STRING_ASCII(&constant_bin[ 651479 ], 23, 0);
    const_str_digest_b19ae27d1753e06c28990a42518b1f44 = UNSTREAM_STRING_ASCII(&constant_bin[ 651502 ], 22, 0);
    const_str_digest_0cf04dad003066735b1fdc1881f334a1 = UNSTREAM_STRING_ASCII(&constant_bin[ 651524 ], 30, 0);
    const_str_digest_a90c9fe31ac91c19721e9fd9e6cf64bd = UNSTREAM_STRING_ASCII(&constant_bin[ 651554 ], 107, 0);
    const_str_plain_is_unverifiable = UNSTREAM_STRING_ASCII(&constant_bin[ 651661 ], 15, 1);
    const_str_digest_abdee8d713fb97eeec5c94da3e6ee72f = UNSTREAM_STRING_ASCII(&constant_bin[ 651676 ], 58, 0);
    const_str_digest_8aeec5b3f7298c5bac1e129b6ee9f59f = UNSTREAM_STRING_ASCII(&constant_bin[ 651734 ], 202, 0);
    const_str_digest_2fb13ce01af8e322e1090db877e250bd = UNSTREAM_STRING_ASCII(&constant_bin[ 651936 ], 34, 0);
    const_str_plain_unverifiable = UNSTREAM_STRING_ASCII(&constant_bin[ 646632 ], 12, 1);
    const_tuple_str_plain_Host_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_Host_tuple, 0, const_str_plain_Host); Py_INCREF(const_str_plain_Host);
    const_str_digest_59f19da226d4479328efe53726a2e397 = UNSTREAM_STRING_ASCII(&constant_bin[ 651970 ], 16, 0);
    const_str_plain_has_header = UNSTREAM_STRING_ASCII(&constant_bin[ 649869 ], 10, 1);
    const_str_digest_58322b83779ad7d89ba5c63e2fe2855c = UNSTREAM_STRING_ASCII(&constant_bin[ 651986 ], 27, 0);
    const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple = PyTuple_New(6);
    PyTuple_SET_ITEM(const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple, 1, const_str_plain_name); Py_INCREF(const_str_plain_name);
    PyTuple_SET_ITEM(const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple, 2, const_str_plain_domain); Py_INCREF(const_str_plain_domain);
    PyTuple_SET_ITEM(const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple, 3, const_str_plain_path); Py_INCREF(const_str_plain_path);
    PyTuple_SET_ITEM(const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple, 4, const_str_plain_toReturn); Py_INCREF(const_str_plain_toReturn);
    PyTuple_SET_ITEM(const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple, 5, const_str_plain_cookie); Py_INCREF(const_str_plain_cookie);
    const_str_digest_5427312272820286dba5b26f263d4c79 = UNSTREAM_STRING_ASCII(&constant_bin[ 652013 ], 30, 0);
    const_tuple_str_plain_self_str_plain_new_cj_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_new_cj_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_new_cj_tuple, 1, const_str_plain_new_cj); Py_INCREF(const_str_plain_new_cj);
    const_str_digest_dc064d287eb15bd1175f79fc7fcc5d69 = UNSTREAM_STRING_ASCII(&constant_bin[ 652043 ], 35, 0);
    const_str_digest_a9d19ccf5848be851d2f630cfe17789d = UNSTREAM_STRING_ASCII(&constant_bin[ 652078 ], 61, 0);
    const_str_plain__new_headers = UNSTREAM_STRING_ASCII(&constant_bin[ 646351 ], 12, 1);
    const_str_digest_b32fff81b34b2c7f10c1d1dc66bbef6d = UNSTREAM_STRING_ASCII(&constant_bin[ 652139 ], 66, 0);
    const_tuple_str_plain_cookie_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_cookie_tuple, 0, const_str_plain_cookie); Py_INCREF(const_str_plain_cookie);
    const_tuple_str_plain_self_str_plain_request_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_request_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_str_plain_self_str_plain_request_tuple, 1, const_str_plain_request); Py_INCREF(const_str_plain_request);
    const_str_plain_comment_url = UNSTREAM_STRING_ASCII(&constant_bin[ 652205 ], 11, 1);
    const_str_plain_get_policy = UNSTREAM_STRING_ASCII(&constant_bin[ 652216 ], 10, 1);
    const_str_plain_get_origin_req_host = UNSTREAM_STRING_ASCII(&constant_bin[ 645905 ], 19, 1);
    const_str_digest_138ef95cec671591d9bedfa7e0898703 = UNSTREAM_STRING_ASCII(&constant_bin[ 652226 ], 77, 0);
    const_str_digest_95cacfdffdeafa2154ddb2520f2fb58f = UNSTREAM_STRING_ASCII(&constant_bin[ 652303 ], 106, 0);
    const_str_digest_b30191bdb52236874918a4b5c3c5db8b = UNSTREAM_STRING_ASCII(&constant_bin[ 652409 ], 24, 0);
    const_str_plain_extract_cookies = UNSTREAM_STRING_ASCII(&constant_bin[ 20037 ], 15, 1);
    const_str_digest_f0c7ff82cbfe26b2f3f1df333f77ef1b = UNSTREAM_STRING_ASCII(&constant_bin[ 652433 ], 210, 0);
    const_str_plain_port_specified = UNSTREAM_STRING_ASCII(&constant_bin[ 652643 ], 14, 1);
    const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple, 1, const_str_plain_name); Py_INCREF(const_str_plain_name);
    PyTuple_SET_ITEM(const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple, 2, const_str_plain_default); Py_INCREF(const_str_plain_default);
    PyTuple_SET_ITEM(const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple, 3, const_str_plain_domain); Py_INCREF(const_str_plain_domain);
    PyTuple_SET_ITEM(const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple, 4, const_str_plain_path); Py_INCREF(const_str_plain_path);
    const_str_plain__policy = UNSTREAM_STRING_ASCII(&constant_bin[ 650910 ], 7, 1);
    const_str_plain_get_full_url = UNSTREAM_STRING_ASCII(&constant_bin[ 652421 ], 12, 1);
    const_str_plain_origin_req_host = UNSTREAM_STRING_ASCII(&constant_bin[ 645909 ], 15, 1);
    const_str_digest_4f8d8ada6928f5a67aefe24138a8c253 = UNSTREAM_STRING_ASCII(&constant_bin[ 652657 ], 30, 0);
    const_str_plain_multiple_domains = UNSTREAM_STRING_ASCII(&constant_bin[ 651954 ], 16, 1);
    const_str_digest_7fad1f4acdf828076344bcbd2f3093fc = UNSTREAM_STRING_ASCII(&constant_bin[ 652687 ], 131, 0);
    const_str_plain_get_header = UNSTREAM_STRING_ASCII(&constant_bin[ 652818 ], 10, 1);
    const_str_plain_domain_initial_dot = UNSTREAM_STRING_ASCII(&constant_bin[ 652828 ], 18, 1);
    const_tuple_0a21cfa0564c2ba78573baca86543185_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_0a21cfa0564c2ba78573baca86543185_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_0a21cfa0564c2ba78573baca86543185_tuple, 1, const_str_plain_other); Py_INCREF(const_str_plain_other);
    PyTuple_SET_ITEM(const_tuple_0a21cfa0564c2ba78573baca86543185_tuple, 2, const_str_plain_cookie); Py_INCREF(const_str_plain_cookie);
    PyTuple_SET_ITEM(const_tuple_0a21cfa0564c2ba78573baca86543185_tuple, 3, const_str_plain___class__); Py_INCREF(const_str_plain___class__);
    const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d = UNSTREAM_STRING_ASCII(&constant_bin[ 650625 ], 7, 0);
    const_str_plain__find_no_duplicates = UNSTREAM_STRING_ASCII(&constant_bin[ 648521 ], 19, 1);
    const_str_plain__headers = UNSTREAM_STRING_ASCII(&constant_bin[ 20007 ], 8, 1);
    const_str_plain_create_cookie = UNSTREAM_STRING_ASCII(&constant_bin[ 21734 ], 13, 1);
    const_str_digest_c99227a29db521837b47fa67726c6a3c = UNSTREAM_STRING_ASCII(&constant_bin[ 652846 ], 52, 0);
    const_str_digest_573342b2a8e1af18fbe63f15ee63f11b = UNSTREAM_STRING_ASCII(&constant_bin[ 652898 ], 176, 0);
    const_str_digest_2aa7f18650b70bafed61b449ab43cbad = UNSTREAM_STRING_ASCII(&constant_bin[ 653074 ], 468, 0);
    const_str_digest_12188133309ffc390643b7a732954d08 = UNSTREAM_STRING_ASCII(&constant_bin[ 648563 ], 16, 0);
    const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple, 0, const_str_plain_jar); Py_INCREF(const_str_plain_jar);
    PyTuple_SET_ITEM(const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple, 1, const_str_plain_request); Py_INCREF(const_str_plain_request);
    PyTuple_SET_ITEM(const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple, 2, const_str_plain_r); Py_INCREF(const_str_plain_r);
    const_str_digest_80fe00ea301d02293abaf9dea17cddac = UNSTREAM_STRING_ASCII(&constant_bin[ 653542 ], 33, 0);
    const_str_plain_add_cookie_header = UNSTREAM_STRING_ASCII(&constant_bin[ 653575 ], 17, 1);
    const_str_plain_get_dict = UNSTREAM_STRING_ASCII(&constant_bin[ 646148 ], 8, 1);
    const_str_digest_b7276b78dcacf789cb138b9c3e16bfe6 = UNSTREAM_STRING_ASCII(&constant_bin[ 653592 ], 22, 0);
    const_str_digest_6f0eeed3729339eac6c86da181041a13 = UNSTREAM_STRING_ASCII(&constant_bin[ 653614 ], 40, 0);
    const_str_digest_fb0e88f14b774d1e98d525584951eabc = UNSTREAM_STRING_ASCII(&constant_bin[ 653654 ], 29, 0);
    const_str_digest_28c35b2d382d530cb9f8e567735ee113 = UNSTREAM_STRING_ASCII(&constant_bin[ 653683 ], 20, 0);
    const_str_digest_b1346a1fb1e8adfe69a204b827c8b2a3 = UNSTREAM_STRING_ASCII(&constant_bin[ 653703 ], 28, 0);
    const_str_plain__find = UNSTREAM_STRING_ASCII(&constant_bin[ 6477 ], 5, 1);
    const_str_digest_dd3cc005839efdfe1c3c0f3b070086ba = UNSTREAM_STRING_ASCII(&constant_bin[ 653731 ], 118, 0);
    const_tuple_b775387ae1f097f6a84b2e2acdad630d_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_b775387ae1f097f6a84b2e2acdad630d_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_b775387ae1f097f6a84b2e2acdad630d_tuple, 1, const_str_plain_cookie); Py_INCREF(const_str_plain_cookie);
    PyTuple_SET_ITEM(const_tuple_b775387ae1f097f6a84b2e2acdad630d_tuple, 2, const_str_plain_args); Py_INCREF(const_str_plain_args);
    PyTuple_SET_ITEM(const_tuple_b775387ae1f097f6a84b2e2acdad630d_tuple, 3, const_str_plain_kwargs); Py_INCREF(const_str_plain_kwargs);
    PyTuple_SET_ITEM(const_tuple_b775387ae1f097f6a84b2e2acdad630d_tuple, 4, const_str_plain___class__); Py_INCREF(const_str_plain___class__);
    const_tuple_831032f065cd3258ed8a4829c50bfee2_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_831032f065cd3258ed8a4829c50bfee2_tuple, 0, const_str_plain_cookielib); Py_INCREF(const_str_plain_cookielib);
    PyTuple_SET_ITEM(const_tuple_831032f065cd3258ed8a4829c50bfee2_tuple, 1, const_str_plain_urlparse); Py_INCREF(const_str_plain_urlparse);
    PyTuple_SET_ITEM(const_tuple_831032f065cd3258ed8a4829c50bfee2_tuple, 2, const_str_plain_urlunparse); Py_INCREF(const_str_plain_urlunparse);
    PyTuple_SET_ITEM(const_tuple_831032f065cd3258ed8a4829c50bfee2_tuple, 3, const_str_plain_Morsel); Py_INCREF(const_str_plain_Morsel);
    PyTuple_SET_ITEM(const_tuple_831032f065cd3258ed8a4829c50bfee2_tuple, 4, const_str_plain_MutableMapping); Py_INCREF(const_str_plain_MutableMapping);
    const_str_digest_59021ee0ac4a578b9169d1a96b78e1da = UNSTREAM_STRING_ASCII(&constant_bin[ 653849 ], 52, 0);
    const_str_digest_0d043b9a6c2c506833bb59840ef22ffd = UNSTREAM_STRING_ASCII(&constant_bin[ 653901 ], 29, 0);
    const_tuple_4631647c2089dc0399d32b223bd5e1cc_tuple = PyTuple_New(6);
    PyTuple_SET_ITEM(const_tuple_4631647c2089dc0399d32b223bd5e1cc_tuple, 0, const_str_plain_name); Py_INCREF(const_str_plain_name);
    PyTuple_SET_ITEM(const_tuple_4631647c2089dc0399d32b223bd5e1cc_tuple, 1, const_str_plain_value); Py_INCREF(const_str_plain_value);
    PyTuple_SET_ITEM(const_tuple_4631647c2089dc0399d32b223bd5e1cc_tuple, 2, const_str_plain_kwargs); Py_INCREF(const_str_plain_kwargs);
    PyTuple_SET_ITEM(const_tuple_4631647c2089dc0399d32b223bd5e1cc_tuple, 3, const_str_plain_result); Py_INCREF(const_str_plain_result);
    PyTuple_SET_ITEM(const_tuple_4631647c2089dc0399d32b223bd5e1cc_tuple, 4, const_str_plain_badargs); Py_INCREF(const_str_plain_badargs);
    PyTuple_SET_ITEM(const_tuple_4631647c2089dc0399d32b223bd5e1cc_tuple, 5, const_str_plain_err); Py_INCREF(const_str_plain_err);
    const_str_plain_add_header = UNSTREAM_STRING_ASCII(&constant_bin[ 634919 ], 10, 1);
    const_str_digest_d61c39e15f1f0b76bd46a71165e3bbe6 = UNSTREAM_STRING_ASCII(&constant_bin[ 653930 ], 148, 0);
    const_str_plain_remove_cookie_by_name = UNSTREAM_STRING_ASCII(&constant_bin[ 21625 ], 21, 1);
    const_str_plain_secure = UNSTREAM_STRING_ASCII(&constant_bin[ 29074 ], 6, 1);
    const_tuple_str_plain_domain_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_domain_tuple, 0, const_str_plain_domain); Py_INCREF(const_str_plain_domain);
    const_str_digest_6d23da7eceea3baa2298ffd89ccc62c5 = UNSTREAM_STRING_ASCII(&constant_bin[ 654078 ], 28, 0);
    const_str_digest_2074f4b4dde671f06897bcc11d0d41da = UNSTREAM_STRING_ASCII(&constant_bin[ 654106 ], 134, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$cookies(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_452775f07dbd379089653e10c48a0ec3;
static PyCodeObject *codeobj_2d46d3b307bd13ebb3743a2c35c2778f;
static PyCodeObject *codeobj_13142d07daeedefdd1d11209233d58c4;
static PyCodeObject *codeobj_3cc2064679c8038f35fb52187f3709f1;
static PyCodeObject *codeobj_8c22f653f32890eabe0a43062fe37d87;
static PyCodeObject *codeobj_bb7c5b2a398ffdb2e2156c14589ec9f6;
static PyCodeObject *codeobj_16c2ec9104ff0d08e93814ba44f85e1b;
static PyCodeObject *codeobj_828b33ab5e9cfde2cc201f593bd01a70;
static PyCodeObject *codeobj_81f34f157cb00d2468fa25ad60270324;
static PyCodeObject *codeobj_9a829379de6490f19de38b27c44dfed2;
static PyCodeObject *codeobj_906849bd08969f08665533b229826f07;
static PyCodeObject *codeobj_556c4c9828b891f4ffdcda2a3bbf0cc0;
static PyCodeObject *codeobj_a0c6521afd2a63c7c8bb76d3b90979cf;
static PyCodeObject *codeobj_bd0b233f6d0f1678b6bf15eef2e61111;
static PyCodeObject *codeobj_3acf45730aff185bccd346334a8971f0;
static PyCodeObject *codeobj_76c53f086136ef422680c37c131d5e51;
static PyCodeObject *codeobj_ce0da11004362554c20c3504d00f4008;
static PyCodeObject *codeobj_ed390dbf1d642f2cc7a46d8f5744da12;
static PyCodeObject *codeobj_0ae90c3a126fd0a0795406280ed5aa7b;
static PyCodeObject *codeobj_a7e2ee487282e84d9b3b447fca9aec5e;
static PyCodeObject *codeobj_b0742227d25586f04629ab3a1b1eb09b;
static PyCodeObject *codeobj_8bafccf72e3a130b23defc7a088902cd;
static PyCodeObject *codeobj_05195060a61ae40d4609c3cec7aff7ea;
static PyCodeObject *codeobj_eaa2a5a358f7b958528567cc2de2a41a;
static PyCodeObject *codeobj_c42b55b05a0b16f379d854cee4d03943;
static PyCodeObject *codeobj_1da4449aead4d00092fcefa71e10cba1;
static PyCodeObject *codeobj_d1730d5ca860c0281efc9540a9084451;
static PyCodeObject *codeobj_b471d7b3cbe9a865eb94995d8fcd0198;
static PyCodeObject *codeobj_7f23b6f15d551ce79daa2307da9be911;
static PyCodeObject *codeobj_e43dd9e117fa660248acce52ccbd6781;
static PyCodeObject *codeobj_487b803c7fb26d982c384faaf5c3bb31;
static PyCodeObject *codeobj_9452412a3223c9a274ca641733b1e9ef;
static PyCodeObject *codeobj_0af893486df891d157b17889ccb7a180;
static PyCodeObject *codeobj_18121beaaee812a3c4e5e2cf57e54ece;
static PyCodeObject *codeobj_715324524deb5bf48f4ea339b674b427;
static PyCodeObject *codeobj_1ebf49be1e5265a0379da0bd994d1c75;
static PyCodeObject *codeobj_bf43816c6db1bb79c4a3b47435f501b2;
static PyCodeObject *codeobj_06d3d3dc40ce30fd48511cedef11c0ee;
static PyCodeObject *codeobj_fbdbcbf277d963cf6a18caccf8abfbae;
static PyCodeObject *codeobj_02517238b9230788458c666c3363b350;
static PyCodeObject *codeobj_a05f33e508216c20b90c272c1c9b75e7;
static PyCodeObject *codeobj_ddcafde6b7a4cbd6c16f37a6db23b713;
static PyCodeObject *codeobj_79a3ab4c4167833e50d1315e50dece1d;
static PyCodeObject *codeobj_512f051785de40d160c918c90cdc0dd6;
static PyCodeObject *codeobj_b182f5dc014332c9c00b5b878a7d570f;
static PyCodeObject *codeobj_09bb1d87ec7040171926baa4e12618b4;
static PyCodeObject *codeobj_31348c2424ce8cf2917fa161b4cf21f8;
static PyCodeObject *codeobj_ef607a7a5e98a56155f865f3ca807a83;
static PyCodeObject *codeobj_0b33f1f305a37429aa1d50841a297ed3;
static PyCodeObject *codeobj_e967e57eb0a809976913ad874c9b64e4;
static PyCodeObject *codeobj_872dc3983136e59b9d93e739124d651d;
static PyCodeObject *codeobj_6d67d61a5b00c52d4df76dd3e5e344ff;
static PyCodeObject *codeobj_fc7d4397ca3e3ddf1e2fc0926fbe045d;
static PyCodeObject *codeobj_56e8ab0e9ec81b1e9a664d772dbc2909;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_abdee8d713fb97eeec5c94da3e6ee72f;
    codeobj_452775f07dbd379089653e10c48a0ec3 = MAKE_CODEOBJECT(module_filename_obj, 521, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_angle_listcomp, const_tuple_str_plain_cookie_tuple, 1, 0, 0);
    codeobj_2d46d3b307bd13ebb3743a2c35c2778f = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_c9dd2760a1399f089d616717f6e41ae2, const_tuple_empty, 0, 0, 0);
    codeobj_13142d07daeedefdd1d11209233d58c4 = MAKE_CODEOBJECT(module_filename_obj, 25, CO_NOFREE, const_str_plain_MockRequest, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_3cc2064679c8038f35fb52187f3709f1 = MAKE_CODEOBJECT(module_filename_obj, 97, CO_NOFREE, const_str_plain_MockResponse, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_8c22f653f32890eabe0a43062fe37d87 = MAKE_CODEOBJECT(module_filename_obj, 171, CO_NOFREE, const_str_plain_RequestsCookieJar, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_bb7c5b2a398ffdb2e2156c14589ec9f6 = MAKE_CODEOBJECT(module_filename_obj, 315, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___contains__, const_tuple_str_plain_self_str_plain_name_str_plain___class___tuple, 2, 0, 0);
    codeobj_16c2ec9104ff0d08e93814ba44f85e1b = MAKE_CODEOBJECT(module_filename_obj, 337, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___delitem__, const_tuple_str_plain_self_str_plain_name_tuple, 2, 0, 0);
    codeobj_828b33ab5e9cfde2cc201f593bd01a70 = MAKE_CODEOBJECT(module_filename_obj, 321, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___getitem__, const_tuple_str_plain_self_str_plain_name_tuple, 2, 0, 0);
    codeobj_81f34f157cb00d2468fa25ad60270324 = MAKE_CODEOBJECT(module_filename_obj, 401, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___getstate__, const_tuple_str_plain_self_str_plain_state_tuple, 1, 0, 0);
    codeobj_9a829379de6490f19de38b27c44dfed2 = MAKE_CODEOBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___init__, const_tuple_str_plain_self_str_plain_headers_tuple, 2, 0, 0);
    codeobj_906849bd08969f08665533b229826f07 = MAKE_CODEOBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___init__, const_tuple_str_plain_self_str_plain_request_tuple, 2, 0, 0);
    codeobj_556c4c9828b891f4ffdcda2a3bbf0cc0 = MAKE_CODEOBJECT(module_filename_obj, 330, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___setitem__, const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple, 3, 0, 0);
    codeobj_a0c6521afd2a63c7c8bb76d3b90979cf = MAKE_CODEOBJECT(module_filename_obj, 408, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain___setstate__, const_tuple_str_plain_self_str_plain_state_tuple, 2, 0, 0);
    codeobj_bd0b233f6d0f1678b6bf15eef2e61111 = MAKE_CODEOBJECT(module_filename_obj, 426, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__copy_cookie_jar, const_tuple_str_plain_jar_str_plain_new_jar_str_plain_cookie_tuple, 1, 0, 0);
    codeobj_3acf45730aff185bccd346334a8971f0 = MAKE_CODEOBJECT(module_filename_obj, 356, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__find, const_tuple_c8a5661c39a03ade6cb7ed2de355a94c_tuple, 4, 0, 0);
    codeobj_76c53f086136ef422680c37c131d5e51 = MAKE_CODEOBJECT(module_filename_obj, 376, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__find_no_duplicates, const_tuple_e37f168af5a2fecae4fc083a8248ee97_tuple, 4, 0, 0);
    codeobj_ce0da11004362554c20c3504d00f4008 = MAKE_CODEOBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_add_header, const_tuple_str_plain_self_str_plain_key_str_plain_val_tuple, 3, 0, 0);
    codeobj_ed390dbf1d642f2cc7a46d8f5744da12 = MAKE_CODEOBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_add_unredirected_header, const_tuple_str_plain_self_str_plain_name_str_plain_value_tuple, 3, 0, 0);
    codeobj_0ae90c3a126fd0a0795406280ed5aa7b = MAKE_CODEOBJECT(module_filename_obj, 508, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_cookiejar_from_dict, const_tuple_8a58cb001cebfbadcd3aa6faecf68564_tuple, 3, 0, 0);
    codeobj_a7e2ee487282e84d9b3b447fca9aec5e = MAKE_CODEOBJECT(module_filename_obj, 414, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_copy, const_tuple_str_plain_self_str_plain_new_cj_tuple, 1, 0, 0);
    codeobj_b0742227d25586f04629ab3a1b1eb09b = MAKE_CODEOBJECT(module_filename_obj, 441, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_create_cookie, const_tuple_4631647c2089dc0399d32b223bd5e1cc_tuple, 2, 0, 0);
    codeobj_8bafccf72e3a130b23defc7a088902cd = MAKE_CODEOBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_extract_cookies_to_jar, const_tuple_9b96aef8b24e3c6dd6595ef19172ce1e_tuple, 3, 0, 0);
    codeobj_05195060a61ae40d4609c3cec7aff7ea = MAKE_CODEOBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_get, const_tuple_0f0fe4a9336415a0627bb72827a207fe_tuple, 5, 0, 0);
    codeobj_eaa2a5a358f7b958528567cc2de2a41a = MAKE_CODEOBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_get_cookie_header, const_tuple_str_plain_jar_str_plain_request_str_plain_r_tuple, 2, 0, 0);
    codeobj_c42b55b05a0b16f379d854cee4d03943 = MAKE_CODEOBJECT(module_filename_obj, 299, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_get_dict, const_tuple_3cc67ce745459ce0777d18c341fa62a7_tuple, 3, 0, 0);
    codeobj_1da4449aead4d00092fcefa71e10cba1 = MAKE_CODEOBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_get_full_url, const_tuple_str_plain_self_str_plain_host_str_plain_parsed_tuple, 1, 0, 0);
    codeobj_d1730d5ca860c0281efc9540a9084451 = MAKE_CODEOBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_get_header, const_tuple_str_plain_self_str_plain_name_str_plain_default_tuple, 3, 0, 0);
    codeobj_b471d7b3cbe9a865eb94995d8fcd0198 = MAKE_CODEOBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_get_host, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_7f23b6f15d551ce79daa2307da9be911 = MAKE_CODEOBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_get_new_headers, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_e43dd9e117fa660248acce52ccbd6781 = MAKE_CODEOBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_get_origin_req_host, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_487b803c7fb26d982c384faaf5c3bb31 = MAKE_CODEOBJECT(module_filename_obj, 421, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_get_policy, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_9452412a3223c9a274ca641733b1e9ef = MAKE_CODEOBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_get_type, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_0af893486df891d157b17889ccb7a180 = MAKE_CODEOBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_getheaders, const_tuple_str_plain_self_str_plain_name_tuple, 2, 0, 0);
    codeobj_18121beaaee812a3c4e5e2cf57e54ece = MAKE_CODEOBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_has_header, const_tuple_str_plain_self_str_plain_name_tuple, 2, 0, 0);
    codeobj_715324524deb5bf48f4ea339b674b427 = MAKE_CODEOBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_host, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_1ebf49be1e5265a0379da0bd994d1c75 = MAKE_CODEOBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_info, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_bf43816c6db1bb79c4a3b47435f501b2 = MAKE_CODEOBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_is_unverifiable, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_06d3d3dc40ce30fd48511cedef11c0ee = MAKE_CODEOBJECT(module_filename_obj, 261, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_items, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_fbdbcbf277d963cf6a18caccf8abfbae = MAKE_CODEOBJECT(module_filename_obj, 252, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_iteritems, const_tuple_str_plain_self_str_plain_cookie_tuple, 1, 0, 0);
    codeobj_02517238b9230788458c666c3363b350 = MAKE_CODEOBJECT(module_filename_obj, 218, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_iterkeys, const_tuple_str_plain_self_str_plain_cookie_tuple, 1, 0, 0);
    codeobj_a05f33e508216c20b90c272c1c9b75e7 = MAKE_CODEOBJECT(module_filename_obj, 235, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_itervalues, const_tuple_str_plain_self_str_plain_cookie_tuple, 1, 0, 0);
    codeobj_ddcafde6b7a4cbd6c16f37a6db23b713 = MAKE_CODEOBJECT(module_filename_obj, 227, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_keys, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_79a3ab4c4167833e50d1315e50dece1d = MAKE_CODEOBJECT(module_filename_obj, 270, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_list_domains, const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple, 1, 0, 0);
    codeobj_512f051785de40d160c918c90cdc0dd6 = MAKE_CODEOBJECT(module_filename_obj, 278, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_list_paths, const_tuple_str_plain_self_str_plain_paths_str_plain_cookie_tuple, 1, 0, 0);
    codeobj_b182f5dc014332c9c00b5b878a7d570f = MAKE_CODEOBJECT(module_filename_obj, 529, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_merge_cookies, const_tuple_95c52f105bd16b9093b126943b0df3d1_tuple, 2, 0, 0);
    codeobj_09bb1d87ec7040171926baa4e12618b4 = MAKE_CODEOBJECT(module_filename_obj, 477, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_morsel_to_cookie, const_tuple_str_plain_morsel_str_plain_expires_str_plain_time_template_tuple, 1, 0, 0);
    codeobj_31348c2424ce8cf2917fa161b4cf21f8 = MAKE_CODEOBJECT(module_filename_obj, 286, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_multiple_domains, const_tuple_str_plain_self_str_plain_domains_str_plain_cookie_tuple, 1, 0, 0);
    codeobj_ef607a7a5e98a56155f865f3ca807a83 = MAKE_CODEOBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_origin_req_host, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_0b33f1f305a37429aa1d50841a297ed3 = MAKE_CODEOBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_remove_cookie_by_name, const_tuple_ca917a44106411b262150e155c627a6c_tuple, 4, 0, 0);
    codeobj_e967e57eb0a809976913ad874c9b64e4 = MAKE_CODEOBJECT(module_filename_obj, 201, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, const_str_plain_set, const_tuple_ef320e030deaec3ce89f3f9a89ce9ef3_tuple, 3, 0, 0);
    codeobj_872dc3983136e59b9d93e739124d651d = MAKE_CODEOBJECT(module_filename_obj, 343, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, const_str_plain_set_cookie, const_tuple_b775387ae1f097f6a84b2e2acdad630d_tuple, 2, 0, 0);
    codeobj_6d67d61a5b00c52d4df76dd3e5e344ff = MAKE_CODEOBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_unverifiable, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_fc7d4397ca3e3ddf1e2fc0926fbe045d = MAKE_CODEOBJECT(module_filename_obj, 348, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_update, const_tuple_0a21cfa0564c2ba78573baca86543185_tuple, 2, 0, 0);
    codeobj_56e8ab0e9ec81b1e9a664d772dbc2909 = MAKE_CODEOBJECT(module_filename_obj, 244, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_values, const_tuple_str_plain_self_tuple, 1, 0, 0);
}

// The module function declarations.
static PyObject *requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_maker(void);


static PyObject *requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_maker(void);


static PyObject *requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_maker(void);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_pos_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_pos_star_list_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_10_add_unredirected_header();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_11_get_new_headers();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_12_unverifiable();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_13_origin_req_host();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_14_host();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_15___init__();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_16_info();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_17_getheaders();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_18_extract_cookies_to_jar();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_19_get_cookie_header();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_1___init__();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_20_remove_cookie_by_name(PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_21_get(PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_22_set();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_23_iterkeys();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_24_keys();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_25_itervalues();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_26_values();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_27_iteritems();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_28_items();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_29_list_domains();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_2_get_type();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_30_list_paths();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_31_multiple_domains();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_32_get_dict(PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_33___contains__();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_34___getitem__();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_35___setitem__();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_36___delitem__();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_37_set_cookie();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_38_update();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_39__find(PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_3_get_host();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_40__find_no_duplicates(PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_41___getstate__();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_42___setstate__();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_43_copy();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_44_get_policy();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_45__copy_cookie_jar();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_46_create_cookie();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_47_morsel_to_cookie();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_48_cookiejar_from_dict(PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_49_merge_cookies();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_4_get_origin_req_host();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_5_get_full_url();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_6_is_unverifiable();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_7_has_header();


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_8_get_header(PyObject *defaults);


static PyObject *MAKE_FUNCTION_requests$cookies$$$function_9_add_header();


// The module function definitions.
static PyObject *impl_requests$cookies$$$function_1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    struct Nuitka_FrameObject *frame_906849bd08969f08665533b229826f07;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_906849bd08969f08665533b229826f07 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_906849bd08969f08665533b229826f07, codeobj_906849bd08969f08665533b229826f07, module_requests$cookies, sizeof(void *)+sizeof(void *));
    frame_906849bd08969f08665533b229826f07 = cache_frame_906849bd08969f08665533b229826f07;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_906849bd08969f08665533b229826f07);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_906849bd08969f08665533b229826f07) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_request);
        tmp_assattr_name_1 = par_request;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__r, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = PyDict_New();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__new_headers, tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_urlparse);

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

            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__r);
        if (tmp_source_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_url);
        Py_DECREF(tmp_source_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_906849bd08969f08665533b229826f07->m_frame.f_lineno = 40;
        tmp_source_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_scheme);
        Py_DECREF(tmp_source_name_1);
        if (tmp_assattr_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain_type, tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_906849bd08969f08665533b229826f07);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_906849bd08969f08665533b229826f07);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_906849bd08969f08665533b229826f07, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_906849bd08969f08665533b229826f07->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_906849bd08969f08665533b229826f07, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_906849bd08969f08665533b229826f07,
        type_description_1,
        par_self,
        par_request
    );


    // Release cached frame.
    if (frame_906849bd08969f08665533b229826f07 == cache_frame_906849bd08969f08665533b229826f07) {
        Py_DECREF(frame_906849bd08969f08665533b229826f07);
    }
    cache_frame_906849bd08969f08665533b229826f07 = NULL;

    assertFrameObject(frame_906849bd08969f08665533b229826f07);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_1___init__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function_2_get_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9452412a3223c9a274ca641733b1e9ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9452412a3223c9a274ca641733b1e9ef = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_9452412a3223c9a274ca641733b1e9ef, codeobj_9452412a3223c9a274ca641733b1e9ef, module_requests$cookies, sizeof(void *));
    frame_9452412a3223c9a274ca641733b1e9ef = cache_frame_9452412a3223c9a274ca641733b1e9ef;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9452412a3223c9a274ca641733b1e9ef);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9452412a3223c9a274ca641733b1e9ef) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_type);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9452412a3223c9a274ca641733b1e9ef);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9452412a3223c9a274ca641733b1e9ef);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9452412a3223c9a274ca641733b1e9ef);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9452412a3223c9a274ca641733b1e9ef, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_9452412a3223c9a274ca641733b1e9ef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9452412a3223c9a274ca641733b1e9ef, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9452412a3223c9a274ca641733b1e9ef,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_9452412a3223c9a274ca641733b1e9ef == cache_frame_9452412a3223c9a274ca641733b1e9ef) {
        Py_DECREF(frame_9452412a3223c9a274ca641733b1e9ef);
    }
    cache_frame_9452412a3223c9a274ca641733b1e9ef = NULL;

    assertFrameObject(frame_9452412a3223c9a274ca641733b1e9ef);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_2_get_type);
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


static PyObject *impl_requests$cookies$$$function_3_get_host(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b471d7b3cbe9a865eb94995d8fcd0198;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b471d7b3cbe9a865eb94995d8fcd0198 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_b471d7b3cbe9a865eb94995d8fcd0198, codeobj_b471d7b3cbe9a865eb94995d8fcd0198, module_requests$cookies, sizeof(void *));
    frame_b471d7b3cbe9a865eb94995d8fcd0198 = cache_frame_b471d7b3cbe9a865eb94995d8fcd0198;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b471d7b3cbe9a865eb94995d8fcd0198);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b471d7b3cbe9a865eb94995d8fcd0198) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_urlparse);

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

            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__r);
        if (tmp_source_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_url);
        Py_DECREF(tmp_source_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b471d7b3cbe9a865eb94995d8fcd0198->m_frame.f_lineno = 46;
        tmp_source_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_netloc);
        Py_DECREF(tmp_source_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b471d7b3cbe9a865eb94995d8fcd0198);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b471d7b3cbe9a865eb94995d8fcd0198);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b471d7b3cbe9a865eb94995d8fcd0198);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b471d7b3cbe9a865eb94995d8fcd0198, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_b471d7b3cbe9a865eb94995d8fcd0198->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b471d7b3cbe9a865eb94995d8fcd0198, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b471d7b3cbe9a865eb94995d8fcd0198,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_b471d7b3cbe9a865eb94995d8fcd0198 == cache_frame_b471d7b3cbe9a865eb94995d8fcd0198) {
        Py_DECREF(frame_b471d7b3cbe9a865eb94995d8fcd0198);
    }
    cache_frame_b471d7b3cbe9a865eb94995d8fcd0198 = NULL;

    assertFrameObject(frame_b471d7b3cbe9a865eb94995d8fcd0198);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_3_get_host);
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


static PyObject *impl_requests$cookies$$$function_4_get_origin_req_host(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e43dd9e117fa660248acce52ccbd6781;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e43dd9e117fa660248acce52ccbd6781 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_e43dd9e117fa660248acce52ccbd6781, codeobj_e43dd9e117fa660248acce52ccbd6781, module_requests$cookies, sizeof(void *));
    frame_e43dd9e117fa660248acce52ccbd6781 = cache_frame_e43dd9e117fa660248acce52ccbd6781;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e43dd9e117fa660248acce52ccbd6781);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e43dd9e117fa660248acce52ccbd6781) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_e43dd9e117fa660248acce52ccbd6781->m_frame.f_lineno = 49;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_get_host);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e43dd9e117fa660248acce52ccbd6781);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e43dd9e117fa660248acce52ccbd6781);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e43dd9e117fa660248acce52ccbd6781);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e43dd9e117fa660248acce52ccbd6781, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_e43dd9e117fa660248acce52ccbd6781->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e43dd9e117fa660248acce52ccbd6781, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e43dd9e117fa660248acce52ccbd6781,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_e43dd9e117fa660248acce52ccbd6781 == cache_frame_e43dd9e117fa660248acce52ccbd6781) {
        Py_DECREF(frame_e43dd9e117fa660248acce52ccbd6781);
    }
    cache_frame_e43dd9e117fa660248acce52ccbd6781 = NULL;

    assertFrameObject(frame_e43dd9e117fa660248acce52ccbd6781);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_4_get_origin_req_host);
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


static PyObject *impl_requests$cookies$$$function_5_get_full_url(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_host = NULL;
    PyObject *var_parsed = NULL;
    struct Nuitka_FrameObject *frame_1da4449aead4d00092fcefa71e10cba1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1da4449aead4d00092fcefa71e10cba1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_1da4449aead4d00092fcefa71e10cba1, codeobj_1da4449aead4d00092fcefa71e10cba1, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_1da4449aead4d00092fcefa71e10cba1 = cache_frame_1da4449aead4d00092fcefa71e10cba1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1da4449aead4d00092fcefa71e10cba1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1da4449aead4d00092fcefa71e10cba1) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__r);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_headers);
        Py_DECREF(tmp_source_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1da4449aead4d00092fcefa71e10cba1->m_frame.f_lineno = 54;
        tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_Host_tuple, 0));

        Py_DECREF(tmp_called_instance_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
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
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT(par_self);
            tmp_source_name_4 = par_self;
            tmp_source_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__r);
            if (tmp_source_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_url);
            Py_DECREF(tmp_source_name_3);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_to_native_string);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_to_native_string);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21268 ], 38, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_6 = par_self;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain__r);
        if (tmp_source_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_headers);
        Py_DECREF(tmp_source_name_5);
        if (tmp_subscribed_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_str_plain_Host;
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_subscribed_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_kw_name_1 = PyDict_Copy(const_dict_81b3970727674c20ce12b1a4757dad21);
        frame_1da4449aead4d00092fcefa71e10cba1->m_frame.f_lineno = 57;
        tmp_assign_source_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_host == NULL);
        var_host = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_urlparse);

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

            exception_lineno = 58;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_8 = par_self;
        tmp_source_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain__r);
        if (tmp_source_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_url);
        Py_DECREF(tmp_source_name_7);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1da4449aead4d00092fcefa71e10cba1->m_frame.f_lineno = 58;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_parsed == NULL);
        var_parsed = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        PyObject *tmp_source_name_11;
        PyObject *tmp_source_name_12;
        PyObject *tmp_source_name_13;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_urlunparse);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_urlunparse);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21520 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT(var_parsed);
        tmp_source_name_9 = var_parsed;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_scheme);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = PyList_New(6);
        PyList_SET_ITEM(tmp_args_element_name_2, 0, tmp_list_element_1);
        CHECK_OBJECT(var_host);
        tmp_list_element_1 = var_host;
        Py_INCREF(tmp_list_element_1);
        PyList_SET_ITEM(tmp_args_element_name_2, 1, tmp_list_element_1);
        CHECK_OBJECT(var_parsed);
        tmp_source_name_10 = var_parsed;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain_path);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 61;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_args_element_name_2, 2, tmp_list_element_1);
        CHECK_OBJECT(var_parsed);
        tmp_source_name_11 = var_parsed;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain_params);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 61;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_args_element_name_2, 3, tmp_list_element_1);
        CHECK_OBJECT(var_parsed);
        tmp_source_name_12 = var_parsed;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain_query);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 61;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_args_element_name_2, 4, tmp_list_element_1);
        CHECK_OBJECT(var_parsed);
        tmp_source_name_13 = var_parsed;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_fragment);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_2);

            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_args_element_name_2, 5, tmp_list_element_1);
        frame_1da4449aead4d00092fcefa71e10cba1->m_frame.f_lineno = 60;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1da4449aead4d00092fcefa71e10cba1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1da4449aead4d00092fcefa71e10cba1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1da4449aead4d00092fcefa71e10cba1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1da4449aead4d00092fcefa71e10cba1, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_1da4449aead4d00092fcefa71e10cba1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1da4449aead4d00092fcefa71e10cba1, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1da4449aead4d00092fcefa71e10cba1,
        type_description_1,
        par_self,
        var_host,
        var_parsed
    );


    // Release cached frame.
    if (frame_1da4449aead4d00092fcefa71e10cba1 == cache_frame_1da4449aead4d00092fcefa71e10cba1) {
        Py_DECREF(frame_1da4449aead4d00092fcefa71e10cba1);
    }
    cache_frame_1da4449aead4d00092fcefa71e10cba1 = NULL;

    assertFrameObject(frame_1da4449aead4d00092fcefa71e10cba1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_5_get_full_url);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_host);
    var_host = NULL;

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

    Py_XDECREF(var_host);
    var_host = NULL;

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
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_5_get_full_url);
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


static PyObject *impl_requests$cookies$$$function_6_is_unverifiable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_6_is_unverifiable);
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


static PyObject *impl_requests$cookies$$$function_7_has_header(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_18121beaaee812a3c4e5e2cf57e54ece;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_18121beaaee812a3c4e5e2cf57e54ece = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_18121beaaee812a3c4e5e2cf57e54ece, codeobj_18121beaaee812a3c4e5e2cf57e54ece, module_requests$cookies, sizeof(void *)+sizeof(void *));
    frame_18121beaaee812a3c4e5e2cf57e54ece = cache_frame_18121beaaee812a3c4e5e2cf57e54ece;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_18121beaaee812a3c4e5e2cf57e54ece);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_18121beaaee812a3c4e5e2cf57e54ece) == 2); // Frame stack

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT(par_name);
        tmp_compexpr_left_1 = par_name;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__r);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_headers);
        Py_DECREF(tmp_source_name_1);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oo";
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
        CHECK_OBJECT(par_name);
        tmp_compexpr_left_2 = par_name;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__new_headers);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_2, tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res == 1) ? Py_True : Py_False;
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_18121beaaee812a3c4e5e2cf57e54ece);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_18121beaaee812a3c4e5e2cf57e54ece);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_18121beaaee812a3c4e5e2cf57e54ece);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_18121beaaee812a3c4e5e2cf57e54ece, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_18121beaaee812a3c4e5e2cf57e54ece->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_18121beaaee812a3c4e5e2cf57e54ece, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_18121beaaee812a3c4e5e2cf57e54ece,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame.
    if (frame_18121beaaee812a3c4e5e2cf57e54ece == cache_frame_18121beaaee812a3c4e5e2cf57e54ece) {
        Py_DECREF(frame_18121beaaee812a3c4e5e2cf57e54ece);
    }
    cache_frame_18121beaaee812a3c4e5e2cf57e54ece = NULL;

    assertFrameObject(frame_18121beaaee812a3c4e5e2cf57e54ece);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_7_has_header);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function_8_get_header(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_default = python_pars[2];
    struct Nuitka_FrameObject *frame_d1730d5ca860c0281efc9540a9084451;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d1730d5ca860c0281efc9540a9084451 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_d1730d5ca860c0281efc9540a9084451, codeobj_d1730d5ca860c0281efc9540a9084451, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_d1730d5ca860c0281efc9540a9084451 = cache_frame_d1730d5ca860c0281efc9540a9084451;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d1730d5ca860c0281efc9540a9084451);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d1730d5ca860c0281efc9540a9084451) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__r);
        if (tmp_source_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_source_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_headers);
        Py_DECREF(tmp_source_name_2);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_get);
        Py_DECREF(tmp_source_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_args_element_name_1 = par_name;
        CHECK_OBJECT(par_self);
        tmp_source_name_4 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__new_headers);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_args_element_name_3 = par_name;
        CHECK_OBJECT(par_default);
        tmp_args_element_name_4 = par_default;
        frame_d1730d5ca860c0281efc9540a9084451->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain_get, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_d1730d5ca860c0281efc9540a9084451->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d1730d5ca860c0281efc9540a9084451);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d1730d5ca860c0281efc9540a9084451);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d1730d5ca860c0281efc9540a9084451);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d1730d5ca860c0281efc9540a9084451, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_d1730d5ca860c0281efc9540a9084451->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d1730d5ca860c0281efc9540a9084451, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d1730d5ca860c0281efc9540a9084451,
        type_description_1,
        par_self,
        par_name,
        par_default
    );


    // Release cached frame.
    if (frame_d1730d5ca860c0281efc9540a9084451 == cache_frame_d1730d5ca860c0281efc9540a9084451) {
        Py_DECREF(frame_d1730d5ca860c0281efc9540a9084451);
    }
    cache_frame_d1730d5ca860c0281efc9540a9084451 = NULL;

    assertFrameObject(frame_d1730d5ca860c0281efc9540a9084451);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_8_get_header);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function_9_add_header(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    PyObject *par_val = python_pars[2];
    struct Nuitka_FrameObject *frame_ce0da11004362554c20c3504d00f4008;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ce0da11004362554c20c3504d00f4008 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_ce0da11004362554c20c3504d00f4008, codeobj_ce0da11004362554c20c3504d00f4008, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_ce0da11004362554c20c3504d00f4008 = cache_frame_ce0da11004362554c20c3504d00f4008;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ce0da11004362554c20c3504d00f4008);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ce0da11004362554c20c3504d00f4008) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_str_digest_a9d19ccf5848be851d2f630cfe17789d;
        frame_ce0da11004362554c20c3504d00f4008->m_frame.f_lineno = 76;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 76;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ce0da11004362554c20c3504d00f4008);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ce0da11004362554c20c3504d00f4008);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ce0da11004362554c20c3504d00f4008, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_ce0da11004362554c20c3504d00f4008->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ce0da11004362554c20c3504d00f4008, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ce0da11004362554c20c3504d00f4008,
        type_description_1,
        par_self,
        par_key,
        par_val
    );


    // Release cached frame.
    if (frame_ce0da11004362554c20c3504d00f4008 == cache_frame_ce0da11004362554c20c3504d00f4008) {
        Py_DECREF(frame_ce0da11004362554c20c3504d00f4008);
    }
    cache_frame_ce0da11004362554c20c3504d00f4008 = NULL;

    assertFrameObject(frame_ce0da11004362554c20c3504d00f4008);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_9_add_header);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_requests$cookies$$$function_10_add_unredirected_header(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_value = python_pars[2];
    struct Nuitka_FrameObject *frame_ed390dbf1d642f2cc7a46d8f5744da12;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_ed390dbf1d642f2cc7a46d8f5744da12 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_ed390dbf1d642f2cc7a46d8f5744da12, codeobj_ed390dbf1d642f2cc7a46d8f5744da12, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_ed390dbf1d642f2cc7a46d8f5744da12 = cache_frame_ed390dbf1d642f2cc7a46d8f5744da12;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ed390dbf1d642f2cc7a46d8f5744da12);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ed390dbf1d642f2cc7a46d8f5744da12) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_value);
        tmp_ass_subvalue_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__new_headers);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_ass_subscript_1 = par_name;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ed390dbf1d642f2cc7a46d8f5744da12);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ed390dbf1d642f2cc7a46d8f5744da12);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ed390dbf1d642f2cc7a46d8f5744da12, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_ed390dbf1d642f2cc7a46d8f5744da12->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ed390dbf1d642f2cc7a46d8f5744da12, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ed390dbf1d642f2cc7a46d8f5744da12,
        type_description_1,
        par_self,
        par_name,
        par_value
    );


    // Release cached frame.
    if (frame_ed390dbf1d642f2cc7a46d8f5744da12 == cache_frame_ed390dbf1d642f2cc7a46d8f5744da12) {
        Py_DECREF(frame_ed390dbf1d642f2cc7a46d8f5744da12);
    }
    cache_frame_ed390dbf1d642f2cc7a46d8f5744da12 = NULL;

    assertFrameObject(frame_ed390dbf1d642f2cc7a46d8f5744da12);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_10_add_unredirected_header);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function_11_get_new_headers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7f23b6f15d551ce79daa2307da9be911;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7f23b6f15d551ce79daa2307da9be911 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_7f23b6f15d551ce79daa2307da9be911, codeobj_7f23b6f15d551ce79daa2307da9be911, module_requests$cookies, sizeof(void *));
    frame_7f23b6f15d551ce79daa2307da9be911 = cache_frame_7f23b6f15d551ce79daa2307da9be911;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7f23b6f15d551ce79daa2307da9be911);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7f23b6f15d551ce79daa2307da9be911) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__new_headers);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f23b6f15d551ce79daa2307da9be911);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f23b6f15d551ce79daa2307da9be911);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7f23b6f15d551ce79daa2307da9be911);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7f23b6f15d551ce79daa2307da9be911, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_7f23b6f15d551ce79daa2307da9be911->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f23b6f15d551ce79daa2307da9be911, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7f23b6f15d551ce79daa2307da9be911,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_7f23b6f15d551ce79daa2307da9be911 == cache_frame_7f23b6f15d551ce79daa2307da9be911) {
        Py_DECREF(frame_7f23b6f15d551ce79daa2307da9be911);
    }
    cache_frame_7f23b6f15d551ce79daa2307da9be911 = NULL;

    assertFrameObject(frame_7f23b6f15d551ce79daa2307da9be911);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_11_get_new_headers);
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


static PyObject *impl_requests$cookies$$$function_12_unverifiable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6d67d61a5b00c52d4df76dd3e5e344ff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6d67d61a5b00c52d4df76dd3e5e344ff = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_6d67d61a5b00c52d4df76dd3e5e344ff, codeobj_6d67d61a5b00c52d4df76dd3e5e344ff, module_requests$cookies, sizeof(void *));
    frame_6d67d61a5b00c52d4df76dd3e5e344ff = cache_frame_6d67d61a5b00c52d4df76dd3e5e344ff;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6d67d61a5b00c52d4df76dd3e5e344ff);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6d67d61a5b00c52d4df76dd3e5e344ff) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_6d67d61a5b00c52d4df76dd3e5e344ff->m_frame.f_lineno = 86;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_is_unverifiable);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6d67d61a5b00c52d4df76dd3e5e344ff);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6d67d61a5b00c52d4df76dd3e5e344ff);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6d67d61a5b00c52d4df76dd3e5e344ff);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6d67d61a5b00c52d4df76dd3e5e344ff, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_6d67d61a5b00c52d4df76dd3e5e344ff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6d67d61a5b00c52d4df76dd3e5e344ff, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6d67d61a5b00c52d4df76dd3e5e344ff,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_6d67d61a5b00c52d4df76dd3e5e344ff == cache_frame_6d67d61a5b00c52d4df76dd3e5e344ff) {
        Py_DECREF(frame_6d67d61a5b00c52d4df76dd3e5e344ff);
    }
    cache_frame_6d67d61a5b00c52d4df76dd3e5e344ff = NULL;

    assertFrameObject(frame_6d67d61a5b00c52d4df76dd3e5e344ff);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_12_unverifiable);
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


static PyObject *impl_requests$cookies$$$function_13_origin_req_host(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ef607a7a5e98a56155f865f3ca807a83;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ef607a7a5e98a56155f865f3ca807a83 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_ef607a7a5e98a56155f865f3ca807a83, codeobj_ef607a7a5e98a56155f865f3ca807a83, module_requests$cookies, sizeof(void *));
    frame_ef607a7a5e98a56155f865f3ca807a83 = cache_frame_ef607a7a5e98a56155f865f3ca807a83;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ef607a7a5e98a56155f865f3ca807a83);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ef607a7a5e98a56155f865f3ca807a83) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_ef607a7a5e98a56155f865f3ca807a83->m_frame.f_lineno = 90;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_get_origin_req_host);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ef607a7a5e98a56155f865f3ca807a83);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ef607a7a5e98a56155f865f3ca807a83);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ef607a7a5e98a56155f865f3ca807a83);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ef607a7a5e98a56155f865f3ca807a83, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_ef607a7a5e98a56155f865f3ca807a83->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ef607a7a5e98a56155f865f3ca807a83, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ef607a7a5e98a56155f865f3ca807a83,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_ef607a7a5e98a56155f865f3ca807a83 == cache_frame_ef607a7a5e98a56155f865f3ca807a83) {
        Py_DECREF(frame_ef607a7a5e98a56155f865f3ca807a83);
    }
    cache_frame_ef607a7a5e98a56155f865f3ca807a83 = NULL;

    assertFrameObject(frame_ef607a7a5e98a56155f865f3ca807a83);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_13_origin_req_host);
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


static PyObject *impl_requests$cookies$$$function_14_host(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_715324524deb5bf48f4ea339b674b427;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_715324524deb5bf48f4ea339b674b427 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_715324524deb5bf48f4ea339b674b427, codeobj_715324524deb5bf48f4ea339b674b427, module_requests$cookies, sizeof(void *));
    frame_715324524deb5bf48f4ea339b674b427 = cache_frame_715324524deb5bf48f4ea339b674b427;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_715324524deb5bf48f4ea339b674b427);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_715324524deb5bf48f4ea339b674b427) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_715324524deb5bf48f4ea339b674b427->m_frame.f_lineno = 94;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_get_host);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_715324524deb5bf48f4ea339b674b427);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_715324524deb5bf48f4ea339b674b427);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_715324524deb5bf48f4ea339b674b427);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_715324524deb5bf48f4ea339b674b427, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_715324524deb5bf48f4ea339b674b427->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_715324524deb5bf48f4ea339b674b427, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_715324524deb5bf48f4ea339b674b427,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_715324524deb5bf48f4ea339b674b427 == cache_frame_715324524deb5bf48f4ea339b674b427) {
        Py_DECREF(frame_715324524deb5bf48f4ea339b674b427);
    }
    cache_frame_715324524deb5bf48f4ea339b674b427 = NULL;

    assertFrameObject(frame_715324524deb5bf48f4ea339b674b427);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_14_host);
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


static PyObject *impl_requests$cookies$$$function_15___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_headers = python_pars[1];
    struct Nuitka_FrameObject *frame_9a829379de6490f19de38b27c44dfed2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9a829379de6490f19de38b27c44dfed2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_9a829379de6490f19de38b27c44dfed2, codeobj_9a829379de6490f19de38b27c44dfed2, module_requests$cookies, sizeof(void *)+sizeof(void *));
    frame_9a829379de6490f19de38b27c44dfed2 = cache_frame_9a829379de6490f19de38b27c44dfed2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9a829379de6490f19de38b27c44dfed2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9a829379de6490f19de38b27c44dfed2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_headers);
        tmp_assattr_name_1 = par_headers;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__headers, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9a829379de6490f19de38b27c44dfed2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9a829379de6490f19de38b27c44dfed2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9a829379de6490f19de38b27c44dfed2, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_9a829379de6490f19de38b27c44dfed2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9a829379de6490f19de38b27c44dfed2, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9a829379de6490f19de38b27c44dfed2,
        type_description_1,
        par_self,
        par_headers
    );


    // Release cached frame.
    if (frame_9a829379de6490f19de38b27c44dfed2 == cache_frame_9a829379de6490f19de38b27c44dfed2) {
        Py_DECREF(frame_9a829379de6490f19de38b27c44dfed2);
    }
    cache_frame_9a829379de6490f19de38b27c44dfed2 = NULL;

    assertFrameObject(frame_9a829379de6490f19de38b27c44dfed2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_15___init__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function_16_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1ebf49be1e5265a0379da0bd994d1c75;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1ebf49be1e5265a0379da0bd994d1c75 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_1ebf49be1e5265a0379da0bd994d1c75, codeobj_1ebf49be1e5265a0379da0bd994d1c75, module_requests$cookies, sizeof(void *));
    frame_1ebf49be1e5265a0379da0bd994d1c75 = cache_frame_1ebf49be1e5265a0379da0bd994d1c75;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1ebf49be1e5265a0379da0bd994d1c75);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1ebf49be1e5265a0379da0bd994d1c75) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__headers);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1ebf49be1e5265a0379da0bd994d1c75);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1ebf49be1e5265a0379da0bd994d1c75);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1ebf49be1e5265a0379da0bd994d1c75);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1ebf49be1e5265a0379da0bd994d1c75, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_1ebf49be1e5265a0379da0bd994d1c75->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1ebf49be1e5265a0379da0bd994d1c75, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1ebf49be1e5265a0379da0bd994d1c75,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_1ebf49be1e5265a0379da0bd994d1c75 == cache_frame_1ebf49be1e5265a0379da0bd994d1c75) {
        Py_DECREF(frame_1ebf49be1e5265a0379da0bd994d1c75);
    }
    cache_frame_1ebf49be1e5265a0379da0bd994d1c75 = NULL;

    assertFrameObject(frame_1ebf49be1e5265a0379da0bd994d1c75);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_16_info);
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


static PyObject *impl_requests$cookies$$$function_17_getheaders(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_0af893486df891d157b17889ccb7a180;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0af893486df891d157b17889ccb7a180 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_0af893486df891d157b17889ccb7a180, codeobj_0af893486df891d157b17889ccb7a180, module_requests$cookies, sizeof(void *)+sizeof(void *));
    frame_0af893486df891d157b17889ccb7a180 = cache_frame_0af893486df891d157b17889ccb7a180;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0af893486df891d157b17889ccb7a180);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0af893486df891d157b17889ccb7a180) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__headers);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_args_element_name_1 = par_name;
        frame_0af893486df891d157b17889ccb7a180->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_getheaders, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0af893486df891d157b17889ccb7a180);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0af893486df891d157b17889ccb7a180);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0af893486df891d157b17889ccb7a180, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_0af893486df891d157b17889ccb7a180->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0af893486df891d157b17889ccb7a180, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0af893486df891d157b17889ccb7a180,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame.
    if (frame_0af893486df891d157b17889ccb7a180 == cache_frame_0af893486df891d157b17889ccb7a180) {
        Py_DECREF(frame_0af893486df891d157b17889ccb7a180);
    }
    cache_frame_0af893486df891d157b17889ccb7a180 = NULL;

    assertFrameObject(frame_0af893486df891d157b17889ccb7a180);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_17_getheaders);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function_18_extract_cookies_to_jar(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_jar = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *par_response = python_pars[2];
    PyObject *var_req = NULL;
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_8bafccf72e3a130b23defc7a088902cd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8bafccf72e3a130b23defc7a088902cd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_8bafccf72e3a130b23defc7a088902cd, codeobj_8bafccf72e3a130b23defc7a088902cd, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_8bafccf72e3a130b23defc7a088902cd = cache_frame_8bafccf72e3a130b23defc7a088902cd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8bafccf72e3a130b23defc7a088902cd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8bafccf72e3a130b23defc7a088902cd) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(par_response);
        tmp_source_name_1 = par_response;
        tmp_attribute_name_1 = const_str_plain__original_response;
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_source_name_1, tmp_attribute_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_response);
        tmp_source_name_2 = par_response;
        tmp_and_right_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__original_response);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_operand_name_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_MockRequest);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MockRequest);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21552 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_request);
        tmp_args_element_name_1 = par_request;
        frame_8bafccf72e3a130b23defc7a088902cd->m_frame.f_lineno = 129;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_req == NULL);
        var_req = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_MockResponse);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MockResponse);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21585 ], 34, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 131;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT(par_response);
        tmp_source_name_4 = par_response;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__original_response);
        if (tmp_source_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_msg);
        Py_DECREF(tmp_source_name_3);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_8bafccf72e3a130b23defc7a088902cd->m_frame.f_lineno = 131;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(par_jar);
        tmp_called_instance_1 = par_jar;
        CHECK_OBJECT(var_res);
        tmp_args_element_name_3 = var_res;
        CHECK_OBJECT(var_req);
        tmp_args_element_name_4 = var_req;
        frame_8bafccf72e3a130b23defc7a088902cd->m_frame.f_lineno = 132;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain_extract_cookies, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8bafccf72e3a130b23defc7a088902cd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8bafccf72e3a130b23defc7a088902cd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8bafccf72e3a130b23defc7a088902cd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8bafccf72e3a130b23defc7a088902cd, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_8bafccf72e3a130b23defc7a088902cd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8bafccf72e3a130b23defc7a088902cd, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8bafccf72e3a130b23defc7a088902cd,
        type_description_1,
        par_jar,
        par_request,
        par_response,
        var_req,
        var_res
    );


    // Release cached frame.
    if (frame_8bafccf72e3a130b23defc7a088902cd == cache_frame_8bafccf72e3a130b23defc7a088902cd) {
        Py_DECREF(frame_8bafccf72e3a130b23defc7a088902cd);
    }
    cache_frame_8bafccf72e3a130b23defc7a088902cd = NULL;

    assertFrameObject(frame_8bafccf72e3a130b23defc7a088902cd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_18_extract_cookies_to_jar);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_req);
    var_req = NULL;

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

    Py_XDECREF(var_req);
    var_req = NULL;

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
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_18_extract_cookies_to_jar);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_jar);
    Py_DECREF(par_jar);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_jar);
    Py_DECREF(par_jar);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function_19_get_cookie_header(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_jar = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *var_r = NULL;
    struct Nuitka_FrameObject *frame_eaa2a5a358f7b958528567cc2de2a41a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_eaa2a5a358f7b958528567cc2de2a41a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_eaa2a5a358f7b958528567cc2de2a41a, codeobj_eaa2a5a358f7b958528567cc2de2a41a, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_eaa2a5a358f7b958528567cc2de2a41a = cache_frame_eaa2a5a358f7b958528567cc2de2a41a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_eaa2a5a358f7b958528567cc2de2a41a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_eaa2a5a358f7b958528567cc2de2a41a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_MockRequest);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MockRequest);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21552 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 141;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_request);
        tmp_args_element_name_1 = par_request;
        frame_eaa2a5a358f7b958528567cc2de2a41a->m_frame.f_lineno = 141;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_r == NULL);
        var_r = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(par_jar);
        tmp_called_instance_1 = par_jar;
        CHECK_OBJECT(var_r);
        tmp_args_element_name_2 = var_r;
        frame_eaa2a5a358f7b958528567cc2de2a41a->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = {tmp_args_element_name_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_add_cookie_header, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_r);
        tmp_called_instance_3 = var_r;
        frame_eaa2a5a358f7b958528567cc2de2a41a->m_frame.f_lineno = 143;
        tmp_called_instance_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_get_new_headers);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_eaa2a5a358f7b958528567cc2de2a41a->m_frame.f_lineno = 143;
        tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_Cookie_tuple, 0));

        Py_DECREF(tmp_called_instance_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_eaa2a5a358f7b958528567cc2de2a41a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_eaa2a5a358f7b958528567cc2de2a41a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_eaa2a5a358f7b958528567cc2de2a41a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_eaa2a5a358f7b958528567cc2de2a41a, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_eaa2a5a358f7b958528567cc2de2a41a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eaa2a5a358f7b958528567cc2de2a41a, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eaa2a5a358f7b958528567cc2de2a41a,
        type_description_1,
        par_jar,
        par_request,
        var_r
    );


    // Release cached frame.
    if (frame_eaa2a5a358f7b958528567cc2de2a41a == cache_frame_eaa2a5a358f7b958528567cc2de2a41a) {
        Py_DECREF(frame_eaa2a5a358f7b958528567cc2de2a41a);
    }
    cache_frame_eaa2a5a358f7b958528567cc2de2a41a = NULL;

    assertFrameObject(frame_eaa2a5a358f7b958528567cc2de2a41a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_19_get_cookie_header);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_r);
    Py_DECREF(var_r);
    var_r = NULL;

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

    Py_XDECREF(var_r);
    var_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_19_get_cookie_header);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_jar);
    Py_DECREF(par_jar);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_jar);
    Py_DECREF(par_jar);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function_20_remove_cookie_by_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cookiejar = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_domain = python_pars[2];
    PyObject *par_path = python_pars[3];
    PyObject *var_clearables = NULL;
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_0b33f1f305a37429aa1d50841a297ed3;
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
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_0b33f1f305a37429aa1d50841a297ed3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_clearables == NULL);
        var_clearables = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_0b33f1f305a37429aa1d50841a297ed3, codeobj_0b33f1f305a37429aa1d50841a297ed3, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_0b33f1f305a37429aa1d50841a297ed3 = cache_frame_0b33f1f305a37429aa1d50841a297ed3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0b33f1f305a37429aa1d50841a297ed3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0b33f1f305a37429aa1d50841a297ed3) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_cookiejar);
        tmp_iter_arg_1 = par_cookiejar;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
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
                exception_lineno = 152;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_4;
            Py_INCREF(var_cookie);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(var_cookie);
        tmp_source_name_1 = var_cookie;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_name);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_name);
        tmp_compexpr_right_1 = par_name;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
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
        goto loop_start_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(par_domain);
        tmp_compexpr_left_2 = par_domain;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_left_value_1 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_domain);
        tmp_compexpr_left_3 = par_domain;
        CHECK_OBJECT(var_cookie);
        tmp_source_name_2 = var_cookie;
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_domain);
        if (tmp_compexpr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        goto loop_start_1;
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT(par_path);
        tmp_compexpr_left_4 = par_path;
        tmp_compexpr_right_4 = Py_None;
        tmp_and_left_value_2 = (tmp_compexpr_left_4 != tmp_compexpr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_path);
        tmp_compexpr_left_5 = par_path;
        CHECK_OBJECT(var_cookie);
        tmp_source_name_3 = var_cookie;
        tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_path);
        if (tmp_compexpr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_right_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        goto loop_start_1;
        branch_no_3:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT(var_clearables);
        tmp_source_name_4 = var_clearables;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_append);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_cookie);
        tmp_source_name_5 = var_cookie;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_domain);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 159;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_1 = PyTuple_New(3);
        PyTuple_SET_ITEM(tmp_args_element_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_cookie);
        tmp_source_name_6 = var_cookie;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_path);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 159;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM(tmp_args_element_name_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_cookie);
        tmp_source_name_7 = var_cookie;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_name);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 159;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM(tmp_args_element_name_1, 2, tmp_tuple_element_1);
        frame_0b33f1f305a37429aa1d50841a297ed3->m_frame.f_lineno = 159;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 152;
        type_description_1 = "oooooo";
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
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(var_clearables);
        tmp_iter_arg_2 = var_clearables;
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 161;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
        tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 161;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 161;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooo";
            exception_lineno = 161;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_10;
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
                    exception_lineno = 161;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format(PyExc_ValueError, "too many values to unpack");
#else
            PyErr_Format(PyExc_ValueError, "too many values to unpack (expected 3)");
#endif
            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            type_description_1 = "oooooo";
            exception_lineno = 161;
            goto try_except_handler_5;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_domain;
            assert(old != NULL);
            par_domain = tmp_assign_source_11;
            Py_INCREF(par_domain);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_path;
            assert(old != NULL);
            par_path = tmp_assign_source_12;
            Py_INCREF(par_path);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = par_name;
            assert(old != NULL);
            par_name = tmp_assign_source_13;
            Py_INCREF(par_name);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(par_cookiejar);
        tmp_called_instance_1 = par_cookiejar;
        CHECK_OBJECT(par_domain);
        tmp_args_element_name_2 = par_domain;
        CHECK_OBJECT(par_path);
        tmp_args_element_name_3 = par_path;
        CHECK_OBJECT(par_name);
        tmp_args_element_name_4 = par_name;
        frame_0b33f1f305a37429aa1d50841a297ed3->m_frame.f_lineno = 162;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_1, const_str_plain_clear, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 161;
        type_description_1 = "oooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0b33f1f305a37429aa1d50841a297ed3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0b33f1f305a37429aa1d50841a297ed3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0b33f1f305a37429aa1d50841a297ed3, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_0b33f1f305a37429aa1d50841a297ed3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0b33f1f305a37429aa1d50841a297ed3, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0b33f1f305a37429aa1d50841a297ed3,
        type_description_1,
        par_cookiejar,
        par_name,
        par_domain,
        par_path,
        var_clearables,
        var_cookie
    );


    // Release cached frame.
    if (frame_0b33f1f305a37429aa1d50841a297ed3 == cache_frame_0b33f1f305a37429aa1d50841a297ed3) {
        Py_DECREF(frame_0b33f1f305a37429aa1d50841a297ed3);
    }
    cache_frame_0b33f1f305a37429aa1d50841a297ed3 = NULL;

    assertFrameObject(frame_0b33f1f305a37429aa1d50841a297ed3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_20_remove_cookie_by_name);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)par_name);
    Py_DECREF(par_name);
    par_name = NULL;

    CHECK_OBJECT((PyObject *)par_domain);
    Py_DECREF(par_domain);
    par_domain = NULL;

    CHECK_OBJECT((PyObject *)par_path);
    Py_DECREF(par_path);
    par_path = NULL;

    CHECK_OBJECT((PyObject *)var_clearables);
    Py_DECREF(var_clearables);
    var_clearables = NULL;

    Py_XDECREF(var_cookie);
    var_cookie = NULL;

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

    Py_XDECREF(par_name);
    par_name = NULL;

    Py_XDECREF(par_domain);
    par_domain = NULL;

    Py_XDECREF(par_path);
    par_path = NULL;

    CHECK_OBJECT((PyObject *)var_clearables);
    Py_DECREF(var_clearables);
    var_clearables = NULL;

    Py_XDECREF(var_cookie);
    var_cookie = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_20_remove_cookie_by_name);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cookiejar);
    Py_DECREF(par_cookiejar);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cookiejar);
    Py_DECREF(par_cookiejar);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function_21_get(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_default = python_pars[2];
    PyObject *par_domain = python_pars[3];
    PyObject *par_path = python_pars[4];
    struct Nuitka_FrameObject *frame_05195060a61ae40d4609c3cec7aff7ea;
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
    static struct Nuitka_FrameObject *cache_frame_05195060a61ae40d4609c3cec7aff7ea = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_05195060a61ae40d4609c3cec7aff7ea, codeobj_05195060a61ae40d4609c3cec7aff7ea, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_05195060a61ae40d4609c3cec7aff7ea = cache_frame_05195060a61ae40d4609c3cec7aff7ea;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_05195060a61ae40d4609c3cec7aff7ea);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_05195060a61ae40d4609c3cec7aff7ea) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_name);
        tmp_args_element_name_1 = par_name;
        CHECK_OBJECT(par_domain);
        tmp_args_element_name_2 = par_domain;
        CHECK_OBJECT(par_path);
        tmp_args_element_name_3 = par_path;
        frame_05195060a61ae40d4609c3cec7aff7ea->m_frame.f_lineno = 197;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(tmp_called_instance_1, const_str_plain__find_no_duplicates, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooo";
            goto try_except_handler_1;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_21_get);
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_05195060a61ae40d4609c3cec7aff7ea, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_05195060a61ae40d4609c3cec7aff7ea, exception_keeper_lineno_1);
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
        tmp_compexpr_right_1 = PyExc_KeyError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        CHECK_OBJECT(par_default);
        tmp_return_value = par_default;
        Py_INCREF(tmp_return_value);
        goto try_return_handler_2;
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 196;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_05195060a61ae40d4609c3cec7aff7ea->m_frame) frame_05195060a61ae40d4609c3cec7aff7ea->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_21_get);
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto frame_return_exit_1;
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
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_05195060a61ae40d4609c3cec7aff7ea);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_05195060a61ae40d4609c3cec7aff7ea);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_05195060a61ae40d4609c3cec7aff7ea);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_05195060a61ae40d4609c3cec7aff7ea, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_05195060a61ae40d4609c3cec7aff7ea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_05195060a61ae40d4609c3cec7aff7ea, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_05195060a61ae40d4609c3cec7aff7ea,
        type_description_1,
        par_self,
        par_name,
        par_default,
        par_domain,
        par_path
    );


    // Release cached frame.
    if (frame_05195060a61ae40d4609c3cec7aff7ea == cache_frame_05195060a61ae40d4609c3cec7aff7ea) {
        Py_DECREF(frame_05195060a61ae40d4609c3cec7aff7ea);
    }
    cache_frame_05195060a61ae40d4609c3cec7aff7ea = NULL;

    assertFrameObject(frame_05195060a61ae40d4609c3cec7aff7ea);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_21_get);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_domain);
    Py_DECREF(par_domain);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    CHECK_OBJECT(par_domain);
    Py_DECREF(par_domain);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function_22_set(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_value = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    PyObject *var_c = NULL;
    struct Nuitka_FrameObject *frame_e967e57eb0a809976913ad874c9b64e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e967e57eb0a809976913ad874c9b64e4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_e967e57eb0a809976913ad874c9b64e4, codeobj_e967e57eb0a809976913ad874c9b64e4, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_e967e57eb0a809976913ad874c9b64e4 = cache_frame_e967e57eb0a809976913ad874c9b64e4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e967e57eb0a809976913ad874c9b64e4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e967e57eb0a809976913ad874c9b64e4) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_value);
        tmp_compexpr_left_1 = par_value;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_called_instance_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_remove_cookie_by_name);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_remove_cookie_by_name);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 21619 ], 43, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 208;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            CHECK_OBJECT(par_self);
            tmp_tuple_element_1 = par_self;
            tmp_args_name_1 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_name);
            tmp_tuple_element_1 = par_name;
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
            tmp_dict_key_1 = const_str_plain_domain;
            CHECK_OBJECT(par_kwargs);
            tmp_called_instance_1 = par_kwargs;
            frame_e967e57eb0a809976913ad874c9b64e4->m_frame.f_lineno = 208;
            tmp_dict_value_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_domain_tuple, 0));

            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_name_1);

                exception_lineno = 208;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = const_str_plain_path;
            CHECK_OBJECT(par_kwargs);
            tmp_called_instance_2 = par_kwargs;
            frame_e967e57eb0a809976913ad874c9b64e4->m_frame.f_lineno = 208;
            tmp_dict_value_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_path_tuple, 0));

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_name_1);
                Py_DECREF(tmp_kw_name_1);

                exception_lineno = 208;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            frame_e967e57eb0a809976913ad874c9b64e4->m_frame.f_lineno = 208;
            tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
            Py_DECREF(tmp_args_name_1);
            Py_DECREF(tmp_kw_name_1);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        tmp_return_value = Py_None;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_Morsel);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Morsel);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21662 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 211;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_2;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_morsel_to_cookie);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_morsel_to_cookie);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 21690 ], 38, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 212;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            CHECK_OBJECT(par_value);
            tmp_args_element_name_1 = par_value;
            frame_e967e57eb0a809976913ad874c9b64e4->m_frame.f_lineno = 212;
            tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert(var_c == NULL);
            var_c = tmp_assign_source_1;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_dircall_arg3_1;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_create_cookie);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_create_cookie);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 21728 ], 35, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 214;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_dircall_arg1_1 = tmp_mvar_value_4;
            CHECK_OBJECT(par_name);
            tmp_tuple_element_2 = par_name;
            tmp_dircall_arg2_1 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_value);
            tmp_tuple_element_2 = par_value;
            Py_INCREF(tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_dircall_arg2_1, 1, tmp_tuple_element_2);
            CHECK_OBJECT(par_kwargs);
            tmp_dircall_arg3_1 = par_kwargs;
            Py_INCREF(tmp_dircall_arg1_1);
            Py_INCREF(tmp_dircall_arg3_1);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
                tmp_assign_source_2 = impl___internal__$$$function_1_complex_call_helper_pos_star_dict(dir_call_args);
            }
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert(var_c == NULL);
            var_c = tmp_assign_source_2;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_c);
        tmp_args_element_name_2 = var_c;
        frame_e967e57eb0a809976913ad874c9b64e4->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = {tmp_args_element_name_2};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_set_cookie, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e967e57eb0a809976913ad874c9b64e4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e967e57eb0a809976913ad874c9b64e4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e967e57eb0a809976913ad874c9b64e4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e967e57eb0a809976913ad874c9b64e4, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_e967e57eb0a809976913ad874c9b64e4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e967e57eb0a809976913ad874c9b64e4, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e967e57eb0a809976913ad874c9b64e4,
        type_description_1,
        par_self,
        par_name,
        par_value,
        par_kwargs,
        var_c
    );


    // Release cached frame.
    if (frame_e967e57eb0a809976913ad874c9b64e4 == cache_frame_e967e57eb0a809976913ad874c9b64e4) {
        Py_DECREF(frame_e967e57eb0a809976913ad874c9b64e4);
    }
    cache_frame_e967e57eb0a809976913ad874c9b64e4 = NULL;

    assertFrameObject(frame_e967e57eb0a809976913ad874c9b64e4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_c);
    tmp_return_value = var_c;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_22_set);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_c);
    var_c = NULL;

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

    Py_XDECREF(var_c);
    var_c = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_22_set);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function_23_iterkeys(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_self;
    Py_INCREF(((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0]);


    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_23_iterkeys);
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



struct requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_locals {
    PyObject *var_cookie;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value ) {
    CHECK_OBJECT((PyObject *)generator);
    assert(Nuitka_Generator_Check( (PyObject *)generator ));

    // Heap access if used.
    struct requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_locals *generator_heap = (struct requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_cookie = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_m_frame, codeobj_02517238b9230788458c666c3363b350, module_requests$cookies, sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_iter_arg_1;
        if (PyCell_GET(generator->m_closure[0]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 224;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = PyCell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 224;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "co";
                generator_heap->exception_lineno = 224;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_cookie;
            generator_heap->var_cookie = tmp_assign_source_3;
            Py_INCREF(generator_heap->var_cookie);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_source_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_cookie);
        tmp_source_name_1 = generator_heap->var_cookie;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_name);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 225;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_source_name_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_source_name_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 225;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 224;
        generator_heap->type_description_1 = "co";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

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
            generator_heap->var_cookie
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
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_cookie);
    generator_heap->var_cookie = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

    Py_XDECREF(generator_heap->var_cookie);
    generator_heap->var_cookie = NULL;



    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_maker(void) {
    return Nuitka_Generator_New(
        requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_context,
        module_requests$cookies,
        const_str_plain_iterkeys,
#if PYTHON_VERSION >= 350
        const_str_digest_9559440875cf716ec7a8bef311cbaefe,
#endif
        codeobj_02517238b9230788458c666c3363b350,
        1,
        sizeof(struct requests$cookies$$$function_23_iterkeys$$$genobj_1_iterkeys_locals)
    );
}


static PyObject *impl_requests$cookies$$$function_24_keys(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ddcafde6b7a4cbd6c16f37a6db23b713;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ddcafde6b7a4cbd6c16f37a6db23b713 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_ddcafde6b7a4cbd6c16f37a6db23b713, codeobj_ddcafde6b7a4cbd6c16f37a6db23b713, module_requests$cookies, sizeof(void *));
    frame_ddcafde6b7a4cbd6c16f37a6db23b713 = cache_frame_ddcafde6b7a4cbd6c16f37a6db23b713;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ddcafde6b7a4cbd6c16f37a6db23b713);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ddcafde6b7a4cbd6c16f37a6db23b713) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_ddcafde6b7a4cbd6c16f37a6db23b713->m_frame.f_lineno = 233;
        tmp_list_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_iterkeys);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PySequence_List(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ddcafde6b7a4cbd6c16f37a6db23b713);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ddcafde6b7a4cbd6c16f37a6db23b713);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ddcafde6b7a4cbd6c16f37a6db23b713);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ddcafde6b7a4cbd6c16f37a6db23b713, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_ddcafde6b7a4cbd6c16f37a6db23b713->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ddcafde6b7a4cbd6c16f37a6db23b713, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ddcafde6b7a4cbd6c16f37a6db23b713,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_ddcafde6b7a4cbd6c16f37a6db23b713 == cache_frame_ddcafde6b7a4cbd6c16f37a6db23b713) {
        Py_DECREF(frame_ddcafde6b7a4cbd6c16f37a6db23b713);
    }
    cache_frame_ddcafde6b7a4cbd6c16f37a6db23b713 = NULL;

    assertFrameObject(frame_ddcafde6b7a4cbd6c16f37a6db23b713);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_24_keys);
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


static PyObject *impl_requests$cookies$$$function_25_itervalues(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_self;
    Py_INCREF(((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0]);


    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_25_itervalues);
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



struct requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_locals {
    PyObject *var_cookie;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value ) {
    CHECK_OBJECT((PyObject *)generator);
    assert(Nuitka_Generator_Check( (PyObject *)generator ));

    // Heap access if used.
    struct requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_locals *generator_heap = (struct requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_cookie = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_m_frame, codeobj_a05f33e508216c20b90c272c1c9b75e7, module_requests$cookies, sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_iter_arg_1;
        if (PyCell_GET(generator->m_closure[0]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 241;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = PyCell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 241;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "co";
                generator_heap->exception_lineno = 241;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_cookie;
            generator_heap->var_cookie = tmp_assign_source_3;
            Py_INCREF(generator_heap->var_cookie);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_source_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_cookie);
        tmp_source_name_1 = generator_heap->var_cookie;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_value);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 242;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_source_name_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_source_name_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 242;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 241;
        generator_heap->type_description_1 = "co";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

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
            generator_heap->var_cookie
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
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_cookie);
    generator_heap->var_cookie = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

    Py_XDECREF(generator_heap->var_cookie);
    generator_heap->var_cookie = NULL;



    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_maker(void) {
    return Nuitka_Generator_New(
        requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_context,
        module_requests$cookies,
        const_str_plain_itervalues,
#if PYTHON_VERSION >= 350
        const_str_digest_0a2127aa931e582083c667383d216ebd,
#endif
        codeobj_a05f33e508216c20b90c272c1c9b75e7,
        1,
        sizeof(struct requests$cookies$$$function_25_itervalues$$$genobj_1_itervalues_locals)
    );
}


static PyObject *impl_requests$cookies$$$function_26_values(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_56e8ab0e9ec81b1e9a664d772dbc2909;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_56e8ab0e9ec81b1e9a664d772dbc2909 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_56e8ab0e9ec81b1e9a664d772dbc2909, codeobj_56e8ab0e9ec81b1e9a664d772dbc2909, module_requests$cookies, sizeof(void *));
    frame_56e8ab0e9ec81b1e9a664d772dbc2909 = cache_frame_56e8ab0e9ec81b1e9a664d772dbc2909;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_56e8ab0e9ec81b1e9a664d772dbc2909);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_56e8ab0e9ec81b1e9a664d772dbc2909) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_56e8ab0e9ec81b1e9a664d772dbc2909->m_frame.f_lineno = 250;
        tmp_list_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_itervalues);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PySequence_List(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_56e8ab0e9ec81b1e9a664d772dbc2909);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_56e8ab0e9ec81b1e9a664d772dbc2909);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_56e8ab0e9ec81b1e9a664d772dbc2909);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_56e8ab0e9ec81b1e9a664d772dbc2909, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_56e8ab0e9ec81b1e9a664d772dbc2909->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_56e8ab0e9ec81b1e9a664d772dbc2909, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_56e8ab0e9ec81b1e9a664d772dbc2909,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_56e8ab0e9ec81b1e9a664d772dbc2909 == cache_frame_56e8ab0e9ec81b1e9a664d772dbc2909) {
        Py_DECREF(frame_56e8ab0e9ec81b1e9a664d772dbc2909);
    }
    cache_frame_56e8ab0e9ec81b1e9a664d772dbc2909 = NULL;

    assertFrameObject(frame_56e8ab0e9ec81b1e9a664d772dbc2909);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_26_values);
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


static PyObject *impl_requests$cookies$$$function_27_iteritems(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = PyCell_NEW1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_self;
    Py_INCREF(((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0]);


    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_27_iteritems);
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



struct requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_locals {
    PyObject *var_cookie;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value ) {
    CHECK_OBJECT((PyObject *)generator);
    assert(Nuitka_Generator_Check( (PyObject *)generator ));

    // Heap access if used.
    struct requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_locals *generator_heap = (struct requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_cookie = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_m_frame, codeobj_fbdbcbf277d963cf6a18caccf8abfbae, module_requests$cookies, sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_iter_arg_1;
        if (PyCell_GET(generator->m_closure[0]) == NULL) {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF(generator_heap->exception_type);
            generator_heap->exception_value = PyUnicode_FromFormat("free variable '%s' referenced before assignment in enclosing scope", "self");
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = PyCell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 258;
            generator_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "co";
                generator_heap->exception_lineno = 258;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_cookie;
            generator_heap->var_cookie = tmp_assign_source_3;
            Py_INCREF(generator_heap->var_cookie);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_cookie);
        tmp_source_name_1 = generator_heap->var_cookie;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_name);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 259;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        tmp_expression_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_expression_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(generator_heap->var_cookie);
        tmp_source_name_2 = generator_heap->var_cookie;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_value);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_expression_name_1);

            generator_heap->exception_lineno = 259;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM(tmp_expression_name_1, 1, tmp_tuple_element_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_source_name_1, sizeof(PyObject *), &tmp_source_name_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_source_name_1, sizeof(PyObject *), &tmp_source_name_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 259;
            generator_heap->type_description_1 = "co";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 258;
        generator_heap->type_description_1 = "co";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

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
            generator_heap->var_cookie
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
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_cookie);
    generator_heap->var_cookie = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;

    Py_XDECREF(generator_heap->var_cookie);
    generator_heap->var_cookie = NULL;



    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_maker(void) {
    return Nuitka_Generator_New(
        requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_context,
        module_requests$cookies,
        const_str_plain_iteritems,
#if PYTHON_VERSION >= 350
        const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d,
#endif
        codeobj_fbdbcbf277d963cf6a18caccf8abfbae,
        1,
        sizeof(struct requests$cookies$$$function_27_iteritems$$$genobj_1_iteritems_locals)
    );
}


static PyObject *impl_requests$cookies$$$function_28_items(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_06d3d3dc40ce30fd48511cedef11c0ee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_06d3d3dc40ce30fd48511cedef11c0ee = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_06d3d3dc40ce30fd48511cedef11c0ee, codeobj_06d3d3dc40ce30fd48511cedef11c0ee, module_requests$cookies, sizeof(void *));
    frame_06d3d3dc40ce30fd48511cedef11c0ee = cache_frame_06d3d3dc40ce30fd48511cedef11c0ee;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_06d3d3dc40ce30fd48511cedef11c0ee);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_06d3d3dc40ce30fd48511cedef11c0ee) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_06d3d3dc40ce30fd48511cedef11c0ee->m_frame.f_lineno = 268;
        tmp_list_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_iteritems);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PySequence_List(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_06d3d3dc40ce30fd48511cedef11c0ee);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_06d3d3dc40ce30fd48511cedef11c0ee);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_06d3d3dc40ce30fd48511cedef11c0ee);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_06d3d3dc40ce30fd48511cedef11c0ee, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_06d3d3dc40ce30fd48511cedef11c0ee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_06d3d3dc40ce30fd48511cedef11c0ee, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_06d3d3dc40ce30fd48511cedef11c0ee,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_06d3d3dc40ce30fd48511cedef11c0ee == cache_frame_06d3d3dc40ce30fd48511cedef11c0ee) {
        Py_DECREF(frame_06d3d3dc40ce30fd48511cedef11c0ee);
    }
    cache_frame_06d3d3dc40ce30fd48511cedef11c0ee = NULL;

    assertFrameObject(frame_06d3d3dc40ce30fd48511cedef11c0ee);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_28_items);
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


static PyObject *impl_requests$cookies$$$function_29_list_domains(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_domains = NULL;
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_79a3ab4c4167833e50d1315e50dece1d;
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
    static struct Nuitka_FrameObject *cache_frame_79a3ab4c4167833e50d1315e50dece1d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_domains == NULL);
        var_domains = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_79a3ab4c4167833e50d1315e50dece1d, codeobj_79a3ab4c4167833e50d1315e50dece1d, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_79a3ab4c4167833e50d1315e50dece1d = cache_frame_79a3ab4c4167833e50d1315e50dece1d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_79a3ab4c4167833e50d1315e50dece1d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_79a3ab4c4167833e50d1315e50dece1d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_self);
        tmp_iter_arg_1 = par_self;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 273;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_4;
            Py_INCREF(var_cookie);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(var_cookie);
        tmp_source_name_1 = var_cookie;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_domain);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_domains);
        tmp_compexpr_right_1 = var_domains;
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooo";
            goto try_except_handler_2;
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
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT(var_domains);
            tmp_source_name_2 = var_domains;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_append);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(var_cookie);
            tmp_source_name_3 = var_cookie;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_domain);
            if (tmp_args_element_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);

                exception_lineno = 275;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            frame_79a3ab4c4167833e50d1315e50dece1d->m_frame.f_lineno = 275;
            tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            Py_DECREF(tmp_call_result_1);
        }
        branch_no_1:;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 273;
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
    RESTORE_FRAME_EXCEPTION(frame_79a3ab4c4167833e50d1315e50dece1d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_79a3ab4c4167833e50d1315e50dece1d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_79a3ab4c4167833e50d1315e50dece1d, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_79a3ab4c4167833e50d1315e50dece1d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_79a3ab4c4167833e50d1315e50dece1d, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_79a3ab4c4167833e50d1315e50dece1d,
        type_description_1,
        par_self,
        var_domains,
        var_cookie
    );


    // Release cached frame.
    if (frame_79a3ab4c4167833e50d1315e50dece1d == cache_frame_79a3ab4c4167833e50d1315e50dece1d) {
        Py_DECREF(frame_79a3ab4c4167833e50d1315e50dece1d);
    }
    cache_frame_79a3ab4c4167833e50d1315e50dece1d = NULL;

    assertFrameObject(frame_79a3ab4c4167833e50d1315e50dece1d);

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

    CHECK_OBJECT(var_domains);
    tmp_return_value = var_domains;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_29_list_domains);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_domains);
    Py_DECREF(var_domains);
    var_domains = NULL;

    Py_XDECREF(var_cookie);
    var_cookie = NULL;

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

    CHECK_OBJECT((PyObject *)var_domains);
    Py_DECREF(var_domains);
    var_domains = NULL;

    Py_XDECREF(var_cookie);
    var_cookie = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_29_list_domains);
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


static PyObject *impl_requests$cookies$$$function_30_list_paths(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_paths = NULL;
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_512f051785de40d160c918c90cdc0dd6;
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
    static struct Nuitka_FrameObject *cache_frame_512f051785de40d160c918c90cdc0dd6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_paths == NULL);
        var_paths = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_512f051785de40d160c918c90cdc0dd6, codeobj_512f051785de40d160c918c90cdc0dd6, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_512f051785de40d160c918c90cdc0dd6 = cache_frame_512f051785de40d160c918c90cdc0dd6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_512f051785de40d160c918c90cdc0dd6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_512f051785de40d160c918c90cdc0dd6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_self);
        tmp_iter_arg_1 = par_self;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 281;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_4;
            Py_INCREF(var_cookie);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(var_cookie);
        tmp_source_name_1 = var_cookie;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_path);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_paths);
        tmp_compexpr_right_1 = var_paths;
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooo";
            goto try_except_handler_2;
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
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT(var_paths);
            tmp_source_name_2 = var_paths;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_append);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(var_cookie);
            tmp_source_name_3 = var_cookie;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_path);
            if (tmp_args_element_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);

                exception_lineno = 283;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            frame_512f051785de40d160c918c90cdc0dd6->m_frame.f_lineno = 283;
            tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            Py_DECREF(tmp_call_result_1);
        }
        branch_no_1:;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 281;
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
    RESTORE_FRAME_EXCEPTION(frame_512f051785de40d160c918c90cdc0dd6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_512f051785de40d160c918c90cdc0dd6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_512f051785de40d160c918c90cdc0dd6, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_512f051785de40d160c918c90cdc0dd6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_512f051785de40d160c918c90cdc0dd6, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_512f051785de40d160c918c90cdc0dd6,
        type_description_1,
        par_self,
        var_paths,
        var_cookie
    );


    // Release cached frame.
    if (frame_512f051785de40d160c918c90cdc0dd6 == cache_frame_512f051785de40d160c918c90cdc0dd6) {
        Py_DECREF(frame_512f051785de40d160c918c90cdc0dd6);
    }
    cache_frame_512f051785de40d160c918c90cdc0dd6 = NULL;

    assertFrameObject(frame_512f051785de40d160c918c90cdc0dd6);

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

    CHECK_OBJECT(var_paths);
    tmp_return_value = var_paths;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_30_list_paths);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_paths);
    Py_DECREF(var_paths);
    var_paths = NULL;

    Py_XDECREF(var_cookie);
    var_cookie = NULL;

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

    CHECK_OBJECT((PyObject *)var_paths);
    Py_DECREF(var_paths);
    var_paths = NULL;

    Py_XDECREF(var_cookie);
    var_cookie = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_30_list_paths);
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


static PyObject *impl_requests$cookies$$$function_31_multiple_domains(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_domains = NULL;
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_31348c2424ce8cf2917fa161b4cf21f8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_31348c2424ce8cf2917fa161b4cf21f8 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_domains == NULL);
        var_domains = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_31348c2424ce8cf2917fa161b4cf21f8, codeobj_31348c2424ce8cf2917fa161b4cf21f8, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_31348c2424ce8cf2917fa161b4cf21f8 = cache_frame_31348c2424ce8cf2917fa161b4cf21f8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_31348c2424ce8cf2917fa161b4cf21f8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_31348c2424ce8cf2917fa161b4cf21f8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_self);
        tmp_iter_arg_1 = par_self;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 293;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_4;
            Py_INCREF(var_cookie);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(var_cookie);
        tmp_source_name_1 = var_cookie;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_domain);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_compexpr_left_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_cookie);
        tmp_source_name_2 = var_cookie;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_domain);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_domains);
        tmp_compexpr_right_2 = var_domains;
        tmp_res = PySequence_Contains(tmp_compexpr_right_2, tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_return_value = Py_True;
        Py_INCREF(tmp_return_value);
        goto try_return_handler_2;
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT(var_domains);
        tmp_source_name_3 = var_domains;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_append);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_cookie);
        tmp_source_name_4 = var_cookie;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_domain);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 296;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_31348c2424ce8cf2917fa161b4cf21f8->m_frame.f_lineno = 296;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 293;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT((PyObject *)tmp_for_loop_1__iter_value);
    Py_DECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
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
    RESTORE_FRAME_EXCEPTION(frame_31348c2424ce8cf2917fa161b4cf21f8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_31348c2424ce8cf2917fa161b4cf21f8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_31348c2424ce8cf2917fa161b4cf21f8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_31348c2424ce8cf2917fa161b4cf21f8, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_31348c2424ce8cf2917fa161b4cf21f8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_31348c2424ce8cf2917fa161b4cf21f8, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_31348c2424ce8cf2917fa161b4cf21f8,
        type_description_1,
        par_self,
        var_domains,
        var_cookie
    );


    // Release cached frame.
    if (frame_31348c2424ce8cf2917fa161b4cf21f8 == cache_frame_31348c2424ce8cf2917fa161b4cf21f8) {
        Py_DECREF(frame_31348c2424ce8cf2917fa161b4cf21f8);
    }
    cache_frame_31348c2424ce8cf2917fa161b4cf21f8 = NULL;

    assertFrameObject(frame_31348c2424ce8cf2917fa161b4cf21f8);

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

    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_31_multiple_domains);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_domains);
    Py_DECREF(var_domains);
    var_domains = NULL;

    Py_XDECREF(var_cookie);
    var_cookie = NULL;

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

    CHECK_OBJECT((PyObject *)var_domains);
    Py_DECREF(var_domains);
    var_domains = NULL;

    Py_XDECREF(var_cookie);
    var_cookie = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_31_multiple_domains);
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


static PyObject *impl_requests$cookies$$$function_32_get_dict(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_domain = python_pars[1];
    PyObject *par_path = python_pars[2];
    PyObject *var_dictionary = NULL;
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_c42b55b05a0b16f379d854cee4d03943;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_c42b55b05a0b16f379d854cee4d03943 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert(var_dictionary == NULL);
        var_dictionary = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_c42b55b05a0b16f379d854cee4d03943, codeobj_c42b55b05a0b16f379d854cee4d03943, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_c42b55b05a0b16f379d854cee4d03943 = cache_frame_c42b55b05a0b16f379d854cee4d03943;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c42b55b05a0b16f379d854cee4d03943);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c42b55b05a0b16f379d854cee4d03943) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_self);
        tmp_iter_arg_1 = par_self;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "ooooo";
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
                type_description_1 = "ooooo";
                exception_lineno = 307;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_4;
            Py_INCREF(var_cookie);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_1;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT(par_domain);
        tmp_compexpr_left_1 = par_domain;
        tmp_compexpr_right_1 = Py_None;
        tmp_or_left_value_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_cookie);
        tmp_source_name_1 = var_cookie;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_domain);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_domain);
        tmp_compexpr_right_2 = par_domain;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_left_value_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_path);
        tmp_compexpr_left_3 = par_path;
        tmp_compexpr_right_3 = Py_None;
        tmp_or_left_value_2 = (tmp_compexpr_left_3 == tmp_compexpr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(var_cookie);
        tmp_source_name_2 = var_cookie;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_path);
        if (tmp_compexpr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_path);
        tmp_compexpr_right_4 = par_path;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        Py_DECREF(tmp_compexpr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_and_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
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
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT(var_cookie);
            tmp_source_name_3 = var_cookie;
            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_value);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(var_dictionary);
            tmp_dictset_dict = var_dictionary;
            CHECK_OBJECT(var_cookie);
            tmp_source_name_4 = var_cookie;
            tmp_dictset_key = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_name);
            if (tmp_dictset_key == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dictset_value);

                exception_lineno = 312;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            Py_DECREF(tmp_dictset_key);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
        }
        branch_no_1:;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 307;
        type_description_1 = "ooooo";
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
    RESTORE_FRAME_EXCEPTION(frame_c42b55b05a0b16f379d854cee4d03943);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c42b55b05a0b16f379d854cee4d03943);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c42b55b05a0b16f379d854cee4d03943, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_c42b55b05a0b16f379d854cee4d03943->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c42b55b05a0b16f379d854cee4d03943, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c42b55b05a0b16f379d854cee4d03943,
        type_description_1,
        par_self,
        par_domain,
        par_path,
        var_dictionary,
        var_cookie
    );


    // Release cached frame.
    if (frame_c42b55b05a0b16f379d854cee4d03943 == cache_frame_c42b55b05a0b16f379d854cee4d03943) {
        Py_DECREF(frame_c42b55b05a0b16f379d854cee4d03943);
    }
    cache_frame_c42b55b05a0b16f379d854cee4d03943 = NULL;

    assertFrameObject(frame_c42b55b05a0b16f379d854cee4d03943);

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

    CHECK_OBJECT(var_dictionary);
    tmp_return_value = var_dictionary;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_32_get_dict);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_dictionary);
    Py_DECREF(var_dictionary);
    var_dictionary = NULL;

    Py_XDECREF(var_cookie);
    var_cookie = NULL;

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

    CHECK_OBJECT((PyObject *)var_dictionary);
    Py_DECREF(var_dictionary);
    var_dictionary = NULL;

    Py_XDECREF(var_cookie);
    var_cookie = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_32_get_dict);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_domain);
    Py_DECREF(par_domain);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_domain);
    Py_DECREF(par_domain);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function_33___contains__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_bb7c5b2a398ffdb2e2156c14589ec9f6;
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
    static struct Nuitka_FrameObject *cache_frame_bb7c5b2a398ffdb2e2156c14589ec9f6 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_bb7c5b2a398ffdb2e2156c14589ec9f6, codeobj_bb7c5b2a398ffdb2e2156c14589ec9f6, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_bb7c5b2a398ffdb2e2156c14589ec9f6 = cache_frame_bb7c5b2a398ffdb2e2156c14589ec9f6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bb7c5b2a398ffdb2e2156c14589ec9f6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bb7c5b2a398ffdb2e2156c14589ec9f6) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21763 ], 39, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 317;
            type_description_1 = "ooN";
            goto try_except_handler_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooN";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_name);
        tmp_args_element_name_1 = par_name;
        frame_bb7c5b2a398ffdb2e2156c14589ec9f6->m_frame.f_lineno = 317;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain___contains__, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooN";
            goto try_except_handler_1;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_33___contains__);
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_bb7c5b2a398ffdb2e2156c14589ec9f6, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_bb7c5b2a398ffdb2e2156c14589ec9f6, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    PyException_SetTraceback(exception_keeper_value_1, (PyObject *)exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_2;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_CookieConflictError);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CookieConflictError);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21802 ], 41, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 318;
            type_description_1 = "ooN";
            goto try_except_handler_2;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_2;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooN";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        tmp_return_value = Py_True;
        Py_INCREF(tmp_return_value);
        goto try_return_handler_2;
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 316;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_bb7c5b2a398ffdb2e2156c14589ec9f6->m_frame) frame_bb7c5b2a398ffdb2e2156c14589ec9f6->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooN";
        goto try_except_handler_2;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_33___contains__);
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto frame_return_exit_1;
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
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bb7c5b2a398ffdb2e2156c14589ec9f6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bb7c5b2a398ffdb2e2156c14589ec9f6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bb7c5b2a398ffdb2e2156c14589ec9f6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bb7c5b2a398ffdb2e2156c14589ec9f6, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_bb7c5b2a398ffdb2e2156c14589ec9f6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bb7c5b2a398ffdb2e2156c14589ec9f6, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bb7c5b2a398ffdb2e2156c14589ec9f6,
        type_description_1,
        par_self,
        par_name,
        NULL
    );


    // Release cached frame.
    if (frame_bb7c5b2a398ffdb2e2156c14589ec9f6 == cache_frame_bb7c5b2a398ffdb2e2156c14589ec9f6) {
        Py_DECREF(frame_bb7c5b2a398ffdb2e2156c14589ec9f6);
    }
    cache_frame_bb7c5b2a398ffdb2e2156c14589ec9f6 = NULL;

    assertFrameObject(frame_bb7c5b2a398ffdb2e2156c14589ec9f6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_33___contains__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function_34___getitem__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_828b33ab5e9cfde2cc201f593bd01a70;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_828b33ab5e9cfde2cc201f593bd01a70 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_828b33ab5e9cfde2cc201f593bd01a70, codeobj_828b33ab5e9cfde2cc201f593bd01a70, module_requests$cookies, sizeof(void *)+sizeof(void *));
    frame_828b33ab5e9cfde2cc201f593bd01a70 = cache_frame_828b33ab5e9cfde2cc201f593bd01a70;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_828b33ab5e9cfde2cc201f593bd01a70);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_828b33ab5e9cfde2cc201f593bd01a70) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_name);
        tmp_args_element_name_1 = par_name;
        frame_828b33ab5e9cfde2cc201f593bd01a70->m_frame.f_lineno = 328;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain__find_no_duplicates, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_828b33ab5e9cfde2cc201f593bd01a70);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_828b33ab5e9cfde2cc201f593bd01a70);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_828b33ab5e9cfde2cc201f593bd01a70);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_828b33ab5e9cfde2cc201f593bd01a70, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_828b33ab5e9cfde2cc201f593bd01a70->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_828b33ab5e9cfde2cc201f593bd01a70, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_828b33ab5e9cfde2cc201f593bd01a70,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame.
    if (frame_828b33ab5e9cfde2cc201f593bd01a70 == cache_frame_828b33ab5e9cfde2cc201f593bd01a70) {
        Py_DECREF(frame_828b33ab5e9cfde2cc201f593bd01a70);
    }
    cache_frame_828b33ab5e9cfde2cc201f593bd01a70 = NULL;

    assertFrameObject(frame_828b33ab5e9cfde2cc201f593bd01a70);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_34___getitem__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function_35___setitem__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_value = python_pars[2];
    struct Nuitka_FrameObject *frame_556c4c9828b891f4ffdcda2a3bbf0cc0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_556c4c9828b891f4ffdcda2a3bbf0cc0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_556c4c9828b891f4ffdcda2a3bbf0cc0, codeobj_556c4c9828b891f4ffdcda2a3bbf0cc0, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_556c4c9828b891f4ffdcda2a3bbf0cc0 = cache_frame_556c4c9828b891f4ffdcda2a3bbf0cc0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_556c4c9828b891f4ffdcda2a3bbf0cc0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_556c4c9828b891f4ffdcda2a3bbf0cc0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_name);
        tmp_args_element_name_1 = par_name;
        CHECK_OBJECT(par_value);
        tmp_args_element_name_2 = par_value;
        frame_556c4c9828b891f4ffdcda2a3bbf0cc0->m_frame.f_lineno = 335;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain_set, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_556c4c9828b891f4ffdcda2a3bbf0cc0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_556c4c9828b891f4ffdcda2a3bbf0cc0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_556c4c9828b891f4ffdcda2a3bbf0cc0, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_556c4c9828b891f4ffdcda2a3bbf0cc0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_556c4c9828b891f4ffdcda2a3bbf0cc0, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_556c4c9828b891f4ffdcda2a3bbf0cc0,
        type_description_1,
        par_self,
        par_name,
        par_value
    );


    // Release cached frame.
    if (frame_556c4c9828b891f4ffdcda2a3bbf0cc0 == cache_frame_556c4c9828b891f4ffdcda2a3bbf0cc0) {
        Py_DECREF(frame_556c4c9828b891f4ffdcda2a3bbf0cc0);
    }
    cache_frame_556c4c9828b891f4ffdcda2a3bbf0cc0 = NULL;

    assertFrameObject(frame_556c4c9828b891f4ffdcda2a3bbf0cc0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_35___setitem__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function_36___delitem__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_16c2ec9104ff0d08e93814ba44f85e1b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_16c2ec9104ff0d08e93814ba44f85e1b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_16c2ec9104ff0d08e93814ba44f85e1b, codeobj_16c2ec9104ff0d08e93814ba44f85e1b, module_requests$cookies, sizeof(void *)+sizeof(void *));
    frame_16c2ec9104ff0d08e93814ba44f85e1b = cache_frame_16c2ec9104ff0d08e93814ba44f85e1b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_16c2ec9104ff0d08e93814ba44f85e1b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_16c2ec9104ff0d08e93814ba44f85e1b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_remove_cookie_by_name);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_remove_cookie_by_name);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21619 ], 43, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 341;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT(par_name);
        tmp_args_element_name_2 = par_name;
        frame_16c2ec9104ff0d08e93814ba44f85e1b->m_frame.f_lineno = 341;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_16c2ec9104ff0d08e93814ba44f85e1b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_16c2ec9104ff0d08e93814ba44f85e1b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_16c2ec9104ff0d08e93814ba44f85e1b, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_16c2ec9104ff0d08e93814ba44f85e1b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_16c2ec9104ff0d08e93814ba44f85e1b, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_16c2ec9104ff0d08e93814ba44f85e1b,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame.
    if (frame_16c2ec9104ff0d08e93814ba44f85e1b == cache_frame_16c2ec9104ff0d08e93814ba44f85e1b) {
        Py_DECREF(frame_16c2ec9104ff0d08e93814ba44f85e1b);
    }
    cache_frame_16c2ec9104ff0d08e93814ba44f85e1b = NULL;

    assertFrameObject(frame_16c2ec9104ff0d08e93814ba44f85e1b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_36___delitem__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function_37_set_cookie(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cookie = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_872dc3983136e59b9d93e739124d651d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_872dc3983136e59b9d93e739124d651d = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_872dc3983136e59b9d93e739124d651d, codeobj_872dc3983136e59b9d93e739124d651d, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_872dc3983136e59b9d93e739124d651d = cache_frame_872dc3983136e59b9d93e739124d651d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_872dc3983136e59b9d93e739124d651d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_872dc3983136e59b9d93e739124d651d) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_attribute_name_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_cookie);
        tmp_source_name_2 = par_cookie;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_value);
        if (tmp_source_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_attribute_name_1 = const_str_plain_startswith;
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_source_name_1, tmp_attribute_name_1);
        Py_DECREF(tmp_source_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_cookie);
        tmp_source_name_3 = par_cookie;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_value);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        frame_872dc3983136e59b9d93e739124d651d->m_frame.f_lineno = 344;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM(const_tuple_str_chr_34_tuple, 0));

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 344;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_1);
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_cookie);
        tmp_source_name_4 = par_cookie;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_value);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        frame_872dc3983136e59b9d93e739124d651d->m_frame.f_lineno = 344;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_endswith, &PyTuple_GET_ITEM(const_tuple_str_chr_34_tuple, 0));

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 344;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_call_result_2);
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_5;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT(par_cookie);
            tmp_source_name_5 = par_cookie;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_value);
            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_1 = "ooooN";
                goto frame_exception_exit_1;
            }
            frame_872dc3983136e59b9d93e739124d651d->m_frame.f_lineno = 345;
            tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_3, const_str_plain_replace, &PyTuple_GET_ITEM(const_tuple_str_digest_c245c8a772b3a33119deac8565a08f57_str_empty_tuple, 0));

            Py_DECREF(tmp_called_instance_3);
            if (tmp_assattr_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_1 = "ooooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_cookie);
            tmp_assattr_target_1 = par_cookie;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_value, tmp_assattr_name_1);
            Py_DECREF(tmp_assattr_name_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_1 = "ooooN";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21763 ], 39, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 346;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_object_name_1 = par_self;
        tmp_source_name_6 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_source_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_set_cookie);
        Py_DECREF(tmp_source_name_6);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cookie);
        tmp_tuple_element_1 = par_cookie;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___internal__$$$function_4_complex_call_helper_pos_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_872dc3983136e59b9d93e739124d651d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_872dc3983136e59b9d93e739124d651d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_872dc3983136e59b9d93e739124d651d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_872dc3983136e59b9d93e739124d651d, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_872dc3983136e59b9d93e739124d651d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_872dc3983136e59b9d93e739124d651d, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_872dc3983136e59b9d93e739124d651d,
        type_description_1,
        par_self,
        par_cookie,
        par_args,
        par_kwargs,
        NULL
    );


    // Release cached frame.
    if (frame_872dc3983136e59b9d93e739124d651d == cache_frame_872dc3983136e59b9d93e739124d651d) {
        Py_DECREF(frame_872dc3983136e59b9d93e739124d651d);
    }
    cache_frame_872dc3983136e59b9d93e739124d651d = NULL;

    assertFrameObject(frame_872dc3983136e59b9d93e739124d651d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_37_set_cookie);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cookie);
    Py_DECREF(par_cookie);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cookie);
    Py_DECREF(par_cookie);
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


static PyObject *impl_requests$cookies$$$function_38_update(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_fc7d4397ca3e3ddf1e2fc0926fbe045d;
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
    static struct Nuitka_FrameObject *cache_frame_fc7d4397ca3e3ddf1e2fc0926fbe045d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_fc7d4397ca3e3ddf1e2fc0926fbe045d, codeobj_fc7d4397ca3e3ddf1e2fc0926fbe045d, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_fc7d4397ca3e3ddf1e2fc0926fbe045d = cache_frame_fc7d4397ca3e3ddf1e2fc0926fbe045d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_fc7d4397ca3e3ddf1e2fc0926fbe045d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_fc7d4397ca3e3ddf1e2fc0926fbe045d) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_other);
        tmp_isinstance_inst_1 = par_other;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_cookielib);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cookielib);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21843 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 350;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_CookieJar);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooN";
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
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_other);
            tmp_iter_arg_1 = par_other;
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_1 = "oooN";
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
                    type_description_1 = "oooN";
                    exception_lineno = 351;
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
                PyObject *old = var_cookie;
                var_cookie = tmp_assign_source_3;
                Py_INCREF(var_cookie);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT(par_self);
            tmp_source_name_2 = par_self;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_set_cookie);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_1 = "oooN";
                goto try_except_handler_2;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_copy);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_copy);
            }

            if (tmp_mvar_value_2 == NULL) {
                Py_DECREF(tmp_called_name_1);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 5296 ], 26, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 352;
                type_description_1 = "oooN";
                goto try_except_handler_2;
            }

            tmp_called_instance_1 = tmp_mvar_value_2;
            CHECK_OBJECT(var_cookie);
            tmp_args_element_name_2 = var_cookie;
            frame_fc7d4397ca3e3ddf1e2fc0926fbe045d->m_frame.f_lineno = 352;
            {
                PyObject *call_args[] = {tmp_args_element_name_2};
                tmp_args_element_name_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_copy, call_args);
            }

            if (tmp_args_element_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_1);

                exception_lineno = 352;
                type_description_1 = "oooN";
                goto try_except_handler_2;
            }
            frame_fc7d4397ca3e3ddf1e2fc0926fbe045d->m_frame.f_lineno = 352;
            tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_1 = "oooN";
                goto try_except_handler_2;
            }
            Py_DECREF(tmp_call_result_1);
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooN";
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
        Py_XDECREF(tmp_for_loop_1__iter_value);
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
        Py_DECREF(tmp_for_loop_1__for_iterator);
        tmp_for_loop_1__for_iterator = NULL;

        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_type_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_object_name_1;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 21763 ], 39, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 354;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }

            tmp_type_name_1 = tmp_mvar_value_3;
            CHECK_OBJECT(par_self);
            tmp_object_name_1 = par_self;
            tmp_called_instance_2 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_other);
            tmp_args_element_name_3 = par_other;
            frame_fc7d4397ca3e3ddf1e2fc0926fbe045d->m_frame.f_lineno = 354;
            {
                PyObject *call_args[] = {tmp_args_element_name_3};
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_update, call_args);
            }

            Py_DECREF(tmp_called_instance_2);
            if (tmp_call_result_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_1 = "oooN";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_2);
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fc7d4397ca3e3ddf1e2fc0926fbe045d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_fc7d4397ca3e3ddf1e2fc0926fbe045d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fc7d4397ca3e3ddf1e2fc0926fbe045d, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_fc7d4397ca3e3ddf1e2fc0926fbe045d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fc7d4397ca3e3ddf1e2fc0926fbe045d, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fc7d4397ca3e3ddf1e2fc0926fbe045d,
        type_description_1,
        par_self,
        par_other,
        var_cookie,
        NULL
    );


    // Release cached frame.
    if (frame_fc7d4397ca3e3ddf1e2fc0926fbe045d == cache_frame_fc7d4397ca3e3ddf1e2fc0926fbe045d) {
        Py_DECREF(frame_fc7d4397ca3e3ddf1e2fc0926fbe045d);
    }
    cache_frame_fc7d4397ca3e3ddf1e2fc0926fbe045d = NULL;

    assertFrameObject(frame_fc7d4397ca3e3ddf1e2fc0926fbe045d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_38_update);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_cookie);
    var_cookie = NULL;

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

    Py_XDECREF(var_cookie);
    var_cookie = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_38_update);
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


static PyObject *impl_requests$cookies$$$function_39__find(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_domain = python_pars[2];
    PyObject *par_path = python_pars[3];
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_3acf45730aff185bccd346334a8971f0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_3acf45730aff185bccd346334a8971f0 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_3acf45730aff185bccd346334a8971f0, codeobj_3acf45730aff185bccd346334a8971f0, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_3acf45730aff185bccd346334a8971f0 = cache_frame_3acf45730aff185bccd346334a8971f0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3acf45730aff185bccd346334a8971f0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3acf45730aff185bccd346334a8971f0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_self);
        tmp_iter_arg_1 = par_self;
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooooo";
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
                type_description_1 = "ooooo";
                exception_lineno = 368;
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
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_3;
            Py_INCREF(var_cookie);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(var_cookie);
        tmp_source_name_1 = var_cookie;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_name);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_name);
        tmp_compexpr_right_1 = par_name;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooooo";
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
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT(par_domain);
            tmp_compexpr_left_2 = par_domain;
            tmp_compexpr_right_2 = Py_None;
            tmp_or_left_value_1 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
            if (tmp_or_left_truth_1 == 1) {
                goto or_left_1;
            } else {
                goto or_right_1;
            }
            or_right_1:;
            CHECK_OBJECT(var_cookie);
            tmp_source_name_2 = var_cookie;
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_domain);
            if (tmp_compexpr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 370;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(par_domain);
            tmp_compexpr_right_3 = par_domain;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
            Py_DECREF(tmp_compexpr_left_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 370;
                type_description_1 = "ooooo";
                goto try_except_handler_2;
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
                nuitka_bool tmp_condition_result_3;
                int tmp_or_left_truth_2;
                nuitka_bool tmp_or_left_value_2;
                nuitka_bool tmp_or_right_value_2;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_source_name_3;
                CHECK_OBJECT(par_path);
                tmp_compexpr_left_4 = par_path;
                tmp_compexpr_right_4 = Py_None;
                tmp_or_left_value_2 = (tmp_compexpr_left_4 == tmp_compexpr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
                if (tmp_or_left_truth_2 == 1) {
                    goto or_left_2;
                } else {
                    goto or_right_2;
                }
                or_right_2:;
                CHECK_OBJECT(var_cookie);
                tmp_source_name_3 = var_cookie;
                tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_path);
                if (tmp_compexpr_left_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 371;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT(par_path);
                tmp_compexpr_right_5 = par_path;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
                Py_DECREF(tmp_compexpr_left_5);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 371;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }
                tmp_or_right_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_3 = tmp_or_right_value_2;
                goto or_end_2;
                or_left_2:;
                tmp_condition_result_3 = tmp_or_left_value_2;
                or_end_2:;
                if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_3;
                } else {
                    goto branch_no_3;
                }
                branch_yes_3:;
                {
                    PyObject *tmp_source_name_4;
                    CHECK_OBJECT(var_cookie);
                    tmp_source_name_4 = var_cookie;
                    tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_value);
                    if (tmp_return_value == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 372;
                        type_description_1 = "ooooo";
                        goto try_except_handler_2;
                    }
                    goto try_return_handler_2;
                }
                branch_no_3:;
            }
            branch_no_2:;
        }
        branch_no_1:;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 368;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT((PyObject *)tmp_for_loop_1__iter_value);
    Py_DECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
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
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        tmp_left_name_1 = const_str_digest_40890ce8458196445ad3a61ce14829f8;
        CHECK_OBJECT(par_name);
        tmp_tuple_element_1 = par_name;
        tmp_right_name_1 = PyTuple_New(3);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_domain);
        tmp_tuple_element_1 = par_domain;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_path);
        tmp_tuple_element_1 = par_path;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_right_name_1, 2, tmp_tuple_element_1);
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_3acf45730aff185bccd346334a8971f0->m_frame.f_lineno = 374;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_KeyError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 374;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3acf45730aff185bccd346334a8971f0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3acf45730aff185bccd346334a8971f0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3acf45730aff185bccd346334a8971f0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3acf45730aff185bccd346334a8971f0, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_3acf45730aff185bccd346334a8971f0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3acf45730aff185bccd346334a8971f0, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3acf45730aff185bccd346334a8971f0,
        type_description_1,
        par_self,
        par_name,
        par_domain,
        par_path,
        var_cookie
    );


    // Release cached frame.
    if (frame_3acf45730aff185bccd346334a8971f0 == cache_frame_3acf45730aff185bccd346334a8971f0) {
        Py_DECREF(frame_3acf45730aff185bccd346334a8971f0);
    }
    cache_frame_3acf45730aff185bccd346334a8971f0 = NULL;

    assertFrameObject(frame_3acf45730aff185bccd346334a8971f0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_39__find);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_cookie);
    Py_DECREF(var_cookie);
    var_cookie = NULL;

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

    Py_XDECREF(var_cookie);
    var_cookie = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_39__find);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_domain);
    Py_DECREF(par_domain);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_domain);
    Py_DECREF(par_domain);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function_40__find_no_duplicates(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_domain = python_pars[2];
    PyObject *par_path = python_pars[3];
    PyObject *var_toReturn = NULL;
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_76c53f086136ef422680c37c131d5e51;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_76c53f086136ef422680c37c131d5e51 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert(var_toReturn == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_toReturn = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_76c53f086136ef422680c37c131d5e51, codeobj_76c53f086136ef422680c37c131d5e51, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_76c53f086136ef422680c37c131d5e51 = cache_frame_76c53f086136ef422680c37c131d5e51;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_76c53f086136ef422680c37c131d5e51);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_76c53f086136ef422680c37c131d5e51) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_self);
        tmp_iter_arg_1 = par_self;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
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
                exception_lineno = 389;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_4;
            Py_INCREF(var_cookie);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(var_cookie);
        tmp_source_name_1 = var_cookie;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_name);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_name);
        tmp_compexpr_right_1 = par_name;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
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
            nuitka_bool tmp_condition_result_2;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT(par_domain);
            tmp_compexpr_left_2 = par_domain;
            tmp_compexpr_right_2 = Py_None;
            tmp_or_left_value_1 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
            if (tmp_or_left_truth_1 == 1) {
                goto or_left_1;
            } else {
                goto or_right_1;
            }
            or_right_1:;
            CHECK_OBJECT(var_cookie);
            tmp_source_name_2 = var_cookie;
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_domain);
            if (tmp_compexpr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(par_domain);
            tmp_compexpr_right_3 = par_domain;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
            Py_DECREF(tmp_compexpr_left_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
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
                nuitka_bool tmp_condition_result_3;
                int tmp_or_left_truth_2;
                nuitka_bool tmp_or_left_value_2;
                nuitka_bool tmp_or_right_value_2;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_source_name_3;
                CHECK_OBJECT(par_path);
                tmp_compexpr_left_4 = par_path;
                tmp_compexpr_right_4 = Py_None;
                tmp_or_left_value_2 = (tmp_compexpr_left_4 == tmp_compexpr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
                if (tmp_or_left_truth_2 == 1) {
                    goto or_left_2;
                } else {
                    goto or_right_2;
                }
                or_right_2:;
                CHECK_OBJECT(var_cookie);
                tmp_source_name_3 = var_cookie;
                tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_path);
                if (tmp_compexpr_left_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 392;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                CHECK_OBJECT(par_path);
                tmp_compexpr_right_5 = par_path;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
                Py_DECREF(tmp_compexpr_left_5);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 392;
                    type_description_1 = "oooooo";
                    goto try_except_handler_2;
                }
                tmp_or_right_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_condition_result_3 = tmp_or_right_value_2;
                goto or_end_2;
                or_left_2:;
                tmp_condition_result_3 = tmp_or_left_value_2;
                or_end_2:;
                if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_3;
                } else {
                    goto branch_no_3;
                }
                branch_yes_3:;
                {
                    nuitka_bool tmp_condition_result_4;
                    PyObject *tmp_compexpr_left_6;
                    PyObject *tmp_compexpr_right_6;
                    if (var_toReturn == NULL) {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF(exception_type);
                        exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "toReturn");
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 393;
                        type_description_1 = "oooooo";
                        goto try_except_handler_2;
                    }

                    tmp_compexpr_left_6 = var_toReturn;
                    tmp_compexpr_right_6 = Py_None;
                    tmp_condition_result_4 = (tmp_compexpr_left_6 != tmp_compexpr_right_6) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_4;
                    } else {
                        goto branch_no_4;
                    }
                    branch_yes_4:;
                    {
                        PyObject *tmp_raise_type_1;
                        PyObject *tmp_called_name_1;
                        PyObject *tmp_mvar_value_1;
                        PyObject *tmp_args_element_name_1;
                        PyObject *tmp_left_name_1;
                        PyObject *tmp_right_name_1;
                        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_CookieConflictError);

                        if (unlikely(tmp_mvar_value_1 == NULL)) {
                            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CookieConflictError);
                        }

                        if (tmp_mvar_value_1 == NULL) {

                            exception_type = PyExc_NameError;
                            Py_INCREF(exception_type);
                            exception_value = UNSTREAM_STRING(&constant_bin[ 21802 ], 41, 0);
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                            CHAIN_EXCEPTION(exception_value);

                            exception_lineno = 394;
                            type_description_1 = "oooooo";
                            goto try_except_handler_2;
                        }

                        tmp_called_name_1 = tmp_mvar_value_1;
                        tmp_left_name_1 = const_str_digest_6f0eeed3729339eac6c86da181041a13;
                        CHECK_OBJECT(par_name);
                        tmp_right_name_1 = par_name;
                        tmp_args_element_name_1 = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
                        if (tmp_args_element_name_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 394;
                            type_description_1 = "oooooo";
                            goto try_except_handler_2;
                        }
                        frame_76c53f086136ef422680c37c131d5e51->m_frame.f_lineno = 394;
                        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
                        Py_DECREF(tmp_args_element_name_1);
                        if (tmp_raise_type_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 394;
                            type_description_1 = "oooooo";
                            goto try_except_handler_2;
                        }
                        exception_type = tmp_raise_type_1;
                        exception_lineno = 394;
                        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                        type_description_1 = "oooooo";
                        goto try_except_handler_2;
                    }
                    branch_no_4:;
                }
                {
                    PyObject *tmp_assign_source_5;
                    PyObject *tmp_source_name_4;
                    CHECK_OBJECT(var_cookie);
                    tmp_source_name_4 = var_cookie;
                    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_value);
                    if (tmp_assign_source_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 395;
                        type_description_1 = "oooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_toReturn;
                        var_toReturn = tmp_assign_source_5;
                        Py_XDECREF(old);
                    }

                }
                branch_no_3:;
            }
            branch_no_2:;
        }
        branch_no_1:;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 389;
        type_description_1 = "oooooo";
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
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_1;
        if (var_toReturn == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "toReturn");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 397;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(var_toReturn);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
        branch_yes_5:;
        if (var_toReturn == NULL) {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "toReturn");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 398;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_return_value = var_toReturn;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
        branch_no_5:;
    }
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_1;
        tmp_left_name_2 = const_str_digest_40890ce8458196445ad3a61ce14829f8;
        CHECK_OBJECT(par_name);
        tmp_tuple_element_1 = par_name;
        tmp_right_name_2 = PyTuple_New(3);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_domain);
        tmp_tuple_element_1 = par_domain;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_path);
        tmp_tuple_element_1 = par_path;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_right_name_2, 2, tmp_tuple_element_1);
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_76c53f086136ef422680c37c131d5e51->m_frame.f_lineno = 399;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_KeyError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 399;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_76c53f086136ef422680c37c131d5e51);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_76c53f086136ef422680c37c131d5e51);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_76c53f086136ef422680c37c131d5e51);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_76c53f086136ef422680c37c131d5e51, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_76c53f086136ef422680c37c131d5e51->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_76c53f086136ef422680c37c131d5e51, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_76c53f086136ef422680c37c131d5e51,
        type_description_1,
        par_self,
        par_name,
        par_domain,
        par_path,
        var_toReturn,
        var_cookie
    );


    // Release cached frame.
    if (frame_76c53f086136ef422680c37c131d5e51 == cache_frame_76c53f086136ef422680c37c131d5e51) {
        Py_DECREF(frame_76c53f086136ef422680c37c131d5e51);
    }
    cache_frame_76c53f086136ef422680c37c131d5e51 = NULL;

    assertFrameObject(frame_76c53f086136ef422680c37c131d5e51);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_40__find_no_duplicates);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_toReturn);
    var_toReturn = NULL;

    Py_XDECREF(var_cookie);
    var_cookie = NULL;

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

    Py_XDECREF(var_toReturn);
    var_toReturn = NULL;

    Py_XDECREF(var_cookie);
    var_cookie = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_40__find_no_duplicates);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_domain);
    Py_DECREF(par_domain);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_domain);
    Py_DECREF(par_domain);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function_41___getstate__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_state = NULL;
    struct Nuitka_FrameObject *frame_81f34f157cb00d2468fa25ad60270324;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_81f34f157cb00d2468fa25ad60270324 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_81f34f157cb00d2468fa25ad60270324, codeobj_81f34f157cb00d2468fa25ad60270324, module_requests$cookies, sizeof(void *)+sizeof(void *));
    frame_81f34f157cb00d2468fa25ad60270324 = cache_frame_81f34f157cb00d2468fa25ad60270324;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_81f34f157cb00d2468fa25ad60270324);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_81f34f157cb00d2468fa25ad60270324) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_source_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_81f34f157cb00d2468fa25ad60270324->m_frame.f_lineno = 403;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_copy);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_state == NULL);
        var_state = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_state);
        tmp_called_instance_2 = var_state;
        frame_81f34f157cb00d2468fa25ad60270324->m_frame.f_lineno = 405;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_pop, &PyTuple_GET_ITEM(const_tuple_str_plain__cookies_lock_tuple, 0));

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_81f34f157cb00d2468fa25ad60270324);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_81f34f157cb00d2468fa25ad60270324);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_81f34f157cb00d2468fa25ad60270324, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_81f34f157cb00d2468fa25ad60270324->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_81f34f157cb00d2468fa25ad60270324, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_81f34f157cb00d2468fa25ad60270324,
        type_description_1,
        par_self,
        var_state
    );


    // Release cached frame.
    if (frame_81f34f157cb00d2468fa25ad60270324 == cache_frame_81f34f157cb00d2468fa25ad60270324) {
        Py_DECREF(frame_81f34f157cb00d2468fa25ad60270324);
    }
    cache_frame_81f34f157cb00d2468fa25ad60270324 = NULL;

    assertFrameObject(frame_81f34f157cb00d2468fa25ad60270324);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_state);
    tmp_return_value = var_state;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_41___getstate__);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_state);
    Py_DECREF(var_state);
    var_state = NULL;

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

    Py_XDECREF(var_state);
    var_state = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_41___getstate__);
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


static PyObject *impl_requests$cookies$$$function_42___setstate__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_state = python_pars[1];
    struct Nuitka_FrameObject *frame_a0c6521afd2a63c7c8bb76d3b90979cf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_a0c6521afd2a63c7c8bb76d3b90979cf = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_a0c6521afd2a63c7c8bb76d3b90979cf, codeobj_a0c6521afd2a63c7c8bb76d3b90979cf, module_requests$cookies, sizeof(void *)+sizeof(void *));
    frame_a0c6521afd2a63c7c8bb76d3b90979cf = cache_frame_a0c6521afd2a63c7c8bb76d3b90979cf;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a0c6521afd2a63c7c8bb76d3b90979cf);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a0c6521afd2a63c7c8bb76d3b90979cf) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_source_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_state);
        tmp_args_element_name_1 = par_state;
        frame_a0c6521afd2a63c7c8bb76d3b90979cf->m_frame.f_lineno = 410;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_update, call_args);
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        tmp_compexpr_left_1 = const_str_plain__cookies_lock;
        CHECK_OBJECT(par_self);
        tmp_source_name_2 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_source_name_2);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "oo";
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_assattr_target_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_threading);

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

                exception_lineno = 412;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_1;
            frame_a0c6521afd2a63c7c8bb76d3b90979cf->m_frame.f_lineno = 412;
            tmp_assattr_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_RLock);
            if (tmp_assattr_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 412;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__cookies_lock, tmp_assattr_name_1);
            Py_DECREF(tmp_assattr_name_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 412;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a0c6521afd2a63c7c8bb76d3b90979cf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a0c6521afd2a63c7c8bb76d3b90979cf);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a0c6521afd2a63c7c8bb76d3b90979cf, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_a0c6521afd2a63c7c8bb76d3b90979cf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a0c6521afd2a63c7c8bb76d3b90979cf, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a0c6521afd2a63c7c8bb76d3b90979cf,
        type_description_1,
        par_self,
        par_state
    );


    // Release cached frame.
    if (frame_a0c6521afd2a63c7c8bb76d3b90979cf == cache_frame_a0c6521afd2a63c7c8bb76d3b90979cf) {
        Py_DECREF(frame_a0c6521afd2a63c7c8bb76d3b90979cf);
    }
    cache_frame_a0c6521afd2a63c7c8bb76d3b90979cf = NULL;

    assertFrameObject(frame_a0c6521afd2a63c7c8bb76d3b90979cf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_42___setstate__);
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


static PyObject *impl_requests$cookies$$$function_43_copy(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_new_cj = NULL;
    struct Nuitka_FrameObject *frame_a7e2ee487282e84d9b3b447fca9aec5e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a7e2ee487282e84d9b3b447fca9aec5e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_a7e2ee487282e84d9b3b447fca9aec5e, codeobj_a7e2ee487282e84d9b3b447fca9aec5e, module_requests$cookies, sizeof(void *)+sizeof(void *));
    frame_a7e2ee487282e84d9b3b447fca9aec5e = cache_frame_a7e2ee487282e84d9b3b447fca9aec5e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a7e2ee487282e84d9b3b447fca9aec5e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a7e2ee487282e84d9b3b447fca9aec5e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21763 ], 39, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 416;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_a7e2ee487282e84d9b3b447fca9aec5e->m_frame.f_lineno = 416;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_new_cj == NULL);
        var_new_cj = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_new_cj);
        tmp_source_name_1 = var_new_cj;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_set_policy);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_a7e2ee487282e84d9b3b447fca9aec5e->m_frame.f_lineno = 417;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_get_policy);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 417;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a7e2ee487282e84d9b3b447fca9aec5e->m_frame.f_lineno = 417;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(var_new_cj);
        tmp_called_instance_2 = var_new_cj;
        CHECK_OBJECT(par_self);
        tmp_args_element_name_2 = par_self;
        frame_a7e2ee487282e84d9b3b447fca9aec5e->m_frame.f_lineno = 418;
        {
            PyObject *call_args[] = {tmp_args_element_name_2};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_update, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a7e2ee487282e84d9b3b447fca9aec5e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a7e2ee487282e84d9b3b447fca9aec5e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a7e2ee487282e84d9b3b447fca9aec5e, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_a7e2ee487282e84d9b3b447fca9aec5e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a7e2ee487282e84d9b3b447fca9aec5e, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a7e2ee487282e84d9b3b447fca9aec5e,
        type_description_1,
        par_self,
        var_new_cj
    );


    // Release cached frame.
    if (frame_a7e2ee487282e84d9b3b447fca9aec5e == cache_frame_a7e2ee487282e84d9b3b447fca9aec5e) {
        Py_DECREF(frame_a7e2ee487282e84d9b3b447fca9aec5e);
    }
    cache_frame_a7e2ee487282e84d9b3b447fca9aec5e = NULL;

    assertFrameObject(frame_a7e2ee487282e84d9b3b447fca9aec5e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_new_cj);
    tmp_return_value = var_new_cj;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_43_copy);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_new_cj);
    Py_DECREF(var_new_cj);
    var_new_cj = NULL;

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

    Py_XDECREF(var_new_cj);
    var_new_cj = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_43_copy);
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


static PyObject *impl_requests$cookies$$$function_44_get_policy(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_487b803c7fb26d982c384faaf5c3bb31;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_487b803c7fb26d982c384faaf5c3bb31 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_487b803c7fb26d982c384faaf5c3bb31, codeobj_487b803c7fb26d982c384faaf5c3bb31, module_requests$cookies, sizeof(void *));
    frame_487b803c7fb26d982c384faaf5c3bb31 = cache_frame_487b803c7fb26d982c384faaf5c3bb31;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_487b803c7fb26d982c384faaf5c3bb31);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_487b803c7fb26d982c384faaf5c3bb31) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__policy);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_487b803c7fb26d982c384faaf5c3bb31);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_487b803c7fb26d982c384faaf5c3bb31);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_487b803c7fb26d982c384faaf5c3bb31);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_487b803c7fb26d982c384faaf5c3bb31, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_487b803c7fb26d982c384faaf5c3bb31->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_487b803c7fb26d982c384faaf5c3bb31, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_487b803c7fb26d982c384faaf5c3bb31,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_487b803c7fb26d982c384faaf5c3bb31 == cache_frame_487b803c7fb26d982c384faaf5c3bb31) {
        Py_DECREF(frame_487b803c7fb26d982c384faaf5c3bb31);
    }
    cache_frame_487b803c7fb26d982c384faaf5c3bb31 = NULL;

    assertFrameObject(frame_487b803c7fb26d982c384faaf5c3bb31);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_44_get_policy);
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


static PyObject *impl_requests$cookies$$$function_45__copy_cookie_jar(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_jar = python_pars[0];
    PyObject *var_new_jar = NULL;
    PyObject *var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_bd0b233f6d0f1678b6bf15eef2e61111;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_bd0b233f6d0f1678b6bf15eef2e61111 = NULL;
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
        CHECK_OBJECT(par_jar);
        tmp_compexpr_left_1 = par_jar;
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
    MAKE_OR_REUSE_FRAME(cache_frame_bd0b233f6d0f1678b6bf15eef2e61111, codeobj_bd0b233f6d0f1678b6bf15eef2e61111, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_bd0b233f6d0f1678b6bf15eef2e61111 = cache_frame_bd0b233f6d0f1678b6bf15eef2e61111;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bd0b233f6d0f1678b6bf15eef2e61111);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bd0b233f6d0f1678b6bf15eef2e61111) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT(par_jar);
        tmp_source_name_1 = par_jar;
        tmp_attribute_name_1 = const_str_plain_copy;
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_source_name_1, tmp_attribute_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT(par_jar);
            tmp_called_instance_1 = par_jar;
            frame_bd0b233f6d0f1678b6bf15eef2e61111->m_frame.f_lineno = 432;
            tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_copy);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_copy);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_copy);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 5296 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 434;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_1;
        CHECK_OBJECT(par_jar);
        tmp_args_element_name_1 = par_jar;
        frame_bd0b233f6d0f1678b6bf15eef2e61111->m_frame.f_lineno = 434;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_copy, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_jar == NULL);
        var_new_jar = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_new_jar);
        tmp_called_instance_3 = var_new_jar;
        frame_bd0b233f6d0f1678b6bf15eef2e61111->m_frame.f_lineno = 435;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_clear);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_jar);
        tmp_iter_arg_1 = par_jar;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 436;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_cookie;
            var_cookie = tmp_assign_source_4;
            Py_INCREF(var_cookie);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(var_new_jar);
        tmp_source_name_2 = var_new_jar;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_set_cookie);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_copy);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_copy);
        }

        if (tmp_mvar_value_2 == NULL) {
            Py_DECREF(tmp_called_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 5296 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 437;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_4 = tmp_mvar_value_2;
        CHECK_OBJECT(var_cookie);
        tmp_args_element_name_3 = var_cookie;
        frame_bd0b233f6d0f1678b6bf15eef2e61111->m_frame.f_lineno = 437;
        {
            PyObject *call_args[] = {tmp_args_element_name_3};
            tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, const_str_plain_copy, call_args);
        }

        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 437;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_bd0b233f6d0f1678b6bf15eef2e61111->m_frame.f_lineno = 437;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 436;
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
    RESTORE_FRAME_EXCEPTION(frame_bd0b233f6d0f1678b6bf15eef2e61111);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bd0b233f6d0f1678b6bf15eef2e61111);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bd0b233f6d0f1678b6bf15eef2e61111);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bd0b233f6d0f1678b6bf15eef2e61111, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_bd0b233f6d0f1678b6bf15eef2e61111->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bd0b233f6d0f1678b6bf15eef2e61111, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bd0b233f6d0f1678b6bf15eef2e61111,
        type_description_1,
        par_jar,
        var_new_jar,
        var_cookie
    );


    // Release cached frame.
    if (frame_bd0b233f6d0f1678b6bf15eef2e61111 == cache_frame_bd0b233f6d0f1678b6bf15eef2e61111) {
        Py_DECREF(frame_bd0b233f6d0f1678b6bf15eef2e61111);
    }
    cache_frame_bd0b233f6d0f1678b6bf15eef2e61111 = NULL;

    assertFrameObject(frame_bd0b233f6d0f1678b6bf15eef2e61111);

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

    CHECK_OBJECT(var_new_jar);
    tmp_return_value = var_new_jar;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_45__copy_cookie_jar);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_new_jar);
    var_new_jar = NULL;

    Py_XDECREF(var_cookie);
    var_cookie = NULL;

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

    Py_XDECREF(var_new_jar);
    var_new_jar = NULL;

    Py_XDECREF(var_cookie);
    var_cookie = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_45__copy_cookie_jar);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_jar);
    Py_DECREF(par_jar);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_jar);
    Py_DECREF(par_jar);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function_46_create_cookie(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_result = NULL;
    PyObject *var_badargs = NULL;
    int tmp_res;
    struct Nuitka_FrameObject *frame_b0742227d25586f04629ab3a1b1eb09b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b0742227d25586f04629ab3a1b1eb09b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
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
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        tmp_dict_key_1 = const_str_plain_version;
        tmp_dict_value_1 = const_int_0;
        tmp_assign_source_1 = _PyDict_NewPresized( 13 );
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_name;
        CHECK_OBJECT(par_name);
        tmp_dict_value_2 = par_name;
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain_value;
        CHECK_OBJECT(par_value);
        tmp_dict_value_3 = par_value;
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_port;
        tmp_dict_value_4 = Py_None;
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = const_str_plain_domain;
        tmp_dict_value_5 = const_str_empty;
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = const_str_plain_path;
        tmp_dict_value_6 = const_str_chr_47;
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = const_str_plain_secure;
        tmp_dict_value_7 = Py_False;
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = const_str_plain_expires;
        tmp_dict_value_8 = Py_None;
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = const_str_plain_discard;
        tmp_dict_value_9 = Py_True;
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = const_str_plain_comment;
        tmp_dict_value_10 = Py_None;
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = const_str_plain_comment_url;
        tmp_dict_value_11 = Py_None;
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = const_str_plain_rest;
        tmp_dict_value_12 = PyDict_Copy(const_dict_a5e68083723d45b7dd5e500852a4245b);
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_12, tmp_dict_value_12);
        Py_DECREF(tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = const_str_plain_rfc2109;
        tmp_dict_value_13 = Py_False;
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        assert(var_result == NULL);
        var_result = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_b0742227d25586f04629ab3a1b1eb09b, codeobj_b0742227d25586f04629ab3a1b1eb09b, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_b0742227d25586f04629ab3a1b1eb09b = cache_frame_b0742227d25586f04629ab3a1b1eb09b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b0742227d25586f04629ab3a1b1eb09b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b0742227d25586f04629ab3a1b1eb09b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_set_arg_2;
        CHECK_OBJECT(par_kwargs);
        tmp_set_arg_1 = par_kwargs;
        tmp_left_name_1 = PySet_New(tmp_set_arg_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_result);
        tmp_set_arg_2 = var_result;
        tmp_right_name_1 = PySet_New(tmp_set_arg_2);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 463;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        assert(!(tmp_assign_source_2 == NULL));
        assert(var_badargs == NULL);
        var_badargs = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_badargs);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_badargs);
        assert(!(tmp_truth_name_1 == -1));
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_list_arg_1;
            tmp_left_name_2 = const_str_digest_c99227a29db521837b47fa67726c6a3c;
            CHECK_OBJECT(var_badargs);
            tmp_list_arg_1 = var_badargs;
            tmp_right_name_2 = PySequence_List(tmp_list_arg_1);
            if (tmp_right_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 466;
                type_description_1 = "oooooN";
                goto frame_exception_exit_1;
            }
            tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_UNICODE_LIST(tmp_left_name_2, tmp_right_name_2);
            Py_DECREF(tmp_right_name_2);
            if (tmp_make_exception_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 466;
                type_description_1 = "oooooN";
                goto frame_exception_exit_1;
            }
            frame_b0742227d25586f04629ab3a1b1eb09b->m_frame.f_lineno = 466;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
            Py_DECREF(tmp_make_exception_arg_1);
            assert(!(tmp_raise_type_1 == NULL));
            exception_type = tmp_raise_type_1;
            exception_lineno = 466;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(var_result);
        tmp_called_instance_1 = var_result;
        CHECK_OBJECT(par_kwargs);
        tmp_args_element_name_1 = par_kwargs;
        frame_b0742227d25586f04629ab3a1b1eb09b->m_frame.f_lineno = 468;
        {
            PyObject *call_args[] = {tmp_args_element_name_1};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_update, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_value_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_key_name_1;
        CHECK_OBJECT(var_result);
        tmp_dict_name_1 = var_result;
        tmp_key_name_1 = const_str_plain_port;
        tmp_value_name_1 = DICT_GET_ITEM(tmp_dict_name_1, tmp_key_name_1);
        if (tmp_value_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_name_1);
        Py_DECREF(tmp_value_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_dictset_value = (tmp_res != 0) ? Py_True : Py_False;
        CHECK_OBJECT(var_result);
        tmp_dictset_dict = var_result;
        tmp_dictset_key = const_str_plain_port_specified;
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    {
        PyObject *tmp_value_name_2;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        CHECK_OBJECT(var_result);
        tmp_dict_name_2 = var_result;
        tmp_key_name_2 = const_str_plain_domain;
        tmp_value_name_2 = DICT_GET_ITEM(tmp_dict_name_2, tmp_key_name_2);
        if (tmp_value_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_name_2);
        Py_DECREF(tmp_value_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_dictset_value = (tmp_res != 0) ? Py_True : Py_False;
        CHECK_OBJECT(var_result);
        tmp_dictset_dict = var_result;
        tmp_dictset_key = const_str_plain_domain_specified;
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_dict_name_3;
        PyObject *tmp_key_name_3;
        CHECK_OBJECT(var_result);
        tmp_dict_name_3 = var_result;
        tmp_key_name_3 = const_str_plain_domain;
        tmp_called_instance_2 = DICT_GET_ITEM(tmp_dict_name_3, tmp_key_name_3);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        frame_b0742227d25586f04629ab3a1b1eb09b->m_frame.f_lineno = 471;
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_startswith, &PyTuple_GET_ITEM(const_tuple_str_dot_tuple, 0));

        Py_DECREF(tmp_called_instance_2);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_result);
        tmp_dictset_dict = var_result;
        tmp_dictset_key = const_str_plain_domain_initial_dot;
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    {
        PyObject *tmp_value_name_3;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_key_name_4;
        CHECK_OBJECT(var_result);
        tmp_dict_name_4 = var_result;
        tmp_key_name_4 = const_str_plain_path;
        tmp_value_name_3 = DICT_GET_ITEM(tmp_dict_name_4, tmp_key_name_4);
        if (tmp_value_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_name_3);
        Py_DECREF(tmp_value_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        tmp_dictset_value = (tmp_res != 0) ? Py_True : Py_False;
        CHECK_OBJECT(var_result);
        tmp_dictset_dict = var_result;
        tmp_dictset_key = const_str_plain_path_specified;
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_cookielib);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cookielib);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21843 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 474;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_Cookie);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_result);
        tmp_dircall_arg2_1 = var_result;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___internal__$$$function_5_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "oooooN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b0742227d25586f04629ab3a1b1eb09b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b0742227d25586f04629ab3a1b1eb09b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b0742227d25586f04629ab3a1b1eb09b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b0742227d25586f04629ab3a1b1eb09b, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_b0742227d25586f04629ab3a1b1eb09b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b0742227d25586f04629ab3a1b1eb09b, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b0742227d25586f04629ab3a1b1eb09b,
        type_description_1,
        par_name,
        par_value,
        par_kwargs,
        var_result,
        var_badargs,
        NULL
    );


    // Release cached frame.
    if (frame_b0742227d25586f04629ab3a1b1eb09b == cache_frame_b0742227d25586f04629ab3a1b1eb09b) {
        Py_DECREF(frame_b0742227d25586f04629ab3a1b1eb09b);
    }
    cache_frame_b0742227d25586f04629ab3a1b1eb09b = NULL;

    assertFrameObject(frame_b0742227d25586f04629ab3a1b1eb09b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_46_create_cookie);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_result);
    Py_DECREF(var_result);
    var_result = NULL;

    CHECK_OBJECT((PyObject *)var_badargs);
    Py_DECREF(var_badargs);
    var_badargs = NULL;

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

    CHECK_OBJECT((PyObject *)var_result);
    Py_DECREF(var_result);
    var_result = NULL;

    Py_XDECREF(var_badargs);
    var_badargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_46_create_cookie);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function_47_morsel_to_cookie(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_morsel = python_pars[0];
    PyObject *var_expires = NULL;
    struct Nuitka_FrameObject *frame_09bb1d87ec7040171926baa4e12618b4;
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
    static struct Nuitka_FrameObject *cache_frame_09bb1d87ec7040171926baa4e12618b4 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert(var_expires == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_expires = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_09bb1d87ec7040171926baa4e12618b4, codeobj_09bb1d87ec7040171926baa4e12618b4, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_09bb1d87ec7040171926baa4e12618b4 = cache_frame_09bb1d87ec7040171926baa4e12618b4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_09bb1d87ec7040171926baa4e12618b4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_09bb1d87ec7040171926baa4e12618b4) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_morsel);
        tmp_subscribed_name_1 = par_morsel;
        tmp_subscript_name_1 = const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d;
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
        if (tmp_subscript_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 481;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_subscript_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        branch_yes_1:;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_int_arg_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_int_arg_2;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_time);

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

                exception_lineno = 483;
                type_description_1 = "ooN";
                goto try_except_handler_2;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            frame_09bb1d87ec7040171926baa4e12618b4->m_frame.f_lineno = 483;
            tmp_left_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_time);
            if (tmp_left_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 483;
                type_description_1 = "ooN";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(par_morsel);
            tmp_subscribed_name_2 = par_morsel;
            tmp_subscript_name_2 = const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d;
            tmp_int_arg_2 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_2, tmp_subscript_name_2);
            if (tmp_int_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_name_1);

                exception_lineno = 483;
                type_description_1 = "ooN";
                goto try_except_handler_2;
            }
            tmp_right_name_1 = PyNumber_Int(tmp_int_arg_2);
            Py_DECREF(tmp_int_arg_2);
            if (tmp_right_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_name_1);

                exception_lineno = 483;
                type_description_1 = "ooN";
                goto try_except_handler_2;
            }
            tmp_int_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
            Py_DECREF(tmp_left_name_1);
            Py_DECREF(tmp_right_name_1);
            if (tmp_int_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 483;
                type_description_1 = "ooN";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = PyNumber_Int(tmp_int_arg_1);
            Py_DECREF(tmp_int_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 483;
                type_description_1 = "ooN";
                goto try_except_handler_2;
            }
            {
                PyObject *old = var_expires;
                assert(old != NULL);
                var_expires = tmp_assign_source_2;
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
            exception_keeper_tb_1 = MAKE_TRACEBACK(frame_09bb1d87ec7040171926baa4e12618b4, exception_keeper_lineno_1);
        } else if (exception_keeper_lineno_1 != 0) {
            exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_09bb1d87ec7040171926baa4e12618b4, exception_keeper_lineno_1);
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
            tmp_compexpr_right_1 = PyExc_ValueError;
            tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;
                type_description_1 = "ooN";
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
                PyObject *tmp_make_exception_arg_1;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_subscript_name_3;
                tmp_left_name_2 = const_str_digest_384c88e858c00a2981bdb05550c007ba;
                CHECK_OBJECT(par_morsel);
                tmp_subscribed_name_3 = par_morsel;
                tmp_subscript_name_3 = const_str_digest_2c4cf2b02b1ec590855d8e705f7ca34d;
                tmp_right_name_2 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_3, tmp_subscript_name_3);
                if (tmp_right_name_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 485;
                    type_description_1 = "ooN";
                    goto try_except_handler_3;
                }
                tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
                Py_DECREF(tmp_right_name_2);
                if (tmp_make_exception_arg_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 485;
                    type_description_1 = "ooN";
                    goto try_except_handler_3;
                }
                frame_09bb1d87ec7040171926baa4e12618b4->m_frame.f_lineno = 485;
                tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
                Py_DECREF(tmp_make_exception_arg_1);
                assert(!(tmp_raise_type_1 == NULL));
                exception_type = tmp_raise_type_1;
                exception_lineno = 485;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooN";
                goto try_except_handler_3;
            }
            goto branch_end_2;
            branch_no_2:;
            tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            if (unlikely(tmp_result == false)) {
                exception_lineno = 482;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_09bb1d87ec7040171926baa4e12618b4->m_frame) frame_09bb1d87ec7040171926baa4e12618b4->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooN";
            goto try_except_handler_3;
            branch_end_2:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_47_morsel_to_cookie);
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
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_subscript_result_2;
            int tmp_truth_name_2;
            CHECK_OBJECT(par_morsel);
            tmp_subscribed_name_4 = par_morsel;
            tmp_subscript_name_4 = const_str_plain_expires;
            tmp_subscript_result_2 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_4, tmp_subscript_name_4);
            if (tmp_subscript_result_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 486;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE(tmp_subscript_result_2);
            if (tmp_truth_name_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_subscript_result_2);

                exception_lineno = 486;
                type_description_1 = "ooN";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF(tmp_subscript_result_2);
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_1;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_2;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_subscript_name_5;
                PyObject *tmp_args_element_name_3;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_calendar);

                if (unlikely(tmp_mvar_value_2 == NULL)) {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_calendar);
                }

                if (tmp_mvar_value_2 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 21874 ], 30, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 488;
                    type_description_1 = "ooN";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_1 = tmp_mvar_value_2;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_timegm);
                if (tmp_called_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 488;
                    type_description_1 = "ooN";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_time);

                if (unlikely(tmp_mvar_value_3 == NULL)) {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_time);
                }

                if (tmp_mvar_value_3 == NULL) {
                    Py_DECREF(tmp_called_name_1);
                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 7581 ], 26, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 489;
                    type_description_1 = "ooN";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_2 = tmp_mvar_value_3;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_strptime);
                if (tmp_called_name_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_1);

                    exception_lineno = 489;
                    type_description_1 = "ooN";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT(par_morsel);
                tmp_subscribed_name_5 = par_morsel;
                tmp_subscript_name_5 = const_str_plain_expires;
                tmp_args_element_name_2 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_5, tmp_subscript_name_5);
                if (tmp_args_element_name_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_1);
                    Py_DECREF(tmp_called_name_2);

                    exception_lineno = 489;
                    type_description_1 = "ooN";
                    goto frame_exception_exit_1;
                }
                tmp_args_element_name_3 = const_str_digest_8d200ac749deb0ed034c3f2346adcc3d;
                frame_09bb1d87ec7040171926baa4e12618b4->m_frame.f_lineno = 489;
                {
                    PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
                    tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
                }

                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_args_element_name_2);
                if (tmp_args_element_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_1);

                    exception_lineno = 489;
                    type_description_1 = "ooN";
                    goto frame_exception_exit_1;
                }
                frame_09bb1d87ec7040171926baa4e12618b4->m_frame.f_lineno = 488;
                tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
                Py_DECREF(tmp_called_name_1);
                Py_DECREF(tmp_args_element_name_1);
                if (tmp_assign_source_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 488;
                    type_description_1 = "ooN";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_expires;
                    assert(old != NULL);
                    var_expires = tmp_assign_source_3;
                    Py_DECREF(old);
                }

            }
            branch_no_3:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_value_name_1;
        PyObject *tmp_subscribed_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_source_name_3;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_subscribed_name_10;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_value_name_2;
        PyObject *tmp_subscribed_name_11;
        PyObject *tmp_subscript_name_11;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_source_name_4;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_subscribed_name_12;
        PyObject *tmp_subscript_name_12;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_create_cookie);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_create_cookie);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21728 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 491;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        tmp_dict_key_1 = const_str_plain_comment;
        CHECK_OBJECT(par_morsel);
        tmp_subscribed_name_6 = par_morsel;
        tmp_subscript_name_6 = const_str_plain_comment;
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_6, tmp_subscript_name_6);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 13 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_comment_url;
        CHECK_OBJECT(par_morsel);
        tmp_subscribed_name_7 = par_morsel;
        tmp_subscript_name_7 = const_str_plain_comment;
        tmp_value_name_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_7, tmp_subscript_name_7);
        if (tmp_value_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_name_1);

            exception_lineno = 493;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_name_1);
        Py_DECREF(tmp_value_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_name_1);

            exception_lineno = 493;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = const_str_plain_discard;
        tmp_dict_value_3 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = const_str_plain_domain;
        CHECK_OBJECT(par_morsel);
        tmp_subscribed_name_8 = par_morsel;
        tmp_subscript_name_8 = const_str_plain_domain;
        tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_8, tmp_subscript_name_8);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_name_1);

            exception_lineno = 495;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = const_str_plain_expires;
        if (var_expires == NULL) {
            Py_DECREF(tmp_kw_name_1);
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF(exception_type);
            exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "expires");
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 496;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_5 = var_expires;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = const_str_plain_name;
        CHECK_OBJECT(par_morsel);
        tmp_source_name_3 = par_morsel;
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_key);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_name_1);

            exception_lineno = 497;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6);
        Py_DECREF(tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = const_str_plain_path;
        CHECK_OBJECT(par_morsel);
        tmp_subscribed_name_9 = par_morsel;
        tmp_subscript_name_9 = const_str_plain_path;
        tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_9, tmp_subscript_name_9);
        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_name_1);

            exception_lineno = 498;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7);
        Py_DECREF(tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = const_str_plain_port;
        tmp_dict_value_8 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = const_str_plain_rest;
        tmp_dict_key_10 = const_str_plain_HttpOnly;
        CHECK_OBJECT(par_morsel);
        tmp_subscribed_name_10 = par_morsel;
        tmp_subscript_name_10 = const_str_plain_httponly;
        tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_10, tmp_subscript_name_10);
        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_name_1);

            exception_lineno = 500;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_9 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dict_value_9, tmp_dict_key_10, tmp_dict_value_10);
        Py_DECREF(tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_9, tmp_dict_value_9);
        Py_DECREF(tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = const_str_plain_rfc2109;
        tmp_dict_value_11 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = const_str_plain_secure;
        CHECK_OBJECT(par_morsel);
        tmp_subscribed_name_11 = par_morsel;
        tmp_subscript_name_11 = const_str_plain_secure;
        tmp_value_name_2 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_11, tmp_subscript_name_11);
        if (tmp_value_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_name_1);

            exception_lineno = 502;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_name_2);
        Py_DECREF(tmp_value_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_name_1);

            exception_lineno = 502;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_12 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = const_str_plain_value;
        CHECK_OBJECT(par_morsel);
        tmp_source_name_4 = par_morsel;
        tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_value);
        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_name_1);

            exception_lineno = 503;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_13, tmp_dict_value_13);
        Py_DECREF(tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = const_str_plain_version;
        CHECK_OBJECT(par_morsel);
        tmp_subscribed_name_12 = par_morsel;
        tmp_subscript_name_12 = const_str_plain_version;
        tmp_or_left_value_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_12, tmp_subscript_name_12);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_name_1);

            exception_lineno = 504;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_name_1);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 504;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = const_int_0;
        Py_INCREF(tmp_or_right_value_1);
        tmp_dict_value_14 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_dict_value_14 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_14, tmp_dict_value_14);
        Py_DECREF(tmp_dict_value_14);
        assert(!(tmp_res != 0));
        frame_09bb1d87ec7040171926baa4e12618b4->m_frame.f_lineno = 491;
        tmp_return_value = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_3, tmp_kw_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_09bb1d87ec7040171926baa4e12618b4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_09bb1d87ec7040171926baa4e12618b4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_09bb1d87ec7040171926baa4e12618b4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_09bb1d87ec7040171926baa4e12618b4, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_09bb1d87ec7040171926baa4e12618b4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_09bb1d87ec7040171926baa4e12618b4, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_09bb1d87ec7040171926baa4e12618b4,
        type_description_1,
        par_morsel,
        var_expires,
        NULL
    );


    // Release cached frame.
    if (frame_09bb1d87ec7040171926baa4e12618b4 == cache_frame_09bb1d87ec7040171926baa4e12618b4) {
        Py_DECREF(frame_09bb1d87ec7040171926baa4e12618b4);
    }
    cache_frame_09bb1d87ec7040171926baa4e12618b4 = NULL;

    assertFrameObject(frame_09bb1d87ec7040171926baa4e12618b4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_47_morsel_to_cookie);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_expires);
    var_expires = NULL;

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

    Py_XDECREF(var_expires);
    var_expires = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_47_morsel_to_cookie);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_morsel);
    Py_DECREF(par_morsel);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_morsel);
    Py_DECREF(par_morsel);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function_48_cookiejar_from_dict(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cookie_dict = python_pars[0];
    PyObject *par_cookiejar = python_pars[1];
    PyObject *par_overwrite = python_pars[2];
    PyObject *var_names_from_jar = NULL;
    PyObject *var_name = NULL;
    PyObject *outline_0_var_cookie = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_0ae90c3a126fd0a0795406280ed5aa7b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_452775f07dbd379089653e10c48a0ec3_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_452775f07dbd379089653e10c48a0ec3_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_0ae90c3a126fd0a0795406280ed5aa7b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_0ae90c3a126fd0a0795406280ed5aa7b, codeobj_0ae90c3a126fd0a0795406280ed5aa7b, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_0ae90c3a126fd0a0795406280ed5aa7b = cache_frame_0ae90c3a126fd0a0795406280ed5aa7b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0ae90c3a126fd0a0795406280ed5aa7b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0ae90c3a126fd0a0795406280ed5aa7b) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_cookiejar);
        tmp_compexpr_left_1 = par_cookiejar;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 21763 ], 39, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 518;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            frame_0ae90c3a126fd0a0795406280ed5aa7b->m_frame.f_lineno = 518;
            tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 518;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_cookiejar;
                assert(old != NULL);
                par_cookiejar = tmp_assign_source_1;
                Py_DECREF(old);
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_cookie_dict);
        tmp_compexpr_left_2 = par_cookie_dict;
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
            // Tried code:
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_iter_arg_1;
                CHECK_OBJECT(par_cookiejar);
                tmp_iter_arg_1 = par_cookiejar;
                tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
                if (tmp_assign_source_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 521;
                    type_description_1 = "ooooo";
                    goto try_except_handler_2;
                }
                assert(tmp_listcomp_1__$0 == NULL);
                tmp_listcomp_1__$0 = tmp_assign_source_3;
            }
            {
                PyObject *tmp_assign_source_4;
                tmp_assign_source_4 = PyList_New(0);
                assert(tmp_listcomp_1__contraction == NULL);
                tmp_listcomp_1__contraction = tmp_assign_source_4;
            }
            MAKE_OR_REUSE_FRAME(cache_frame_452775f07dbd379089653e10c48a0ec3_2, codeobj_452775f07dbd379089653e10c48a0ec3, module_requests$cookies, sizeof(void *));
            frame_452775f07dbd379089653e10c48a0ec3_2 = cache_frame_452775f07dbd379089653e10c48a0ec3_2;

            // Push the new frame as the currently active one.
            pushFrameStack(frame_452775f07dbd379089653e10c48a0ec3_2);

            // Mark the frame object as in use, ref count 1 will be up for reuse.
            assert(Py_REFCNT(frame_452775f07dbd379089653e10c48a0ec3_2) == 2); // Frame stack

            // Framed code:
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_5;
                CHECK_OBJECT(tmp_listcomp_1__$0);
                tmp_next_source_1 = tmp_listcomp_1__$0;
                tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
                if (tmp_assign_source_5 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                        goto loop_end_1;
                    } else {

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        type_description_2 = "o";
                        exception_lineno = 521;
                        goto try_except_handler_3;
                    }
                }

                {
                    PyObject *old = tmp_listcomp_1__iter_value_0;
                    tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_6;
                CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
                tmp_assign_source_6 = tmp_listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_0_var_cookie;
                    outline_0_var_cookie = tmp_assign_source_6;
                    Py_INCREF(outline_0_var_cookie);
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_source_name_1;
                CHECK_OBJECT(tmp_listcomp_1__contraction);
                tmp_append_list_1 = tmp_listcomp_1__contraction;
                CHECK_OBJECT(outline_0_var_cookie);
                tmp_source_name_1 = outline_0_var_cookie;
                tmp_append_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_name);
                if (tmp_append_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 521;
                    type_description_2 = "o";
                    goto try_except_handler_3;
                }
                assert(PyList_Check(tmp_append_list_1));
                tmp_res = PyList_Append(tmp_append_list_1, tmp_append_value_1);
                Py_DECREF(tmp_append_value_1);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 521;
                    type_description_2 = "o";
                    goto try_except_handler_3;
                }
            }
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 521;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            goto loop_start_1;
            loop_end_1:;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_assign_source_2 = tmp_listcomp_1__contraction;
            Py_INCREF(tmp_assign_source_2);
            goto try_return_handler_3;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_48_cookiejar_from_dict);
            return NULL;
            // Return handler code:
            try_return_handler_3:;
            CHECK_OBJECT((PyObject *)tmp_listcomp_1__$0);
            Py_DECREF(tmp_listcomp_1__$0);
            tmp_listcomp_1__$0 = NULL;

            CHECK_OBJECT((PyObject *)tmp_listcomp_1__contraction);
            Py_DECREF(tmp_listcomp_1__contraction);
            tmp_listcomp_1__contraction = NULL;

            Py_XDECREF(tmp_listcomp_1__iter_value_0);
            tmp_listcomp_1__iter_value_0 = NULL;

            goto frame_return_exit_1;
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

            CHECK_OBJECT((PyObject *)tmp_listcomp_1__$0);
            Py_DECREF(tmp_listcomp_1__$0);
            tmp_listcomp_1__$0 = NULL;

            CHECK_OBJECT((PyObject *)tmp_listcomp_1__contraction);
            Py_DECREF(tmp_listcomp_1__contraction);
            tmp_listcomp_1__contraction = NULL;

            Py_XDECREF(tmp_listcomp_1__iter_value_0);
            tmp_listcomp_1__iter_value_0 = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto frame_exception_exit_2;
            // End of try:

#if 0
            RESTORE_FRAME_EXCEPTION(frame_452775f07dbd379089653e10c48a0ec3_2);
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;

            frame_return_exit_1:;
#if 0
            RESTORE_FRAME_EXCEPTION(frame_452775f07dbd379089653e10c48a0ec3_2);
#endif

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_2;

            frame_exception_exit_2:;

#if 0
            RESTORE_FRAME_EXCEPTION(frame_452775f07dbd379089653e10c48a0ec3_2);
#endif

            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_452775f07dbd379089653e10c48a0ec3_2, exception_lineno);
            }
            else if (exception_tb->tb_frame != &frame_452775f07dbd379089653e10c48a0ec3_2->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_452775f07dbd379089653e10c48a0ec3_2, exception_lineno);
            }

            // Attachs locals to frame if any.
            Nuitka_Frame_AttachLocals(
                (struct Nuitka_FrameObject *)frame_452775f07dbd379089653e10c48a0ec3_2,
                type_description_2,
                outline_0_var_cookie
            );


            // Release cached frame.
            if (frame_452775f07dbd379089653e10c48a0ec3_2 == cache_frame_452775f07dbd379089653e10c48a0ec3_2) {
                Py_DECREF(frame_452775f07dbd379089653e10c48a0ec3_2);
            }
            cache_frame_452775f07dbd379089653e10c48a0ec3_2 = NULL;

            assertFrameObject(frame_452775f07dbd379089653e10c48a0ec3_2);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_1;

            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_1:;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
            skip_nested_handling_1:;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_48_cookiejar_from_dict);
            return NULL;
            // Return handler code:
            try_return_handler_2:;
            Py_XDECREF(outline_0_var_cookie);
            outline_0_var_cookie = NULL;

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

            Py_XDECREF(outline_0_var_cookie);
            outline_0_var_cookie = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto outline_exception_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_48_cookiejar_from_dict);
            return NULL;
            outline_exception_1:;
            exception_lineno = 521;
            goto frame_exception_exit_1;
            outline_result_1:;
            assert(var_names_from_jar == NULL);
            var_names_from_jar = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(par_cookie_dict);
            tmp_iter_arg_2 = par_cookie_dict;
            tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 522;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_for_loop_1__for_iterator == NULL);
            tmp_for_loop_1__for_iterator = tmp_assign_source_7;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_for_loop_1__for_iterator);
            tmp_next_source_2 = tmp_for_loop_1__for_iterator;
            tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_8 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooooo";
                    exception_lineno = 522;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_8;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_for_loop_1__iter_value);
            tmp_assign_source_9 = tmp_for_loop_1__iter_value;
            {
                PyObject *old = var_name;
                var_name = tmp_assign_source_9;
                Py_INCREF(var_name);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_3;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            int tmp_truth_name_1;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT(par_overwrite);
            tmp_truth_name_1 = CHECK_IF_TRUE(par_overwrite);
            if (tmp_truth_name_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 523;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
            }
            tmp_or_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
            if (tmp_or_left_truth_1 == 1) {
                goto or_left_1;
            } else {
                goto or_right_1;
            }
            or_right_1:;
            CHECK_OBJECT(var_name);
            tmp_compexpr_left_3 = var_name;
            CHECK_OBJECT(var_names_from_jar);
            tmp_compexpr_right_3 = var_names_from_jar;
            tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 523;
                type_description_1 = "ooooo";
                goto try_except_handler_4;
            }
            tmp_or_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_3 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_condition_result_3 = tmp_or_left_value_1;
            or_end_1:;
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_2;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                CHECK_OBJECT(par_cookiejar);
                tmp_source_name_2 = par_cookiejar;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_set_cookie);
                if (tmp_called_name_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 524;
                    type_description_1 = "ooooo";
                    goto try_except_handler_4;
                }
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_create_cookie);

                if (unlikely(tmp_mvar_value_2 == NULL)) {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_create_cookie);
                }

                if (tmp_mvar_value_2 == NULL) {
                    Py_DECREF(tmp_called_name_2);
                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 21728 ], 35, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 524;
                    type_description_1 = "ooooo";
                    goto try_except_handler_4;
                }

                tmp_called_name_3 = tmp_mvar_value_2;
                CHECK_OBJECT(var_name);
                tmp_args_element_name_2 = var_name;
                CHECK_OBJECT(par_cookie_dict);
                tmp_subscribed_name_1 = par_cookie_dict;
                CHECK_OBJECT(var_name);
                tmp_subscript_name_1 = var_name;
                tmp_args_element_name_3 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
                if (tmp_args_element_name_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_2);

                    exception_lineno = 524;
                    type_description_1 = "ooooo";
                    goto try_except_handler_4;
                }
                frame_0ae90c3a126fd0a0795406280ed5aa7b->m_frame.f_lineno = 524;
                {
                    PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
                    tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
                }

                Py_DECREF(tmp_args_element_name_3);
                if (tmp_args_element_name_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_2);

                    exception_lineno = 524;
                    type_description_1 = "ooooo";
                    goto try_except_handler_4;
                }
                frame_0ae90c3a126fd0a0795406280ed5aa7b->m_frame.f_lineno = 524;
                tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_args_element_name_1);
                if (tmp_call_result_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 524;
                    type_description_1 = "ooooo";
                    goto try_except_handler_4;
                }
                Py_DECREF(tmp_call_result_1);
            }
            branch_no_3:;
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        goto loop_start_2;
        loop_end_2:;
        goto try_end_1;
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
        try_end_1:;
        Py_XDECREF(tmp_for_loop_1__iter_value);
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
        Py_DECREF(tmp_for_loop_1__for_iterator);
        tmp_for_loop_1__for_iterator = NULL;

        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0ae90c3a126fd0a0795406280ed5aa7b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0ae90c3a126fd0a0795406280ed5aa7b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0ae90c3a126fd0a0795406280ed5aa7b, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_0ae90c3a126fd0a0795406280ed5aa7b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0ae90c3a126fd0a0795406280ed5aa7b, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0ae90c3a126fd0a0795406280ed5aa7b,
        type_description_1,
        par_cookie_dict,
        par_cookiejar,
        par_overwrite,
        var_names_from_jar,
        var_name
    );


    // Release cached frame.
    if (frame_0ae90c3a126fd0a0795406280ed5aa7b == cache_frame_0ae90c3a126fd0a0795406280ed5aa7b) {
        Py_DECREF(frame_0ae90c3a126fd0a0795406280ed5aa7b);
    }
    cache_frame_0ae90c3a126fd0a0795406280ed5aa7b = NULL;

    assertFrameObject(frame_0ae90c3a126fd0a0795406280ed5aa7b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;
    CHECK_OBJECT(par_cookiejar);
    tmp_return_value = par_cookiejar;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_48_cookiejar_from_dict);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)par_cookiejar);
    Py_DECREF(par_cookiejar);
    par_cookiejar = NULL;

    Py_XDECREF(var_names_from_jar);
    var_names_from_jar = NULL;

    Py_XDECREF(var_name);
    var_name = NULL;

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

    Py_XDECREF(par_cookiejar);
    par_cookiejar = NULL;

    Py_XDECREF(var_names_from_jar);
    var_names_from_jar = NULL;

    Py_XDECREF(var_name);
    var_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_48_cookiejar_from_dict);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cookie_dict);
    Py_DECREF(par_cookie_dict);
    CHECK_OBJECT(par_overwrite);
    Py_DECREF(par_overwrite);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cookie_dict);
    Py_DECREF(par_cookie_dict);
    CHECK_OBJECT(par_overwrite);
    Py_DECREF(par_overwrite);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$cookies$$$function_49_merge_cookies(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cookiejar = python_pars[0];
    PyObject *par_cookies = python_pars[1];
    PyObject *var_cookie_in_jar = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_b182f5dc014332c9c00b5b878a7d570f;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_b182f5dc014332c9c00b5b878a7d570f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_b182f5dc014332c9c00b5b878a7d570f, codeobj_b182f5dc014332c9c00b5b878a7d570f, module_requests$cookies, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_b182f5dc014332c9c00b5b878a7d570f = cache_frame_b182f5dc014332c9c00b5b878a7d570f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b182f5dc014332c9c00b5b878a7d570f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b182f5dc014332c9c00b5b878a7d570f) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_cookiejar);
        tmp_isinstance_inst_1 = par_cookiejar;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_cookielib);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cookielib);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21843 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 536;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_CookieJar);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_80fe00ea301d02293abaf9dea17cddac;
            frame_b182f5dc014332c9c00b5b878a7d570f->m_frame.f_lineno = 537;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
            assert(!(tmp_raise_type_1 == NULL));
            exception_type = tmp_raise_type_1;
            exception_lineno = 537;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_cookies);
        tmp_isinstance_inst_2 = par_cookies;
        tmp_isinstance_cls_2 = (PyObject *)&PyDict_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_cookiejar_from_dict);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cookiejar_from_dict);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 21904 ], 41, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 540;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT(par_cookies);
            tmp_tuple_element_1 = par_cookies;
            tmp_args_name_1 = PyTuple_New(1);
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
            tmp_dict_key_1 = const_str_plain_cookiejar;
            CHECK_OBJECT(par_cookiejar);
            tmp_dict_value_1 = par_cookiejar;
            tmp_kw_name_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = const_str_plain_overwrite;
            tmp_dict_value_2 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            frame_b182f5dc014332c9c00b5b878a7d570f->m_frame.f_lineno = 540;
            tmp_assign_source_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
            Py_DECREF(tmp_args_name_1);
            Py_DECREF(tmp_kw_name_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_cookiejar;
                assert(old != NULL);
                par_cookiejar = tmp_assign_source_1;
                Py_DECREF(old);
            }

        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_isinstance_inst_3;
            PyObject *tmp_isinstance_cls_3;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            CHECK_OBJECT(par_cookies);
            tmp_isinstance_inst_3 = par_cookies;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_cookielib);

            if (unlikely(tmp_mvar_value_3 == NULL)) {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cookielib);
            }

            if (tmp_mvar_value_3 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 21843 ], 31, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 542;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_isinstance_cls_3 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_CookieJar);
            if (tmp_isinstance_cls_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
            Py_DECREF(tmp_isinstance_cls_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;
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
            // Tried code:
            {
                PyObject *tmp_called_instance_1;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_1;
                CHECK_OBJECT(par_cookiejar);
                tmp_called_instance_1 = par_cookiejar;
                CHECK_OBJECT(par_cookies);
                tmp_args_element_name_1 = par_cookies;
                frame_b182f5dc014332c9c00b5b878a7d570f->m_frame.f_lineno = 544;
                {
                    PyObject *call_args[] = {tmp_args_element_name_1};
                    tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_update, call_args);
                }

                if (tmp_call_result_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 544;
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
                exception_keeper_tb_1 = MAKE_TRACEBACK(frame_b182f5dc014332c9c00b5b878a7d570f, exception_keeper_lineno_1);
            } else if (exception_keeper_lineno_1 != 0) {
                exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_b182f5dc014332c9c00b5b878a7d570f, exception_keeper_lineno_1);
            }

            NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
            PyException_SetTraceback(exception_keeper_value_1, (PyObject *)exception_keeper_tb_1);
            PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
            // Tried code:
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_1;
                PyObject *tmp_compexpr_right_1;
                tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
                tmp_compexpr_right_1 = PyExc_AttributeError;
                tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 545;
                    type_description_1 = "ooo";
                    goto try_except_handler_3;
                }
                tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_4;
                } else {
                    goto branch_no_4;
                }
                branch_yes_4:;
                {
                    PyObject *tmp_assign_source_2;
                    PyObject *tmp_iter_arg_1;
                    CHECK_OBJECT(par_cookies);
                    tmp_iter_arg_1 = par_cookies;
                    tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
                    if (tmp_assign_source_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 546;
                        type_description_1 = "ooo";
                        goto try_except_handler_3;
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
                            type_description_1 = "ooo";
                            exception_lineno = 546;
                            goto try_except_handler_4;
                        }
                    }

                    {
                        PyObject *old = tmp_for_loop_1__iter_value;
                        tmp_for_loop_1__iter_value = tmp_assign_source_3;
                        Py_XDECREF(old);
                    }

                }
                {
                    PyObject *tmp_assign_source_4;
                    CHECK_OBJECT(tmp_for_loop_1__iter_value);
                    tmp_assign_source_4 = tmp_for_loop_1__iter_value;
                    {
                        PyObject *old = var_cookie_in_jar;
                        var_cookie_in_jar = tmp_assign_source_4;
                        Py_INCREF(var_cookie_in_jar);
                        Py_XDECREF(old);
                    }

                }
                {
                    PyObject *tmp_called_instance_2;
                    PyObject *tmp_call_result_2;
                    PyObject *tmp_args_element_name_2;
                    CHECK_OBJECT(par_cookiejar);
                    tmp_called_instance_2 = par_cookiejar;
                    CHECK_OBJECT(var_cookie_in_jar);
                    tmp_args_element_name_2 = var_cookie_in_jar;
                    frame_b182f5dc014332c9c00b5b878a7d570f->m_frame.f_lineno = 547;
                    {
                        PyObject *call_args[] = {tmp_args_element_name_2};
                        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_set_cookie, call_args);
                    }

                    if (tmp_call_result_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 547;
                        type_description_1 = "ooo";
                        goto try_except_handler_4;
                    }
                    Py_DECREF(tmp_call_result_2);
                }
                if (CONSIDER_THREADING() == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 546;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }
                goto loop_start_1;
                loop_end_1:;
                goto try_end_2;
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

                Py_XDECREF(tmp_for_loop_1__iter_value);
                tmp_for_loop_1__iter_value = NULL;

                CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
                Py_DECREF(tmp_for_loop_1__for_iterator);
                tmp_for_loop_1__for_iterator = NULL;

                // Re-raise.
                exception_type = exception_keeper_type_2;
                exception_value = exception_keeper_value_2;
                exception_tb = exception_keeper_tb_2;
                exception_lineno = exception_keeper_lineno_2;

                goto try_except_handler_3;
                // End of try:
                try_end_2:;
                Py_XDECREF(tmp_for_loop_1__iter_value);
                tmp_for_loop_1__iter_value = NULL;

                CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
                Py_DECREF(tmp_for_loop_1__for_iterator);
                tmp_for_loop_1__for_iterator = NULL;

                goto branch_end_4;
                branch_no_4:;
                tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                if (unlikely(tmp_result == false)) {
                    exception_lineno = 543;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_b182f5dc014332c9c00b5b878a7d570f->m_frame) frame_b182f5dc014332c9c00b5b878a7d570f->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "ooo";
                goto try_except_handler_3;
                branch_end_4:;
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

            // Restore previous exception.
            SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto frame_exception_exit_1;
            // End of try:
            try_end_3:;
            // Restore previous exception.
            SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
            goto try_end_1;
            // exception handler codes exits in all cases
            NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_49_merge_cookies);
            return NULL;
            // End of try:
            try_end_1:;
            branch_no_3:;
        }
        branch_end_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b182f5dc014332c9c00b5b878a7d570f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b182f5dc014332c9c00b5b878a7d570f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b182f5dc014332c9c00b5b878a7d570f, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_b182f5dc014332c9c00b5b878a7d570f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b182f5dc014332c9c00b5b878a7d570f, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b182f5dc014332c9c00b5b878a7d570f,
        type_description_1,
        par_cookiejar,
        par_cookies,
        var_cookie_in_jar
    );


    // Release cached frame.
    if (frame_b182f5dc014332c9c00b5b878a7d570f == cache_frame_b182f5dc014332c9c00b5b878a7d570f) {
        Py_DECREF(frame_b182f5dc014332c9c00b5b878a7d570f);
    }
    cache_frame_b182f5dc014332c9c00b5b878a7d570f = NULL;

    assertFrameObject(frame_b182f5dc014332c9c00b5b878a7d570f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(par_cookiejar);
    tmp_return_value = par_cookiejar;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_49_merge_cookies);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)par_cookiejar);
    Py_DECREF(par_cookiejar);
    par_cookiejar = NULL;

    Py_XDECREF(var_cookie_in_jar);
    var_cookie_in_jar = NULL;

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

    CHECK_OBJECT((PyObject *)par_cookiejar);
    Py_DECREF(par_cookiejar);
    par_cookiejar = NULL;

    Py_XDECREF(var_cookie_in_jar);
    var_cookie_in_jar = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$cookies$$$function_49_merge_cookies);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cookies);
    Py_DECREF(par_cookies);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cookies);
    Py_DECREF(par_cookies);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_10_add_unredirected_header() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_10_add_unredirected_header,
        const_str_plain_add_unredirected_header,
#if PYTHON_VERSION >= 300
        const_str_digest_dc064d287eb15bd1175f79fc7fcc5d69,
#endif
        codeobj_ed390dbf1d642f2cc7a46d8f5744da12,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_11_get_new_headers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_11_get_new_headers,
        const_str_plain_get_new_headers,
#if PYTHON_VERSION >= 300
        const_str_digest_44db063164c966fa5386728c86c1a06f,
#endif
        codeobj_7f23b6f15d551ce79daa2307da9be911,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_12_unverifiable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_12_unverifiable,
        const_str_plain_unverifiable,
#if PYTHON_VERSION >= 300
        const_str_digest_edb2a15c85f24da38984c0b5356f21c0,
#endif
        codeobj_6d67d61a5b00c52d4df76dd3e5e344ff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_13_origin_req_host() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_13_origin_req_host,
        const_str_plain_origin_req_host,
#if PYTHON_VERSION >= 300
        const_str_digest_1ffe275872914b64c240c8cb178005ea,
#endif
        codeobj_ef607a7a5e98a56155f865f3ca807a83,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_14_host() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_14_host,
        const_str_plain_host,
#if PYTHON_VERSION >= 300
        const_str_digest_59f19da226d4479328efe53726a2e397,
#endif
        codeobj_715324524deb5bf48f4ea339b674b427,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_15___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_15___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_ea904bab707be16235fbd17c19767f9f,
#endif
        codeobj_9a829379de6490f19de38b27c44dfed2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_2074f4b4dde671f06897bcc11d0d41da,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_16_info() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_16_info,
        const_str_plain_info,
#if PYTHON_VERSION >= 300
        const_str_digest_0d84ffc2aed365c467af25f17254de9e,
#endif
        codeobj_1ebf49be1e5265a0379da0bd994d1c75,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_17_getheaders() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_17_getheaders,
        const_str_plain_getheaders,
#if PYTHON_VERSION >= 300
        const_str_digest_2041229f0580a80f49d71dc1aca7539f,
#endif
        codeobj_0af893486df891d157b17889ccb7a180,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_18_extract_cookies_to_jar() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_18_extract_cookies_to_jar,
        const_str_plain_extract_cookies_to_jar,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8bafccf72e3a130b23defc7a088902cd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_d4e8bce3e52a50e29fc0c09bd0f73e7f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_19_get_cookie_header() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_19_get_cookie_header,
        const_str_plain_get_cookie_header,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_eaa2a5a358f7b958528567cc2de2a41a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_95cacfdffdeafa2154ddb2520f2fb58f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_445933e6a124a5d41f1f32e33f377bc9,
#endif
        codeobj_906849bd08969f08665533b229826f07,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_20_remove_cookie_by_name(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_20_remove_cookie_by_name,
        const_str_plain_remove_cookie_by_name,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0b33f1f305a37429aa1d50841a297ed3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_a90c9fe31ac91c19721e9fd9e6cf64bd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_21_get(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_21_get,
        const_str_plain_get,
#if PYTHON_VERSION >= 300
        const_str_digest_4ab8b826d3a2372d4ae105e9807fdce0,
#endif
        codeobj_05195060a61ae40d4609c3cec7aff7ea,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_741e4a7055b20857d935a0f7ed1c4abe,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_22_set() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_22_set,
        const_str_plain_set,
#if PYTHON_VERSION >= 300
        const_str_digest_5260d4b30ca681b2742e6bf6cec4b74a,
#endif
        codeobj_e967e57eb0a809976913ad874c9b64e4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_573342b2a8e1af18fbe63f15ee63f11b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_23_iterkeys() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_23_iterkeys,
        const_str_plain_iterkeys,
#if PYTHON_VERSION >= 300
        const_str_digest_9559440875cf716ec7a8bef311cbaefe,
#endif
        codeobj_02517238b9230788458c666c3363b350,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_d61c39e15f1f0b76bd46a71165e3bbe6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_24_keys() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_24_keys,
        const_str_plain_keys,
#if PYTHON_VERSION >= 300
        const_str_digest_572b1e9f5dc0656103cb358a7cbea16a,
#endif
        codeobj_ddcafde6b7a4cbd6c16f37a6db23b713,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_7fad1f4acdf828076344bcbd2f3093fc,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_25_itervalues() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_25_itervalues,
        const_str_plain_itervalues,
#if PYTHON_VERSION >= 300
        const_str_digest_0a2127aa931e582083c667383d216ebd,
#endif
        codeobj_a05f33e508216c20b90c272c1c9b75e7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_8282cde113cd2232a516d421ec587b65,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_26_values() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_26_values,
        const_str_plain_values,
#if PYTHON_VERSION >= 300
        const_str_digest_4ab2fe2bbda6a46b67fc97895794a2a7,
#endif
        codeobj_56e8ab0e9ec81b1e9a664d772dbc2909,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_58ff5aeca7b13e22937ae8b6a9a6b876,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_27_iteritems() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_27_iteritems,
        const_str_plain_iteritems,
#if PYTHON_VERSION >= 300
        const_str_digest_c07339cdb6953f6fd3b17ebb473bf73d,
#endif
        codeobj_fbdbcbf277d963cf6a18caccf8abfbae,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_94ebad60c38a4f103db32744a5bab84d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_28_items() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_28_items,
        const_str_plain_items,
#if PYTHON_VERSION >= 300
        const_str_digest_ad2094029011821e111452c0603108d0,
#endif
        codeobj_06d3d3dc40ce30fd48511cedef11c0ee,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_b04a12651fd966784023636e22761d12,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_29_list_domains() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_29_list_domains,
        const_str_plain_list_domains,
#if PYTHON_VERSION >= 300
        const_str_digest_4f8d8ada6928f5a67aefe24138a8c253,
#endif
        codeobj_79a3ab4c4167833e50d1315e50dece1d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_5266e491bdb204b2a45e0a788e9bac94,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_2_get_type() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_2_get_type,
        const_str_plain_get_type,
#if PYTHON_VERSION >= 300
        const_str_digest_28c35b2d382d530cb9f8e567735ee113,
#endif
        codeobj_9452412a3223c9a274ca641733b1e9ef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_30_list_paths() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_30_list_paths,
        const_str_plain_list_paths,
#if PYTHON_VERSION >= 300
        const_str_digest_b1346a1fb1e8adfe69a204b827c8b2a3,
#endif
        codeobj_512f051785de40d160c918c90cdc0dd6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_58821042b0e0d98cc3b40076b38affdd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_31_multiple_domains() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_31_multiple_domains,
        const_str_plain_multiple_domains,
#if PYTHON_VERSION >= 300
        const_str_digest_2fb13ce01af8e322e1090db877e250bd,
#endif
        codeobj_31348c2424ce8cf2917fa161b4cf21f8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_dd3cc005839efdfe1c3c0f3b070086ba,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_32_get_dict(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_32_get_dict,
        const_str_plain_get_dict,
#if PYTHON_VERSION >= 300
        const_str_digest_aba783cd55ce183297e8f8d9ff1dc698,
#endif
        codeobj_c42b55b05a0b16f379d854cee4d03943,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_d3a4a40c67458b1207db4bc7ab20d310,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_33___contains__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_33___contains__,
        const_str_plain___contains__,
#if PYTHON_VERSION >= 300
        const_str_digest_5427312272820286dba5b26f263d4c79,
#endif
        codeobj_bb7c5b2a398ffdb2e2156c14589ec9f6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_34___getitem__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_34___getitem__,
        const_str_plain___getitem__,
#if PYTHON_VERSION >= 300
        const_str_digest_8b10821fa8021c1e4a37a0c86a1d66c3,
#endif
        codeobj_828b33ab5e9cfde2cc201f593bd01a70,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_08b25300475453472c10345ee7168b50,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_35___setitem__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_35___setitem__,
        const_str_plain___setitem__,
#if PYTHON_VERSION >= 300
        const_str_digest_0d043b9a6c2c506833bb59840ef22ffd,
#endif
        codeobj_556c4c9828b891f4ffdcda2a3bbf0cc0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_bb11d917f97bb6215fd11706382927d9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_36___delitem__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_36___delitem__,
        const_str_plain___delitem__,
#if PYTHON_VERSION >= 300
        const_str_digest_fb0e88f14b774d1e98d525584951eabc,
#endif
        codeobj_16c2ec9104ff0d08e93814ba44f85e1b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_101fa36882b0f5da69e72374403c2c30,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_37_set_cookie() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_37_set_cookie,
        const_str_plain_set_cookie,
#if PYTHON_VERSION >= 300
        const_str_digest_3bf0be43034abaeba92e7fa09bcc93d6,
#endif
        codeobj_872dc3983136e59b9d93e739124d651d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_38_update() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_38_update,
        const_str_plain_update,
#if PYTHON_VERSION >= 300
        const_str_digest_8faacd955b01a83efbe637cdfe6a3d3e,
#endif
        codeobj_fc7d4397ca3e3ddf1e2fc0926fbe045d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_5c9dad01a3c84d4b998a25c6f245d693,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_39__find(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_39__find,
        const_str_plain__find,
#if PYTHON_VERSION >= 300
        const_str_digest_9bc80f2115d22815a80849e3086128b4,
#endif
        codeobj_3acf45730aff185bccd346334a8971f0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_2aa7f18650b70bafed61b449ab43cbad,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_3_get_host() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_3_get_host,
        const_str_plain_get_host,
#if PYTHON_VERSION >= 300
        const_str_digest_e43e9402062b1dc16610d92a6e06da93,
#endif
        codeobj_b471d7b3cbe9a865eb94995d8fcd0198,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_40__find_no_duplicates(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_40__find_no_duplicates,
        const_str_plain__find_no_duplicates,
#if PYTHON_VERSION >= 300
        const_str_digest_b270aaa39204bf1a293395efb6982c3e,
#endif
        codeobj_76c53f086136ef422680c37c131d5e51,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_dcd45b6ff6ecc7b26e302a149b58c85c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_41___getstate__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_41___getstate__,
        const_str_plain___getstate__,
#if PYTHON_VERSION >= 300
        const_str_digest_2fd659d0d93422f0a9d09e643f3b5831,
#endif
        codeobj_81f34f157cb00d2468fa25ad60270324,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_59021ee0ac4a578b9169d1a96b78e1da,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_42___setstate__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_42___setstate__,
        const_str_plain___setstate__,
#if PYTHON_VERSION >= 300
        const_str_digest_0cf04dad003066735b1fdc1881f334a1,
#endif
        codeobj_a0c6521afd2a63c7c8bb76d3b90979cf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_59021ee0ac4a578b9169d1a96b78e1da,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_43_copy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_43_copy,
        const_str_plain_copy,
#if PYTHON_VERSION >= 300
        const_str_digest_ccf021f29934e59f3e942390d0f913c3,
#endif
        codeobj_a7e2ee487282e84d9b3b447fca9aec5e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_ef5ef54fd7fab3dbc34eb13a254678ee,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_44_get_policy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_44_get_policy,
        const_str_plain_get_policy,
#if PYTHON_VERSION >= 300
        const_str_digest_6d23da7eceea3baa2298ffd89ccc62c5,
#endif
        codeobj_487b803c7fb26d982c384faaf5c3bb31,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_05ffb5bc39cd46e6936de7ec055f15aa,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_45__copy_cookie_jar() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_45__copy_cookie_jar,
        const_str_plain__copy_cookie_jar,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bd0b233f6d0f1678b6bf15eef2e61111,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_46_create_cookie() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_46_create_cookie,
        const_str_plain_create_cookie,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b0742227d25586f04629ab3a1b1eb09b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_8aeec5b3f7298c5bac1e129b6ee9f59f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_47_morsel_to_cookie() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_47_morsel_to_cookie,
        const_str_plain_morsel_to_cookie,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_09bb1d87ec7040171926baa4e12618b4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_b32fff81b34b2c7f10c1d1dc66bbef6d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_48_cookiejar_from_dict(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_48_cookiejar_from_dict,
        const_str_plain_cookiejar_from_dict,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0ae90c3a126fd0a0795406280ed5aa7b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_85e0ea626320458ddd4363cffbfdc559,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_49_merge_cookies() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_49_merge_cookies,
        const_str_plain_merge_cookies,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b182f5dc014332c9c00b5b878a7d570f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_f0c7ff82cbfe26b2f3f1df333f77ef1b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_4_get_origin_req_host() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_4_get_origin_req_host,
        const_str_plain_get_origin_req_host,
#if PYTHON_VERSION >= 300
        const_str_digest_4b43f2b2b4a017f703868c6cc21e7bf0,
#endif
        codeobj_e43dd9e117fa660248acce52ccbd6781,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_5_get_full_url() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_5_get_full_url,
        const_str_plain_get_full_url,
#if PYTHON_VERSION >= 300
        const_str_digest_b30191bdb52236874918a4b5c3c5db8b,
#endif
        codeobj_1da4449aead4d00092fcefa71e10cba1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_6_is_unverifiable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_6_is_unverifiable,
        const_str_plain_is_unverifiable,
#if PYTHON_VERSION >= 300
        const_str_digest_58322b83779ad7d89ba5c63e2fe2855c,
#endif
        codeobj_bf43816c6db1bb79c4a3b47435f501b2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_7_has_header() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_7_has_header,
        const_str_plain_has_header,
#if PYTHON_VERSION >= 300
        const_str_digest_2a2d5b06d38da952ad812a68992fbb10,
#endif
        codeobj_18121beaaee812a3c4e5e2cf57e54ece,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_8_get_header(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_8_get_header,
        const_str_plain_get_header,
#if PYTHON_VERSION >= 300
        const_str_digest_b7276b78dcacf789cb138b9c3e16bfe6,
#endif
        codeobj_d1730d5ca860c0281efc9540a9084451,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$cookies$$$function_9_add_header() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$cookies$$$function_9_add_header,
        const_str_plain_add_header,
#if PYTHON_VERSION >= 300
        const_str_digest_b19ae27d1753e06c28990a42518b1f44,
#endif
        codeobj_ce0da11004362554c20c3504d00f4008,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$cookies,
        const_str_digest_138ef95cec671591d9bedfa7e0898703,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$cookies =
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

function_impl_code functable_requests$cookies[] = {
    impl_requests$cookies$$$function_1___init__,
    impl_requests$cookies$$$function_2_get_type,
    impl_requests$cookies$$$function_3_get_host,
    impl_requests$cookies$$$function_4_get_origin_req_host,
    impl_requests$cookies$$$function_5_get_full_url,
    impl_requests$cookies$$$function_6_is_unverifiable,
    impl_requests$cookies$$$function_7_has_header,
    impl_requests$cookies$$$function_8_get_header,
    impl_requests$cookies$$$function_9_add_header,
    impl_requests$cookies$$$function_10_add_unredirected_header,
    impl_requests$cookies$$$function_11_get_new_headers,
    impl_requests$cookies$$$function_12_unverifiable,
    impl_requests$cookies$$$function_13_origin_req_host,
    impl_requests$cookies$$$function_14_host,
    impl_requests$cookies$$$function_15___init__,
    impl_requests$cookies$$$function_16_info,
    impl_requests$cookies$$$function_17_getheaders,
    impl_requests$cookies$$$function_18_extract_cookies_to_jar,
    impl_requests$cookies$$$function_19_get_cookie_header,
    impl_requests$cookies$$$function_20_remove_cookie_by_name,
    impl_requests$cookies$$$function_21_get,
    impl_requests$cookies$$$function_22_set,
    impl_requests$cookies$$$function_23_iterkeys,
    impl_requests$cookies$$$function_24_keys,
    impl_requests$cookies$$$function_25_itervalues,
    impl_requests$cookies$$$function_26_values,
    impl_requests$cookies$$$function_27_iteritems,
    impl_requests$cookies$$$function_28_items,
    impl_requests$cookies$$$function_29_list_domains,
    impl_requests$cookies$$$function_30_list_paths,
    impl_requests$cookies$$$function_31_multiple_domains,
    impl_requests$cookies$$$function_32_get_dict,
    impl_requests$cookies$$$function_33___contains__,
    impl_requests$cookies$$$function_34___getitem__,
    impl_requests$cookies$$$function_35___setitem__,
    impl_requests$cookies$$$function_36___delitem__,
    impl_requests$cookies$$$function_37_set_cookie,
    impl_requests$cookies$$$function_38_update,
    impl_requests$cookies$$$function_39__find,
    impl_requests$cookies$$$function_40__find_no_duplicates,
    impl_requests$cookies$$$function_41___getstate__,
    impl_requests$cookies$$$function_42___setstate__,
    impl_requests$cookies$$$function_43_copy,
    impl_requests$cookies$$$function_44_get_policy,
    impl_requests$cookies$$$function_45__copy_cookie_jar,
    impl_requests$cookies$$$function_46_create_cookie,
    impl_requests$cookies$$$function_47_morsel_to_cookie,
    impl_requests$cookies$$$function_48_cookiejar_from_dict,
    impl_requests$cookies$$$function_49_merge_cookies,
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

    function_impl_code *current = functable_requests$cookies;
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

    if (offset > sizeof(functable_requests$cookies) || offset < 0) {
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
        functable_requests$cookies[offset],
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
        module_requests$cookies,
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
PyObject *modulecode_requests$cookies(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_requests$cookies;
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
    PRINT_STRING("requests.cookies: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("requests.cookies: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("requests.cookies: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initrequests$cookies\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$cookies = Py_InitModule4(
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
    mdef_requests$cookies.m_name = module_full_name;
    module_requests$cookies = PyModule_Create(&mdef_requests$cookies);
#endif

    moduledict_requests$cookies = MODULE_DICT(module_requests$cookies);

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
        moduledict_requests$cookies,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_requests$cookies,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_requests$cookies,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$cookies,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$cookies,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_requests$cookies);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_requests$cookies);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_2d46d3b307bd13ebb3743a2c35c2778f;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_requests$cookies_25 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_13142d07daeedefdd1d11209233d58c4_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_13142d07daeedefdd1d11209233d58c4_2 = NULL;
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
    PyObject *locals_requests$cookies_97 = NULL;
    struct Nuitka_FrameObject *frame_3cc2064679c8038f35fb52187f3709f1_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_3cc2064679c8038f35fb52187f3709f1_3 = NULL;
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
    PyObject *locals_requests$cookies_165 = NULL;
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
    PyObject *locals_requests$cookies_171 = NULL;
    struct Nuitka_FrameObject *frame_8c22f653f32890eabe0a43062fe37d87_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_8c22f653f32890eabe0a43062fe37d87_4 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_955b7d6fef0bcb66b462d15cb6f41169;
        UPDATE_STRING_DICT0(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_abdee8d713fb97eeec5c94da3e6ee72f;
        UPDATE_STRING_DICT0(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_2d46d3b307bd13ebb3743a2c35c2778f = MAKE_MODULE_FRAME(codeobj_2d46d3b307bd13ebb3743a2c35c2778f, module_requests$cookies);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_2d46d3b307bd13ebb3743a2c35c2778f);
    assert(Py_REFCNT(frame_2d46d3b307bd13ebb3743a2c35c2778f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_abdee8d713fb97eeec5c94da3e6ee72f;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_copy;
        tmp_globals_name_1 = (PyObject *)moduledict_requests$cookies;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_2d46d3b307bd13ebb3743a2c35c2778f->m_frame.f_lineno = 12;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_copy, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_time;
        tmp_globals_name_2 = (PyObject *)moduledict_requests$cookies;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_2d46d3b307bd13ebb3743a2c35c2778f->m_frame.f_lineno = 13;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_calendar;
        tmp_globals_name_3 = (PyObject *)moduledict_requests$cookies;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_2d46d3b307bd13ebb3743a2c35c2778f->m_frame.f_lineno = 14;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_calendar, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain__internal_utils;
        tmp_globals_name_4 = (PyObject *)moduledict_requests$cookies;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_to_native_string_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_2d46d3b307bd13ebb3743a2c35c2778f->m_frame.f_lineno = 16;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
           tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_requests$cookies,
                const_str_plain_to_native_string,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_to_native_string);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_to_native_string, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_compat;
        tmp_globals_name_5 = (PyObject *)moduledict_requests$cookies;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_831032f065cd3258ed8a4829c50bfee2_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_2d46d3b307bd13ebb3743a2c35c2778f->m_frame.f_lineno = 17;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_requests$cookies,
                const_str_plain_cookielib,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_cookielib);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_cookielib, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
           tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_requests$cookies,
                const_str_plain_urlparse,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_urlparse);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_urlparse, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
           tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_requests$cookies,
                const_str_plain_urlunparse,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_urlunparse);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_urlunparse, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_requests$cookies,
                const_str_plain_Morsel,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_Morsel);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_Morsel, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_requests$cookies,
                const_str_plain_MutableMapping,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_MutableMapping);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_MutableMapping, tmp_assign_source_13);
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

    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_threading;
        tmp_globals_name_6 = (PyObject *)moduledict_requests$cookies;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = Py_None;
        tmp_level_name_6 = const_int_0;
        frame_2d46d3b307bd13ebb3743a2c35c2778f->m_frame.f_lineno = 20;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_threading, tmp_assign_source_14);
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_1);
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_1);
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_1);

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_2d46d3b307bd13ebb3743a2c35c2778f, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_2d46d3b307bd13ebb3743a2c35c2778f, exception_keeper_lineno_2);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    PyException_SetTraceback(exception_keeper_value_2, (PyObject *)exception_keeper_tb_2);
    PUBLISH_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
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


            exception_lineno = 21;

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
            PyObject *tmp_assign_source_15;
            PyObject *tmp_name_name_7;
            PyObject *tmp_globals_name_7;
            PyObject *tmp_locals_name_7;
            PyObject *tmp_fromlist_name_7;
            PyObject *tmp_level_name_7;
            tmp_name_name_7 = const_str_plain_dummy_threading;
            tmp_globals_name_7 = (PyObject *)moduledict_requests$cookies;
            tmp_locals_name_7 = Py_None;
            tmp_fromlist_name_7 = Py_None;
            tmp_level_name_7 = const_int_0;
            frame_2d46d3b307bd13ebb3743a2c35c2778f->m_frame.f_lineno = 22;
            tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7);
            if (tmp_assign_source_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto try_except_handler_3;
            }
            UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_threading, tmp_assign_source_15);
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 19;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_2d46d3b307bd13ebb3743a2c35c2778f->m_frame) frame_2d46d3b307bd13ebb3743a2c35c2778f->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_3;
        branch_end_1:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$cookies);
    return NULL;
    // End of try:
    try_end_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_object_tuple;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_16 = impl___internal__$$$function_3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
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


            exception_lineno = 25;

            goto try_except_handler_4;
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


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_4;
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


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_18 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_18;
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


            exception_lineno = 25;

            goto try_except_handler_4;
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


            exception_lineno = 25;

            goto try_except_handler_4;
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
            PyObject *tmp_assign_source_19;
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


                exception_lineno = 25;

                goto try_except_handler_4;
            }
            tmp_tuple_element_1 = const_str_plain_MockRequest;
            tmp_args_name_1 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_1 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_2d46d3b307bd13ebb3743a2c35c2778f->m_frame.f_lineno = 25;
            tmp_assign_source_19 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_name_1);
            if (tmp_assign_source_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto try_except_handler_4;
            }
            assert(tmp_class_creation_1__prepared == NULL);
            tmp_class_creation_1__prepared = tmp_assign_source_19;
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


                exception_lineno = 25;

                goto try_except_handler_4;
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


                    exception_lineno = 25;

                    goto try_except_handler_4;
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

                    exception_lineno = 25;

                    goto try_except_handler_4;
                }
                PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_2);
                tmp_raise_value_1 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
                Py_DECREF(tmp_right_name_1);
                if (tmp_raise_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 25;

                    goto try_except_handler_4;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF(tmp_raise_type_1);
                exception_value = tmp_raise_value_1;
                exception_lineno = 25;
                RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

                goto try_except_handler_4;
            }
            branch_no_4:;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_20;
            tmp_assign_source_20 = PyDict_New();
            assert(tmp_class_creation_1__prepared == NULL);
            tmp_class_creation_1__prepared = tmp_assign_source_20;
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_assign_source_21;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_requests$cookies_25 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_12188133309ffc390643b7a732954d08;
        tmp_res = PyObject_SetItem(locals_requests$cookies_25, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_digest_33e1091efb89a5aa5c06480eca194fed;
        tmp_res = PyObject_SetItem(locals_requests$cookies_25, const_str_plain___doc__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_6;
        }
        tmp_dictset_value = const_str_plain_MockRequest;
        tmp_res = PyObject_SetItem(locals_requests$cookies_25, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_6;
        }
        MAKE_OR_REUSE_FRAME(cache_frame_13142d07daeedefdd1d11209233d58c4_2, codeobj_13142d07daeedefdd1d11209233d58c4, module_requests$cookies, sizeof(void *));
        frame_13142d07daeedefdd1d11209233d58c4_2 = cache_frame_13142d07daeedefdd1d11209233d58c4_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_13142d07daeedefdd1d11209233d58c4_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_13142d07daeedefdd1d11209233d58c4_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_1___init__();



        tmp_res = PyObject_SetItem(locals_requests$cookies_25, const_str_plain___init__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_2_get_type();



        tmp_res = PyObject_SetItem(locals_requests$cookies_25, const_str_plain_get_type, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_3_get_host();



        tmp_res = PyObject_SetItem(locals_requests$cookies_25, const_str_plain_get_host, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_4_get_origin_req_host();



        tmp_res = PyObject_SetItem(locals_requests$cookies_25, const_str_plain_get_origin_req_host, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_5_get_full_url();



        tmp_res = PyObject_SetItem(locals_requests$cookies_25, const_str_plain_get_full_url, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_6_is_unverifiable();



        tmp_res = PyObject_SetItem(locals_requests$cookies_25, const_str_plain_is_unverifiable, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_7_has_header();



        tmp_res = PyObject_SetItem(locals_requests$cookies_25, const_str_plain_has_header, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_tuple;
            Py_INCREF(tmp_defaults_1);
            tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_8_get_header(tmp_defaults_1);



            tmp_res = PyObject_SetItem(locals_requests$cookies_25, const_str_plain_get_header, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_9_add_header();



        tmp_res = PyObject_SetItem(locals_requests$cookies_25, const_str_plain_add_header, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_10_add_unredirected_header();



        tmp_res = PyObject_SetItem(locals_requests$cookies_25, const_str_plain_add_unredirected_header, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_11_get_new_headers();



        tmp_res = PyObject_SetItem(locals_requests$cookies_25, const_str_plain_get_new_headers, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_2;
            tmp_res = MAPPING_HAS_ITEM(locals_requests$cookies_25, const_str_plain_property);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_name_2 = PyObject_GetItem(locals_requests$cookies_25, const_str_plain_property);

            if (tmp_called_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 730 ], 30, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_1 = MAKE_FUNCTION_requests$cookies$$$function_12_unverifiable();



            frame_13142d07daeedefdd1d11209233d58c4_2->m_frame.f_lineno = 84;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_name_3 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_2 = MAKE_FUNCTION_requests$cookies$$$function_12_unverifiable();



            frame_13142d07daeedefdd1d11209233d58c4_2->m_frame.f_lineno = 84;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_requests$cookies_25, const_str_plain_unverifiable, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_4;
            tmp_res = MAPPING_HAS_ITEM(locals_requests$cookies_25, const_str_plain_property);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_8 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_name_4 = PyObject_GetItem(locals_requests$cookies_25, const_str_plain_property);

            if (tmp_called_name_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 730 ], 30, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_3 = MAKE_FUNCTION_requests$cookies$$$function_13_origin_req_host();



            frame_13142d07daeedefdd1d11209233d58c4_2->m_frame.f_lineno = 88;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_3);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_element_name_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_name_5 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_4 = MAKE_FUNCTION_requests$cookies$$$function_13_origin_req_host();



            frame_13142d07daeedefdd1d11209233d58c4_2->m_frame.f_lineno = 88;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_4);
            Py_DECREF(tmp_args_element_name_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_requests$cookies_25, const_str_plain_origin_req_host, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_element_name_6;
            tmp_res = MAPPING_HAS_ITEM(locals_requests$cookies_25, const_str_plain_property);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_name_6 = PyObject_GetItem(locals_requests$cookies_25, const_str_plain_property);

            if (tmp_called_name_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 730 ], 30, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_5 = MAKE_FUNCTION_requests$cookies$$$function_14_host();



            frame_13142d07daeedefdd1d11209233d58c4_2->m_frame.f_lineno = 92;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_5);
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_name_7 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_6 = MAKE_FUNCTION_requests$cookies$$$function_14_host();



            frame_13142d07daeedefdd1d11209233d58c4_2->m_frame.f_lineno = 92;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_6);
            Py_DECREF(tmp_args_element_name_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_requests$cookies_25, const_str_plain_host, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_13142d07daeedefdd1d11209233d58c4_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_13142d07daeedefdd1d11209233d58c4_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_13142d07daeedefdd1d11209233d58c4_2, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_13142d07daeedefdd1d11209233d58c4_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_13142d07daeedefdd1d11209233d58c4_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_13142d07daeedefdd1d11209233d58c4_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if (frame_13142d07daeedefdd1d11209233d58c4_2 == cache_frame_13142d07daeedefdd1d11209233d58c4_2) {
            Py_DECREF(frame_13142d07daeedefdd1d11209233d58c4_2);
        }
        cache_frame_13142d07daeedefdd1d11209233d58c4_2 = NULL;

        assertFrameObject(frame_13142d07daeedefdd1d11209233d58c4_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_2 = tmp_class_creation_1__bases;
            tmp_compexpr_right_2 = const_tuple_type_object_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto try_except_handler_6;
            }
            tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
            branch_yes_5:;
            tmp_dictset_value = const_tuple_type_object_tuple;
            tmp_res = PyObject_SetItem(locals_requests$cookies_25, const_str_plain___orig_bases__, tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto try_except_handler_6;
            }
            branch_no_5:;
        }
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_8 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = const_str_plain_MockRequest;
            tmp_args_name_2 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_requests$cookies_25;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_2d46d3b307bd13ebb3743a2c35c2778f->m_frame.f_lineno = 25;
            tmp_assign_source_22 = CALL_FUNCTION(tmp_called_name_8, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_22;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_21 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_21);
        goto try_return_handler_6;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$cookies);
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_requests$cookies_25);
        locals_requests$cookies_25 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_requests$cookies_25);
        locals_requests$cookies_25 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$cookies);
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT((PyObject *)outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(requests$cookies);
        return NULL;
        outline_exception_1:;
        exception_lineno = 25;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_MockRequest, tmp_assign_source_21);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
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
        PyObject *tmp_assign_source_23;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = const_tuple_type_object_tuple;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_23 = impl___internal__$$$function_3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_12;
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


            exception_lineno = 97;

            goto try_except_handler_7;
        }
        tmp_condition_result_11 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = const_str_plain_metaclass;
        tmp_metaclass_name_2 = DICT_GET_ITEM(tmp_dict_name_5, tmp_key_name_5);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_7;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_7;
        }
        tmp_condition_result_12 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_subscribed_name_2 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = const_int_0;
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_2, tmp_subscript_name_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_7;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_7;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_2);
        condexpr_end_7:;
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_25 = SELECT_METACLASS(tmp_metaclass_name_2, tmp_bases_name_2);
        Py_DECREF(tmp_metaclass_name_2);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_25;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_name_6;
        tmp_key_name_6 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_6, tmp_key_name_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_7;
        }
        tmp_condition_result_13 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
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


            exception_lineno = 97;

            goto try_except_handler_7;
        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_source_name_5 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr(tmp_source_name_5, const_str_plain___prepare__);
        tmp_condition_result_14 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_called_name_9;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_source_name_6 = tmp_class_creation_2__metaclass;
            tmp_called_name_9 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain___prepare__);
            if (tmp_called_name_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto try_except_handler_7;
            }
            tmp_tuple_element_4 = const_str_plain_MockResponse;
            tmp_args_name_3 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_3, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_4 = tmp_class_creation_2__bases;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_3, 1, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_2d46d3b307bd13ebb3743a2c35c2778f->m_frame.f_lineno = 97;
            tmp_assign_source_26 = CALL_FUNCTION(tmp_called_name_9, tmp_args_name_3, tmp_kw_name_3);
            Py_DECREF(tmp_called_name_9);
            Py_DECREF(tmp_args_name_3);
            if (tmp_assign_source_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto try_except_handler_7;
            }
            assert(tmp_class_creation_2__prepared == NULL);
            tmp_class_creation_2__prepared = tmp_assign_source_26;
        }
        {
            nuitka_bool tmp_condition_result_15;
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


                exception_lineno = 97;

                goto try_except_handler_7;
            }
            tmp_condition_result_15 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
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
                PyObject *tmp_tuple_element_5;
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
                tmp_tuple_element_5 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 97;

                    goto try_except_handler_7;
                }
                tmp_right_name_2 = PyTuple_New(2);
                PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_5);
                CHECK_OBJECT(tmp_class_creation_2__prepared);
                tmp_type_arg_4 = tmp_class_creation_2__prepared;
                tmp_source_name_8 = BUILTIN_TYPE1(tmp_type_arg_4);
                assert(!(tmp_source_name_8 == NULL));
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain___name__);
                Py_DECREF(tmp_source_name_8);
                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_right_name_2);

                    exception_lineno = 97;

                    goto try_except_handler_7;
                }
                PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_5);
                tmp_raise_value_2 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
                Py_DECREF(tmp_right_name_2);
                if (tmp_raise_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 97;

                    goto try_except_handler_7;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF(tmp_raise_type_2);
                exception_value = tmp_raise_value_2;
                exception_lineno = 97;
                RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

                goto try_except_handler_7;
            }
            branch_no_8:;
        }
        goto branch_end_7;
        branch_no_7:;
        {
            PyObject *tmp_assign_source_27;
            tmp_assign_source_27 = PyDict_New();
            assert(tmp_class_creation_2__prepared == NULL);
            tmp_class_creation_2__prepared = tmp_assign_source_27;
        }
        branch_end_7:;
    }
    {
        PyObject *tmp_assign_source_28;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_requests$cookies_97 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_12188133309ffc390643b7a732954d08;
        tmp_res = PyObject_SetItem(locals_requests$cookies_97, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_9;
        }
        tmp_dictset_value = const_str_digest_e02118ec259954e10ca6d6356803797f;
        tmp_res = PyObject_SetItem(locals_requests$cookies_97, const_str_plain___doc__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_9;
        }
        tmp_dictset_value = const_str_plain_MockResponse;
        tmp_res = PyObject_SetItem(locals_requests$cookies_97, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto try_except_handler_9;
        }
        MAKE_OR_REUSE_FRAME(cache_frame_3cc2064679c8038f35fb52187f3709f1_3, codeobj_3cc2064679c8038f35fb52187f3709f1, module_requests$cookies, sizeof(void *));
        frame_3cc2064679c8038f35fb52187f3709f1_3 = cache_frame_3cc2064679c8038f35fb52187f3709f1_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_3cc2064679c8038f35fb52187f3709f1_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_3cc2064679c8038f35fb52187f3709f1_3) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_15___init__();



        tmp_res = PyObject_SetItem(locals_requests$cookies_97, const_str_plain___init__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_16_info();



        tmp_res = PyObject_SetItem(locals_requests$cookies_97, const_str_plain_info, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_17_getheaders();



        tmp_res = PyObject_SetItem(locals_requests$cookies_97, const_str_plain_getheaders, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_3cc2064679c8038f35fb52187f3709f1_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_3cc2064679c8038f35fb52187f3709f1_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3cc2064679c8038f35fb52187f3709f1_3, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_3cc2064679c8038f35fb52187f3709f1_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3cc2064679c8038f35fb52187f3709f1_3, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_3cc2064679c8038f35fb52187f3709f1_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if (frame_3cc2064679c8038f35fb52187f3709f1_3 == cache_frame_3cc2064679c8038f35fb52187f3709f1_3) {
            Py_DECREF(frame_3cc2064679c8038f35fb52187f3709f1_3);
        }
        cache_frame_3cc2064679c8038f35fb52187f3709f1_3 = NULL;

        assertFrameObject(frame_3cc2064679c8038f35fb52187f3709f1_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_9;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_compexpr_left_3 = tmp_class_creation_2__bases;
            tmp_compexpr_right_3 = const_tuple_type_object_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto try_except_handler_9;
            }
            tmp_condition_result_16 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
            branch_yes_9:;
            tmp_dictset_value = const_tuple_type_object_tuple;
            tmp_res = PyObject_SetItem(locals_requests$cookies_97, const_str_plain___orig_bases__, tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto try_except_handler_9;
            }
            branch_no_9:;
        }
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_name_10 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_6 = const_str_plain_MockResponse;
            tmp_args_name_4 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_6);
            PyTuple_SET_ITEM(tmp_args_name_4, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            Py_INCREF(tmp_tuple_element_6);
            PyTuple_SET_ITEM(tmp_args_name_4, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_requests$cookies_97;
            Py_INCREF(tmp_tuple_element_6);
            PyTuple_SET_ITEM(tmp_args_name_4, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_2d46d3b307bd13ebb3743a2c35c2778f->m_frame.f_lineno = 97;
            tmp_assign_source_29 = CALL_FUNCTION(tmp_called_name_10, tmp_args_name_4, tmp_kw_name_4);
            Py_DECREF(tmp_args_name_4);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto try_except_handler_9;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_29;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_28 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_28);
        goto try_return_handler_9;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$cookies);
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_requests$cookies_97);
        locals_requests$cookies_97 = NULL;
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

        Py_DECREF(locals_requests$cookies_97);
        locals_requests$cookies_97 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$cookies);
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT((PyObject *)outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;

        goto outline_result_2;
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

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(requests$cookies);
        return NULL;
        outline_exception_2:;
        exception_lineno = 97;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_MockResponse, tmp_assign_source_28);
    }
    goto try_end_5;
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

    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
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

    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_FUNCTION_requests$cookies$$$function_18_extract_cookies_to_jar();



        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar, tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_FUNCTION_requests$cookies$$$function_19_get_cookie_header();



        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_get_cookie_header, tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = const_tuple_none_none_tuple;
        Py_INCREF(tmp_defaults_2);
        tmp_assign_source_32 = MAKE_FUNCTION_requests$cookies$$$function_20_remove_cookie_by_name(tmp_defaults_2);



        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_remove_cookie_by_name, tmp_assign_source_32);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_dircall_arg1_3;
        tmp_dircall_arg1_3 = const_tuple_type_RuntimeError_tuple;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_33 = impl___internal__$$$function_3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = PyDict_New();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        nuitka_bool tmp_condition_result_18;
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


            exception_lineno = 165;

            goto try_except_handler_10;
        }
        tmp_condition_result_17 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_name_8 = const_str_plain_metaclass;
        tmp_metaclass_name_3 = DICT_GET_ITEM(tmp_dict_name_8, tmp_key_name_8);
        if (tmp_metaclass_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_10;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_10;
        }
        tmp_condition_result_18 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_subscribed_name_3 = tmp_class_creation_3__bases;
        tmp_subscript_name_3 = const_int_0;
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_3, tmp_subscript_name_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_10;
        }
        tmp_metaclass_name_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_10;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_3);
        condexpr_end_9:;
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_name_3 = tmp_class_creation_3__bases;
        tmp_assign_source_35 = SELECT_METACLASS(tmp_metaclass_name_3, tmp_bases_name_3);
        Py_DECREF(tmp_metaclass_name_3);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_35;
    }
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_name_9;
        tmp_key_name_9 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_9, tmp_key_name_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_10;
        }
        tmp_condition_result_19 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
        branch_yes_10:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_10;
        }
        branch_no_10:;
    }
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_source_name_9 = tmp_class_creation_3__metaclass;
        tmp_res = PyObject_HasAttr(tmp_source_name_9, const_str_plain___prepare__);
        tmp_condition_result_20 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
        branch_yes_11:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_name_11;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kw_name_5;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_source_name_10 = tmp_class_creation_3__metaclass;
            tmp_called_name_11 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain___prepare__);
            if (tmp_called_name_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto try_except_handler_10;
            }
            tmp_tuple_element_7 = const_str_plain_CookieConflictError;
            tmp_args_name_5 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_7);
            PyTuple_SET_ITEM(tmp_args_name_5, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_7 = tmp_class_creation_3__bases;
            Py_INCREF(tmp_tuple_element_7);
            PyTuple_SET_ITEM(tmp_args_name_5, 1, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;
            frame_2d46d3b307bd13ebb3743a2c35c2778f->m_frame.f_lineno = 165;
            tmp_assign_source_36 = CALL_FUNCTION(tmp_called_name_11, tmp_args_name_5, tmp_kw_name_5);
            Py_DECREF(tmp_called_name_11);
            Py_DECREF(tmp_args_name_5);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto try_except_handler_10;
            }
            assert(tmp_class_creation_3__prepared == NULL);
            tmp_class_creation_3__prepared = tmp_assign_source_36;
        }
        {
            nuitka_bool tmp_condition_result_21;
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


                exception_lineno = 165;

                goto try_except_handler_10;
            }
            tmp_condition_result_21 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
            branch_yes_12:;
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_raise_value_3;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_tuple_element_8;
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
                tmp_tuple_element_8 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 165;

                    goto try_except_handler_10;
                }
                tmp_right_name_3 = PyTuple_New(2);
                PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_8);
                CHECK_OBJECT(tmp_class_creation_3__prepared);
                tmp_type_arg_6 = tmp_class_creation_3__prepared;
                tmp_source_name_12 = BUILTIN_TYPE1(tmp_type_arg_6);
                assert(!(tmp_source_name_12 == NULL));
                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain___name__);
                Py_DECREF(tmp_source_name_12);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_right_name_3);

                    exception_lineno = 165;

                    goto try_except_handler_10;
                }
                PyTuple_SET_ITEM(tmp_right_name_3, 1, tmp_tuple_element_8);
                tmp_raise_value_3 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
                Py_DECREF(tmp_right_name_3);
                if (tmp_raise_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 165;

                    goto try_except_handler_10;
                }
                exception_type = tmp_raise_type_3;
                Py_INCREF(tmp_raise_type_3);
                exception_value = tmp_raise_value_3;
                exception_lineno = 165;
                RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

                goto try_except_handler_10;
            }
            branch_no_12:;
        }
        goto branch_end_11;
        branch_no_11:;
        {
            PyObject *tmp_assign_source_37;
            tmp_assign_source_37 = PyDict_New();
            assert(tmp_class_creation_3__prepared == NULL);
            tmp_class_creation_3__prepared = tmp_assign_source_37;
        }
        branch_end_11:;
    }
    {
        PyObject *tmp_assign_source_38;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_requests$cookies_165 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_12188133309ffc390643b7a732954d08;
        tmp_res = PyObject_SetItem(locals_requests$cookies_165, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_12;
        }
        tmp_dictset_value = const_str_digest_f2419ba08dedfa0db3c34c39eaf2eb5d;
        tmp_res = PyObject_SetItem(locals_requests$cookies_165, const_str_plain___doc__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_12;
        }
        tmp_dictset_value = const_str_plain_CookieConflictError;
        tmp_res = PyObject_SetItem(locals_requests$cookies_165, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto try_except_handler_12;
        }
        {
            nuitka_bool tmp_condition_result_22;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_compexpr_left_4 = tmp_class_creation_3__bases;
            tmp_compexpr_right_4 = const_tuple_type_RuntimeError_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto try_except_handler_12;
            }
            tmp_condition_result_22 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
                goto branch_yes_13;
            } else {
                goto branch_no_13;
            }
            branch_yes_13:;
            tmp_dictset_value = const_tuple_type_RuntimeError_tuple;
            tmp_res = PyObject_SetItem(locals_requests$cookies_165, const_str_plain___orig_bases__, tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto try_except_handler_12;
            }
            branch_no_13:;
        }
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_called_name_12;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kw_name_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_name_12 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_9 = const_str_plain_CookieConflictError;
            tmp_args_name_6 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_args_name_6, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_9 = tmp_class_creation_3__bases;
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_args_name_6, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_requests$cookies_165;
            Py_INCREF(tmp_tuple_element_9);
            PyTuple_SET_ITEM(tmp_args_name_6, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_2d46d3b307bd13ebb3743a2c35c2778f->m_frame.f_lineno = 165;
            tmp_assign_source_39 = CALL_FUNCTION(tmp_called_name_12, tmp_args_name_6, tmp_kw_name_6);
            Py_DECREF(tmp_args_name_6);
            if (tmp_assign_source_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;

                goto try_except_handler_12;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_39;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_38 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_38);
        goto try_return_handler_12;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$cookies);
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_requests$cookies_165);
        locals_requests$cookies_165 = NULL;
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

        Py_DECREF(locals_requests$cookies_165);
        locals_requests$cookies_165 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$cookies);
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT((PyObject *)outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;

        goto outline_result_3;
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

        goto outline_exception_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(requests$cookies);
        return NULL;
        outline_exception_3:;
        exception_lineno = 165;
        goto try_except_handler_10;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_CookieConflictError, tmp_assign_source_38);
    }
    goto try_end_6;
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

    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
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
        PyObject *tmp_assign_source_40;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_cookielib);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cookielib);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21843 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;

            goto try_except_handler_13;
        }

        tmp_source_name_13 = tmp_mvar_value_3;
        tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_CookieJar);
        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_13;
        }
        tmp_assign_source_40 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_assign_source_40, 0, tmp_tuple_element_10);
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_MutableMapping);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_MutableMapping);
        }

        if (tmp_mvar_value_4 == NULL) {
            Py_DECREF(tmp_assign_source_40);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21945 ], 36, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;

            goto try_except_handler_13;
        }

        tmp_tuple_element_10 = tmp_mvar_value_4;
        Py_INCREF(tmp_tuple_element_10);
        PyTuple_SET_ITEM(tmp_assign_source_40, 1, tmp_tuple_element_10);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_41 = impl___internal__$$$function_3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = PyDict_New();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_metaclass_name_4;
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_key_name_10;
        PyObject *tmp_dict_name_10;
        PyObject *tmp_dict_name_11;
        PyObject *tmp_key_name_11;
        nuitka_bool tmp_condition_result_24;
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


            exception_lineno = 171;

            goto try_except_handler_13;
        }
        tmp_condition_result_23 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_name_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_name_11 = const_str_plain_metaclass;
        tmp_metaclass_name_4 = DICT_GET_ITEM(tmp_dict_name_11, tmp_key_name_11);
        if (tmp_metaclass_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_13;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_13;
        }
        tmp_condition_result_24 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_subscribed_name_4 = tmp_class_creation_4__bases;
        tmp_subscript_name_4 = const_int_0;
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_4, tmp_subscript_name_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_13;
        }
        tmp_metaclass_name_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_13;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_4);
        condexpr_end_11:;
        condexpr_end_10:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_name_4 = tmp_class_creation_4__bases;
        tmp_assign_source_43 = SELECT_METACLASS(tmp_metaclass_name_4, tmp_bases_name_4);
        Py_DECREF(tmp_metaclass_name_4);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_43;
    }
    {
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_key_name_12;
        PyObject *tmp_dict_name_12;
        tmp_key_name_12 = const_str_plain_metaclass;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = PyDict_Contains(tmp_dict_name_12, tmp_key_name_12);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_13;
        }
        tmp_condition_result_25 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
        branch_yes_14:;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_13;
        }
        branch_no_14:;
    }
    {
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_source_name_14;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_source_name_14 = tmp_class_creation_4__metaclass;
        tmp_res = PyObject_HasAttr(tmp_source_name_14, const_str_plain___prepare__);
        tmp_condition_result_26 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
        branch_yes_15:;
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_name_13;
            PyObject *tmp_source_name_15;
            PyObject *tmp_args_name_7;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kw_name_7;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_source_name_15 = tmp_class_creation_4__metaclass;
            tmp_called_name_13 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain___prepare__);
            if (tmp_called_name_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto try_except_handler_13;
            }
            tmp_tuple_element_11 = const_str_plain_RequestsCookieJar;
            tmp_args_name_7 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_11);
            PyTuple_SET_ITEM(tmp_args_name_7, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_11 = tmp_class_creation_4__bases;
            Py_INCREF(tmp_tuple_element_11);
            PyTuple_SET_ITEM(tmp_args_name_7, 1, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;
            frame_2d46d3b307bd13ebb3743a2c35c2778f->m_frame.f_lineno = 171;
            tmp_assign_source_44 = CALL_FUNCTION(tmp_called_name_13, tmp_args_name_7, tmp_kw_name_7);
            Py_DECREF(tmp_called_name_13);
            Py_DECREF(tmp_args_name_7);
            if (tmp_assign_source_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto try_except_handler_13;
            }
            assert(tmp_class_creation_4__prepared == NULL);
            tmp_class_creation_4__prepared = tmp_assign_source_44;
        }
        {
            nuitka_bool tmp_condition_result_27;
            PyObject *tmp_operand_name_4;
            PyObject *tmp_source_name_16;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_source_name_16 = tmp_class_creation_4__prepared;
            tmp_res = PyObject_HasAttr(tmp_source_name_16, const_str_plain___getitem__);
            tmp_operand_name_4 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto try_except_handler_13;
            }
            tmp_condition_result_27 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
            branch_yes_16:;
            {
                PyObject *tmp_raise_type_4;
                PyObject *tmp_raise_value_4;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_tuple_element_12;
                PyObject *tmp_getattr_target_4;
                PyObject *tmp_getattr_attr_4;
                PyObject *tmp_getattr_default_4;
                PyObject *tmp_source_name_17;
                PyObject *tmp_type_arg_8;
                tmp_raise_type_4 = PyExc_TypeError;
                tmp_left_name_4 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT(tmp_class_creation_4__metaclass);
                tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
                tmp_getattr_attr_4 = const_str_plain___name__;
                tmp_getattr_default_4 = const_str_angle_metaclass;
                tmp_tuple_element_12 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 171;

                    goto try_except_handler_13;
                }
                tmp_right_name_4 = PyTuple_New(2);
                PyTuple_SET_ITEM(tmp_right_name_4, 0, tmp_tuple_element_12);
                CHECK_OBJECT(tmp_class_creation_4__prepared);
                tmp_type_arg_8 = tmp_class_creation_4__prepared;
                tmp_source_name_17 = BUILTIN_TYPE1(tmp_type_arg_8);
                assert(!(tmp_source_name_17 == NULL));
                tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain___name__);
                Py_DECREF(tmp_source_name_17);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_right_name_4);

                    exception_lineno = 171;

                    goto try_except_handler_13;
                }
                PyTuple_SET_ITEM(tmp_right_name_4, 1, tmp_tuple_element_12);
                tmp_raise_value_4 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_4, tmp_right_name_4);
                Py_DECREF(tmp_right_name_4);
                if (tmp_raise_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 171;

                    goto try_except_handler_13;
                }
                exception_type = tmp_raise_type_4;
                Py_INCREF(tmp_raise_type_4);
                exception_value = tmp_raise_value_4;
                exception_lineno = 171;
                RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

                goto try_except_handler_13;
            }
            branch_no_16:;
        }
        goto branch_end_15;
        branch_no_15:;
        {
            PyObject *tmp_assign_source_45;
            tmp_assign_source_45 = PyDict_New();
            assert(tmp_class_creation_4__prepared == NULL);
            tmp_class_creation_4__prepared = tmp_assign_source_45;
        }
        branch_end_15:;
    }
    {
        PyObject *tmp_assign_source_46;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_requests$cookies_171 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_12188133309ffc390643b7a732954d08;
        tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_15;
        }
        tmp_dictset_value = const_str_digest_c6a3c61d8189ea3789c38808f9f3af27;
        tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain___doc__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_15;
        }
        tmp_dictset_value = const_str_plain_RequestsCookieJar;
        tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_15;
        }
        MAKE_OR_REUSE_FRAME(cache_frame_8c22f653f32890eabe0a43062fe37d87_4, codeobj_8c22f653f32890eabe0a43062fe37d87, module_requests$cookies, sizeof(void *));
        frame_8c22f653f32890eabe0a43062fe37d87_4 = cache_frame_8c22f653f32890eabe0a43062fe37d87_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_8c22f653f32890eabe0a43062fe37d87_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_8c22f653f32890eabe0a43062fe37d87_4) == 2); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_none_none_none_tuple;
            Py_INCREF(tmp_defaults_3);
            tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_21_get(tmp_defaults_3);



            tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain_get, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_22_set();



        tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain_set, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_23_iterkeys();



        tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain_iterkeys, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_24_keys();



        tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain_keys, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_25_itervalues();



        tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain_itervalues, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_26_values();



        tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain_values, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_27_iteritems();



        tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain_iteritems, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_28_items();



        tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain_items, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_29_list_domains();



        tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain_list_domains, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_30_list_paths();



        tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain_list_paths, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_31_multiple_domains();



        tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain_multiple_domains, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = const_tuple_none_none_tuple;
            Py_INCREF(tmp_defaults_4);
            tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_32_get_dict(tmp_defaults_4);



            tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain_get_dict, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_33___contains__();



        tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain___contains__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_34___getitem__();



        tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain___getitem__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_35___setitem__();



        tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain___setitem__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_36___delitem__();



        tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain___delitem__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_37_set_cookie();



        tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain_set_cookie, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_38_update();



        tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain_update, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_none_none_tuple;
            Py_INCREF(tmp_defaults_5);
            tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_39__find(tmp_defaults_5);



            tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain__find, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = const_tuple_none_none_tuple;
            Py_INCREF(tmp_defaults_6);
            tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_40__find_no_duplicates(tmp_defaults_6);



            tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain__find_no_duplicates, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_41___getstate__();



        tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain___getstate__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_42___setstate__();



        tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain___setstate__, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_43_copy();



        tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain_copy, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$cookies$$$function_44_get_policy();



        tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain_get_policy, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_8c22f653f32890eabe0a43062fe37d87_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_8c22f653f32890eabe0a43062fe37d87_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8c22f653f32890eabe0a43062fe37d87_4, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_8c22f653f32890eabe0a43062fe37d87_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8c22f653f32890eabe0a43062fe37d87_4, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_8c22f653f32890eabe0a43062fe37d87_4,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame.
        if (frame_8c22f653f32890eabe0a43062fe37d87_4 == cache_frame_8c22f653f32890eabe0a43062fe37d87_4) {
            Py_DECREF(frame_8c22f653f32890eabe0a43062fe37d87_4);
        }
        cache_frame_8c22f653f32890eabe0a43062fe37d87_4 = NULL;

        assertFrameObject(frame_8c22f653f32890eabe0a43062fe37d87_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_15;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_compexpr_left_5 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_compexpr_right_5 = tmp_class_creation_4__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto try_except_handler_15;
            }
            tmp_condition_result_28 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto branch_yes_17;
            } else {
                goto branch_no_17;
            }
            branch_yes_17:;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_dictset_value = tmp_class_creation_4__bases_orig;
            tmp_res = PyObject_SetItem(locals_requests$cookies_171, const_str_plain___orig_bases__, tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto try_except_handler_15;
            }
            branch_no_17:;
        }
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_called_name_14;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kw_name_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_name_14 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_13 = const_str_plain_RequestsCookieJar;
            tmp_args_name_8 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_13);
            PyTuple_SET_ITEM(tmp_args_name_8, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_13 = tmp_class_creation_4__bases;
            Py_INCREF(tmp_tuple_element_13);
            PyTuple_SET_ITEM(tmp_args_name_8, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = locals_requests$cookies_171;
            Py_INCREF(tmp_tuple_element_13);
            PyTuple_SET_ITEM(tmp_args_name_8, 2, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;
            frame_2d46d3b307bd13ebb3743a2c35c2778f->m_frame.f_lineno = 171;
            tmp_assign_source_47 = CALL_FUNCTION(tmp_called_name_14, tmp_args_name_8, tmp_kw_name_8);
            Py_DECREF(tmp_args_name_8);
            if (tmp_assign_source_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto try_except_handler_15;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_47;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_46 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_46);
        goto try_return_handler_15;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$cookies);
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_requests$cookies_171);
        locals_requests$cookies_171 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_requests$cookies_171);
        locals_requests$cookies_171 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(requests$cookies);
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT((PyObject *)outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;

        goto outline_result_4;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_4;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(requests$cookies);
        return NULL;
        outline_exception_4:;
        exception_lineno = 171;
        goto try_except_handler_13;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_RequestsCookieJar, tmp_assign_source_46);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
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
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2d46d3b307bd13ebb3743a2c35c2778f);
#endif
    popFrameStack();

    assertFrameObject(frame_2d46d3b307bd13ebb3743a2c35c2778f);

    goto frame_no_exception_4;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2d46d3b307bd13ebb3743a2c35c2778f);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_2d46d3b307bd13ebb3743a2c35c2778f, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_2d46d3b307bd13ebb3743a2c35c2778f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2d46d3b307bd13ebb3743a2c35c2778f, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_4:;
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

    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_FUNCTION_requests$cookies$$$function_45__copy_cookie_jar();



        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain__copy_cookie_jar, tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = MAKE_FUNCTION_requests$cookies$$$function_46_create_cookie();



        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_create_cookie, tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = MAKE_FUNCTION_requests$cookies$$$function_47_morsel_to_cookie();



        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_morsel_to_cookie, tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_defaults_7;
        tmp_defaults_7 = const_tuple_none_true_tuple;
        Py_INCREF(tmp_defaults_7);
        tmp_assign_source_51 = MAKE_FUNCTION_requests$cookies$$$function_48_cookiejar_from_dict(tmp_defaults_7);



        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_cookiejar_from_dict, tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = MAKE_FUNCTION_requests$cookies$$$function_49_merge_cookies();



        UPDATE_STRING_DICT1(moduledict_requests$cookies, (Nuitka_StringObject *)const_str_plain_merge_cookies, tmp_assign_source_52);
    }

    return module_requests$cookies;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
