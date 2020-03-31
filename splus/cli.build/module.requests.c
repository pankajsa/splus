/* Generated code for Python module 'requests'
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

/* The "_module_requests" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests;
PyDictObject *moduledict_requests;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_status_codes;
extern PyObject *const_str_plain_warn;
static PyObject *const_tuple_str_plain_pyopenssl_tuple;
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_str_plain_packages_tuple;
extern PyObject *const_str_plain_request;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_minor;
extern PyObject *const_dict_9d1be102e274ebd5d21e13e40f132db0;
extern PyObject *const_str_plain_0;
extern PyObject *const_str_plain_Request;
extern PyObject *const_str_plain_URLRequired;
static PyObject *const_list_str_digest_ace4b97f3ffb7878904da8b3e7ec3e44_list;
extern PyObject *const_str_plain_ConnectTimeout;
extern PyObject *const_str_plain_codes;
extern PyObject *const_str_plain_default;
extern PyObject *const_str_plain_NullHandler;
static PyObject *const_str_digest_f1c6599a63ba21183a1dd5287c35afe3;
extern PyObject *const_str_plain_ignore;
extern PyObject *const_str_plain___license__;
extern PyObject *const_str_plain_None;
extern PyObject *const_tuple_type_AssertionError_type_ValueError_tuple;
static PyObject *const_tuple_str_plain_utils_tuple;
extern PyObject *const_int_pos_25;
extern PyObject *const_str_plain___url__;
static PyObject *const_str_digest_b3344e32fb4adf37492e7a946859e9d5;
extern PyObject *const_str_plain_ReadTimeout;
static PyObject *const_str_plain_dev;
extern PyObject *const_str_digest_c8562bbff9d721153deb2fdd066393d0;
extern PyObject *const_str_plain_utils;
static PyObject *const_tuple_str_plain_0_tuple;
extern PyObject *const_str_plain_sessions;
static PyObject *const_tuple_str_plain_session_str_plain_Session_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_models;
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain___copyright__;
static PyObject *const_str_plain_urllib3_version;
static PyObject *const_str_plain_cryptography_version;
extern PyObject *const_str_plain_options;
static PyObject *const_str_digest_d0e74712839492f5fe2c99311f5308c8;
static PyObject *const_tuple_e24257d774be1088cd8bd06848d8a7f0_tuple;
extern PyObject *const_str_plain_put;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_cryptography;
static PyObject *const_str_digest_99420c5eadb8ce955ead6ed6b7c8b99c;
extern PyObject *const_str_plain_addHandler;
static PyObject *const_list_int_pos_1_int_pos_3_int_pos_4_list;
extern PyObject *const_str_plain_packages;
static PyObject *const_tuple_str_plain_requests_tuple;
extern PyObject *const_tuple_str_plain_DependencyWarning_tuple;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_Session;
static PyObject *const_str_plain__check_cryptography;
extern PyObject *const_str_plain_simplefilter;
extern PyObject *const_str_plain_head;
static PyObject *const_str_digest_5504b34a801f3931b7cf790b7dfc5ec7;
extern PyObject *const_str_plain_DependencyWarning;
extern PyObject *const_tuple_str_dot_tuple;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_append;
static PyObject *const_list_str_plain_dev_list;
extern PyObject *const_tuple_str_plain___version___tuple;
static PyObject *const_tuple_36f9cd9e36d22e1d8900abd71f00b8f9_tuple;
static PyObject *const_tuple_8dd7c37fa0be4bfc5ccc87677a1cb02c_tuple;
static PyObject *const_str_plain_major;
extern PyObject *const_str_plain_session;
extern PyObject *const_str_plain___description__;
static PyObject *const_str_plain_check_compatibility;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_plain_Response;
extern PyObject *const_tuple_str_plain_codes_tuple;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_map;
extern PyObject *const_str_plain_urllib3;
extern PyObject *const_str_plain___version__;
extern PyObject *const_int_0;
extern PyObject *const_slice_none_int_pos_3_none;
static PyObject *const_int_pos_21;
extern PyObject *const_str_plain___author__;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain___author_email__;
extern PyObject *const_str_plain_Timeout;
extern PyObject *const_str_plain_patch;
extern PyObject *const_str_plain_warning;
extern PyObject *const_str_plain___title__;
extern PyObject *const_str_plain_HTTPError;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_chardet;
extern PyObject *const_str_plain_PreparedRequest;
extern PyObject *const_str_plain_ConnectionError;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_tuple_str_plain_NullHandler_tuple;
extern PyObject *const_str_plain_FileModeWarning;
static PyObject *const_str_plain_api;
static PyObject *const_str_digest_ace4b97f3ffb7878904da8b3e7ec3e44;
extern PyObject *const_str_plain_requests;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___build__;
extern PyObject *const_str_plain___cake__;
extern PyObject *const_str_plain_post;
static PyObject *const_tuple_str_plain_cryptography_version_str_plain_warning_tuple;
static PyObject *const_tuple_str_plain___copyright___str_plain___cake___tuple;
extern PyObject *const_str_plain_RequestsDependencyWarning;
extern PyObject *const_int_pos_3;
static PyObject *const_str_plain_pyopenssl;
static PyObject *const_tuple_str_plain_RequestsDependencyWarning_tuple;
static PyObject *const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple;
static PyObject *const_tuple_3288465531bc9a9ebad2b7fc5374f01f_tuple;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_inject_into_urllib3;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_delete;
static PyObject *const_tuple_49c948476c0471fc655e41f23cf764af_tuple;
extern PyObject *const_str_plain_RequestException;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_empty;
static PyObject *const_str_plain_chardet_version;
extern PyObject *const_str_plain_TooManyRedirects;
static PyObject *const_str_digest_e03852224018ed217937e454110a99e9;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_tuple_str_plain_pyopenssl_tuple = PyTuple_New(1);
    const_str_plain_pyopenssl = UNSTREAM_STRING_ASCII(&constant_bin[ 627536 ], 9, 1);
    PyTuple_SET_ITEM(const_tuple_str_plain_pyopenssl_tuple, 0, const_str_plain_pyopenssl); Py_INCREF(const_str_plain_pyopenssl);
    const_tuple_str_plain_packages_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_packages_tuple, 0, const_str_plain_packages); Py_INCREF(const_str_plain_packages);
    const_str_plain_minor = UNSTREAM_STRING_ASCII(&constant_bin[ 34855 ], 5, 1);
    const_list_str_digest_ace4b97f3ffb7878904da8b3e7ec3e44_list = PyList_New(1);
    const_str_digest_ace4b97f3ffb7878904da8b3e7ec3e44 = UNSTREAM_STRING_ASCII(&constant_bin[ 627545 ], 47, 0);
    PyList_SET_ITEM(const_list_str_digest_ace4b97f3ffb7878904da8b3e7ec3e44_list, 0, const_str_digest_ace4b97f3ffb7878904da8b3e7ec3e44); Py_INCREF(const_str_digest_ace4b97f3ffb7878904da8b3e7ec3e44);
    const_str_digest_f1c6599a63ba21183a1dd5287c35afe3 = UNSTREAM_STRING_ASCII(&constant_bin[ 627592 ], 52, 0);
    const_tuple_str_plain_utils_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_utils_tuple, 0, const_str_plain_utils); Py_INCREF(const_str_plain_utils);
    const_str_digest_b3344e32fb4adf37492e7a946859e9d5 = UNSTREAM_STRING_ASCII(&constant_bin[ 627644 ], 63, 0);
    const_str_plain_dev = UNSTREAM_STRING_ASCII(&constant_bin[ 33794 ], 3, 1);
    const_tuple_str_plain_0_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_0_tuple, 0, const_str_plain_0); Py_INCREF(const_str_plain_0);
    const_tuple_str_plain_session_str_plain_Session_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_session_str_plain_Session_tuple, 0, const_str_plain_session); Py_INCREF(const_str_plain_session);
    PyTuple_SET_ITEM(const_tuple_str_plain_session_str_plain_Session_tuple, 1, const_str_plain_Session); Py_INCREF(const_str_plain_Session);
    const_str_plain_urllib3_version = UNSTREAM_STRING_ASCII(&constant_bin[ 627707 ], 15, 1);
    const_str_plain_cryptography_version = UNSTREAM_STRING_ASCII(&constant_bin[ 627722 ], 20, 1);
    const_str_digest_d0e74712839492f5fe2c99311f5308c8 = UNSTREAM_STRING_ASCII(&constant_bin[ 627742 ], 17, 0);
    const_tuple_e24257d774be1088cd8bd06848d8a7f0_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_e24257d774be1088cd8bd06848d8a7f0_tuple, 0, const_str_plain___title__); Py_INCREF(const_str_plain___title__);
    PyTuple_SET_ITEM(const_tuple_e24257d774be1088cd8bd06848d8a7f0_tuple, 1, const_str_plain___description__); Py_INCREF(const_str_plain___description__);
    PyTuple_SET_ITEM(const_tuple_e24257d774be1088cd8bd06848d8a7f0_tuple, 2, const_str_plain___url__); Py_INCREF(const_str_plain___url__);
    PyTuple_SET_ITEM(const_tuple_e24257d774be1088cd8bd06848d8a7f0_tuple, 3, const_str_plain___version__); Py_INCREF(const_str_plain___version__);
    const_str_digest_99420c5eadb8ce955ead6ed6b7c8b99c = UNSTREAM_STRING_ASCII(&constant_bin[ 627759 ], 59, 0);
    const_list_int_pos_1_int_pos_3_int_pos_4_list = PyList_New(3);
    PyList_SET_ITEM(const_list_int_pos_1_int_pos_3_int_pos_4_list, 0, const_int_pos_1); Py_INCREF(const_int_pos_1);
    PyList_SET_ITEM(const_list_int_pos_1_int_pos_3_int_pos_4_list, 1, const_int_pos_3); Py_INCREF(const_int_pos_3);
    PyList_SET_ITEM(const_list_int_pos_1_int_pos_3_int_pos_4_list, 2, const_int_pos_4); Py_INCREF(const_int_pos_4);
    const_tuple_str_plain_requests_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_requests_tuple, 0, const_str_plain_requests); Py_INCREF(const_str_plain_requests);
    const_str_plain__check_cryptography = UNSTREAM_STRING_ASCII(&constant_bin[ 19278 ], 19, 1);
    const_str_digest_5504b34a801f3931b7cf790b7dfc5ec7 = UNSTREAM_STRING_ASCII(&constant_bin[ 627818 ], 756, 0);
    const_list_str_plain_dev_list = PyList_New(1);
    PyList_SET_ITEM(const_list_str_plain_dev_list, 0, const_str_plain_dev); Py_INCREF(const_str_plain_dev);
    const_tuple_36f9cd9e36d22e1d8900abd71f00b8f9_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_36f9cd9e36d22e1d8900abd71f00b8f9_tuple, 0, const_str_plain_Request); Py_INCREF(const_str_plain_Request);
    PyTuple_SET_ITEM(const_tuple_36f9cd9e36d22e1d8900abd71f00b8f9_tuple, 1, const_str_plain_Response); Py_INCREF(const_str_plain_Response);
    PyTuple_SET_ITEM(const_tuple_36f9cd9e36d22e1d8900abd71f00b8f9_tuple, 2, const_str_plain_PreparedRequest); Py_INCREF(const_str_plain_PreparedRequest);
    const_tuple_8dd7c37fa0be4bfc5ccc87677a1cb02c_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_8dd7c37fa0be4bfc5ccc87677a1cb02c_tuple, 0, const_str_plain_urllib3_version); Py_INCREF(const_str_plain_urllib3_version);
    const_str_plain_chardet_version = UNSTREAM_STRING_ASCII(&constant_bin[ 628574 ], 15, 1);
    PyTuple_SET_ITEM(const_tuple_8dd7c37fa0be4bfc5ccc87677a1cb02c_tuple, 1, const_str_plain_chardet_version); Py_INCREF(const_str_plain_chardet_version);
    const_str_plain_major = UNSTREAM_STRING_ASCII(&constant_bin[ 34847 ], 5, 1);
    PyTuple_SET_ITEM(const_tuple_8dd7c37fa0be4bfc5ccc87677a1cb02c_tuple, 2, const_str_plain_major); Py_INCREF(const_str_plain_major);
    PyTuple_SET_ITEM(const_tuple_8dd7c37fa0be4bfc5ccc87677a1cb02c_tuple, 3, const_str_plain_minor); Py_INCREF(const_str_plain_minor);
    PyTuple_SET_ITEM(const_tuple_8dd7c37fa0be4bfc5ccc87677a1cb02c_tuple, 4, const_str_plain_patch); Py_INCREF(const_str_plain_patch);
    const_str_plain_check_compatibility = UNSTREAM_STRING_ASCII(&constant_bin[ 628589 ], 19, 1);
    const_int_pos_21 = PyLong_FromUnsignedLong(21ul);
    const_str_plain_api = UNSTREAM_STRING_ASCII(&constant_bin[ 9369 ], 3, 1);
    const_tuple_str_plain_cryptography_version_str_plain_warning_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_cryptography_version_str_plain_warning_tuple, 0, const_str_plain_cryptography_version); Py_INCREF(const_str_plain_cryptography_version);
    PyTuple_SET_ITEM(const_tuple_str_plain_cryptography_version_str_plain_warning_tuple, 1, const_str_plain_warning); Py_INCREF(const_str_plain_warning);
    const_tuple_str_plain___copyright___str_plain___cake___tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain___copyright___str_plain___cake___tuple, 0, const_str_plain___copyright__); Py_INCREF(const_str_plain___copyright__);
    PyTuple_SET_ITEM(const_tuple_str_plain___copyright___str_plain___cake___tuple, 1, const_str_plain___cake__); Py_INCREF(const_str_plain___cake__);
    const_tuple_str_plain_RequestsDependencyWarning_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_RequestsDependencyWarning_tuple, 0, const_str_plain_RequestsDependencyWarning); Py_INCREF(const_str_plain_RequestsDependencyWarning);
    const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple = PyTuple_New(8);
    PyTuple_SET_ITEM(const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple, 0, const_str_plain_request); Py_INCREF(const_str_plain_request);
    PyTuple_SET_ITEM(const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple, 1, const_str_plain_get); Py_INCREF(const_str_plain_get);
    PyTuple_SET_ITEM(const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple, 2, const_str_plain_head); Py_INCREF(const_str_plain_head);
    PyTuple_SET_ITEM(const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple, 3, const_str_plain_post); Py_INCREF(const_str_plain_post);
    PyTuple_SET_ITEM(const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple, 4, const_str_plain_patch); Py_INCREF(const_str_plain_patch);
    PyTuple_SET_ITEM(const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple, 5, const_str_plain_put); Py_INCREF(const_str_plain_put);
    PyTuple_SET_ITEM(const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple, 6, const_str_plain_delete); Py_INCREF(const_str_plain_delete);
    PyTuple_SET_ITEM(const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple, 7, const_str_plain_options); Py_INCREF(const_str_plain_options);
    const_tuple_3288465531bc9a9ebad2b7fc5374f01f_tuple = PyTuple_New(9);
    PyTuple_SET_ITEM(const_tuple_3288465531bc9a9ebad2b7fc5374f01f_tuple, 0, const_str_plain_RequestException); Py_INCREF(const_str_plain_RequestException);
    PyTuple_SET_ITEM(const_tuple_3288465531bc9a9ebad2b7fc5374f01f_tuple, 1, const_str_plain_Timeout); Py_INCREF(const_str_plain_Timeout);
    PyTuple_SET_ITEM(const_tuple_3288465531bc9a9ebad2b7fc5374f01f_tuple, 2, const_str_plain_URLRequired); Py_INCREF(const_str_plain_URLRequired);
    PyTuple_SET_ITEM(const_tuple_3288465531bc9a9ebad2b7fc5374f01f_tuple, 3, const_str_plain_TooManyRedirects); Py_INCREF(const_str_plain_TooManyRedirects);
    PyTuple_SET_ITEM(const_tuple_3288465531bc9a9ebad2b7fc5374f01f_tuple, 4, const_str_plain_HTTPError); Py_INCREF(const_str_plain_HTTPError);
    PyTuple_SET_ITEM(const_tuple_3288465531bc9a9ebad2b7fc5374f01f_tuple, 5, const_str_plain_ConnectionError); Py_INCREF(const_str_plain_ConnectionError);
    PyTuple_SET_ITEM(const_tuple_3288465531bc9a9ebad2b7fc5374f01f_tuple, 6, const_str_plain_FileModeWarning); Py_INCREF(const_str_plain_FileModeWarning);
    PyTuple_SET_ITEM(const_tuple_3288465531bc9a9ebad2b7fc5374f01f_tuple, 7, const_str_plain_ConnectTimeout); Py_INCREF(const_str_plain_ConnectTimeout);
    PyTuple_SET_ITEM(const_tuple_3288465531bc9a9ebad2b7fc5374f01f_tuple, 8, const_str_plain_ReadTimeout); Py_INCREF(const_str_plain_ReadTimeout);
    const_tuple_49c948476c0471fc655e41f23cf764af_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_49c948476c0471fc655e41f23cf764af_tuple, 0, const_str_plain___build__); Py_INCREF(const_str_plain___build__);
    PyTuple_SET_ITEM(const_tuple_49c948476c0471fc655e41f23cf764af_tuple, 1, const_str_plain___author__); Py_INCREF(const_str_plain___author__);
    PyTuple_SET_ITEM(const_tuple_49c948476c0471fc655e41f23cf764af_tuple, 2, const_str_plain___author_email__); Py_INCREF(const_str_plain___author_email__);
    PyTuple_SET_ITEM(const_tuple_49c948476c0471fc655e41f23cf764af_tuple, 3, const_str_plain___license__); Py_INCREF(const_str_plain___license__);
    const_str_digest_e03852224018ed217937e454110a99e9 = UNSTREAM_STRING_ASCII(&constant_bin[ 628608 ], 15, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4ddc689b2a0c0c2470881fb0b9eb266f;
static PyCodeObject *codeobj_3f7df379365d7e36ab96dfab9023d021;
static PyCodeObject *codeobj_72a587e33db8d69c9c750db8c84006ec;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_99420c5eadb8ce955ead6ed6b7c8b99c;
    codeobj_4ddc689b2a0c0c2470881fb0b9eb266f = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_d0e74712839492f5fe2c99311f5308c8, const_tuple_empty, 0, 0, 0);
    codeobj_3f7df379365d7e36ab96dfab9023d021 = MAKE_CODEOBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain__check_cryptography, const_tuple_str_plain_cryptography_version_str_plain_warning_tuple, 1, 0, 0);
    codeobj_72a587e33db8d69c9c750db8c84006ec = MAKE_CODEOBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_check_compatibility, const_tuple_8dd7c37fa0be4bfc5ccc87677a1cb02c_tuple, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_requests$$$function_1_check_compatibility();


static PyObject *MAKE_FUNCTION_requests$$$function_2__check_cryptography();


// The module function definitions.
static PyObject *impl_requests$$$function_1_check_compatibility(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_urllib3_version = python_pars[0];
    PyObject *par_chardet_version = python_pars[1];
    PyObject *var_major = NULL;
    PyObject *var_minor = NULL;
    PyObject *var_patch = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__element_3 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    struct Nuitka_FrameObject *frame_72a587e33db8d69c9c750db8c84006ec;
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
    static struct Nuitka_FrameObject *cache_frame_72a587e33db8d69c9c750db8c84006ec = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_72a587e33db8d69c9c750db8c84006ec, codeobj_72a587e33db8d69c9c750db8c84006ec, module_requests, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_72a587e33db8d69c9c750db8c84006ec = cache_frame_72a587e33db8d69c9c750db8c84006ec;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_72a587e33db8d69c9c750db8c84006ec);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_72a587e33db8d69c9c750db8c84006ec) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_urllib3_version);
        tmp_called_instance_1 = par_urllib3_version;
        frame_72a587e33db8d69c9c750db8c84006ec->m_frame.f_lineno = 50;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_split, &PyTuple_GET_ITEM(const_tuple_str_dot_tuple, 0));

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_urllib3_version;
            assert(old != NULL);
            par_urllib3_version = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_urllib3_version);
        tmp_compexpr_left_1 = par_urllib3_version;
        tmp_compexpr_right_1 = LIST_COPY(const_list_str_plain_dev_list);
        tmp_operand_name_1 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
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
        {
            PyObject *tmp_raise_type_1;
            tmp_raise_type_1 = PyExc_AssertionError;
            exception_type = tmp_raise_type_1;
            Py_INCREF(tmp_raise_type_1);
            exception_lineno = 51;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_urllib3_version);
        tmp_len_arg_1 = par_urllib3_version;
        tmp_compexpr_left_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT(par_urllib3_version);
            tmp_called_instance_2 = par_urllib3_version;
            frame_72a587e33db8d69c9c750db8c84006ec->m_frame.f_lineno = 55;
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_append, &PyTuple_GET_ITEM(const_tuple_str_plain_0_tuple, 0));

            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        branch_no_2:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_urllib3_version);
        tmp_iter_arg_1 = par_urllib3_version;
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
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
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
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
            exception_lineno = 58;
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
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
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
            exception_lineno = 58;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 58;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
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
                    exception_lineno = 58;
                    goto try_except_handler_3;
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

            type_description_1 = "ooooo";
            exception_lineno = 58;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert(var_major == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_major = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert(var_minor == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_minor = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        assert(var_patch == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_patch = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_int_arg_3;
        CHECK_OBJECT(var_major);
        tmp_int_arg_1 = var_major;
        tmp_tuple_element_1 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        tmp_iter_arg_2 = PyTuple_New(3);
        PyTuple_SET_ITEM(tmp_iter_arg_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_minor);
        tmp_int_arg_2 = var_minor;
        tmp_tuple_element_1 = PyNumber_Int(tmp_int_arg_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_iter_arg_2);

            exception_lineno = 59;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        PyTuple_SET_ITEM(tmp_iter_arg_2, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_patch);
        tmp_int_arg_3 = var_patch;
        tmp_tuple_element_1 = PyNumber_Int(tmp_int_arg_3);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_iter_arg_2);

            exception_lineno = 59;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        PyTuple_SET_ITEM(tmp_iter_arg_2, 2, tmp_tuple_element_1);
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_4, 0, 3);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 59;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_5, 1, 3);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 59;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_6, 2, 3);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 59;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_3 == NULL);
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_12;
    }
    goto try_end_3;
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

    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_major;
            assert(old != NULL);
            var_major = tmp_assign_source_13;
            Py_INCREF(var_major);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_minor;
            assert(old != NULL);
            var_minor = tmp_assign_source_14;
            Py_INCREF(var_minor);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = var_patch;
            assert(old != NULL);
            var_patch = tmp_assign_source_15;
            Py_INCREF(var_patch);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(var_major);
        tmp_compexpr_left_3 = var_major;
        tmp_compexpr_right_3 = const_int_pos_1;
        tmp_operand_name_2 = RICH_COMPARE_EQ_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooo";
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
            PyObject *tmp_raise_type_2;
            tmp_raise_type_2 = PyExc_AssertionError;
            exception_type = tmp_raise_type_2;
            Py_INCREF(tmp_raise_type_2);
            exception_lineno = 61;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(var_minor);
        tmp_compexpr_left_4 = var_minor;
        tmp_compexpr_right_4 = const_int_pos_21;
        tmp_operand_name_3 = RICH_COMPARE_GTE_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_operand_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        Py_DECREF(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooo";
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
            PyObject *tmp_raise_type_3;
            tmp_raise_type_3 = PyExc_AssertionError;
            exception_type = tmp_raise_type_3;
            Py_INCREF(tmp_raise_type_3);
            exception_lineno = 62;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT(var_minor);
        tmp_compexpr_left_5 = var_minor;
        tmp_compexpr_right_5 = const_int_pos_25;
        tmp_operand_name_4 = RICH_COMPARE_LTE_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        if (tmp_operand_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
        Py_DECREF(tmp_operand_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooo";
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
            PyObject *tmp_raise_type_4;
            tmp_raise_type_4 = PyExc_AssertionError;
            exception_type = tmp_raise_type_4;
            Py_INCREF(tmp_raise_type_4);
            exception_lineno = 63;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_5:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_chardet_version);
        tmp_called_instance_3 = par_chardet_version;
        frame_72a587e33db8d69c9c750db8c84006ec->m_frame.f_lineno = 66;
        tmp_subscribed_name_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, const_str_plain_split, &PyTuple_GET_ITEM(const_tuple_str_dot_tuple, 0));

        if (tmp_subscribed_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_name_1 = const_slice_none_int_pos_3_none;
        tmp_iter_arg_3 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_subscribed_name_1);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_16 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooo";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_3__source_iter == NULL);
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tmp_unpack_7, 0, 3);
        if (tmp_assign_source_17 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 66;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_1 == NULL);
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tmp_unpack_8, 1, 3);
        if (tmp_assign_source_18 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 66;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_2 == NULL);
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT(tmp_unpack_9, 2, 3);
        if (tmp_assign_source_19 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 66;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_3 == NULL);
        tmp_tuple_unpack_3__element_3 = tmp_assign_source_19;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_3__source_iter;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 66;
                    goto try_except_handler_7;
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

            type_description_1 = "ooooo";
            exception_lineno = 66;
            goto try_except_handler_7;
        }
    }
    goto try_end_5;
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

    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
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

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_20 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_major;
            assert(old != NULL);
            var_major = tmp_assign_source_20;
            Py_INCREF(var_major);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_21 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_minor;
            assert(old != NULL);
            var_minor = tmp_assign_source_21;
            Py_INCREF(var_minor);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_3);
        tmp_assign_source_22 = tmp_tuple_unpack_3__element_3;
        {
            PyObject *old = var_patch;
            assert(old != NULL);
            var_patch = tmp_assign_source_22;
            Py_INCREF(var_patch);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_int_arg_4;
        PyObject *tmp_int_arg_5;
        PyObject *tmp_int_arg_6;
        CHECK_OBJECT(var_major);
        tmp_int_arg_4 = var_major;
        tmp_tuple_element_2 = PyNumber_Int(tmp_int_arg_4);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooo";
            goto try_except_handler_8;
        }
        tmp_iter_arg_4 = PyTuple_New(3);
        PyTuple_SET_ITEM(tmp_iter_arg_4, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_minor);
        tmp_int_arg_5 = var_minor;
        tmp_tuple_element_2 = PyNumber_Int(tmp_int_arg_5);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_iter_arg_4);

            exception_lineno = 67;
            type_description_1 = "ooooo";
            goto try_except_handler_8;
        }
        PyTuple_SET_ITEM(tmp_iter_arg_4, 1, tmp_tuple_element_2);
        CHECK_OBJECT(var_patch);
        tmp_int_arg_6 = var_patch;
        tmp_tuple_element_2 = PyNumber_Int(tmp_int_arg_6);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_iter_arg_4);

            exception_lineno = 67;
            type_description_1 = "ooooo";
            goto try_except_handler_8;
        }
        PyTuple_SET_ITEM(tmp_iter_arg_4, 2, tmp_tuple_element_2);
        tmp_assign_source_23 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooo";
            goto try_except_handler_8;
        }
        assert(tmp_tuple_unpack_4__source_iter == NULL);
        tmp_tuple_unpack_4__source_iter = tmp_assign_source_23;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_24 = UNPACK_NEXT(tmp_unpack_10, 0, 3);
        if (tmp_assign_source_24 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 67;
            goto try_except_handler_9;
        }
        assert(tmp_tuple_unpack_4__element_1 == NULL);
        tmp_tuple_unpack_4__element_1 = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_11 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_25 = UNPACK_NEXT(tmp_unpack_11, 1, 3);
        if (tmp_assign_source_25 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 67;
            goto try_except_handler_9;
        }
        assert(tmp_tuple_unpack_4__element_2 == NULL);
        tmp_tuple_unpack_4__element_2 = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_12 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_26 = UNPACK_NEXT(tmp_unpack_12, 2, 3);
        if (tmp_assign_source_26 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 67;
            goto try_except_handler_9;
        }
        assert(tmp_tuple_unpack_4__element_3 == NULL);
        tmp_tuple_unpack_4__element_3 = tmp_assign_source_26;
    }
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

    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_8;
    // End of try:
    try_end_7:;
    goto try_end_8;
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

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT((PyObject *)tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;

    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_27 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_major;
            assert(old != NULL);
            var_major = tmp_assign_source_27;
            Py_INCREF(var_major);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_28 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_minor;
            assert(old != NULL);
            var_minor = tmp_assign_source_28;
            Py_INCREF(var_minor);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_3);
        tmp_assign_source_29 = tmp_tuple_unpack_4__element_3;
        {
            PyObject *old = var_patch;
            assert(old != NULL);
            var_patch = tmp_assign_source_29;
            Py_INCREF(var_patch);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_3);
    tmp_tuple_unpack_4__element_3 = NULL;

    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_operand_name_5;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT(var_major);
        tmp_compexpr_left_6 = var_major;
        tmp_compexpr_right_6 = const_int_pos_3;
        tmp_operand_name_5 = RICH_COMPARE_EQ_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
        if (tmp_operand_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_5);
        Py_DECREF(tmp_operand_name_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_raise_type_5;
            tmp_raise_type_5 = PyExc_AssertionError;
            exception_type = tmp_raise_type_5;
            Py_INCREF(tmp_raise_type_5);
            exception_lineno = 69;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_6:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_operand_name_6;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT(var_minor);
        tmp_compexpr_left_7 = var_minor;
        tmp_compexpr_right_7 = const_int_pos_1;
        tmp_operand_name_6 = RICH_COMPARE_LT_OBJECT_OBJECT(tmp_compexpr_left_7, tmp_compexpr_right_7);
        if (tmp_operand_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_6);
        Py_DECREF(tmp_operand_name_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooo";
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
            PyObject *tmp_raise_type_6;
            tmp_raise_type_6 = PyExc_AssertionError;
            exception_type = tmp_raise_type_6;
            Py_INCREF(tmp_raise_type_6);
            exception_lineno = 70;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_operand_name_7;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        CHECK_OBJECT(var_patch);
        tmp_compexpr_left_8 = var_patch;
        tmp_compexpr_right_8 = const_int_pos_2;
        tmp_operand_name_7 = RICH_COMPARE_GTE_OBJECT_OBJECT(tmp_compexpr_left_8, tmp_compexpr_right_8);
        if (tmp_operand_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_7);
        Py_DECREF(tmp_operand_name_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
        branch_yes_8:;
        {
            PyObject *tmp_raise_type_7;
            tmp_raise_type_7 = PyExc_AssertionError;
            exception_type = tmp_raise_type_7;
            Py_INCREF(tmp_raise_type_7);
            exception_lineno = 71;
            RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        branch_no_8:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_72a587e33db8d69c9c750db8c84006ec);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_72a587e33db8d69c9c750db8c84006ec);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_72a587e33db8d69c9c750db8c84006ec, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_72a587e33db8d69c9c750db8c84006ec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_72a587e33db8d69c9c750db8c84006ec, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_72a587e33db8d69c9c750db8c84006ec,
        type_description_1,
        par_urllib3_version,
        par_chardet_version,
        var_major,
        var_minor,
        var_patch
    );


    // Release cached frame.
    if (frame_72a587e33db8d69c9c750db8c84006ec == cache_frame_72a587e33db8d69c9c750db8c84006ec) {
        Py_DECREF(frame_72a587e33db8d69c9c750db8c84006ec);
    }
    cache_frame_72a587e33db8d69c9c750db8c84006ec = NULL;

    assertFrameObject(frame_72a587e33db8d69c9c750db8c84006ec);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$$$function_1_check_compatibility);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)par_urllib3_version);
    Py_DECREF(par_urllib3_version);
    par_urllib3_version = NULL;

    CHECK_OBJECT((PyObject *)var_major);
    Py_DECREF(var_major);
    var_major = NULL;

    CHECK_OBJECT((PyObject *)var_minor);
    Py_DECREF(var_minor);
    var_minor = NULL;

    CHECK_OBJECT((PyObject *)var_patch);
    Py_DECREF(var_patch);
    var_patch = NULL;

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

    CHECK_OBJECT((PyObject *)par_urllib3_version);
    Py_DECREF(par_urllib3_version);
    par_urllib3_version = NULL;

    Py_XDECREF(var_major);
    var_major = NULL;

    Py_XDECREF(var_minor);
    var_minor = NULL;

    Py_XDECREF(var_patch);
    var_patch = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$$$function_1_check_compatibility);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_chardet_version);
    Py_DECREF(par_chardet_version);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_chardet_version);
    Py_DECREF(par_chardet_version);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$$$function_2__check_cryptography(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cryptography_version = python_pars[0];
    PyObject *var_warning = NULL;
    struct Nuitka_FrameObject *frame_3f7df379365d7e36ab96dfab9023d021;
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
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_3f7df379365d7e36ab96dfab9023d021 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_3f7df379365d7e36ab96dfab9023d021, codeobj_3f7df379365d7e36ab96dfab9023d021, module_requests, sizeof(void *)+sizeof(void *));
    frame_3f7df379365d7e36ab96dfab9023d021 = cache_frame_3f7df379365d7e36ab96dfab9023d021;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3f7df379365d7e36ab96dfab9023d021);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3f7df379365d7e36ab96dfab9023d021) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_1;
        tmp_called_name_1 = (PyObject *)&PyMap_Type;
        tmp_args_element_name_1 = (PyObject *)&PyLong_Type;
        CHECK_OBJECT(par_cryptography_version);
        tmp_called_instance_1 = par_cryptography_version;
        frame_3f7df379365d7e36ab96dfab9023d021->m_frame.f_lineno = 77;
        tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_split, &PyTuple_GET_ITEM(const_tuple_str_dot_tuple, 0));

        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_3f7df379365d7e36ab96dfab9023d021->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = PySequence_List(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_cryptography_version;
            assert(old != NULL);
            par_cryptography_version = tmp_assign_source_1;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_3f7df379365d7e36ab96dfab9023d021, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_3f7df379365d7e36ab96dfab9023d021, exception_keeper_lineno_1);
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
        tmp_compexpr_right_1 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
            goto try_except_handler_3;
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
        goto try_return_handler_3;
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 76;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_3f7df379365d7e36ab96dfab9023d021->m_frame) frame_3f7df379365d7e36ab96dfab9023d021->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto try_except_handler_3;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$$$function_2__check_cryptography);
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
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_cryptography_version);
        tmp_compexpr_left_2 = par_cryptography_version;
        tmp_compexpr_right_2 = LIST_COPY(const_list_int_pos_1_int_pos_3_int_pos_4_list);
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oo";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_3;
            tmp_called_instance_2 = const_str_digest_f1c6599a63ba21183a1dd5287c35afe3;
            CHECK_OBJECT(par_cryptography_version);
            tmp_args_element_name_3 = par_cryptography_version;
            frame_3f7df379365d7e36ab96dfab9023d021->m_frame.f_lineno = 82;
            {
                PyObject *call_args[] = {tmp_args_element_name_3};
                tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_format, call_args);
            }

            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert(var_warning == NULL);
            var_warning = tmp_assign_source_2;
        }
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain_warnings);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings);
            }

            if (tmp_mvar_value_1 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 19137 ], 30, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 83;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_warn);
            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(var_warning);
            tmp_args_element_name_4 = var_warning;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain_RequestsDependencyWarning);

            if (unlikely(tmp_mvar_value_2 == NULL)) {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsDependencyWarning);
            }

            if (tmp_mvar_value_2 == NULL) {
                Py_DECREF(tmp_called_name_2);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 19167 ], 47, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 83;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_5 = tmp_mvar_value_2;
            frame_3f7df379365d7e36ab96dfab9023d021->m_frame.f_lineno = 83;
            {
                PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
            }

            Py_DECREF(tmp_called_name_2);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF(tmp_call_result_1);
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3f7df379365d7e36ab96dfab9023d021);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3f7df379365d7e36ab96dfab9023d021);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3f7df379365d7e36ab96dfab9023d021);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3f7df379365d7e36ab96dfab9023d021, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_3f7df379365d7e36ab96dfab9023d021->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3f7df379365d7e36ab96dfab9023d021, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3f7df379365d7e36ab96dfab9023d021,
        type_description_1,
        par_cryptography_version,
        var_warning
    );


    // Release cached frame.
    if (frame_3f7df379365d7e36ab96dfab9023d021 == cache_frame_3f7df379365d7e36ab96dfab9023d021) {
        Py_DECREF(frame_3f7df379365d7e36ab96dfab9023d021);
    }
    cache_frame_3f7df379365d7e36ab96dfab9023d021 = NULL;

    assertFrameObject(frame_3f7df379365d7e36ab96dfab9023d021);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests$$$function_2__check_cryptography);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)par_cryptography_version);
    Py_DECREF(par_cryptography_version);
    par_cryptography_version = NULL;

    Py_XDECREF(var_warning);
    var_warning = NULL;

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

    CHECK_OBJECT((PyObject *)par_cryptography_version);
    Py_DECREF(par_cryptography_version);
    par_cryptography_version = NULL;

    Py_XDECREF(var_warning);
    var_warning = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(requests$$$function_2__check_cryptography);
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



static PyObject *MAKE_FUNCTION_requests$$$function_1_check_compatibility() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$$$function_1_check_compatibility,
        const_str_plain_check_compatibility,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_72a587e33db8d69c9c750db8c84006ec,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$$$function_2__check_cryptography() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$$$function_2__check_cryptography,
        const_str_plain__check_cryptography,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3f7df379365d7e36ab96dfab9023d021,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests =
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

function_impl_code functable_requests[] = {
    impl_requests$$$function_1_check_compatibility,
    impl_requests$$$function_2__check_cryptography,
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

    function_impl_code *current = functable_requests;
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

    if (offset > sizeof(functable_requests) || offset < 0) {
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
        functable_requests[offset],
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
        module_requests,
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
PyObject *modulecode_requests(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_requests;
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
    PRINT_STRING("requests: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("requests: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("requests: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initrequests\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests = Py_InitModule4(
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
    mdef_requests.m_name = module_full_name;
    module_requests = PyModule_Create(&mdef_requests);
#endif

    moduledict_requests = MODULE_DICT(module_requests);

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
        moduledict_requests,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_requests,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_requests,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_requests,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_requests,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_requests);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_requests);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_requests, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_requests, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_requests, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain___name__),
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
#if 1
        SET_ATTRIBUTE(spec_value, const_str_plain_submodule_search_locations, PyList_New(0));
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    PyObject *tmp_import_from_7__module = NULL;
    struct Nuitka_FrameObject *frame_4ddc689b2a0c0c2470881fb0b9eb266f;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_5504b34a801f3931b7cf790b7dfc5ec7;
        UPDATE_STRING_DICT0(moduledict_requests, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_99420c5eadb8ce955ead6ed6b7c8b99c;
        UPDATE_STRING_DICT0(moduledict_requests, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY(const_list_str_digest_ace4b97f3ffb7878904da8b3e7ec3e44_list);
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
    }
    // Frame without reuse.
    frame_4ddc689b2a0c0c2470881fb0b9eb266f = MAKE_MODULE_FRAME(codeobj_4ddc689b2a0c0c2470881fb0b9eb266f, module_requests);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_4ddc689b2a0c0c2470881fb0b9eb266f);
    assert(Py_REFCNT(frame_4ddc689b2a0c0c2470881fb0b9eb266f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_99420c5eadb8ce955ead6ed6b7c8b99c;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain___spec__);

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
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_requests, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_urllib3;
        tmp_globals_name_1 = (PyObject *)moduledict_requests;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 43;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_urllib3, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_chardet;
        tmp_globals_name_2 = (PyObject *)moduledict_requests;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 44;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_chardet, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_warnings;
        tmp_globals_name_3 = (PyObject *)moduledict_requests;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 45;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_exceptions;
        tmp_globals_name_4 = (PyObject *)moduledict_requests;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_RequestsDependencyWarning_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 46;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
           tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_requests,
                const_str_plain_RequestsDependencyWarning,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_RequestsDependencyWarning);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_RequestsDependencyWarning, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_requests$$$function_1_check_compatibility();



        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_check_compatibility, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_requests$$$function_2__check_cryptography();



        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain__check_cryptography, tmp_assign_source_10);
    }
    // Tried code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain_check_compatibility);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_check_compatibility);
        }

        CHECK_OBJECT(tmp_mvar_value_3);
        tmp_called_name_1 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain_urllib3);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_urllib3);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19214 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 87;

            goto try_except_handler_1;
        }

        tmp_source_name_1 = tmp_mvar_value_4;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain___version__);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_1;
        }
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain_chardet);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_chardet);
        }

        if (tmp_mvar_value_5 == NULL) {
            Py_DECREF(tmp_args_element_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19243 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 87;

            goto try_except_handler_1;
        }

        tmp_source_name_2 = tmp_mvar_value_5;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain___version__);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 87;

            goto try_except_handler_1;
        }
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_1);
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_4ddc689b2a0c0c2470881fb0b9eb266f, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_4ddc689b2a0c0c2470881fb0b9eb266f, exception_keeper_lineno_1);
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
        tmp_compexpr_right_1 = const_tuple_type_AssertionError_type_ValueError_tuple;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

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
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_mvar_value_9;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain_warnings);

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

                exception_lineno = 89;

                goto try_except_handler_2;
            }

            tmp_source_name_3 = tmp_mvar_value_6;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_warn);
            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto try_except_handler_2;
            }
            tmp_source_name_4 = const_str_digest_b3344e32fb4adf37492e7a946859e9d5;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_format);
            assert(!(tmp_called_name_3 == NULL));
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain_urllib3);

            if (unlikely(tmp_mvar_value_7 == NULL)) {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_urllib3);
            }

            if (tmp_mvar_value_7 == NULL) {
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_called_name_3);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 19214 ], 29, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 90;

                goto try_except_handler_2;
            }

            tmp_source_name_5 = tmp_mvar_value_7;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain___version__);
            if (tmp_args_element_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_called_name_3);

                exception_lineno = 90;

                goto try_except_handler_2;
            }
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain_chardet);

            if (unlikely(tmp_mvar_value_8 == NULL)) {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_chardet);
            }

            if (tmp_mvar_value_8 == NULL) {
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_called_name_3);
                Py_DECREF(tmp_args_element_name_4);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 19243 ], 29, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 90;

                goto try_except_handler_2;
            }

            tmp_source_name_6 = tmp_mvar_value_8;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain___version__);
            if (tmp_args_element_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_called_name_3);
                Py_DECREF(tmp_args_element_name_4);

                exception_lineno = 90;

                goto try_except_handler_2;
            }
            frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 89;
            {
                PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
                tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
            }

            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_element_name_4);
            Py_DECREF(tmp_args_element_name_5);
            if (tmp_args_element_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_name_2);

                exception_lineno = 89;

                goto try_except_handler_2;
            }
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain_RequestsDependencyWarning);

            if (unlikely(tmp_mvar_value_9 == NULL)) {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_RequestsDependencyWarning);
            }

            if (tmp_mvar_value_9 == NULL) {
                Py_DECREF(tmp_called_name_2);
                Py_DECREF(tmp_args_element_name_3);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 19167 ], 47, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 91;

                goto try_except_handler_2;
            }

            tmp_args_element_name_6 = tmp_mvar_value_9;
            frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 89;
            {
                PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_6};
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
            }

            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_3);
            if (tmp_call_result_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto try_except_handler_2;
            }
            Py_DECREF(tmp_call_result_2);
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 86;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame) frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = exception_tb->tb_lineno;

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
    NUITKA_CANNOT_GET_HERE(requests);
    return NULL;
    // End of try:
    try_end_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_e03852224018ed217937e454110a99e9;
        tmp_globals_name_5 = (PyObject *)moduledict_requests;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_pyopenssl_tuple;
        tmp_level_name_5 = const_int_0;
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 95;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_3;
        }
        tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_pyopenssl);
        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_pyopenssl, tmp_assign_source_11);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_call_result_3;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain_pyopenssl);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_pyopenssl);
        }

        CHECK_OBJECT(tmp_mvar_value_10);
        tmp_called_instance_1 = tmp_mvar_value_10;
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 96;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_inject_into_urllib3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_cryptography;
        tmp_globals_name_6 = (PyObject *)moduledict_requests;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain___version___tuple;
        tmp_level_name_6 = const_int_0;
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 99;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_3;
        }
        tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain___version__);
        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_cryptography_version, tmp_assign_source_12);
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_mvar_value_12;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain__check_cryptography);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__check_cryptography);
        }

        if (tmp_mvar_value_11 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19272 ], 41, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 100;

            goto try_except_handler_3;
        }

        tmp_called_name_4 = tmp_mvar_value_11;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain_cryptography_version);

        if (unlikely(tmp_mvar_value_12 == NULL)) {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_cryptography_version);
        }

        CHECK_OBJECT(tmp_mvar_value_12);
        tmp_args_element_name_7 = tmp_mvar_value_12;
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 100;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_7);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_4);
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

    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_type_2);
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF(exception_preserved_value_2);
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF(exception_preserved_tb_2);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_4ddc689b2a0c0c2470881fb0b9eb266f, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_4ddc689b2a0c0c2470881fb0b9eb266f, exception_keeper_lineno_3);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    PyException_SetTraceback(exception_keeper_value_3, (PyObject *)exception_keeper_tb_3);
    PUBLISH_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_4;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_4;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 94;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame) frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_4;
        branch_no_2:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE(requests);
    return NULL;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_7 = (PyObject *)moduledict_requests;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_DependencyWarning_tuple;
        tmp_level_name_7 = const_int_0;
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 105;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_DependencyWarning);
        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_DependencyWarning, tmp_assign_source_13);
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_mvar_value_14;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain_warnings);

        if (unlikely(tmp_mvar_value_13 == NULL)) {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings);
        }

        if (tmp_mvar_value_13 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19137 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_13;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain_simplefilter);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_8 = const_str_plain_ignore;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain_DependencyWarning);

        if (unlikely(tmp_mvar_value_14 == NULL)) {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_DependencyWarning);
        }

        if (tmp_mvar_value_14 == NULL) {
            Py_DECREF(tmp_called_name_5);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19313 ], 39, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }

        tmp_args_element_name_9 = tmp_mvar_value_14;
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 106;
        {
            PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, call_args);
        }

        Py_DECREF(tmp_called_name_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain___version__;
        tmp_globals_name_8 = (PyObject *)moduledict_requests;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_e24257d774be1088cd8bd06848d8a7f0_tuple;
        tmp_level_name_8 = const_int_pos_1;
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 108;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_requests,
                const_str_plain___title__,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain___title__);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain___title__, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
           tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_requests,
                const_str_plain___description__,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain___description__);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain___description__, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
           tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_requests,
                const_str_plain___url__,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain___url__);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain___url__, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
           tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_requests,
                const_str_plain___version__,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain___version__);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_18);
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

    CHECK_OBJECT((PyObject *)tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT((PyObject *)tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_plain___version__;
        tmp_globals_name_9 = (PyObject *)moduledict_requests;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_49c948476c0471fc655e41f23cf764af_tuple;
        tmp_level_name_9 = const_int_pos_1;
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 109;
        tmp_assign_source_19 = IMPORT_MODULE5(tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
           tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_requests,
                const_str_plain___build__,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain___build__);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain___build__, tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
           tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_requests,
                const_str_plain___author__,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_10, const_str_plain___author__);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
           tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_requests,
                const_str_plain___author_email__,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_11, const_str_plain___author_email__);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain___author_email__, tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
           tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_requests,
                const_str_plain___license__,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_12, const_str_plain___license__);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain___license__, tmp_assign_source_23);
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

    CHECK_OBJECT((PyObject *)tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT((PyObject *)tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_plain___version__;
        tmp_globals_name_10 = (PyObject *)moduledict_requests;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = const_tuple_str_plain___copyright___str_plain___cake___tuple;
        tmp_level_name_10 = const_int_pos_1;
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 110;
        tmp_assign_source_24 = IMPORT_MODULE5(tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_24;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_13 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
           tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_requests,
                const_str_plain___copyright__,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_13, const_str_plain___copyright__);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain___copyright__, tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_14 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
           tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_requests,
                const_str_plain___cake__,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_14, const_str_plain___cake__);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain___cake__, tmp_assign_source_26);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT((PyObject *)tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;

    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = const_str_empty;
        tmp_globals_name_11 = (PyObject *)moduledict_requests;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = const_tuple_str_plain_utils_tuple;
        tmp_level_name_11 = const_int_pos_1;
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 112;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
           tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_requests,
                const_str_plain_utils,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_15, const_str_plain_utils);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_utils, tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_name_12;
        PyObject *tmp_locals_name_12;
        PyObject *tmp_fromlist_name_12;
        PyObject *tmp_level_name_12;
        tmp_name_name_12 = const_str_empty;
        tmp_globals_name_12 = (PyObject *)moduledict_requests;
        tmp_locals_name_12 = Py_None;
        tmp_fromlist_name_12 = const_tuple_str_plain_packages_tuple;
        tmp_level_name_12 = const_int_pos_1;
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 113;
        tmp_import_name_from_16 = IMPORT_MODULE5(tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12);
        if (tmp_import_name_from_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
           tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_requests,
                const_str_plain_packages,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_16, const_str_plain_packages);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_packages, tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_name_name_13;
        PyObject *tmp_globals_name_13;
        PyObject *tmp_locals_name_13;
        PyObject *tmp_fromlist_name_13;
        PyObject *tmp_level_name_13;
        tmp_name_name_13 = const_str_plain_models;
        tmp_globals_name_13 = (PyObject *)moduledict_requests;
        tmp_locals_name_13 = Py_None;
        tmp_fromlist_name_13 = const_tuple_36f9cd9e36d22e1d8900abd71f00b8f9_tuple;
        tmp_level_name_13 = const_int_pos_1;
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 114;
        tmp_assign_source_29 = IMPORT_MODULE5(tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_29;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_17 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
           tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_requests,
                const_str_plain_Request,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_17, const_str_plain_Request);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_Request, tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_18 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
           tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_requests,
                const_str_plain_Response,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_18, const_str_plain_Response);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_Response, tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_19 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
           tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_requests,
                const_str_plain_PreparedRequest,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_32 = IMPORT_NAME(tmp_import_name_from_19, const_str_plain_PreparedRequest);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_PreparedRequest, tmp_assign_source_32);
    }
    goto try_end_8;
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

    CHECK_OBJECT((PyObject *)tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT((PyObject *)tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;

    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_name_name_14;
        PyObject *tmp_globals_name_14;
        PyObject *tmp_locals_name_14;
        PyObject *tmp_fromlist_name_14;
        PyObject *tmp_level_name_14;
        tmp_name_name_14 = const_str_plain_api;
        tmp_globals_name_14 = (PyObject *)moduledict_requests;
        tmp_locals_name_14 = Py_None;
        tmp_fromlist_name_14 = const_tuple_4c9bde9a9a4051276f19896e4ead711c_tuple;
        tmp_level_name_14 = const_int_pos_1;
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 115;
        tmp_assign_source_33 = IMPORT_MODULE5(tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_33;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_20 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
           tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_requests,
                const_str_plain_request,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_34 = IMPORT_NAME(tmp_import_name_from_20, const_str_plain_request);
        }

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_request, tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_21 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
           tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_requests,
                const_str_plain_get,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_35 = IMPORT_NAME(tmp_import_name_from_21, const_str_plain_get);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_get, tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_22 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_22)) {
           tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_requests,
                const_str_plain_head,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_36 = IMPORT_NAME(tmp_import_name_from_22, const_str_plain_head);
        }

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_head, tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_23 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_23)) {
           tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_requests,
                const_str_plain_post,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_37 = IMPORT_NAME(tmp_import_name_from_23, const_str_plain_post);
        }

        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_post, tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_24 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_24)) {
           tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_requests,
                const_str_plain_patch,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_38 = IMPORT_NAME(tmp_import_name_from_24, const_str_plain_patch);
        }

        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_patch, tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_25 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_25)) {
           tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_requests,
                const_str_plain_put,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_39 = IMPORT_NAME(tmp_import_name_from_25, const_str_plain_put);
        }

        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_put, tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_26 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_26)) {
           tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_requests,
                const_str_plain_delete,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_40 = IMPORT_NAME(tmp_import_name_from_26, const_str_plain_delete);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_delete, tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_27 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_27)) {
           tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_requests,
                const_str_plain_options,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_41 = IMPORT_NAME(tmp_import_name_from_27, const_str_plain_options);
        }

        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_options, tmp_assign_source_41);
    }
    goto try_end_9;
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

    CHECK_OBJECT((PyObject *)tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT((PyObject *)tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;

    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_name_name_15;
        PyObject *tmp_globals_name_15;
        PyObject *tmp_locals_name_15;
        PyObject *tmp_fromlist_name_15;
        PyObject *tmp_level_name_15;
        tmp_name_name_15 = const_str_plain_sessions;
        tmp_globals_name_15 = (PyObject *)moduledict_requests;
        tmp_locals_name_15 = Py_None;
        tmp_fromlist_name_15 = const_tuple_str_plain_session_str_plain_Session_tuple;
        tmp_level_name_15 = const_int_pos_1;
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 116;
        tmp_assign_source_42 = IMPORT_MODULE5(tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15, tmp_level_name_15);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_6__module == NULL);
        tmp_import_from_6__module = tmp_assign_source_42;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_28 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_28)) {
           tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_requests,
                const_str_plain_session,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_43 = IMPORT_NAME(tmp_import_name_from_28, const_str_plain_session);
        }

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_session, tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_29 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_29)) {
           tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_requests,
                const_str_plain_Session,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_44 = IMPORT_NAME(tmp_import_name_from_29, const_str_plain_Session);
        }

        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_Session, tmp_assign_source_44);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT((PyObject *)tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT((PyObject *)tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;

    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_30;
        PyObject *tmp_name_name_16;
        PyObject *tmp_globals_name_16;
        PyObject *tmp_locals_name_16;
        PyObject *tmp_fromlist_name_16;
        PyObject *tmp_level_name_16;
        tmp_name_name_16 = const_str_plain_status_codes;
        tmp_globals_name_16 = (PyObject *)moduledict_requests;
        tmp_locals_name_16 = Py_None;
        tmp_fromlist_name_16 = const_tuple_str_plain_codes_tuple;
        tmp_level_name_16 = const_int_pos_1;
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 117;
        tmp_import_name_from_30 = IMPORT_MODULE5(tmp_name_name_16, tmp_globals_name_16, tmp_locals_name_16, tmp_fromlist_name_16, tmp_level_name_16);
        if (tmp_import_name_from_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_30)) {
           tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_requests,
                const_str_plain_codes,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_45 = IMPORT_NAME(tmp_import_name_from_30, const_str_plain_codes);
        }

        Py_DECREF(tmp_import_name_from_30);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_codes, tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_name_name_17;
        PyObject *tmp_globals_name_17;
        PyObject *tmp_locals_name_17;
        PyObject *tmp_fromlist_name_17;
        PyObject *tmp_level_name_17;
        tmp_name_name_17 = const_str_plain_exceptions;
        tmp_globals_name_17 = (PyObject *)moduledict_requests;
        tmp_locals_name_17 = Py_None;
        tmp_fromlist_name_17 = const_tuple_3288465531bc9a9ebad2b7fc5374f01f_tuple;
        tmp_level_name_17 = const_int_pos_1;
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 118;
        tmp_assign_source_46 = IMPORT_MODULE5(tmp_name_name_17, tmp_globals_name_17, tmp_locals_name_17, tmp_fromlist_name_17, tmp_level_name_17);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_7__module == NULL);
        tmp_import_from_7__module = tmp_assign_source_46;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_31;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_31 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_31)) {
           tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_31,
                (PyObject *)moduledict_requests,
                const_str_plain_RequestException,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_47 = IMPORT_NAME(tmp_import_name_from_31, const_str_plain_RequestException);
        }

        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_RequestException, tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_32;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_32 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_32)) {
           tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_32,
                (PyObject *)moduledict_requests,
                const_str_plain_Timeout,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_48 = IMPORT_NAME(tmp_import_name_from_32, const_str_plain_Timeout);
        }

        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_Timeout, tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_import_name_from_33;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_33 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_33)) {
           tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_33,
                (PyObject *)moduledict_requests,
                const_str_plain_URLRequired,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_49 = IMPORT_NAME(tmp_import_name_from_33, const_str_plain_URLRequired);
        }

        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_URLRequired, tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_import_name_from_34;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_34 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_34)) {
           tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_34,
                (PyObject *)moduledict_requests,
                const_str_plain_TooManyRedirects,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_50 = IMPORT_NAME(tmp_import_name_from_34, const_str_plain_TooManyRedirects);
        }

        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_TooManyRedirects, tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_import_name_from_35;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_35 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_35)) {
           tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_35,
                (PyObject *)moduledict_requests,
                const_str_plain_HTTPError,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_51 = IMPORT_NAME(tmp_import_name_from_35, const_str_plain_HTTPError);
        }

        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_HTTPError, tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_import_name_from_36;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_36 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_36)) {
           tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_36,
                (PyObject *)moduledict_requests,
                const_str_plain_ConnectionError,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_52 = IMPORT_NAME(tmp_import_name_from_36, const_str_plain_ConnectionError);
        }

        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_ConnectionError, tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_import_name_from_37;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_37 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_37)) {
           tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_37,
                (PyObject *)moduledict_requests,
                const_str_plain_FileModeWarning,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_53 = IMPORT_NAME(tmp_import_name_from_37, const_str_plain_FileModeWarning);
        }

        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_FileModeWarning, tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_import_name_from_38;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_38 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_38)) {
           tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_38,
                (PyObject *)moduledict_requests,
                const_str_plain_ConnectTimeout,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_54 = IMPORT_NAME(tmp_import_name_from_38, const_str_plain_ConnectTimeout);
        }

        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_ConnectTimeout, tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_import_name_from_39;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_39 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_39)) {
           tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_39,
                (PyObject *)moduledict_requests,
                const_str_plain_ReadTimeout,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_55 = IMPORT_NAME(tmp_import_name_from_39, const_str_plain_ReadTimeout);
        }

        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_ReadTimeout, tmp_assign_source_55);
    }
    goto try_end_11;
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

    CHECK_OBJECT((PyObject *)tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT((PyObject *)tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;

    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_name_name_18;
        PyObject *tmp_globals_name_18;
        PyObject *tmp_locals_name_18;
        PyObject *tmp_fromlist_name_18;
        PyObject *tmp_level_name_18;
        tmp_name_name_18 = const_str_plain_logging;
        tmp_globals_name_18 = (PyObject *)moduledict_requests;
        tmp_locals_name_18 = Py_None;
        tmp_fromlist_name_18 = Py_None;
        tmp_level_name_18 = const_int_0;
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 125;
        tmp_assign_source_56 = IMPORT_MODULE5(tmp_name_name_18, tmp_globals_name_18, tmp_locals_name_18, tmp_fromlist_name_18, tmp_level_name_18);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_import_name_from_40;
        PyObject *tmp_name_name_19;
        PyObject *tmp_globals_name_19;
        PyObject *tmp_locals_name_19;
        PyObject *tmp_fromlist_name_19;
        PyObject *tmp_level_name_19;
        tmp_name_name_19 = const_str_plain_logging;
        tmp_globals_name_19 = (PyObject *)moduledict_requests;
        tmp_locals_name_19 = Py_None;
        tmp_fromlist_name_19 = const_tuple_str_plain_NullHandler_tuple;
        tmp_level_name_19 = const_int_0;
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 126;
        tmp_import_name_from_40 = IMPORT_MODULE5(tmp_name_name_19, tmp_globals_name_19, tmp_locals_name_19, tmp_fromlist_name_19, tmp_level_name_19);
        if (tmp_import_name_from_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_57 = IMPORT_NAME(tmp_import_name_from_40, const_str_plain_NullHandler);
        Py_DECREF(tmp_import_name_from_40);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests, (Nuitka_StringObject *)const_str_plain_NullHandler, tmp_assign_source_57);
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_source_name_8;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_16;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain_logging);

        if (unlikely(tmp_mvar_value_15 == NULL)) {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_logging);
        }

        if (tmp_mvar_value_15 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 78 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_15;
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 128;
        tmp_source_name_8 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, const_str_plain_getLogger, &PyTuple_GET_ITEM(const_tuple_str_plain_requests_tuple, 0));

        if (tmp_source_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain_addHandler);
        Py_DECREF(tmp_source_name_8);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain_NullHandler);

        if (unlikely(tmp_mvar_value_16 == NULL)) {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_NullHandler);
        }

        if (tmp_mvar_value_16 == NULL) {
            Py_DECREF(tmp_called_name_6);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19352 ], 33, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_16;
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 128;
        tmp_args_element_name_10 = CALL_FUNCTION_NO_ARGS(tmp_called_name_7);
        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 128;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_10);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_10);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain_warnings);

        if (unlikely(tmp_mvar_value_17 == NULL)) {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings);
        }

        if (tmp_mvar_value_17 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19137 ], 30, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_17;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_simplefilter);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = const_str_plain_default;
        tmp_args_name_1 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE(moduledict_requests, (Nuitka_StringObject *)const_str_plain_FileModeWarning);

        if (unlikely(tmp_mvar_value_18 == NULL)) {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_FileModeWarning);
        }

        if (tmp_mvar_value_18 == NULL) {
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_args_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19385 ], 37, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_18;
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_kw_name_1 = PyDict_Copy(const_dict_9d1be102e274ebd5d21e13e40f132db0);
        frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame.f_lineno = 131;
        tmp_call_result_7 = CALL_FUNCTION(tmp_called_name_8, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4ddc689b2a0c0c2470881fb0b9eb266f);
#endif
    popFrameStack();

    assertFrameObject(frame_4ddc689b2a0c0c2470881fb0b9eb266f);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4ddc689b2a0c0c2470881fb0b9eb266f);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_4ddc689b2a0c0c2470881fb0b9eb266f, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_4ddc689b2a0c0c2470881fb0b9eb266f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4ddc689b2a0c0c2470881fb0b9eb266f, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module_requests;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
