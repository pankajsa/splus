/* Generated code for Python module 'requests.compat'
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

/* The "_module_requests$compat" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$compat;
PyDictObject *moduledict_requests$compat;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_str_plain_StringIO_tuple;
extern PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
static PyObject *const_tuple_1a6551445f1104e3b9dd672b8d5e0ed7_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_str_plain_json;
static PyObject *const_str_digest_4e6c5647deaab37416af757b77d767ca;
extern PyObject *const_str_plain_Callable;
extern PyObject *const_str_plain_urlencode;
static PyObject *const_str_digest_6a637a9794822b04b9cdf038e4318394;
extern PyObject *const_str_plain_getproxies_environment;
static PyObject *const_str_plain__ver;
extern PyObject *const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
extern PyObject *const_str_plain_MutableMapping;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_proxy_bypass;
extern PyObject *const_str_plain_is_py3;
extern PyObject *const_str_plain_cookielib;
extern PyObject *const_str_plain_quote;
extern PyObject *const_str_plain_urllib;
extern PyObject *const_str_plain_urlparse;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_long;
static PyObject *const_tuple_str_plain_cookiejar_tuple;
extern PyObject *const_str_plain_int;
extern PyObject *const_str_plain_urldefrag;
extern PyObject *const_str_plain_proxy_bypass_environment;
extern PyObject *const_str_plain_unicode;
extern PyObject *const_str_plain_float;
extern PyObject *const_str_plain_collections;
static PyObject *const_tuple_str_plain_Morsel_tuple;
extern PyObject *const_str_plain_cookiejar;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_integer_types;
extern PyObject *const_str_plain_getproxies;
static PyObject *const_str_digest_05642becbbbe29affa5245f2742ae8ed;
extern PyObject *const_str_plain_builtin_str;
extern PyObject *const_str_plain_unquote_plus;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_Cookie;
static PyObject *const_tuple_type_int_type_float_tuple;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_OrderedDict;
extern PyObject *const_tuple_type_int_tuple;
extern PyObject *const_tuple_str_plain_parse_http_list_tuple;
extern PyObject *const_str_plain_chardet;
extern PyObject *const_str_plain_unquote;
static PyObject *const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple;
extern PyObject *const_str_plain_urlsplit;
extern PyObject *const_str_plain_urljoin;
extern PyObject *const_str_plain___cached__;
static PyObject *const_tuple_88d1e79e25c6a2b1eddcdc1d57101770_tuple;
extern PyObject *const_str_plain_basestring;
static PyObject *const_str_plain_simplejson;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_io;
static PyObject *const_tuple_673ccc048b129117fb3f0c8627a50718_tuple;
extern PyObject *const_str_plain_StringIO;
extern PyObject *const_str_plain_parse_http_list;
extern PyObject *const_str_digest_faf5973379f42e9b5528565b323f20e0;
extern PyObject *const_str_digest_59bc9c95777e64e4720c3af0837aec42;
extern PyObject *const_str_plain_Mapping;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_urlunparse;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_urllib2;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_http;
static PyObject *const_tuple_f244386c72c18ea209eb4e948f187b75_tuple;
static PyObject *const_str_plain_numeric_types;
extern PyObject *const_tuple_str_plain_OrderedDict_tuple;
extern PyObject *const_str_plain_Morsel;
extern PyObject *const_str_plain_is_py2;
static PyObject *const_tuple_b0962ea1634803d180df4bf36a08af2e_tuple;
extern PyObject *const_str_plain_quote_plus;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_tuple_str_plain_StringIO_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_StringIO_tuple, 0, const_str_plain_StringIO); Py_INCREF(const_str_plain_StringIO);
    const_tuple_1a6551445f1104e3b9dd672b8d5e0ed7_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_1a6551445f1104e3b9dd672b8d5e0ed7_tuple, 0, const_str_plain_urlparse); Py_INCREF(const_str_plain_urlparse);
    PyTuple_SET_ITEM(const_tuple_1a6551445f1104e3b9dd672b8d5e0ed7_tuple, 1, const_str_plain_urlunparse); Py_INCREF(const_str_plain_urlunparse);
    PyTuple_SET_ITEM(const_tuple_1a6551445f1104e3b9dd672b8d5e0ed7_tuple, 2, const_str_plain_urljoin); Py_INCREF(const_str_plain_urljoin);
    PyTuple_SET_ITEM(const_tuple_1a6551445f1104e3b9dd672b8d5e0ed7_tuple, 3, const_str_plain_urlsplit); Py_INCREF(const_str_plain_urlsplit);
    PyTuple_SET_ITEM(const_tuple_1a6551445f1104e3b9dd672b8d5e0ed7_tuple, 4, const_str_plain_urldefrag); Py_INCREF(const_str_plain_urldefrag);
    const_str_digest_4e6c5647deaab37416af757b77d767ca = UNSTREAM_STRING_ASCII(&constant_bin[ 645636 ], 57, 0);
    const_str_digest_6a637a9794822b04b9cdf038e4318394 = UNSTREAM_STRING_ASCII(&constant_bin[ 645693 ], 113, 0);
    const_str_plain__ver = UNSTREAM_STRING_ASCII(&constant_bin[ 10428 ], 4, 1);
    const_tuple_str_plain_cookiejar_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_cookiejar_tuple, 0, const_str_plain_cookiejar); Py_INCREF(const_str_plain_cookiejar);
    const_tuple_str_plain_Morsel_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_Morsel_tuple, 0, const_str_plain_Morsel); Py_INCREF(const_str_plain_Morsel);
    const_str_digest_05642becbbbe29affa5245f2742ae8ed = UNSTREAM_STRING_ASCII(&constant_bin[ 645806 ], 24, 0);
    const_tuple_type_int_type_float_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_type_int_type_float_tuple, 0, (PyObject *)&PyLong_Type); Py_INCREF((PyObject *)&PyLong_Type);
    PyTuple_SET_ITEM(const_tuple_type_int_type_float_tuple, 1, (PyObject *)&PyFloat_Type); Py_INCREF((PyObject *)&PyFloat_Type);
    const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple = PyTuple_New(10);
    PyTuple_SET_ITEM(const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, 0, const_str_plain_urlparse); Py_INCREF(const_str_plain_urlparse);
    PyTuple_SET_ITEM(const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, 1, const_str_plain_urlunparse); Py_INCREF(const_str_plain_urlunparse);
    PyTuple_SET_ITEM(const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, 2, const_str_plain_urljoin); Py_INCREF(const_str_plain_urljoin);
    PyTuple_SET_ITEM(const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, 3, const_str_plain_urlsplit); Py_INCREF(const_str_plain_urlsplit);
    PyTuple_SET_ITEM(const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, 4, const_str_plain_urlencode); Py_INCREF(const_str_plain_urlencode);
    PyTuple_SET_ITEM(const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, 5, const_str_plain_quote); Py_INCREF(const_str_plain_quote);
    PyTuple_SET_ITEM(const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, 6, const_str_plain_unquote); Py_INCREF(const_str_plain_unquote);
    PyTuple_SET_ITEM(const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, 7, const_str_plain_quote_plus); Py_INCREF(const_str_plain_quote_plus);
    PyTuple_SET_ITEM(const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, 8, const_str_plain_unquote_plus); Py_INCREF(const_str_plain_unquote_plus);
    PyTuple_SET_ITEM(const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple, 9, const_str_plain_urldefrag); Py_INCREF(const_str_plain_urldefrag);
    const_tuple_88d1e79e25c6a2b1eddcdc1d57101770_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_88d1e79e25c6a2b1eddcdc1d57101770_tuple, 0, const_str_plain_Callable); Py_INCREF(const_str_plain_Callable);
    PyTuple_SET_ITEM(const_tuple_88d1e79e25c6a2b1eddcdc1d57101770_tuple, 1, const_str_plain_Mapping); Py_INCREF(const_str_plain_Mapping);
    PyTuple_SET_ITEM(const_tuple_88d1e79e25c6a2b1eddcdc1d57101770_tuple, 2, const_str_plain_MutableMapping); Py_INCREF(const_str_plain_MutableMapping);
    const_str_plain_simplejson = UNSTREAM_STRING_ASCII(&constant_bin[ 645830 ], 10, 1);
    const_tuple_673ccc048b129117fb3f0c8627a50718_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_673ccc048b129117fb3f0c8627a50718_tuple, 0, const_str_plain_parse_http_list); Py_INCREF(const_str_plain_parse_http_list);
    PyTuple_SET_ITEM(const_tuple_673ccc048b129117fb3f0c8627a50718_tuple, 1, const_str_plain_getproxies); Py_INCREF(const_str_plain_getproxies);
    PyTuple_SET_ITEM(const_tuple_673ccc048b129117fb3f0c8627a50718_tuple, 2, const_str_plain_proxy_bypass); Py_INCREF(const_str_plain_proxy_bypass);
    PyTuple_SET_ITEM(const_tuple_673ccc048b129117fb3f0c8627a50718_tuple, 3, const_str_plain_proxy_bypass_environment); Py_INCREF(const_str_plain_proxy_bypass_environment);
    PyTuple_SET_ITEM(const_tuple_673ccc048b129117fb3f0c8627a50718_tuple, 4, const_str_plain_getproxies_environment); Py_INCREF(const_str_plain_getproxies_environment);
    const_tuple_f244386c72c18ea209eb4e948f187b75_tuple = PyTuple_New(9);
    PyTuple_SET_ITEM(const_tuple_f244386c72c18ea209eb4e948f187b75_tuple, 0, const_str_plain_quote); Py_INCREF(const_str_plain_quote);
    PyTuple_SET_ITEM(const_tuple_f244386c72c18ea209eb4e948f187b75_tuple, 1, const_str_plain_unquote); Py_INCREF(const_str_plain_unquote);
    PyTuple_SET_ITEM(const_tuple_f244386c72c18ea209eb4e948f187b75_tuple, 2, const_str_plain_quote_plus); Py_INCREF(const_str_plain_quote_plus);
    PyTuple_SET_ITEM(const_tuple_f244386c72c18ea209eb4e948f187b75_tuple, 3, const_str_plain_unquote_plus); Py_INCREF(const_str_plain_unquote_plus);
    PyTuple_SET_ITEM(const_tuple_f244386c72c18ea209eb4e948f187b75_tuple, 4, const_str_plain_urlencode); Py_INCREF(const_str_plain_urlencode);
    PyTuple_SET_ITEM(const_tuple_f244386c72c18ea209eb4e948f187b75_tuple, 5, const_str_plain_getproxies); Py_INCREF(const_str_plain_getproxies);
    PyTuple_SET_ITEM(const_tuple_f244386c72c18ea209eb4e948f187b75_tuple, 6, const_str_plain_proxy_bypass); Py_INCREF(const_str_plain_proxy_bypass);
    PyTuple_SET_ITEM(const_tuple_f244386c72c18ea209eb4e948f187b75_tuple, 7, const_str_plain_proxy_bypass_environment); Py_INCREF(const_str_plain_proxy_bypass_environment);
    PyTuple_SET_ITEM(const_tuple_f244386c72c18ea209eb4e948f187b75_tuple, 8, const_str_plain_getproxies_environment); Py_INCREF(const_str_plain_getproxies_environment);
    const_str_plain_numeric_types = UNSTREAM_STRING_ASCII(&constant_bin[ 645840 ], 13, 1);
    const_tuple_b0962ea1634803d180df4bf36a08af2e_tuple = PyTuple_New(4);
    PyTuple_SET_ITEM(const_tuple_b0962ea1634803d180df4bf36a08af2e_tuple, 0, const_str_plain_Callable); Py_INCREF(const_str_plain_Callable);
    PyTuple_SET_ITEM(const_tuple_b0962ea1634803d180df4bf36a08af2e_tuple, 1, const_str_plain_Mapping); Py_INCREF(const_str_plain_Mapping);
    PyTuple_SET_ITEM(const_tuple_b0962ea1634803d180df4bf36a08af2e_tuple, 2, const_str_plain_MutableMapping); Py_INCREF(const_str_plain_MutableMapping);
    PyTuple_SET_ITEM(const_tuple_b0962ea1634803d180df4bf36a08af2e_tuple, 3, const_str_plain_OrderedDict); Py_INCREF(const_str_plain_OrderedDict);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$compat(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_0b2c1593cceffe2ce66186b68dcf0f3f;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_4e6c5647deaab37416af757b77d767ca;
    codeobj_0b2c1593cceffe2ce66186b68dcf0f3f = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_05642becbbbe29affa5245f2742ae8ed, const_tuple_empty, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$compat =
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

function_impl_code functable_requests$compat[] = {

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

    function_impl_code *current = functable_requests$compat;
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

    if (offset > sizeof(functable_requests$compat) || offset < 0) {
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
        functable_requests$compat[offset],
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
        module_requests$compat,
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
PyObject *modulecode_requests$compat(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_requests$compat;
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
    PRINT_STRING("requests.compat: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("requests.compat: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("requests.compat: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initrequests$compat\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$compat = Py_InitModule4(
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
    mdef_requests$compat.m_name = module_full_name;
    module_requests$compat = PyModule_Create(&mdef_requests$compat);
#endif

    moduledict_requests$compat = MODULE_DICT(module_requests$compat);

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
        moduledict_requests$compat,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_requests$compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_requests$compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_requests$compat);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_requests$compat);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_0b2c1593cceffe2ce66186b68dcf0f3f;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_6a637a9794822b04b9cdf038e4318394;
        UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_4e6c5647deaab37416af757b77d767ca;
        UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_0b2c1593cceffe2ce66186b68dcf0f3f = MAKE_MODULE_FRAME(codeobj_0b2c1593cceffe2ce66186b68dcf0f3f, module_requests$compat);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_0b2c1593cceffe2ce66186b68dcf0f3f);
    assert(Py_REFCNT(frame_0b2c1593cceffe2ce66186b68dcf0f3f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_4e6c5647deaab37416af757b77d767ca;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_chardet;
        tmp_globals_name_1 = (PyObject *)moduledict_requests$compat;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_0b2c1593cceffe2ce66186b68dcf0f3f->m_frame.f_lineno = 11;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_chardet, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_sys;
        tmp_globals_name_2 = (PyObject *)moduledict_requests$compat;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_0b2c1593cceffe2ce66186b68dcf0f3f->m_frame.f_lineno = 13;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_sys);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sys);
        }

        CHECK_OBJECT(tmp_mvar_value_3);
        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain_version_info);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain__ver, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain__ver);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__ver);
        }

        CHECK_OBJECT(tmp_mvar_value_4);
        tmp_subscribed_name_1 = tmp_mvar_value_4;
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_1, tmp_subscript_name_1, 0);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_assign_source_7 = RICH_COMPARE_EQ_OBJECT_OBJECT_NORECURSE(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_is_py2, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_subscript_name_2;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain__ver);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain__ver);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 21466 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 26;

            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_2 = tmp_mvar_value_5;
        tmp_subscript_name_2 = const_int_0;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_subscribed_name_2, tmp_subscript_name_2, 0);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_3;
        tmp_assign_source_8 = RICH_COMPARE_EQ_OBJECT_OBJECT_NORECURSE(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_is_py3, tmp_assign_source_8);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_simplejson;
        tmp_globals_name_3 = (PyObject *)moduledict_requests$compat;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_0b2c1593cceffe2ce66186b68dcf0f3f->m_frame.f_lineno = 29;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_json, tmp_assign_source_9);
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_0b2c1593cceffe2ce66186b68dcf0f3f, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_0b2c1593cceffe2ce66186b68dcf0f3f, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    PyException_SetTraceback(exception_keeper_value_1, (PyObject *)exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_3 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

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
            PyObject *tmp_name_name_4;
            PyObject *tmp_globals_name_4;
            PyObject *tmp_locals_name_4;
            PyObject *tmp_fromlist_name_4;
            PyObject *tmp_level_name_4;
            tmp_name_name_4 = const_str_plain_json;
            tmp_globals_name_4 = (PyObject *)moduledict_requests$compat;
            tmp_locals_name_4 = Py_None;
            tmp_fromlist_name_4 = Py_None;
            tmp_level_name_4 = const_int_0;
            frame_0b2c1593cceffe2ce66186b68dcf0f3f->m_frame.f_lineno = 31;
            tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto try_except_handler_2;
            }
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_json, tmp_assign_source_10);
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        if (unlikely(tmp_result == false)) {
            exception_lineno = 28;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_0b2c1593cceffe2ce66186b68dcf0f3f->m_frame) frame_0b2c1593cceffe2ce66186b68dcf0f3f->m_frame.f_lineno = exception_tb->tb_lineno;

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
    NUITKA_CANNOT_GET_HERE(requests$compat);
    return NULL;
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_mvar_value_6;
        int tmp_truth_name_1;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_is_py2);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_is_py2);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 19455 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_6);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_name_name_5;
            PyObject *tmp_globals_name_5;
            PyObject *tmp_locals_name_5;
            PyObject *tmp_fromlist_name_5;
            PyObject *tmp_level_name_5;
            tmp_name_name_5 = const_str_plain_urllib;
            tmp_globals_name_5 = (PyObject *)moduledict_requests$compat;
            tmp_locals_name_5 = Py_None;
            tmp_fromlist_name_5 = const_tuple_f244386c72c18ea209eb4e948f187b75_tuple;
            tmp_level_name_5 = const_int_0;
            frame_0b2c1593cceffe2ce66186b68dcf0f3f->m_frame.f_lineno = 38;
            tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto frame_exception_exit_1;
            }
            assert(tmp_import_from_1__module == NULL);
            tmp_import_from_1__module = tmp_assign_source_11;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_import_name_from_1;
            CHECK_OBJECT(tmp_import_from_1__module);
            tmp_import_name_from_1 = tmp_import_from_1__module;
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_quote);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_3;
            }
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_quote, tmp_assign_source_12);
        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_import_name_from_2;
            CHECK_OBJECT(tmp_import_from_1__module);
            tmp_import_name_from_2 = tmp_import_from_1__module;
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_unquote);
            if (tmp_assign_source_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_3;
            }
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_unquote, tmp_assign_source_13);
        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_import_name_from_3;
            CHECK_OBJECT(tmp_import_from_1__module);
            tmp_import_name_from_3 = tmp_import_from_1__module;
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_quote_plus);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_3;
            }
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_quote_plus, tmp_assign_source_14);
        }
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_import_name_from_4;
            CHECK_OBJECT(tmp_import_from_1__module);
            tmp_import_name_from_4 = tmp_import_from_1__module;
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_unquote_plus);
            if (tmp_assign_source_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_3;
            }
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_unquote_plus, tmp_assign_source_15);
        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_import_name_from_5;
            CHECK_OBJECT(tmp_import_from_1__module);
            tmp_import_name_from_5 = tmp_import_from_1__module;
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_urlencode);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_3;
            }
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_urlencode, tmp_assign_source_16);
        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_import_name_from_6;
            CHECK_OBJECT(tmp_import_from_1__module);
            tmp_import_name_from_6 = tmp_import_from_1__module;
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_getproxies);
            if (tmp_assign_source_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_3;
            }
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_getproxies, tmp_assign_source_17);
        }
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_import_name_from_7;
            CHECK_OBJECT(tmp_import_from_1__module);
            tmp_import_name_from_7 = tmp_import_from_1__module;
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_proxy_bypass);
            if (tmp_assign_source_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_3;
            }
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_proxy_bypass, tmp_assign_source_18);
        }
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_import_name_from_8;
            CHECK_OBJECT(tmp_import_from_1__module);
            tmp_import_name_from_8 = tmp_import_from_1__module;
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_proxy_bypass_environment);
            if (tmp_assign_source_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_3;
            }
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_proxy_bypass_environment, tmp_assign_source_19);
        }
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_import_name_from_9;
            CHECK_OBJECT(tmp_import_from_1__module);
            tmp_import_name_from_9 = tmp_import_from_1__module;
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain_getproxies_environment);
            if (tmp_assign_source_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto try_except_handler_3;
            }
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_getproxies_environment, tmp_assign_source_20);
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

        CHECK_OBJECT((PyObject *)tmp_import_from_1__module);
        Py_DECREF(tmp_import_from_1__module);
        tmp_import_from_1__module = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_1;
        // End of try:
        try_end_3:;
        CHECK_OBJECT((PyObject *)tmp_import_from_1__module);
        Py_DECREF(tmp_import_from_1__module);
        tmp_import_from_1__module = NULL;

        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_name_name_6;
            PyObject *tmp_globals_name_6;
            PyObject *tmp_locals_name_6;
            PyObject *tmp_fromlist_name_6;
            PyObject *tmp_level_name_6;
            tmp_name_name_6 = const_str_plain_urlparse;
            tmp_globals_name_6 = (PyObject *)moduledict_requests$compat;
            tmp_locals_name_6 = Py_None;
            tmp_fromlist_name_6 = const_tuple_1a6551445f1104e3b9dd672b8d5e0ed7_tuple;
            tmp_level_name_6 = const_int_0;
            frame_0b2c1593cceffe2ce66186b68dcf0f3f->m_frame.f_lineno = 41;
            tmp_assign_source_21 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6);
            if (tmp_assign_source_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto frame_exception_exit_1;
            }
            assert(tmp_import_from_2__module == NULL);
            tmp_import_from_2__module = tmp_assign_source_21;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_import_name_from_10;
            CHECK_OBJECT(tmp_import_from_2__module);
            tmp_import_name_from_10 = tmp_import_from_2__module;
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_10, const_str_plain_urlparse);
            if (tmp_assign_source_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto try_except_handler_4;
            }
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_urlparse, tmp_assign_source_22);
        }
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_import_name_from_11;
            CHECK_OBJECT(tmp_import_from_2__module);
            tmp_import_name_from_11 = tmp_import_from_2__module;
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_11, const_str_plain_urlunparse);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto try_except_handler_4;
            }
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_urlunparse, tmp_assign_source_23);
        }
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_import_name_from_12;
            CHECK_OBJECT(tmp_import_from_2__module);
            tmp_import_name_from_12 = tmp_import_from_2__module;
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_12, const_str_plain_urljoin);
            if (tmp_assign_source_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto try_except_handler_4;
            }
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_urljoin, tmp_assign_source_24);
        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_import_name_from_13;
            CHECK_OBJECT(tmp_import_from_2__module);
            tmp_import_name_from_13 = tmp_import_from_2__module;
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_13, const_str_plain_urlsplit);
            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto try_except_handler_4;
            }
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_urlsplit, tmp_assign_source_25);
        }
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_import_name_from_14;
            CHECK_OBJECT(tmp_import_from_2__module);
            tmp_import_name_from_14 = tmp_import_from_2__module;
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_14, const_str_plain_urldefrag);
            if (tmp_assign_source_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto try_except_handler_4;
            }
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_urldefrag, tmp_assign_source_26);
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

        CHECK_OBJECT((PyObject *)tmp_import_from_2__module);
        Py_DECREF(tmp_import_from_2__module);
        tmp_import_from_2__module = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        CHECK_OBJECT((PyObject *)tmp_import_from_2__module);
        Py_DECREF(tmp_import_from_2__module);
        tmp_import_from_2__module = NULL;

        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_import_name_from_15;
            PyObject *tmp_name_name_7;
            PyObject *tmp_globals_name_7;
            PyObject *tmp_locals_name_7;
            PyObject *tmp_fromlist_name_7;
            PyObject *tmp_level_name_7;
            tmp_name_name_7 = const_str_plain_urllib2;
            tmp_globals_name_7 = (PyObject *)moduledict_requests$compat;
            tmp_locals_name_7 = Py_None;
            tmp_fromlist_name_7 = const_tuple_str_plain_parse_http_list_tuple;
            tmp_level_name_7 = const_int_0;
            frame_0b2c1593cceffe2ce66186b68dcf0f3f->m_frame.f_lineno = 42;
            tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7);
            if (tmp_import_name_from_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto frame_exception_exit_1;
            }
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_15, const_str_plain_parse_http_list);
            Py_DECREF(tmp_import_name_from_15);
            if (tmp_assign_source_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_parse_http_list, tmp_assign_source_27);
        }
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_name_name_8;
            PyObject *tmp_globals_name_8;
            PyObject *tmp_locals_name_8;
            PyObject *tmp_fromlist_name_8;
            PyObject *tmp_level_name_8;
            tmp_name_name_8 = const_str_plain_cookielib;
            tmp_globals_name_8 = (PyObject *)moduledict_requests$compat;
            tmp_locals_name_8 = Py_None;
            tmp_fromlist_name_8 = Py_None;
            tmp_level_name_8 = const_int_0;
            frame_0b2c1593cceffe2ce66186b68dcf0f3f->m_frame.f_lineno = 43;
            tmp_assign_source_28 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_cookielib, tmp_assign_source_28);
        }
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_import_name_from_16;
            PyObject *tmp_name_name_9;
            PyObject *tmp_globals_name_9;
            PyObject *tmp_locals_name_9;
            PyObject *tmp_fromlist_name_9;
            PyObject *tmp_level_name_9;
            tmp_name_name_9 = const_str_plain_Cookie;
            tmp_globals_name_9 = (PyObject *)moduledict_requests$compat;
            tmp_locals_name_9 = Py_None;
            tmp_fromlist_name_9 = const_tuple_str_plain_Morsel_tuple;
            tmp_level_name_9 = const_int_0;
            frame_0b2c1593cceffe2ce66186b68dcf0f3f->m_frame.f_lineno = 44;
            tmp_import_name_from_16 = IMPORT_MODULE5(tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9);
            if (tmp_import_name_from_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto frame_exception_exit_1;
            }
            tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_16, const_str_plain_Morsel);
            Py_DECREF(tmp_import_name_from_16);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_Morsel, tmp_assign_source_29);
        }
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_import_name_from_17;
            PyObject *tmp_name_name_10;
            PyObject *tmp_globals_name_10;
            PyObject *tmp_locals_name_10;
            PyObject *tmp_fromlist_name_10;
            PyObject *tmp_level_name_10;
            tmp_name_name_10 = const_str_plain_StringIO;
            tmp_globals_name_10 = (PyObject *)moduledict_requests$compat;
            tmp_locals_name_10 = Py_None;
            tmp_fromlist_name_10 = const_tuple_str_plain_StringIO_tuple;
            tmp_level_name_10 = const_int_0;
            frame_0b2c1593cceffe2ce66186b68dcf0f3f->m_frame.f_lineno = 45;
            tmp_import_name_from_17 = IMPORT_MODULE5(tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10);
            if (tmp_import_name_from_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto frame_exception_exit_1;
            }
            tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_17, const_str_plain_StringIO);
            Py_DECREF(tmp_import_name_from_17);
            if (tmp_assign_source_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_StringIO, tmp_assign_source_30);
        }
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_name_name_11;
            PyObject *tmp_globals_name_11;
            PyObject *tmp_locals_name_11;
            PyObject *tmp_fromlist_name_11;
            PyObject *tmp_level_name_11;
            tmp_name_name_11 = const_str_plain_collections;
            tmp_globals_name_11 = (PyObject *)moduledict_requests$compat;
            tmp_locals_name_11 = Py_None;
            tmp_fromlist_name_11 = const_tuple_b0962ea1634803d180df4bf36a08af2e_tuple;
            tmp_level_name_11 = const_int_0;
            frame_0b2c1593cceffe2ce66186b68dcf0f3f->m_frame.f_lineno = 46;
            tmp_assign_source_31 = IMPORT_MODULE5(tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11);
            if (tmp_assign_source_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto frame_exception_exit_1;
            }
            assert(tmp_import_from_3__module == NULL);
            tmp_import_from_3__module = tmp_assign_source_31;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_import_name_from_18;
            CHECK_OBJECT(tmp_import_from_3__module);
            tmp_import_name_from_18 = tmp_import_from_3__module;
            tmp_assign_source_32 = IMPORT_NAME(tmp_import_name_from_18, const_str_plain_Callable);
            if (tmp_assign_source_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto try_except_handler_5;
            }
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_Callable, tmp_assign_source_32);
        }
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_import_name_from_19;
            CHECK_OBJECT(tmp_import_from_3__module);
            tmp_import_name_from_19 = tmp_import_from_3__module;
            tmp_assign_source_33 = IMPORT_NAME(tmp_import_name_from_19, const_str_plain_Mapping);
            if (tmp_assign_source_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto try_except_handler_5;
            }
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_Mapping, tmp_assign_source_33);
        }
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_import_name_from_20;
            CHECK_OBJECT(tmp_import_from_3__module);
            tmp_import_name_from_20 = tmp_import_from_3__module;
            tmp_assign_source_34 = IMPORT_NAME(tmp_import_name_from_20, const_str_plain_MutableMapping);
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto try_except_handler_5;
            }
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_MutableMapping, tmp_assign_source_34);
        }
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_import_name_from_21;
            CHECK_OBJECT(tmp_import_from_3__module);
            tmp_import_name_from_21 = tmp_import_from_3__module;
            tmp_assign_source_35 = IMPORT_NAME(tmp_import_name_from_21, const_str_plain_OrderedDict);
            if (tmp_assign_source_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto try_except_handler_5;
            }
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_OrderedDict, tmp_assign_source_35);
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

        CHECK_OBJECT((PyObject *)tmp_import_from_3__module);
        Py_DECREF(tmp_import_from_3__module);
        tmp_import_from_3__module = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_1;
        // End of try:
        try_end_5:;
        CHECK_OBJECT((PyObject *)tmp_import_from_3__module);
        Py_DECREF(tmp_import_from_3__module);
        tmp_import_from_3__module = NULL;

        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_str);

            if (unlikely(tmp_mvar_value_7 == NULL)) {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_str);
            }

            if (tmp_mvar_value_7 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 15520 ], 25, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 49;

                goto frame_exception_exit_1;
            }

            tmp_assign_source_36 = tmp_mvar_value_7;
            UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_builtin_str, tmp_assign_source_36);
        }
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_mvar_value_8;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_str);

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

                exception_lineno = 50;

                goto frame_exception_exit_1;
            }

            tmp_assign_source_37 = tmp_mvar_value_8;
            UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_bytes, tmp_assign_source_37);
        }
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_mvar_value_9;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_unicode);

            if (unlikely(tmp_mvar_value_9 == NULL)) {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode);
            }

            if (tmp_mvar_value_9 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 647 ], 29, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 51;

                goto frame_exception_exit_1;
            }

            tmp_assign_source_38 = tmp_mvar_value_9;
            UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_str, tmp_assign_source_38);
        }
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_mvar_value_10;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_basestring);

            if (unlikely(tmp_mvar_value_10 == NULL)) {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring);
            }

            if (tmp_mvar_value_10 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 19881 ], 32, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 52;

                goto frame_exception_exit_1;
            }

            tmp_assign_source_39 = tmp_mvar_value_10;
            UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_basestring, tmp_assign_source_39);
        }
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_mvar_value_11;
            tmp_tuple_element_1 = (PyObject *)&PyLong_Type;
            tmp_assign_source_40 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_assign_source_40, 0, tmp_tuple_element_1);
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_long);

            if (unlikely(tmp_mvar_value_11 == NULL)) {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_long);
            }

            if (tmp_mvar_value_11 == NULL) {
                Py_DECREF(tmp_assign_source_40);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 7283 ], 26, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 53;

                goto frame_exception_exit_1;
            }

            tmp_tuple_element_1 = tmp_mvar_value_11;
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_assign_source_40, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = (PyObject *)&PyFloat_Type;
            Py_INCREF(tmp_tuple_element_1);
            PyTuple_SET_ITEM(tmp_assign_source_40, 2, tmp_tuple_element_1);
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_numeric_types, tmp_assign_source_40);
        }
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_mvar_value_12;
            tmp_tuple_element_2 = (PyObject *)&PyLong_Type;
            tmp_assign_source_41 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_assign_source_41, 0, tmp_tuple_element_2);
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_long);

            if (unlikely(tmp_mvar_value_12 == NULL)) {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_long);
            }

            if (tmp_mvar_value_12 == NULL) {
                Py_DECREF(tmp_assign_source_41);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 7283 ], 26, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 54;

                goto frame_exception_exit_1;
            }

            tmp_tuple_element_2 = tmp_mvar_value_12;
            Py_INCREF(tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_assign_source_41, 1, tmp_tuple_element_2);
            UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_41);
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_mvar_value_13;
            int tmp_truth_name_2;
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_is_py3);

            if (unlikely(tmp_mvar_value_13 == NULL)) {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_is_py3);
            }

            if (tmp_mvar_value_13 == NULL) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 21492 ], 28, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 56;

                goto frame_exception_exit_1;
            }

            tmp_truth_name_2 = CHECK_IF_TRUE(tmp_mvar_value_13);
            if (tmp_truth_name_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_assign_source_42;
                PyObject *tmp_name_name_12;
                PyObject *tmp_globals_name_12;
                PyObject *tmp_locals_name_12;
                PyObject *tmp_fromlist_name_12;
                PyObject *tmp_level_name_12;
                tmp_name_name_12 = const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
                tmp_globals_name_12 = (PyObject *)moduledict_requests$compat;
                tmp_locals_name_12 = Py_None;
                tmp_fromlist_name_12 = const_tuple_425a148e6e9ebba9710bda982eb03f84_tuple;
                tmp_level_name_12 = const_int_0;
                frame_0b2c1593cceffe2ce66186b68dcf0f3f->m_frame.f_lineno = 57;
                tmp_assign_source_42 = IMPORT_MODULE5(tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12);
                if (tmp_assign_source_42 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 57;

                    goto frame_exception_exit_1;
                }
                assert(tmp_import_from_4__module == NULL);
                tmp_import_from_4__module = tmp_assign_source_42;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_43;
                PyObject *tmp_import_name_from_22;
                CHECK_OBJECT(tmp_import_from_4__module);
                tmp_import_name_from_22 = tmp_import_from_4__module;
                tmp_assign_source_43 = IMPORT_NAME(tmp_import_name_from_22, const_str_plain_urlparse);
                if (tmp_assign_source_43 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 57;

                    goto try_except_handler_6;
                }
                UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_urlparse, tmp_assign_source_43);
            }
            {
                PyObject *tmp_assign_source_44;
                PyObject *tmp_import_name_from_23;
                CHECK_OBJECT(tmp_import_from_4__module);
                tmp_import_name_from_23 = tmp_import_from_4__module;
                tmp_assign_source_44 = IMPORT_NAME(tmp_import_name_from_23, const_str_plain_urlunparse);
                if (tmp_assign_source_44 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 57;

                    goto try_except_handler_6;
                }
                UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_urlunparse, tmp_assign_source_44);
            }
            {
                PyObject *tmp_assign_source_45;
                PyObject *tmp_import_name_from_24;
                CHECK_OBJECT(tmp_import_from_4__module);
                tmp_import_name_from_24 = tmp_import_from_4__module;
                tmp_assign_source_45 = IMPORT_NAME(tmp_import_name_from_24, const_str_plain_urljoin);
                if (tmp_assign_source_45 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 57;

                    goto try_except_handler_6;
                }
                UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_urljoin, tmp_assign_source_45);
            }
            {
                PyObject *tmp_assign_source_46;
                PyObject *tmp_import_name_from_25;
                CHECK_OBJECT(tmp_import_from_4__module);
                tmp_import_name_from_25 = tmp_import_from_4__module;
                tmp_assign_source_46 = IMPORT_NAME(tmp_import_name_from_25, const_str_plain_urlsplit);
                if (tmp_assign_source_46 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 57;

                    goto try_except_handler_6;
                }
                UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_urlsplit, tmp_assign_source_46);
            }
            {
                PyObject *tmp_assign_source_47;
                PyObject *tmp_import_name_from_26;
                CHECK_OBJECT(tmp_import_from_4__module);
                tmp_import_name_from_26 = tmp_import_from_4__module;
                tmp_assign_source_47 = IMPORT_NAME(tmp_import_name_from_26, const_str_plain_urlencode);
                if (tmp_assign_source_47 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 57;

                    goto try_except_handler_6;
                }
                UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_urlencode, tmp_assign_source_47);
            }
            {
                PyObject *tmp_assign_source_48;
                PyObject *tmp_import_name_from_27;
                CHECK_OBJECT(tmp_import_from_4__module);
                tmp_import_name_from_27 = tmp_import_from_4__module;
                tmp_assign_source_48 = IMPORT_NAME(tmp_import_name_from_27, const_str_plain_quote);
                if (tmp_assign_source_48 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 57;

                    goto try_except_handler_6;
                }
                UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_quote, tmp_assign_source_48);
            }
            {
                PyObject *tmp_assign_source_49;
                PyObject *tmp_import_name_from_28;
                CHECK_OBJECT(tmp_import_from_4__module);
                tmp_import_name_from_28 = tmp_import_from_4__module;
                tmp_assign_source_49 = IMPORT_NAME(tmp_import_name_from_28, const_str_plain_unquote);
                if (tmp_assign_source_49 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 57;

                    goto try_except_handler_6;
                }
                UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_unquote, tmp_assign_source_49);
            }
            {
                PyObject *tmp_assign_source_50;
                PyObject *tmp_import_name_from_29;
                CHECK_OBJECT(tmp_import_from_4__module);
                tmp_import_name_from_29 = tmp_import_from_4__module;
                tmp_assign_source_50 = IMPORT_NAME(tmp_import_name_from_29, const_str_plain_quote_plus);
                if (tmp_assign_source_50 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 57;

                    goto try_except_handler_6;
                }
                UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_quote_plus, tmp_assign_source_50);
            }
            {
                PyObject *tmp_assign_source_51;
                PyObject *tmp_import_name_from_30;
                CHECK_OBJECT(tmp_import_from_4__module);
                tmp_import_name_from_30 = tmp_import_from_4__module;
                tmp_assign_source_51 = IMPORT_NAME(tmp_import_name_from_30, const_str_plain_unquote_plus);
                if (tmp_assign_source_51 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 57;

                    goto try_except_handler_6;
                }
                UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_unquote_plus, tmp_assign_source_51);
            }
            {
                PyObject *tmp_assign_source_52;
                PyObject *tmp_import_name_from_31;
                CHECK_OBJECT(tmp_import_from_4__module);
                tmp_import_name_from_31 = tmp_import_from_4__module;
                tmp_assign_source_52 = IMPORT_NAME(tmp_import_name_from_31, const_str_plain_urldefrag);
                if (tmp_assign_source_52 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 57;

                    goto try_except_handler_6;
                }
                UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_urldefrag, tmp_assign_source_52);
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

            CHECK_OBJECT((PyObject *)tmp_import_from_4__module);
            Py_DECREF(tmp_import_from_4__module);
            tmp_import_from_4__module = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_6;
            exception_value = exception_keeper_value_6;
            exception_tb = exception_keeper_tb_6;
            exception_lineno = exception_keeper_lineno_6;

            goto frame_exception_exit_1;
            // End of try:
            try_end_6:;
            CHECK_OBJECT((PyObject *)tmp_import_from_4__module);
            Py_DECREF(tmp_import_from_4__module);
            tmp_import_from_4__module = NULL;

            {
                PyObject *tmp_assign_source_53;
                PyObject *tmp_name_name_13;
                PyObject *tmp_globals_name_13;
                PyObject *tmp_locals_name_13;
                PyObject *tmp_fromlist_name_13;
                PyObject *tmp_level_name_13;
                tmp_name_name_13 = const_str_digest_59bc9c95777e64e4720c3af0837aec42;
                tmp_globals_name_13 = (PyObject *)moduledict_requests$compat;
                tmp_locals_name_13 = Py_None;
                tmp_fromlist_name_13 = const_tuple_673ccc048b129117fb3f0c8627a50718_tuple;
                tmp_level_name_13 = const_int_0;
                frame_0b2c1593cceffe2ce66186b68dcf0f3f->m_frame.f_lineno = 58;
                tmp_assign_source_53 = IMPORT_MODULE5(tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13);
                if (tmp_assign_source_53 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 58;

                    goto frame_exception_exit_1;
                }
                assert(tmp_import_from_5__module == NULL);
                tmp_import_from_5__module = tmp_assign_source_53;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_54;
                PyObject *tmp_import_name_from_32;
                CHECK_OBJECT(tmp_import_from_5__module);
                tmp_import_name_from_32 = tmp_import_from_5__module;
                tmp_assign_source_54 = IMPORT_NAME(tmp_import_name_from_32, const_str_plain_parse_http_list);
                if (tmp_assign_source_54 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 58;

                    goto try_except_handler_7;
                }
                UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_parse_http_list, tmp_assign_source_54);
            }
            {
                PyObject *tmp_assign_source_55;
                PyObject *tmp_import_name_from_33;
                CHECK_OBJECT(tmp_import_from_5__module);
                tmp_import_name_from_33 = tmp_import_from_5__module;
                tmp_assign_source_55 = IMPORT_NAME(tmp_import_name_from_33, const_str_plain_getproxies);
                if (tmp_assign_source_55 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 58;

                    goto try_except_handler_7;
                }
                UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_getproxies, tmp_assign_source_55);
            }
            {
                PyObject *tmp_assign_source_56;
                PyObject *tmp_import_name_from_34;
                CHECK_OBJECT(tmp_import_from_5__module);
                tmp_import_name_from_34 = tmp_import_from_5__module;
                tmp_assign_source_56 = IMPORT_NAME(tmp_import_name_from_34, const_str_plain_proxy_bypass);
                if (tmp_assign_source_56 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 58;

                    goto try_except_handler_7;
                }
                UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_proxy_bypass, tmp_assign_source_56);
            }
            {
                PyObject *tmp_assign_source_57;
                PyObject *tmp_import_name_from_35;
                CHECK_OBJECT(tmp_import_from_5__module);
                tmp_import_name_from_35 = tmp_import_from_5__module;
                tmp_assign_source_57 = IMPORT_NAME(tmp_import_name_from_35, const_str_plain_proxy_bypass_environment);
                if (tmp_assign_source_57 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 58;

                    goto try_except_handler_7;
                }
                UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_proxy_bypass_environment, tmp_assign_source_57);
            }
            {
                PyObject *tmp_assign_source_58;
                PyObject *tmp_import_name_from_36;
                CHECK_OBJECT(tmp_import_from_5__module);
                tmp_import_name_from_36 = tmp_import_from_5__module;
                tmp_assign_source_58 = IMPORT_NAME(tmp_import_name_from_36, const_str_plain_getproxies_environment);
                if (tmp_assign_source_58 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 58;

                    goto try_except_handler_7;
                }
                UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_getproxies_environment, tmp_assign_source_58);
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

            CHECK_OBJECT((PyObject *)tmp_import_from_5__module);
            Py_DECREF(tmp_import_from_5__module);
            tmp_import_from_5__module = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_7;
            exception_value = exception_keeper_value_7;
            exception_tb = exception_keeper_tb_7;
            exception_lineno = exception_keeper_lineno_7;

            goto frame_exception_exit_1;
            // End of try:
            try_end_7:;
            CHECK_OBJECT((PyObject *)tmp_import_from_5__module);
            Py_DECREF(tmp_import_from_5__module);
            tmp_import_from_5__module = NULL;

            {
                PyObject *tmp_assign_source_59;
                PyObject *tmp_import_name_from_37;
                PyObject *tmp_name_name_14;
                PyObject *tmp_globals_name_14;
                PyObject *tmp_locals_name_14;
                PyObject *tmp_fromlist_name_14;
                PyObject *tmp_level_name_14;
                tmp_name_name_14 = const_str_plain_http;
                tmp_globals_name_14 = (PyObject *)moduledict_requests$compat;
                tmp_locals_name_14 = Py_None;
                tmp_fromlist_name_14 = const_tuple_str_plain_cookiejar_tuple;
                tmp_level_name_14 = const_int_0;
                frame_0b2c1593cceffe2ce66186b68dcf0f3f->m_frame.f_lineno = 59;
                tmp_import_name_from_37 = IMPORT_MODULE5(tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14);
                if (tmp_import_name_from_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 59;

                    goto frame_exception_exit_1;
                }
                tmp_assign_source_59 = IMPORT_NAME(tmp_import_name_from_37, const_str_plain_cookiejar);
                Py_DECREF(tmp_import_name_from_37);
                if (tmp_assign_source_59 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 59;

                    goto frame_exception_exit_1;
                }
                UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_cookielib, tmp_assign_source_59);
            }
            {
                PyObject *tmp_assign_source_60;
                PyObject *tmp_import_name_from_38;
                PyObject *tmp_name_name_15;
                PyObject *tmp_globals_name_15;
                PyObject *tmp_locals_name_15;
                PyObject *tmp_fromlist_name_15;
                PyObject *tmp_level_name_15;
                tmp_name_name_15 = const_str_digest_faf5973379f42e9b5528565b323f20e0;
                tmp_globals_name_15 = (PyObject *)moduledict_requests$compat;
                tmp_locals_name_15 = Py_None;
                tmp_fromlist_name_15 = const_tuple_str_plain_Morsel_tuple;
                tmp_level_name_15 = const_int_0;
                frame_0b2c1593cceffe2ce66186b68dcf0f3f->m_frame.f_lineno = 60;
                tmp_import_name_from_38 = IMPORT_MODULE5(tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15, tmp_level_name_15);
                if (tmp_import_name_from_38 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 60;

                    goto frame_exception_exit_1;
                }
                tmp_assign_source_60 = IMPORT_NAME(tmp_import_name_from_38, const_str_plain_Morsel);
                Py_DECREF(tmp_import_name_from_38);
                if (tmp_assign_source_60 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 60;

                    goto frame_exception_exit_1;
                }
                UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_Morsel, tmp_assign_source_60);
            }
            {
                PyObject *tmp_assign_source_61;
                PyObject *tmp_import_name_from_39;
                PyObject *tmp_name_name_16;
                PyObject *tmp_globals_name_16;
                PyObject *tmp_locals_name_16;
                PyObject *tmp_fromlist_name_16;
                PyObject *tmp_level_name_16;
                tmp_name_name_16 = const_str_plain_io;
                tmp_globals_name_16 = (PyObject *)moduledict_requests$compat;
                tmp_locals_name_16 = Py_None;
                tmp_fromlist_name_16 = const_tuple_str_plain_StringIO_tuple;
                tmp_level_name_16 = const_int_0;
                frame_0b2c1593cceffe2ce66186b68dcf0f3f->m_frame.f_lineno = 61;
                tmp_import_name_from_39 = IMPORT_MODULE5(tmp_name_name_16, tmp_globals_name_16, tmp_locals_name_16, tmp_fromlist_name_16, tmp_level_name_16);
                if (tmp_import_name_from_39 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 61;

                    goto frame_exception_exit_1;
                }
                tmp_assign_source_61 = IMPORT_NAME(tmp_import_name_from_39, const_str_plain_StringIO);
                Py_DECREF(tmp_import_name_from_39);
                if (tmp_assign_source_61 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 61;

                    goto frame_exception_exit_1;
                }
                UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_StringIO, tmp_assign_source_61);
            }
            {
                PyObject *tmp_assign_source_62;
                PyObject *tmp_import_name_from_40;
                PyObject *tmp_name_name_17;
                PyObject *tmp_globals_name_17;
                PyObject *tmp_locals_name_17;
                PyObject *tmp_fromlist_name_17;
                PyObject *tmp_level_name_17;
                tmp_name_name_17 = const_str_plain_collections;
                tmp_globals_name_17 = (PyObject *)moduledict_requests$compat;
                tmp_locals_name_17 = Py_None;
                tmp_fromlist_name_17 = const_tuple_str_plain_OrderedDict_tuple;
                tmp_level_name_17 = const_int_0;
                frame_0b2c1593cceffe2ce66186b68dcf0f3f->m_frame.f_lineno = 62;
                tmp_import_name_from_40 = IMPORT_MODULE5(tmp_name_name_17, tmp_globals_name_17, tmp_locals_name_17, tmp_fromlist_name_17, tmp_level_name_17);
                if (tmp_import_name_from_40 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 62;

                    goto frame_exception_exit_1;
                }
                tmp_assign_source_62 = IMPORT_NAME(tmp_import_name_from_40, const_str_plain_OrderedDict);
                Py_DECREF(tmp_import_name_from_40);
                if (tmp_assign_source_62 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 62;

                    goto frame_exception_exit_1;
                }
                UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_OrderedDict, tmp_assign_source_62);
            }
            {
                PyObject *tmp_assign_source_63;
                PyObject *tmp_name_name_18;
                PyObject *tmp_globals_name_18;
                PyObject *tmp_locals_name_18;
                PyObject *tmp_fromlist_name_18;
                PyObject *tmp_level_name_18;
                tmp_name_name_18 = const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
                tmp_globals_name_18 = (PyObject *)moduledict_requests$compat;
                tmp_locals_name_18 = Py_None;
                tmp_fromlist_name_18 = const_tuple_88d1e79e25c6a2b1eddcdc1d57101770_tuple;
                tmp_level_name_18 = const_int_0;
                frame_0b2c1593cceffe2ce66186b68dcf0f3f->m_frame.f_lineno = 63;
                tmp_assign_source_63 = IMPORT_MODULE5(tmp_name_name_18, tmp_globals_name_18, tmp_locals_name_18, tmp_fromlist_name_18, tmp_level_name_18);
                if (tmp_assign_source_63 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 63;

                    goto frame_exception_exit_1;
                }
                assert(tmp_import_from_6__module == NULL);
                tmp_import_from_6__module = tmp_assign_source_63;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_64;
                PyObject *tmp_import_name_from_41;
                CHECK_OBJECT(tmp_import_from_6__module);
                tmp_import_name_from_41 = tmp_import_from_6__module;
                tmp_assign_source_64 = IMPORT_NAME(tmp_import_name_from_41, const_str_plain_Callable);
                if (tmp_assign_source_64 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 63;

                    goto try_except_handler_8;
                }
                UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_Callable, tmp_assign_source_64);
            }
            {
                PyObject *tmp_assign_source_65;
                PyObject *tmp_import_name_from_42;
                CHECK_OBJECT(tmp_import_from_6__module);
                tmp_import_name_from_42 = tmp_import_from_6__module;
                tmp_assign_source_65 = IMPORT_NAME(tmp_import_name_from_42, const_str_plain_Mapping);
                if (tmp_assign_source_65 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 63;

                    goto try_except_handler_8;
                }
                UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_Mapping, tmp_assign_source_65);
            }
            {
                PyObject *tmp_assign_source_66;
                PyObject *tmp_import_name_from_43;
                CHECK_OBJECT(tmp_import_from_6__module);
                tmp_import_name_from_43 = tmp_import_from_6__module;
                tmp_assign_source_66 = IMPORT_NAME(tmp_import_name_from_43, const_str_plain_MutableMapping);
                if (tmp_assign_source_66 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 63;

                    goto try_except_handler_8;
                }
                UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_MutableMapping, tmp_assign_source_66);
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

            CHECK_OBJECT((PyObject *)tmp_import_from_6__module);
            Py_DECREF(tmp_import_from_6__module);
            tmp_import_from_6__module = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_8;
            exception_value = exception_keeper_value_8;
            exception_tb = exception_keeper_tb_8;
            exception_lineno = exception_keeper_lineno_8;

            goto frame_exception_exit_1;
            // End of try:
            try_end_8:;
            CHECK_OBJECT((PyObject *)tmp_import_from_6__module);
            Py_DECREF(tmp_import_from_6__module);
            tmp_import_from_6__module = NULL;

            {
                PyObject *tmp_assign_source_67;
                PyObject *tmp_mvar_value_14;
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_str);

                if (unlikely(tmp_mvar_value_14 == NULL)) {
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_str);
                }

                if (tmp_mvar_value_14 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 15520 ], 25, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 65;

                    goto frame_exception_exit_1;
                }

                tmp_assign_source_67 = tmp_mvar_value_14;
                UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_builtin_str, tmp_assign_source_67);
            }
            {
                PyObject *tmp_assign_source_68;
                PyObject *tmp_mvar_value_15;
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_str);

                if (unlikely(tmp_mvar_value_15 == NULL)) {
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_str);
                }

                if (tmp_mvar_value_15 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 15520 ], 25, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 66;

                    goto frame_exception_exit_1;
                }

                tmp_assign_source_68 = tmp_mvar_value_15;
                UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_str, tmp_assign_source_68);
            }
            {
                PyObject *tmp_assign_source_69;
                PyObject *tmp_mvar_value_16;
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_bytes);

                if (unlikely(tmp_mvar_value_16 == NULL)) {
                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes);
                }

                if (tmp_mvar_value_16 == NULL) {

                    exception_type = PyExc_NameError;
                    Py_INCREF(exception_type);
                    exception_value = UNSTREAM_STRING(&constant_bin[ 6227 ], 27, 0);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 67;

                    goto frame_exception_exit_1;
                }

                tmp_assign_source_69 = tmp_mvar_value_16;
                UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_bytes, tmp_assign_source_69);
            }
            {
                PyObject *tmp_assign_source_70;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_mvar_value_17;
                PyObject *tmp_mvar_value_18;
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_str);

                if (unlikely(tmp_mvar_value_17 == NULL)) {
                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_str);
                }

                CHECK_OBJECT(tmp_mvar_value_17);
                tmp_tuple_element_3 = tmp_mvar_value_17;
                tmp_assign_source_70 = PyTuple_New(2);
                Py_INCREF(tmp_tuple_element_3);
                PyTuple_SET_ITEM(tmp_assign_source_70, 0, tmp_tuple_element_3);
                tmp_mvar_value_18 = GET_STRING_DICT_VALUE(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_bytes);

                if (unlikely(tmp_mvar_value_18 == NULL)) {
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes);
                }

                CHECK_OBJECT(tmp_mvar_value_18);
                tmp_tuple_element_3 = tmp_mvar_value_18;
                Py_INCREF(tmp_tuple_element_3);
                PyTuple_SET_ITEM(tmp_assign_source_70, 1, tmp_tuple_element_3);
                UPDATE_STRING_DICT1(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_basestring, tmp_assign_source_70);
            }
            {
                PyObject *tmp_assign_source_71;
                tmp_assign_source_71 = const_tuple_type_int_type_float_tuple;
                UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_numeric_types, tmp_assign_source_71);
            }
            {
                PyObject *tmp_assign_source_72;
                tmp_assign_source_72 = const_tuple_type_int_tuple;
                UPDATE_STRING_DICT0(moduledict_requests$compat, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_72);
            }
            branch_no_3:;
        }
        branch_end_2:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0b2c1593cceffe2ce66186b68dcf0f3f);
#endif
    popFrameStack();

    assertFrameObject(frame_0b2c1593cceffe2ce66186b68dcf0f3f);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0b2c1593cceffe2ce66186b68dcf0f3f);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_0b2c1593cceffe2ce66186b68dcf0f3f, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_0b2c1593cceffe2ce66186b68dcf0f3f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0b2c1593cceffe2ce66186b68dcf0f3f, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module_requests$compat;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
