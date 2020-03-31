/* Generated code for Python module 'urllib3.packages.ssl_match_hostname._implementation'
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

/* The "_module_urllib3$packages$ssl_match_hostname$_implementation" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$packages$ssl_match_hostname$_implementation;
PyDictObject *moduledict_urllib3$packages$ssl_match_hostname$_implementation;

/* The declarations of module constants used, if any. */
static PyObject *const_tuple_str_plain_ipname_str_plain_host_ip_str_plain_ip_tuple;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_2827a02148585180db385ecab4334673;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_CertificateError;
static PyObject *const_str_plain_dnsnames;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_4886b0b2f8d491d0ce3dae89a464bee3;
static PyObject *const_str_plain_san;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_tuple_67f07609e3644b8c19de10c902eeeb48_tuple;
extern PyObject *const_str_plain_commonName;
static PyObject *const_str_plain_host_ip;
extern PyObject *const_str_chr_42;
static PyObject *const_str_digest_9d2ee80bc8b6b38510f1287d710300dd;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_sub;
static PyObject *const_str_plain__ipaddress_match;
extern PyObject *const_str_digest_e56abf9379492360b5ea0226e2912c30;
static PyObject *const_tuple_str_plain_subject_tuple_empty_tuple;
extern PyObject *const_str_plain_match_hostname;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_repr;
static PyObject *const_str_digest_cb4b3ec76f0e04caf09490892f20768f;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_dot;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain_max_wildcards;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_str_plain_str;
static PyObject *const_tuple_str_digest_a21015eda0a35a65e0c45d13bd50f6cd_tuple;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_bf444768bd6e1671ab2a507b3ebb9a78;
extern PyObject *const_str_plain_value;
static PyObject *const_str_digest_67325c16e6049950668b4d54af8157ef;
extern PyObject *const_str_plain_unicode;
extern PyObject *const_str_plain_IGNORECASE;
extern PyObject *const_str_plain_DNS;
static PyObject *const_str_plain_frag;
static PyObject *const_str_digest_f66ea29fd347bd1e1c153f7fc85b4c4d;
static PyObject *const_tuple_2093a7623858190feac335b978220df2_tuple;
extern PyObject *const_str_plain_parts;
static PyObject *const_str_digest_a21015eda0a35a65e0c45d13bd50f6cd;
extern PyObject *const_tuple_str_dot_tuple;
static PyObject *const_str_plain__dnsname_match;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_93d15f13bc4ddb17dc6e54285f512f62;
static PyObject *const_str_digest_46edd689caa2c90961077381033a48f1;
extern PyObject *const_str_plain_append;
static PyObject *const_str_digest_c8d28aa411cf9a88d9aed194157300dd;
extern PyObject *const_str_plain_errors;
extern PyObject *const_str_plain_ip_address;
extern PyObject *const_str_plain_compile;
extern PyObject *const_str_plain_ipaddress;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_match;
extern PyObject *const_str_plain_cert;
extern PyObject *const_str_plain_ip;
extern PyObject *const_str_plain_map;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_tuple_int_pos_3_tuple;
extern PyObject *const_str_plain_strict;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_str_plain_count;
extern PyObject *const_str_plain___version__;
static PyObject *const_tuple_str_digest_3f122124238c5ee400de97226dfddd9b_tuple;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_digest_b8a3e24bd480f9d749e7f38794d9a804_tuple;
extern PyObject *const_str_plain_subject;
static PyObject *const_str_digest_b8ae32441dc7540b307e3e1dd1d9ff26;
extern PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_ipname;
static PyObject *const_str_digest_3f122124238c5ee400de97226dfddd9b;
static PyObject *const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
static PyObject *const_str_digest_3b35d51050a71678e6a91f8af50bcd6c;
static PyObject *const_str_digest_a1821d5248f5f2bbed11f0437de80314;
static PyObject *const_str_plain_dn;
extern PyObject *const_tuple_str_plain_subjectAltName_tuple_empty_tuple;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_pats;
static PyObject *const_str_plain__to_unicode;
static PyObject *const_str_digest_cee8a0917b60d1bd22f94d241f22b50b;
static PyObject *const_tuple_type_ValueError_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_subjectAltName;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_digest_b8a3e24bd480f9d749e7f38794d9a804;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain_hostname;
extern PyObject *const_tuple_str_plain_obj_tuple;
extern PyObject *const_str_plain_key;
static PyObject *const_str_plain_remainder;
static PyObject *const_str_plain_leftmost;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_rstrip;
static PyObject *const_str_digest_a0db21d4919b03bd7d8ccb97e7a49f28;
extern PyObject *const_str_plain_version_info;
static PyObject *const_str_digest_42d53db88c654c04e177c9dae0a4a313;
static PyObject *const_dict_d42f90a6a4ebac59a20d994abd2b5b60;
extern PyObject *const_str_digest_76d751ede7bd087f9346e5a615d3c397;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_wildcards;
extern PyObject *const_str_plain_ascii;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_plain_pat;
static PyObject *const_str_plain_escape;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_tuple_str_plain_ipname_str_plain_host_ip_str_plain_ip_tuple = PyTuple_New(3);
    const_str_plain_ipname = UNSTREAM_STRING_ASCII(&constant_bin[ 728126 ], 6, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_ipname_str_plain_host_ip_str_plain_ip_tuple, 0, const_str_plain_ipname); Py_INCREF(const_str_plain_ipname);
    const_str_plain_host_ip = UNSTREAM_STRING_ASCII(&constant_bin[ 728132 ], 7, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_ipname_str_plain_host_ip_str_plain_ip_tuple, 1, const_str_plain_host_ip); Py_INCREF(const_str_plain_host_ip);
    PyTuple_SET_ITEM(const_tuple_str_plain_ipname_str_plain_host_ip_str_plain_ip_tuple, 2, const_str_plain_ip); Py_INCREF(const_str_plain_ip);
    const_str_digest_2827a02148585180db385ecab4334673 = UNSTREAM_STRING_ASCII(&constant_bin[ 728139 ], 28, 0);
    const_str_plain_dnsnames = UNSTREAM_STRING_ASCII(&constant_bin[ 728167 ], 8, 1);
    const_str_digest_4886b0b2f8d491d0ce3dae89a464bee3 = UNSTREAM_STRING_ASCII(&constant_bin[ 638057 ], 2, 0);
    const_str_plain_san = UNSTREAM_STRING_ASCII(&constant_bin[ 372283 ], 3, 1);
    const_tuple_67f07609e3644b8c19de10c902eeeb48_tuple = PyTuple_New(8);
    PyTuple_SET_ITEM(const_tuple_67f07609e3644b8c19de10c902eeeb48_tuple, 0, const_str_plain_cert); Py_INCREF(const_str_plain_cert);
    PyTuple_SET_ITEM(const_tuple_67f07609e3644b8c19de10c902eeeb48_tuple, 1, const_str_plain_hostname); Py_INCREF(const_str_plain_hostname);
    PyTuple_SET_ITEM(const_tuple_67f07609e3644b8c19de10c902eeeb48_tuple, 2, const_str_plain_host_ip); Py_INCREF(const_str_plain_host_ip);
    PyTuple_SET_ITEM(const_tuple_67f07609e3644b8c19de10c902eeeb48_tuple, 3, const_str_plain_dnsnames); Py_INCREF(const_str_plain_dnsnames);
    PyTuple_SET_ITEM(const_tuple_67f07609e3644b8c19de10c902eeeb48_tuple, 4, const_str_plain_san); Py_INCREF(const_str_plain_san);
    PyTuple_SET_ITEM(const_tuple_67f07609e3644b8c19de10c902eeeb48_tuple, 5, const_str_plain_key); Py_INCREF(const_str_plain_key);
    PyTuple_SET_ITEM(const_tuple_67f07609e3644b8c19de10c902eeeb48_tuple, 6, const_str_plain_value); Py_INCREF(const_str_plain_value);
    PyTuple_SET_ITEM(const_tuple_67f07609e3644b8c19de10c902eeeb48_tuple, 7, const_str_plain_sub); Py_INCREF(const_str_plain_sub);
    const_str_digest_9d2ee80bc8b6b38510f1287d710300dd = UNSTREAM_STRING_ASCII(&constant_bin[ 728175 ], 51, 0);
    const_str_plain__ipaddress_match = UNSTREAM_STRING_ASCII(&constant_bin[ 31270 ], 16, 1);
    const_tuple_str_plain_subject_tuple_empty_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_subject_tuple_empty_tuple, 0, const_str_plain_subject); Py_INCREF(const_str_plain_subject);
    PyTuple_SET_ITEM(const_tuple_str_plain_subject_tuple_empty_tuple, 1, const_tuple_empty); Py_INCREF(const_tuple_empty);
    const_str_digest_cb4b3ec76f0e04caf09490892f20768f = UNSTREAM_STRING_ASCII(&constant_bin[ 728226 ], 297, 0);
    const_str_plain_max_wildcards = UNSTREAM_STRING_ASCII(&constant_bin[ 728523 ], 13, 1);
    const_tuple_str_digest_a21015eda0a35a65e0c45d13bd50f6cd_tuple = PyTuple_New(1);
    const_str_digest_a21015eda0a35a65e0c45d13bd50f6cd = UNSTREAM_STRING_ASCII(&constant_bin[ 728536 ], 5, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_a21015eda0a35a65e0c45d13bd50f6cd_tuple, 0, const_str_digest_a21015eda0a35a65e0c45d13bd50f6cd); Py_INCREF(const_str_digest_a21015eda0a35a65e0c45d13bd50f6cd);
    const_str_digest_bf444768bd6e1671ab2a507b3ebb9a78 = UNSTREAM_STRING_ASCII(&constant_bin[ 728541 ], 2, 0);
    const_str_digest_67325c16e6049950668b4d54af8157ef = UNSTREAM_STRING_ASCII(&constant_bin[ 728543 ], 104, 0);
    const_str_plain_frag = UNSTREAM_STRING_ASCII(&constant_bin[ 20264 ], 4, 1);
    const_str_digest_f66ea29fd347bd1e1c153f7fc85b4c4d = UNSTREAM_STRING_ASCII(&constant_bin[ 728647 ], 116, 0);
    const_tuple_2093a7623858190feac335b978220df2_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_2093a7623858190feac335b978220df2_tuple, 0, const_str_digest_4886b0b2f8d491d0ce3dae89a464bee3); Py_INCREF(const_str_digest_4886b0b2f8d491d0ce3dae89a464bee3);
    const_str_digest_93d15f13bc4ddb17dc6e54285f512f62 = UNSTREAM_STRING_ASCII(&constant_bin[ 728763 ], 5, 0);
    PyTuple_SET_ITEM(const_tuple_2093a7623858190feac335b978220df2_tuple, 1, const_str_digest_93d15f13bc4ddb17dc6e54285f512f62); Py_INCREF(const_str_digest_93d15f13bc4ddb17dc6e54285f512f62);
    const_str_plain__dnsname_match = UNSTREAM_STRING_ASCII(&constant_bin[ 31234 ], 14, 1);
    const_str_digest_46edd689caa2c90961077381033a48f1 = UNSTREAM_STRING_ASCII(&constant_bin[ 728768 ], 7, 0);
    const_str_digest_c8d28aa411cf9a88d9aed194157300dd = UNSTREAM_STRING_ASCII(&constant_bin[ 35287 ], 2, 0);
    const_tuple_str_digest_3f122124238c5ee400de97226dfddd9b_tuple = PyTuple_New(1);
    const_str_digest_3f122124238c5ee400de97226dfddd9b = UNSTREAM_STRING_ASCII(&constant_bin[ 468513 ], 4, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_3f122124238c5ee400de97226dfddd9b_tuple, 0, const_str_digest_3f122124238c5ee400de97226dfddd9b); Py_INCREF(const_str_digest_3f122124238c5ee400de97226dfddd9b);
    const_tuple_str_digest_b8a3e24bd480f9d749e7f38794d9a804_tuple = PyTuple_New(1);
    const_str_digest_b8a3e24bd480f9d749e7f38794d9a804 = UNSTREAM_STRING_ASCII(&constant_bin[ 728775 ], 61, 0);
    PyTuple_SET_ITEM(const_tuple_str_digest_b8a3e24bd480f9d749e7f38794d9a804_tuple, 0, const_str_digest_b8a3e24bd480f9d749e7f38794d9a804); Py_INCREF(const_str_digest_b8a3e24bd480f9d749e7f38794d9a804);
    const_str_digest_b8ae32441dc7540b307e3e1dd1d9ff26 = UNSTREAM_STRING_ASCII(&constant_bin[ 728836 ], 74, 0);
    const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple = PyTuple_New(10);
    const_str_plain_dn = UNSTREAM_STRING_ASCII(&constant_bin[ 27 ], 2, 1);
    PyTuple_SET_ITEM(const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple, 0, const_str_plain_dn); Py_INCREF(const_str_plain_dn);
    PyTuple_SET_ITEM(const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple, 1, const_str_plain_hostname); Py_INCREF(const_str_plain_hostname);
    PyTuple_SET_ITEM(const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple, 2, const_str_plain_max_wildcards); Py_INCREF(const_str_plain_max_wildcards);
    const_str_plain_pats = UNSTREAM_STRING_ASCII(&constant_bin[ 728910 ], 4, 1);
    PyTuple_SET_ITEM(const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple, 3, const_str_plain_pats); Py_INCREF(const_str_plain_pats);
    PyTuple_SET_ITEM(const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple, 4, const_str_plain_parts); Py_INCREF(const_str_plain_parts);
    const_str_plain_leftmost = UNSTREAM_STRING_ASCII(&constant_bin[ 728914 ], 8, 1);
    PyTuple_SET_ITEM(const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple, 5, const_str_plain_leftmost); Py_INCREF(const_str_plain_leftmost);
    const_str_plain_remainder = UNSTREAM_STRING_ASCII(&constant_bin[ 418213 ], 9, 1);
    PyTuple_SET_ITEM(const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple, 6, const_str_plain_remainder); Py_INCREF(const_str_plain_remainder);
    const_str_plain_wildcards = UNSTREAM_STRING_ASCII(&constant_bin[ 728527 ], 9, 1);
    PyTuple_SET_ITEM(const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple, 7, const_str_plain_wildcards); Py_INCREF(const_str_plain_wildcards);
    PyTuple_SET_ITEM(const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple, 8, const_str_plain_frag); Py_INCREF(const_str_plain_frag);
    PyTuple_SET_ITEM(const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple, 9, const_str_plain_pat); Py_INCREF(const_str_plain_pat);
    const_str_digest_3b35d51050a71678e6a91f8af50bcd6c = UNSTREAM_STRING_ASCII(&constant_bin[ 728922 ], 38, 0);
    const_str_digest_a1821d5248f5f2bbed11f0437de80314 = UNSTREAM_STRING_ASCII(&constant_bin[ 728960 ], 60, 0);
    const_str_plain__to_unicode = UNSTREAM_STRING_ASCII(&constant_bin[ 31201 ], 11, 1);
    const_str_digest_cee8a0917b60d1bd22f94d241f22b50b = UNSTREAM_STRING_ASCII(&constant_bin[ 729020 ], 136, 0);
    const_tuple_type_ValueError_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_type_ValueError_tuple, 0, (PyObject *)PyExc_ValueError); Py_INCREF((PyObject *)PyExc_ValueError);
    const_str_digest_a0db21d4919b03bd7d8ccb97e7a49f28 = UNSTREAM_STRING_ASCII(&constant_bin[ 729156 ], 44, 0);
    const_str_digest_42d53db88c654c04e177c9dae0a4a313 = UNSTREAM_STRING_ASCII(&constant_bin[ 729200 ], 93, 0);
    const_dict_d42f90a6a4ebac59a20d994abd2b5b60 = _PyDict_NewPresized( 2 );
    PyDict_SetItem(const_dict_d42f90a6a4ebac59a20d994abd2b5b60, const_str_plain_encoding, const_str_plain_ascii);
    PyDict_SetItem(const_dict_d42f90a6a4ebac59a20d994abd2b5b60, const_str_plain_errors, const_str_plain_strict);
    assert(PyDict_Size(const_dict_d42f90a6a4ebac59a20d994abd2b5b60) == 2);
    const_str_plain_escape = UNSTREAM_STRING_ASCII(&constant_bin[ 80266 ], 6, 1);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$packages$ssl_match_hostname$_implementation(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c8d5deda4aff16e018f0305ec371af24;
static PyCodeObject *codeobj_a1767b45fab354090524cfa5ea6d966e;
static PyCodeObject *codeobj_583aab6745b3ad711ea865da375fec7d;
static PyCodeObject *codeobj_0aa7b441b090b4f2855fac5867abf6fe;
static PyCodeObject *codeobj_ee82517392eda06ca3e89202cf0d62d1;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_42d53db88c654c04e177c9dae0a4a313;
    codeobj_c8d5deda4aff16e018f0305ec371af24 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_a1821d5248f5f2bbed11f0437de80314, const_tuple_empty, 0, 0, 0);
    codeobj_a1767b45fab354090524cfa5ea6d966e = MAKE_CODEOBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__dnsname_match, const_tuple_7da4d6f2d0f6d9467d44c91a059911a1_tuple, 3, 0, 0);
    codeobj_583aab6745b3ad711ea865da375fec7d = MAKE_CODEOBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__ipaddress_match, const_tuple_str_plain_ipname_str_plain_host_ip_str_plain_ip_tuple, 2, 0, 0);
    codeobj_0aa7b441b090b4f2855fac5867abf6fe = MAKE_CODEOBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__to_unicode, const_tuple_str_plain_obj_tuple, 1, 0, 0);
    codeobj_ee82517392eda06ca3e89202cf0d62d1 = MAKE_CODEOBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_match_hostname, const_tuple_67f07609e3644b8c19de10c902eeeb48_tuple, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_urllib3$packages$ssl_match_hostname$_implementation$$$function_1__dnsname_match(PyObject *defaults);


static PyObject *MAKE_FUNCTION_urllib3$packages$ssl_match_hostname$_implementation$$$function_2__to_unicode();


static PyObject *MAKE_FUNCTION_urllib3$packages$ssl_match_hostname$_implementation$$$function_3__ipaddress_match();


static PyObject *MAKE_FUNCTION_urllib3$packages$ssl_match_hostname$_implementation$$$function_4_match_hostname();


// The module function definitions.
static PyObject *impl_urllib3$packages$ssl_match_hostname$_implementation$$$function_1__dnsname_match(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dn = python_pars[0];
    PyObject *par_hostname = python_pars[1];
    PyObject *par_max_wildcards = python_pars[2];
    PyObject *var_pats = NULL;
    PyObject *var_parts = NULL;
    PyObject *var_leftmost = NULL;
    PyObject *var_remainder = NULL;
    PyObject *var_wildcards = NULL;
    PyObject *var_frag = NULL;
    PyObject *var_pat = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_a1767b45fab354090524cfa5ea6d966e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_a1767b45fab354090524cfa5ea6d966e = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyList_New(0);
        assert(var_pats == NULL);
        var_pats = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_a1767b45fab354090524cfa5ea6d966e, codeobj_a1767b45fab354090524cfa5ea6d966e, module_urllib3$packages$ssl_match_hostname$_implementation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_a1767b45fab354090524cfa5ea6d966e = cache_frame_a1767b45fab354090524cfa5ea6d966e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a1767b45fab354090524cfa5ea6d966e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a1767b45fab354090524cfa5ea6d966e) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(par_dn);
        tmp_operand_name_1 = par_dn;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_dn);
        tmp_called_instance_1 = par_dn;
        frame_a1767b45fab354090524cfa5ea6d966e->m_frame.f_lineno = 36;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_split, &PyTuple_GET_ITEM(const_tuple_str_dot_tuple, 0));

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_parts == NULL);
        var_parts = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(var_parts);
        tmp_subscribed_name_1 = var_parts;
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_leftmost == NULL);
        var_leftmost = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(var_parts);
        tmp_subscribed_name_2 = var_parts;
        tmp_subscript_name_2 = const_slice_int_pos_1_none_none;
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_2, tmp_subscript_name_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_remainder == NULL);
        var_remainder = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_leftmost);
        tmp_called_instance_2 = var_leftmost;
        frame_a1767b45fab354090524cfa5ea6d966e->m_frame.f_lineno = 40;
        tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_count, &PyTuple_GET_ITEM(const_tuple_str_chr_42_tuple, 0));

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_wildcards == NULL);
        var_wildcards = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_wildcards);
        tmp_compexpr_left_1 = var_wildcards;
        CHECK_OBJECT(par_max_wildcards);
        tmp_compexpr_right_1 = par_max_wildcards;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_operand_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_CertificateError);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CertificateError);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 28172 ], 38, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 46;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            tmp_left_name_1 = const_str_digest_a0db21d4919b03bd7d8ccb97e7a49f28;
            CHECK_OBJECT(par_dn);
            tmp_operand_name_2 = par_dn;
            tmp_right_name_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_name_2);
            if (tmp_right_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = BINARY_OPERATION_ADD_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
            Py_DECREF(tmp_right_name_1);
            if (tmp_args_element_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            frame_a1767b45fab354090524cfa5ea6d966e->m_frame.f_lineno = 46;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_raise_type_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 46;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_3;
        CHECK_OBJECT(var_wildcards);
        tmp_operand_name_3 = var_wildcards;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooooooo";
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
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_called_instance_4;
            CHECK_OBJECT(par_dn);
            tmp_called_instance_3 = par_dn;
            frame_a1767b45fab354090524cfa5ea6d966e->m_frame.f_lineno = 51;
            tmp_compexpr_left_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, const_str_plain_lower);
            if (tmp_compexpr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_hostname);
            tmp_called_instance_4 = par_hostname;
            frame_a1767b45fab354090524cfa5ea6d966e->m_frame.f_lineno = 51;
            tmp_compexpr_right_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, const_str_plain_lower);
            if (tmp_compexpr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_compexpr_left_2);

                exception_lineno = 51;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            Py_DECREF(tmp_compexpr_left_2);
            Py_DECREF(tmp_compexpr_right_2);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(var_leftmost);
        tmp_compexpr_left_3 = var_leftmost;
        tmp_compexpr_right_3 = const_str_chr_42;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooo";
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
            PyObject *tmp_called_instance_5;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT(var_pats);
            tmp_called_instance_5 = var_pats;
            frame_a1767b45fab354090524cfa5ea6d966e->m_frame.f_lineno = 59;
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_append, &PyTuple_GET_ITEM(const_tuple_str_digest_a21015eda0a35a65e0c45d13bd50f6cd_tuple, 0));

            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        goto branch_end_4;
        branch_no_4:;
        {
            nuitka_bool tmp_condition_result_5;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_call_result_2;
            int tmp_truth_name_1;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_call_result_3;
            int tmp_truth_name_2;
            CHECK_OBJECT(var_leftmost);
            tmp_called_instance_6 = var_leftmost;
            frame_a1767b45fab354090524cfa5ea6d966e->m_frame.f_lineno = 60;
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_6, const_str_plain_startswith, &PyTuple_GET_ITEM(const_tuple_str_digest_3f122124238c5ee400de97226dfddd9b_tuple, 0));

            if (tmp_call_result_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
            if (tmp_truth_name_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_2);

                exception_lineno = 60;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF(tmp_call_result_2);
            tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
            if (tmp_or_left_truth_1 == 1) {
                goto or_left_1;
            } else {
                goto or_right_1;
            }
            or_right_1:;
            CHECK_OBJECT(par_hostname);
            tmp_called_instance_7 = par_hostname;
            frame_a1767b45fab354090524cfa5ea6d966e->m_frame.f_lineno = 60;
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_7, const_str_plain_startswith, &PyTuple_GET_ITEM(const_tuple_str_digest_3f122124238c5ee400de97226dfddd9b_tuple, 0));

            if (tmp_call_result_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_3);
            if (tmp_truth_name_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_3);

                exception_lineno = 60;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF(tmp_call_result_3);
            tmp_condition_result_5 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_condition_result_5 = tmp_or_left_value_1;
            or_end_1:;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
            branch_yes_5:;
            {
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_1;
                PyObject *tmp_call_result_4;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_called_instance_8;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_3;
                CHECK_OBJECT(var_pats);
                tmp_source_name_1 = var_pats;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_append);
                if (tmp_called_name_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_re);

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

                    exception_lineno = 65;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_8 = tmp_mvar_value_2;
                CHECK_OBJECT(var_leftmost);
                tmp_args_element_name_3 = var_leftmost;
                frame_a1767b45fab354090524cfa5ea6d966e->m_frame.f_lineno = 65;
                {
                    PyObject *call_args[] = {tmp_args_element_name_3};
                    tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_8, const_str_plain_escape, call_args);
                }

                if (tmp_args_element_name_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_2);

                    exception_lineno = 65;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_a1767b45fab354090524cfa5ea6d966e->m_frame.f_lineno = 65;
                tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_args_element_name_2);
                if (tmp_call_result_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_4);
            }
            goto branch_end_5;
            branch_no_5:;
            {
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_2;
                PyObject *tmp_call_result_5;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_called_instance_9;
                PyObject *tmp_called_instance_10;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_args_element_name_5;
                CHECK_OBJECT(var_pats);
                tmp_source_name_2 = var_pats;
                tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_append);
                if (tmp_called_name_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 68;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_re);

                if (unlikely(tmp_mvar_value_3 == NULL)) {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_re);
                }

                if (tmp_mvar_value_3 == NULL) {
                    Py_DECREF(tmp_called_name_3);
                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 2261 ], 24, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 68;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_10 = tmp_mvar_value_3;
                CHECK_OBJECT(var_leftmost);
                tmp_args_element_name_5 = var_leftmost;
                frame_a1767b45fab354090524cfa5ea6d966e->m_frame.f_lineno = 68;
                {
                    PyObject *call_args[] = {tmp_args_element_name_5};
                    tmp_called_instance_9 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_10, const_str_plain_escape, call_args);
                }

                if (tmp_called_instance_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_3);

                    exception_lineno = 68;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_a1767b45fab354090524cfa5ea6d966e->m_frame.f_lineno = 68;
                tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_9, const_str_plain_replace, &PyTuple_GET_ITEM(const_tuple_2093a7623858190feac335b978220df2_tuple, 0));

                Py_DECREF(tmp_called_instance_9);
                if (tmp_args_element_name_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_name_3);

                    exception_lineno = 68;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_a1767b45fab354090524cfa5ea6d966e->m_frame.f_lineno = 68;
                tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_4);
                Py_DECREF(tmp_called_name_3);
                Py_DECREF(tmp_args_element_name_4);
                if (tmp_call_result_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 68;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF(tmp_call_result_5);
            }
            branch_end_5:;
        }
        branch_end_4:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_remainder);
        tmp_iter_arg_1 = var_remainder;
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooo";
                exception_lineno = 71;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_8 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_frag;
            var_frag = tmp_assign_source_8;
            Py_INCREF(var_frag);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT(var_pats);
        tmp_source_name_3 = var_pats;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_append);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_re);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_re);
        }

        if (tmp_mvar_value_4 == NULL) {
            Py_DECREF(tmp_called_name_4);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2261 ], 24, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 72;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_11 = tmp_mvar_value_4;
        CHECK_OBJECT(var_frag);
        tmp_args_element_name_7 = var_frag;
        frame_a1767b45fab354090524cfa5ea6d966e->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = {tmp_args_element_name_7};
            tmp_args_element_name_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_11, const_str_plain_escape, call_args);
        }

        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 72;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_a1767b45fab354090524cfa5ea6d966e->m_frame.f_lineno = 72;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_6);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 71;
        type_description_1 = "oooooooooo";
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_right_name_3;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_re);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_re);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2261 ], 24, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 74;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_5;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_compile);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = const_str_digest_c8d28aa411cf9a88d9aed194157300dd;
        tmp_called_instance_12 = const_str_digest_e56abf9379492360b5ea0226e2912c30;
        CHECK_OBJECT(var_pats);
        tmp_args_element_name_9 = var_pats;
        frame_a1767b45fab354090524cfa5ea6d966e->m_frame.f_lineno = 74;
        {
            PyObject *call_args[] = {tmp_args_element_name_9};
            tmp_right_name_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_12, const_str_plain_join, call_args);
        }

        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 74;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = BINARY_OPERATION_ADD_UNICODE_OBJECT(tmp_left_name_3, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 74;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = const_str_digest_bf444768bd6e1671ab2a507b3ebb9a78;
        tmp_args_element_name_8 = BINARY_OPERATION_ADD_OBJECT_UNICODE(tmp_left_name_2, tmp_right_name_3);
        Py_DECREF(tmp_left_name_2);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);

            exception_lineno = 74;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_re);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_re);
        }

        if (tmp_mvar_value_6 == NULL) {
            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_args_element_name_8);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2261 ], 24, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 74;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_6;
        tmp_args_element_name_10 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain_IGNORECASE);
        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_5);
            Py_DECREF(tmp_args_element_name_8);

            exception_lineno = 74;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a1767b45fab354090524cfa5ea6d966e->m_frame.f_lineno = 74;
        {
            PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_10};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, call_args);
        }

        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_element_name_8);
        Py_DECREF(tmp_args_element_name_10);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pat == NULL);
        var_pat = tmp_assign_source_9;
    }
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_args_element_name_11;
        CHECK_OBJECT(var_pat);
        tmp_called_instance_13 = var_pat;
        CHECK_OBJECT(par_hostname);
        tmp_args_element_name_11 = par_hostname;
        frame_a1767b45fab354090524cfa5ea6d966e->m_frame.f_lineno = 75;
        {
            PyObject *call_args[] = {tmp_args_element_name_11};
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_13, const_str_plain_match, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a1767b45fab354090524cfa5ea6d966e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a1767b45fab354090524cfa5ea6d966e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a1767b45fab354090524cfa5ea6d966e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a1767b45fab354090524cfa5ea6d966e, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_a1767b45fab354090524cfa5ea6d966e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a1767b45fab354090524cfa5ea6d966e, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a1767b45fab354090524cfa5ea6d966e,
        type_description_1,
        par_dn,
        par_hostname,
        par_max_wildcards,
        var_pats,
        var_parts,
        var_leftmost,
        var_remainder,
        var_wildcards,
        var_frag,
        var_pat
    );


    // Release cached frame.
    if (frame_a1767b45fab354090524cfa5ea6d966e == cache_frame_a1767b45fab354090524cfa5ea6d966e) {
        Py_DECREF(frame_a1767b45fab354090524cfa5ea6d966e);
    }
    cache_frame_a1767b45fab354090524cfa5ea6d966e = NULL;

    assertFrameObject(frame_a1767b45fab354090524cfa5ea6d966e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$packages$ssl_match_hostname$_implementation$$$function_1__dnsname_match);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_pats);
    Py_DECREF(var_pats);
    var_pats = NULL;

    Py_XDECREF(var_parts);
    var_parts = NULL;

    Py_XDECREF(var_leftmost);
    var_leftmost = NULL;

    Py_XDECREF(var_remainder);
    var_remainder = NULL;

    Py_XDECREF(var_wildcards);
    var_wildcards = NULL;

    Py_XDECREF(var_frag);
    var_frag = NULL;

    Py_XDECREF(var_pat);
    var_pat = NULL;

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

    CHECK_OBJECT((PyObject *)var_pats);
    Py_DECREF(var_pats);
    var_pats = NULL;

    Py_XDECREF(var_parts);
    var_parts = NULL;

    Py_XDECREF(var_leftmost);
    var_leftmost = NULL;

    Py_XDECREF(var_remainder);
    var_remainder = NULL;

    Py_XDECREF(var_wildcards);
    var_wildcards = NULL;

    Py_XDECREF(var_frag);
    var_frag = NULL;

    Py_XDECREF(var_pat);
    var_pat = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$packages$ssl_match_hostname$_implementation$$$function_1__dnsname_match);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_dn);
    Py_DECREF(par_dn);
    CHECK_OBJECT(par_hostname);
    Py_DECREF(par_hostname);
    CHECK_OBJECT(par_max_wildcards);
    Py_DECREF(par_max_wildcards);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_dn);
    Py_DECREF(par_dn);
    CHECK_OBJECT(par_hostname);
    Py_DECREF(par_hostname);
    CHECK_OBJECT(par_max_wildcards);
    Py_DECREF(par_max_wildcards);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$packages$ssl_match_hostname$_implementation$$$function_2__to_unicode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    struct Nuitka_FrameObject *frame_0aa7b441b090b4f2855fac5867abf6fe;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0aa7b441b090b4f2855fac5867abf6fe = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_0aa7b441b090b4f2855fac5867abf6fe, codeobj_0aa7b441b090b4f2855fac5867abf6fe, module_urllib3$packages$ssl_match_hostname$_implementation, sizeof(void *));
    frame_0aa7b441b090b4f2855fac5867abf6fe = cache_frame_0aa7b441b090b4f2855fac5867abf6fe;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0aa7b441b090b4f2855fac5867abf6fe);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0aa7b441b090b4f2855fac5867abf6fe) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(par_obj);
        tmp_isinstance_inst_1 = par_obj;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "o";
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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_sys);

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

            exception_lineno = 79;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_version_info);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_tuple_int_pos_3_tuple;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "o";
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
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_unicode);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode);
            }

            if (tmp_mvar_value_2 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 647 ], 29, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 80;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT(par_obj);
            tmp_tuple_element_1 = par_obj;
            tmp_args_name_1 = PyTuple_New(1);
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
            tmp_kw_name_1 = PyDict_Copy(const_dict_d42f90a6a4ebac59a20d994abd2b5b60);
            frame_0aa7b441b090b4f2855fac5867abf6fe->m_frame.f_lineno = 80;
            tmp_assign_source_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
            Py_DECREF(tmp_args_name_1);
            Py_DECREF(tmp_kw_name_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_obj;
                assert(old != NULL);
                par_obj = tmp_assign_source_1;
                Py_DECREF(old);
            }

        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0aa7b441b090b4f2855fac5867abf6fe);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0aa7b441b090b4f2855fac5867abf6fe);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0aa7b441b090b4f2855fac5867abf6fe, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_0aa7b441b090b4f2855fac5867abf6fe->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0aa7b441b090b4f2855fac5867abf6fe, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0aa7b441b090b4f2855fac5867abf6fe,
        type_description_1,
        par_obj
    );


    // Release cached frame.
    if (frame_0aa7b441b090b4f2855fac5867abf6fe == cache_frame_0aa7b441b090b4f2855fac5867abf6fe) {
        Py_DECREF(frame_0aa7b441b090b4f2855fac5867abf6fe);
    }
    cache_frame_0aa7b441b090b4f2855fac5867abf6fe = NULL;

    assertFrameObject(frame_0aa7b441b090b4f2855fac5867abf6fe);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(par_obj);
    tmp_return_value = par_obj;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$packages$ssl_match_hostname$_implementation$$$function_2__to_unicode);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)par_obj);
    Py_DECREF(par_obj);
    par_obj = NULL;

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

    CHECK_OBJECT((PyObject *)par_obj);
    Py_DECREF(par_obj);
    par_obj = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$packages$ssl_match_hostname$_implementation$$$function_2__to_unicode);
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


static PyObject *impl_urllib3$packages$ssl_match_hostname$_implementation$$$function_3__ipaddress_match(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ipname = python_pars[0];
    PyObject *par_host_ip = python_pars[1];
    PyObject *var_ip = NULL;
    struct Nuitka_FrameObject *frame_583aab6745b3ad711ea865da375fec7d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_583aab6745b3ad711ea865da375fec7d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_583aab6745b3ad711ea865da375fec7d, codeobj_583aab6745b3ad711ea865da375fec7d, module_urllib3$packages$ssl_match_hostname$_implementation, sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_583aab6745b3ad711ea865da375fec7d = cache_frame_583aab6745b3ad711ea865da375fec7d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_583aab6745b3ad711ea865da375fec7d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_583aab6745b3ad711ea865da375fec7d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_ipaddress);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ipaddress);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 31164 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 91;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_ip_address);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain__to_unicode);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__to_unicode);
        }

        if (tmp_mvar_value_2 == NULL) {
            Py_DECREF(tmp_called_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 31195 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 91;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT(par_ipname);
        tmp_args_element_name_2 = par_ipname;
        frame_583aab6745b3ad711ea865da375fec7d->m_frame.f_lineno = 91;
        tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 91;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_583aab6745b3ad711ea865da375fec7d->m_frame.f_lineno = 91;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_rstrip);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 91;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_583aab6745b3ad711ea865da375fec7d->m_frame.f_lineno = 91;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_ip == NULL);
        var_ip = tmp_assign_source_1;
    }
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_ip);
        tmp_compexpr_left_1 = var_ip;
        CHECK_OBJECT(par_host_ip);
        tmp_compexpr_right_1 = par_host_ip;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_583aab6745b3ad711ea865da375fec7d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_583aab6745b3ad711ea865da375fec7d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_583aab6745b3ad711ea865da375fec7d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_583aab6745b3ad711ea865da375fec7d, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_583aab6745b3ad711ea865da375fec7d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_583aab6745b3ad711ea865da375fec7d, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_583aab6745b3ad711ea865da375fec7d,
        type_description_1,
        par_ipname,
        par_host_ip,
        var_ip
    );


    // Release cached frame.
    if (frame_583aab6745b3ad711ea865da375fec7d == cache_frame_583aab6745b3ad711ea865da375fec7d) {
        Py_DECREF(frame_583aab6745b3ad711ea865da375fec7d);
    }
    cache_frame_583aab6745b3ad711ea865da375fec7d = NULL;

    assertFrameObject(frame_583aab6745b3ad711ea865da375fec7d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$packages$ssl_match_hostname$_implementation$$$function_3__ipaddress_match);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)var_ip);
    Py_DECREF(var_ip);
    var_ip = NULL;

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

    Py_XDECREF(var_ip);
    var_ip = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$packages$ssl_match_hostname$_implementation$$$function_3__ipaddress_match);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ipname);
    Py_DECREF(par_ipname);
    CHECK_OBJECT(par_host_ip);
    Py_DECREF(par_host_ip);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ipname);
    Py_DECREF(par_ipname);
    CHECK_OBJECT(par_host_ip);
    Py_DECREF(par_host_ip);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_urllib3$packages$ssl_match_hostname$_implementation$$$function_4_match_hostname(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cert = python_pars[0];
    PyObject *par_hostname = python_pars[1];
    PyObject *var_host_ip = NULL;
    PyObject *var_dnsnames = NULL;
    PyObject *var_san = NULL;
    PyObject *var_key = NULL;
    PyObject *var_value = NULL;
    PyObject *var_sub = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_ee82517392eda06ca3e89202cf0d62d1;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
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
    static struct Nuitka_FrameObject *cache_frame_ee82517392eda06ca3e89202cf0d62d1 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_ee82517392eda06ca3e89202cf0d62d1, codeobj_ee82517392eda06ca3e89202cf0d62d1, module_urllib3$packages$ssl_match_hostname$_implementation, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_ee82517392eda06ca3e89202cf0d62d1 = cache_frame_ee82517392eda06ca3e89202cf0d62d1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ee82517392eda06ca3e89202cf0d62d1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ee82517392eda06ca3e89202cf0d62d1) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(par_cert);
        tmp_operand_name_1 = par_cert;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooo";
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
            tmp_make_exception_arg_1 = const_str_digest_f66ea29fd347bd1e1c153f7fc85b4c4d;
            frame_ee82517392eda06ca3e89202cf0d62d1->m_frame.f_lineno = 104;
            tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
            assert(!(tmp_raise_type_1 == NULL));
            exception_type = tmp_raise_type_1;
            exception_lineno = 104;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_ipaddress);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ipaddress);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 31164 ], 31, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 109;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_ip_address);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain__to_unicode);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__to_unicode);
        }

        if (tmp_mvar_value_2 == NULL) {
            Py_DECREF(tmp_called_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 31195 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 109;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT(par_hostname);
        tmp_args_element_name_2 = par_hostname;
        frame_ee82517392eda06ca3e89202cf0d62d1->m_frame.f_lineno = 109;
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 109;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        frame_ee82517392eda06ca3e89202cf0d62d1->m_frame.f_lineno = 109;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        assert(var_host_ip == NULL);
        var_host_ip = tmp_assign_source_1;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_ee82517392eda06ca3e89202cf0d62d1, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_ee82517392eda06ca3e89202cf0d62d1, exception_keeper_lineno_1);
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


            exception_lineno = 110;
            type_description_1 = "oooooooo";
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
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = Py_None;
            assert(var_host_ip == NULL);
            Py_INCREF(tmp_assign_source_2);
            var_host_ip = tmp_assign_source_2;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_2 = PyExc_UnicodeError;
            tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_1 = "oooooooo";
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
                PyObject *tmp_assign_source_3;
                tmp_assign_source_3 = Py_None;
                assert(var_host_ip == NULL);
                Py_INCREF(tmp_assign_source_3);
                var_host_ip = tmp_assign_source_3;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
                tmp_compexpr_right_3 = PyExc_AttributeError;
                tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_3, tmp_compexpr_right_3);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 118;
                    type_description_1 = "oooooooo";
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
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_compexpr_left_4;
                    PyObject *tmp_compexpr_right_4;
                    PyObject *tmp_mvar_value_3;
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_ipaddress);

                    if (unlikely(tmp_mvar_value_3 == NULL)) {
                        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ipaddress);
                    }

                    if (tmp_mvar_value_3 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 31164 ], 31, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 120;
                        type_description_1 = "oooooooo";
                        goto try_except_handler_3;
                    }

                    tmp_compexpr_left_4 = tmp_mvar_value_3;
                    tmp_compexpr_right_4 = Py_None;
                    tmp_condition_result_5 = (tmp_compexpr_left_4 == tmp_compexpr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_5;
                    } else {
                        goto branch_no_5;
                    }
                    branch_yes_5:;
                    {
                        PyObject *tmp_assign_source_4;
                        tmp_assign_source_4 = Py_None;
                        assert(var_host_ip == NULL);
                        Py_INCREF(tmp_assign_source_4);
                        var_host_ip = tmp_assign_source_4;
                    }
                    goto branch_end_5;
                    branch_no_5:;
                    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    if (unlikely(tmp_result == false)) {
                        exception_lineno = 123;
                    }

                    if (exception_tb && exception_tb->tb_frame == &frame_ee82517392eda06ca3e89202cf0d62d1->m_frame) frame_ee82517392eda06ca3e89202cf0d62d1->m_frame.f_lineno = exception_tb->tb_lineno;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_3;
                    branch_end_5:;
                }
                goto branch_end_4;
                branch_no_4:;
                tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                if (unlikely(tmp_result == false)) {
                    exception_lineno = 107;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_ee82517392eda06ca3e89202cf0d62d1->m_frame) frame_ee82517392eda06ca3e89202cf0d62d1->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "oooooooo";
                goto try_except_handler_3;
                branch_end_4:;
            }
            branch_end_3:;
        }
        branch_end_2:;
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
    NUITKA_CANNOT_GET_HERE(urllib3$packages$ssl_match_hostname$_implementation$$$function_4_match_hostname);
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = PyList_New(0);
        assert(var_dnsnames == NULL);
        var_dnsnames = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_cert);
        tmp_called_instance_1 = par_cert;
        frame_ee82517392eda06ca3e89202cf0d62d1->m_frame.f_lineno = 125;
        tmp_assign_source_6 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_subjectAltName_tuple_empty_tuple, 0));

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_san == NULL);
        var_san = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_san);
        tmp_iter_arg_1 = var_san;
        tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 126;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 126;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 126;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
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

                    type_description_1 = "oooooooo";
                    exception_lineno = 126;
                    goto try_except_handler_6;
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

            type_description_1 = "oooooooo";
            exception_lineno = 126;
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

    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_12;
            Py_INCREF(var_key);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_13;
            Py_INCREF(var_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT(var_key);
        tmp_compexpr_left_5 = var_key;
        tmp_compexpr_right_5 = const_str_plain_DNS;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            nuitka_bool tmp_condition_result_7;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            int tmp_truth_name_1;
            if (var_host_ip == NULL) {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF(exception_type);
                exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "host_ip");
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 128;
                type_description_1 = "oooooooo";
                goto try_except_handler_4;
            }

            tmp_compexpr_left_6 = var_host_ip;
            tmp_compexpr_right_6 = Py_None;
            tmp_and_left_value_1 = (tmp_compexpr_left_6 == tmp_compexpr_right_6) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
            if (tmp_and_left_truth_1 == 1) {
                goto and_right_1;
            } else {
                goto and_left_1;
            }
            and_right_1:;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain__dnsname_match);

            if (unlikely(tmp_mvar_value_4 == NULL)) {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__dnsname_match);
            }

            if (tmp_mvar_value_4 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 31228 ], 36, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 128;
                type_description_1 = "oooooooo";
                goto try_except_handler_4;
            }

            tmp_called_name_3 = tmp_mvar_value_4;
            CHECK_OBJECT(var_value);
            tmp_args_element_name_3 = var_value;
            CHECK_OBJECT(par_hostname);
            tmp_args_element_name_4 = par_hostname;
            frame_ee82517392eda06ca3e89202cf0d62d1->m_frame.f_lineno = 128;
            {
                PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
            }

            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;
                type_description_1 = "oooooooo";
                goto try_except_handler_4;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
            if (tmp_truth_name_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_1);

                exception_lineno = 128;
                type_description_1 = "oooooooo";
                goto try_except_handler_4;
            }
            tmp_and_right_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF(tmp_call_result_1);
            tmp_condition_result_7 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_condition_result_7 = tmp_and_left_value_1;
            and_end_1:;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
            branch_yes_7:;
            tmp_return_value = Py_None;
            Py_INCREF(tmp_return_value);
            goto try_return_handler_4;
            branch_no_7:;
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_5;
            CHECK_OBJECT(var_dnsnames);
            tmp_called_instance_2 = var_dnsnames;
            CHECK_OBJECT(var_value);
            tmp_args_element_name_5 = var_value;
            frame_ee82517392eda06ca3e89202cf0d62d1->m_frame.f_lineno = 130;
            {
                PyObject *call_args[] = {tmp_args_element_name_5};
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_append, call_args);
            }

            if (tmp_call_result_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_1 = "oooooooo";
                goto try_except_handler_4;
            }
            Py_DECREF(tmp_call_result_2);
        }
        goto branch_end_6;
        branch_no_6:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            CHECK_OBJECT(var_key);
            tmp_compexpr_left_7 = var_key;
            tmp_compexpr_right_7 = const_str_digest_76d751ede7bd087f9346e5a615d3c397;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_7, tmp_compexpr_right_7);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_1 = "oooooooo";
                goto try_except_handler_4;
            }
            tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            branch_yes_8:;
            {
                nuitka_bool tmp_condition_result_9;
                int tmp_and_left_truth_2;
                nuitka_bool tmp_and_left_value_2;
                nuitka_bool tmp_and_right_value_2;
                PyObject *tmp_compexpr_left_8;
                PyObject *tmp_compexpr_right_8;
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_call_result_3;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_args_element_name_7;
                int tmp_truth_name_2;
                if (var_host_ip == NULL) {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF(exception_type);
                    exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "host_ip");
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 132;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }

                tmp_compexpr_left_8 = var_host_ip;
                tmp_compexpr_right_8 = Py_None;
                tmp_and_left_value_2 = (tmp_compexpr_left_8 != tmp_compexpr_right_8) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
                if (tmp_and_left_truth_2 == 1) {
                    goto and_right_2;
                } else {
                    goto and_left_2;
                }
                and_right_2:;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain__ipaddress_match);

                if (unlikely(tmp_mvar_value_5 == NULL)) {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__ipaddress_match);
                }

                if (tmp_mvar_value_5 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 31264 ], 38, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 132;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }

                tmp_called_name_4 = tmp_mvar_value_5;
                CHECK_OBJECT(var_value);
                tmp_args_element_name_6 = var_value;
                if (var_host_ip == NULL) {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF(exception_type);
                    exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "host_ip");
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 132;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }

                tmp_args_element_name_7 = var_host_ip;
                frame_ee82517392eda06ca3e89202cf0d62d1->m_frame.f_lineno = 132;
                {
                    PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7};
                    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, call_args);
                }

                if (tmp_call_result_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 132;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_3);
                if (tmp_truth_name_2 == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_call_result_3);

                    exception_lineno = 132;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                tmp_and_right_value_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF(tmp_call_result_3);
                tmp_condition_result_9 = tmp_and_right_value_2;
                goto and_end_2;
                and_left_2:;
                tmp_condition_result_9 = tmp_and_left_value_2;
                and_end_2:;
                if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_9;
                } else {
                    goto branch_no_9;
                }
                branch_yes_9:;
                tmp_return_value = Py_None;
                Py_INCREF(tmp_return_value);
                goto try_return_handler_4;
                branch_no_9:;
            }
            {
                PyObject *tmp_called_instance_3;
                PyObject *tmp_call_result_4;
                PyObject *tmp_args_element_name_8;
                CHECK_OBJECT(var_dnsnames);
                tmp_called_instance_3 = var_dnsnames;
                CHECK_OBJECT(var_value);
                tmp_args_element_name_8 = var_value;
                frame_ee82517392eda06ca3e89202cf0d62d1->m_frame.f_lineno = 134;
                {
                    PyObject *call_args[] = {tmp_args_element_name_8};
                    tmp_call_result_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_append, call_args);
                }

                if (tmp_call_result_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 134;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_4;
                }
                Py_DECREF(tmp_call_result_4);
            }
            branch_no_8:;
        }
        branch_end_6:;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 126;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_5;
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
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT(var_dnsnames);
        tmp_operand_name_2 = var_dnsnames;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_10 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
        branch_yes_10:;
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_instance_4;
            CHECK_OBJECT(par_cert);
            tmp_called_instance_4 = par_cert;
            frame_ee82517392eda06ca3e89202cf0d62d1->m_frame.f_lineno = 138;
            tmp_iter_arg_3 = CALL_METHOD_WITH_ARGS2(tmp_called_instance_4, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_subject_tuple_empty_tuple, 0));

            if (tmp_iter_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_14 = MAKE_ITERATOR(tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_for_loop_2__for_iterator == NULL);
            tmp_for_loop_2__for_iterator = tmp_assign_source_14;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(tmp_for_loop_2__for_iterator);
            tmp_next_source_2 = tmp_for_loop_2__for_iterator;
            tmp_assign_source_15 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_15 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooo";
                    exception_lineno = 138;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_for_loop_2__iter_value;
                tmp_for_loop_2__iter_value = tmp_assign_source_15;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT(tmp_for_loop_2__iter_value);
            tmp_assign_source_16 = tmp_for_loop_2__iter_value;
            {
                PyObject *old = var_sub;
                var_sub = tmp_assign_source_16;
                Py_INCREF(var_sub);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT(var_sub);
            tmp_iter_arg_4 = var_sub;
            tmp_assign_source_17 = MAKE_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_1 = "oooooooo";
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_for_loop_3__for_iterator;
                tmp_for_loop_3__for_iterator = tmp_assign_source_17;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT(tmp_for_loop_3__for_iterator);
            tmp_next_source_3 = tmp_for_loop_3__for_iterator;
            tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_18 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooo";
                    exception_lineno = 139;
                    goto try_except_handler_8;
                }
            }

            {
                PyObject *old = tmp_for_loop_3__iter_value;
                tmp_for_loop_3__iter_value = tmp_assign_source_18;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT(tmp_for_loop_3__iter_value);
            tmp_iter_arg_5 = tmp_for_loop_3__iter_value;
            tmp_assign_source_19 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
            if (tmp_assign_source_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_1 = "oooooooo";
                goto try_except_handler_9;
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


                type_description_1 = "oooooooo";
                exception_lineno = 139;
                goto try_except_handler_10;
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


                type_description_1 = "oooooooo";
                exception_lineno = 139;
                goto try_except_handler_10;
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

                        type_description_1 = "oooooooo";
                        exception_lineno = 139;
                        goto try_except_handler_10;
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

                type_description_1 = "oooooooo";
                exception_lineno = 139;
                goto try_except_handler_10;
            }
        }
        goto try_end_6;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_2__source_iter);
        Py_DECREF(tmp_tuple_unpack_2__source_iter);
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_9;
        // End of try:
        try_end_6:;
        goto try_end_7;
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

        Py_XDECREF(tmp_tuple_unpack_2__element_1);
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF(tmp_tuple_unpack_2__element_2);
        tmp_tuple_unpack_2__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        try_end_7:;
        CHECK_OBJECT((PyObject *)tmp_tuple_unpack_2__source_iter);
        Py_DECREF(tmp_tuple_unpack_2__source_iter);
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
            tmp_assign_source_22 = tmp_tuple_unpack_2__element_1;
            {
                PyObject *old = var_key;
                var_key = tmp_assign_source_22;
                Py_INCREF(var_key);
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
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            CHECK_OBJECT(var_key);
            tmp_compexpr_left_9 = var_key;
            tmp_compexpr_right_9 = const_str_plain_commonName;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_9, tmp_compexpr_right_9);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_1 = "oooooooo";
                goto try_except_handler_8;
            }
            tmp_condition_result_11 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto branch_yes_11;
            } else {
                goto branch_no_11;
            }
            branch_yes_11:;
            {
                nuitka_bool tmp_condition_result_12;
                PyObject *tmp_called_name_5;
                PyObject *tmp_mvar_value_6;
                PyObject *tmp_call_result_5;
                PyObject *tmp_args_element_name_9;
                PyObject *tmp_args_element_name_10;
                int tmp_truth_name_3;
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain__dnsname_match);

                if (unlikely(tmp_mvar_value_6 == NULL)) {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__dnsname_match);
                }

                if (tmp_mvar_value_6 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 31228 ], 36, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 143;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_8;
                }

                tmp_called_name_5 = tmp_mvar_value_6;
                CHECK_OBJECT(var_value);
                tmp_args_element_name_9 = var_value;
                CHECK_OBJECT(par_hostname);
                tmp_args_element_name_10 = par_hostname;
                frame_ee82517392eda06ca3e89202cf0d62d1->m_frame.f_lineno = 143;
                {
                    PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10};
                    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, call_args);
                }

                if (tmp_call_result_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 143;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_8;
                }
                tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_5);
                if (tmp_truth_name_3 == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_call_result_5);

                    exception_lineno = 143;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_8;
                }
                tmp_condition_result_12 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF(tmp_call_result_5);
                if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_12;
                } else {
                    goto branch_no_12;
                }
                branch_yes_12:;
                tmp_return_value = Py_None;
                Py_INCREF(tmp_return_value);
                goto try_return_handler_8;
                branch_no_12:;
            }
            {
                PyObject *tmp_called_instance_5;
                PyObject *tmp_call_result_6;
                PyObject *tmp_args_element_name_11;
                CHECK_OBJECT(var_dnsnames);
                tmp_called_instance_5 = var_dnsnames;
                CHECK_OBJECT(var_value);
                tmp_args_element_name_11 = var_value;
                frame_ee82517392eda06ca3e89202cf0d62d1->m_frame.f_lineno = 145;
                {
                    PyObject *call_args[] = {tmp_args_element_name_11};
                    tmp_call_result_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, const_str_plain_append, call_args);
                }

                if (tmp_call_result_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 145;
                    type_description_1 = "oooooooo";
                    goto try_except_handler_8;
                }
                Py_DECREF(tmp_call_result_6);
            }
            branch_no_11:;
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooo";
            goto try_except_handler_8;
        }
        goto loop_start_3;
        loop_end_3:;
        goto try_end_8;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT((PyObject *)tmp_for_loop_3__iter_value);
        Py_DECREF(tmp_for_loop_3__iter_value);
        tmp_for_loop_3__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_3__for_iterator);
        Py_DECREF(tmp_for_loop_3__for_iterator);
        tmp_for_loop_3__for_iterator = NULL;

        goto try_return_handler_7;
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

        Py_XDECREF(tmp_for_loop_3__iter_value);
        tmp_for_loop_3__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_3__for_iterator);
        Py_DECREF(tmp_for_loop_3__for_iterator);
        tmp_for_loop_3__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_7;
        // End of try:
        try_end_8:;
        Py_XDECREF(tmp_for_loop_3__iter_value);
        tmp_for_loop_3__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_3__for_iterator);
        Py_DECREF(tmp_for_loop_3__for_iterator);
        tmp_for_loop_3__for_iterator = NULL;

        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooo";
            goto try_except_handler_7;
        }
        goto loop_start_2;
        loop_end_2:;
        goto try_end_9;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT((PyObject *)tmp_for_loop_2__iter_value);
        Py_DECREF(tmp_for_loop_2__iter_value);
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_2__for_iterator);
        Py_DECREF(tmp_for_loop_2__for_iterator);
        tmp_for_loop_2__for_iterator = NULL;

        goto frame_return_exit_1;
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

        Py_XDECREF(tmp_for_loop_2__iter_value);
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_2__for_iterator);
        Py_DECREF(tmp_for_loop_2__for_iterator);
        tmp_for_loop_2__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto frame_exception_exit_1;
        // End of try:
        try_end_9:;
        Py_XDECREF(tmp_for_loop_2__iter_value);
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT((PyObject *)tmp_for_loop_2__for_iterator);
        Py_DECREF(tmp_for_loop_2__for_iterator);
        tmp_for_loop_2__for_iterator = NULL;

        branch_no_10:;
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_dnsnames);
        tmp_len_arg_1 = var_dnsnames;
        tmp_compexpr_left_10 = BUILTIN_LEN(tmp_len_arg_1);
        assert(!(tmp_compexpr_left_10 == NULL));
        tmp_compexpr_right_10 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT(tmp_compexpr_left_10, tmp_compexpr_right_10);
        Py_DECREF(tmp_compexpr_left_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_13 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
        branch_yes_13:;
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_called_name_6;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_13;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_element_name_14;
            PyObject *tmp_args_element_name_15;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_CertificateError);

            if (unlikely(tmp_mvar_value_7 == NULL)) {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CertificateError);
            }

            if (tmp_mvar_value_7 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 28172 ], 38, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 147;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_6 = tmp_mvar_value_7;
            tmp_left_name_1 = const_str_digest_3b35d51050a71678e6a91f8af50bcd6c;
            CHECK_OBJECT(par_hostname);
            tmp_tuple_element_1 = par_hostname;
            tmp_right_name_1 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
            tmp_source_name_2 = const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_join);
            assert(!(tmp_called_name_7 == NULL));
            tmp_called_name_8 = (PyObject *)&PyMap_Type;
            tmp_args_element_name_14 = LOOKUP_BUILTIN(const_str_plain_repr);
            assert(tmp_args_element_name_14 != NULL);
            CHECK_OBJECT(var_dnsnames);
            tmp_args_element_name_15 = var_dnsnames;
            frame_ee82517392eda06ca3e89202cf0d62d1->m_frame.f_lineno = 149;
            {
                PyObject *call_args[] = {tmp_args_element_name_14, tmp_args_element_name_15};
                tmp_args_element_name_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_8, call_args);
            }

            if (tmp_args_element_name_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_right_name_1);
                Py_DECREF(tmp_called_name_7);

                exception_lineno = 149;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_ee82517392eda06ca3e89202cf0d62d1->m_frame.f_lineno = 149;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_13);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_args_element_name_13);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_right_name_1);

                exception_lineno = 149;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_1);
            tmp_args_element_name_12 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
            Py_DECREF(tmp_right_name_1);
            if (tmp_args_element_name_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_ee82517392eda06ca3e89202cf0d62d1->m_frame.f_lineno = 147;
            tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_12);
            Py_DECREF(tmp_args_element_name_12);
            if (tmp_raise_type_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_2;
            exception_lineno = 147;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto branch_end_13;
        branch_no_13:;
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_compexpr_left_11;
            PyObject *tmp_compexpr_right_11;
            PyObject *tmp_len_arg_2;
            CHECK_OBJECT(var_dnsnames);
            tmp_len_arg_2 = var_dnsnames;
            tmp_compexpr_left_11 = BUILTIN_LEN(tmp_len_arg_2);
            assert(!(tmp_compexpr_left_11 == NULL));
            tmp_compexpr_right_11 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_11, tmp_compexpr_right_11);
            Py_DECREF(tmp_compexpr_left_11);
            assert(!(tmp_res == -1));
            tmp_condition_result_14 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto branch_yes_14;
            } else {
                goto branch_no_14;
            }
            branch_yes_14:;
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_called_name_9;
                PyObject *tmp_mvar_value_8;
                PyObject *tmp_args_element_name_16;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_CertificateError);

                if (unlikely(tmp_mvar_value_8 == NULL)) {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CertificateError);
                }

                if (tmp_mvar_value_8 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 28172 ], 38, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 151;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_9 = tmp_mvar_value_8;
                tmp_left_name_2 = const_str_digest_2827a02148585180db385ecab4334673;
                CHECK_OBJECT(par_hostname);
                tmp_tuple_element_2 = par_hostname;
                tmp_right_name_2 = PyTuple_New(2);
                Py_INCREF(tmp_tuple_element_2);
                PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_2);
                CHECK_OBJECT(var_dnsnames);
                tmp_subscribed_name_1 = var_dnsnames;
                tmp_subscript_name_1 = const_int_0;
                tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_right_name_2);

                    exception_lineno = 153;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_2);
                tmp_args_element_name_16 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
                Py_DECREF(tmp_right_name_2);
                if (tmp_args_element_name_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 151;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                frame_ee82517392eda06ca3e89202cf0d62d1->m_frame.f_lineno = 151;
                tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_16);
                Py_DECREF(tmp_args_element_name_16);
                if (tmp_raise_type_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 151;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_3;
                exception_lineno = 151;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            goto branch_end_14;
            branch_no_14:;
            {
                PyObject *tmp_raise_type_4;
                PyObject *tmp_called_name_10;
                PyObject *tmp_mvar_value_9;
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_CertificateError);

                if (unlikely(tmp_mvar_value_9 == NULL)) {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CertificateError);
                }

                if (tmp_mvar_value_9 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 28172 ], 38, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 155;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_10 = tmp_mvar_value_9;
                frame_ee82517392eda06ca3e89202cf0d62d1->m_frame.f_lineno = 155;
                tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1(tmp_called_name_10, &PyTuple_GET_ITEM(const_tuple_str_digest_b8a3e24bd480f9d749e7f38794d9a804_tuple, 0));

                if (tmp_raise_type_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 155;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_4;
                exception_lineno = 155;
                RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            branch_end_14:;
        }
        branch_end_13:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee82517392eda06ca3e89202cf0d62d1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee82517392eda06ca3e89202cf0d62d1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee82517392eda06ca3e89202cf0d62d1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ee82517392eda06ca3e89202cf0d62d1, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_ee82517392eda06ca3e89202cf0d62d1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ee82517392eda06ca3e89202cf0d62d1, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ee82517392eda06ca3e89202cf0d62d1,
        type_description_1,
        par_cert,
        par_hostname,
        var_host_ip,
        var_dnsnames,
        var_san,
        var_key,
        var_value,
        var_sub
    );


    // Release cached frame.
    if (frame_ee82517392eda06ca3e89202cf0d62d1 == cache_frame_ee82517392eda06ca3e89202cf0d62d1) {
        Py_DECREF(frame_ee82517392eda06ca3e89202cf0d62d1);
    }
    cache_frame_ee82517392eda06ca3e89202cf0d62d1 = NULL;

    assertFrameObject(frame_ee82517392eda06ca3e89202cf0d62d1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(urllib3$packages$ssl_match_hostname$_implementation$$$function_4_match_hostname);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_host_ip);
    var_host_ip = NULL;

    CHECK_OBJECT((PyObject *)var_dnsnames);
    Py_DECREF(var_dnsnames);
    var_dnsnames = NULL;

    CHECK_OBJECT((PyObject *)var_san);
    Py_DECREF(var_san);
    var_san = NULL;

    CHECK_OBJECT((PyObject *)var_key);
    Py_DECREF(var_key);
    var_key = NULL;

    CHECK_OBJECT((PyObject *)var_value);
    Py_DECREF(var_value);
    var_value = NULL;

    Py_XDECREF(var_sub);
    var_sub = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_host_ip);
    var_host_ip = NULL;

    Py_XDECREF(var_dnsnames);
    var_dnsnames = NULL;

    Py_XDECREF(var_san);
    var_san = NULL;

    Py_XDECREF(var_key);
    var_key = NULL;

    Py_XDECREF(var_value);
    var_value = NULL;

    Py_XDECREF(var_sub);
    var_sub = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(urllib3$packages$ssl_match_hostname$_implementation$$$function_4_match_hostname);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_hostname);
    Py_DECREF(par_hostname);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cert);
    Py_DECREF(par_cert);
    CHECK_OBJECT(par_hostname);
    Py_DECREF(par_hostname);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$ssl_match_hostname$_implementation$$$function_1__dnsname_match(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$ssl_match_hostname$_implementation$$$function_1__dnsname_match,
        const_str_plain__dnsname_match,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a1767b45fab354090524cfa5ea6d966e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$ssl_match_hostname$_implementation,
        const_str_digest_67325c16e6049950668b4d54af8157ef,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$ssl_match_hostname$_implementation$$$function_2__to_unicode() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$ssl_match_hostname$_implementation$$$function_2__to_unicode,
        const_str_plain__to_unicode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0aa7b441b090b4f2855fac5867abf6fe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$ssl_match_hostname$_implementation,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$ssl_match_hostname$_implementation$$$function_3__ipaddress_match() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$ssl_match_hostname$_implementation$$$function_3__ipaddress_match,
        const_str_plain__ipaddress_match,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_583aab6745b3ad711ea865da375fec7d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$ssl_match_hostname$_implementation,
        const_str_digest_cee8a0917b60d1bd22f94d241f22b50b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$packages$ssl_match_hostname$_implementation$$$function_4_match_hostname() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$packages$ssl_match_hostname$_implementation$$$function_4_match_hostname,
        const_str_plain_match_hostname,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ee82517392eda06ca3e89202cf0d62d1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$packages$ssl_match_hostname$_implementation,
        const_str_digest_cb4b3ec76f0e04caf09490892f20768f,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$packages$ssl_match_hostname$_implementation =
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

function_impl_code functable_urllib3$packages$ssl_match_hostname$_implementation[] = {
    impl_urllib3$packages$ssl_match_hostname$_implementation$$$function_1__dnsname_match,
    impl_urllib3$packages$ssl_match_hostname$_implementation$$$function_2__to_unicode,
    impl_urllib3$packages$ssl_match_hostname$_implementation$$$function_3__ipaddress_match,
    impl_urllib3$packages$ssl_match_hostname$_implementation$$$function_4_match_hostname,
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

    function_impl_code *current = functable_urllib3$packages$ssl_match_hostname$_implementation;
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

    if (offset > sizeof(functable_urllib3$packages$ssl_match_hostname$_implementation) || offset < 0) {
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
        functable_urllib3$packages$ssl_match_hostname$_implementation[offset],
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
        module_urllib3$packages$ssl_match_hostname$_implementation,
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
PyObject *modulecode_urllib3$packages$ssl_match_hostname$_implementation(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_urllib3$packages$ssl_match_hostname$_implementation;
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
    PRINT_STRING("urllib3.packages.ssl_match_hostname._implementation: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("urllib3.packages.ssl_match_hostname._implementation: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("urllib3.packages.ssl_match_hostname._implementation: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initurllib3$packages$ssl_match_hostname$_implementation\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$packages$ssl_match_hostname$_implementation = Py_InitModule4(
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
    mdef_urllib3$packages$ssl_match_hostname$_implementation.m_name = module_full_name;
    module_urllib3$packages$ssl_match_hostname$_implementation = PyModule_Create(&mdef_urllib3$packages$ssl_match_hostname$_implementation);
#endif

    moduledict_urllib3$packages$ssl_match_hostname$_implementation = MODULE_DICT(module_urllib3$packages$ssl_match_hostname$_implementation);

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
        moduledict_urllib3$packages$ssl_match_hostname$_implementation,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_urllib3$packages$ssl_match_hostname$_implementation,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_urllib3$packages$ssl_match_hostname$_implementation,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$packages$ssl_match_hostname$_implementation,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$packages$ssl_match_hostname$_implementation,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_urllib3$packages$ssl_match_hostname$_implementation);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_urllib3$packages$ssl_match_hostname$_implementation);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_c8d5deda4aff16e018f0305ec371af24;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_urllib3$packages$ssl_match_hostname$_implementation_21 = NULL;
    PyObject *tmp_dictset_value;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_b8ae32441dc7540b307e3e1dd1d9ff26;
        UPDATE_STRING_DICT0(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_42d53db88c654c04e177c9dae0a4a313;
        UPDATE_STRING_DICT0(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_c8d5deda4aff16e018f0305ec371af24 = MAKE_MODULE_FRAME(codeobj_c8d5deda4aff16e018f0305ec371af24, module_urllib3$packages$ssl_match_hostname$_implementation);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_c8d5deda4aff16e018f0305ec371af24);
    assert(Py_REFCNT(frame_c8d5deda4aff16e018f0305ec371af24) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_42d53db88c654c04e177c9dae0a4a313;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_re;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$packages$ssl_match_hostname$_implementation;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_c8d5deda4aff16e018f0305ec371af24->m_frame.f_lineno = 6;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_sys;
        tmp_globals_name_2 = (PyObject *)moduledict_urllib3$packages$ssl_match_hostname$_implementation;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_c8d5deda4aff16e018f0305ec371af24->m_frame.f_lineno = 7;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_ipaddress;
        tmp_globals_name_3 = (PyObject *)moduledict_urllib3$packages$ssl_match_hostname$_implementation;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_c8d5deda4aff16e018f0305ec371af24->m_frame.f_lineno = 14;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_ipaddress, tmp_assign_source_6);
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_c8d5deda4aff16e018f0305ec371af24, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_c8d5deda4aff16e018f0305ec371af24, exception_keeper_lineno_1);
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
        tmp_compexpr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

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
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = Py_None;
            UPDATE_STRING_DICT0(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_ipaddress, tmp_assign_source_7);
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 13;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_c8d5deda4aff16e018f0305ec371af24->m_frame) frame_c8d5deda4aff16e018f0305ec371af24->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_2;
        branch_end_1:;
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
    NUITKA_CANNOT_GET_HERE(urllib3$packages$ssl_match_hostname$_implementation);
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_str_digest_46edd689caa2c90961077381033a48f1;
        UPDATE_STRING_DICT0(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_8);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_ValueError_tuple;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_9 = impl___internal__$$$function_3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
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


            exception_lineno = 21;

            goto try_except_handler_3;
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


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
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


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_11 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_11;
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


            exception_lineno = 21;

            goto try_except_handler_3;
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


            exception_lineno = 21;

            goto try_except_handler_3;
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
            PyObject *tmp_assign_source_12;
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


                exception_lineno = 21;

                goto try_except_handler_3;
            }
            tmp_tuple_element_1 = const_str_plain_CertificateError;
            tmp_args_name_1 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_1 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_c8d5deda4aff16e018f0305ec371af24->m_frame.f_lineno = 21;
            tmp_assign_source_12 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_name_1);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto try_except_handler_3;
            }
            assert(tmp_class_creation_1__prepared == NULL);
            tmp_class_creation_1__prepared = tmp_assign_source_12;
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


                exception_lineno = 21;

                goto try_except_handler_3;
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


                    exception_lineno = 21;

                    goto try_except_handler_3;
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

                    exception_lineno = 21;

                    goto try_except_handler_3;
                }
                PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_2);
                tmp_raise_value_1 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
                Py_DECREF(tmp_right_name_1);
                if (tmp_raise_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 21;

                    goto try_except_handler_3;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF(tmp_raise_type_1);
                exception_value = tmp_raise_value_1;
                exception_lineno = 21;
                RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

                goto try_except_handler_3;
            }
            branch_no_4:;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = PyDict_New();
            assert(tmp_class_creation_1__prepared == NULL);
            tmp_class_creation_1__prepared = tmp_assign_source_13;
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_assign_source_14;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_urllib3$packages$ssl_match_hostname$_implementation_21 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9d2ee80bc8b6b38510f1287d710300dd;
        tmp_res = PyObject_SetItem(locals_urllib3$packages$ssl_match_hostname$_implementation_21, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_5;
        }
        tmp_dictset_value = const_str_plain_CertificateError;
        tmp_res = PyObject_SetItem(locals_urllib3$packages$ssl_match_hostname$_implementation_21, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_5;
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_2 = tmp_class_creation_1__bases;
            tmp_compexpr_right_2 = const_tuple_type_ValueError_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto try_except_handler_5;
            }
            tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
            branch_yes_5:;
            tmp_dictset_value = const_tuple_type_ValueError_tuple;
            tmp_res = PyObject_SetItem(locals_urllib3$packages$ssl_match_hostname$_implementation_21, const_str_plain___orig_bases__, tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto try_except_handler_5;
            }
            branch_no_5:;
        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = const_str_plain_CertificateError;
            tmp_args_name_2 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_urllib3$packages$ssl_match_hostname$_implementation_21;
            Py_INCREF(tmp_tuple_element_3);
            PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_c8d5deda4aff16e018f0305ec371af24->m_frame.f_lineno = 21;
            tmp_assign_source_15 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_15;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_14 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_14);
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(urllib3$packages$ssl_match_hostname$_implementation);
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_urllib3$packages$ssl_match_hostname$_implementation_21);
        locals_urllib3$packages$ssl_match_hostname$_implementation_21 = NULL;
        goto try_return_handler_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_urllib3$packages$ssl_match_hostname$_implementation_21);
        locals_urllib3$packages$ssl_match_hostname$_implementation_21 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(urllib3$packages$ssl_match_hostname$_implementation);
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT((PyObject *)outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE(urllib3$packages$ssl_match_hostname$_implementation);
        return NULL;
        outline_exception_1:;
        exception_lineno = 21;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_CertificateError, tmp_assign_source_14);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c8d5deda4aff16e018f0305ec371af24);
#endif
    popFrameStack();

    assertFrameObject(frame_c8d5deda4aff16e018f0305ec371af24);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c8d5deda4aff16e018f0305ec371af24);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_c8d5deda4aff16e018f0305ec371af24, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_c8d5deda4aff16e018f0305ec371af24->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c8d5deda4aff16e018f0305ec371af24, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = const_tuple_int_pos_1_tuple;
        Py_INCREF(tmp_defaults_1);
        tmp_assign_source_16 = MAKE_FUNCTION_urllib3$packages$ssl_match_hostname$_implementation$$$function_1__dnsname_match(tmp_defaults_1);



        UPDATE_STRING_DICT1(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain__dnsname_match, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_urllib3$packages$ssl_match_hostname$_implementation$$$function_2__to_unicode();



        UPDATE_STRING_DICT1(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain__to_unicode, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_urllib3$packages$ssl_match_hostname$_implementation$$$function_3__ipaddress_match();



        UPDATE_STRING_DICT1(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain__ipaddress_match, tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_urllib3$packages$ssl_match_hostname$_implementation$$$function_4_match_hostname();



        UPDATE_STRING_DICT1(moduledict_urllib3$packages$ssl_match_hostname$_implementation, (Nuitka_StringObject *)const_str_plain_match_hostname, tmp_assign_source_19);
    }

    return module_urllib3$packages$ssl_match_hostname$_implementation;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
