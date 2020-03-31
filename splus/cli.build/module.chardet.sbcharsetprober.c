/* Generated code for Python module 'chardet.sbcharsetprober'
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

/* The "_module_chardet$sbcharsetprober" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$sbcharsetprober;
PyDictObject *moduledict_chardet$sbcharsetprober;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain__last_order;
static PyObject *const_str_plain__seq_counters;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_FOUND_IT;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain_POSITIVE;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_606ccc18eb59f35ee0ae380f2081b9c7;
static PyObject *const_str_plain__total_char;
static PyObject *const_tuple_str_plain_language_tuple;
static PyObject *const_str_digest_a5dcd2b93c0e78a2f5cb28a221f120f5;
extern PyObject *const_str_plain_enums;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_c08272f67221a87a52badcd419fa2278;
extern PyObject *const_str_plain_get_confidence;
static PyObject *const_str_digest_3ba77f3b2f058b3de9dee4dd377ef2b3;
extern PyObject *const_int_pos_1024;
extern PyObject *const_str_plain_NOT_ME;
extern PyObject *const_str_plain_DETECTING;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_float_0_95;
extern PyObject *const_str_plain_SingleByteCharSetProber;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_fd884ec645c9a91d8874cb91afdc5e07;
static PyObject *const_str_plain__name_prober;
extern PyObject *const_float_1_0;
static PyObject *const_str_plain__freq_char;
extern PyObject *const_float_0_99;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_confidence;
extern PyObject *const_str_plain_CONTROL;
static PyObject *const_str_plain_NEGATIVE_SHORTCUT_THRESHOLD;
static PyObject *const_tuple_363bc5331ad9aa419ab396f9f01ea793_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_charsetprober;
extern PyObject *const_str_plain_enumerate;
extern PyObject *const_str_plain_reversed;
static PyObject *const_str_plain__reversed;
extern PyObject *const_str_plain_r;
static PyObject *const_str_digest_f68e2e09664f76100b3c042e93356092;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_precedence_matrix;
extern PyObject *const_str_plain_charset_name;
extern PyObject *const_str_plain_keep_english_letter;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_plain__total_seqs;
static PyObject *const_str_plain_POSITIVE_SHORTCUT_THRESHOLD;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_ProbingState;
extern PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
static PyObject *const_tuple_false_none_tuple;
extern PyObject *const_str_plain_reset;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_c;
extern PyObject *const_int_pos_64;
extern PyObject *const_tuple_str_plain_self_str_plain_r_tuple;
extern PyObject *const_str_plain_SequenceLikelihood;
static PyObject *const_float_0_05;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_cdf8ecb21e4445d113b6925210878bec;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_get_num_categories;
extern PyObject *const_str_plain_CharacterCategory;
extern PyObject *const_str_plain__model;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_5c731680c79b69f20d898c0f51595c71;
static PyObject *const_tuple_fa14522706a5cb58709e5f4767d2c00d_tuple;
extern PyObject *const_float_0_01;
extern PyObject *const_str_plain_debug;
static PyObject *const_tuple_eb435398ce6a6a006a1b8670689d68da_tuple;
extern PyObject *const_str_plain_byte_str;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_6f65bc7873c4449c9283e638b35406af;
static PyObject *const_str_digest_cf7be33442b9bb726212077666fa6b60;
extern PyObject *const_str_plain_language;
extern PyObject *const_list_int_0_list;
extern PyObject *const_str_plain_logger;
extern PyObject *const_str_plain_state;
static PyObject *const_str_plain_SAMPLE_SIZE;
extern PyObject *const_str_plain_char_to_order_map;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_plain_name_prober;
static PyObject *const_str_plain_SB_ENOUGH_REL_THRESHOLD;
extern PyObject *const_str_plain_CharSetProber;
extern PyObject *const_int_pos_255;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain__state;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_tuple_str_plain_CharSetProber_tuple;
static PyObject *const_str_digest_4fb51995e5b905c20563204dd0b1b59c;
extern PyObject *const_str_plain_property;
extern PyObject *const_str_plain_feed;
extern PyObject *const_str_plain_typical_positive_ratio;
extern PyObject *const_str_plain_filter_international_words;
static PyObject *const_str_plain_model;
extern PyObject *const_str_plain_order;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain__last_order = UNSTREAM_STRING_ASCII(&constant_bin[ 355945 ], 11, 1);
    const_str_plain__seq_counters = UNSTREAM_STRING_ASCII(&constant_bin[ 355956 ], 13, 1);
    const_str_digest_606ccc18eb59f35ee0ae380f2081b9c7 = UNSTREAM_STRING_ASCII(&constant_bin[ 355969 ], 38, 0);
    const_str_plain__total_char = UNSTREAM_STRING_ASCII(&constant_bin[ 74549 ], 11, 1);
    const_tuple_str_plain_language_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_language_tuple, 0, const_str_plain_language); Py_INCREF(const_str_plain_language);
    const_str_digest_a5dcd2b93c0e78a2f5cb28a221f120f5 = UNSTREAM_STRING_ASCII(&constant_bin[ 356007 ], 65, 0);
    const_str_digest_c08272f67221a87a52badcd419fa2278 = UNSTREAM_STRING_ASCII(&constant_bin[ 356072 ], 32, 0);
    const_str_digest_3ba77f3b2f058b3de9dee4dd377ef2b3 = UNSTREAM_STRING_ASCII(&constant_bin[ 356104 ], 32, 0);
    const_str_digest_fd884ec645c9a91d8874cb91afdc5e07 = UNSTREAM_STRING_ASCII(&constant_bin[ 356136 ], 36, 0);
    const_str_plain__name_prober = UNSTREAM_STRING_ASCII(&constant_bin[ 356172 ], 12, 1);
    const_str_plain__freq_char = UNSTREAM_STRING_ASCII(&constant_bin[ 74862 ], 10, 1);
    const_str_plain_NEGATIVE_SHORTCUT_THRESHOLD = UNSTREAM_STRING_ASCII(&constant_bin[ 356184 ], 27, 1);
    const_tuple_363bc5331ad9aa419ab396f9f01ea793_tuple = PyTuple_New(3);
    PyTuple_SET_ITEM(const_tuple_363bc5331ad9aa419ab396f9f01ea793_tuple, 0, const_str_plain_CharacterCategory); Py_INCREF(const_str_plain_CharacterCategory);
    PyTuple_SET_ITEM(const_tuple_363bc5331ad9aa419ab396f9f01ea793_tuple, 1, const_str_plain_ProbingState); Py_INCREF(const_str_plain_ProbingState);
    PyTuple_SET_ITEM(const_tuple_363bc5331ad9aa419ab396f9f01ea793_tuple, 2, const_str_plain_SequenceLikelihood); Py_INCREF(const_str_plain_SequenceLikelihood);
    const_str_plain__reversed = UNSTREAM_STRING_ASCII(&constant_bin[ 356211 ], 9, 1);
    const_str_digest_f68e2e09664f76100b3c042e93356092 = UNSTREAM_STRING_ASCII(&constant_bin[ 356220 ], 23, 0);
    const_str_plain__total_seqs = UNSTREAM_STRING_ASCII(&constant_bin[ 356243 ], 11, 1);
    const_str_plain_POSITIVE_SHORTCUT_THRESHOLD = UNSTREAM_STRING_ASCII(&constant_bin[ 356254 ], 27, 1);
    const_tuple_false_none_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_false_none_tuple, 0, Py_False); Py_INCREF(Py_False);
    PyTuple_SET_ITEM(const_tuple_false_none_tuple, 1, Py_None); Py_INCREF(Py_None);
    const_float_0_05 = UNSTREAM_FLOAT(&constant_bin[ 356281 ]);
    const_str_digest_cdf8ecb21e4445d113b6925210878bec = UNSTREAM_STRING_ASCII(&constant_bin[ 356289 ], 29, 0);
    const_str_digest_5c731680c79b69f20d898c0f51595c71 = UNSTREAM_STRING_ASCII(&constant_bin[ 356318 ], 36, 0);
    const_tuple_fa14522706a5cb58709e5f4767d2c00d_tuple = PyTuple_New(5);
    PyTuple_SET_ITEM(const_tuple_fa14522706a5cb58709e5f4767d2c00d_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    const_str_plain_model = UNSTREAM_STRING_ASCII(&constant_bin[ 79344 ], 5, 1);
    PyTuple_SET_ITEM(const_tuple_fa14522706a5cb58709e5f4767d2c00d_tuple, 1, const_str_plain_model); Py_INCREF(const_str_plain_model);
    PyTuple_SET_ITEM(const_tuple_fa14522706a5cb58709e5f4767d2c00d_tuple, 2, const_str_plain_reversed); Py_INCREF(const_str_plain_reversed);
    const_str_plain_name_prober = UNSTREAM_STRING_ASCII(&constant_bin[ 356173 ], 11, 1);
    PyTuple_SET_ITEM(const_tuple_fa14522706a5cb58709e5f4767d2c00d_tuple, 3, const_str_plain_name_prober); Py_INCREF(const_str_plain_name_prober);
    PyTuple_SET_ITEM(const_tuple_fa14522706a5cb58709e5f4767d2c00d_tuple, 4, const_str_plain___class__); Py_INCREF(const_str_plain___class__);
    const_tuple_eb435398ce6a6a006a1b8670689d68da_tuple = PyTuple_New(9);
    PyTuple_SET_ITEM(const_tuple_eb435398ce6a6a006a1b8670689d68da_tuple, 0, const_str_plain_self); Py_INCREF(const_str_plain_self);
    PyTuple_SET_ITEM(const_tuple_eb435398ce6a6a006a1b8670689d68da_tuple, 1, const_str_plain_byte_str); Py_INCREF(const_str_plain_byte_str);
    PyTuple_SET_ITEM(const_tuple_eb435398ce6a6a006a1b8670689d68da_tuple, 2, const_str_plain_char_to_order_map); Py_INCREF(const_str_plain_char_to_order_map);
    PyTuple_SET_ITEM(const_tuple_eb435398ce6a6a006a1b8670689d68da_tuple, 3, const_str_plain_i); Py_INCREF(const_str_plain_i);
    PyTuple_SET_ITEM(const_tuple_eb435398ce6a6a006a1b8670689d68da_tuple, 4, const_str_plain_c); Py_INCREF(const_str_plain_c);
    PyTuple_SET_ITEM(const_tuple_eb435398ce6a6a006a1b8670689d68da_tuple, 5, const_str_plain_order); Py_INCREF(const_str_plain_order);
    PyTuple_SET_ITEM(const_tuple_eb435398ce6a6a006a1b8670689d68da_tuple, 6, const_str_plain_model); Py_INCREF(const_str_plain_model);
    PyTuple_SET_ITEM(const_tuple_eb435398ce6a6a006a1b8670689d68da_tuple, 7, const_str_plain_charset_name); Py_INCREF(const_str_plain_charset_name);
    PyTuple_SET_ITEM(const_tuple_eb435398ce6a6a006a1b8670689d68da_tuple, 8, const_str_plain_confidence); Py_INCREF(const_str_plain_confidence);
    const_str_digest_6f65bc7873c4449c9283e638b35406af = UNSTREAM_STRING_ASCII(&constant_bin[ 356354 ], 32, 0);
    const_str_digest_cf7be33442b9bb726212077666fa6b60 = UNSTREAM_STRING_ASCII(&constant_bin[ 356386 ], 57, 0);
    const_str_plain_SAMPLE_SIZE = UNSTREAM_STRING_ASCII(&constant_bin[ 356443 ], 11, 1);
    const_str_plain_SB_ENOUGH_REL_THRESHOLD = UNSTREAM_STRING_ASCII(&constant_bin[ 356454 ], 23, 1);
    const_str_digest_4fb51995e5b905c20563204dd0b1b59c = UNSTREAM_STRING_ASCII(&constant_bin[ 356477 ], 28, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_chardet$sbcharsetprober(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a3f6895e1c4548f45c0348e52f23c33c;
static PyCodeObject *codeobj_30f935b56db4cf9a6c1afaf78542e897;
static PyCodeObject *codeobj_6f4edf7d5d3aba4982c4caafb6d84f29;
static PyCodeObject *codeobj_cb7ce670f74d53afc05c289e8bbc8a0d;
static PyCodeObject *codeobj_7cefac023d07496de37d7dc762980b18;
static PyCodeObject *codeobj_206fcbcb8b2f34a1868056a7ccca181e;
static PyCodeObject *codeobj_b57b286970ebbed5617e556ac9b48db2;
static PyCodeObject *codeobj_1e71627bbbbfd2170de94cc586d5e557;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_a5dcd2b93c0e78a2f5cb28a221f120f5;
    codeobj_a3f6895e1c4548f45c0348e52f23c33c = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_6f65bc7873c4449c9283e638b35406af, const_tuple_empty, 0, 0, 0);
    codeobj_30f935b56db4cf9a6c1afaf78542e897 = MAKE_CODEOBJECT(module_filename_obj, 33, CO_NOFREE, const_str_plain_SingleByteCharSetProber, const_tuple_str_plain___class___tuple, 0, 0, 0);
    codeobj_6f4edf7d5d3aba4982c4caafb6d84f29 = MAKE_CODEOBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, const_tuple_fa14522706a5cb58709e5f4767d2c00d_tuple, 4, 0, 0);
    codeobj_cb7ce670f74d53afc05c289e8bbc8a0d = MAKE_CODEOBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_charset_name, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_7cefac023d07496de37d7dc762980b18 = MAKE_CODEOBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_feed, const_tuple_eb435398ce6a6a006a1b8670689d68da_tuple, 2, 0, 0);
    codeobj_206fcbcb8b2f34a1868056a7ccca181e = MAKE_CODEOBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_get_confidence, const_tuple_str_plain_self_str_plain_r_tuple, 1, 0, 0);
    codeobj_b57b286970ebbed5617e556ac9b48db2 = MAKE_CODEOBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_language, const_tuple_str_plain_self_tuple, 1, 0, 0);
    codeobj_1e71627bbbbfd2170de94cc586d5e557 = MAKE_CODEOBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_reset, const_tuple_str_plain_self_str_plain___class___tuple, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_chardet$sbcharsetprober$$$function_1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_chardet$sbcharsetprober$$$function_2_reset();


static PyObject *MAKE_FUNCTION_chardet$sbcharsetprober$$$function_3_charset_name();


static PyObject *MAKE_FUNCTION_chardet$sbcharsetprober$$$function_4_language();


static PyObject *MAKE_FUNCTION_chardet$sbcharsetprober$$$function_5_feed();


static PyObject *MAKE_FUNCTION_chardet$sbcharsetprober$$$function_6_get_confidence();


// The module function definitions.
static PyObject *impl_chardet$sbcharsetprober$$$function_1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_model = python_pars[1];
    PyObject *par_reversed = python_pars[2];
    PyObject *par_name_prober = python_pars[3];
    struct Nuitka_FrameObject *frame_6f4edf7d5d3aba4982c4caafb6d84f29;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6f4edf7d5d3aba4982c4caafb6d84f29 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_6f4edf7d5d3aba4982c4caafb6d84f29, codeobj_6f4edf7d5d3aba4982c4caafb6d84f29, module_chardet$sbcharsetprober, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_6f4edf7d5d3aba4982c4caafb6d84f29 = cache_frame_6f4edf7d5d3aba4982c4caafb6d84f29;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6f4edf7d5d3aba4982c4caafb6d84f29);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6f4edf7d5d3aba4982c4caafb6d84f29) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 4107 ], 45, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 40;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT(par_self);
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER(tmp_type_name_1, tmp_object_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        frame_6f4edf7d5d3aba4982c4caafb6d84f29->m_frame.f_lineno = 40;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain___init__);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_model);
        tmp_assattr_name_1 = par_model;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__model, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_reversed);
        tmp_assattr_name_2 = par_reversed;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__reversed, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_name_prober);
        tmp_assattr_name_3 = par_name_prober;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain__name_prober, tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain__last_order, tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_name_5 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain__seq_counters, tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_name_6 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain__total_seqs, tmp_assattr_name_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_name_7 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, const_str_plain__total_char, tmp_assattr_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_name_8 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, const_str_plain__freq_char, tmp_assattr_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_6f4edf7d5d3aba4982c4caafb6d84f29->m_frame.f_lineno = 51;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_reset);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6f4edf7d5d3aba4982c4caafb6d84f29);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6f4edf7d5d3aba4982c4caafb6d84f29);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6f4edf7d5d3aba4982c4caafb6d84f29, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_6f4edf7d5d3aba4982c4caafb6d84f29->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6f4edf7d5d3aba4982c4caafb6d84f29, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6f4edf7d5d3aba4982c4caafb6d84f29,
        type_description_1,
        par_self,
        par_model,
        par_reversed,
        par_name_prober,
        NULL
    );


    // Release cached frame.
    if (frame_6f4edf7d5d3aba4982c4caafb6d84f29 == cache_frame_6f4edf7d5d3aba4982c4caafb6d84f29) {
        Py_DECREF(frame_6f4edf7d5d3aba4982c4caafb6d84f29);
    }
    cache_frame_6f4edf7d5d3aba4982c4caafb6d84f29 = NULL;

    assertFrameObject(frame_6f4edf7d5d3aba4982c4caafb6d84f29);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$sbcharsetprober$$$function_1___init__);
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    CHECK_OBJECT(par_reversed);
    Py_DECREF(par_reversed);
    CHECK_OBJECT(par_name_prober);
    Py_DECREF(par_name_prober);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    CHECK_OBJECT(par_reversed);
    Py_DECREF(par_reversed);
    CHECK_OBJECT(par_name_prober);
    Py_DECREF(par_name_prober);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_chardet$sbcharsetprober$$$function_2_reset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1e71627bbbbfd2170de94cc586d5e557;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1e71627bbbbfd2170de94cc586d5e557 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_1e71627bbbbfd2170de94cc586d5e557, codeobj_1e71627bbbbfd2170de94cc586d5e557, module_chardet$sbcharsetprober, sizeof(void *)+sizeof(void *));
    frame_1e71627bbbbfd2170de94cc586d5e557 = cache_frame_1e71627bbbbfd2170de94cc586d5e557;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1e71627bbbbfd2170de94cc586d5e557);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1e71627bbbbfd2170de94cc586d5e557) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 4107 ], 45, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 54;
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


            exception_lineno = 54;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        frame_1e71627bbbbfd2170de94cc586d5e557->m_frame.f_lineno = 54;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_reset);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = const_int_pos_255;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__last_order, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_left_name_1 = LIST_COPY(const_list_int_0_list);
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_SequenceLikelihood);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SequenceLikelihood);
        }

        if (tmp_mvar_value_2 == NULL) {
            Py_DECREF(tmp_left_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 4152 ], 40, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_2;
        frame_1e71627bbbbfd2170de94cc586d5e557->m_frame.f_lineno = 57;
        tmp_right_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_get_num_categories);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 57;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_2 = BINARY_OPERATION_MUL_LIST_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_assattr_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__seq_counters, tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = const_int_0;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain__total_seqs, tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = const_int_0;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain__total_char, tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_name_5 = const_int_0;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain__freq_char, tmp_assattr_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1e71627bbbbfd2170de94cc586d5e557);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1e71627bbbbfd2170de94cc586d5e557);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1e71627bbbbfd2170de94cc586d5e557, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_1e71627bbbbfd2170de94cc586d5e557->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e71627bbbbfd2170de94cc586d5e557, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1e71627bbbbfd2170de94cc586d5e557,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame.
    if (frame_1e71627bbbbfd2170de94cc586d5e557 == cache_frame_1e71627bbbbfd2170de94cc586d5e557) {
        Py_DECREF(frame_1e71627bbbbfd2170de94cc586d5e557);
    }
    cache_frame_1e71627bbbbfd2170de94cc586d5e557 = NULL;

    assertFrameObject(frame_1e71627bbbbfd2170de94cc586d5e557);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$sbcharsetprober$$$function_2_reset);
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


static PyObject *impl_chardet$sbcharsetprober$$$function_3_charset_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_cb7ce670f74d53afc05c289e8bbc8a0d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cb7ce670f74d53afc05c289e8bbc8a0d = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_cb7ce670f74d53afc05c289e8bbc8a0d, codeobj_cb7ce670f74d53afc05c289e8bbc8a0d, module_chardet$sbcharsetprober, sizeof(void *));
    frame_cb7ce670f74d53afc05c289e8bbc8a0d = cache_frame_cb7ce670f74d53afc05c289e8bbc8a0d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cb7ce670f74d53afc05c289e8bbc8a0d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cb7ce670f74d53afc05c289e8bbc8a0d) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__name_prober);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 65;
            type_description_1 = "o";
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
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT(par_self);
            tmp_source_name_3 = par_self;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__name_prober);
            if (tmp_source_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_charset_name);
            Py_DECREF(tmp_source_name_2);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT(par_self);
            tmp_source_name_4 = par_self;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__model);
            if (tmp_subscribed_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_1 = const_str_plain_charset_name;
            tmp_return_value = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
            Py_DECREF(tmp_subscribed_name_1);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cb7ce670f74d53afc05c289e8bbc8a0d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_cb7ce670f74d53afc05c289e8bbc8a0d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cb7ce670f74d53afc05c289e8bbc8a0d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cb7ce670f74d53afc05c289e8bbc8a0d, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_cb7ce670f74d53afc05c289e8bbc8a0d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cb7ce670f74d53afc05c289e8bbc8a0d, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cb7ce670f74d53afc05c289e8bbc8a0d,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_cb7ce670f74d53afc05c289e8bbc8a0d == cache_frame_cb7ce670f74d53afc05c289e8bbc8a0d) {
        Py_DECREF(frame_cb7ce670f74d53afc05c289e8bbc8a0d);
    }
    cache_frame_cb7ce670f74d53afc05c289e8bbc8a0d = NULL;

    assertFrameObject(frame_cb7ce670f74d53afc05c289e8bbc8a0d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$sbcharsetprober$$$function_3_charset_name);
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


static PyObject *impl_chardet$sbcharsetprober$$$function_4_language(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b57b286970ebbed5617e556ac9b48db2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b57b286970ebbed5617e556ac9b48db2 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME(cache_frame_b57b286970ebbed5617e556ac9b48db2, codeobj_b57b286970ebbed5617e556ac9b48db2, module_chardet$sbcharsetprober, sizeof(void *));
    frame_b57b286970ebbed5617e556ac9b48db2 = cache_frame_b57b286970ebbed5617e556ac9b48db2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b57b286970ebbed5617e556ac9b48db2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b57b286970ebbed5617e556ac9b48db2) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__name_prober);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 72;
            type_description_1 = "o";
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
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT(par_self);
            tmp_source_name_3 = par_self;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__name_prober);
            if (tmp_source_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_language);
            Py_DECREF(tmp_source_name_2);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_4;
            CHECK_OBJECT(par_self);
            tmp_source_name_4 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__model);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_b57b286970ebbed5617e556ac9b48db2->m_frame.f_lineno = 75;
            tmp_return_value = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM(const_tuple_str_plain_language_tuple, 0));

            Py_DECREF(tmp_called_instance_1);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b57b286970ebbed5617e556ac9b48db2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b57b286970ebbed5617e556ac9b48db2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b57b286970ebbed5617e556ac9b48db2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b57b286970ebbed5617e556ac9b48db2, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_b57b286970ebbed5617e556ac9b48db2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b57b286970ebbed5617e556ac9b48db2, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b57b286970ebbed5617e556ac9b48db2,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if (frame_b57b286970ebbed5617e556ac9b48db2 == cache_frame_b57b286970ebbed5617e556ac9b48db2) {
        Py_DECREF(frame_b57b286970ebbed5617e556ac9b48db2);
    }
    cache_frame_b57b286970ebbed5617e556ac9b48db2 = NULL;

    assertFrameObject(frame_b57b286970ebbed5617e556ac9b48db2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$sbcharsetprober$$$function_4_language);
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


static PyObject *impl_chardet$sbcharsetprober$$$function_5_feed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_byte_str = python_pars[1];
    PyObject *var_char_to_order_map = NULL;
    PyObject *var_i = NULL;
    PyObject *var_c = NULL;
    PyObject *var_order = NULL;
    PyObject *var_model = NULL;
    PyObject *var_charset_name = NULL;
    PyObject *var_confidence = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    PyObject *tmp_inplace_assign_attr_2__end = NULL;
    PyObject *tmp_inplace_assign_attr_2__start = NULL;
    PyObject *tmp_inplace_assign_attr_3__end = NULL;
    PyObject *tmp_inplace_assign_attr_3__start = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_7cefac023d07496de37d7dc762980b18;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_7cefac023d07496de37d7dc762980b18 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_7cefac023d07496de37d7dc762980b18, codeobj_7cefac023d07496de37d7dc762980b18, module_chardet$sbcharsetprober, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
    frame_7cefac023d07496de37d7dc762980b18 = cache_frame_7cefac023d07496de37d7dc762980b18;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7cefac023d07496de37d7dc762980b18);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7cefac023d07496de37d7dc762980b18) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__model);
        if (tmp_subscribed_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_str_plain_keep_english_letter;
        tmp_operand_name_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_subscribed_name_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT(par_self);
            tmp_called_instance_1 = par_self;
            CHECK_OBJECT(par_byte_str);
            tmp_args_element_name_1 = par_byte_str;
            frame_7cefac023d07496de37d7dc762980b18->m_frame.f_lineno = 79;
            {
                PyObject *call_args[] = {tmp_args_element_name_1};
                tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, const_str_plain_filter_international_words, call_args);
            }

            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_byte_str;
                assert(old != NULL);
                par_byte_str = tmp_assign_source_1;
                Py_DECREF(old);
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT(par_byte_str);
        tmp_operand_name_2 = par_byte_str;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
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
            PyObject *tmp_source_name_2;
            CHECK_OBJECT(par_self);
            tmp_source_name_2 = par_self;
            tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain_state);
            if (tmp_return_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_3 = par_self;
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain__model);
        if (tmp_subscribed_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_str_plain_char_to_order_map;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_2, tmp_subscript_name_2);
        Py_DECREF(tmp_subscribed_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_char_to_order_map == NULL);
        var_char_to_order_map = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_byte_str);
        tmp_args_element_name_2 = par_byte_str;
        frame_7cefac023d07496de37d7dc762980b18->m_frame.f_lineno = 83;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooo";
                exception_lineno = 83;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
            Py_XDECREF(old);
        }

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


            type_description_1 = "ooooooooo";
            exception_lineno = 83;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

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


            type_description_1 = "ooooooooo";
            exception_lineno = 83;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 83;
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

            type_description_1 = "ooooooooo";
            exception_lineno = 83;
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
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_8;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_9;
            Py_INCREF(var_c);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT(var_char_to_order_map);
        tmp_subscribed_name_3 = var_char_to_order_map;
        CHECK_OBJECT(var_c);
        tmp_subscript_name_3 = var_c;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_3, tmp_subscript_name_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_order;
            var_order = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT(var_order);
        tmp_compexpr_left_1 = var_order;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_CharacterCategory);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CharacterCategory);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 4192 ], 39, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_4 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain_CONTROL);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
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
            PyObject *tmp_source_name_5;
            CHECK_OBJECT(par_self);
            tmp_source_name_5 = par_self;
            tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain__total_char);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_1__start;
                tmp_inplace_assign_attr_1__start = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT(tmp_inplace_assign_attr_1__start);
            tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
            tmp_right_name_1 = const_int_pos_1;
            tmp_assign_source_12 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_1__end;
                tmp_inplace_assign_attr_1__end = tmp_assign_source_12;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT(tmp_inplace_assign_attr_1__end);
            tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT(par_self);
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain__total_char, tmp_assattr_name_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "ooooooooo";
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

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
        Py_DECREF(tmp_inplace_assign_attr_1__end);
        tmp_inplace_assign_attr_1__end = NULL;

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

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
        Py_DECREF(tmp_inplace_assign_attr_1__start);
        tmp_inplace_assign_attr_1__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_2;
        // End of try:
        try_end_4:;
        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__end);
        Py_DECREF(tmp_inplace_assign_attr_1__end);
        tmp_inplace_assign_attr_1__end = NULL;

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_1__start);
        Py_DECREF(tmp_inplace_assign_attr_1__start);
        tmp_inplace_assign_attr_1__start = NULL;

        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT(var_order);
        tmp_compexpr_left_2 = var_order;
        CHECK_OBJECT(par_self);
        tmp_source_name_6 = par_self;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain_SAMPLE_SIZE);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
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
            PyObject *tmp_source_name_7;
            CHECK_OBJECT(par_self);
            tmp_source_name_7 = par_self;
            tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain__freq_char);
            if (tmp_assign_source_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_2__start;
                tmp_inplace_assign_attr_2__start = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT(tmp_inplace_assign_attr_2__start);
            tmp_left_name_2 = tmp_inplace_assign_attr_2__start;
            tmp_right_name_2 = const_int_pos_1;
            tmp_assign_source_14 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_1 = "ooooooooo";
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_inplace_assign_attr_2__end;
                tmp_inplace_assign_attr_2__end = tmp_assign_source_14;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            CHECK_OBJECT(tmp_inplace_assign_attr_2__end);
            tmp_assattr_name_2 = tmp_inplace_assign_attr_2__end;
            CHECK_OBJECT(par_self);
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain__freq_char, tmp_assattr_name_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_1 = "ooooooooo";
                goto try_except_handler_8;
            }
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__end);
        Py_DECREF(tmp_inplace_assign_attr_2__end);
        tmp_inplace_assign_attr_2__end = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_7;
        // End of try:
        try_end_5:;
        goto try_end_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__start);
        Py_DECREF(tmp_inplace_assign_attr_2__start);
        tmp_inplace_assign_attr_2__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_2;
        // End of try:
        try_end_6:;
        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__end);
        Py_DECREF(tmp_inplace_assign_attr_2__end);
        tmp_inplace_assign_attr_2__end = NULL;

        CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_2__start);
        Py_DECREF(tmp_inplace_assign_attr_2__start);
        tmp_inplace_assign_attr_2__start = NULL;

        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_8;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT(par_self);
            tmp_source_name_8 = par_self;
            tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE(tmp_source_name_8, const_str_plain__last_order);
            if (tmp_compexpr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_9 = par_self;
            tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE(tmp_source_name_9, const_str_plain_SAMPLE_SIZE);
            if (tmp_compexpr_right_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_compexpr_left_3);

                exception_lineno = 96;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
            Py_DECREF(tmp_compexpr_left_3);
            Py_DECREF(tmp_compexpr_right_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
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
                PyObject *tmp_source_name_10;
                CHECK_OBJECT(par_self);
                tmp_source_name_10 = par_self;
                tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tmp_source_name_10, const_str_plain__total_seqs);
                if (tmp_assign_source_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 97;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = tmp_inplace_assign_attr_3__start;
                    tmp_inplace_assign_attr_3__start = tmp_assign_source_15;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_16;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                CHECK_OBJECT(tmp_inplace_assign_attr_3__start);
                tmp_left_name_3 = tmp_inplace_assign_attr_3__start;
                tmp_right_name_3 = const_int_pos_1;
                tmp_assign_source_16 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_3, tmp_right_name_3);
                if (tmp_assign_source_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 97;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_9;
                }
                {
                    PyObject *old = tmp_inplace_assign_attr_3__end;
                    tmp_inplace_assign_attr_3__end = tmp_assign_source_16;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            {
                PyObject *tmp_assattr_name_3;
                PyObject *tmp_assattr_target_3;
                CHECK_OBJECT(tmp_inplace_assign_attr_3__end);
                tmp_assattr_name_3 = tmp_inplace_assign_attr_3__end;
                CHECK_OBJECT(par_self);
                tmp_assattr_target_3 = par_self;
                tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, const_str_plain__total_seqs, tmp_assattr_name_3);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 97;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_10;
                }
            }
            goto try_end_7;
            // Exception handler code:
            try_except_handler_10:;
            exception_keeper_type_7 = exception_type;
            exception_keeper_value_7 = exception_value;
            exception_keeper_tb_7 = exception_tb;
            exception_keeper_lineno_7 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_3__end);
            Py_DECREF(tmp_inplace_assign_attr_3__end);
            tmp_inplace_assign_attr_3__end = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_7;
            exception_value = exception_keeper_value_7;
            exception_tb = exception_keeper_tb_7;
            exception_lineno = exception_keeper_lineno_7;

            goto try_except_handler_9;
            // End of try:
            try_end_7:;
            goto try_end_8;
            // Exception handler code:
            try_except_handler_9:;
            exception_keeper_type_8 = exception_type;
            exception_keeper_value_8 = exception_value;
            exception_keeper_tb_8 = exception_tb;
            exception_keeper_lineno_8 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_3__start);
            Py_DECREF(tmp_inplace_assign_attr_3__start);
            tmp_inplace_assign_attr_3__start = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_8;
            exception_value = exception_keeper_value_8;
            exception_tb = exception_keeper_tb_8;
            exception_lineno = exception_keeper_lineno_8;

            goto try_except_handler_2;
            // End of try:
            try_end_8:;
            CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_3__end);
            Py_DECREF(tmp_inplace_assign_attr_3__end);
            tmp_inplace_assign_attr_3__end = NULL;

            CHECK_OBJECT((PyObject *)tmp_inplace_assign_attr_3__start);
            Py_DECREF(tmp_inplace_assign_attr_3__start);
            tmp_inplace_assign_attr_3__start = NULL;

            {
                nuitka_bool tmp_condition_result_6;
                PyObject *tmp_operand_name_3;
                PyObject *tmp_source_name_11;
                CHECK_OBJECT(par_self);
                tmp_source_name_11 = par_self;
                tmp_operand_name_3 = LOOKUP_ATTRIBUTE(tmp_source_name_11, const_str_plain__reversed);
                if (tmp_operand_name_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 98;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
                Py_DECREF(tmp_operand_name_3);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 98;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                tmp_condition_result_6 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                    goto branch_yes_6;
                } else {
                    goto branch_no_6;
                }
                branch_yes_6:;
                {
                    PyObject *tmp_assign_source_17;
                    PyObject *tmp_left_name_4;
                    PyObject *tmp_left_name_5;
                    PyObject *tmp_source_name_12;
                    PyObject *tmp_right_name_4;
                    PyObject *tmp_source_name_13;
                    PyObject *tmp_right_name_5;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_12 = par_self;
                    tmp_left_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_12, const_str_plain__last_order);
                    if (tmp_left_name_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 99;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT(par_self);
                    tmp_source_name_13 = par_self;
                    tmp_right_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_13, const_str_plain_SAMPLE_SIZE);
                    if (tmp_right_name_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_left_name_5);

                        exception_lineno = 99;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_left_name_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT(tmp_left_name_5, tmp_right_name_4);
                    Py_DECREF(tmp_left_name_5);
                    Py_DECREF(tmp_right_name_4);
                    if (tmp_left_name_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 99;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT(var_order);
                    tmp_right_name_5 = var_order;
                    tmp_assign_source_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_5);
                    Py_DECREF(tmp_left_name_4);
                    if (tmp_assign_source_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 99;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_i;
                        assert(old != NULL);
                        var_i = tmp_assign_source_17;
                        Py_DECREF(old);
                    }

                }
                {
                    PyObject *tmp_assign_source_18;
                    PyObject *tmp_subscribed_name_4;
                    PyObject *tmp_subscribed_name_5;
                    PyObject *tmp_source_name_14;
                    PyObject *tmp_subscript_name_4;
                    PyObject *tmp_subscript_name_5;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_14 = par_self;
                    tmp_subscribed_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_14, const_str_plain__model);
                    if (tmp_subscribed_name_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 100;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_subscript_name_4 = const_str_plain_precedence_matrix;
                    tmp_subscribed_name_4 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_5, tmp_subscript_name_4);
                    Py_DECREF(tmp_subscribed_name_5);
                    if (tmp_subscribed_name_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 100;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT(var_i);
                    tmp_subscript_name_5 = var_i;
                    tmp_assign_source_18 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_4, tmp_subscript_name_5);
                    Py_DECREF(tmp_subscribed_name_4);
                    if (tmp_assign_source_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 100;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_model;
                        var_model = tmp_assign_source_18;
                        Py_XDECREF(old);
                    }

                }
                goto branch_end_6;
                branch_no_6:;
                {
                    PyObject *tmp_assign_source_19;
                    PyObject *tmp_left_name_6;
                    PyObject *tmp_left_name_7;
                    PyObject *tmp_right_name_6;
                    PyObject *tmp_source_name_15;
                    PyObject *tmp_right_name_7;
                    PyObject *tmp_source_name_16;
                    CHECK_OBJECT(var_order);
                    tmp_left_name_7 = var_order;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_15 = par_self;
                    tmp_right_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_15, const_str_plain_SAMPLE_SIZE);
                    if (tmp_right_name_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 102;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_left_name_6 = BINARY_OPERATION_MUL_OBJECT_OBJECT(tmp_left_name_7, tmp_right_name_6);
                    Py_DECREF(tmp_right_name_6);
                    if (tmp_left_name_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 102;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT(par_self);
                    tmp_source_name_16 = par_self;
                    tmp_right_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_16, const_str_plain__last_order);
                    if (tmp_right_name_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_left_name_6);

                        exception_lineno = 102;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_assign_source_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT(tmp_left_name_6, tmp_right_name_7);
                    Py_DECREF(tmp_left_name_6);
                    Py_DECREF(tmp_right_name_7);
                    if (tmp_assign_source_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 102;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_i;
                        assert(old != NULL);
                        var_i = tmp_assign_source_19;
                        Py_DECREF(old);
                    }

                }
                {
                    PyObject *tmp_assign_source_20;
                    PyObject *tmp_subscribed_name_6;
                    PyObject *tmp_subscribed_name_7;
                    PyObject *tmp_source_name_17;
                    PyObject *tmp_subscript_name_6;
                    PyObject *tmp_subscript_name_7;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_17 = par_self;
                    tmp_subscribed_name_7 = LOOKUP_ATTRIBUTE(tmp_source_name_17, const_str_plain__model);
                    if (tmp_subscribed_name_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 103;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    tmp_subscript_name_6 = const_str_plain_precedence_matrix;
                    tmp_subscribed_name_6 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_7, tmp_subscript_name_6);
                    Py_DECREF(tmp_subscribed_name_7);
                    if (tmp_subscribed_name_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 103;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    CHECK_OBJECT(var_i);
                    tmp_subscript_name_7 = var_i;
                    tmp_assign_source_20 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_6, tmp_subscript_name_7);
                    Py_DECREF(tmp_subscribed_name_6);
                    if (tmp_assign_source_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 103;
                        type_description_1 = "ooooooooo";
                        goto try_except_handler_2;
                    }
                    {
                        PyObject *old = var_model;
                        var_model = tmp_assign_source_20;
                        Py_XDECREF(old);
                    }

                }
                branch_end_6:;
            }
            {
                PyObject *tmp_assign_source_21;
                PyObject *tmp_source_name_18;
                CHECK_OBJECT(par_self);
                tmp_source_name_18 = par_self;
                tmp_assign_source_21 = LOOKUP_ATTRIBUTE(tmp_source_name_18, const_str_plain__seq_counters);
                if (tmp_assign_source_21 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 104;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_2;
                }
                {
                    PyObject *old = tmp_inplace_assign_subscr_1__target;
                    tmp_inplace_assign_subscr_1__target = tmp_assign_source_21;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_22;
                CHECK_OBJECT(var_model);
                tmp_assign_source_22 = var_model;
                {
                    PyObject *old = tmp_inplace_assign_subscr_1__subscript;
                    tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_22;
                    Py_INCREF(tmp_inplace_assign_subscr_1__subscript);
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            {
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_left_name_8;
                PyObject *tmp_subscribed_name_8;
                PyObject *tmp_subscript_name_8;
                PyObject *tmp_right_name_8;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_ass_subscript_1;
                CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
                tmp_subscribed_name_8 = tmp_inplace_assign_subscr_1__target;
                CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
                tmp_subscript_name_8 = tmp_inplace_assign_subscr_1__subscript;
                tmp_left_name_8 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_8, tmp_subscript_name_8);
                if (tmp_left_name_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 104;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_11;
                }
                tmp_right_name_8 = const_int_pos_1;
                tmp_ass_subvalue_1 = BINARY_OPERATION(PyNumber_InPlaceAdd, tmp_left_name_8, tmp_right_name_8);
                Py_DECREF(tmp_left_name_8);
                if (tmp_ass_subvalue_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 104;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_11;
                }
                CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
                tmp_ass_subscribed_1 = tmp_inplace_assign_subscr_1__target;
                CHECK_OBJECT(tmp_inplace_assign_subscr_1__subscript);
                tmp_ass_subscript_1 = tmp_inplace_assign_subscr_1__subscript;
                tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
                Py_DECREF(tmp_ass_subvalue_1);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 104;
                    type_description_1 = "ooooooooo";
                    goto try_except_handler_11;
                }
            }
            goto try_end_9;
            // Exception handler code:
            try_except_handler_11:;
            exception_keeper_type_9 = exception_type;
            exception_keeper_value_9 = exception_value;
            exception_keeper_tb_9 = exception_tb;
            exception_keeper_lineno_9 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT((PyObject *)tmp_inplace_assign_subscr_1__target);
            Py_DECREF(tmp_inplace_assign_subscr_1__target);
            tmp_inplace_assign_subscr_1__target = NULL;

            CHECK_OBJECT((PyObject *)tmp_inplace_assign_subscr_1__subscript);
            Py_DECREF(tmp_inplace_assign_subscr_1__subscript);
            tmp_inplace_assign_subscr_1__subscript = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_9;
            exception_value = exception_keeper_value_9;
            exception_tb = exception_keeper_tb_9;
            exception_lineno = exception_keeper_lineno_9;

            goto try_except_handler_2;
            // End of try:
            try_end_9:;
            CHECK_OBJECT((PyObject *)tmp_inplace_assign_subscr_1__target);
            Py_DECREF(tmp_inplace_assign_subscr_1__target);
            tmp_inplace_assign_subscr_1__target = NULL;

            CHECK_OBJECT((PyObject *)tmp_inplace_assign_subscr_1__subscript);
            Py_DECREF(tmp_inplace_assign_subscr_1__subscript);
            tmp_inplace_assign_subscr_1__subscript = NULL;

            branch_no_5:;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(var_order);
        tmp_assattr_name_4 = var_order;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, const_str_plain__last_order, tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 83;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT((PyObject *)tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_subscribed_name_9;
        PyObject *tmp_source_name_19;
        PyObject *tmp_subscript_name_9;
        CHECK_OBJECT(par_self);
        tmp_source_name_19 = par_self;
        tmp_subscribed_name_9 = LOOKUP_ATTRIBUTE(tmp_source_name_19, const_str_plain__model);
        if (tmp_subscribed_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_9 = const_str_plain_charset_name;
        tmp_assign_source_23 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_9, tmp_subscript_name_9);
        Py_DECREF(tmp_subscribed_name_9);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_charset_name == NULL);
        var_charset_name = tmp_assign_source_23;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_source_name_20;
        PyObject *tmp_source_name_21;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT(par_self);
        tmp_source_name_20 = par_self;
        tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE(tmp_source_name_20, const_str_plain_state);
        if (tmp_compexpr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_ProbingState);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState);
        }

        if (tmp_mvar_value_2 == NULL) {
            Py_DECREF(tmp_compexpr_left_4);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2227 ], 34, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 108;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_21 = tmp_mvar_value_2;
        tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE(tmp_source_name_21, const_str_plain_DETECTING);
        if (tmp_compexpr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_4);

            exception_lineno = 108;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        Py_DECREF(tmp_compexpr_left_4);
        Py_DECREF(tmp_compexpr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_source_name_22;
            PyObject *tmp_source_name_23;
            CHECK_OBJECT(par_self);
            tmp_source_name_22 = par_self;
            tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE(tmp_source_name_22, const_str_plain__total_seqs);
            if (tmp_compexpr_left_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_23 = par_self;
            tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE(tmp_source_name_23, const_str_plain_SB_ENOUGH_REL_THRESHOLD);
            if (tmp_compexpr_right_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_compexpr_left_5);

                exception_lineno = 109;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
            Py_DECREF(tmp_compexpr_left_5);
            Py_DECREF(tmp_compexpr_right_5);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_1 = "ooooooooo";
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
                PyObject *tmp_assign_source_24;
                PyObject *tmp_called_instance_2;
                CHECK_OBJECT(par_self);
                tmp_called_instance_2 = par_self;
                frame_7cefac023d07496de37d7dc762980b18->m_frame.f_lineno = 110;
                tmp_assign_source_24 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, const_str_plain_get_confidence);
                if (tmp_assign_source_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 110;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                assert(var_confidence == NULL);
                var_confidence = tmp_assign_source_24;
            }
            {
                nuitka_bool tmp_condition_result_9;
                PyObject *tmp_compexpr_left_6;
                PyObject *tmp_compexpr_right_6;
                PyObject *tmp_source_name_24;
                CHECK_OBJECT(var_confidence);
                tmp_compexpr_left_6 = var_confidence;
                CHECK_OBJECT(par_self);
                tmp_source_name_24 = par_self;
                tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE(tmp_source_name_24, const_str_plain_POSITIVE_SHORTCUT_THRESHOLD);
                if (tmp_compexpr_right_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 111;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
                Py_DECREF(tmp_compexpr_right_6);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 111;
                    type_description_1 = "ooooooooo";
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
                    PyObject *tmp_called_instance_3;
                    PyObject *tmp_source_name_25;
                    PyObject *tmp_call_result_1;
                    PyObject *tmp_args_element_name_3;
                    PyObject *tmp_args_element_name_4;
                    PyObject *tmp_args_element_name_5;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_25 = par_self;
                    tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_source_name_25, const_str_plain_logger);
                    if (tmp_called_instance_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 112;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_args_element_name_3 = const_str_digest_5c731680c79b69f20d898c0f51595c71;
                    CHECK_OBJECT(var_charset_name);
                    tmp_args_element_name_4 = var_charset_name;
                    CHECK_OBJECT(var_confidence);
                    tmp_args_element_name_5 = var_confidence;
                    frame_7cefac023d07496de37d7dc762980b18->m_frame.f_lineno = 112;
                    {
                        PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
                        tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(tmp_called_instance_3, const_str_plain_debug, call_args);
                    }

                    Py_DECREF(tmp_called_instance_3);
                    if (tmp_call_result_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 112;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF(tmp_call_result_1);
                }
                {
                    PyObject *tmp_assattr_name_5;
                    PyObject *tmp_source_name_26;
                    PyObject *tmp_mvar_value_3;
                    PyObject *tmp_assattr_target_5;
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_ProbingState);

                    if (unlikely(tmp_mvar_value_3 == NULL)) {
                        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState);
                    }

                    if (tmp_mvar_value_3 == NULL) {

                        exception_type = PyExc_NameError;
                        Py_INCREF(exception_type);
                        exception_value = UNSTREAM_STRING(&constant_bin[ 2227 ], 34, 0);
                        exception_tb = NULL;
                        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                        CHAIN_EXCEPTION(exception_value);

                        exception_lineno = 114;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_26 = tmp_mvar_value_3;
                    tmp_assattr_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_26, const_str_plain_FOUND_IT);
                    if (tmp_assattr_name_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 114;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT(par_self);
                    tmp_assattr_target_5 = par_self;
                    tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, const_str_plain__state, tmp_assattr_name_5);
                    Py_DECREF(tmp_assattr_name_5);
                    if (tmp_result == false) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 114;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                }
                goto branch_end_9;
                branch_no_9:;
                {
                    nuitka_bool tmp_condition_result_10;
                    PyObject *tmp_compexpr_left_7;
                    PyObject *tmp_compexpr_right_7;
                    PyObject *tmp_source_name_27;
                    CHECK_OBJECT(var_confidence);
                    tmp_compexpr_left_7 = var_confidence;
                    CHECK_OBJECT(par_self);
                    tmp_source_name_27 = par_self;
                    tmp_compexpr_right_7 = LOOKUP_ATTRIBUTE(tmp_source_name_27, const_str_plain_NEGATIVE_SHORTCUT_THRESHOLD);
                    if (tmp_compexpr_right_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 115;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT(tmp_compexpr_left_7, tmp_compexpr_right_7);
                    Py_DECREF(tmp_compexpr_right_7);
                    if (tmp_res == -1) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 115;
                        type_description_1 = "ooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                        goto branch_yes_10;
                    } else {
                        goto branch_no_10;
                    }
                    branch_yes_10:;
                    {
                        PyObject *tmp_called_name_2;
                        PyObject *tmp_source_name_28;
                        PyObject *tmp_source_name_29;
                        PyObject *tmp_call_result_2;
                        PyObject *tmp_args_element_name_6;
                        PyObject *tmp_args_element_name_7;
                        PyObject *tmp_args_element_name_8;
                        PyObject *tmp_args_element_name_9;
                        PyObject *tmp_source_name_30;
                        CHECK_OBJECT(par_self);
                        tmp_source_name_29 = par_self;
                        tmp_source_name_28 = LOOKUP_ATTRIBUTE(tmp_source_name_29, const_str_plain_logger);
                        if (tmp_source_name_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 116;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_28, const_str_plain_debug);
                        Py_DECREF(tmp_source_name_28);
                        if (tmp_called_name_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 116;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_args_element_name_6 = const_str_digest_cf7be33442b9bb726212077666fa6b60;
                        CHECK_OBJECT(var_charset_name);
                        tmp_args_element_name_7 = var_charset_name;
                        CHECK_OBJECT(var_confidence);
                        tmp_args_element_name_8 = var_confidence;
                        CHECK_OBJECT(par_self);
                        tmp_source_name_30 = par_self;
                        tmp_args_element_name_9 = LOOKUP_ATTRIBUTE(tmp_source_name_30, const_str_plain_NEGATIVE_SHORTCUT_THRESHOLD);
                        if (tmp_args_element_name_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_called_name_2);

                            exception_lineno = 119;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        frame_7cefac023d07496de37d7dc762980b18->m_frame.f_lineno = 116;
                        {
                            PyObject *call_args[] = {tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9};
                            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS4(tmp_called_name_2, call_args);
                        }

                        Py_DECREF(tmp_called_name_2);
                        Py_DECREF(tmp_args_element_name_9);
                        if (tmp_call_result_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 116;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        Py_DECREF(tmp_call_result_2);
                    }
                    {
                        PyObject *tmp_assattr_name_6;
                        PyObject *tmp_source_name_31;
                        PyObject *tmp_mvar_value_4;
                        PyObject *tmp_assattr_target_6;
                        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_ProbingState);

                        if (unlikely(tmp_mvar_value_4 == NULL)) {
                            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_ProbingState);
                        }

                        if (tmp_mvar_value_4 == NULL) {

                            exception_type = PyExc_NameError;
                            Py_INCREF(exception_type);
                            exception_value = UNSTREAM_STRING(&constant_bin[ 2227 ], 34, 0);
                            exception_tb = NULL;
                            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                            CHAIN_EXCEPTION(exception_value);

                            exception_lineno = 120;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_source_name_31 = tmp_mvar_value_4;
                        tmp_assattr_name_6 = LOOKUP_ATTRIBUTE(tmp_source_name_31, const_str_plain_NOT_ME);
                        if (tmp_assattr_name_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 120;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT(par_self);
                        tmp_assattr_target_6 = par_self;
                        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, const_str_plain__state, tmp_assattr_name_6);
                        Py_DECREF(tmp_assattr_name_6);
                        if (tmp_result == false) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 120;
                            type_description_1 = "ooooooooo";
                            goto frame_exception_exit_1;
                        }
                    }
                    branch_no_10:;
                }
                branch_end_9:;
            }
            branch_no_8:;
        }
        branch_no_7:;
    }
    {
        PyObject *tmp_source_name_32;
        CHECK_OBJECT(par_self);
        tmp_source_name_32 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_source_name_32, const_str_plain_state);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7cefac023d07496de37d7dc762980b18);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7cefac023d07496de37d7dc762980b18);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7cefac023d07496de37d7dc762980b18);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7cefac023d07496de37d7dc762980b18, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_7cefac023d07496de37d7dc762980b18->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7cefac023d07496de37d7dc762980b18, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7cefac023d07496de37d7dc762980b18,
        type_description_1,
        par_self,
        par_byte_str,
        var_char_to_order_map,
        var_i,
        var_c,
        var_order,
        var_model,
        var_charset_name,
        var_confidence
    );


    // Release cached frame.
    if (frame_7cefac023d07496de37d7dc762980b18 == cache_frame_7cefac023d07496de37d7dc762980b18) {
        Py_DECREF(frame_7cefac023d07496de37d7dc762980b18);
    }
    cache_frame_7cefac023d07496de37d7dc762980b18 = NULL;

    assertFrameObject(frame_7cefac023d07496de37d7dc762980b18);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(chardet$sbcharsetprober$$$function_5_feed);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT((PyObject *)par_byte_str);
    Py_DECREF(par_byte_str);
    par_byte_str = NULL;

    Py_XDECREF(var_char_to_order_map);
    var_char_to_order_map = NULL;

    Py_XDECREF(var_i);
    var_i = NULL;

    Py_XDECREF(var_c);
    var_c = NULL;

    Py_XDECREF(var_order);
    var_order = NULL;

    Py_XDECREF(var_model);
    var_model = NULL;

    Py_XDECREF(var_charset_name);
    var_charset_name = NULL;

    Py_XDECREF(var_confidence);
    var_confidence = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_byte_str);
    par_byte_str = NULL;

    Py_XDECREF(var_char_to_order_map);
    var_char_to_order_map = NULL;

    Py_XDECREF(var_i);
    var_i = NULL;

    Py_XDECREF(var_c);
    var_c = NULL;

    Py_XDECREF(var_order);
    var_order = NULL;

    Py_XDECREF(var_model);
    var_model = NULL;

    Py_XDECREF(var_charset_name);
    var_charset_name = NULL;

    Py_XDECREF(var_confidence);
    var_confidence = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE(chardet$sbcharsetprober$$$function_5_feed);
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


static PyObject *impl_chardet$sbcharsetprober$$$function_6_get_confidence(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_r = NULL;
    struct Nuitka_FrameObject *frame_206fcbcb8b2f34a1868056a7ccca181e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_206fcbcb8b2f34a1868056a7ccca181e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_float_0_01;
        assert(var_r == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_r = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME(cache_frame_206fcbcb8b2f34a1868056a7ccca181e, codeobj_206fcbcb8b2f34a1868056a7ccca181e, module_chardet$sbcharsetprober, sizeof(void *)+sizeof(void *));
    frame_206fcbcb8b2f34a1868056a7ccca181e = cache_frame_206fcbcb8b2f34a1868056a7ccca181e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_206fcbcb8b2f34a1868056a7ccca181e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_206fcbcb8b2f34a1868056a7ccca181e) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT(par_self);
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_source_name_1, const_str_plain__total_seqs);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
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
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_right_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_right_name_3;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_subscript_name_2;
            tmp_left_name_3 = const_float_1_0;
            CHECK_OBJECT(par_self);
            tmp_source_name_2 = par_self;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain__seq_counters);
            if (tmp_subscribed_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_SequenceLikelihood);

            if (unlikely(tmp_mvar_value_1 == NULL)) {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_SequenceLikelihood);
            }

            if (tmp_mvar_value_1 == NULL) {
                Py_DECREF(tmp_subscribed_name_1);
                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 4152 ], 40, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 127;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_1;
            tmp_subscript_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_3, const_str_plain_POSITIVE);
            if (tmp_subscript_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_subscribed_name_1);

                exception_lineno = 127;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_1, tmp_subscript_name_1);
            Py_DECREF(tmp_subscribed_name_1);
            Py_DECREF(tmp_subscript_name_1);
            if (tmp_right_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_2 = BINARY_OPERATION_MUL_FLOAT_OBJECT(tmp_left_name_3, tmp_right_name_1);
            Py_DECREF(tmp_right_name_1);
            if (tmp_left_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_4 = par_self;
            tmp_right_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain__total_seqs);
            if (tmp_right_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_name_2);

                exception_lineno = 128;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_2);
            Py_DECREF(tmp_left_name_2);
            Py_DECREF(tmp_right_name_2);
            if (tmp_left_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_5 = par_self;
            tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE(tmp_source_name_5, const_str_plain__model);
            if (tmp_subscribed_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_name_1);

                exception_lineno = 128;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_2 = const_str_plain_typical_positive_ratio;
            tmp_right_name_3 = LOOKUP_SUBSCRIPT(tmp_subscribed_name_2, tmp_subscript_name_2);
            Py_DECREF(tmp_subscribed_name_2);
            if (tmp_right_name_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_name_1);

                exception_lineno = 128;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_3);
            Py_DECREF(tmp_left_name_1);
            Py_DECREF(tmp_right_name_3);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_r;
                assert(old != NULL);
                var_r = tmp_assign_source_2;
                Py_DECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_4;
            PyObject *tmp_source_name_6;
            PyObject *tmp_right_name_5;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT(var_r);
            tmp_left_name_5 = var_r;
            CHECK_OBJECT(par_self);
            tmp_source_name_6 = par_self;
            tmp_right_name_4 = LOOKUP_ATTRIBUTE(tmp_source_name_6, const_str_plain__freq_char);
            if (tmp_right_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_4 = BINARY_OPERATION_MUL_OBJECT_OBJECT(tmp_left_name_5, tmp_right_name_4);
            Py_DECREF(tmp_right_name_4);
            if (tmp_left_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT(par_self);
            tmp_source_name_7 = par_self;
            tmp_right_name_5 = LOOKUP_ATTRIBUTE(tmp_source_name_7, const_str_plain__total_char);
            if (tmp_right_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_left_name_4);

                exception_lineno = 129;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_5);
            Py_DECREF(tmp_left_name_4);
            Py_DECREF(tmp_right_name_5);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_r;
                assert(old != NULL);
                var_r = tmp_assign_source_3;
                Py_DECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(var_r);
            tmp_compexpr_left_2 = var_r;
            tmp_compexpr_right_2 = const_float_1_0;
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
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
                PyObject *tmp_assign_source_4;
                tmp_assign_source_4 = const_float_0_99;
                {
                    PyObject *old = var_r;
                    assert(old != NULL);
                    var_r = tmp_assign_source_4;
                    Py_INCREF(var_r);
                    Py_DECREF(old);
                }

            }
            branch_no_2:;
        }
        branch_no_1:;
    }
    if (var_r == NULL) {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF(exception_type);
        exception_value = PyUnicode_FromFormat("local variable '%s' referenced before assignment", "r");
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 132;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_r;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_206fcbcb8b2f34a1868056a7ccca181e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_206fcbcb8b2f34a1868056a7ccca181e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_206fcbcb8b2f34a1868056a7ccca181e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_206fcbcb8b2f34a1868056a7ccca181e, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_206fcbcb8b2f34a1868056a7ccca181e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_206fcbcb8b2f34a1868056a7ccca181e, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_206fcbcb8b2f34a1868056a7ccca181e,
        type_description_1,
        par_self,
        var_r
    );


    // Release cached frame.
    if (frame_206fcbcb8b2f34a1868056a7ccca181e == cache_frame_206fcbcb8b2f34a1868056a7ccca181e) {
        Py_DECREF(frame_206fcbcb8b2f34a1868056a7ccca181e);
    }
    cache_frame_206fcbcb8b2f34a1868056a7ccca181e = NULL;

    assertFrameObject(frame_206fcbcb8b2f34a1868056a7ccca181e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE(chardet$sbcharsetprober$$$function_6_get_confidence);
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_r);
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
    NUITKA_CANNOT_GET_HERE(chardet$sbcharsetprober$$$function_6_get_confidence);
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



static PyObject *MAKE_FUNCTION_chardet$sbcharsetprober$$$function_1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$sbcharsetprober$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_3ba77f3b2f058b3de9dee4dd377ef2b3,
#endif
        codeobj_6f4edf7d5d3aba4982c4caafb6d84f29,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$sbcharsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$sbcharsetprober$$$function_2_reset() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$sbcharsetprober$$$function_2_reset,
        const_str_plain_reset,
#if PYTHON_VERSION >= 300
        const_str_digest_cdf8ecb21e4445d113b6925210878bec,
#endif
        codeobj_1e71627bbbbfd2170de94cc586d5e557,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$sbcharsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$sbcharsetprober$$$function_3_charset_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$sbcharsetprober$$$function_3_charset_name,
        const_str_plain_charset_name,
#if PYTHON_VERSION >= 300
        const_str_digest_fd884ec645c9a91d8874cb91afdc5e07,
#endif
        codeobj_cb7ce670f74d53afc05c289e8bbc8a0d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$sbcharsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$sbcharsetprober$$$function_4_language() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$sbcharsetprober$$$function_4_language,
        const_str_plain_language,
#if PYTHON_VERSION >= 300
        const_str_digest_c08272f67221a87a52badcd419fa2278,
#endif
        codeobj_b57b286970ebbed5617e556ac9b48db2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$sbcharsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$sbcharsetprober$$$function_5_feed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$sbcharsetprober$$$function_5_feed,
        const_str_plain_feed,
#if PYTHON_VERSION >= 300
        const_str_digest_4fb51995e5b905c20563204dd0b1b59c,
#endif
        codeobj_7cefac023d07496de37d7dc762980b18,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$sbcharsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_chardet$sbcharsetprober$$$function_6_get_confidence() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_chardet$sbcharsetprober$$$function_6_get_confidence,
        const_str_plain_get_confidence,
#if PYTHON_VERSION >= 300
        const_str_digest_606ccc18eb59f35ee0ae380f2081b9c7,
#endif
        codeobj_206fcbcb8b2f34a1868056a7ccca181e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_chardet$sbcharsetprober,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_chardet$sbcharsetprober =
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

function_impl_code functable_chardet$sbcharsetprober[] = {
    impl_chardet$sbcharsetprober$$$function_1___init__,
    impl_chardet$sbcharsetprober$$$function_2_reset,
    impl_chardet$sbcharsetprober$$$function_3_charset_name,
    impl_chardet$sbcharsetprober$$$function_4_language,
    impl_chardet$sbcharsetprober$$$function_5_feed,
    impl_chardet$sbcharsetprober$$$function_6_get_confidence,
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

    function_impl_code *current = functable_chardet$sbcharsetprober;
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

    if (offset > sizeof(functable_chardet$sbcharsetprober) || offset < 0) {
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
        functable_chardet$sbcharsetprober[offset],
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
        module_chardet$sbcharsetprober,
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
PyObject *modulecode_chardet$sbcharsetprober(char const *module_full_name) {
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_chardet$sbcharsetprober;
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
    PRINT_STRING("chardet.sbcharsetprober: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("chardet.sbcharsetprober: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("chardet.sbcharsetprober: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initchardet$sbcharsetprober\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_chardet$sbcharsetprober = Py_InitModule4(
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
    mdef_chardet$sbcharsetprober.m_name = module_full_name;
    module_chardet$sbcharsetprober = PyModule_Create(&mdef_chardet$sbcharsetprober);
#endif

    moduledict_chardet$sbcharsetprober = MODULE_DICT(module_chardet$sbcharsetprober);

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
        moduledict_chardet$sbcharsetprober,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_chardet$sbcharsetprober,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_chardet$sbcharsetprober,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$sbcharsetprober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_chardet$sbcharsetprober,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_chardet$sbcharsetprober);

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyDict_SetItemString(PyImport_GetModuleDict(), module_full_name, module_chardet$sbcharsetprober);
        assert(r != -1);
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___name__),
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

        UPDATE_STRING_DICT1(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_a3f6895e1c4548f45c0348e52f23c33c;
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
    PyObject *locals_chardet$sbcharsetprober_33 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_30f935b56db4cf9a6c1afaf78542e897_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_30f935b56db4cf9a6c1afaf78542e897_2 = NULL;
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
        UPDATE_STRING_DICT0(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_a5dcd2b93c0e78a2f5cb28a221f120f5;
        UPDATE_STRING_DICT0(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_a3f6895e1c4548f45c0348e52f23c33c = MAKE_MODULE_FRAME(codeobj_a3f6895e1c4548f45c0348e52f23c33c, module_chardet$sbcharsetprober);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_a3f6895e1c4548f45c0348e52f23c33c);
    assert(Py_REFCNT(frame_a3f6895e1c4548f45c0348e52f23c33c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_a5dcd2b93c0e78a2f5cb28a221f120f5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___spec__);

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___spec__);

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
        UPDATE_STRING_DICT0(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_charsetprober;
        tmp_globals_name_1 = (PyObject *)moduledict_chardet$sbcharsetprober;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_CharSetProber_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_a3f6895e1c4548f45c0348e52f23c33c->m_frame.f_lineno = 29;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
           tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_chardet$sbcharsetprober,
                const_str_plain_CharSetProber,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_CharSetProber);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_CharSetProber, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_enums;
        tmp_globals_name_2 = (PyObject *)moduledict_chardet$sbcharsetprober;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_363bc5331ad9aa419ab396f9f01ea793_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_a3f6895e1c4548f45c0348e52f23c33c->m_frame.f_lineno = 30;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
           tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_chardet$sbcharsetprober,
                const_str_plain_CharacterCategory,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_CharacterCategory);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_CharacterCategory, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
           tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_chardet$sbcharsetprober,
                const_str_plain_ProbingState,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_ProbingState);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_ProbingState, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
           tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_chardet$sbcharsetprober,
                const_str_plain_SequenceLikelihood,
                const_int_pos_1
            );
        } else {
           tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_SequenceLikelihood);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_SequenceLikelihood, tmp_assign_source_8);
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_CharSetProber);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_CharSetProber);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2850 ], 35, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 33;

            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_assign_source_9 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_9, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_10 = impl___internal__$$$function_3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
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


            exception_lineno = 33;

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


            exception_lineno = 33;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

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


            exception_lineno = 33;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

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
        tmp_assign_source_12 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_12;
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


            exception_lineno = 33;

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


            exception_lineno = 33;

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
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_source_name_2, const_str_plain___prepare__);
            if (tmp_called_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto try_except_handler_2;
            }
            tmp_tuple_element_2 = const_str_plain_SingleByteCharSetProber;
            tmp_args_name_1 = PyTuple_New(2);
            Py_INCREF(tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_2);
            PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_a3f6895e1c4548f45c0348e52f23c33c->m_frame.f_lineno = 33;
            tmp_assign_source_13 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_name_1);
            if (tmp_assign_source_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto try_except_handler_2;
            }
            assert(tmp_class_creation_1__prepared == NULL);
            tmp_class_creation_1__prepared = tmp_assign_source_13;
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


                exception_lineno = 33;

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
                PyObject *tmp_tuple_element_3;
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
                tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 33;

                    goto try_except_handler_2;
                }
                tmp_right_name_1 = PyTuple_New(2);
                PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_3);
                CHECK_OBJECT(tmp_class_creation_1__prepared);
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_4 = BUILTIN_TYPE1(tmp_type_arg_2);
                assert(!(tmp_source_name_4 == NULL));
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_source_name_4, const_str_plain___name__);
                Py_DECREF(tmp_source_name_4);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_right_name_1);

                    exception_lineno = 33;

                    goto try_except_handler_2;
                }
                PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_3);
                tmp_raise_value_1 = BINARY_OPERATION_MOD_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
                Py_DECREF(tmp_right_name_1);
                if (tmp_raise_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 33;

                    goto try_except_handler_2;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF(tmp_raise_type_1);
                exception_value = tmp_raise_value_1;
                exception_lineno = 33;
                RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

                goto try_except_handler_2;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_14;
            tmp_assign_source_14 = PyDict_New();
            assert(tmp_class_creation_1__prepared == NULL);
            tmp_class_creation_1__prepared = tmp_assign_source_14;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_15;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_chardet$sbcharsetprober_33 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_f68e2e09664f76100b3c042e93356092;
        tmp_res = PyObject_SetItem(locals_chardet$sbcharsetprober_33, const_str_plain___module__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_SingleByteCharSetProber;
        tmp_res = PyObject_SetItem(locals_chardet$sbcharsetprober_33, const_str_plain___qualname__, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto try_except_handler_4;
        }
        MAKE_OR_REUSE_FRAME(cache_frame_30f935b56db4cf9a6c1afaf78542e897_2, codeobj_30f935b56db4cf9a6c1afaf78542e897, module_chardet$sbcharsetprober, sizeof(void *));
        frame_30f935b56db4cf9a6c1afaf78542e897_2 = cache_frame_30f935b56db4cf9a6c1afaf78542e897_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_30f935b56db4cf9a6c1afaf78542e897_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_30f935b56db4cf9a6c1afaf78542e897_2) == 2); // Frame stack

        // Framed code:
        tmp_dictset_value = const_int_pos_64;
        tmp_res = PyObject_SetItem(locals_chardet$sbcharsetprober_33, const_str_plain_SAMPLE_SIZE, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = const_int_pos_1024;
        tmp_res = PyObject_SetItem(locals_chardet$sbcharsetprober_33, const_str_plain_SB_ENOUGH_REL_THRESHOLD, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = const_float_0_95;
        tmp_res = PyObject_SetItem(locals_chardet$sbcharsetprober_33, const_str_plain_POSITIVE_SHORTCUT_THRESHOLD, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = const_float_0_05;
        tmp_res = PyObject_SetItem(locals_chardet$sbcharsetprober_33, const_str_plain_NEGATIVE_SHORTCUT_THRESHOLD, tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_false_none_tuple;
            Py_INCREF(tmp_defaults_1);
            tmp_dictset_value = MAKE_FUNCTION_chardet$sbcharsetprober$$$function_1___init__(tmp_defaults_1);



            tmp_res = PyObject_SetItem(locals_chardet$sbcharsetprober_33, const_str_plain___init__, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_chardet$sbcharsetprober$$$function_2_reset();



        tmp_res = PyObject_SetItem(locals_chardet$sbcharsetprober_33, const_str_plain_reset, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_2;
            tmp_res = MAPPING_HAS_ITEM(locals_chardet$sbcharsetprober_33, const_str_plain_property);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
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
            tmp_called_name_2 = PyObject_GetItem(locals_chardet$sbcharsetprober_33, const_str_plain_property);

            if (tmp_called_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 730 ], 30, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_1 = MAKE_FUNCTION_chardet$sbcharsetprober$$$function_3_charset_name();



            frame_30f935b56db4cf9a6c1afaf78542e897_2->m_frame.f_lineno = 63;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_element_name_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_name_3 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_2 = MAKE_FUNCTION_chardet$sbcharsetprober$$$function_3_charset_name();



            frame_30f935b56db4cf9a6c1afaf78542e897_2->m_frame.f_lineno = 63;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
            Py_DECREF(tmp_args_element_name_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_chardet$sbcharsetprober_33, const_str_plain_charset_name, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_4;
            tmp_res = MAPPING_HAS_ITEM(locals_chardet$sbcharsetprober_33, const_str_plain_property);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
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
            tmp_called_name_4 = PyObject_GetItem(locals_chardet$sbcharsetprober_33, const_str_plain_property);

            if (tmp_called_name_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {

                exception_type = PyExc_NameError;
                Py_INCREF(exception_type);
                exception_value = UNSTREAM_STRING(&constant_bin[ 730 ], 30, 0);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_name_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_name_3 = MAKE_FUNCTION_chardet$sbcharsetprober$$$function_4_language();



            frame_30f935b56db4cf9a6c1afaf78542e897_2->m_frame.f_lineno = 70;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_3);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_element_name_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_name_5 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_4 = MAKE_FUNCTION_chardet$sbcharsetprober$$$function_4_language();



            frame_30f935b56db4cf9a6c1afaf78542e897_2->m_frame.f_lineno = 70;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_4);
            Py_DECREF(tmp_args_element_name_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_chardet$sbcharsetprober_33, const_str_plain_language, tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_chardet$sbcharsetprober$$$function_5_feed();



        tmp_res = PyObject_SetItem(locals_chardet$sbcharsetprober_33, const_str_plain_feed, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_chardet$sbcharsetprober$$$function_6_get_confidence();



        tmp_res = PyObject_SetItem(locals_chardet$sbcharsetprober_33, const_str_plain_get_confidence, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_30f935b56db4cf9a6c1afaf78542e897_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_30f935b56db4cf9a6c1afaf78542e897_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_30f935b56db4cf9a6c1afaf78542e897_2, exception_lineno);
        }
        else if (exception_tb->tb_frame != &frame_30f935b56db4cf9a6c1afaf78542e897_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_30f935b56db4cf9a6c1afaf78542e897_2, exception_lineno);
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_30f935b56db4cf9a6c1afaf78542e897_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if (frame_30f935b56db4cf9a6c1afaf78542e897_2 == cache_frame_30f935b56db4cf9a6c1afaf78542e897_2) {
            Py_DECREF(frame_30f935b56db4cf9a6c1afaf78542e897_2);
        }
        cache_frame_30f935b56db4cf9a6c1afaf78542e897_2 = NULL;

        assertFrameObject(frame_30f935b56db4cf9a6c1afaf78542e897_2);

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
            nuitka_bool tmp_condition_result_8;
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


                exception_lineno = 33;

                goto try_except_handler_4;
            }
            tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            branch_yes_4:;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_dictset_value = tmp_class_creation_1__bases_orig;
            tmp_res = PyObject_SetItem(locals_chardet$sbcharsetprober_33, const_str_plain___orig_bases__, tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto try_except_handler_4;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_6 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_SingleByteCharSetProber;
            tmp_args_name_2 = PyTuple_New(3);
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_chardet$sbcharsetprober_33;
            Py_INCREF(tmp_tuple_element_4);
            PyTuple_SET_ITEM(tmp_args_name_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_a3f6895e1c4548f45c0348e52f23c33c->m_frame.f_lineno = 33;
            tmp_assign_source_16 = CALL_FUNCTION(tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_16;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_15 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(chardet$sbcharsetprober);
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_chardet$sbcharsetprober_33);
        locals_chardet$sbcharsetprober_33 = NULL;
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

        Py_DECREF(locals_chardet$sbcharsetprober_33);
        locals_chardet$sbcharsetprober_33 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE(chardet$sbcharsetprober);
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
        NUITKA_CANNOT_GET_HERE(chardet$sbcharsetprober);
        return NULL;
        outline_exception_1:;
        exception_lineno = 33;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_chardet$sbcharsetprober, (Nuitka_StringObject *)const_str_plain_SingleByteCharSetProber, tmp_assign_source_15);
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a3f6895e1c4548f45c0348e52f23c33c);
#endif
    popFrameStack();

    assertFrameObject(frame_a3f6895e1c4548f45c0348e52f23c33c);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a3f6895e1c4548f45c0348e52f23c33c);
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK(frame_a3f6895e1c4548f45c0348e52f23c33c, exception_lineno);
    }
    else if (exception_tb->tb_frame != &frame_a3f6895e1c4548f45c0348e52f23c33c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a3f6895e1c4548f45c0348e52f23c33c, exception_lineno);
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


    return module_chardet$sbcharsetprober;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
