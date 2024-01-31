/* Generated code for Python module 'scipy.linalg._decomp_cossin'
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

/* The "module_scipy$linalg$_decomp_cossin" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$linalg$_decomp_cossin;
PyDictObject *moduledict_scipy$linalg$_decomp_cossin;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[87];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[87];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("scipy.linalg._decomp_cossin"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 87; i++) {
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
void checkModuleConstants_scipy$linalg$_decomp_cossin(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 87; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_0094d0297b0f07fb701936b198504ce0;
static PyCodeObject *codeobj_0e7bdee2914115f70bc98a7aa57dae89;
static PyCodeObject *codeobj_f54d5347e9db4fd0f093d501e3d1c43f;
static PyCodeObject *codeobj_14264fd28fe5905f5fbd2a6ea1c56e64;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[81]); CHECK_OBJECT(module_filename_obj);
    codeobj_0094d0297b0f07fb701936b198504ce0 = MAKE_CODEOBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[82], mod_consts[83], NULL, 1, 0, 0);
    codeobj_0e7bdee2914115f70bc98a7aa57dae89 = MAKE_CODEOBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[82], mod_consts[83], NULL, 1, 0, 0);
    codeobj_f54d5347e9db4fd0f093d501e3d1c43f = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[84], NULL, NULL, 0, 0, 0);
    codeobj_14264fd28fe5905f5fbd2a6ea1c56e64 = MAKE_CODEOBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[80], mod_consts[85], NULL, 7, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1_complex_call_helper_star_list(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__9_complex_call_helper_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_scipy$linalg$_decomp_cossin$$$function__1_cossin(PyObject *defaults);


// The module function definitions.
static PyObject *impl_scipy$linalg$_decomp_cossin$$$function__1_cossin(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_X = python_pars[0];
    PyObject *par_p = python_pars[1];
    PyObject *par_q = python_pars[2];
    PyObject *par_separate = python_pars[3];
    PyObject *par_swap_sign = python_pars[4];
    PyObject *par_compute_u = python_pars[5];
    PyObject *par_compute_vh = python_pars[6];
    PyObject *var_m = NULL;
    PyObject *var_x11 = NULL;
    PyObject *var_x12 = NULL;
    PyObject *var_x21 = NULL;
    PyObject *var_x22 = NULL;
    PyObject *var_name = NULL;
    PyObject *var_block = NULL;
    PyObject *var_mmp = NULL;
    PyObject *var_mmq = NULL;
    nuitka_bool var_cplx = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_driver = NULL;
    PyObject *var_csd = NULL;
    PyObject *var_csd_lwork = NULL;
    PyObject *var_lwork = NULL;
    PyObject *var_lwork_args = NULL;
    PyObject *var__ = NULL;
    PyObject *var_theta = NULL;
    PyObject *var_u1 = NULL;
    PyObject *var_u2 = NULL;
    PyObject *var_v1h = NULL;
    PyObject *var_v2h = NULL;
    PyObject *var_info = NULL;
    PyObject *var_method_name = NULL;
    PyObject *var_U = NULL;
    PyObject *var_VDH = NULL;
    PyObject *var_c = NULL;
    PyObject *var_s = NULL;
    PyObject *var_r = NULL;
    PyObject *var_n11 = NULL;
    PyObject *var_n12 = NULL;
    PyObject *var_n21 = NULL;
    PyObject *var_n22 = NULL;
    PyObject *var_Id = NULL;
    PyObject *var_CS = NULL;
    PyObject *var_xs = NULL;
    PyObject *var_xe = NULL;
    PyObject *var_ys = NULL;
    PyObject *var_ye = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *outline_1_var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_tuple_unpack_7__element_3 = NULL;
    PyObject *tmp_tuple_unpack_7__element_4 = NULL;
    PyObject *tmp_tuple_unpack_7__element_5 = NULL;
    PyObject *tmp_tuple_unpack_7__element_6 = NULL;
    PyObject *tmp_tuple_unpack_7__element_7 = NULL;
    PyObject *tmp_tuple_unpack_7__source_iter = NULL;
    struct Nuitka_FrameObject *frame_14264fd28fe5905f5fbd2a6ea1c56e64;
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
    struct Nuitka_FrameObject *frame_0094d0297b0f07fb701936b198504ce0_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_0094d0297b0f07fb701936b198504ce0_2 = NULL;
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
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    struct Nuitka_FrameObject *frame_0e7bdee2914115f70bc98a7aa57dae89_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    static struct Nuitka_FrameObject *cache_frame_0e7bdee2914115f70bc98a7aa57dae89_3 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_14264fd28fe5905f5fbd2a6ea1c56e64 = NULL;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_14264fd28fe5905f5fbd2a6ea1c56e64)) {
        Py_XDECREF(cache_frame_14264fd28fe5905f5fbd2a6ea1c56e64);

#if _DEBUG_REFCOUNTS
        if (cache_frame_14264fd28fe5905f5fbd2a6ea1c56e64 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_14264fd28fe5905f5fbd2a6ea1c56e64 = MAKE_FUNCTION_FRAME(codeobj_14264fd28fe5905f5fbd2a6ea1c56e64, module_scipy$linalg$_decomp_cossin, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_type_description == NULL);
    frame_14264fd28fe5905f5fbd2a6ea1c56e64 = cache_frame_14264fd28fe5905f5fbd2a6ea1c56e64;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_14264fd28fe5905f5fbd2a6ea1c56e64);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_14264fd28fe5905f5fbd2a6ea1c56e64) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_truth_name_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_p);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_p);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_q);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_q);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(par_p);
        tmp_cmp_expr_left_1 = par_p;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_1 = mod_consts[0];
        Py_INCREF(tmp_assign_source_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_p);
        tmp_int_arg_1 = par_p;
        tmp_assign_source_1 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        {
            PyObject *old = par_p;
            par_p = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_int_arg_2;
        CHECK_OBJECT(par_q);
        tmp_cmp_expr_left_2 = par_q;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_assign_source_2 = mod_consts[0];
        Py_INCREF(tmp_assign_source_2);
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT(par_q);
        tmp_int_arg_2 = par_q;
        tmp_assign_source_2 = PyNumber_Int(tmp_int_arg_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_2:;
        {
            PyObject *old = par_q;
            par_q = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_X);
        tmp_tuple_element_1 = par_X;
        tmp_args_value_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = PyDict_Copy(mod_consts[2]);
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 113;
        tmp_assign_source_3 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_X;
            assert(old != NULL);
            par_X = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_X);
        tmp_expression_value_2 = par_X;
        tmp_dircall_arg2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_operand_value_1 = impl___main__$$$function__1_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_3;
        tmp_kw_call_arg_value_0_1 = mod_consts[6];
        CHECK_OBJECT(par_X);
        tmp_expression_value_3 = par_X;
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[5]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 115;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 115;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_X);
        tmp_expression_value_5 = par_X;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[5]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[7];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_m == NULL);
        var_m = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_p);
        tmp_cmp_expr_left_3 = par_p;
        CHECK_OBJECT(var_m);
        tmp_cmp_expr_right_3 = var_m;
        tmp_or_left_value_2 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        assert(tmp_or_left_value_2 != NUITKA_BOOL_UNASSIGNED);
        CHECK_OBJECT(par_p);
        tmp_cmp_expr_left_4 = par_p;
        tmp_cmp_expr_right_4 = mod_consts[7];
        tmp_or_right_value_2 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_5 = tmp_or_left_value_2;
        or_end_2:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        assert(tmp_condition_result_5 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        tmp_kw_call_arg_value_0_2 = mod_consts[8];
        CHECK_OBJECT(par_p);
        tmp_kw_call_arg_value_1_2 = par_p;
        CHECK_OBJECT(par_X);
        tmp_expression_value_7 = par_X;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[5]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[7];
        tmp_kw_call_arg_value_2_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_1};
            tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_2_1);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 119;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 119;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_or_left_truth_3;
        nuitka_bool tmp_or_left_value_3;
        nuitka_bool tmp_or_right_value_3;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(par_q);
        tmp_cmp_expr_left_5 = par_q;
        CHECK_OBJECT(var_m);
        tmp_cmp_expr_right_5 = var_m;
        tmp_or_left_value_3 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_or_left_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_3);

            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        assert(tmp_or_left_value_3 != NUITKA_BOOL_UNASSIGNED);
        CHECK_OBJECT(par_q);
        tmp_cmp_expr_left_6 = par_q;
        tmp_cmp_expr_right_6 = mod_consts[7];
        tmp_or_right_value_3 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_or_right_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_condition_result_6 = tmp_or_left_value_3;
        or_end_3:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_3;
        tmp_kw_call_arg_value_0_3 = mod_consts[9];
        CHECK_OBJECT(par_q);
        tmp_kw_call_arg_value_1_3 = par_q;
        CHECK_OBJECT(par_X);
        tmp_expression_value_9 = par_X;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[5]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[7];
        tmp_kw_call_arg_value_2_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_3, 0);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_kw_call_arg_value_2_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 122;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3, tmp_kw_call_arg_value_2_2};
            tmp_make_exception_arg_3 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_2_2);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 122;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 122;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_stop_value_1;
        CHECK_OBJECT(par_X);
        tmp_expression_value_10 = par_X;
        CHECK_OBJECT(par_p);
        tmp_stop_value_1 = par_p;
        tmp_tuple_element_3 = MAKE_SLICEOBJ1(tmp_stop_value_1);
        assert(!(tmp_tuple_element_3 == NULL));
        tmp_subscript_value_4 = PyTuple_New(2);
        {
            PyObject *tmp_stop_value_2;
            PyTuple_SET_ITEM(tmp_subscript_value_4, 0, tmp_tuple_element_3);
            CHECK_OBJECT(par_q);
            tmp_stop_value_2 = par_q;
            tmp_tuple_element_3 = MAKE_SLICEOBJ1(tmp_stop_value_2);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_4, 1, tmp_tuple_element_3);
        }
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = PyTuple_New(4);
        {
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_stop_value_3;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_start_value_2;
            PyObject *tmp_stop_value_5;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_start_value_3;
            PyObject *tmp_stop_value_7;
            PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_X);
            tmp_expression_value_11 = par_X;
            CHECK_OBJECT(par_p);
            tmp_stop_value_3 = par_p;
            tmp_tuple_element_4 = MAKE_SLICEOBJ1(tmp_stop_value_3);
            assert(!(tmp_tuple_element_4 == NULL));
            tmp_subscript_value_5 = PyTuple_New(2);
            {
                PyObject *tmp_start_value_1;
                PyObject *tmp_stop_value_4;
                PyTuple_SET_ITEM(tmp_subscript_value_5, 0, tmp_tuple_element_4);
                CHECK_OBJECT(par_q);
                tmp_start_value_1 = par_q;
                tmp_stop_value_4 = Py_None;
                tmp_tuple_element_4 = MAKE_SLICEOBJ2(tmp_start_value_1, tmp_stop_value_4);
                assert(!(tmp_tuple_element_4 == NULL));
                PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_4);
            }
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_5);
            Py_DECREF(tmp_subscript_value_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_2);
            CHECK_OBJECT(par_X);
            tmp_expression_value_12 = par_X;
            CHECK_OBJECT(par_p);
            tmp_start_value_2 = par_p;
            tmp_stop_value_5 = Py_None;
            tmp_tuple_element_5 = MAKE_SLICEOBJ2(tmp_start_value_2, tmp_stop_value_5);
            assert(!(tmp_tuple_element_5 == NULL));
            tmp_subscript_value_6 = PyTuple_New(2);
            {
                PyObject *tmp_stop_value_6;
                PyTuple_SET_ITEM(tmp_subscript_value_6, 0, tmp_tuple_element_5);
                CHECK_OBJECT(par_q);
                tmp_stop_value_6 = par_q;
                tmp_tuple_element_5 = MAKE_SLICEOBJ1(tmp_stop_value_6);
                assert(!(tmp_tuple_element_5 == NULL));
                PyTuple_SET_ITEM(tmp_subscript_value_6, 1, tmp_tuple_element_5);
            }
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_6);
            Py_DECREF(tmp_subscript_value_6);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_1, 2, tmp_tuple_element_2);
            CHECK_OBJECT(par_X);
            tmp_expression_value_13 = par_X;
            CHECK_OBJECT(par_p);
            tmp_start_value_3 = par_p;
            tmp_stop_value_7 = Py_None;
            tmp_tuple_element_6 = MAKE_SLICEOBJ2(tmp_start_value_3, tmp_stop_value_7);
            assert(!(tmp_tuple_element_6 == NULL));
            tmp_subscript_value_7 = PyTuple_New(2);
            {
                PyObject *tmp_start_value_4;
                PyObject *tmp_stop_value_8;
                PyTuple_SET_ITEM(tmp_subscript_value_7, 0, tmp_tuple_element_6);
                CHECK_OBJECT(par_q);
                tmp_start_value_4 = par_q;
                tmp_stop_value_8 = Py_None;
                tmp_tuple_element_6 = MAKE_SLICEOBJ2(tmp_start_value_4, tmp_stop_value_8);
                assert(!(tmp_tuple_element_6 == NULL));
                PyTuple_SET_ITEM(tmp_subscript_value_7, 1, tmp_tuple_element_6);
            }
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_7);
            Py_DECREF(tmp_subscript_value_7);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_1, 3, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_5 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_5 == NULL));
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_1, 0, 4);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            exception_lineno = 125;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_2, 1, 4);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            exception_lineno = 125;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_3, 2, 4);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            exception_lineno = 125;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_4, 3, 4);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            exception_lineno = 125;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                    exception_lineno = 125;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[10];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            exception_lineno = 125;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
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
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
        assert(var_x11 == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_x11 = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
        assert(var_x12 == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_x12 = tmp_assign_source_11;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_3;
        assert(var_x21 == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_x21 = tmp_assign_source_12;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_4;
        assert(var_x22 == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_x22 = tmp_assign_source_13;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_X);
        tmp_isinstance_inst_1 = par_X;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_make_exception_arg_4;
        tmp_make_exception_arg_4 = mod_consts[12];
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 127;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_4);
        assert(!(tmp_raise_type_4 == NULL));
        exception_type = tmp_raise_type_4;
        exception_lineno = 127;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_X);
        tmp_len_arg_1 = par_X;
        tmp_cmp_expr_left_7 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = mod_consts[13];
        tmp_condition_result_8 = RICH_COMPARE_NE_CBOOL_LONG_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_condition_result_8 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_make_exception_arg_5;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_arg_value_1_4;
        PyObject *tmp_len_arg_2;
        tmp_kw_call_arg_value_0_4 = mod_consts[14];
        CHECK_OBJECT(par_X);
        tmp_len_arg_2 = par_X;
        tmp_kw_call_arg_value_1_4 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_kw_call_arg_value_1_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_4};
            tmp_make_exception_arg_5 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_4);
        if (tmp_make_exception_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 131;
        tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_5);
        Py_DECREF(tmp_make_exception_arg_5);
        assert(!(tmp_raise_type_5 == NULL));
        exception_type = tmp_raise_type_5;
        exception_lineno = 131;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(par_X);
            tmp_iter_arg_3 = par_X;
            tmp_assign_source_15 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                goto try_except_handler_5;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_15;
        }
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = PyList_New(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_16;
        }
        if (isFrameUnusable(cache_frame_0094d0297b0f07fb701936b198504ce0_2)) {
            Py_XDECREF(cache_frame_0094d0297b0f07fb701936b198504ce0_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0094d0297b0f07fb701936b198504ce0_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0094d0297b0f07fb701936b198504ce0_2 = MAKE_FUNCTION_FRAME(codeobj_0094d0297b0f07fb701936b198504ce0, module_scipy$linalg$_decomp_cossin, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_0094d0297b0f07fb701936b198504ce0_2->m_type_description == NULL);
        frame_0094d0297b0f07fb701936b198504ce0_2 = cache_frame_0094d0297b0f07fb701936b198504ce0_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_0094d0297b0f07fb701936b198504ce0_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_0094d0297b0f07fb701936b198504ce0_2) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_17 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 134;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_17;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_18 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_18;
                Py_INCREF(outline_0_var_x);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            CHECK_OBJECT(outline_0_var_x);
            tmp_args_element_value_1 = outline_0_var_x;
            frame_0094d0297b0f07fb701936b198504ce0_2->m_frame.f_lineno = 134;
            tmp_append_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[15], tmp_args_element_value_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            assert(PyList_Check(tmp_append_list_1));
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_2 = "o";
            goto try_except_handler_6;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_iter_arg_2 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_iter_arg_2);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
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

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0094d0297b0f07fb701936b198504ce0_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_return_exit_2:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_0094d0297b0f07fb701936b198504ce0_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_5;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0094d0297b0f07fb701936b198504ce0_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0094d0297b0f07fb701936b198504ce0_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0094d0297b0f07fb701936b198504ce0_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0094d0297b0f07fb701936b198504ce0_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0094d0297b0f07fb701936b198504ce0_2,
            type_description_2,
            outline_0_var_x
        );


        // Release cached frame if used for exception.
        if (frame_0094d0297b0f07fb701936b198504ce0_2 == cache_frame_0094d0297b0f07fb701936b198504ce0_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_0094d0297b0f07fb701936b198504ce0_2);
            cache_frame_0094d0297b0f07fb701936b198504ce0_2 = NULL;
        }

        assertFrameObject(frame_0094d0297b0f07fb701936b198504ce0_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
        goto try_except_handler_5;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 134;
        goto try_except_handler_4;
        outline_result_1:;
        tmp_assign_source_14 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT(tmp_unpack_5, 0, 4);
        if (tmp_assign_source_19 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            exception_lineno = 134;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT(tmp_unpack_6, 1, 4);
        if (tmp_assign_source_20 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            exception_lineno = 134;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT(tmp_unpack_7, 2, 4);
        if (tmp_assign_source_21 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            exception_lineno = 134;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_2__element_3 == NULL);
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT(tmp_unpack_8, 3, 4);
        if (tmp_assign_source_22 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            exception_lineno = 134;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_2__element_4 == NULL);
        tmp_tuple_unpack_2__element_4 = tmp_assign_source_22;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                    exception_lineno = 134;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[10];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            exception_lineno = 134;
            goto try_except_handler_7;
        }
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_4);
    tmp_tuple_unpack_2__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_23 = tmp_tuple_unpack_2__element_1;
        assert(var_x11 == NULL);
        Py_INCREF(tmp_assign_source_23);
        var_x11 = tmp_assign_source_23;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_24 = tmp_tuple_unpack_2__element_2;
        assert(var_x12 == NULL);
        Py_INCREF(tmp_assign_source_24);
        var_x12 = tmp_assign_source_24;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_25 = tmp_tuple_unpack_2__element_3;
        assert(var_x21 == NULL);
        Py_INCREF(tmp_assign_source_25);
        var_x21 = tmp_assign_source_25;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_4);
        tmp_assign_source_26 = tmp_tuple_unpack_2__element_4;
        assert(var_x22 == NULL);
        Py_INCREF(tmp_assign_source_26);
        var_x22 = tmp_assign_source_26;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_4);
    tmp_tuple_unpack_2__element_4 = NULL;

    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_list_element_1;
        tmp_called_value_2 = (PyObject *)&PyZip_Type;
        tmp_args_element_value_2 = LIST_COPY(mod_consts[16]);
        CHECK_OBJECT(var_x11);
        tmp_list_element_1 = var_x11;
        tmp_args_element_value_3 = PyList_New(4);
        PyList_SET_ITEM0(tmp_args_element_value_3, 0, tmp_list_element_1);
        CHECK_OBJECT(var_x12);
        tmp_list_element_1 = var_x12;
        PyList_SET_ITEM0(tmp_args_element_value_3, 1, tmp_list_element_1);
        CHECK_OBJECT(var_x21);
        tmp_list_element_1 = var_x21;
        PyList_SET_ITEM0(tmp_args_element_value_3, 2, tmp_list_element_1);
        CHECK_OBJECT(var_x22);
        tmp_list_element_1 = var_x22;
        PyList_SET_ITEM0(tmp_args_element_value_3, 3, tmp_list_element_1);
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 135;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_iter_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = MAKE_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_27;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_28 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_28 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                exception_lineno = 135;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_iter_arg_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_5 = tmp_for_loop_1__iter_value;
        tmp_assign_source_29 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_30 = UNPACK_NEXT(tmp_unpack_9, 0, 2);
        if (tmp_assign_source_30 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            exception_lineno = 135;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_31 = UNPACK_NEXT(tmp_unpack_10, 1, 2);
        if (tmp_assign_source_31 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            exception_lineno = 135;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                    exception_lineno = 135;
                    goto try_except_handler_10;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[17];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            exception_lineno = 135;
            goto try_except_handler_10;
        }
    }
    goto try_end_5;
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

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_9;
    // End of try:
    try_end_5:;
    goto try_end_6;
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

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_8;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_32 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_32;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_33 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_block;
            var_block = tmp_assign_source_33;
            Py_INCREF(var_block);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(var_block);
        tmp_expression_value_15 = var_block;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[5]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_subscript_value_8 = mod_consts[0];
        tmp_cmp_expr_left_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_14, tmp_subscript_value_8, 1);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_cmp_expr_right_8 = mod_consts[7];
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
        assert(tmp_condition_result_9 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_make_exception_arg_6;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_arg_value_1_5;
        tmp_kw_call_arg_value_0_5 = mod_consts[18];
        CHECK_OBJECT(var_name);
        tmp_kw_call_arg_value_1_5 = var_name;
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_5};
            tmp_make_exception_arg_6 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 138;
        tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_6);
        Py_DECREF(tmp_make_exception_arg_6);
        assert(!(tmp_raise_type_6 == NULL));
        exception_type = tmp_raise_type_6;
        exception_lineno = 138;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    branch_no_7:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 135;
        type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(var_x11);
        tmp_expression_value_16 = var_x11;
        tmp_iter_arg_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[5]);
        if (tmp_iter_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_assign_source_34 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        assert(tmp_tuple_unpack_4__source_iter == NULL);
        tmp_tuple_unpack_4__source_iter = tmp_assign_source_34;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_11 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_35 = UNPACK_NEXT(tmp_unpack_11, 0, 2);
        if (tmp_assign_source_35 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            exception_lineno = 139;
            goto try_except_handler_12;
        }
        assert(tmp_tuple_unpack_4__element_1 == NULL);
        tmp_tuple_unpack_4__element_1 = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_12 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_36 = UNPACK_NEXT(tmp_unpack_12, 1, 2);
        if (tmp_assign_source_36 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            exception_lineno = 139;
            goto try_except_handler_12;
        }
        assert(tmp_tuple_unpack_4__element_2 == NULL);
        tmp_tuple_unpack_4__element_2 = tmp_assign_source_36;
    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_4); assert(HAS_ITERNEXT(tmp_iterator_name_4));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_4)->tp_iternext)(tmp_iterator_name_4);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                    exception_lineno = 139;
                    goto try_except_handler_12;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[17];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            exception_lineno = 139;
            goto try_except_handler_12;
        }
    }
    goto try_end_8;
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

    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_11;
    // End of try:
    try_end_8:;
    goto try_end_9;
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

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_37 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = par_p;
            assert(old != NULL);
            par_p = tmp_assign_source_37;
            Py_INCREF(par_p);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_38 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = par_q;
            assert(old != NULL);
            par_q = tmp_assign_source_38;
            Py_INCREF(par_q);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(var_x22);
        tmp_expression_value_17 = var_x22;
        tmp_iter_arg_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[5]);
        if (tmp_iter_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assign_source_39 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
        Py_DECREF(tmp_iter_arg_7);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        assert(tmp_tuple_unpack_5__source_iter == NULL);
        tmp_tuple_unpack_5__source_iter = tmp_assign_source_39;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_13 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_40 = UNPACK_NEXT(tmp_unpack_13, 0, 2);
        if (tmp_assign_source_40 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            exception_lineno = 140;
            goto try_except_handler_14;
        }
        assert(tmp_tuple_unpack_5__element_1 == NULL);
        tmp_tuple_unpack_5__element_1 = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_14 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_41 = UNPACK_NEXT(tmp_unpack_14, 1, 2);
        if (tmp_assign_source_41 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            exception_lineno = 140;
            goto try_except_handler_14;
        }
        assert(tmp_tuple_unpack_5__element_2 == NULL);
        tmp_tuple_unpack_5__element_2 = tmp_assign_source_41;
    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_5); assert(HAS_ITERNEXT(tmp_iterator_name_5));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_5)->tp_iternext)(tmp_iterator_name_5);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                    exception_lineno = 140;
                    goto try_except_handler_14;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[17];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            exception_lineno = 140;
            goto try_except_handler_14;
        }
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_13;
    // End of try:
    try_end_10:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
        tmp_assign_source_42 = tmp_tuple_unpack_5__element_1;
        assert(var_mmp == NULL);
        Py_INCREF(tmp_assign_source_42);
        var_mmp = tmp_assign_source_42;
    }
    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_43;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
        tmp_assign_source_43 = tmp_tuple_unpack_5__element_2;
        assert(var_mmq == NULL);
        Py_INCREF(tmp_assign_source_43);
        var_mmq = tmp_assign_source_43;
    }
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_tuple_element_7;
        CHECK_OBJECT(var_x12);
        tmp_expression_value_18 = var_x12;
        tmp_cmp_expr_left_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[5]);
        if (tmp_cmp_expr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_p);
        tmp_tuple_element_7 = par_p;
        tmp_cmp_expr_right_9 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_9, 0, tmp_tuple_element_7);
        CHECK_OBJECT(var_mmq);
        tmp_tuple_element_7 = var_mmq;
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_9, 1, tmp_tuple_element_7);
        tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        Py_DECREF(tmp_cmp_expr_left_9);
        Py_DECREF(tmp_cmp_expr_right_9);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
        assert(tmp_condition_result_10 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_make_exception_arg_7;
        PyObject *tmp_kw_call_arg_value_0_6;
        PyObject *tmp_kw_call_arg_value_1_6;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kw_call_arg_value_2_3;
        PyObject *tmp_expression_value_19;
        tmp_kw_call_arg_value_0_6 = mod_consts[19];
        CHECK_OBJECT(par_p);
        tmp_tuple_element_8 = par_p;
        tmp_kw_call_arg_value_1_6 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_1_6, 0, tmp_tuple_element_8);
        CHECK_OBJECT(var_mmq);
        tmp_tuple_element_8 = var_mmq;
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_1_6, 1, tmp_tuple_element_8);
        CHECK_OBJECT(var_x12);
        tmp_expression_value_19 = var_x12;
        tmp_kw_call_arg_value_2_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[5]);
        if (tmp_kw_call_arg_value_2_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_6);

            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 143;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_6, tmp_kw_call_arg_value_1_6, tmp_kw_call_arg_value_2_3};
            tmp_make_exception_arg_7 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_6);
        Py_DECREF(tmp_kw_call_arg_value_2_3);
        if (tmp_make_exception_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 143;
        tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_7);
        Py_DECREF(tmp_make_exception_arg_7);
        assert(!(tmp_raise_type_7 == NULL));
        exception_type = tmp_raise_type_7;
        exception_lineno = 143;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_tuple_element_9;
        CHECK_OBJECT(var_x21);
        tmp_expression_value_20 = var_x21;
        tmp_cmp_expr_left_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[5]);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mmp);
        tmp_tuple_element_9 = var_mmp;
        tmp_cmp_expr_right_10 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_10, 0, tmp_tuple_element_9);
        CHECK_OBJECT(par_q);
        tmp_tuple_element_9 = par_q;
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_10, 1, tmp_tuple_element_9);
        tmp_condition_result_11 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        Py_DECREF(tmp_cmp_expr_left_10);
        Py_DECREF(tmp_cmp_expr_right_10);
        if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
        assert(tmp_condition_result_11 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_make_exception_arg_8;
        PyObject *tmp_kw_call_arg_value_0_7;
        PyObject *tmp_kw_call_arg_value_1_7;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kw_call_arg_value_2_4;
        PyObject *tmp_expression_value_21;
        tmp_kw_call_arg_value_0_7 = mod_consts[20];
        CHECK_OBJECT(var_mmp);
        tmp_tuple_element_10 = var_mmp;
        tmp_kw_call_arg_value_1_7 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_1_7, 0, tmp_tuple_element_10);
        CHECK_OBJECT(par_q);
        tmp_tuple_element_10 = par_q;
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_1_7, 1, tmp_tuple_element_10);
        CHECK_OBJECT(var_x21);
        tmp_expression_value_21 = var_x21;
        tmp_kw_call_arg_value_2_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[5]);
        if (tmp_kw_call_arg_value_2_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_7);

            exception_lineno = 148;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 147;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_7, tmp_kw_call_arg_value_1_7, tmp_kw_call_arg_value_2_4};
            tmp_make_exception_arg_8 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_7);
        Py_DECREF(tmp_kw_call_arg_value_2_4);
        if (tmp_make_exception_arg_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 147;
        tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_8);
        Py_DECREF(tmp_make_exception_arg_8);
        assert(!(tmp_raise_type_8 == NULL));
        exception_type = tmp_raise_type_8;
        exception_lineno = 147;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        CHECK_OBJECT(par_p);
        tmp_left_value_1 = par_p;
        CHECK_OBJECT(var_mmp);
        tmp_right_value_1 = var_mmp;
        tmp_cmp_expr_left_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_q);
        tmp_left_value_2 = par_q;
        CHECK_OBJECT(var_mmq);
        tmp_right_value_2 = var_mmq;
        tmp_cmp_expr_right_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_2, tmp_right_value_2);
        if (tmp_cmp_expr_right_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_11);

            exception_lineno = 150;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_left_11);
        Py_DECREF(tmp_cmp_expr_right_11);
        if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
        assert(tmp_condition_result_12 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_make_exception_arg_9;
        PyObject *tmp_kw_call_arg_value_0_8;
        PyObject *tmp_kw_call_arg_value_1_8;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_3;
        PyObject *tmp_kw_call_arg_value_2_5;
        PyObject *tmp_left_value_4;
        PyObject *tmp_right_value_4;
        tmp_kw_call_arg_value_0_8 = mod_consts[21];
        CHECK_OBJECT(par_p);
        tmp_left_value_3 = par_p;
        CHECK_OBJECT(var_mmp);
        tmp_right_value_3 = var_mmp;
        tmp_kw_call_arg_value_1_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_3, tmp_right_value_3);
        if (tmp_kw_call_arg_value_1_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_q);
        tmp_left_value_4 = par_q;
        CHECK_OBJECT(var_mmq);
        tmp_right_value_4 = var_mmq;
        tmp_kw_call_arg_value_2_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_4, tmp_right_value_4);
        if (tmp_kw_call_arg_value_2_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_8);

            exception_lineno = 154;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 151;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_8, tmp_kw_call_arg_value_1_8, tmp_kw_call_arg_value_2_5};
            tmp_make_exception_arg_9 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_8);
        Py_DECREF(tmp_kw_call_arg_value_2_5);
        if (tmp_make_exception_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 151;
        tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_9);
        Py_DECREF(tmp_make_exception_arg_9);
        assert(!(tmp_raise_type_9 == NULL));
        exception_type = tmp_raise_type_9;
        exception_lineno = 151;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_10:;
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_left_value_5;
        PyObject *tmp_right_value_5;
        CHECK_OBJECT(par_p);
        tmp_left_value_5 = par_p;
        CHECK_OBJECT(var_mmp);
        tmp_right_value_5 = var_mmp;
        tmp_assign_source_44 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_5, tmp_right_value_5);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_m == NULL);
        var_m = tmp_assign_source_44;
    }
    branch_end_5:;
    branch_end_1:;
    {
        nuitka_bool tmp_assign_source_45;
        PyObject *tmp_any_arg_1;
        PyObject *tmp_capi_result_1;
        int tmp_truth_name_3;
        // Tried code:
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_iter_arg_8;
            PyObject *tmp_tuple_element_11;
            if (var_x11 == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 158;
                type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                goto try_except_handler_15;
            }

            tmp_tuple_element_11 = var_x11;
            tmp_iter_arg_8 = PyTuple_New(4);
            PyTuple_SET_ITEM0(tmp_iter_arg_8, 0, tmp_tuple_element_11);
            if (var_x12 == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[23]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 158;
                type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_tuple_element_11 = var_x12;
            PyTuple_SET_ITEM0(tmp_iter_arg_8, 1, tmp_tuple_element_11);
            if (var_x21 == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[24]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 158;
                type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_tuple_element_11 = var_x21;
            PyTuple_SET_ITEM0(tmp_iter_arg_8, 2, tmp_tuple_element_11);
            if (var_x22 == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[25]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 158;
                type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_tuple_element_11 = var_x22;
            PyTuple_SET_ITEM0(tmp_iter_arg_8, 3, tmp_tuple_element_11);
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_iter_arg_8);
            goto try_except_handler_15;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_assign_source_46 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_8);
            Py_DECREF(tmp_iter_arg_8);
            assert(!(tmp_assign_source_46 == NULL));
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_46;
        }
        {
            PyObject *tmp_assign_source_47;
            tmp_assign_source_47 = PyList_New(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_47;
        }
        if (isFrameUnusable(cache_frame_0e7bdee2914115f70bc98a7aa57dae89_3)) {
            Py_XDECREF(cache_frame_0e7bdee2914115f70bc98a7aa57dae89_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0e7bdee2914115f70bc98a7aa57dae89_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0e7bdee2914115f70bc98a7aa57dae89_3 = MAKE_FUNCTION_FRAME(codeobj_0e7bdee2914115f70bc98a7aa57dae89, module_scipy$linalg$_decomp_cossin, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_0e7bdee2914115f70bc98a7aa57dae89_3->m_type_description == NULL);
        frame_0e7bdee2914115f70bc98a7aa57dae89_3 = cache_frame_0e7bdee2914115f70bc98a7aa57dae89_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_0e7bdee2914115f70bc98a7aa57dae89_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_0e7bdee2914115f70bc98a7aa57dae89_3) == 2); // Frame stack

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_48;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_3 = tmp_listcomp_2__$0;
            tmp_assign_source_48 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_48 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 158;
                    goto try_except_handler_16;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_48;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_49;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_49 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_x;
                outline_1_var_x = tmp_assign_source_49;
                Py_INCREF(outline_1_var_x);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_4;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            CHECK_OBJECT(outline_1_var_x);
            tmp_args_element_value_4 = outline_1_var_x;
            frame_0e7bdee2914115f70bc98a7aa57dae89_3->m_frame.f_lineno = 158;
            tmp_append_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[26], tmp_args_element_value_4);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            assert(PyList_Check(tmp_append_list_2));
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_any_arg_1 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_any_arg_1);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_3;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto frame_exception_exit_3;
        // End of try:

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0e7bdee2914115f70bc98a7aa57dae89_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_return_exit_3:;
#if 0
        RESTORE_FRAME_EXCEPTION(frame_0e7bdee2914115f70bc98a7aa57dae89_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_15;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_0e7bdee2914115f70bc98a7aa57dae89_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0e7bdee2914115f70bc98a7aa57dae89_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0e7bdee2914115f70bc98a7aa57dae89_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0e7bdee2914115f70bc98a7aa57dae89_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0e7bdee2914115f70bc98a7aa57dae89_3,
            type_description_2,
            outline_1_var_x
        );


        // Release cached frame if used for exception.
        if (frame_0e7bdee2914115f70bc98a7aa57dae89_3 == cache_frame_0e7bdee2914115f70bc98a7aa57dae89_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_0e7bdee2914115f70bc98a7aa57dae89_3);
            cache_frame_0e7bdee2914115f70bc98a7aa57dae89_3 = NULL;
        }

        assertFrameObject(frame_0e7bdee2914115f70bc98a7aa57dae89_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
        goto try_except_handler_15;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_XDECREF(outline_1_var_x);
        outline_1_var_x = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_x);
        outline_1_var_x = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 158;
        goto frame_exception_exit_1;
        outline_result_2:;
        tmp_capi_result_1 = BUILTIN_ANY(tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_capi_result_1);
        assert(!(tmp_truth_name_3 == -1));
        tmp_assign_source_45 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_capi_result_1);
        var_cplx = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_50;
        bool tmp_condition_result_13;
        assert(var_cplx != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_13 = var_cplx == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 != false) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        tmp_assign_source_50 = mod_consts[27];
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_assign_source_50 = mod_consts[28];
        condexpr_end_3:;
        assert(var_driver == NULL);
        Py_INCREF(tmp_assign_source_50);
        var_driver = tmp_assign_source_50;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_list_element_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_list_element_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        CHECK_OBJECT(var_driver);
        tmp_list_element_2 = var_driver;
        tmp_args_element_value_5 = PyList_New(2);
        {
            PyObject *tmp_left_value_6;
            PyObject *tmp_right_value_6;
            PyList_SET_ITEM0(tmp_args_element_value_5, 0, tmp_list_element_2);
            CHECK_OBJECT(var_driver);
            tmp_left_value_6 = var_driver;
            tmp_right_value_6 = mod_consts[30];
            tmp_list_element_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_6, tmp_right_value_6);
            assert(!(tmp_list_element_2 == NULL));
            PyList_SET_ITEM(tmp_args_element_value_5, 1, tmp_list_element_2);
        }
        if (var_x11 == NULL) {
            Py_DECREF(tmp_args_element_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_list_element_3 = var_x11;
        tmp_args_element_value_6 = PyList_New(4);
        PyList_SET_ITEM0(tmp_args_element_value_6, 0, tmp_list_element_3);
        if (var_x12 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto list_build_exception_1;
        }

        tmp_list_element_3 = var_x12;
        PyList_SET_ITEM0(tmp_args_element_value_6, 1, tmp_list_element_3);
        if (var_x21 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto list_build_exception_1;
        }

        tmp_list_element_3 = var_x21;
        PyList_SET_ITEM0(tmp_args_element_value_6, 2, tmp_list_element_3);
        if (var_x22 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto list_build_exception_1;
        }

        tmp_list_element_3 = var_x22;
        PyList_SET_ITEM0(tmp_args_element_value_6, 3, tmp_list_element_3);
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        goto try_except_handler_17;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 160;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_iter_arg_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_iter_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_assign_source_51 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_9);
        Py_DECREF(tmp_iter_arg_9);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        assert(tmp_tuple_unpack_6__source_iter == NULL);
        tmp_tuple_unpack_6__source_iter = tmp_assign_source_51;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_unpack_15;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_15 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_52 = UNPACK_NEXT(tmp_unpack_15, 0, 2);
        if (tmp_assign_source_52 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            exception_lineno = 160;
            goto try_except_handler_18;
        }
        assert(tmp_tuple_unpack_6__element_1 == NULL);
        tmp_tuple_unpack_6__element_1 = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_unpack_16;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_unpack_16 = tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_53 = UNPACK_NEXT(tmp_unpack_16, 1, 2);
        if (tmp_assign_source_53 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            exception_lineno = 160;
            goto try_except_handler_18;
        }
        assert(tmp_tuple_unpack_6__element_2 == NULL);
        tmp_tuple_unpack_6__element_2 = tmp_assign_source_53;
    }
    {
        PyObject *tmp_iterator_name_6;
        CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
        tmp_iterator_name_6 = tmp_tuple_unpack_6__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_6); assert(HAS_ITERNEXT(tmp_iterator_name_6));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_6)->tp_iternext)(tmp_iterator_name_6);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                    exception_lineno = 160;
                    goto try_except_handler_18;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[17];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            exception_lineno = 160;
            goto try_except_handler_18;
        }
    }
    goto try_end_12;
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

    CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
    Py_DECREF(tmp_tuple_unpack_6__source_iter);
    tmp_tuple_unpack_6__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_17;
    // End of try:
    try_end_12:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_6__element_1);
    tmp_tuple_unpack_6__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_6__element_2);
    tmp_tuple_unpack_6__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_tuple_unpack_6__source_iter);
    Py_DECREF(tmp_tuple_unpack_6__source_iter);
    tmp_tuple_unpack_6__source_iter = NULL;
    {
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_1);
        tmp_assign_source_54 = tmp_tuple_unpack_6__element_1;
        assert(var_csd == NULL);
        Py_INCREF(tmp_assign_source_54);
        var_csd = tmp_assign_source_54;
    }
    Py_XDECREF(tmp_tuple_unpack_6__element_1);
    tmp_tuple_unpack_6__element_1 = NULL;

    {
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT(tmp_tuple_unpack_6__element_2);
        tmp_assign_source_55 = tmp_tuple_unpack_6__element_2;
        assert(var_csd_lwork == NULL);
        Py_INCREF(tmp_assign_source_55);
        var_csd_lwork = tmp_assign_source_55;
    }
    Py_XDECREF(tmp_tuple_unpack_6__element_2);
    tmp_tuple_unpack_6__element_2 = NULL;

    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_arg_value_0_9;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_csd_lwork);
        tmp_kw_call_arg_value_0_9 = var_csd_lwork;
        if (var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 162;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_1 = var_m;
        if (par_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 162;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_1_1 = par_p;
        if (par_q == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 162;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_2_1 = par_q;
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 162;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_9};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_assign_source_56 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[35]);
        }

        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_lwork == NULL);
        var_lwork = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        bool tmp_condition_result_14;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        assert(var_cplx != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_14 = var_cplx == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_14 != false) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        tmp_dict_key_1 = mod_consts[36];
        CHECK_OBJECT(var_lwork);
        tmp_expression_value_22 = var_lwork;
        tmp_subscript_value_9 = mod_consts[7];
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_22, tmp_subscript_value_9, 0);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_57 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_10;
            tmp_res = PyDict_SetItem(tmp_assign_source_57, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[37];
            CHECK_OBJECT(var_lwork);
            tmp_expression_value_23 = var_lwork;
            tmp_subscript_value_10 = mod_consts[0];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_23, tmp_subscript_value_10, 1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_57, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_57);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_dict_key_2 = mod_consts[36];
        CHECK_OBJECT(var_lwork);
        tmp_dict_value_2 = var_lwork;
        tmp_assign_source_57 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_57, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        condexpr_end_4:;
        assert(var_lwork_args == NULL);
        var_lwork_args = tmp_assign_source_57;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_iter_arg_10;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(var_csd);
        tmp_dircall_arg1_2 = var_csd;
        tmp_dict_key_3 = mod_consts[22];
        if (var_x11 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }

        tmp_dict_value_3 = var_x11;
        tmp_dircall_arg2_2 = _PyDict_NewPresized( 10 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[23];
        if (var_x12 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto dict_build_exception_2;
        }

        tmp_dict_value_3 = var_x12;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[24];
        if (var_x21 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto dict_build_exception_2;
        }

        tmp_dict_value_3 = var_x21;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[25];
        if (var_x22 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto dict_build_exception_2;
        }

        tmp_dict_value_3 = var_x22;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[38];
        CHECK_OBJECT(par_compute_u);
        tmp_dict_value_3 = par_compute_u;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[39];
        CHECK_OBJECT(par_compute_u);
        tmp_dict_value_3 = par_compute_u;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[40];
        CHECK_OBJECT(par_compute_vh);
        tmp_dict_value_3 = par_compute_vh;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[41];
        CHECK_OBJECT(par_compute_vh);
        tmp_dict_value_3 = par_compute_vh;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[42];
        tmp_dict_value_3 = Py_False;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[43];
        CHECK_OBJECT(par_swap_sign);
        tmp_dict_value_3 = par_swap_sign;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_dircall_arg2_2);
        goto try_except_handler_19;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        CHECK_OBJECT(var_lwork_args);
        tmp_dircall_arg3_1 = var_lwork_args;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_1};
            tmp_iter_arg_10 = impl___main__$$$function__9_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_iter_arg_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_assign_source_58 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_10);
        Py_DECREF(tmp_iter_arg_10);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        assert(tmp_tuple_unpack_7__source_iter == NULL);
        tmp_tuple_unpack_7__source_iter = tmp_assign_source_58;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_list_arg_1;
        CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
        tmp_list_arg_1 = tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_59 = MAKE_LIST(tmp_list_arg_1);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        assert(tmp_tuple_unpack_7__element_1 == NULL);
        tmp_tuple_unpack_7__element_1 = tmp_assign_source_59;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
        tmp_len_arg_3 = tmp_tuple_unpack_7__element_1;
        tmp_cmp_expr_left_12 = BUILTIN_LEN(tmp_len_arg_3);
        assert(!(tmp_cmp_expr_left_12 == NULL));
        tmp_cmp_expr_right_12 = mod_consts[44];
        tmp_condition_result_15 = RICH_COMPARE_LT_CBOOL_LONG_LONG(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        Py_DECREF(tmp_cmp_expr_left_12);
        if (tmp_condition_result_15 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_value_7;
        PyObject *tmp_right_value_7;
        PyObject *tmp_left_value_8;
        PyObject *tmp_len_arg_4;
        PyObject *tmp_right_value_8;
        tmp_raise_type_10 = PyExc_ValueError;
        tmp_left_value_7 = mod_consts[45];
        CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
        tmp_len_arg_4 = tmp_tuple_unpack_7__element_1;
        tmp_left_value_8 = BUILTIN_LEN(tmp_len_arg_4);
        if (tmp_left_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        tmp_right_value_8 = mod_consts[7];
        tmp_right_value_7 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_8, tmp_right_value_8);
        Py_DECREF(tmp_left_value_8);
        assert(!(tmp_right_value_7 == NULL));
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_LONG(tmp_left_value_7, tmp_right_value_7);
        Py_DECREF(tmp_right_value_7);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        exception_value = tmp_raise_value_1;
        exception_lineno = 165;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
        goto try_except_handler_20;
    }
    branch_no_11:;
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_list_arg_value_1;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
        tmp_list_arg_value_1 = tmp_tuple_unpack_7__element_1;
        assert(PyList_Check(tmp_list_arg_value_1));
        tmp_assign_source_60 = PyObject_CallMethod(tmp_list_arg_value_1, (char *)"pop", NULL);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        assert(tmp_tuple_unpack_7__element_7 == NULL);
        tmp_tuple_unpack_7__element_7 = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_list_arg_value_2;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
        tmp_list_arg_value_2 = tmp_tuple_unpack_7__element_1;
        assert(PyList_Check(tmp_list_arg_value_2));
        tmp_assign_source_61 = PyObject_CallMethod(tmp_list_arg_value_2, (char *)"pop", NULL);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        assert(tmp_tuple_unpack_7__element_6 == NULL);
        tmp_tuple_unpack_7__element_6 = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_list_arg_value_3;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
        tmp_list_arg_value_3 = tmp_tuple_unpack_7__element_1;
        assert(PyList_Check(tmp_list_arg_value_3));
        tmp_assign_source_62 = PyObject_CallMethod(tmp_list_arg_value_3, (char *)"pop", NULL);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        assert(tmp_tuple_unpack_7__element_5 == NULL);
        tmp_tuple_unpack_7__element_5 = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_list_arg_value_4;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
        tmp_list_arg_value_4 = tmp_tuple_unpack_7__element_1;
        assert(PyList_Check(tmp_list_arg_value_4));
        tmp_assign_source_63 = PyObject_CallMethod(tmp_list_arg_value_4, (char *)"pop", NULL);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        assert(tmp_tuple_unpack_7__element_4 == NULL);
        tmp_tuple_unpack_7__element_4 = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_list_arg_value_5;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
        tmp_list_arg_value_5 = tmp_tuple_unpack_7__element_1;
        assert(PyList_Check(tmp_list_arg_value_5));
        tmp_assign_source_64 = PyObject_CallMethod(tmp_list_arg_value_5, (char *)"pop", NULL);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        assert(tmp_tuple_unpack_7__element_3 == NULL);
        tmp_tuple_unpack_7__element_3 = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_list_arg_value_6;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
        tmp_list_arg_value_6 = tmp_tuple_unpack_7__element_1;
        assert(PyList_Check(tmp_list_arg_value_6));
        tmp_assign_source_65 = PyObject_CallMethod(tmp_list_arg_value_6, (char *)"pop", NULL);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        assert(tmp_tuple_unpack_7__element_2 == NULL);
        tmp_tuple_unpack_7__element_2 = tmp_assign_source_65;
    }
    goto try_end_14;
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

    CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
    Py_DECREF(tmp_tuple_unpack_7__source_iter);
    tmp_tuple_unpack_7__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto try_except_handler_19;
    // End of try:
    try_end_14:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_7__element_1);
    tmp_tuple_unpack_7__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_7__element_3);
    tmp_tuple_unpack_7__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_7__element_4);
    tmp_tuple_unpack_7__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_7__element_5);
    tmp_tuple_unpack_7__element_5 = NULL;
    Py_XDECREF(tmp_tuple_unpack_7__element_6);
    tmp_tuple_unpack_7__element_6 = NULL;
    Py_XDECREF(tmp_tuple_unpack_7__element_7);
    tmp_tuple_unpack_7__element_7 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_tuple_unpack_7__source_iter);
    Py_DECREF(tmp_tuple_unpack_7__source_iter);
    tmp_tuple_unpack_7__source_iter = NULL;
    {
        PyObject *tmp_assign_source_66;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_1);
        tmp_assign_source_66 = tmp_tuple_unpack_7__element_1;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_66);
        var__ = tmp_assign_source_66;
    }
    Py_XDECREF(tmp_tuple_unpack_7__element_1);
    tmp_tuple_unpack_7__element_1 = NULL;

    {
        PyObject *tmp_assign_source_67;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_2);
        tmp_assign_source_67 = tmp_tuple_unpack_7__element_2;
        assert(var_theta == NULL);
        Py_INCREF(tmp_assign_source_67);
        var_theta = tmp_assign_source_67;
    }
    Py_XDECREF(tmp_tuple_unpack_7__element_2);
    tmp_tuple_unpack_7__element_2 = NULL;

    {
        PyObject *tmp_assign_source_68;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_3);
        tmp_assign_source_68 = tmp_tuple_unpack_7__element_3;
        assert(var_u1 == NULL);
        Py_INCREF(tmp_assign_source_68);
        var_u1 = tmp_assign_source_68;
    }
    Py_XDECREF(tmp_tuple_unpack_7__element_3);
    tmp_tuple_unpack_7__element_3 = NULL;

    {
        PyObject *tmp_assign_source_69;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_4);
        tmp_assign_source_69 = tmp_tuple_unpack_7__element_4;
        assert(var_u2 == NULL);
        Py_INCREF(tmp_assign_source_69);
        var_u2 = tmp_assign_source_69;
    }
    Py_XDECREF(tmp_tuple_unpack_7__element_4);
    tmp_tuple_unpack_7__element_4 = NULL;

    {
        PyObject *tmp_assign_source_70;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_5);
        tmp_assign_source_70 = tmp_tuple_unpack_7__element_5;
        assert(var_v1h == NULL);
        Py_INCREF(tmp_assign_source_70);
        var_v1h = tmp_assign_source_70;
    }
    Py_XDECREF(tmp_tuple_unpack_7__element_5);
    tmp_tuple_unpack_7__element_5 = NULL;

    {
        PyObject *tmp_assign_source_71;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_6);
        tmp_assign_source_71 = tmp_tuple_unpack_7__element_6;
        assert(var_v2h == NULL);
        Py_INCREF(tmp_assign_source_71);
        var_v2h = tmp_assign_source_71;
    }
    Py_XDECREF(tmp_tuple_unpack_7__element_6);
    tmp_tuple_unpack_7__element_6 = NULL;

    {
        PyObject *tmp_assign_source_72;
        CHECK_OBJECT(tmp_tuple_unpack_7__element_7);
        tmp_assign_source_72 = tmp_tuple_unpack_7__element_7;
        assert(var_info == NULL);
        Py_INCREF(tmp_assign_source_72);
        var_info = tmp_assign_source_72;
    }
    Py_XDECREF(tmp_tuple_unpack_7__element_7);
    tmp_tuple_unpack_7__element_7 = NULL;

    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_left_value_9;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_right_value_9;
        CHECK_OBJECT(var_csd);
        tmp_expression_value_24 = var_csd;
        tmp_left_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[46]);
        if (tmp_left_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_driver);
        tmp_right_value_9 = var_driver;
        tmp_assign_source_73 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_9, tmp_right_value_9);
        Py_DECREF(tmp_left_value_9);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_method_name == NULL);
        var_method_name = tmp_assign_source_73;
    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        CHECK_OBJECT(var_info);
        tmp_cmp_expr_left_13 = var_info;
        tmp_cmp_expr_right_13 = mod_consts[7];
        tmp_condition_result_16 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
        assert(tmp_condition_result_16 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_12:;
    {
        PyObject *tmp_raise_type_11;
        PyObject *tmp_make_exception_arg_10;
        PyObject *tmp_kw_call_arg_value_0_10;
        PyObject *tmp_kw_call_arg_value_1_9;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_kw_call_arg_value_2_6;
        tmp_kw_call_arg_value_0_10 = mod_consts[47];
        CHECK_OBJECT(var_info);
        tmp_operand_value_3 = var_info;
        tmp_kw_call_arg_value_1_9 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_3);
        if (tmp_kw_call_arg_value_1_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_method_name);
        tmp_kw_call_arg_value_2_6 = var_method_name;
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 175;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_10, tmp_kw_call_arg_value_1_9, tmp_kw_call_arg_value_2_6};
            tmp_make_exception_arg_10 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_9);
        if (tmp_make_exception_arg_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 175;
        tmp_raise_type_11 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_10);
        Py_DECREF(tmp_make_exception_arg_10);
        assert(!(tmp_raise_type_11 == NULL));
        exception_type = tmp_raise_type_11;
        exception_lineno = 175;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        CHECK_OBJECT(var_info);
        tmp_cmp_expr_left_14 = var_info;
        tmp_cmp_expr_right_14 = mod_consts[7];
        tmp_condition_result_17 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
        assert(tmp_condition_result_17 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_13:;
    {
        PyObject *tmp_raise_type_12;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_kw_call_arg_value_0_11;
        PyObject *tmp_kw_call_arg_value_1_10;
        PyObject *tmp_kw_call_arg_value_2_7;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_11 = mod_consts[49];
        CHECK_OBJECT(var_method_name);
        tmp_kw_call_arg_value_1_10 = var_method_name;
        CHECK_OBJECT(var_info);
        tmp_kw_call_arg_value_2_7 = var_info;
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 178;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_11, tmp_kw_call_arg_value_1_10, tmp_kw_call_arg_value_2_7};
            tmp_args_element_value_7 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 178;
        tmp_raise_type_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_raise_type_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_12;
        exception_lineno = 178;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_18;
        int tmp_truth_name_4;
        CHECK_OBJECT(par_separate);
        tmp_truth_name_4 = CHECK_IF_TRUE(par_separate);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_tuple_element_13;
        CHECK_OBJECT(var_u1);
        tmp_tuple_element_13 = var_u1;
        tmp_tuple_element_12 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_tuple_element_12, 0, tmp_tuple_element_13);
        CHECK_OBJECT(var_u2);
        tmp_tuple_element_13 = var_u2;
        PyTuple_SET_ITEM0(tmp_tuple_element_12, 1, tmp_tuple_element_13);
        tmp_return_value = PyTuple_New(3);
        {
            PyObject *tmp_tuple_element_14;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_12);
            CHECK_OBJECT(var_theta);
            tmp_tuple_element_12 = var_theta;
            PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_12);
            CHECK_OBJECT(var_v1h);
            tmp_tuple_element_14 = var_v1h;
            tmp_tuple_element_12 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_12, 0, tmp_tuple_element_14);
            CHECK_OBJECT(var_v2h);
            tmp_tuple_element_14 = var_v2h;
            PyTuple_SET_ITEM0(tmp_tuple_element_12, 1, tmp_tuple_element_14);
            PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_12);
        }
        goto frame_return_exit_1;
    }
    branch_no_14:;
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_u1);
        tmp_args_element_value_8 = var_u1;
        CHECK_OBJECT(var_u2);
        tmp_args_element_value_9 = var_u2;
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 183;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_74 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_U == NULL);
        var_U = tmp_assign_source_74;
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_v1h);
        tmp_args_element_value_10 = var_v1h;
        CHECK_OBJECT(var_v2h);
        tmp_args_element_value_11 = var_v2h;
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 184;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_assign_source_75 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_VDH == NULL);
        var_VDH = tmp_assign_source_75;
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_13;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[51]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_theta);
        tmp_args_element_value_13 = var_theta;
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 187;
        tmp_args_element_value_12 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[52], tmp_args_element_value_13);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 187;
        tmp_assign_source_76 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_c == NULL);
        var_c = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_15;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[51]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_theta);
        tmp_args_element_value_15 = var_theta;
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 188;
        tmp_args_element_value_14 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[53], tmp_args_element_value_15);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 188;
        tmp_assign_source_77 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_s == NULL);
        var_s = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_left_value_10;
        PyObject *tmp_right_value_10;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_left_value_11;
        PyObject *tmp_right_value_11;
        tmp_called_value_10 = LOOKUP_BUILTIN(mod_consts[54]);
        assert(tmp_called_value_10 != NULL);
        if (par_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_16 = par_p;
        if (par_q == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_17 = par_q;
        if (var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_10 = var_m;
        if (par_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_10 = par_p;
        tmp_args_element_value_18 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_10, tmp_right_value_10);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_m == NULL) {
            Py_DECREF(tmp_args_element_value_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_11 = var_m;
        if (par_q == NULL) {
            Py_DECREF(tmp_args_element_value_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_11 = par_q;
        tmp_args_element_value_19 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_11, tmp_right_value_11);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_18);

            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 189;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_assign_source_78 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_r == NULL);
        var_r = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_left_value_12;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_right_value_12;
        tmp_called_value_11 = LOOKUP_BUILTIN(mod_consts[54]);
        assert(tmp_called_value_11 != NULL);
        if (par_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_20 = par_p;
        if (par_q == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_21 = par_q;
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_left_value_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        if (tmp_left_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_r);
        tmp_right_value_12 = var_r;
        tmp_assign_source_79 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_12, tmp_right_value_12);
        Py_DECREF(tmp_left_value_12);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_n11 == NULL);
        var_n11 = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_left_value_13;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_left_value_14;
        PyObject *tmp_right_value_13;
        PyObject *tmp_right_value_14;
        tmp_called_value_12 = LOOKUP_BUILTIN(mod_consts[54]);
        assert(tmp_called_value_12 != NULL);
        if (par_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_22 = par_p;
        if (var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_14 = var_m;
        if (par_q == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_13 = par_q;
        tmp_args_element_value_23 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_14, tmp_right_value_13);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 191;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_left_value_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_args_element_value_23);
        if (tmp_left_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_r);
        tmp_right_value_14 = var_r;
        tmp_assign_source_80 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_13, tmp_right_value_14);
        Py_DECREF(tmp_left_value_13);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_n12 == NULL);
        var_n12 = tmp_assign_source_80;
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_left_value_15;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_left_value_16;
        PyObject *tmp_right_value_15;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_right_value_16;
        tmp_called_value_13 = LOOKUP_BUILTIN(mod_consts[54]);
        assert(tmp_called_value_13 != NULL);
        if (var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 192;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_16 = var_m;
        if (par_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 192;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_15 = par_p;
        tmp_args_element_value_24 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_16, tmp_right_value_15);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_q == NULL) {
            Py_DECREF(tmp_args_element_value_24);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 192;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_25 = par_q;
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 192;
        {
            PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_left_value_15 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_13, call_args);
        }

        Py_DECREF(tmp_args_element_value_24);
        if (tmp_left_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_r);
        tmp_right_value_16 = var_r;
        tmp_assign_source_81 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_15, tmp_right_value_16);
        Py_DECREF(tmp_left_value_15);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_n21 == NULL);
        var_n21 = tmp_assign_source_81;
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_left_value_17;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_left_value_18;
        PyObject *tmp_right_value_17;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_left_value_19;
        PyObject *tmp_right_value_18;
        PyObject *tmp_right_value_19;
        tmp_called_value_14 = LOOKUP_BUILTIN(mod_consts[54]);
        assert(tmp_called_value_14 != NULL);
        if (var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 193;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_18 = var_m;
        if (par_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 193;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_17 = par_p;
        tmp_args_element_value_26 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_18, tmp_right_value_17);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_m == NULL) {
            Py_DECREF(tmp_args_element_value_26);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 193;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_19 = var_m;
        if (par_q == NULL) {
            Py_DECREF(tmp_args_element_value_26);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 193;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_18 = par_q;
        tmp_args_element_value_27 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_19, tmp_right_value_18);
        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_26);

            exception_lineno = 193;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_left_value_17 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_14, call_args);
        }

        Py_DECREF(tmp_args_element_value_26);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_left_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_r);
        tmp_right_value_19 = var_r;
        tmp_assign_source_82 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_17, tmp_right_value_19);
        Py_DECREF(tmp_left_value_17);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_n22 == NULL);
        var_n22 = tmp_assign_source_82;
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_kw_call_arg_value_0_12;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_list_element_4;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_28;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[55]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 194;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_n11);
        tmp_list_element_4 = var_n11;
        tmp_args_element_value_28 = PyList_New(5);
        PyList_SET_ITEM0(tmp_args_element_value_28, 0, tmp_list_element_4);
        CHECK_OBJECT(var_n12);
        tmp_list_element_4 = var_n12;
        PyList_SET_ITEM0(tmp_args_element_value_28, 1, tmp_list_element_4);
        CHECK_OBJECT(var_n21);
        tmp_list_element_4 = var_n21;
        PyList_SET_ITEM0(tmp_args_element_value_28, 2, tmp_list_element_4);
        CHECK_OBJECT(var_n22);
        tmp_list_element_4 = var_n22;
        PyList_SET_ITEM0(tmp_args_element_value_28, 3, tmp_list_element_4);
        CHECK_OBJECT(var_r);
        tmp_list_element_4 = var_r;
        PyList_SET_ITEM0(tmp_args_element_value_28, 4, tmp_list_element_4);
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 194;
        tmp_kw_call_arg_value_0_12 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[56], tmp_args_element_value_28);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_kw_call_arg_value_0_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 194;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_theta);
        tmp_expression_value_28 = var_theta;
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[57]);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_kw_call_arg_value_0_12);

            exception_lineno = 194;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 194;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_12};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_assign_source_83 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_15, args, kw_values, mod_consts[58]);
        }

        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_kw_call_arg_value_0_12);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_Id == NULL);
        var_Id = tmp_assign_source_83;
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_kw_call_arg_value_0_13;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_expression_value_30;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[59]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_m == NULL) {
            Py_DECREF(tmp_called_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 195;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_15 = var_m;
        tmp_kw_call_arg_value_0_13 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_13, 0, tmp_tuple_element_15);
        if (var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 195;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto tuple_build_exception_3;
        }

        tmp_tuple_element_15 = var_m;
        PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_13, 1, tmp_tuple_element_15);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_kw_call_arg_value_0_13);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        CHECK_OBJECT(var_theta);
        tmp_expression_value_30 = var_theta;
        tmp_kw_call_dict_value_0_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[57]);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_kw_call_arg_value_0_13);

            exception_lineno = 195;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame.f_lineno = 195;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_13};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_assign_source_84 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_16, args, kw_values, mod_consts[58]);
        }

        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_kw_call_arg_value_0_13);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_CS == NULL);
        var_CS = tmp_assign_source_84;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_stop_value_9;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_stop_value_11;
        CHECK_OBJECT(var_Id);
        tmp_expression_value_31 = var_Id;
        CHECK_OBJECT(var_n11);
        tmp_stop_value_9 = var_n11;
        tmp_tuple_element_16 = MAKE_SLICEOBJ1(tmp_stop_value_9);
        assert(!(tmp_tuple_element_16 == NULL));
        tmp_subscript_value_11 = PyTuple_New(2);
        {
            PyObject *tmp_stop_value_10;
            PyTuple_SET_ITEM(tmp_subscript_value_11, 0, tmp_tuple_element_16);
            CHECK_OBJECT(var_n11);
            tmp_stop_value_10 = var_n11;
            tmp_tuple_element_16 = MAKE_SLICEOBJ1(tmp_stop_value_10);
            assert(!(tmp_tuple_element_16 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_11, 1, tmp_tuple_element_16);
        }
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_11);
        Py_DECREF(tmp_subscript_value_11);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_CS);
        tmp_ass_subscribed_1 = var_CS;
        CHECK_OBJECT(var_n11);
        tmp_stop_value_11 = var_n11;
        tmp_tuple_element_17 = MAKE_SLICEOBJ1(tmp_stop_value_11);
        assert(!(tmp_tuple_element_17 == NULL));
        tmp_ass_subscript_1 = PyTuple_New(2);
        {
            PyObject *tmp_stop_value_12;
            PyTuple_SET_ITEM(tmp_ass_subscript_1, 0, tmp_tuple_element_17);
            CHECK_OBJECT(var_n11);
            tmp_stop_value_12 = var_n11;
            tmp_tuple_element_17 = MAKE_SLICEOBJ1(tmp_stop_value_12);
            assert(!(tmp_tuple_element_17 == NULL));
            PyTuple_SET_ITEM(tmp_ass_subscript_1, 1, tmp_tuple_element_17);
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_left_value_20;
        PyObject *tmp_right_value_20;
        CHECK_OBJECT(var_n11);
        tmp_left_value_20 = var_n11;
        CHECK_OBJECT(var_r);
        tmp_right_value_20 = var_r;
        tmp_assign_source_85 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_20, tmp_right_value_20);
        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_xs == NULL);
        var_xs = tmp_assign_source_85;
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_left_value_21;
        PyObject *tmp_left_value_22;
        PyObject *tmp_right_value_21;
        PyObject *tmp_right_value_22;
        CHECK_OBJECT(var_n11);
        tmp_left_value_22 = var_n11;
        CHECK_OBJECT(var_r);
        tmp_right_value_21 = var_r;
        tmp_left_value_21 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_22, tmp_right_value_21);
        if (tmp_left_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_n12);
        tmp_right_value_22 = var_n12;
        tmp_assign_source_86 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_21, tmp_right_value_22);
        Py_DECREF(tmp_left_value_21);
        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_xe == NULL);
        var_xe = tmp_assign_source_86;
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_left_value_23;
        PyObject *tmp_left_value_24;
        PyObject *tmp_left_value_25;
        PyObject *tmp_right_value_23;
        PyObject *tmp_right_value_24;
        PyObject *tmp_right_value_25;
        PyObject *tmp_left_value_26;
        PyObject *tmp_right_value_26;
        CHECK_OBJECT(var_n11);
        tmp_left_value_25 = var_n11;
        CHECK_OBJECT(var_n21);
        tmp_right_value_23 = var_n21;
        tmp_left_value_24 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_25, tmp_right_value_23);
        if (tmp_left_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_n22);
        tmp_right_value_24 = var_n22;
        tmp_left_value_23 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_24, tmp_right_value_24);
        Py_DECREF(tmp_left_value_24);
        if (tmp_left_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_26 = mod_consts[60];
        CHECK_OBJECT(var_r);
        tmp_right_value_26 = var_r;
        tmp_right_value_25 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_26, tmp_right_value_26);
        if (tmp_right_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_23);

            exception_lineno = 201;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_87 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_23, tmp_right_value_25);
        Py_DECREF(tmp_left_value_23);
        Py_DECREF(tmp_right_value_25);
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ys == NULL);
        var_ys = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_left_value_27;
        PyObject *tmp_left_value_28;
        PyObject *tmp_left_value_29;
        PyObject *tmp_left_value_30;
        PyObject *tmp_right_value_27;
        PyObject *tmp_right_value_28;
        PyObject *tmp_right_value_29;
        PyObject *tmp_left_value_31;
        PyObject *tmp_right_value_30;
        PyObject *tmp_right_value_31;
        CHECK_OBJECT(var_n11);
        tmp_left_value_30 = var_n11;
        CHECK_OBJECT(var_n21);
        tmp_right_value_27 = var_n21;
        tmp_left_value_29 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_30, tmp_right_value_27);
        if (tmp_left_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_n22);
        tmp_right_value_28 = var_n22;
        tmp_left_value_28 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_29, tmp_right_value_28);
        Py_DECREF(tmp_left_value_29);
        if (tmp_left_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_31 = mod_consts[60];
        CHECK_OBJECT(var_r);
        tmp_right_value_30 = var_r;
        tmp_right_value_29 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_31, tmp_right_value_30);
        if (tmp_right_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_28);

            exception_lineno = 202;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_27 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_28, tmp_right_value_29);
        Py_DECREF(tmp_left_value_28);
        Py_DECREF(tmp_right_value_29);
        if (tmp_left_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_n12);
        tmp_right_value_31 = var_n12;
        tmp_assign_source_88 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_27, tmp_right_value_31);
        Py_DECREF(tmp_left_value_27);
        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ye == NULL);
        var_ye = tmp_assign_source_88;
    }
    {
        PyObject *tmp_ass_subvalue_2;
        nuitka_bool tmp_condition_result_19;
        int tmp_truth_name_5;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_stop_value_13;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_stop_value_15;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_start_value_5;
        PyObject *tmp_stop_value_17;
        CHECK_OBJECT(par_swap_sign);
        tmp_truth_name_5 = CHECK_IF_TRUE(par_swap_sign);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_19 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(var_Id);
        tmp_expression_value_32 = var_Id;
        CHECK_OBJECT(var_n12);
        tmp_stop_value_13 = var_n12;
        tmp_tuple_element_18 = MAKE_SLICEOBJ1(tmp_stop_value_13);
        assert(!(tmp_tuple_element_18 == NULL));
        tmp_subscript_value_12 = PyTuple_New(2);
        {
            PyObject *tmp_stop_value_14;
            PyTuple_SET_ITEM(tmp_subscript_value_12, 0, tmp_tuple_element_18);
            CHECK_OBJECT(var_n12);
            tmp_stop_value_14 = var_n12;
            tmp_tuple_element_18 = MAKE_SLICEOBJ1(tmp_stop_value_14);
            assert(!(tmp_tuple_element_18 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_12, 1, tmp_tuple_element_18);
        }
        tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_12);
        Py_DECREF(tmp_subscript_value_12);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT(var_Id);
        tmp_expression_value_33 = var_Id;
        CHECK_OBJECT(var_n12);
        tmp_stop_value_15 = var_n12;
        tmp_tuple_element_19 = MAKE_SLICEOBJ1(tmp_stop_value_15);
        assert(!(tmp_tuple_element_19 == NULL));
        tmp_subscript_value_13 = PyTuple_New(2);
        {
            PyObject *tmp_stop_value_16;
            PyTuple_SET_ITEM(tmp_subscript_value_13, 0, tmp_tuple_element_19);
            CHECK_OBJECT(var_n12);
            tmp_stop_value_16 = var_n12;
            tmp_tuple_element_19 = MAKE_SLICEOBJ1(tmp_stop_value_16);
            assert(!(tmp_tuple_element_19 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_13, 1, tmp_tuple_element_19);
        }
        tmp_operand_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_13);
        Py_DECREF(tmp_subscript_value_13);
        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_5:;
        CHECK_OBJECT(var_CS);
        tmp_ass_subscribed_2 = var_CS;
        CHECK_OBJECT(var_xs);
        tmp_start_value_5 = var_xs;
        CHECK_OBJECT(var_xe);
        tmp_stop_value_17 = var_xe;
        tmp_tuple_element_20 = MAKE_SLICEOBJ2(tmp_start_value_5, tmp_stop_value_17);
        assert(!(tmp_tuple_element_20 == NULL));
        tmp_ass_subscript_2 = PyTuple_New(2);
        {
            PyObject *tmp_start_value_6;
            PyObject *tmp_stop_value_18;
            PyTuple_SET_ITEM(tmp_ass_subscript_2, 0, tmp_tuple_element_20);
            CHECK_OBJECT(var_ys);
            tmp_start_value_6 = var_ys;
            CHECK_OBJECT(var_ye);
            tmp_stop_value_18 = var_ye;
            tmp_tuple_element_20 = MAKE_SLICEOBJ2(tmp_start_value_6, tmp_stop_value_18);
            assert(!(tmp_tuple_element_20 == NULL));
            PyTuple_SET_ITEM(tmp_ass_subscript_2, 1, tmp_tuple_element_20);
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_left_value_32;
        PyObject *tmp_left_value_33;
        PyObject *tmp_right_value_32;
        PyObject *tmp_right_value_33;
        if (par_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 205;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_33 = par_p;
        CHECK_OBJECT(var_n22);
        tmp_right_value_32 = var_n22;
        tmp_left_value_32 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_33, tmp_right_value_32);
        if (tmp_left_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_r);
        tmp_right_value_33 = var_r;
        tmp_assign_source_89 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_32, tmp_right_value_33);
        Py_DECREF(tmp_left_value_32);
        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_xs;
            assert(old != NULL);
            var_xs = tmp_assign_source_89;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_left_value_34;
        PyObject *tmp_left_value_35;
        PyObject *tmp_left_value_36;
        PyObject *tmp_right_value_34;
        PyObject *tmp_right_value_35;
        PyObject *tmp_right_value_36;
        PyObject *tmp_operand_value_5;
        if (par_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_36 = par_p;
        CHECK_OBJECT(var_n22);
        tmp_right_value_34 = var_n22;
        tmp_left_value_35 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_36, tmp_right_value_34);
        if (tmp_left_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_r);
        tmp_right_value_35 = var_r;
        tmp_left_value_34 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_35, tmp_right_value_35);
        Py_DECREF(tmp_left_value_35);
        if (tmp_left_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_n21);
        tmp_operand_value_5 = var_n21;
        tmp_right_value_36 = UNARY_OPERATION(PyNumber_Positive, tmp_operand_value_5);
        if (tmp_right_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_34);

            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_90 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_34, tmp_right_value_36);
        Py_DECREF(tmp_left_value_34);
        Py_DECREF(tmp_right_value_36);
        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_xe;
            assert(old != NULL);
            var_xe = tmp_assign_source_90;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_left_value_37;
        PyObject *tmp_right_value_37;
        CHECK_OBJECT(var_n11);
        tmp_left_value_37 = var_n11;
        CHECK_OBJECT(var_r);
        tmp_right_value_37 = var_r;
        tmp_assign_source_91 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_37, tmp_right_value_37);
        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ys;
            assert(old != NULL);
            var_ys = tmp_assign_source_91;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_left_value_38;
        PyObject *tmp_left_value_39;
        PyObject *tmp_right_value_38;
        PyObject *tmp_right_value_39;
        CHECK_OBJECT(var_n11);
        tmp_left_value_39 = var_n11;
        CHECK_OBJECT(var_r);
        tmp_right_value_38 = var_r;
        tmp_left_value_38 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_39, tmp_right_value_38);
        if (tmp_left_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_n21);
        tmp_right_value_39 = var_n21;
        tmp_assign_source_92 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_38, tmp_right_value_39);
        Py_DECREF(tmp_left_value_38);
        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ye;
            assert(old != NULL);
            var_ye = tmp_assign_source_92;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_3;
        nuitka_bool tmp_condition_result_20;
        int tmp_truth_name_6;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_stop_value_19;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_stop_value_21;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_start_value_7;
        PyObject *tmp_stop_value_23;
        CHECK_OBJECT(par_swap_sign);
        tmp_truth_name_6 = CHECK_IF_TRUE(par_swap_sign);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_20 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(var_Id);
        tmp_expression_value_34 = var_Id;
        CHECK_OBJECT(var_n21);
        tmp_stop_value_19 = var_n21;
        tmp_tuple_element_21 = MAKE_SLICEOBJ1(tmp_stop_value_19);
        assert(!(tmp_tuple_element_21 == NULL));
        tmp_subscript_value_14 = PyTuple_New(2);
        {
            PyObject *tmp_stop_value_20;
            PyTuple_SET_ITEM(tmp_subscript_value_14, 0, tmp_tuple_element_21);
            CHECK_OBJECT(var_n21);
            tmp_stop_value_20 = var_n21;
            tmp_tuple_element_21 = MAKE_SLICEOBJ1(tmp_stop_value_20);
            assert(!(tmp_tuple_element_21 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_14, 1, tmp_tuple_element_21);
        }
        tmp_operand_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_14);
        Py_DECREF(tmp_subscript_value_14);
        if (tmp_operand_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_3 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_6);
        Py_DECREF(tmp_operand_value_6);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        CHECK_OBJECT(var_Id);
        tmp_expression_value_35 = var_Id;
        CHECK_OBJECT(var_n21);
        tmp_stop_value_21 = var_n21;
        tmp_tuple_element_22 = MAKE_SLICEOBJ1(tmp_stop_value_21);
        assert(!(tmp_tuple_element_22 == NULL));
        tmp_subscript_value_15 = PyTuple_New(2);
        {
            PyObject *tmp_stop_value_22;
            PyTuple_SET_ITEM(tmp_subscript_value_15, 0, tmp_tuple_element_22);
            CHECK_OBJECT(var_n21);
            tmp_stop_value_22 = var_n21;
            tmp_tuple_element_22 = MAKE_SLICEOBJ1(tmp_stop_value_22);
            assert(!(tmp_tuple_element_22 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_15, 1, tmp_tuple_element_22);
        }
        tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_15);
        Py_DECREF(tmp_subscript_value_15);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_6:;
        CHECK_OBJECT(var_CS);
        tmp_ass_subscribed_3 = var_CS;
        CHECK_OBJECT(var_xs);
        tmp_start_value_7 = var_xs;
        CHECK_OBJECT(var_xe);
        tmp_stop_value_23 = var_xe;
        tmp_tuple_element_23 = MAKE_SLICEOBJ2(tmp_start_value_7, tmp_stop_value_23);
        assert(!(tmp_tuple_element_23 == NULL));
        tmp_ass_subscript_3 = PyTuple_New(2);
        {
            PyObject *tmp_start_value_8;
            PyObject *tmp_stop_value_24;
            PyTuple_SET_ITEM(tmp_ass_subscript_3, 0, tmp_tuple_element_23);
            CHECK_OBJECT(var_ys);
            tmp_start_value_8 = var_ys;
            CHECK_OBJECT(var_ye);
            tmp_stop_value_24 = var_ye;
            tmp_tuple_element_23 = MAKE_SLICEOBJ2(tmp_start_value_8, tmp_stop_value_24);
            assert(!(tmp_tuple_element_23 == NULL));
            PyTuple_SET_ITEM(tmp_ass_subscript_3, 1, tmp_tuple_element_23);
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscript_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_tuple_element_24;
        PyObject *tmp_stop_value_25;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_start_value_9;
        PyObject *tmp_stop_value_27;
        PyObject *tmp_left_value_40;
        PyObject *tmp_right_value_40;
        CHECK_OBJECT(var_Id);
        tmp_expression_value_36 = var_Id;
        CHECK_OBJECT(var_n22);
        tmp_stop_value_25 = var_n22;
        tmp_tuple_element_24 = MAKE_SLICEOBJ1(tmp_stop_value_25);
        assert(!(tmp_tuple_element_24 == NULL));
        tmp_subscript_value_16 = PyTuple_New(2);
        {
            PyObject *tmp_stop_value_26;
            PyTuple_SET_ITEM(tmp_subscript_value_16, 0, tmp_tuple_element_24);
            CHECK_OBJECT(var_n22);
            tmp_stop_value_26 = var_n22;
            tmp_tuple_element_24 = MAKE_SLICEOBJ1(tmp_stop_value_26);
            assert(!(tmp_tuple_element_24 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_16, 1, tmp_tuple_element_24);
        }
        tmp_ass_subvalue_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_16);
        Py_DECREF(tmp_subscript_value_16);
        if (tmp_ass_subvalue_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_CS);
        tmp_ass_subscribed_4 = var_CS;
        if (par_p == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_start_value_9 = par_p;
        if (par_p == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_40 = par_p;
        CHECK_OBJECT(var_n22);
        tmp_right_value_40 = var_n22;
        tmp_stop_value_27 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_40, tmp_right_value_40);
        if (tmp_stop_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_4);

            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_25 = MAKE_SLICEOBJ2(tmp_start_value_9, tmp_stop_value_27);
        Py_DECREF(tmp_stop_value_27);
        assert(!(tmp_tuple_element_25 == NULL));
        tmp_ass_subscript_4 = PyTuple_New(2);
        {
            PyObject *tmp_start_value_10;
            PyObject *tmp_stop_value_28;
            PyObject *tmp_left_value_41;
            PyObject *tmp_right_value_41;
            PyTuple_SET_ITEM(tmp_ass_subscript_4, 0, tmp_tuple_element_25);
            if (par_q == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 211;
                type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }

            tmp_start_value_10 = par_q;
            if (par_q == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 211;
                type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }

            tmp_left_value_41 = par_q;
            CHECK_OBJECT(var_n22);
            tmp_right_value_41 = var_n22;
            tmp_stop_value_28 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_41, tmp_right_value_41);
            if (tmp_stop_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_tuple_element_25 = MAKE_SLICEOBJ2(tmp_start_value_10, tmp_stop_value_28);
            Py_DECREF(tmp_stop_value_28);
            assert(!(tmp_tuple_element_25 == NULL));
            PyTuple_SET_ITEM(tmp_ass_subscript_4, 1, tmp_tuple_element_25);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscript_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscript_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_start_value_11;
        PyObject *tmp_stop_value_29;
        PyObject *tmp_left_value_42;
        PyObject *tmp_right_value_42;
        CHECK_OBJECT(var_c);
        tmp_ass_subvalue_5 = var_c;
        CHECK_OBJECT(var_CS);
        tmp_ass_subscribed_5 = var_CS;
        CHECK_OBJECT(var_n11);
        tmp_start_value_11 = var_n11;
        CHECK_OBJECT(var_n11);
        tmp_left_value_42 = var_n11;
        CHECK_OBJECT(var_r);
        tmp_right_value_42 = var_r;
        tmp_stop_value_29 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_42, tmp_right_value_42);
        if (tmp_stop_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_26 = MAKE_SLICEOBJ2(tmp_start_value_11, tmp_stop_value_29);
        Py_DECREF(tmp_stop_value_29);
        assert(!(tmp_tuple_element_26 == NULL));
        tmp_ass_subscript_5 = PyTuple_New(2);
        {
            PyObject *tmp_start_value_12;
            PyObject *tmp_stop_value_30;
            PyObject *tmp_left_value_43;
            PyObject *tmp_right_value_43;
            PyTuple_SET_ITEM(tmp_ass_subscript_5, 0, tmp_tuple_element_26);
            CHECK_OBJECT(var_n11);
            tmp_start_value_12 = var_n11;
            CHECK_OBJECT(var_n11);
            tmp_left_value_43 = var_n11;
            CHECK_OBJECT(var_r);
            tmp_right_value_43 = var_r;
            tmp_stop_value_30 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_43, tmp_right_value_43);
            if (tmp_stop_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_tuple_element_26 = MAKE_SLICEOBJ2(tmp_start_value_12, tmp_stop_value_30);
            Py_DECREF(tmp_stop_value_30);
            assert(!(tmp_tuple_element_26 == NULL));
            PyTuple_SET_ITEM(tmp_ass_subscript_5, 1, tmp_tuple_element_26);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_ass_subscript_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        Py_DECREF(tmp_ass_subscript_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_start_value_13;
        PyObject *tmp_left_value_44;
        PyObject *tmp_right_value_44;
        PyObject *tmp_stop_value_31;
        PyObject *tmp_left_value_45;
        PyObject *tmp_left_value_46;
        PyObject *tmp_right_value_45;
        PyObject *tmp_right_value_46;
        CHECK_OBJECT(var_c);
        tmp_ass_subvalue_6 = var_c;
        CHECK_OBJECT(var_CS);
        tmp_ass_subscribed_6 = var_CS;
        if (par_p == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_44 = par_p;
        CHECK_OBJECT(var_n22);
        tmp_right_value_44 = var_n22;
        tmp_start_value_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_44, tmp_right_value_44);
        if (tmp_start_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_p == NULL) {
            Py_DECREF(tmp_start_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_46 = par_p;
        CHECK_OBJECT(var_n22);
        tmp_right_value_45 = var_n22;
        tmp_left_value_45 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_46, tmp_right_value_45);
        if (tmp_left_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_start_value_13);

            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_r);
        tmp_right_value_46 = var_r;
        tmp_stop_value_31 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_45, tmp_right_value_46);
        Py_DECREF(tmp_left_value_45);
        if (tmp_stop_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_start_value_13);

            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_27 = MAKE_SLICEOBJ2(tmp_start_value_13, tmp_stop_value_31);
        Py_DECREF(tmp_start_value_13);
        Py_DECREF(tmp_stop_value_31);
        assert(!(tmp_tuple_element_27 == NULL));
        tmp_ass_subscript_6 = PyTuple_New(2);
        {
            PyObject *tmp_start_value_14;
            PyObject *tmp_left_value_47;
            PyObject *tmp_left_value_48;
            PyObject *tmp_right_value_47;
            PyObject *tmp_right_value_48;
            PyObject *tmp_stop_value_32;
            PyObject *tmp_left_value_49;
            PyObject *tmp_left_value_50;
            PyObject *tmp_left_value_51;
            PyObject *tmp_right_value_49;
            PyObject *tmp_right_value_50;
            PyObject *tmp_right_value_51;
            PyTuple_SET_ITEM(tmp_ass_subscript_6, 0, tmp_tuple_element_27);
            CHECK_OBJECT(var_r);
            tmp_left_value_48 = var_r;
            CHECK_OBJECT(var_n21);
            tmp_right_value_47 = var_n21;
            tmp_left_value_47 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_48, tmp_right_value_47);
            if (tmp_left_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            CHECK_OBJECT(var_n22);
            tmp_right_value_48 = var_n22;
            tmp_start_value_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_47, tmp_right_value_48);
            Py_DECREF(tmp_left_value_47);
            if (tmp_start_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            tmp_left_value_51 = mod_consts[60];
            CHECK_OBJECT(var_r);
            tmp_right_value_49 = var_r;
            tmp_left_value_50 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_51, tmp_right_value_49);
            if (tmp_left_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_start_value_14);

                exception_lineno = 213;
                type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            CHECK_OBJECT(var_n21);
            tmp_right_value_50 = var_n21;
            tmp_left_value_49 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_50, tmp_right_value_50);
            Py_DECREF(tmp_left_value_50);
            if (tmp_left_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_start_value_14);

                exception_lineno = 213;
                type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            CHECK_OBJECT(var_n22);
            tmp_right_value_51 = var_n22;
            tmp_stop_value_32 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_49, tmp_right_value_51);
            Py_DECREF(tmp_left_value_49);
            if (tmp_stop_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_start_value_14);

                exception_lineno = 213;
                type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            tmp_tuple_element_27 = MAKE_SLICEOBJ2(tmp_start_value_14, tmp_stop_value_32);
            Py_DECREF(tmp_start_value_14);
            Py_DECREF(tmp_stop_value_32);
            assert(!(tmp_tuple_element_27 == NULL));
            PyTuple_SET_ITEM(tmp_ass_subscript_6, 1, tmp_tuple_element_27);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_ass_subscript_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        Py_DECREF(tmp_ass_subscript_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_93;
        CHECK_OBJECT(var_n11);
        tmp_assign_source_93 = var_n11;
        {
            PyObject *old = var_xs;
            assert(old != NULL);
            var_xs = tmp_assign_source_93;
            Py_INCREF(var_xs);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_left_value_52;
        PyObject *tmp_right_value_52;
        CHECK_OBJECT(var_n11);
        tmp_left_value_52 = var_n11;
        CHECK_OBJECT(var_r);
        tmp_right_value_52 = var_r;
        tmp_assign_source_94 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_52, tmp_right_value_52);
        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_xe;
            assert(old != NULL);
            var_xe = tmp_assign_source_94;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_left_value_53;
        PyObject *tmp_left_value_54;
        PyObject *tmp_left_value_55;
        PyObject *tmp_right_value_53;
        PyObject *tmp_right_value_54;
        PyObject *tmp_right_value_55;
        CHECK_OBJECT(var_n11);
        tmp_left_value_55 = var_n11;
        CHECK_OBJECT(var_n21);
        tmp_right_value_53 = var_n21;
        tmp_left_value_54 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_55, tmp_right_value_53);
        if (tmp_left_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_n22);
        tmp_right_value_54 = var_n22;
        tmp_left_value_53 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_54, tmp_right_value_54);
        Py_DECREF(tmp_left_value_54);
        if (tmp_left_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_r);
        tmp_right_value_55 = var_r;
        tmp_assign_source_95 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_53, tmp_right_value_55);
        Py_DECREF(tmp_left_value_53);
        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ys;
            assert(old != NULL);
            var_ys = tmp_assign_source_95;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_left_value_56;
        PyObject *tmp_left_value_57;
        PyObject *tmp_left_value_58;
        PyObject *tmp_right_value_56;
        PyObject *tmp_right_value_57;
        PyObject *tmp_right_value_58;
        PyObject *tmp_left_value_59;
        PyObject *tmp_right_value_59;
        CHECK_OBJECT(var_n11);
        tmp_left_value_58 = var_n11;
        CHECK_OBJECT(var_n21);
        tmp_right_value_56 = var_n21;
        tmp_left_value_57 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_58, tmp_right_value_56);
        if (tmp_left_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_n22);
        tmp_right_value_57 = var_n22;
        tmp_left_value_56 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_57, tmp_right_value_57);
        Py_DECREF(tmp_left_value_57);
        if (tmp_left_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_59 = mod_consts[60];
        CHECK_OBJECT(var_r);
        tmp_right_value_59 = var_r;
        tmp_right_value_58 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_59, tmp_right_value_59);
        if (tmp_right_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_56);

            exception_lineno = 218;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_96 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_56, tmp_right_value_58);
        Py_DECREF(tmp_left_value_56);
        Py_DECREF(tmp_right_value_58);
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ye;
            assert(old != NULL);
            var_ye = tmp_assign_source_96;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_7;
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_7;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_start_value_15;
        PyObject *tmp_stop_value_33;
        CHECK_OBJECT(par_swap_sign);
        tmp_truth_name_7 = CHECK_IF_TRUE(par_swap_sign);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_21 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(var_s);
        tmp_ass_subvalue_7 = var_s;
        Py_INCREF(tmp_ass_subvalue_7);
        goto condexpr_end_7;
        condexpr_false_7:;
        CHECK_OBJECT(var_s);
        tmp_operand_value_7 = var_s;
        tmp_ass_subvalue_7 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_7);
        if (tmp_ass_subvalue_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_7:;
        CHECK_OBJECT(var_CS);
        tmp_ass_subscribed_7 = var_CS;
        CHECK_OBJECT(var_xs);
        tmp_start_value_15 = var_xs;
        CHECK_OBJECT(var_xe);
        tmp_stop_value_33 = var_xe;
        tmp_tuple_element_28 = MAKE_SLICEOBJ2(tmp_start_value_15, tmp_stop_value_33);
        assert(!(tmp_tuple_element_28 == NULL));
        tmp_ass_subscript_7 = PyTuple_New(2);
        {
            PyObject *tmp_start_value_16;
            PyObject *tmp_stop_value_34;
            PyTuple_SET_ITEM(tmp_ass_subscript_7, 0, tmp_tuple_element_28);
            CHECK_OBJECT(var_ys);
            tmp_start_value_16 = var_ys;
            CHECK_OBJECT(var_ye);
            tmp_stop_value_34 = var_ye;
            tmp_tuple_element_28 = MAKE_SLICEOBJ2(tmp_start_value_16, tmp_stop_value_34);
            assert(!(tmp_tuple_element_28 == NULL));
            PyTuple_SET_ITEM(tmp_ass_subscript_7, 1, tmp_tuple_element_28);
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        Py_DECREF(tmp_ass_subscript_7);
        Py_DECREF(tmp_ass_subvalue_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_8;
        nuitka_bool tmp_condition_result_22;
        int tmp_truth_name_8;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_ass_subscript_8;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_start_value_17;
        PyObject *tmp_left_value_60;
        PyObject *tmp_right_value_60;
        PyObject *tmp_stop_value_35;
        PyObject *tmp_left_value_61;
        PyObject *tmp_left_value_62;
        PyObject *tmp_right_value_61;
        PyObject *tmp_right_value_62;
        CHECK_OBJECT(par_swap_sign);
        tmp_truth_name_8 = CHECK_IF_TRUE(par_swap_sign);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_22 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(var_s);
        tmp_operand_value_8 = var_s;
        tmp_ass_subvalue_8 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_8);
        if (tmp_ass_subvalue_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        CHECK_OBJECT(var_s);
        tmp_ass_subvalue_8 = var_s;
        Py_INCREF(tmp_ass_subvalue_8);
        condexpr_end_8:;
        CHECK_OBJECT(var_CS);
        tmp_ass_subscribed_8 = var_CS;
        if (par_p == NULL) {
            Py_DECREF(tmp_ass_subvalue_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 221;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_60 = par_p;
        CHECK_OBJECT(var_n22);
        tmp_right_value_60 = var_n22;
        tmp_start_value_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_60, tmp_right_value_60);
        if (tmp_start_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_8);

            exception_lineno = 221;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_p == NULL) {
            Py_DECREF(tmp_ass_subvalue_8);
            Py_DECREF(tmp_start_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 221;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_62 = par_p;
        CHECK_OBJECT(var_n22);
        tmp_right_value_61 = var_n22;
        tmp_left_value_61 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_62, tmp_right_value_61);
        if (tmp_left_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_8);
            Py_DECREF(tmp_start_value_17);

            exception_lineno = 221;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_r);
        tmp_right_value_62 = var_r;
        tmp_stop_value_35 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_61, tmp_right_value_62);
        Py_DECREF(tmp_left_value_61);
        if (tmp_stop_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_8);
            Py_DECREF(tmp_start_value_17);

            exception_lineno = 221;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_29 = MAKE_SLICEOBJ2(tmp_start_value_17, tmp_stop_value_35);
        Py_DECREF(tmp_start_value_17);
        Py_DECREF(tmp_stop_value_35);
        assert(!(tmp_tuple_element_29 == NULL));
        tmp_ass_subscript_8 = PyTuple_New(2);
        {
            PyObject *tmp_start_value_18;
            PyObject *tmp_stop_value_36;
            PyObject *tmp_left_value_63;
            PyObject *tmp_right_value_63;
            PyTuple_SET_ITEM(tmp_ass_subscript_8, 0, tmp_tuple_element_29);
            CHECK_OBJECT(var_n11);
            tmp_start_value_18 = var_n11;
            CHECK_OBJECT(var_n11);
            tmp_left_value_63 = var_n11;
            CHECK_OBJECT(var_r);
            tmp_right_value_63 = var_r;
            tmp_stop_value_36 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_63, tmp_right_value_63);
            if (tmp_stop_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            tmp_tuple_element_29 = MAKE_SLICEOBJ2(tmp_start_value_18, tmp_stop_value_36);
            Py_DECREF(tmp_stop_value_36);
            assert(!(tmp_tuple_element_29 == NULL));
            PyTuple_SET_ITEM(tmp_ass_subscript_8, 1, tmp_tuple_element_29);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_ass_subvalue_8);
        Py_DECREF(tmp_ass_subscript_8);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
        Py_DECREF(tmp_ass_subscript_8);
        Py_DECREF(tmp_ass_subvalue_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooooooboooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_14264fd28fe5905f5fbd2a6ea1c56e64);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_14264fd28fe5905f5fbd2a6ea1c56e64);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_14264fd28fe5905f5fbd2a6ea1c56e64);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_14264fd28fe5905f5fbd2a6ea1c56e64, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_14264fd28fe5905f5fbd2a6ea1c56e64->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_14264fd28fe5905f5fbd2a6ea1c56e64, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_14264fd28fe5905f5fbd2a6ea1c56e64,
        type_description_1,
        par_X,
        par_p,
        par_q,
        par_separate,
        par_swap_sign,
        par_compute_u,
        par_compute_vh,
        var_m,
        var_x11,
        var_x12,
        var_x21,
        var_x22,
        var_name,
        var_block,
        var_mmp,
        var_mmq,
        (int)var_cplx,
        var_driver,
        var_csd,
        var_csd_lwork,
        var_lwork,
        var_lwork_args,
        var__,
        var_theta,
        var_u1,
        var_u2,
        var_v1h,
        var_v2h,
        var_info,
        var_method_name,
        var_U,
        var_VDH,
        var_c,
        var_s,
        var_r,
        var_n11,
        var_n12,
        var_n21,
        var_n22,
        var_Id,
        var_CS,
        var_xs,
        var_xe,
        var_ys,
        var_ye
    );


    // Release cached frame if used for exception.
    if (frame_14264fd28fe5905f5fbd2a6ea1c56e64 == cache_frame_14264fd28fe5905f5fbd2a6ea1c56e64) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_14264fd28fe5905f5fbd2a6ea1c56e64);
        cache_frame_14264fd28fe5905f5fbd2a6ea1c56e64 = NULL;
    }

    assertFrameObject(frame_14264fd28fe5905f5fbd2a6ea1c56e64);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;
    {
        PyObject *tmp_tuple_element_30;
        CHECK_OBJECT(var_U);
        tmp_tuple_element_30 = var_U;
        tmp_return_value = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_30);
        CHECK_OBJECT(var_CS);
        tmp_tuple_element_30 = var_CS;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_30);
        CHECK_OBJECT(var_VDH);
        tmp_tuple_element_30 = var_VDH;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_30);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_X);
    par_X = NULL;
    Py_XDECREF(par_p);
    par_p = NULL;
    Py_XDECREF(par_q);
    par_q = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_x11);
    var_x11 = NULL;
    Py_XDECREF(var_x12);
    var_x12 = NULL;
    Py_XDECREF(var_x21);
    var_x21 = NULL;
    Py_XDECREF(var_x22);
    var_x22 = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_block);
    var_block = NULL;
    Py_XDECREF(var_mmp);
    var_mmp = NULL;
    Py_XDECREF(var_mmq);
    var_mmq = NULL;
    assert(var_cplx != NUITKA_BOOL_UNASSIGNED);
    var_cplx = NUITKA_BOOL_UNASSIGNED;
    CHECK_OBJECT(var_driver);
    Py_DECREF(var_driver);
    var_driver = NULL;
    CHECK_OBJECT(var_csd);
    Py_DECREF(var_csd);
    var_csd = NULL;
    CHECK_OBJECT(var_csd_lwork);
    Py_DECREF(var_csd_lwork);
    var_csd_lwork = NULL;
    CHECK_OBJECT(var_lwork);
    Py_DECREF(var_lwork);
    var_lwork = NULL;
    CHECK_OBJECT(var_lwork_args);
    Py_DECREF(var_lwork_args);
    var_lwork_args = NULL;
    CHECK_OBJECT(var__);
    Py_DECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_theta);
    var_theta = NULL;
    Py_XDECREF(var_u1);
    var_u1 = NULL;
    Py_XDECREF(var_u2);
    var_u2 = NULL;
    Py_XDECREF(var_v1h);
    var_v1h = NULL;
    Py_XDECREF(var_v2h);
    var_v2h = NULL;
    CHECK_OBJECT(var_info);
    Py_DECREF(var_info);
    var_info = NULL;
    CHECK_OBJECT(var_method_name);
    Py_DECREF(var_method_name);
    var_method_name = NULL;
    Py_XDECREF(var_U);
    var_U = NULL;
    Py_XDECREF(var_VDH);
    var_VDH = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_n11);
    var_n11 = NULL;
    Py_XDECREF(var_n12);
    var_n12 = NULL;
    Py_XDECREF(var_n21);
    var_n21 = NULL;
    Py_XDECREF(var_n22);
    var_n22 = NULL;
    Py_XDECREF(var_Id);
    var_Id = NULL;
    Py_XDECREF(var_CS);
    var_CS = NULL;
    Py_XDECREF(var_xs);
    var_xs = NULL;
    Py_XDECREF(var_xe);
    var_xe = NULL;
    Py_XDECREF(var_ys);
    var_ys = NULL;
    Py_XDECREF(var_ye);
    var_ye = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_X);
    par_X = NULL;
    Py_XDECREF(par_p);
    par_p = NULL;
    Py_XDECREF(par_q);
    par_q = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_x11);
    var_x11 = NULL;
    Py_XDECREF(var_x12);
    var_x12 = NULL;
    Py_XDECREF(var_x21);
    var_x21 = NULL;
    Py_XDECREF(var_x22);
    var_x22 = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_block);
    var_block = NULL;
    Py_XDECREF(var_mmp);
    var_mmp = NULL;
    Py_XDECREF(var_mmq);
    var_mmq = NULL;
    var_cplx = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_driver);
    var_driver = NULL;
    Py_XDECREF(var_csd);
    var_csd = NULL;
    Py_XDECREF(var_csd_lwork);
    var_csd_lwork = NULL;
    Py_XDECREF(var_lwork);
    var_lwork = NULL;
    Py_XDECREF(var_lwork_args);
    var_lwork_args = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_theta);
    var_theta = NULL;
    Py_XDECREF(var_u1);
    var_u1 = NULL;
    Py_XDECREF(var_u2);
    var_u2 = NULL;
    Py_XDECREF(var_v1h);
    var_v1h = NULL;
    Py_XDECREF(var_v2h);
    var_v2h = NULL;
    Py_XDECREF(var_info);
    var_info = NULL;
    Py_XDECREF(var_method_name);
    var_method_name = NULL;
    Py_XDECREF(var_U);
    var_U = NULL;
    Py_XDECREF(var_VDH);
    var_VDH = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
    Py_XDECREF(var_n11);
    var_n11 = NULL;
    Py_XDECREF(var_n12);
    var_n12 = NULL;
    Py_XDECREF(var_n21);
    var_n21 = NULL;
    Py_XDECREF(var_n22);
    var_n22 = NULL;
    Py_XDECREF(var_Id);
    var_Id = NULL;
    Py_XDECREF(var_CS);
    var_CS = NULL;
    Py_XDECREF(var_xs);
    var_xs = NULL;
    Py_XDECREF(var_xe);
    var_xe = NULL;
    Py_XDECREF(var_ys);
    var_ys = NULL;
    Py_XDECREF(var_ye);
    var_ye = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_separate);
    Py_DECREF(par_separate);
    CHECK_OBJECT(par_swap_sign);
    Py_DECREF(par_swap_sign);
    CHECK_OBJECT(par_compute_u);
    Py_DECREF(par_compute_u);
    CHECK_OBJECT(par_compute_vh);
    Py_DECREF(par_compute_vh);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_separate);
    Py_DECREF(par_separate);
    CHECK_OBJECT(par_swap_sign);
    Py_DECREF(par_swap_sign);
    CHECK_OBJECT(par_compute_u);
    Py_DECREF(par_compute_u);
    CHECK_OBJECT(par_compute_vh);
    Py_DECREF(par_compute_vh);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_scipy$linalg$_decomp_cossin$$$function__1_cossin(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$linalg$_decomp_cossin$$$function__1_cossin,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_14264fd28fe5905f5fbd2a6ea1c56e64,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$linalg$_decomp_cossin,
        mod_consts[61],
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

function_impl_code functable_scipy$linalg$_decomp_cossin[] = {
    impl_scipy$linalg$_decomp_cossin$$$function__1_cossin,
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

    function_impl_code *current = functable_scipy$linalg$_decomp_cossin;
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

    if (offset > sizeof(functable_scipy$linalg$_decomp_cossin) || offset < 0) {
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
        functable_scipy$linalg$_decomp_cossin[offset],
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
        module_scipy$linalg$_decomp_cossin,
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
PyObject *modulecode_scipy$linalg$_decomp_cossin(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scipy.linalg._decomp_cossin");

    // Store the module for future use.
    module_scipy$linalg$_decomp_cossin = module;

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
        PRINT_STRING("scipy.linalg._decomp_cossin: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.linalg._decomp_cossin: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.linalg._decomp_cossin: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initscipy$linalg$_decomp_cossin\n");

    moduledict_scipy$linalg$_decomp_cossin = MODULE_DICT(module_scipy$linalg$_decomp_cossin);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$linalg$_decomp_cossin,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$linalg$_decomp_cossin,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[86]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$linalg$_decomp_cossin,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$linalg$_decomp_cossin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$linalg$_decomp_cossin,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$linalg$_decomp_cossin);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_scipy$linalg$_decomp_cossin);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_f54d5347e9db4fd0f093d501e3d1c43f;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_f54d5347e9db4fd0f093d501e3d1c43f = MAKE_MODULE_FRAME(codeobj_f54d5347e9db4fd0f093d501e3d1c43f, module_scipy$linalg$_decomp_cossin);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_f54d5347e9db4fd0f093d501e3d1c43f);
    assert(Py_REFCNT(frame_f54d5347e9db4fd0f093d501e3d1c43f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[65], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[66], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[68];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_scipy$linalg$_decomp_cossin;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[69];
        tmp_level_value_1 = mod_consts[7];
        frame_f54d5347e9db4fd0f093d501e3d1c43f->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$linalg$_decomp_cossin,
                mod_consts[11],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[11]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[70];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_scipy$linalg$_decomp_cossin;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[7];
        frame_f54d5347e9db4fd0f093d501e3d1c43f->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[71];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_scipy$linalg$_decomp_cossin;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[72];
        tmp_level_value_3 = mod_consts[7];
        frame_f54d5347e9db4fd0f093d501e3d1c43f->m_frame.f_lineno = 5;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_scipy$linalg$_decomp_cossin,
                mod_consts[1],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[1]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[73];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_scipy$linalg$_decomp_cossin;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[74];
        tmp_level_value_4 = mod_consts[7];
        frame_f54d5347e9db4fd0f093d501e3d1c43f->m_frame.f_lineno = 6;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_scipy$linalg$_decomp_cossin,
                mod_consts[50],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[50]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_scipy$linalg$_decomp_cossin,
                mod_consts[48],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[48]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_9);
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

    CHECK_OBJECT(tmp_import_from_1__module);
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
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[75];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_scipy$linalg$_decomp_cossin;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[76];
        tmp_level_value_5 = mod_consts[0];
        frame_f54d5347e9db4fd0f093d501e3d1c43f->m_frame.f_lineno = 7;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_scipy$linalg$_decomp_cossin,
                mod_consts[31],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[31]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_scipy$linalg$_decomp_cossin,
                mod_consts[29],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[29]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_12);
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

    CHECK_OBJECT(tmp_import_from_2__module);
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f54d5347e9db4fd0f093d501e3d1c43f);
#endif
    popFrameStack();

    assertFrameObject(frame_f54d5347e9db4fd0f093d501e3d1c43f);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f54d5347e9db4fd0f093d501e3d1c43f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f54d5347e9db4fd0f093d501e3d1c43f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f54d5347e9db4fd0f093d501e3d1c43f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f54d5347e9db4fd0f093d501e3d1c43f, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = LIST_COPY(mod_consts[77]);
        UPDATE_STRING_DICT1(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[79];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_14 = MAKE_FUNCTION_scipy$linalg$_decomp_cossin$$$function__1_cossin(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_14);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scipy.linalg._decomp_cossin", false);

    Py_INCREF(module_scipy$linalg$_decomp_cossin);
    return module_scipy$linalg$_decomp_cossin;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$linalg$_decomp_cossin, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("scipy$linalg$_decomp_cossin", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
