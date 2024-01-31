/* Generated code for Python module 'google.protobuf.internal.wire_format'
 * created by Nuitka version 0.9.6
 *
 * This code is in part copyright 2022 Kay Hayen.
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

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_google$protobuf$internal$wire_format" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$protobuf$internal$wire_format;
PyDictObject *moduledict_google$protobuf$internal$wire_format;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[141];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[141];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("google.protobuf.internal.wire_format"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 141; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_google$protobuf$internal$wire_format(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 141; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_f069c785e738602b6994dc4623e59e09;
static PyCodeObject *codeobj_5439316352cbdc7ab56bae8c97a574cb;
static PyCodeObject *codeobj_1d05ebf7b908de4c627afbca2ef7f4d5;
static PyCodeObject *codeobj_ed23be336e00ed498f4d96b0efbdda57;
static PyCodeObject *codeobj_aa8bc756f7d0f376783294ed5656426d;
static PyCodeObject *codeobj_2d3d1d87c246861444beb0c1736b7413;
static PyCodeObject *codeobj_7d85e7beb5d29a414008f5c88513bc7c;
static PyCodeObject *codeobj_67b3a63f0295da586aef24dbca084094;
static PyCodeObject *codeobj_1487711dfb9bcf38e74e927dd3ea5bba;
static PyCodeObject *codeobj_e3967daf2ebf5b1b4195dfaa41b0cfa4;
static PyCodeObject *codeobj_10e3e3fa5f99325b9f91e654a4f0ddc8;
static PyCodeObject *codeobj_908572da6c11bb717ae86caa71f7adad;
static PyCodeObject *codeobj_eeee05abecdeb554e3b4b9b7e1f26aa8;
static PyCodeObject *codeobj_120cddb79aeb9ccd03137ab204fd4323;
static PyCodeObject *codeobj_aba8576a1711fc42c98682eeffd6b6be;
static PyCodeObject *codeobj_f70cf6c8812775071032f484b17d1be8;
static PyCodeObject *codeobj_9204e5652f8f8194d50e0116d473461f;
static PyCodeObject *codeobj_8bb06582490bd3bab9d0d92ad798c264;
static PyCodeObject *codeobj_d2283bf7a40782a4b07e6c70774e1757;
static PyCodeObject *codeobj_734f9b7c3de9ecc0989b5400a8a19716;
static PyCodeObject *codeobj_d36eeb4b56a5057d628f01d9c1593c3a;
static PyCodeObject *codeobj_47f0a51fe1809d1bf8a658d0dc02e388;
static PyCodeObject *codeobj_b183b0cd34f8035efb705eb74ae728ec;
static PyCodeObject *codeobj_ffadcdcb7c7b0cab4367b500f0f1bd27;
static PyCodeObject *codeobj_6f631569bf60c3228115c1ac06ca598a;
static PyCodeObject *codeobj_1f930cf8e7b456ba9f716a291b2f105b;
static PyCodeObject *codeobj_bf4f9c5ea5150db7c6a250327d2be089;
static PyCodeObject *codeobj_f2474260fad06296df4390e138643f97;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[116]); CHECK_OBJECT(module_filename_obj);
    codeobj_f069c785e738602b6994dc4623e59e09 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[117], NULL, NULL, 0, 0, 0);
    codeobj_5439316352cbdc7ab56bae8c97a574cb = MAKE_CODEOBJECT(module_filename_obj, 175, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[104], mod_consts[118], NULL, 2, 0, 0);
    codeobj_1d05ebf7b908de4c627afbca2ef7f4d5 = MAKE_CODEOBJECT(module_filename_obj, 187, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[118], NULL, 2, 0, 0);
    codeobj_ed23be336e00ed498f4d96b0efbdda57 = MAKE_CODEOBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[103], mod_consts[119], NULL, 2, 0, 0);
    codeobj_aa8bc756f7d0f376783294ed5656426d = MAKE_CODEOBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[105], mod_consts[120], NULL, 2, 0, 0);
    codeobj_2d3d1d87c246861444beb0c1736b7413 = MAKE_CODEOBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[98], mod_consts[121], NULL, 2, 0, 0);
    codeobj_7d85e7beb5d29a414008f5c88513bc7c = MAKE_CODEOBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[99], mod_consts[122], NULL, 2, 0, 0);
    codeobj_67b3a63f0295da586aef24dbca084094 = MAKE_CODEOBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[102], mod_consts[123], NULL, 2, 0, 0);
    codeobj_1487711dfb9bcf38e74e927dd3ea5bba = MAKE_CODEOBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[107], mod_consts[124], NULL, 2, 0, 0);
    codeobj_e3967daf2ebf5b1b4195dfaa41b0cfa4 = MAKE_CODEOBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[94], mod_consts[125], NULL, 2, 0, 0);
    codeobj_10e3e3fa5f99325b9f91e654a4f0ddc8 = MAKE_CODEOBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[95], mod_consts[126], NULL, 1, 0, 0);
    codeobj_908572da6c11bb717ae86caa71f7adad = MAKE_CODEOBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[127], NULL, 2, 0, 0);
    codeobj_eeee05abecdeb554e3b4b9b7e1f26aa8 = MAKE_CODEOBJECT(module_filename_obj, 259, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[115], mod_consts[128], NULL, 1, 0, 0);
    codeobj_120cddb79aeb9ccd03137ab204fd4323 = MAKE_CODEOBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[108], mod_consts[124], NULL, 2, 0, 0);
    codeobj_aba8576a1711fc42c98682eeffd6b6be = MAKE_CODEOBJECT(module_filename_obj, 204, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[109], mod_consts[129], NULL, 2, 0, 0);
    codeobj_f70cf6c8812775071032f484b17d1be8 = MAKE_CODEOBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[30], mod_consts[130], NULL, 2, 0, 0);
    codeobj_9204e5652f8f8194d50e0116d473461f = MAKE_CODEOBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[100], mod_consts[131], NULL, 2, 0, 0);
    codeobj_8bb06582490bd3bab9d0d92ad798c264 = MAKE_CODEOBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[101], mod_consts[132], NULL, 2, 0, 0);
    codeobj_d2283bf7a40782a4b07e6c70774e1757 = MAKE_CODEOBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[96], mod_consts[125], NULL, 2, 0, 0);
    codeobj_734f9b7c3de9ecc0989b5400a8a19716 = MAKE_CODEOBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[97], mod_consts[127], NULL, 2, 0, 0);
    codeobj_d36eeb4b56a5057d628f01d9c1593c3a = MAKE_CODEOBJECT(module_filename_obj, 183, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[133], NULL, 2, 0, 0);
    codeobj_47f0a51fe1809d1bf8a658d0dc02e388 = MAKE_CODEOBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[134], NULL, 1, 0, 0);
    codeobj_b183b0cd34f8035efb705eb74ae728ec = MAKE_CODEOBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[18], mod_consts[135], NULL, 2, 0, 0);
    codeobj_ffadcdcb7c7b0cab4367b500f0f1bd27 = MAKE_CODEOBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[136], NULL, 2, 0, 0);
    codeobj_6f631569bf60c3228115c1ac06ca598a = MAKE_CODEOBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[92], mod_consts[137], NULL, 1, 0, 0);
    codeobj_1f930cf8e7b456ba9f716a291b2f105b = MAKE_CODEOBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[93], mod_consts[138], NULL, 1, 0, 0);
    codeobj_bf4f9c5ea5150db7c6a250327d2be089 = MAKE_CODEOBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[138], NULL, 1, 0, 0);
    codeobj_f2474260fad06296df4390e138643f97 = MAKE_CODEOBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[139], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__10_SInt32ByteSize();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__11_SInt64ByteSize();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__12_Fixed32ByteSize();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__13_Fixed64ByteSize();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__14_SFixed32ByteSize();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__15_SFixed64ByteSize();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__16_FloatByteSize();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__17_DoubleByteSize();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__18_BoolByteSize();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__19_EnumByteSize();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__1_PackTag();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__20_StringByteSize();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__21_BytesByteSize();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__22_GroupByteSize();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__23_MessageByteSize();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__24_MessageSetItemByteSize();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__25_TagByteSize();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__26__VarUInt64ByteSizeNoTag();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__27_IsTypePackable();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__2_UnpackTag();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__3_ZigZagEncode();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__4_ZigZagDecode();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__5_Int32ByteSize();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__6_Int32ByteSizeNoTag();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__7_Int64ByteSize();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__8_UInt32ByteSize();


static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__9_UInt64ByteSize();


// The module function definitions.
static PyObject *impl_google$protobuf$internal$wire_format$$$function__1_PackTag(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field_number = python_pars[0];
    PyObject *par_wire_type = python_pars[1];
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    struct Nuitka_FrameObject *frame_f70cf6c8812775071032f484b17d1be8;
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
    static struct Nuitka_FrameObject *cache_frame_f70cf6c8812775071032f484b17d1be8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f70cf6c8812775071032f484b17d1be8)) {
        Py_XDECREF(cache_frame_f70cf6c8812775071032f484b17d1be8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f70cf6c8812775071032f484b17d1be8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f70cf6c8812775071032f484b17d1be8 = MAKE_FUNCTION_FRAME(codeobj_f70cf6c8812775071032f484b17d1be8, module_google$protobuf$internal$wire_format, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f70cf6c8812775071032f484b17d1be8->m_type_description == NULL);
    frame_f70cf6c8812775071032f484b17d1be8 = cache_frame_f70cf6c8812775071032f484b17d1be8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f70cf6c8812775071032f484b17d1be8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f70cf6c8812775071032f484b17d1be8) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        {
            PyObject *tmp_assign_source_1;
            CHECK_OBJECT(par_wire_type);
            tmp_assign_source_1 = par_wire_type;
            assert(tmp_comparison_chain_1__operand_2 == NULL);
            Py_INCREF(tmp_assign_source_1);
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            tmp_cmp_expr_left_1 = mod_consts[0];
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_right_1 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_1 = "oo";
                goto try_except_handler_1;
            }
            assert(tmp_comparison_chain_1__comparison_result == NULL);
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
        }
        {
            bool tmp_condition_result_2;
            PyObject *tmp_operand_value_2;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_value_2 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_1 = "oo";
                goto try_except_handler_1;
            }
            tmp_condition_result_2 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_2 != false) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
        }
        branch_yes_2:;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
        Py_INCREF(tmp_operand_value_1);
        goto try_return_handler_1;
        branch_no_2:;
        {
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_left_2 = tmp_comparison_chain_1__operand_2;
            tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
                tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_cmp_expr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_1 = "oo";
                goto try_except_handler_1;
            }
            tmp_operand_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_operand_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_1 = "oo";
                goto try_except_handler_1;
            }
            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        Py_DECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        goto outline_result_1;
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

        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
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
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_1 = mod_consts[4];
        CHECK_OBJECT(par_wire_type);
        tmp_right_value_1 = par_wire_type;
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f70cf6c8812775071032f484b17d1be8->m_frame.f_lineno = 89;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 89;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_left_value_2;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_2;
        PyObject *tmp_right_value_3;
        CHECK_OBJECT(par_field_number);
        tmp_left_value_3 = par_field_number;
        tmp_right_value_2 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_right_value_2 == NULL)) {
            tmp_right_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_2 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_OBJECT(tmp_left_value_3, tmp_right_value_2);
        if (tmp_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_wire_type);
        tmp_right_value_3 = par_wire_type;
        tmp_return_value = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_2, tmp_right_value_3);
        Py_DECREF(tmp_left_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f70cf6c8812775071032f484b17d1be8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f70cf6c8812775071032f484b17d1be8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f70cf6c8812775071032f484b17d1be8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f70cf6c8812775071032f484b17d1be8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f70cf6c8812775071032f484b17d1be8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f70cf6c8812775071032f484b17d1be8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f70cf6c8812775071032f484b17d1be8,
        type_description_1,
        par_field_number,
        par_wire_type
    );


    // Release cached frame if used for exception.
    if (frame_f70cf6c8812775071032f484b17d1be8 == cache_frame_f70cf6c8812775071032f484b17d1be8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f70cf6c8812775071032f484b17d1be8);
        cache_frame_f70cf6c8812775071032f484b17d1be8 = NULL;
    }

    assertFrameObject(frame_f70cf6c8812775071032f484b17d1be8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_wire_type);
    Py_DECREF(par_wire_type);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_wire_type);
    Py_DECREF(par_wire_type);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__2_UnpackTag(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tag = python_pars[0];
    struct Nuitka_FrameObject *frame_6f631569bf60c3228115c1ac06ca598a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6f631569bf60c3228115c1ac06ca598a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6f631569bf60c3228115c1ac06ca598a)) {
        Py_XDECREF(cache_frame_6f631569bf60c3228115c1ac06ca598a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6f631569bf60c3228115c1ac06ca598a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6f631569bf60c3228115c1ac06ca598a = MAKE_FUNCTION_FRAME(codeobj_6f631569bf60c3228115c1ac06ca598a, module_google$protobuf$internal$wire_format, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6f631569bf60c3228115c1ac06ca598a->m_type_description == NULL);
    frame_6f631569bf60c3228115c1ac06ca598a = cache_frame_6f631569bf60c3228115c1ac06ca598a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6f631569bf60c3228115c1ac06ca598a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6f631569bf60c3228115c1ac06ca598a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        CHECK_OBJECT(par_tag);
        tmp_left_value_1 = par_tag;
        tmp_right_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_right_value_1 == NULL)) {
            tmp_right_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(2);
        {
            PyObject *tmp_left_value_2;
            PyObject *tmp_right_value_2;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_tag);
            tmp_left_value_2 = par_tag;
            tmp_right_value_2 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_right_value_2 == NULL)) {
                tmp_right_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
            }

            if (tmp_right_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_left_value_2, tmp_right_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6f631569bf60c3228115c1ac06ca598a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6f631569bf60c3228115c1ac06ca598a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6f631569bf60c3228115c1ac06ca598a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6f631569bf60c3228115c1ac06ca598a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6f631569bf60c3228115c1ac06ca598a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6f631569bf60c3228115c1ac06ca598a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6f631569bf60c3228115c1ac06ca598a,
        type_description_1,
        par_tag
    );


    // Release cached frame if used for exception.
    if (frame_6f631569bf60c3228115c1ac06ca598a == cache_frame_6f631569bf60c3228115c1ac06ca598a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6f631569bf60c3228115c1ac06ca598a);
        cache_frame_6f631569bf60c3228115c1ac06ca598a = NULL;
    }

    assertFrameObject(frame_6f631569bf60c3228115c1ac06ca598a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_tag);
    Py_DECREF(par_tag);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_tag);
    Py_DECREF(par_tag);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__3_ZigZagEncode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_bf4f9c5ea5150db7c6a250327d2be089;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bf4f9c5ea5150db7c6a250327d2be089 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bf4f9c5ea5150db7c6a250327d2be089)) {
        Py_XDECREF(cache_frame_bf4f9c5ea5150db7c6a250327d2be089);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bf4f9c5ea5150db7c6a250327d2be089 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bf4f9c5ea5150db7c6a250327d2be089 = MAKE_FUNCTION_FRAME(codeobj_bf4f9c5ea5150db7c6a250327d2be089, module_google$protobuf$internal$wire_format, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bf4f9c5ea5150db7c6a250327d2be089->m_type_description == NULL);
    frame_bf4f9c5ea5150db7c6a250327d2be089 = cache_frame_bf4f9c5ea5150db7c6a250327d2be089;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bf4f9c5ea5150db7c6a250327d2be089);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bf4f9c5ea5150db7c6a250327d2be089) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = mod_consts[0];
        tmp_condition_result_1 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        CHECK_OBJECT(par_value);
        tmp_left_value_1 = par_value;
        tmp_right_value_1 = mod_consts[9];
        tmp_return_value = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_left_value_1, tmp_right_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_left_value_2;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_2;
        PyObject *tmp_right_value_3;
        CHECK_OBJECT(par_value);
        tmp_left_value_3 = par_value;
        tmp_right_value_2 = mod_consts[9];
        tmp_left_value_2 = BINARY_OPERATION_LSHIFT_OBJECT_OBJECT_LONG(tmp_left_value_3, tmp_right_value_2);
        if (tmp_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_value_3 = mod_consts[10];
        tmp_return_value = BINARY_OPERATION_BITXOR_OBJECT_OBJECT_LONG(tmp_left_value_2, tmp_right_value_3);
        Py_DECREF(tmp_left_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bf4f9c5ea5150db7c6a250327d2be089);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bf4f9c5ea5150db7c6a250327d2be089);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bf4f9c5ea5150db7c6a250327d2be089);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bf4f9c5ea5150db7c6a250327d2be089, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf4f9c5ea5150db7c6a250327d2be089->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf4f9c5ea5150db7c6a250327d2be089, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bf4f9c5ea5150db7c6a250327d2be089,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_bf4f9c5ea5150db7c6a250327d2be089 == cache_frame_bf4f9c5ea5150db7c6a250327d2be089) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bf4f9c5ea5150db7c6a250327d2be089);
        cache_frame_bf4f9c5ea5150db7c6a250327d2be089 = NULL;
    }

    assertFrameObject(frame_bf4f9c5ea5150db7c6a250327d2be089);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__4_ZigZagDecode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_1f930cf8e7b456ba9f716a291b2f105b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1f930cf8e7b456ba9f716a291b2f105b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1f930cf8e7b456ba9f716a291b2f105b)) {
        Py_XDECREF(cache_frame_1f930cf8e7b456ba9f716a291b2f105b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1f930cf8e7b456ba9f716a291b2f105b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1f930cf8e7b456ba9f716a291b2f105b = MAKE_FUNCTION_FRAME(codeobj_1f930cf8e7b456ba9f716a291b2f105b, module_google$protobuf$internal$wire_format, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1f930cf8e7b456ba9f716a291b2f105b->m_type_description == NULL);
    frame_1f930cf8e7b456ba9f716a291b2f105b = cache_frame_1f930cf8e7b456ba9f716a291b2f105b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1f930cf8e7b456ba9f716a291b2f105b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1f930cf8e7b456ba9f716a291b2f105b) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        CHECK_OBJECT(par_value);
        tmp_left_value_1 = par_value;
        tmp_right_value_1 = mod_consts[9];
        tmp_operand_value_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_left_value_1, tmp_right_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        CHECK_OBJECT(par_value);
        tmp_left_value_2 = par_value;
        tmp_right_value_2 = mod_consts[9];
        tmp_return_value = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_left_value_2, tmp_right_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_left_value_3;
        PyObject *tmp_left_value_4;
        PyObject *tmp_right_value_3;
        PyObject *tmp_right_value_4;
        CHECK_OBJECT(par_value);
        tmp_left_value_4 = par_value;
        tmp_right_value_3 = mod_consts[9];
        tmp_left_value_3 = BINARY_OPERATION_RSHIFT_OBJECT_OBJECT_LONG(tmp_left_value_4, tmp_right_value_3);
        if (tmp_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_right_value_4 = mod_consts[10];
        tmp_return_value = BINARY_OPERATION_BITXOR_OBJECT_OBJECT_LONG(tmp_left_value_3, tmp_right_value_4);
        Py_DECREF(tmp_left_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1f930cf8e7b456ba9f716a291b2f105b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1f930cf8e7b456ba9f716a291b2f105b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1f930cf8e7b456ba9f716a291b2f105b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1f930cf8e7b456ba9f716a291b2f105b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1f930cf8e7b456ba9f716a291b2f105b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1f930cf8e7b456ba9f716a291b2f105b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1f930cf8e7b456ba9f716a291b2f105b,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_1f930cf8e7b456ba9f716a291b2f105b == cache_frame_1f930cf8e7b456ba9f716a291b2f105b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1f930cf8e7b456ba9f716a291b2f105b);
        cache_frame_1f930cf8e7b456ba9f716a291b2f105b = NULL;
    }

    assertFrameObject(frame_1f930cf8e7b456ba9f716a291b2f105b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__5_Int32ByteSize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field_number = python_pars[0];
    PyObject *par_int32 = python_pars[1];
    struct Nuitka_FrameObject *frame_e3967daf2ebf5b1b4195dfaa41b0cfa4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e3967daf2ebf5b1b4195dfaa41b0cfa4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e3967daf2ebf5b1b4195dfaa41b0cfa4)) {
        Py_XDECREF(cache_frame_e3967daf2ebf5b1b4195dfaa41b0cfa4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e3967daf2ebf5b1b4195dfaa41b0cfa4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e3967daf2ebf5b1b4195dfaa41b0cfa4 = MAKE_FUNCTION_FRAME(codeobj_e3967daf2ebf5b1b4195dfaa41b0cfa4, module_google$protobuf$internal$wire_format, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e3967daf2ebf5b1b4195dfaa41b0cfa4->m_type_description == NULL);
    frame_e3967daf2ebf5b1b4195dfaa41b0cfa4 = cache_frame_e3967daf2ebf5b1b4195dfaa41b0cfa4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e3967daf2ebf5b1b4195dfaa41b0cfa4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e3967daf2ebf5b1b4195dfaa41b0cfa4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_field_number);
        tmp_args_element_value_1 = par_field_number;
        CHECK_OBJECT(par_int32);
        tmp_args_element_value_2 = par_int32;
        frame_e3967daf2ebf5b1b4195dfaa41b0cfa4->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e3967daf2ebf5b1b4195dfaa41b0cfa4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e3967daf2ebf5b1b4195dfaa41b0cfa4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e3967daf2ebf5b1b4195dfaa41b0cfa4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e3967daf2ebf5b1b4195dfaa41b0cfa4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e3967daf2ebf5b1b4195dfaa41b0cfa4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e3967daf2ebf5b1b4195dfaa41b0cfa4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e3967daf2ebf5b1b4195dfaa41b0cfa4,
        type_description_1,
        par_field_number,
        par_int32
    );


    // Release cached frame if used for exception.
    if (frame_e3967daf2ebf5b1b4195dfaa41b0cfa4 == cache_frame_e3967daf2ebf5b1b4195dfaa41b0cfa4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e3967daf2ebf5b1b4195dfaa41b0cfa4);
        cache_frame_e3967daf2ebf5b1b4195dfaa41b0cfa4 = NULL;
    }

    assertFrameObject(frame_e3967daf2ebf5b1b4195dfaa41b0cfa4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_int32);
    Py_DECREF(par_int32);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_int32);
    Py_DECREF(par_int32);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__6_Int32ByteSizeNoTag(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_int32 = python_pars[0];
    struct Nuitka_FrameObject *frame_10e3e3fa5f99325b9f91e654a4f0ddc8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_10e3e3fa5f99325b9f91e654a4f0ddc8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_10e3e3fa5f99325b9f91e654a4f0ddc8)) {
        Py_XDECREF(cache_frame_10e3e3fa5f99325b9f91e654a4f0ddc8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_10e3e3fa5f99325b9f91e654a4f0ddc8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_10e3e3fa5f99325b9f91e654a4f0ddc8 = MAKE_FUNCTION_FRAME(codeobj_10e3e3fa5f99325b9f91e654a4f0ddc8, module_google$protobuf$internal$wire_format, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_10e3e3fa5f99325b9f91e654a4f0ddc8->m_type_description == NULL);
    frame_10e3e3fa5f99325b9f91e654a4f0ddc8 = cache_frame_10e3e3fa5f99325b9f91e654a4f0ddc8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_10e3e3fa5f99325b9f91e654a4f0ddc8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_10e3e3fa5f99325b9f91e654a4f0ddc8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_left_value_1 = mod_consts[15];
        CHECK_OBJECT(par_int32);
        tmp_right_value_1 = par_int32;
        tmp_args_element_value_1 = BINARY_OPERATION_BITAND_OBJECT_LONG_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_10e3e3fa5f99325b9f91e654a4f0ddc8->m_frame.f_lineno = 127;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_10e3e3fa5f99325b9f91e654a4f0ddc8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_10e3e3fa5f99325b9f91e654a4f0ddc8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_10e3e3fa5f99325b9f91e654a4f0ddc8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_10e3e3fa5f99325b9f91e654a4f0ddc8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_10e3e3fa5f99325b9f91e654a4f0ddc8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_10e3e3fa5f99325b9f91e654a4f0ddc8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_10e3e3fa5f99325b9f91e654a4f0ddc8,
        type_description_1,
        par_int32
    );


    // Release cached frame if used for exception.
    if (frame_10e3e3fa5f99325b9f91e654a4f0ddc8 == cache_frame_10e3e3fa5f99325b9f91e654a4f0ddc8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_10e3e3fa5f99325b9f91e654a4f0ddc8);
        cache_frame_10e3e3fa5f99325b9f91e654a4f0ddc8 = NULL;
    }

    assertFrameObject(frame_10e3e3fa5f99325b9f91e654a4f0ddc8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_int32);
    Py_DECREF(par_int32);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_int32);
    Py_DECREF(par_int32);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__7_Int64ByteSize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field_number = python_pars[0];
    PyObject *par_int64 = python_pars[1];
    struct Nuitka_FrameObject *frame_908572da6c11bb717ae86caa71f7adad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_908572da6c11bb717ae86caa71f7adad = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_908572da6c11bb717ae86caa71f7adad)) {
        Py_XDECREF(cache_frame_908572da6c11bb717ae86caa71f7adad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_908572da6c11bb717ae86caa71f7adad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_908572da6c11bb717ae86caa71f7adad = MAKE_FUNCTION_FRAME(codeobj_908572da6c11bb717ae86caa71f7adad, module_google$protobuf$internal$wire_format, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_908572da6c11bb717ae86caa71f7adad->m_type_description == NULL);
    frame_908572da6c11bb717ae86caa71f7adad = cache_frame_908572da6c11bb717ae86caa71f7adad;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_908572da6c11bb717ae86caa71f7adad);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_908572da6c11bb717ae86caa71f7adad) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_field_number);
        tmp_args_element_value_1 = par_field_number;
        tmp_left_value_1 = mod_consts[15];
        CHECK_OBJECT(par_int64);
        tmp_right_value_1 = par_int64;
        tmp_args_element_value_2 = BINARY_OPERATION_BITAND_OBJECT_LONG_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_908572da6c11bb717ae86caa71f7adad->m_frame.f_lineno = 132;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_908572da6c11bb717ae86caa71f7adad);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_908572da6c11bb717ae86caa71f7adad);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_908572da6c11bb717ae86caa71f7adad);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_908572da6c11bb717ae86caa71f7adad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_908572da6c11bb717ae86caa71f7adad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_908572da6c11bb717ae86caa71f7adad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_908572da6c11bb717ae86caa71f7adad,
        type_description_1,
        par_field_number,
        par_int64
    );


    // Release cached frame if used for exception.
    if (frame_908572da6c11bb717ae86caa71f7adad == cache_frame_908572da6c11bb717ae86caa71f7adad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_908572da6c11bb717ae86caa71f7adad);
        cache_frame_908572da6c11bb717ae86caa71f7adad = NULL;
    }

    assertFrameObject(frame_908572da6c11bb717ae86caa71f7adad);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_int64);
    Py_DECREF(par_int64);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_int64);
    Py_DECREF(par_int64);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__8_UInt32ByteSize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field_number = python_pars[0];
    PyObject *par_uint32 = python_pars[1];
    struct Nuitka_FrameObject *frame_b183b0cd34f8035efb705eb74ae728ec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b183b0cd34f8035efb705eb74ae728ec = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b183b0cd34f8035efb705eb74ae728ec)) {
        Py_XDECREF(cache_frame_b183b0cd34f8035efb705eb74ae728ec);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b183b0cd34f8035efb705eb74ae728ec == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b183b0cd34f8035efb705eb74ae728ec = MAKE_FUNCTION_FRAME(codeobj_b183b0cd34f8035efb705eb74ae728ec, module_google$protobuf$internal$wire_format, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b183b0cd34f8035efb705eb74ae728ec->m_type_description == NULL);
    frame_b183b0cd34f8035efb705eb74ae728ec = cache_frame_b183b0cd34f8035efb705eb74ae728ec;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b183b0cd34f8035efb705eb74ae728ec);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b183b0cd34f8035efb705eb74ae728ec) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_field_number);
        tmp_args_element_value_1 = par_field_number;
        CHECK_OBJECT(par_uint32);
        tmp_args_element_value_2 = par_uint32;
        frame_b183b0cd34f8035efb705eb74ae728ec->m_frame.f_lineno = 136;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b183b0cd34f8035efb705eb74ae728ec);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b183b0cd34f8035efb705eb74ae728ec);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b183b0cd34f8035efb705eb74ae728ec);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b183b0cd34f8035efb705eb74ae728ec, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b183b0cd34f8035efb705eb74ae728ec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b183b0cd34f8035efb705eb74ae728ec, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b183b0cd34f8035efb705eb74ae728ec,
        type_description_1,
        par_field_number,
        par_uint32
    );


    // Release cached frame if used for exception.
    if (frame_b183b0cd34f8035efb705eb74ae728ec == cache_frame_b183b0cd34f8035efb705eb74ae728ec) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b183b0cd34f8035efb705eb74ae728ec);
        cache_frame_b183b0cd34f8035efb705eb74ae728ec = NULL;
    }

    assertFrameObject(frame_b183b0cd34f8035efb705eb74ae728ec);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_uint32);
    Py_DECREF(par_uint32);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_uint32);
    Py_DECREF(par_uint32);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__9_UInt64ByteSize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field_number = python_pars[0];
    PyObject *par_uint64 = python_pars[1];
    struct Nuitka_FrameObject *frame_ffadcdcb7c7b0cab4367b500f0f1bd27;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ffadcdcb7c7b0cab4367b500f0f1bd27 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ffadcdcb7c7b0cab4367b500f0f1bd27)) {
        Py_XDECREF(cache_frame_ffadcdcb7c7b0cab4367b500f0f1bd27);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ffadcdcb7c7b0cab4367b500f0f1bd27 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ffadcdcb7c7b0cab4367b500f0f1bd27 = MAKE_FUNCTION_FRAME(codeobj_ffadcdcb7c7b0cab4367b500f0f1bd27, module_google$protobuf$internal$wire_format, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ffadcdcb7c7b0cab4367b500f0f1bd27->m_type_description == NULL);
    frame_ffadcdcb7c7b0cab4367b500f0f1bd27 = cache_frame_ffadcdcb7c7b0cab4367b500f0f1bd27;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ffadcdcb7c7b0cab4367b500f0f1bd27);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ffadcdcb7c7b0cab4367b500f0f1bd27) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_field_number);
        tmp_args_element_value_1 = par_field_number;
        frame_ffadcdcb7c7b0cab4367b500f0f1bd27->m_frame.f_lineno = 140;
        tmp_left_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_uint64);
        tmp_args_element_value_2 = par_uint64;
        frame_ffadcdcb7c7b0cab4367b500f0f1bd27->m_frame.f_lineno = 140;
        tmp_right_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_left_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ffadcdcb7c7b0cab4367b500f0f1bd27);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ffadcdcb7c7b0cab4367b500f0f1bd27);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ffadcdcb7c7b0cab4367b500f0f1bd27);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ffadcdcb7c7b0cab4367b500f0f1bd27, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ffadcdcb7c7b0cab4367b500f0f1bd27->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ffadcdcb7c7b0cab4367b500f0f1bd27, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ffadcdcb7c7b0cab4367b500f0f1bd27,
        type_description_1,
        par_field_number,
        par_uint64
    );


    // Release cached frame if used for exception.
    if (frame_ffadcdcb7c7b0cab4367b500f0f1bd27 == cache_frame_ffadcdcb7c7b0cab4367b500f0f1bd27) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ffadcdcb7c7b0cab4367b500f0f1bd27);
        cache_frame_ffadcdcb7c7b0cab4367b500f0f1bd27 = NULL;
    }

    assertFrameObject(frame_ffadcdcb7c7b0cab4367b500f0f1bd27);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_uint64);
    Py_DECREF(par_uint64);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_uint64);
    Py_DECREF(par_uint64);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__10_SInt32ByteSize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field_number = python_pars[0];
    PyObject *par_int32 = python_pars[1];
    struct Nuitka_FrameObject *frame_d2283bf7a40782a4b07e6c70774e1757;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d2283bf7a40782a4b07e6c70774e1757 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d2283bf7a40782a4b07e6c70774e1757)) {
        Py_XDECREF(cache_frame_d2283bf7a40782a4b07e6c70774e1757);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d2283bf7a40782a4b07e6c70774e1757 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d2283bf7a40782a4b07e6c70774e1757 = MAKE_FUNCTION_FRAME(codeobj_d2283bf7a40782a4b07e6c70774e1757, module_google$protobuf$internal$wire_format, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d2283bf7a40782a4b07e6c70774e1757->m_type_description == NULL);
    frame_d2283bf7a40782a4b07e6c70774e1757 = cache_frame_d2283bf7a40782a4b07e6c70774e1757;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d2283bf7a40782a4b07e6c70774e1757);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d2283bf7a40782a4b07e6c70774e1757) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_field_number);
        tmp_args_element_value_1 = par_field_number;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_int32);
        tmp_args_element_value_3 = par_int32;
        frame_d2283bf7a40782a4b07e6c70774e1757->m_frame.f_lineno = 144;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d2283bf7a40782a4b07e6c70774e1757->m_frame.f_lineno = 144;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d2283bf7a40782a4b07e6c70774e1757);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d2283bf7a40782a4b07e6c70774e1757);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d2283bf7a40782a4b07e6c70774e1757);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d2283bf7a40782a4b07e6c70774e1757, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d2283bf7a40782a4b07e6c70774e1757->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d2283bf7a40782a4b07e6c70774e1757, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d2283bf7a40782a4b07e6c70774e1757,
        type_description_1,
        par_field_number,
        par_int32
    );


    // Release cached frame if used for exception.
    if (frame_d2283bf7a40782a4b07e6c70774e1757 == cache_frame_d2283bf7a40782a4b07e6c70774e1757) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d2283bf7a40782a4b07e6c70774e1757);
        cache_frame_d2283bf7a40782a4b07e6c70774e1757 = NULL;
    }

    assertFrameObject(frame_d2283bf7a40782a4b07e6c70774e1757);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_int32);
    Py_DECREF(par_int32);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_int32);
    Py_DECREF(par_int32);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__11_SInt64ByteSize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field_number = python_pars[0];
    PyObject *par_int64 = python_pars[1];
    struct Nuitka_FrameObject *frame_734f9b7c3de9ecc0989b5400a8a19716;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_734f9b7c3de9ecc0989b5400a8a19716 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_734f9b7c3de9ecc0989b5400a8a19716)) {
        Py_XDECREF(cache_frame_734f9b7c3de9ecc0989b5400a8a19716);

#if _DEBUG_REFCOUNTS
        if (cache_frame_734f9b7c3de9ecc0989b5400a8a19716 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_734f9b7c3de9ecc0989b5400a8a19716 = MAKE_FUNCTION_FRAME(codeobj_734f9b7c3de9ecc0989b5400a8a19716, module_google$protobuf$internal$wire_format, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_734f9b7c3de9ecc0989b5400a8a19716->m_type_description == NULL);
    frame_734f9b7c3de9ecc0989b5400a8a19716 = cache_frame_734f9b7c3de9ecc0989b5400a8a19716;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_734f9b7c3de9ecc0989b5400a8a19716);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_734f9b7c3de9ecc0989b5400a8a19716) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_field_number);
        tmp_args_element_value_1 = par_field_number;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_int64);
        tmp_args_element_value_3 = par_int64;
        frame_734f9b7c3de9ecc0989b5400a8a19716->m_frame.f_lineno = 148;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_734f9b7c3de9ecc0989b5400a8a19716->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_734f9b7c3de9ecc0989b5400a8a19716);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_734f9b7c3de9ecc0989b5400a8a19716);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_734f9b7c3de9ecc0989b5400a8a19716);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_734f9b7c3de9ecc0989b5400a8a19716, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_734f9b7c3de9ecc0989b5400a8a19716->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_734f9b7c3de9ecc0989b5400a8a19716, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_734f9b7c3de9ecc0989b5400a8a19716,
        type_description_1,
        par_field_number,
        par_int64
    );


    // Release cached frame if used for exception.
    if (frame_734f9b7c3de9ecc0989b5400a8a19716 == cache_frame_734f9b7c3de9ecc0989b5400a8a19716) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_734f9b7c3de9ecc0989b5400a8a19716);
        cache_frame_734f9b7c3de9ecc0989b5400a8a19716 = NULL;
    }

    assertFrameObject(frame_734f9b7c3de9ecc0989b5400a8a19716);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_int64);
    Py_DECREF(par_int64);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_int64);
    Py_DECREF(par_int64);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__12_Fixed32ByteSize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field_number = python_pars[0];
    PyObject *par_fixed32 = python_pars[1];
    struct Nuitka_FrameObject *frame_2d3d1d87c246861444beb0c1736b7413;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2d3d1d87c246861444beb0c1736b7413 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2d3d1d87c246861444beb0c1736b7413)) {
        Py_XDECREF(cache_frame_2d3d1d87c246861444beb0c1736b7413);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2d3d1d87c246861444beb0c1736b7413 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2d3d1d87c246861444beb0c1736b7413 = MAKE_FUNCTION_FRAME(codeobj_2d3d1d87c246861444beb0c1736b7413, module_google$protobuf$internal$wire_format, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2d3d1d87c246861444beb0c1736b7413->m_type_description == NULL);
    frame_2d3d1d87c246861444beb0c1736b7413 = cache_frame_2d3d1d87c246861444beb0c1736b7413;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2d3d1d87c246861444beb0c1736b7413);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2d3d1d87c246861444beb0c1736b7413) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_right_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_field_number);
        tmp_args_element_value_1 = par_field_number;
        frame_2d3d1d87c246861444beb0c1736b7413->m_frame.f_lineno = 152;
        tmp_left_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_1 = mod_consts[20];
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_left_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2d3d1d87c246861444beb0c1736b7413);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2d3d1d87c246861444beb0c1736b7413);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2d3d1d87c246861444beb0c1736b7413);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2d3d1d87c246861444beb0c1736b7413, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2d3d1d87c246861444beb0c1736b7413->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2d3d1d87c246861444beb0c1736b7413, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2d3d1d87c246861444beb0c1736b7413,
        type_description_1,
        par_field_number,
        par_fixed32
    );


    // Release cached frame if used for exception.
    if (frame_2d3d1d87c246861444beb0c1736b7413 == cache_frame_2d3d1d87c246861444beb0c1736b7413) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2d3d1d87c246861444beb0c1736b7413);
        cache_frame_2d3d1d87c246861444beb0c1736b7413 = NULL;
    }

    assertFrameObject(frame_2d3d1d87c246861444beb0c1736b7413);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_fixed32);
    Py_DECREF(par_fixed32);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_fixed32);
    Py_DECREF(par_fixed32);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__13_Fixed64ByteSize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field_number = python_pars[0];
    PyObject *par_fixed64 = python_pars[1];
    struct Nuitka_FrameObject *frame_7d85e7beb5d29a414008f5c88513bc7c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7d85e7beb5d29a414008f5c88513bc7c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7d85e7beb5d29a414008f5c88513bc7c)) {
        Py_XDECREF(cache_frame_7d85e7beb5d29a414008f5c88513bc7c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d85e7beb5d29a414008f5c88513bc7c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d85e7beb5d29a414008f5c88513bc7c = MAKE_FUNCTION_FRAME(codeobj_7d85e7beb5d29a414008f5c88513bc7c, module_google$protobuf$internal$wire_format, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7d85e7beb5d29a414008f5c88513bc7c->m_type_description == NULL);
    frame_7d85e7beb5d29a414008f5c88513bc7c = cache_frame_7d85e7beb5d29a414008f5c88513bc7c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7d85e7beb5d29a414008f5c88513bc7c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7d85e7beb5d29a414008f5c88513bc7c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_right_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_field_number);
        tmp_args_element_value_1 = par_field_number;
        frame_7d85e7beb5d29a414008f5c88513bc7c->m_frame.f_lineno = 156;
        tmp_left_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_1 = mod_consts[21];
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_left_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7d85e7beb5d29a414008f5c88513bc7c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7d85e7beb5d29a414008f5c88513bc7c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7d85e7beb5d29a414008f5c88513bc7c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7d85e7beb5d29a414008f5c88513bc7c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d85e7beb5d29a414008f5c88513bc7c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d85e7beb5d29a414008f5c88513bc7c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d85e7beb5d29a414008f5c88513bc7c,
        type_description_1,
        par_field_number,
        par_fixed64
    );


    // Release cached frame if used for exception.
    if (frame_7d85e7beb5d29a414008f5c88513bc7c == cache_frame_7d85e7beb5d29a414008f5c88513bc7c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7d85e7beb5d29a414008f5c88513bc7c);
        cache_frame_7d85e7beb5d29a414008f5c88513bc7c = NULL;
    }

    assertFrameObject(frame_7d85e7beb5d29a414008f5c88513bc7c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_fixed64);
    Py_DECREF(par_fixed64);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_fixed64);
    Py_DECREF(par_fixed64);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__14_SFixed32ByteSize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field_number = python_pars[0];
    PyObject *par_sfixed32 = python_pars[1];
    struct Nuitka_FrameObject *frame_9204e5652f8f8194d50e0116d473461f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9204e5652f8f8194d50e0116d473461f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9204e5652f8f8194d50e0116d473461f)) {
        Py_XDECREF(cache_frame_9204e5652f8f8194d50e0116d473461f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9204e5652f8f8194d50e0116d473461f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9204e5652f8f8194d50e0116d473461f = MAKE_FUNCTION_FRAME(codeobj_9204e5652f8f8194d50e0116d473461f, module_google$protobuf$internal$wire_format, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9204e5652f8f8194d50e0116d473461f->m_type_description == NULL);
    frame_9204e5652f8f8194d50e0116d473461f = cache_frame_9204e5652f8f8194d50e0116d473461f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9204e5652f8f8194d50e0116d473461f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9204e5652f8f8194d50e0116d473461f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_right_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_field_number);
        tmp_args_element_value_1 = par_field_number;
        frame_9204e5652f8f8194d50e0116d473461f->m_frame.f_lineno = 160;
        tmp_left_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_1 = mod_consts[20];
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_left_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9204e5652f8f8194d50e0116d473461f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9204e5652f8f8194d50e0116d473461f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9204e5652f8f8194d50e0116d473461f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9204e5652f8f8194d50e0116d473461f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9204e5652f8f8194d50e0116d473461f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9204e5652f8f8194d50e0116d473461f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9204e5652f8f8194d50e0116d473461f,
        type_description_1,
        par_field_number,
        par_sfixed32
    );


    // Release cached frame if used for exception.
    if (frame_9204e5652f8f8194d50e0116d473461f == cache_frame_9204e5652f8f8194d50e0116d473461f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9204e5652f8f8194d50e0116d473461f);
        cache_frame_9204e5652f8f8194d50e0116d473461f = NULL;
    }

    assertFrameObject(frame_9204e5652f8f8194d50e0116d473461f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_sfixed32);
    Py_DECREF(par_sfixed32);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_sfixed32);
    Py_DECREF(par_sfixed32);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__15_SFixed64ByteSize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field_number = python_pars[0];
    PyObject *par_sfixed64 = python_pars[1];
    struct Nuitka_FrameObject *frame_8bb06582490bd3bab9d0d92ad798c264;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8bb06582490bd3bab9d0d92ad798c264 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8bb06582490bd3bab9d0d92ad798c264)) {
        Py_XDECREF(cache_frame_8bb06582490bd3bab9d0d92ad798c264);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8bb06582490bd3bab9d0d92ad798c264 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8bb06582490bd3bab9d0d92ad798c264 = MAKE_FUNCTION_FRAME(codeobj_8bb06582490bd3bab9d0d92ad798c264, module_google$protobuf$internal$wire_format, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_8bb06582490bd3bab9d0d92ad798c264->m_type_description == NULL);
    frame_8bb06582490bd3bab9d0d92ad798c264 = cache_frame_8bb06582490bd3bab9d0d92ad798c264;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_8bb06582490bd3bab9d0d92ad798c264);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_8bb06582490bd3bab9d0d92ad798c264) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_right_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_field_number);
        tmp_args_element_value_1 = par_field_number;
        frame_8bb06582490bd3bab9d0d92ad798c264->m_frame.f_lineno = 164;
        tmp_left_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_1 = mod_consts[21];
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_left_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8bb06582490bd3bab9d0d92ad798c264);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8bb06582490bd3bab9d0d92ad798c264);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_8bb06582490bd3bab9d0d92ad798c264);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8bb06582490bd3bab9d0d92ad798c264, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8bb06582490bd3bab9d0d92ad798c264->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8bb06582490bd3bab9d0d92ad798c264, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8bb06582490bd3bab9d0d92ad798c264,
        type_description_1,
        par_field_number,
        par_sfixed64
    );


    // Release cached frame if used for exception.
    if (frame_8bb06582490bd3bab9d0d92ad798c264 == cache_frame_8bb06582490bd3bab9d0d92ad798c264) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_8bb06582490bd3bab9d0d92ad798c264);
        cache_frame_8bb06582490bd3bab9d0d92ad798c264 = NULL;
    }

    assertFrameObject(frame_8bb06582490bd3bab9d0d92ad798c264);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_sfixed64);
    Py_DECREF(par_sfixed64);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_sfixed64);
    Py_DECREF(par_sfixed64);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__16_FloatByteSize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field_number = python_pars[0];
    PyObject *par_flt = python_pars[1];
    struct Nuitka_FrameObject *frame_67b3a63f0295da586aef24dbca084094;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_67b3a63f0295da586aef24dbca084094 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_67b3a63f0295da586aef24dbca084094)) {
        Py_XDECREF(cache_frame_67b3a63f0295da586aef24dbca084094);

#if _DEBUG_REFCOUNTS
        if (cache_frame_67b3a63f0295da586aef24dbca084094 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_67b3a63f0295da586aef24dbca084094 = MAKE_FUNCTION_FRAME(codeobj_67b3a63f0295da586aef24dbca084094, module_google$protobuf$internal$wire_format, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_67b3a63f0295da586aef24dbca084094->m_type_description == NULL);
    frame_67b3a63f0295da586aef24dbca084094 = cache_frame_67b3a63f0295da586aef24dbca084094;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_67b3a63f0295da586aef24dbca084094);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_67b3a63f0295da586aef24dbca084094) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_right_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_field_number);
        tmp_args_element_value_1 = par_field_number;
        frame_67b3a63f0295da586aef24dbca084094->m_frame.f_lineno = 168;
        tmp_left_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_1 = mod_consts[20];
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_left_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_67b3a63f0295da586aef24dbca084094);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_67b3a63f0295da586aef24dbca084094);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_67b3a63f0295da586aef24dbca084094);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_67b3a63f0295da586aef24dbca084094, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_67b3a63f0295da586aef24dbca084094->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_67b3a63f0295da586aef24dbca084094, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_67b3a63f0295da586aef24dbca084094,
        type_description_1,
        par_field_number,
        par_flt
    );


    // Release cached frame if used for exception.
    if (frame_67b3a63f0295da586aef24dbca084094 == cache_frame_67b3a63f0295da586aef24dbca084094) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_67b3a63f0295da586aef24dbca084094);
        cache_frame_67b3a63f0295da586aef24dbca084094 = NULL;
    }

    assertFrameObject(frame_67b3a63f0295da586aef24dbca084094);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_flt);
    Py_DECREF(par_flt);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_flt);
    Py_DECREF(par_flt);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__17_DoubleByteSize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field_number = python_pars[0];
    PyObject *par_double = python_pars[1];
    struct Nuitka_FrameObject *frame_ed23be336e00ed498f4d96b0efbdda57;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ed23be336e00ed498f4d96b0efbdda57 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ed23be336e00ed498f4d96b0efbdda57)) {
        Py_XDECREF(cache_frame_ed23be336e00ed498f4d96b0efbdda57);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ed23be336e00ed498f4d96b0efbdda57 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ed23be336e00ed498f4d96b0efbdda57 = MAKE_FUNCTION_FRAME(codeobj_ed23be336e00ed498f4d96b0efbdda57, module_google$protobuf$internal$wire_format, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ed23be336e00ed498f4d96b0efbdda57->m_type_description == NULL);
    frame_ed23be336e00ed498f4d96b0efbdda57 = cache_frame_ed23be336e00ed498f4d96b0efbdda57;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ed23be336e00ed498f4d96b0efbdda57);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ed23be336e00ed498f4d96b0efbdda57) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_right_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_field_number);
        tmp_args_element_value_1 = par_field_number;
        frame_ed23be336e00ed498f4d96b0efbdda57->m_frame.f_lineno = 172;
        tmp_left_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_1 = mod_consts[21];
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_left_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ed23be336e00ed498f4d96b0efbdda57);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ed23be336e00ed498f4d96b0efbdda57);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ed23be336e00ed498f4d96b0efbdda57);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ed23be336e00ed498f4d96b0efbdda57, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ed23be336e00ed498f4d96b0efbdda57->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ed23be336e00ed498f4d96b0efbdda57, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ed23be336e00ed498f4d96b0efbdda57,
        type_description_1,
        par_field_number,
        par_double
    );


    // Release cached frame if used for exception.
    if (frame_ed23be336e00ed498f4d96b0efbdda57 == cache_frame_ed23be336e00ed498f4d96b0efbdda57) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ed23be336e00ed498f4d96b0efbdda57);
        cache_frame_ed23be336e00ed498f4d96b0efbdda57 = NULL;
    }

    assertFrameObject(frame_ed23be336e00ed498f4d96b0efbdda57);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_double);
    Py_DECREF(par_double);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_double);
    Py_DECREF(par_double);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__18_BoolByteSize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field_number = python_pars[0];
    PyObject *par_b = python_pars[1];
    struct Nuitka_FrameObject *frame_5439316352cbdc7ab56bae8c97a574cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5439316352cbdc7ab56bae8c97a574cb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5439316352cbdc7ab56bae8c97a574cb)) {
        Py_XDECREF(cache_frame_5439316352cbdc7ab56bae8c97a574cb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5439316352cbdc7ab56bae8c97a574cb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5439316352cbdc7ab56bae8c97a574cb = MAKE_FUNCTION_FRAME(codeobj_5439316352cbdc7ab56bae8c97a574cb, module_google$protobuf$internal$wire_format, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5439316352cbdc7ab56bae8c97a574cb->m_type_description == NULL);
    frame_5439316352cbdc7ab56bae8c97a574cb = cache_frame_5439316352cbdc7ab56bae8c97a574cb;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5439316352cbdc7ab56bae8c97a574cb);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5439316352cbdc7ab56bae8c97a574cb) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_right_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_field_number);
        tmp_args_element_value_1 = par_field_number;
        frame_5439316352cbdc7ab56bae8c97a574cb->m_frame.f_lineno = 176;
        tmp_left_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_1 = mod_consts[9];
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_left_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5439316352cbdc7ab56bae8c97a574cb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5439316352cbdc7ab56bae8c97a574cb);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5439316352cbdc7ab56bae8c97a574cb);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5439316352cbdc7ab56bae8c97a574cb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5439316352cbdc7ab56bae8c97a574cb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5439316352cbdc7ab56bae8c97a574cb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5439316352cbdc7ab56bae8c97a574cb,
        type_description_1,
        par_field_number,
        par_b
    );


    // Release cached frame if used for exception.
    if (frame_5439316352cbdc7ab56bae8c97a574cb == cache_frame_5439316352cbdc7ab56bae8c97a574cb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5439316352cbdc7ab56bae8c97a574cb);
        cache_frame_5439316352cbdc7ab56bae8c97a574cb = NULL;
    }

    assertFrameObject(frame_5439316352cbdc7ab56bae8c97a574cb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__19_EnumByteSize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field_number = python_pars[0];
    PyObject *par_enum = python_pars[1];
    struct Nuitka_FrameObject *frame_aa8bc756f7d0f376783294ed5656426d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_aa8bc756f7d0f376783294ed5656426d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_aa8bc756f7d0f376783294ed5656426d)) {
        Py_XDECREF(cache_frame_aa8bc756f7d0f376783294ed5656426d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aa8bc756f7d0f376783294ed5656426d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aa8bc756f7d0f376783294ed5656426d = MAKE_FUNCTION_FRAME(codeobj_aa8bc756f7d0f376783294ed5656426d, module_google$protobuf$internal$wire_format, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_aa8bc756f7d0f376783294ed5656426d->m_type_description == NULL);
    frame_aa8bc756f7d0f376783294ed5656426d = cache_frame_aa8bc756f7d0f376783294ed5656426d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_aa8bc756f7d0f376783294ed5656426d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_aa8bc756f7d0f376783294ed5656426d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_field_number);
        tmp_args_element_value_1 = par_field_number;
        CHECK_OBJECT(par_enum);
        tmp_args_element_value_2 = par_enum;
        frame_aa8bc756f7d0f376783294ed5656426d->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa8bc756f7d0f376783294ed5656426d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa8bc756f7d0f376783294ed5656426d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa8bc756f7d0f376783294ed5656426d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aa8bc756f7d0f376783294ed5656426d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aa8bc756f7d0f376783294ed5656426d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aa8bc756f7d0f376783294ed5656426d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aa8bc756f7d0f376783294ed5656426d,
        type_description_1,
        par_field_number,
        par_enum
    );


    // Release cached frame if used for exception.
    if (frame_aa8bc756f7d0f376783294ed5656426d == cache_frame_aa8bc756f7d0f376783294ed5656426d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_aa8bc756f7d0f376783294ed5656426d);
        cache_frame_aa8bc756f7d0f376783294ed5656426d = NULL;
    }

    assertFrameObject(frame_aa8bc756f7d0f376783294ed5656426d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_enum);
    Py_DECREF(par_enum);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_enum);
    Py_DECREF(par_enum);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__20_StringByteSize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field_number = python_pars[0];
    PyObject *par_string = python_pars[1];
    struct Nuitka_FrameObject *frame_d36eeb4b56a5057d628f01d9c1593c3a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d36eeb4b56a5057d628f01d9c1593c3a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d36eeb4b56a5057d628f01d9c1593c3a)) {
        Py_XDECREF(cache_frame_d36eeb4b56a5057d628f01d9c1593c3a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d36eeb4b56a5057d628f01d9c1593c3a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d36eeb4b56a5057d628f01d9c1593c3a = MAKE_FUNCTION_FRAME(codeobj_d36eeb4b56a5057d628f01d9c1593c3a, module_google$protobuf$internal$wire_format, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d36eeb4b56a5057d628f01d9c1593c3a->m_type_description == NULL);
    frame_d36eeb4b56a5057d628f01d9c1593c3a = cache_frame_d36eeb4b56a5057d628f01d9c1593c3a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d36eeb4b56a5057d628f01d9c1593c3a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d36eeb4b56a5057d628f01d9c1593c3a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_field_number);
        tmp_args_element_value_1 = par_field_number;
        CHECK_OBJECT(par_string);
        tmp_expression_value_1 = par_string;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d36eeb4b56a5057d628f01d9c1593c3a->m_frame.f_lineno = 184;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[24]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d36eeb4b56a5057d628f01d9c1593c3a->m_frame.f_lineno = 184;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d36eeb4b56a5057d628f01d9c1593c3a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d36eeb4b56a5057d628f01d9c1593c3a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d36eeb4b56a5057d628f01d9c1593c3a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d36eeb4b56a5057d628f01d9c1593c3a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d36eeb4b56a5057d628f01d9c1593c3a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d36eeb4b56a5057d628f01d9c1593c3a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d36eeb4b56a5057d628f01d9c1593c3a,
        type_description_1,
        par_field_number,
        par_string
    );


    // Release cached frame if used for exception.
    if (frame_d36eeb4b56a5057d628f01d9c1593c3a == cache_frame_d36eeb4b56a5057d628f01d9c1593c3a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d36eeb4b56a5057d628f01d9c1593c3a);
        cache_frame_d36eeb4b56a5057d628f01d9c1593c3a = NULL;
    }

    assertFrameObject(frame_d36eeb4b56a5057d628f01d9c1593c3a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_string);
    Py_DECREF(par_string);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_string);
    Py_DECREF(par_string);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__21_BytesByteSize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field_number = python_pars[0];
    PyObject *par_b = python_pars[1];
    struct Nuitka_FrameObject *frame_1d05ebf7b908de4c627afbca2ef7f4d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1d05ebf7b908de4c627afbca2ef7f4d5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1d05ebf7b908de4c627afbca2ef7f4d5)) {
        Py_XDECREF(cache_frame_1d05ebf7b908de4c627afbca2ef7f4d5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1d05ebf7b908de4c627afbca2ef7f4d5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1d05ebf7b908de4c627afbca2ef7f4d5 = MAKE_FUNCTION_FRAME(codeobj_1d05ebf7b908de4c627afbca2ef7f4d5, module_google$protobuf$internal$wire_format, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1d05ebf7b908de4c627afbca2ef7f4d5->m_type_description == NULL);
    frame_1d05ebf7b908de4c627afbca2ef7f4d5 = cache_frame_1d05ebf7b908de4c627afbca2ef7f4d5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1d05ebf7b908de4c627afbca2ef7f4d5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1d05ebf7b908de4c627afbca2ef7f4d5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_value_2;
        PyObject *tmp_len_arg_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_field_number);
        tmp_args_element_value_1 = par_field_number;
        frame_1d05ebf7b908de4c627afbca2ef7f4d5->m_frame.f_lineno = 188;
        tmp_left_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_2);

            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_b);
        tmp_len_arg_1 = par_b;
        tmp_args_element_value_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_2);

            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_1d05ebf7b908de4c627afbca2ef7f4d5->m_frame.f_lineno = 189;
        tmp_right_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_2);

            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_2, tmp_right_value_1);
        Py_DECREF(tmp_left_value_2);
        Py_DECREF(tmp_right_value_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_b);
        tmp_len_arg_2 = par_b;
        tmp_right_value_2 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 190;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_1, tmp_right_value_2);
        Py_DECREF(tmp_left_value_1);
        Py_DECREF(tmp_right_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1d05ebf7b908de4c627afbca2ef7f4d5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1d05ebf7b908de4c627afbca2ef7f4d5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1d05ebf7b908de4c627afbca2ef7f4d5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1d05ebf7b908de4c627afbca2ef7f4d5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1d05ebf7b908de4c627afbca2ef7f4d5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1d05ebf7b908de4c627afbca2ef7f4d5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1d05ebf7b908de4c627afbca2ef7f4d5,
        type_description_1,
        par_field_number,
        par_b
    );


    // Release cached frame if used for exception.
    if (frame_1d05ebf7b908de4c627afbca2ef7f4d5 == cache_frame_1d05ebf7b908de4c627afbca2ef7f4d5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1d05ebf7b908de4c627afbca2ef7f4d5);
        cache_frame_1d05ebf7b908de4c627afbca2ef7f4d5 = NULL;
    }

    assertFrameObject(frame_1d05ebf7b908de4c627afbca2ef7f4d5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__22_GroupByteSize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field_number = python_pars[0];
    PyObject *par_message = python_pars[1];
    struct Nuitka_FrameObject *frame_1487711dfb9bcf38e74e927dd3ea5bba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1487711dfb9bcf38e74e927dd3ea5bba = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1487711dfb9bcf38e74e927dd3ea5bba)) {
        Py_XDECREF(cache_frame_1487711dfb9bcf38e74e927dd3ea5bba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1487711dfb9bcf38e74e927dd3ea5bba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1487711dfb9bcf38e74e927dd3ea5bba = MAKE_FUNCTION_FRAME(codeobj_1487711dfb9bcf38e74e927dd3ea5bba, module_google$protobuf$internal$wire_format, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1487711dfb9bcf38e74e927dd3ea5bba->m_type_description == NULL);
    frame_1487711dfb9bcf38e74e927dd3ea5bba = cache_frame_1487711dfb9bcf38e74e927dd3ea5bba;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1487711dfb9bcf38e74e927dd3ea5bba);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1487711dfb9bcf38e74e927dd3ea5bba) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_right_value_2;
        PyObject *tmp_called_instance_1;
        tmp_left_value_2 = mod_consts[25];
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_field_number);
        tmp_args_element_value_1 = par_field_number;
        frame_1487711dfb9bcf38e74e927dd3ea5bba->m_frame.f_lineno = 194;
        tmp_right_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_2, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_message);
        tmp_called_instance_1 = par_message;
        frame_1487711dfb9bcf38e74e927dd3ea5bba->m_frame.f_lineno = 195;
        tmp_right_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[26]);
        if (tmp_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 195;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_2);
        Py_DECREF(tmp_left_value_1);
        Py_DECREF(tmp_right_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1487711dfb9bcf38e74e927dd3ea5bba);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1487711dfb9bcf38e74e927dd3ea5bba);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1487711dfb9bcf38e74e927dd3ea5bba);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1487711dfb9bcf38e74e927dd3ea5bba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1487711dfb9bcf38e74e927dd3ea5bba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1487711dfb9bcf38e74e927dd3ea5bba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1487711dfb9bcf38e74e927dd3ea5bba,
        type_description_1,
        par_field_number,
        par_message
    );


    // Release cached frame if used for exception.
    if (frame_1487711dfb9bcf38e74e927dd3ea5bba == cache_frame_1487711dfb9bcf38e74e927dd3ea5bba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1487711dfb9bcf38e74e927dd3ea5bba);
        cache_frame_1487711dfb9bcf38e74e927dd3ea5bba = NULL;
    }

    assertFrameObject(frame_1487711dfb9bcf38e74e927dd3ea5bba);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__23_MessageByteSize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field_number = python_pars[0];
    PyObject *par_message = python_pars[1];
    struct Nuitka_FrameObject *frame_120cddb79aeb9ccd03137ab204fd4323;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_120cddb79aeb9ccd03137ab204fd4323 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_120cddb79aeb9ccd03137ab204fd4323)) {
        Py_XDECREF(cache_frame_120cddb79aeb9ccd03137ab204fd4323);

#if _DEBUG_REFCOUNTS
        if (cache_frame_120cddb79aeb9ccd03137ab204fd4323 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_120cddb79aeb9ccd03137ab204fd4323 = MAKE_FUNCTION_FRAME(codeobj_120cddb79aeb9ccd03137ab204fd4323, module_google$protobuf$internal$wire_format, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_120cddb79aeb9ccd03137ab204fd4323->m_type_description == NULL);
    frame_120cddb79aeb9ccd03137ab204fd4323 = cache_frame_120cddb79aeb9ccd03137ab204fd4323;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_120cddb79aeb9ccd03137ab204fd4323);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_120cddb79aeb9ccd03137ab204fd4323) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_right_value_2;
        PyObject *tmp_called_instance_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_field_number);
        tmp_args_element_value_1 = par_field_number;
        frame_120cddb79aeb9ccd03137ab204fd4323->m_frame.f_lineno = 199;
        tmp_left_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_2);

            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_message);
        tmp_called_instance_1 = par_message;
        frame_120cddb79aeb9ccd03137ab204fd4323->m_frame.f_lineno = 200;
        tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[26]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_2);

            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_120cddb79aeb9ccd03137ab204fd4323->m_frame.f_lineno = 200;
        tmp_right_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_2);

            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_2, tmp_right_value_1);
        Py_DECREF(tmp_left_value_2);
        Py_DECREF(tmp_right_value_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_message);
        tmp_called_instance_2 = par_message;
        frame_120cddb79aeb9ccd03137ab204fd4323->m_frame.f_lineno = 201;
        tmp_right_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[26]);
        if (tmp_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 201;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_2);
        Py_DECREF(tmp_left_value_1);
        Py_DECREF(tmp_right_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_120cddb79aeb9ccd03137ab204fd4323);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_120cddb79aeb9ccd03137ab204fd4323);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_120cddb79aeb9ccd03137ab204fd4323);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_120cddb79aeb9ccd03137ab204fd4323, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_120cddb79aeb9ccd03137ab204fd4323->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_120cddb79aeb9ccd03137ab204fd4323, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_120cddb79aeb9ccd03137ab204fd4323,
        type_description_1,
        par_field_number,
        par_message
    );


    // Release cached frame if used for exception.
    if (frame_120cddb79aeb9ccd03137ab204fd4323 == cache_frame_120cddb79aeb9ccd03137ab204fd4323) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_120cddb79aeb9ccd03137ab204fd4323);
        cache_frame_120cddb79aeb9ccd03137ab204fd4323 = NULL;
    }

    assertFrameObject(frame_120cddb79aeb9ccd03137ab204fd4323);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__24_MessageSetItemByteSize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field_number = python_pars[0];
    PyObject *par_msg = python_pars[1];
    PyObject *var_total_size = NULL;
    PyObject *var_message_size = NULL;
    struct Nuitka_FrameObject *frame_aba8576a1711fc42c98682eeffd6b6be;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_aba8576a1711fc42c98682eeffd6b6be = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_aba8576a1711fc42c98682eeffd6b6be)) {
        Py_XDECREF(cache_frame_aba8576a1711fc42c98682eeffd6b6be);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aba8576a1711fc42c98682eeffd6b6be == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aba8576a1711fc42c98682eeffd6b6be = MAKE_FUNCTION_FRAME(codeobj_aba8576a1711fc42c98682eeffd6b6be, module_google$protobuf$internal$wire_format, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_aba8576a1711fc42c98682eeffd6b6be->m_type_description == NULL);
    frame_aba8576a1711fc42c98682eeffd6b6be = cache_frame_aba8576a1711fc42c98682eeffd6b6be;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_aba8576a1711fc42c98682eeffd6b6be);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_aba8576a1711fc42c98682eeffd6b6be) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_right_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_right_value_3;
        PyObject *tmp_called_value_3;
        tmp_left_value_3 = mod_consts[25];
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_aba8576a1711fc42c98682eeffd6b6be->m_frame.f_lineno = 209;
        tmp_right_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[27]);

        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_2 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_3, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_2);

            exception_lineno = 209;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_aba8576a1711fc42c98682eeffd6b6be->m_frame.f_lineno = 209;
        tmp_right_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[28]);

        if (tmp_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_2);

            exception_lineno = 209;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_2, tmp_right_value_2);
        Py_DECREF(tmp_left_value_2);
        Py_DECREF(tmp_right_value_2);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 209;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_aba8576a1711fc42c98682eeffd6b6be->m_frame.f_lineno = 209;
        tmp_right_value_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[29]);

        if (tmp_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 209;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_3);
        Py_DECREF(tmp_left_value_1);
        Py_DECREF(tmp_right_value_3);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_total_size == NULL);
        var_total_size = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_value_4;
        PyObject *tmp_right_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_total_size);
        tmp_left_value_4 = var_total_size;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_field_number);
        tmp_args_element_value_1 = par_field_number;
        frame_aba8576a1711fc42c98682eeffd6b6be->m_frame.f_lineno = 212;
        tmp_right_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_1);
        if (tmp_right_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_value_4, tmp_right_value_4);
        Py_DECREF(tmp_right_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = tmp_left_value_4;
        var_total_size = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_msg);
        tmp_called_instance_1 = par_msg;
        frame_aba8576a1711fc42c98682eeffd6b6be->m_frame.f_lineno = 214;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[26]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_message_size == NULL);
        var_message_size = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_value_5;
        PyObject *tmp_right_value_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_total_size);
        tmp_left_value_5 = var_total_size;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_message_size);
        tmp_args_element_value_2 = var_message_size;
        frame_aba8576a1711fc42c98682eeffd6b6be->m_frame.f_lineno = 217;
        tmp_right_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_2);
        if (tmp_right_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_value_5, tmp_right_value_5);
        Py_DECREF(tmp_right_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = tmp_left_value_5;
        var_total_size = tmp_assign_source_4;

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_value_6;
        PyObject *tmp_right_value_6;
        CHECK_OBJECT(var_total_size);
        tmp_left_value_6 = var_total_size;
        CHECK_OBJECT(var_message_size);
        tmp_right_value_6 = var_message_size;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_value_6, tmp_right_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = tmp_left_value_6;
        var_total_size = tmp_assign_source_5;

    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_aba8576a1711fc42c98682eeffd6b6be);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_aba8576a1711fc42c98682eeffd6b6be);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aba8576a1711fc42c98682eeffd6b6be, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aba8576a1711fc42c98682eeffd6b6be->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aba8576a1711fc42c98682eeffd6b6be, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aba8576a1711fc42c98682eeffd6b6be,
        type_description_1,
        par_field_number,
        par_msg,
        var_total_size,
        var_message_size
    );


    // Release cached frame if used for exception.
    if (frame_aba8576a1711fc42c98682eeffd6b6be == cache_frame_aba8576a1711fc42c98682eeffd6b6be) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_aba8576a1711fc42c98682eeffd6b6be);
        cache_frame_aba8576a1711fc42c98682eeffd6b6be = NULL;
    }

    assertFrameObject(frame_aba8576a1711fc42c98682eeffd6b6be);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_total_size);
    tmp_return_value = var_total_size;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_total_size);
    Py_DECREF(var_total_size);
    var_total_size = NULL;
    CHECK_OBJECT(var_message_size);
    Py_DECREF(var_message_size);
    var_message_size = NULL;
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

    Py_XDECREF(var_total_size);
    var_total_size = NULL;
    Py_XDECREF(var_message_size);
    var_message_size = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__25_TagByteSize(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field_number = python_pars[0];
    struct Nuitka_FrameObject *frame_47f0a51fe1809d1bf8a658d0dc02e388;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_47f0a51fe1809d1bf8a658d0dc02e388 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_47f0a51fe1809d1bf8a658d0dc02e388)) {
        Py_XDECREF(cache_frame_47f0a51fe1809d1bf8a658d0dc02e388);

#if _DEBUG_REFCOUNTS
        if (cache_frame_47f0a51fe1809d1bf8a658d0dc02e388 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_47f0a51fe1809d1bf8a658d0dc02e388 = MAKE_FUNCTION_FRAME(codeobj_47f0a51fe1809d1bf8a658d0dc02e388, module_google$protobuf$internal$wire_format, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_47f0a51fe1809d1bf8a658d0dc02e388->m_type_description == NULL);
    frame_47f0a51fe1809d1bf8a658d0dc02e388 = cache_frame_47f0a51fe1809d1bf8a658d0dc02e388;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_47f0a51fe1809d1bf8a658d0dc02e388);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_47f0a51fe1809d1bf8a658d0dc02e388) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_field_number);
        tmp_args_element_value_2 = par_field_number;
        tmp_args_element_value_3 = mod_consts[0];
        frame_47f0a51fe1809d1bf8a658d0dc02e388->m_frame.f_lineno = 227;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_47f0a51fe1809d1bf8a658d0dc02e388->m_frame.f_lineno = 227;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_47f0a51fe1809d1bf8a658d0dc02e388);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_47f0a51fe1809d1bf8a658d0dc02e388);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_47f0a51fe1809d1bf8a658d0dc02e388);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_47f0a51fe1809d1bf8a658d0dc02e388, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_47f0a51fe1809d1bf8a658d0dc02e388->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_47f0a51fe1809d1bf8a658d0dc02e388, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_47f0a51fe1809d1bf8a658d0dc02e388,
        type_description_1,
        par_field_number
    );


    // Release cached frame if used for exception.
    if (frame_47f0a51fe1809d1bf8a658d0dc02e388 == cache_frame_47f0a51fe1809d1bf8a658d0dc02e388) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_47f0a51fe1809d1bf8a658d0dc02e388);
        cache_frame_47f0a51fe1809d1bf8a658d0dc02e388 = NULL;
    }

    assertFrameObject(frame_47f0a51fe1809d1bf8a658d0dc02e388);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field_number);
    Py_DECREF(par_field_number);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__26__VarUInt64ByteSizeNoTag(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_uint64 = python_pars[0];
    struct Nuitka_FrameObject *frame_f2474260fad06296df4390e138643f97;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f2474260fad06296df4390e138643f97 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f2474260fad06296df4390e138643f97)) {
        Py_XDECREF(cache_frame_f2474260fad06296df4390e138643f97);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f2474260fad06296df4390e138643f97 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f2474260fad06296df4390e138643f97 = MAKE_FUNCTION_FRAME(codeobj_f2474260fad06296df4390e138643f97, module_google$protobuf$internal$wire_format, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f2474260fad06296df4390e138643f97->m_type_description == NULL);
    frame_f2474260fad06296df4390e138643f97 = cache_frame_f2474260fad06296df4390e138643f97;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f2474260fad06296df4390e138643f97);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f2474260fad06296df4390e138643f97) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_uint64);
        tmp_cmp_expr_left_1 = par_uint64;
        tmp_cmp_expr_right_1 = mod_consts[32];
        tmp_condition_result_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    tmp_return_value = mod_consts[9];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_uint64);
        tmp_cmp_expr_left_2 = par_uint64;
        tmp_cmp_expr_right_2 = mod_consts[33];
        tmp_condition_result_2 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    tmp_return_value = mod_consts[25];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_uint64);
        tmp_cmp_expr_left_3 = par_uint64;
        tmp_cmp_expr_right_3 = mod_consts[34];
        tmp_condition_result_3 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        assert(tmp_condition_result_3 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_3:;
    tmp_return_value = mod_consts[35];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_uint64);
        tmp_cmp_expr_left_4 = par_uint64;
        tmp_cmp_expr_right_4 = mod_consts[36];
        tmp_condition_result_4 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        assert(tmp_condition_result_4 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_4:;
    tmp_return_value = mod_consts[20];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_uint64);
        tmp_cmp_expr_left_5 = par_uint64;
        tmp_cmp_expr_right_5 = mod_consts[37];
        tmp_condition_result_5 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
        assert(tmp_condition_result_5 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_5:;
    tmp_return_value = mod_consts[38];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(par_uint64);
        tmp_cmp_expr_left_6 = par_uint64;
        tmp_cmp_expr_right_6 = mod_consts[39];
        tmp_condition_result_6 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_6:;
    tmp_return_value = mod_consts[40];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(par_uint64);
        tmp_cmp_expr_left_7 = par_uint64;
        tmp_cmp_expr_right_7 = mod_consts[41];
        tmp_condition_result_7 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
        assert(tmp_condition_result_7 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_7:;
    tmp_return_value = mod_consts[42];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(par_uint64);
        tmp_cmp_expr_left_8 = par_uint64;
        tmp_cmp_expr_right_8 = mod_consts[43];
        tmp_condition_result_8 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
        assert(tmp_condition_result_8 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_8:;
    tmp_return_value = mod_consts[21];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(par_uint64);
        tmp_cmp_expr_left_9 = par_uint64;
        tmp_cmp_expr_right_9 = mod_consts[44];
        tmp_condition_result_9 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
        assert(tmp_condition_result_9 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_9:;
    tmp_return_value = mod_consts[45];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(par_uint64);
        tmp_cmp_expr_left_10 = par_uint64;
        tmp_cmp_expr_right_10 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_cmp_expr_right_10 == NULL)) {
            tmp_cmp_expr_right_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_cmp_expr_right_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
        assert(tmp_condition_result_10 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_left_value_1 = mod_consts[47];
        CHECK_OBJECT(par_uint64);
        tmp_right_value_1 = par_uint64;
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 247;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f2474260fad06296df4390e138643f97->m_frame.f_lineno = 247;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 247;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_10:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f2474260fad06296df4390e138643f97);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f2474260fad06296df4390e138643f97);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f2474260fad06296df4390e138643f97);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f2474260fad06296df4390e138643f97, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f2474260fad06296df4390e138643f97->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f2474260fad06296df4390e138643f97, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f2474260fad06296df4390e138643f97,
        type_description_1,
        par_uint64
    );


    // Release cached frame if used for exception.
    if (frame_f2474260fad06296df4390e138643f97 == cache_frame_f2474260fad06296df4390e138643f97) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f2474260fad06296df4390e138643f97);
        cache_frame_f2474260fad06296df4390e138643f97 = NULL;
    }

    assertFrameObject(frame_f2474260fad06296df4390e138643f97);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = mod_consts[48];
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_uint64);
    Py_DECREF(par_uint64);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_uint64);
    Py_DECREF(par_uint64);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_google$protobuf$internal$wire_format$$$function__27_IsTypePackable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_field_type = python_pars[0];
    struct Nuitka_FrameObject *frame_eeee05abecdeb554e3b4b9b7e1f26aa8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_eeee05abecdeb554e3b4b9b7e1f26aa8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eeee05abecdeb554e3b4b9b7e1f26aa8)) {
        Py_XDECREF(cache_frame_eeee05abecdeb554e3b4b9b7e1f26aa8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eeee05abecdeb554e3b4b9b7e1f26aa8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eeee05abecdeb554e3b4b9b7e1f26aa8 = MAKE_FUNCTION_FRAME(codeobj_eeee05abecdeb554e3b4b9b7e1f26aa8, module_google$protobuf$internal$wire_format, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_eeee05abecdeb554e3b4b9b7e1f26aa8->m_type_description == NULL);
    frame_eeee05abecdeb554e3b4b9b7e1f26aa8 = cache_frame_eeee05abecdeb554e3b4b9b7e1f26aa8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_eeee05abecdeb554e3b4b9b7e1f26aa8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_eeee05abecdeb554e3b4b9b7e1f26aa8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_field_type);
        tmp_cmp_expr_left_1 = par_field_type;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_eeee05abecdeb554e3b4b9b7e1f26aa8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_eeee05abecdeb554e3b4b9b7e1f26aa8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_eeee05abecdeb554e3b4b9b7e1f26aa8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_eeee05abecdeb554e3b4b9b7e1f26aa8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eeee05abecdeb554e3b4b9b7e1f26aa8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eeee05abecdeb554e3b4b9b7e1f26aa8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eeee05abecdeb554e3b4b9b7e1f26aa8,
        type_description_1,
        par_field_type
    );


    // Release cached frame if used for exception.
    if (frame_eeee05abecdeb554e3b4b9b7e1f26aa8 == cache_frame_eeee05abecdeb554e3b4b9b7e1f26aa8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_eeee05abecdeb554e3b4b9b7e1f26aa8);
        cache_frame_eeee05abecdeb554e3b4b9b7e1f26aa8 = NULL;
    }

    assertFrameObject(frame_eeee05abecdeb554e3b4b9b7e1f26aa8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_field_type);
    Py_DECREF(par_field_type);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_field_type);
    Py_DECREF(par_field_type);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__10_SInt32ByteSize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__10_SInt32ByteSize,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d2283bf7a40782a4b07e6c70774e1757,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__11_SInt64ByteSize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__11_SInt64ByteSize,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_734f9b7c3de9ecc0989b5400a8a19716,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__12_Fixed32ByteSize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__12_Fixed32ByteSize,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2d3d1d87c246861444beb0c1736b7413,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__13_Fixed64ByteSize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__13_Fixed64ByteSize,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7d85e7beb5d29a414008f5c88513bc7c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__14_SFixed32ByteSize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__14_SFixed32ByteSize,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9204e5652f8f8194d50e0116d473461f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__15_SFixed64ByteSize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__15_SFixed64ByteSize,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8bb06582490bd3bab9d0d92ad798c264,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__16_FloatByteSize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__16_FloatByteSize,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_67b3a63f0295da586aef24dbca084094,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__17_DoubleByteSize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__17_DoubleByteSize,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ed23be336e00ed498f4d96b0efbdda57,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__18_BoolByteSize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__18_BoolByteSize,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5439316352cbdc7ab56bae8c97a574cb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__19_EnumByteSize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__19_EnumByteSize,
        mod_consts[105],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aa8bc756f7d0f376783294ed5656426d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__1_PackTag() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__1_PackTag,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f70cf6c8812775071032f484b17d1be8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__20_StringByteSize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__20_StringByteSize,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d36eeb4b56a5057d628f01d9c1593c3a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__21_BytesByteSize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__21_BytesByteSize,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1d05ebf7b908de4c627afbca2ef7f4d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__22_GroupByteSize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__22_GroupByteSize,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1487711dfb9bcf38e74e927dd3ea5bba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__23_MessageByteSize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__23_MessageByteSize,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_120cddb79aeb9ccd03137ab204fd4323,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__24_MessageSetItemByteSize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__24_MessageSetItemByteSize,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aba8576a1711fc42c98682eeffd6b6be,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__25_TagByteSize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__25_TagByteSize,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_47f0a51fe1809d1bf8a658d0dc02e388,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        mod_consts[31],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__26__VarUInt64ByteSizeNoTag() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__26__VarUInt64ByteSizeNoTag,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f2474260fad06296df4390e138643f97,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        mod_consts[49],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__27_IsTypePackable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__27_IsTypePackable,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_eeee05abecdeb554e3b4b9b7e1f26aa8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        mod_consts[51],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__2_UnpackTag() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__2_UnpackTag,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6f631569bf60c3228115c1ac06ca598a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__3_ZigZagEncode() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__3_ZigZagEncode,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bf4f9c5ea5150db7c6a250327d2be089,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        mod_consts[11],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__4_ZigZagDecode() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__4_ZigZagDecode,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1f930cf8e7b456ba9f716a291b2f105b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__5_Int32ByteSize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__5_Int32ByteSize,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e3967daf2ebf5b1b4195dfaa41b0cfa4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__6_Int32ByteSizeNoTag() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__6_Int32ByteSizeNoTag,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_10e3e3fa5f99325b9f91e654a4f0ddc8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__7_Int64ByteSize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__7_Int64ByteSize,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_908572da6c11bb717ae86caa71f7adad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__8_UInt32ByteSize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__8_UInt32ByteSize,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b183b0cd34f8035efb705eb74ae728ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__9_UInt64ByteSize() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$protobuf$internal$wire_format$$$function__9_UInt64ByteSize,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ffadcdcb7c7b0cab4367b500f0f1bd27,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$protobuf$internal$wire_format,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_google$protobuf$internal$wire_format[] = {
    impl_google$protobuf$internal$wire_format$$$function__1_PackTag,
    impl_google$protobuf$internal$wire_format$$$function__2_UnpackTag,
    impl_google$protobuf$internal$wire_format$$$function__3_ZigZagEncode,
    impl_google$protobuf$internal$wire_format$$$function__4_ZigZagDecode,
    impl_google$protobuf$internal$wire_format$$$function__5_Int32ByteSize,
    impl_google$protobuf$internal$wire_format$$$function__6_Int32ByteSizeNoTag,
    impl_google$protobuf$internal$wire_format$$$function__7_Int64ByteSize,
    impl_google$protobuf$internal$wire_format$$$function__8_UInt32ByteSize,
    impl_google$protobuf$internal$wire_format$$$function__9_UInt64ByteSize,
    impl_google$protobuf$internal$wire_format$$$function__10_SInt32ByteSize,
    impl_google$protobuf$internal$wire_format$$$function__11_SInt64ByteSize,
    impl_google$protobuf$internal$wire_format$$$function__12_Fixed32ByteSize,
    impl_google$protobuf$internal$wire_format$$$function__13_Fixed64ByteSize,
    impl_google$protobuf$internal$wire_format$$$function__14_SFixed32ByteSize,
    impl_google$protobuf$internal$wire_format$$$function__15_SFixed64ByteSize,
    impl_google$protobuf$internal$wire_format$$$function__16_FloatByteSize,
    impl_google$protobuf$internal$wire_format$$$function__17_DoubleByteSize,
    impl_google$protobuf$internal$wire_format$$$function__18_BoolByteSize,
    impl_google$protobuf$internal$wire_format$$$function__19_EnumByteSize,
    impl_google$protobuf$internal$wire_format$$$function__20_StringByteSize,
    impl_google$protobuf$internal$wire_format$$$function__21_BytesByteSize,
    impl_google$protobuf$internal$wire_format$$$function__22_GroupByteSize,
    impl_google$protobuf$internal$wire_format$$$function__23_MessageByteSize,
    impl_google$protobuf$internal$wire_format$$$function__24_MessageSetItemByteSize,
    impl_google$protobuf$internal$wire_format$$$function__25_TagByteSize,
    impl_google$protobuf$internal$wire_format$$$function__26__VarUInt64ByteSizeNoTag,
    impl_google$protobuf$internal$wire_format$$$function__27_IsTypePackable,
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
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_google$protobuf$internal$wire_format;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
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

    if (offset > sizeof(functable_google$protobuf$internal$wire_format) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
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
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_google$protobuf$internal$wire_format[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_google$protobuf$internal$wire_format,
        doc,
        NULL,
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
PyObject *modulecode_google$protobuf$internal$wire_format(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google.protobuf.internal.wire_format");

    // Store the module for future use.
    module_google$protobuf$internal$wire_format = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("google.protobuf.internal.wire_format: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("google.protobuf.internal.wire_format: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("google.protobuf.internal.wire_format: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initgoogle$protobuf$internal$wire_format\n");

    moduledict_google$protobuf$internal$wire_format = MODULE_DICT(module_google$protobuf$internal$wire_format);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$protobuf$internal$wire_format,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$protobuf$internal$wire_format,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[140]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$protobuf$internal$wire_format,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$protobuf$internal$wire_format,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$protobuf$internal$wire_format,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$protobuf$internal$wire_format);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_google$protobuf$internal$wire_format);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_f069c785e738602b6994dc4623e59e09;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_f069c785e738602b6994dc4623e59e09 = MAKE_MODULE_FRAME(codeobj_f069c785e738602b6994dc4623e59e09, module_google$protobuf$internal$wire_format);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_f069c785e738602b6994dc4623e59e09);
    assert(Py_REFCNT(frame_f069c785e738602b6994dc4623e59e09) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[56], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[57], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[61];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_google$protobuf$internal$wire_format;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[0];
        frame_f069c785e738602b6994dc4623e59e09->m_frame.f_lineno = 35;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[62];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_google$protobuf$internal$wire_format;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[63];
        tmp_level_value_2 = mod_consts[0];
        frame_f069c785e738602b6994dc4623e59e09->m_frame.f_lineno = 36;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_google$protobuf$internal$wire_format,
                mod_consts[64],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[64]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[62];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_google$protobuf$internal$wire_format;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[65];
        tmp_level_value_3 = mod_consts[0];
        frame_f069c785e738602b6994dc4623e59e09->m_frame.f_lineno = 37;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_google$protobuf$internal$wire_format,
                mod_consts[2],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_value_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_1;
        PyObject *tmp_right_value_2;
        tmp_left_value_2 = mod_consts[9];
        tmp_right_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_right_value_1 == NULL)) {
            tmp_right_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        assert(!(tmp_right_value_1 == NULL));
        tmp_left_value_1 = BINARY_OPERATION_LSHIFT_OBJECT_LONG_LONG(tmp_left_value_2, tmp_right_value_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_right_value_2 = mod_consts[9];
        tmp_assign_source_9 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_value_1, tmp_right_value_2);
        Py_DECREF(tmp_left_value_1);
        assert(!(tmp_assign_source_9 == NULL));
        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[20];
        UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[76];
        UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[81];
        UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[87];
        UPDATE_STRING_DICT0(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_26);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[89]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        frame_f069c785e738602b6994dc4623e59e09->m_frame.f_lineno = 74;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[20];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[90];
        frame_f069c785e738602b6994dc4623e59e09->m_frame.f_lineno = 75;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_AssertionError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 75;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[89]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        frame_f069c785e738602b6994dc4623e59e09->m_frame.f_lineno = 76;
        tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[21];
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[91];
        frame_f069c785e738602b6994dc4623e59e09->m_frame.f_lineno = 77;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_AssertionError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 77;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__1_PackTag();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__2_UnpackTag();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__3_ZigZagEncode();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__4_ZigZagDecode();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;


        tmp_assign_source_31 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__5_Int32ByteSize();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__6_Int32ByteSizeNoTag();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__7_Int64ByteSize();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;


        tmp_assign_source_34 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__8_UInt32ByteSize();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__9_UInt64ByteSize();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;


        tmp_assign_source_36 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__10_SInt32ByteSize();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;


        tmp_assign_source_37 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__11_SInt64ByteSize();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;


        tmp_assign_source_38 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__12_Fixed32ByteSize();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;


        tmp_assign_source_39 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__13_Fixed64ByteSize();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;


        tmp_assign_source_40 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__14_SFixed32ByteSize();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;


        tmp_assign_source_41 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__15_SFixed64ByteSize();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;


        tmp_assign_source_42 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__16_FloatByteSize();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;


        tmp_assign_source_43 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__17_DoubleByteSize();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;


        tmp_assign_source_44 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__18_BoolByteSize();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;


        tmp_assign_source_45 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__19_EnumByteSize();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;


        tmp_assign_source_46 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__20_StringByteSize();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;


        tmp_assign_source_47 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__21_BytesByteSize();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;


        tmp_assign_source_48 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__22_GroupByteSize();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;


        tmp_assign_source_49 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__23_MessageByteSize();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;


        tmp_assign_source_50 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__24_MessageSetItemByteSize();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;


        tmp_assign_source_51 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__25_TagByteSize();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;


        tmp_assign_source_52 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__26__VarUInt64ByteSizeNoTag();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[110]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[111]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_53 = PyTuple_New(4);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyTuple_SET_ITEM(tmp_assign_source_53, 0, tmp_tuple_element_1);
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;

                goto tuple_build_exception_1;
            }
            tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[110]);
            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[112]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_53, 1, tmp_tuple_element_1);
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;

                goto tuple_build_exception_1;
            }
            tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[110]);
            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[113]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_53, 2, tmp_tuple_element_1);
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;

                goto tuple_build_exception_1;
            }
            tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[110]);
            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[114]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_53, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_53);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_53);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f069c785e738602b6994dc4623e59e09);
#endif
    popFrameStack();

    assertFrameObject(frame_f069c785e738602b6994dc4623e59e09);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f069c785e738602b6994dc4623e59e09);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f069c785e738602b6994dc4623e59e09, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f069c785e738602b6994dc4623e59e09->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f069c785e738602b6994dc4623e59e09, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_54;


        tmp_assign_source_54 = MAKE_FUNCTION_google$protobuf$internal$wire_format$$$function__27_IsTypePackable();

        UPDATE_STRING_DICT1(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_54);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google.protobuf.internal.wire_format", false);

    Py_INCREF(module_google$protobuf$internal$wire_format);
    return module_google$protobuf$internal$wire_format;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$protobuf$internal$wire_format, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("google$protobuf$internal$wire_format", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
