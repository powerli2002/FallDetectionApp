/* Generated code for Python module 'scipy.sparse.linalg._isolve.lsqr'
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

/* The "module_scipy$sparse$linalg$_isolve$lsqr" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$sparse$linalg$_isolve$lsqr;
PyDictObject *moduledict_scipy$sparse$linalg$_isolve$lsqr;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[117];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[117];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("scipy.sparse.linalg._isolve.lsqr"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 117; i++) {
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
void checkModuleConstants_scipy$sparse$linalg$_isolve$lsqr(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 117; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_429bb7d11a0513b6b48f10598efc0734;
static PyCodeObject *codeobj_ea3cf57ea979449e36b2d1fa780a8bd8;
static PyCodeObject *codeobj_57c6a9baed55e006220928cbb685bdf6;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[113]); CHECK_OBJECT(module_filename_obj);
    codeobj_429bb7d11a0513b6b48f10598efc0734 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[114], NULL, NULL, 0, 0, 0);
    codeobj_ea3cf57ea979449e36b2d1fa780a8bd8 = MAKE_CODEOBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[115], NULL, 2, 0, 0);
    codeobj_57c6a9baed55e006220928cbb685bdf6 = MAKE_CODEOBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], mod_consts[116], NULL, 10, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_isolve$lsqr$$$function__1__sym_ortho();


static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_isolve$lsqr$$$function__2_lsqr(PyObject *defaults);


// The module function definitions.
static PyObject *impl_scipy$sparse$linalg$_isolve$lsqr$$$function__1__sym_ortho(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_b = python_pars[1];
    PyObject *var_tau = NULL;
    PyObject *var_s = NULL;
    PyObject *var_c = NULL;
    PyObject *var_r = NULL;
    struct Nuitka_FrameObject *frame_ea3cf57ea979449e36b2d1fa780a8bd8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ea3cf57ea979449e36b2d1fa780a8bd8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ea3cf57ea979449e36b2d1fa780a8bd8)) {
        Py_XDECREF(cache_frame_ea3cf57ea979449e36b2d1fa780a8bd8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ea3cf57ea979449e36b2d1fa780a8bd8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ea3cf57ea979449e36b2d1fa780a8bd8 = MAKE_FUNCTION_FRAME(codeobj_ea3cf57ea979449e36b2d1fa780a8bd8, module_scipy$sparse$linalg$_isolve$lsqr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ea3cf57ea979449e36b2d1fa780a8bd8->m_type_description == NULL);
    frame_ea3cf57ea979449e36b2d1fa780a8bd8 = cache_frame_ea3cf57ea979449e36b2d1fa780a8bd8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ea3cf57ea979449e36b2d1fa780a8bd8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ea3cf57ea979449e36b2d1fa780a8bd8) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_b);
        tmp_cmp_expr_left_1 = par_b;
        tmp_cmp_expr_right_1 = mod_consts[0];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooo";
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
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_value_1 = par_a;
        frame_ea3cf57ea979449e36b2d1fa780a8bd8->m_frame.f_lineno = 80;
        tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[2], tmp_args_element_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(3);
        {
            PyObject *tmp_abs_arg_1;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[0];
            PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_a);
            tmp_abs_arg_1 = par_a;
            tmp_tuple_element_1 = BUILTIN_ABS(tmp_abs_arg_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_1);
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
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_a);
        tmp_cmp_expr_left_2 = par_a;
        tmp_cmp_expr_right_2 = mod_consts[0];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooo";
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
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[0];
        tmp_return_value = PyTuple_New(3);
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_abs_arg_2;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_1 = "oooooo";
                goto tuple_build_exception_2;
            }
            CHECK_OBJECT(par_b);
            tmp_args_element_value_2 = par_b;
            frame_ea3cf57ea979449e36b2d1fa780a8bd8->m_frame.f_lineno = 82;
            tmp_tuple_element_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[2], tmp_args_element_value_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_1 = "oooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_2);
            CHECK_OBJECT(par_b);
            tmp_abs_arg_2 = par_b;
            tmp_tuple_element_2 = BUILTIN_ABS(tmp_abs_arg_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_1 = "oooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_abs_arg_3;
        PyObject *tmp_abs_arg_4;
        CHECK_OBJECT(par_b);
        tmp_abs_arg_3 = par_b;
        tmp_cmp_expr_left_3 = BUILTIN_ABS(tmp_abs_arg_3);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_abs_arg_4 = par_a;
        tmp_cmp_expr_right_3 = BUILTIN_ABS(tmp_abs_arg_4);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 83;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooo";
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
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        CHECK_OBJECT(par_a);
        tmp_left_value_1 = par_a;
        CHECK_OBJECT(par_b);
        tmp_right_value_1 = par_b;
        tmp_assign_source_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tau == NULL);
        var_tau = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_value_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_right_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_3;
        PyObject *tmp_left_value_4;
        PyObject *tmp_right_value_4;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_b);
        tmp_args_element_value_3 = par_b;
        frame_ea3cf57ea979449e36b2d1fa780a8bd8->m_frame.f_lineno = 85;
        tmp_left_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[2], tmp_args_element_value_3);
        if (tmp_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_2);

            exception_lineno = 85;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_3 = mod_consts[4];
        CHECK_OBJECT(var_tau);
        tmp_left_value_4 = var_tau;
        CHECK_OBJECT(var_tau);
        tmp_right_value_4 = var_tau;
        tmp_right_value_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_4, tmp_right_value_4);
        if (tmp_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_2);

            exception_lineno = 85;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_left_value_3, tmp_right_value_3);
        Py_DECREF(tmp_right_value_3);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_2);

            exception_lineno = 85;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_ea3cf57ea979449e36b2d1fa780a8bd8->m_frame.f_lineno = 85;
        tmp_right_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_2);

            exception_lineno = 85;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_2, tmp_right_value_2);
        Py_DECREF(tmp_left_value_2);
        Py_DECREF(tmp_right_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_s == NULL);
        var_s = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_value_5;
        PyObject *tmp_right_value_5;
        CHECK_OBJECT(var_s);
        tmp_left_value_5 = var_s;
        CHECK_OBJECT(var_tau);
        tmp_right_value_5 = var_tau;
        tmp_assign_source_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_5, tmp_right_value_5);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_c == NULL);
        var_c = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_value_6;
        PyObject *tmp_right_value_6;
        CHECK_OBJECT(par_b);
        tmp_left_value_6 = par_b;
        CHECK_OBJECT(var_s);
        tmp_right_value_6 = var_s;
        tmp_assign_source_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_6, tmp_right_value_6);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_r == NULL);
        var_r = tmp_assign_source_4;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_value_7;
        PyObject *tmp_right_value_7;
        CHECK_OBJECT(par_b);
        tmp_left_value_7 = par_b;
        CHECK_OBJECT(par_a);
        tmp_right_value_7 = par_a;
        tmp_assign_source_5 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_7, tmp_right_value_7);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tau == NULL);
        var_tau = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_value_8;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_right_value_8;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_left_value_9;
        PyObject *tmp_right_value_9;
        PyObject *tmp_left_value_10;
        PyObject *tmp_right_value_10;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_a);
        tmp_args_element_value_5 = par_a;
        frame_ea3cf57ea979449e36b2d1fa780a8bd8->m_frame.f_lineno = 90;
        tmp_left_value_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[2], tmp_args_element_value_5);
        if (tmp_left_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_8);

            exception_lineno = 90;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_9 = mod_consts[4];
        CHECK_OBJECT(var_tau);
        tmp_left_value_10 = var_tau;
        CHECK_OBJECT(var_tau);
        tmp_right_value_10 = var_tau;
        tmp_right_value_9 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_10, tmp_right_value_10);
        if (tmp_right_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_8);

            exception_lineno = 90;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_left_value_9, tmp_right_value_9);
        Py_DECREF(tmp_right_value_9);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_8);

            exception_lineno = 90;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_ea3cf57ea979449e36b2d1fa780a8bd8->m_frame.f_lineno = 90;
        tmp_right_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_right_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_8);

            exception_lineno = 90;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_8, tmp_right_value_8);
        Py_DECREF(tmp_left_value_8);
        Py_DECREF(tmp_right_value_8);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_c == NULL);
        var_c = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_value_11;
        PyObject *tmp_right_value_11;
        CHECK_OBJECT(var_c);
        tmp_left_value_11 = var_c;
        CHECK_OBJECT(var_tau);
        tmp_right_value_11 = var_tau;
        tmp_assign_source_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_11, tmp_right_value_11);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_s == NULL);
        var_s = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_value_12;
        PyObject *tmp_right_value_12;
        CHECK_OBJECT(par_a);
        tmp_left_value_12 = par_a;
        CHECK_OBJECT(var_c);
        tmp_right_value_12 = var_c;
        tmp_assign_source_8 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_12, tmp_right_value_12);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_r == NULL);
        var_r = tmp_assign_source_8;
    }
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_tuple_element_3;
        if (var_c == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = var_c;
        tmp_return_value = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_3);
        if (var_s == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto tuple_build_exception_3;
        }

        tmp_tuple_element_3 = var_s;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
        if (var_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto tuple_build_exception_3;
        }

        tmp_tuple_element_3 = var_r;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_3);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ea3cf57ea979449e36b2d1fa780a8bd8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ea3cf57ea979449e36b2d1fa780a8bd8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ea3cf57ea979449e36b2d1fa780a8bd8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ea3cf57ea979449e36b2d1fa780a8bd8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ea3cf57ea979449e36b2d1fa780a8bd8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ea3cf57ea979449e36b2d1fa780a8bd8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ea3cf57ea979449e36b2d1fa780a8bd8,
        type_description_1,
        par_a,
        par_b,
        var_tau,
        var_s,
        var_c,
        var_r
    );


    // Release cached frame if used for exception.
    if (frame_ea3cf57ea979449e36b2d1fa780a8bd8 == cache_frame_ea3cf57ea979449e36b2d1fa780a8bd8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ea3cf57ea979449e36b2d1fa780a8bd8);
        cache_frame_ea3cf57ea979449e36b2d1fa780a8bd8 = NULL;
    }

    assertFrameObject(frame_ea3cf57ea979449e36b2d1fa780a8bd8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_tau);
    var_tau = NULL;
    Py_XDECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
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

    Py_XDECREF(var_tau);
    var_tau = NULL;
    Py_XDECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
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
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_a);
    Py_DECREF(par_a);
    CHECK_OBJECT(par_b);
    Py_DECREF(par_b);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$sparse$linalg$_isolve$lsqr$$$function__2_lsqr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_A = python_pars[0];
    PyObject *par_b = python_pars[1];
    PyObject *par_damp = python_pars[2];
    PyObject *par_atol = python_pars[3];
    PyObject *par_btol = python_pars[4];
    PyObject *par_conlim = python_pars[5];
    PyObject *par_iter_lim = python_pars[6];
    PyObject *par_show = python_pars[7];
    PyObject *par_calc_var = python_pars[8];
    PyObject *par_x0 = python_pars[9];
    PyObject *var_m = NULL;
    PyObject *var_n = NULL;
    PyObject *var_var = NULL;
    PyObject *var_str1 = NULL;
    PyObject *var_str2 = NULL;
    PyObject *var_str3 = NULL;
    PyObject *var_str4 = NULL;
    PyObject *var_itn = NULL;
    PyObject *var_istop = NULL;
    PyObject *var_ctol = NULL;
    PyObject *var_anorm = NULL;
    PyObject *var_acond = NULL;
    PyObject *var_dampsq = NULL;
    PyObject *var_ddnorm = NULL;
    PyObject *var_res2 = NULL;
    PyObject *var_xnorm = NULL;
    PyObject *var_xxnorm = NULL;
    PyObject *var_z = NULL;
    PyObject *var_cs2 = NULL;
    PyObject *var_sn2 = NULL;
    PyObject *var_u = NULL;
    PyObject *var_bnorm = NULL;
    PyObject *var_x = NULL;
    PyObject *var_beta = NULL;
    PyObject *var_v = NULL;
    PyObject *var_alfa = NULL;
    PyObject *var_w = NULL;
    PyObject *var_rhobar = NULL;
    PyObject *var_phibar = NULL;
    PyObject *var_rnorm = NULL;
    PyObject *var_r1norm = NULL;
    PyObject *var_r2norm = NULL;
    PyObject *var_arnorm = NULL;
    PyObject *var_test1 = NULL;
    PyObject *var_test2 = NULL;
    PyObject *var_rhobar1 = NULL;
    PyObject *var_cs1 = NULL;
    PyObject *var_sn1 = NULL;
    PyObject *var_psi = NULL;
    PyObject *var_cs = NULL;
    PyObject *var_sn = NULL;
    PyObject *var_rho = NULL;
    PyObject *var_theta = NULL;
    PyObject *var_phi = NULL;
    PyObject *var_tau = NULL;
    PyObject *var_t1 = NULL;
    PyObject *var_t2 = NULL;
    PyObject *var_dk = NULL;
    PyObject *var_delta = NULL;
    PyObject *var_gambar = NULL;
    PyObject *var_rhs = NULL;
    PyObject *var_zbar = NULL;
    PyObject *var_gamma = NULL;
    PyObject *var_res1 = NULL;
    PyObject *var_r1sq = NULL;
    PyObject *var_test3 = NULL;
    PyObject *var_rtol = NULL;
    PyObject *var_prnt = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_57c6a9baed55e006220928cbb685bdf6;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_57c6a9baed55e006220928cbb685bdf6 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_57c6a9baed55e006220928cbb685bdf6)) {
        Py_XDECREF(cache_frame_57c6a9baed55e006220928cbb685bdf6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_57c6a9baed55e006220928cbb685bdf6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_57c6a9baed55e006220928cbb685bdf6 = MAKE_FUNCTION_FRAME(codeobj_57c6a9baed55e006220928cbb685bdf6, module_scipy$sparse$linalg$_isolve$lsqr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_57c6a9baed55e006220928cbb685bdf6->m_type_description == NULL);
    frame_57c6a9baed55e006220928cbb685bdf6 = cache_frame_57c6a9baed55e006220928cbb685bdf6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_57c6a9baed55e006220928cbb685bdf6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_57c6a9baed55e006220928cbb685bdf6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_A);
        tmp_args_element_value_1 = par_A;
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 321;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_A;
            assert(old != NULL);
            par_A = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_b);
        tmp_args_element_value_2 = par_b;
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 322;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[10], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_b;
            assert(old != NULL);
            par_b = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_b);
        tmp_expression_value_1 = par_b;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[4];
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_b);
        tmp_called_instance_2 = par_b;
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 324;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[12]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_b;
            assert(old != NULL);
            par_b = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_A);
        tmp_expression_value_2 = par_A;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[13]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            exception_lineno = 326;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            exception_lineno = 326;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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

                    type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
                    exception_lineno = 326;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[14];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            exception_lineno = 326;
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
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert(var_m == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_m = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert(var_n == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_n = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_iter_lim);
        tmp_cmp_expr_left_2 = par_iter_lim;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        tmp_left_value_1 = mod_consts[15];
        CHECK_OBJECT(var_n);
        tmp_right_value_1 = var_n;
        tmp_assign_source_9 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_iter_lim;
            assert(old != NULL);
            par_iter_lim = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[16]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_n == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 329;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = var_n;
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 329;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_var == NULL);
        var_var = tmp_assign_source_10;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_show);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_show);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_called_value_3 != NULL);
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 341;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[19]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_2;
        tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_called_value_4 != NULL);
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 342;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[20]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[21];
        tmp_string_concat_values_1 = PyTuple_New(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_m);
            tmp_format_value_1 = var_m;
            tmp_format_spec_1 = mod_consts[22];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[23];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            if (var_n == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 343;
                type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_format_value_2 = var_n;
            tmp_format_spec_2 = mod_consts[22];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[24];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_11 = PyUnicode_Join(mod_consts[22], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_str1 == NULL);
        var_str1 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        PyObject *tmp_tuple_element_2;
        tmp_left_value_2 = mod_consts[25];
        CHECK_OBJECT(par_damp);
        tmp_tuple_element_2 = par_damp;
        tmp_right_value_2 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_right_value_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_calc_var);
        tmp_tuple_element_2 = par_calc_var;
        PyTuple_SET_ITEM0(tmp_right_value_2, 1, tmp_tuple_element_2);
        tmp_assign_source_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_2, tmp_right_value_2);
        Py_DECREF(tmp_right_value_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_str2 == NULL);
        var_str2 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_3;
        PyObject *tmp_tuple_element_3;
        tmp_left_value_3 = mod_consts[26];
        CHECK_OBJECT(par_atol);
        tmp_tuple_element_3 = par_atol;
        tmp_right_value_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_right_value_3, 0, tmp_tuple_element_3);
        CHECK_OBJECT(par_conlim);
        tmp_tuple_element_3 = par_conlim;
        PyTuple_SET_ITEM0(tmp_right_value_3, 1, tmp_tuple_element_3);
        tmp_assign_source_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_3, tmp_right_value_3);
        Py_DECREF(tmp_right_value_3);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_str3 == NULL);
        var_str3 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_value_4;
        PyObject *tmp_right_value_4;
        PyObject *tmp_tuple_element_4;
        tmp_left_value_4 = mod_consts[27];
        CHECK_OBJECT(par_btol);
        tmp_tuple_element_4 = par_btol;
        tmp_right_value_4 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_right_value_4, 0, tmp_tuple_element_4);
        CHECK_OBJECT(par_iter_lim);
        tmp_tuple_element_4 = par_iter_lim;
        PyTuple_SET_ITEM0(tmp_right_value_4, 1, tmp_tuple_element_4);
        tmp_assign_source_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_4, tmp_right_value_4);
        Py_DECREF(tmp_right_value_4);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_str4 == NULL);
        var_str4 = tmp_assign_source_14;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_called_value_5 != NULL);
        CHECK_OBJECT(var_str1);
        tmp_args_element_value_4 = var_str1;
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 347;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_called_value_6 != NULL);
        CHECK_OBJECT(var_str2);
        tmp_args_element_value_5 = var_str2;
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 348;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_5);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_7 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_called_value_7 != NULL);
        CHECK_OBJECT(var_str3);
        tmp_args_element_value_6 = var_str3;
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 349;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_6);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_8 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_called_value_8 != NULL);
        CHECK_OBJECT(var_str4);
        tmp_args_element_value_7 = var_str4;
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 350;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_7);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[0];
        assert(var_itn == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_itn = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[0];
        assert(var_istop == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_istop = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[0];
        assert(var_ctol == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_ctol = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_conlim);
        tmp_cmp_expr_left_3 = par_conlim;
        tmp_cmp_expr_right_3 = mod_consts[0];
        tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
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
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_left_value_5;
        PyObject *tmp_right_value_5;
        tmp_left_value_5 = mod_consts[4];
        CHECK_OBJECT(par_conlim);
        tmp_right_value_5 = par_conlim;
        tmp_assign_source_18 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_left_value_5, tmp_right_value_5);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ctol;
            assert(old != NULL);
            var_ctol = tmp_assign_source_18;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[0];
        assert(var_anorm == NULL);
        Py_INCREF(tmp_assign_source_19);
        var_anorm = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[0];
        assert(var_acond == NULL);
        Py_INCREF(tmp_assign_source_20);
        var_acond = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_left_value_6;
        PyObject *tmp_right_value_6;
        CHECK_OBJECT(par_damp);
        tmp_left_value_6 = par_damp;
        tmp_right_value_6 = mod_consts[15];
        tmp_assign_source_21 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_left_value_6, tmp_right_value_6);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dampsq == NULL);
        var_dampsq = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[0];
        assert(var_ddnorm == NULL);
        Py_INCREF(tmp_assign_source_22);
        var_ddnorm = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[0];
        assert(var_res2 == NULL);
        Py_INCREF(tmp_assign_source_23);
        var_res2 = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[0];
        assert(var_xnorm == NULL);
        Py_INCREF(tmp_assign_source_24);
        var_xnorm = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[0];
        assert(var_xxnorm == NULL);
        Py_INCREF(tmp_assign_source_25);
        var_xxnorm = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[0];
        assert(var_z == NULL);
        Py_INCREF(tmp_assign_source_26);
        var_z = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[28];
        assert(var_cs2 == NULL);
        Py_INCREF(tmp_assign_source_27);
        var_cs2 = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[0];
        assert(var_sn2 == NULL);
        Py_INCREF(tmp_assign_source_28);
        var_sn2 = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        if (par_b == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 370;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_29 = par_b;
        assert(var_u == NULL);
        Py_INCREF(tmp_assign_source_29);
        var_u = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_8;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[30]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[31]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_b == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 371;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_8 = par_b;
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 371;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_9);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bnorm == NULL);
        var_bnorm = tmp_assign_source_30;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_x0);
        tmp_cmp_expr_left_4 = par_x0;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_9;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[16]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_n == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 374;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_9 = var_n;
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 374;
        tmp_assign_source_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_10);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_bnorm);
        tmp_expression_value_7 = var_bnorm;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[32]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 375;
        tmp_assign_source_32 = CALL_FUNCTION_NO_ARGS(tmp_called_value_11);
        Py_DECREF(tmp_called_value_11);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_beta == NULL);
        var_beta = tmp_assign_source_32;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_10;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x0);
        tmp_args_element_value_10 = par_x0;
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 377;
        tmp_assign_source_33 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[33], tmp_args_element_value_10);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_left_value_7;
        PyObject *tmp_right_value_7;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(var_u);
        tmp_left_value_7 = var_u;
        CHECK_OBJECT(par_A);
        tmp_called_instance_4 = par_A;
        CHECK_OBJECT(var_x);
        tmp_args_element_value_11 = var_x;
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 378;
        tmp_right_value_7 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[34], tmp_args_element_value_11);
        if (tmp_right_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_34 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_7, tmp_right_value_7);
        Py_DECREF(tmp_right_value_7);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_u;
            assert(old != NULL);
            var_u = tmp_assign_source_34;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_12;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[30]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_u);
        tmp_args_element_value_12 = var_u;
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 379;
        tmp_assign_source_35 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[31], tmp_args_element_value_12);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_beta == NULL);
        var_beta = tmp_assign_source_35;
    }
    branch_end_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_beta);
        tmp_cmp_expr_left_5 = var_beta;
        tmp_cmp_expr_right_5 = mod_consts[0];
        tmp_condition_result_6 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
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
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_left_value_8;
        PyObject *tmp_left_value_9;
        PyObject *tmp_right_value_8;
        PyObject *tmp_right_value_9;
        tmp_left_value_9 = mod_consts[4];
        CHECK_OBJECT(var_beta);
        tmp_right_value_8 = var_beta;
        tmp_left_value_8 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_left_value_9, tmp_right_value_8);
        if (tmp_left_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_u == NULL) {
            Py_DECREF(tmp_left_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 382;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_9 = var_u;
        tmp_assign_source_36 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_8, tmp_right_value_9);
        Py_DECREF(tmp_left_value_8);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_u;
            var_u = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_13;
        CHECK_OBJECT(par_A);
        tmp_called_instance_6 = par_A;
        CHECK_OBJECT(var_u);
        tmp_args_element_value_13 = var_u;
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 383;
        tmp_assign_source_37 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[36], tmp_args_element_value_13);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_v == NULL);
        var_v = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_14;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[30]);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_v);
        tmp_args_element_value_14 = var_v;
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 384;
        tmp_assign_source_38 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[31], tmp_args_element_value_14);
        Py_DECREF(tmp_called_instance_7);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_alfa == NULL);
        var_alfa = tmp_assign_source_38;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_10;
        if (var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 386;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = var_x;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[32]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 386;
        tmp_assign_source_39 = CALL_FUNCTION_NO_ARGS(tmp_called_value_12);
        Py_DECREF(tmp_called_value_12);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_v == NULL);
        var_v = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[0];
        assert(var_alfa == NULL);
        Py_INCREF(tmp_assign_source_40);
        var_alfa = tmp_assign_source_40;
    }
    branch_end_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_alfa);
        tmp_cmp_expr_left_6 = var_alfa;
        tmp_cmp_expr_right_6 = mod_consts[0];
        tmp_condition_result_7 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
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
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_left_value_10;
        PyObject *tmp_left_value_11;
        PyObject *tmp_right_value_10;
        PyObject *tmp_right_value_11;
        tmp_left_value_11 = mod_consts[4];
        CHECK_OBJECT(var_alfa);
        tmp_right_value_10 = var_alfa;
        tmp_left_value_10 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_left_value_11, tmp_right_value_10);
        if (tmp_left_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_v == NULL) {
            Py_DECREF(tmp_left_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 390;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_11 = var_v;
        tmp_assign_source_41 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_10, tmp_right_value_11);
        Py_DECREF(tmp_left_value_10);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_41;
            Py_XDECREF(old);
        }

    }
    branch_no_7:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_11;
        if (var_v == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 391;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = var_v;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[32]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 391;
        tmp_assign_source_42 = CALL_FUNCTION_NO_ARGS(tmp_called_value_13);
        Py_DECREF(tmp_called_value_13);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_w == NULL);
        var_w = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        if (var_alfa == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 393;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_43 = var_alfa;
        assert(var_rhobar == NULL);
        Py_INCREF(tmp_assign_source_43);
        var_rhobar = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT(var_beta);
        tmp_assign_source_44 = var_beta;
        assert(var_phibar == NULL);
        Py_INCREF(tmp_assign_source_44);
        var_phibar = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT(var_beta);
        tmp_assign_source_45 = var_beta;
        assert(var_rnorm == NULL);
        Py_INCREF(tmp_assign_source_45);
        var_rnorm = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        CHECK_OBJECT(var_rnorm);
        tmp_assign_source_46 = var_rnorm;
        assert(var_r1norm == NULL);
        Py_INCREF(tmp_assign_source_46);
        var_r1norm = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        CHECK_OBJECT(var_rnorm);
        tmp_assign_source_47 = var_rnorm;
        assert(var_r2norm == NULL);
        Py_INCREF(tmp_assign_source_47);
        var_r2norm = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_left_value_12;
        PyObject *tmp_right_value_12;
        if (var_alfa == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 401;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_12 = var_alfa;
        CHECK_OBJECT(var_beta);
        tmp_right_value_12 = var_beta;
        tmp_assign_source_48 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_12, tmp_right_value_12);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_arnorm == NULL);
        var_arnorm = tmp_assign_source_48;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(var_arnorm);
        tmp_cmp_expr_left_7 = var_arnorm;
        tmp_cmp_expr_right_7 = mod_consts[0];
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
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
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_show);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_show);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_call_result_7;
        tmp_called_value_14 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_called_value_14 != NULL);
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 404;
        tmp_call_result_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_14, mod_consts[40]);

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_9:;
    {
        PyObject *tmp_tuple_element_5;
        if (var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 405;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_5 = var_x;
        tmp_return_value = PyTuple_New(10);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_5);
        CHECK_OBJECT(var_istop);
        tmp_tuple_element_5 = var_istop;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_5);
        CHECK_OBJECT(var_itn);
        tmp_tuple_element_5 = var_itn;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_5);
        CHECK_OBJECT(var_r1norm);
        tmp_tuple_element_5 = var_r1norm;
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_5);
        CHECK_OBJECT(var_r2norm);
        tmp_tuple_element_5 = var_r2norm;
        PyTuple_SET_ITEM0(tmp_return_value, 4, tmp_tuple_element_5);
        CHECK_OBJECT(var_anorm);
        tmp_tuple_element_5 = var_anorm;
        PyTuple_SET_ITEM0(tmp_return_value, 5, tmp_tuple_element_5);
        CHECK_OBJECT(var_acond);
        tmp_tuple_element_5 = var_acond;
        PyTuple_SET_ITEM0(tmp_return_value, 6, tmp_tuple_element_5);
        CHECK_OBJECT(var_arnorm);
        tmp_tuple_element_5 = var_arnorm;
        PyTuple_SET_ITEM0(tmp_return_value, 7, tmp_tuple_element_5);
        CHECK_OBJECT(var_xnorm);
        tmp_tuple_element_5 = var_xnorm;
        PyTuple_SET_ITEM0(tmp_return_value, 8, tmp_tuple_element_5);
        CHECK_OBJECT(var_var);
        tmp_tuple_element_5 = var_var;
        PyTuple_SET_ITEM0(tmp_return_value, 9, tmp_tuple_element_5);
        goto frame_return_exit_1;
    }
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_show);
        tmp_truth_name_3 = CHECK_IF_TRUE(par_show);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_call_result_8;
        tmp_called_value_15 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_called_value_15 != NULL);
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 411;
        tmp_call_result_8 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_15, mod_consts[19]);

        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_call_result_9;
        tmp_called_value_16 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_called_value_16 != NULL);
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 412;
        tmp_call_result_9 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_16, mod_consts[41]);

        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_left_value_13;
        PyObject *tmp_right_value_13;
        if (var_alfa == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 414;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_13 = var_alfa;
        CHECK_OBJECT(var_beta);
        tmp_right_value_13 = var_beta;
        tmp_assign_source_49 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_13, tmp_right_value_13);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_test2 == NULL);
        var_test2 = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_left_value_14;
        PyObject *tmp_right_value_14;
        PyObject *tmp_tuple_element_6;
        tmp_left_value_14 = mod_consts[42];
        CHECK_OBJECT(var_itn);
        tmp_tuple_element_6 = var_itn;
        tmp_right_value_14 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_1;
            PyTuple_SET_ITEM0(tmp_right_value_14, 0, tmp_tuple_element_6);
            if (var_x == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 415;
                type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_expression_value_12 = var_x;
            tmp_subscript_value_1 = mod_consts[0];
            tmp_tuple_element_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_12, tmp_subscript_value_1, 0);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 415;
                type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_value_14, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_right_value_14);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_50 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_14, tmp_right_value_14);
        Py_DECREF(tmp_right_value_14);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_str1;
            var_str1 = tmp_assign_source_50;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_left_value_15;
        PyObject *tmp_right_value_15;
        PyObject *tmp_tuple_element_7;
        tmp_left_value_15 = mod_consts[43];
        CHECK_OBJECT(var_r1norm);
        tmp_tuple_element_7 = var_r1norm;
        tmp_right_value_15 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_right_value_15, 0, tmp_tuple_element_7);
        CHECK_OBJECT(var_r2norm);
        tmp_tuple_element_7 = var_r2norm;
        PyTuple_SET_ITEM0(tmp_right_value_15, 1, tmp_tuple_element_7);
        tmp_assign_source_51 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_15, tmp_right_value_15);
        Py_DECREF(tmp_right_value_15);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_str2;
            var_str2 = tmp_assign_source_51;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_left_value_16;
        PyObject *tmp_right_value_16;
        PyObject *tmp_tuple_element_8;
        tmp_left_value_16 = mod_consts[44];
        tmp_tuple_element_8 = mod_consts[4];
        tmp_right_value_16 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_right_value_16, 0, tmp_tuple_element_8);
        CHECK_OBJECT(var_test2);
        tmp_tuple_element_8 = var_test2;
        PyTuple_SET_ITEM0(tmp_right_value_16, 1, tmp_tuple_element_8);
        tmp_assign_source_52 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_16, tmp_right_value_16);
        Py_DECREF(tmp_right_value_16);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_str3;
            var_str3 = tmp_assign_source_52;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        tmp_called_value_17 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_called_value_17 != NULL);
        CHECK_OBJECT(var_str1);
        tmp_args_element_value_15 = var_str1;
        CHECK_OBJECT(var_str2);
        tmp_args_element_value_16 = var_str2;
        CHECK_OBJECT(var_str3);
        tmp_args_element_value_17 = var_str3;
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 418;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_17, call_args);
        }

        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    branch_no_10:;
    loop_start_1:;
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        if (var_itn == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 421;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_8 = var_itn;
        if (par_iter_lim == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 421;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_8 = par_iter_lim;
        tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    goto loop_end_1;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_left_value_17;
        PyObject *tmp_right_value_17;
        if (var_itn == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 422;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_17 = var_itn;
        tmp_right_value_17 = mod_consts[4];
        tmp_assign_source_53 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_left_value_17, tmp_right_value_17);
        assert(!(tmp_assign_source_53 == NULL));
        {
            PyObject *old = var_itn;
            var_itn = tmp_assign_source_53;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_left_value_18;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_right_value_18;
        PyObject *tmp_left_value_19;
        PyObject *tmp_right_value_19;
        if (par_A == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 427;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = par_A;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[34]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_v == NULL) {
            Py_DECREF(tmp_called_value_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 427;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_18 = var_v;
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 427;
        tmp_left_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_18);
        if (tmp_left_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_alfa == NULL) {
            Py_DECREF(tmp_left_value_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 427;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_19 = var_alfa;
        if (var_u == NULL) {
            Py_DECREF(tmp_left_value_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 427;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_19 = var_u;
        tmp_right_value_18 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_19, tmp_right_value_19);
        if (tmp_right_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_18);

            exception_lineno = 427;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_54 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_18, tmp_right_value_18);
        Py_DECREF(tmp_left_value_18);
        Py_DECREF(tmp_right_value_18);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_u;
            var_u = tmp_assign_source_54;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_19;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[30]);
        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_u);
        tmp_args_element_value_19 = var_u;
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 428;
        tmp_assign_source_55 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[31], tmp_args_element_value_19);
        Py_DECREF(tmp_called_instance_8);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_beta;
            var_beta = tmp_assign_source_55;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(var_beta);
        tmp_cmp_expr_left_9 = var_beta;
        tmp_cmp_expr_right_9 = mod_consts[0];
        tmp_condition_result_12 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
        assert(tmp_condition_result_12 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_left_value_20;
        PyObject *tmp_left_value_21;
        PyObject *tmp_right_value_20;
        PyObject *tmp_right_value_21;
        tmp_left_value_21 = mod_consts[4];
        CHECK_OBJECT(var_beta);
        tmp_right_value_20 = var_beta;
        tmp_left_value_20 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_left_value_21, tmp_right_value_20);
        if (tmp_left_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_u);
        tmp_right_value_21 = var_u;
        tmp_assign_source_56 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_20, tmp_right_value_21);
        Py_DECREF(tmp_left_value_20);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_u;
            assert(old != NULL);
            var_u = tmp_assign_source_56;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_left_value_22;
        PyObject *tmp_left_value_23;
        PyObject *tmp_left_value_24;
        PyObject *tmp_left_value_25;
        PyObject *tmp_right_value_22;
        PyObject *tmp_right_value_23;
        PyObject *tmp_left_value_26;
        PyObject *tmp_right_value_24;
        PyObject *tmp_right_value_25;
        PyObject *tmp_left_value_27;
        PyObject *tmp_right_value_26;
        PyObject *tmp_right_value_27;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_anorm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 432;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_25 = var_anorm;
        tmp_right_value_22 = mod_consts[15];
        tmp_left_value_24 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_left_value_25, tmp_right_value_22);
        if (tmp_left_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_alfa == NULL) {
            Py_DECREF(tmp_left_value_24);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 432;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_26 = var_alfa;
        tmp_right_value_24 = mod_consts[15];
        tmp_right_value_23 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_left_value_26, tmp_right_value_24);
        if (tmp_right_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_24);

            exception_lineno = 432;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_23 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_24, tmp_right_value_23);
        Py_DECREF(tmp_left_value_24);
        Py_DECREF(tmp_right_value_23);
        if (tmp_left_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_beta);
        tmp_left_value_27 = var_beta;
        tmp_right_value_26 = mod_consts[15];
        tmp_right_value_25 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_left_value_27, tmp_right_value_26);
        if (tmp_right_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_23);

            exception_lineno = 432;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_22 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_23, tmp_right_value_25);
        Py_DECREF(tmp_left_value_23);
        Py_DECREF(tmp_right_value_25);
        if (tmp_left_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_dampsq == NULL) {
            Py_DECREF(tmp_left_value_22);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 432;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_27 = var_dampsq;
        tmp_args_element_value_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_22, tmp_right_value_27);
        Py_DECREF(tmp_left_value_22);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 432;
        tmp_assign_source_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_20);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_anorm;
            var_anorm = tmp_assign_source_57;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_left_value_28;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_right_value_28;
        PyObject *tmp_left_value_29;
        PyObject *tmp_right_value_29;
        if (par_A == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 433;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_9 = par_A;
        CHECK_OBJECT(var_u);
        tmp_args_element_value_21 = var_u;
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 433;
        tmp_left_value_28 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[36], tmp_args_element_value_21);
        if (tmp_left_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_beta);
        tmp_left_value_29 = var_beta;
        if (var_v == NULL) {
            Py_DECREF(tmp_left_value_28);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 433;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_29 = var_v;
        tmp_right_value_28 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_29, tmp_right_value_29);
        if (tmp_right_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_28);

            exception_lineno = 433;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_58 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_28, tmp_right_value_28);
        Py_DECREF(tmp_left_value_28);
        Py_DECREF(tmp_right_value_28);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_58;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_22;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[30]);
        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_v);
        tmp_args_element_value_22 = var_v;
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 434;
        tmp_assign_source_59 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[31], tmp_args_element_value_22);
        Py_DECREF(tmp_called_instance_10);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_alfa;
            var_alfa = tmp_assign_source_59;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(var_alfa);
        tmp_cmp_expr_left_10 = var_alfa;
        tmp_cmp_expr_right_10 = mod_consts[0];
        tmp_condition_result_13 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
        assert(tmp_condition_result_13 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_left_value_30;
        PyObject *tmp_left_value_31;
        PyObject *tmp_right_value_30;
        PyObject *tmp_right_value_31;
        tmp_left_value_31 = mod_consts[4];
        CHECK_OBJECT(var_alfa);
        tmp_right_value_30 = var_alfa;
        tmp_left_value_30 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_left_value_31, tmp_right_value_30);
        if (tmp_left_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_v);
        tmp_right_value_31 = var_v;
        tmp_assign_source_60 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_30, tmp_right_value_31);
        Py_DECREF(tmp_left_value_30);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_v;
            assert(old != NULL);
            var_v = tmp_assign_source_60;
            Py_DECREF(old);
        }

    }
    branch_no_13:;
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        if (par_damp == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 440;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_11 = par_damp;
        tmp_cmp_expr_right_11 = mod_consts[0];
        tmp_condition_result_14 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
        assert(tmp_condition_result_14 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_left_value_32;
        PyObject *tmp_left_value_33;
        PyObject *tmp_right_value_32;
        PyObject *tmp_right_value_33;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_rhobar == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 441;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_33 = var_rhobar;
        tmp_right_value_32 = mod_consts[15];
        tmp_left_value_32 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_left_value_33, tmp_right_value_32);
        if (tmp_left_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_dampsq == NULL) {
            Py_DECREF(tmp_left_value_32);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 441;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_33 = var_dampsq;
        tmp_args_element_value_23 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_32, tmp_right_value_33);
        Py_DECREF(tmp_left_value_32);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 441;
        tmp_assign_source_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_23);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rhobar1;
            var_rhobar1 = tmp_assign_source_61;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_left_value_34;
        PyObject *tmp_right_value_34;
        if (var_rhobar == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 442;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_34 = var_rhobar;
        CHECK_OBJECT(var_rhobar1);
        tmp_right_value_34 = var_rhobar1;
        tmp_assign_source_62 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_34, tmp_right_value_34);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_cs1;
            var_cs1 = tmp_assign_source_62;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_left_value_35;
        PyObject *tmp_right_value_35;
        if (par_damp == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 443;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_35 = par_damp;
        CHECK_OBJECT(var_rhobar1);
        tmp_right_value_35 = var_rhobar1;
        tmp_assign_source_63 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_35, tmp_right_value_35);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_sn1;
            var_sn1 = tmp_assign_source_63;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_left_value_36;
        PyObject *tmp_right_value_36;
        CHECK_OBJECT(var_sn1);
        tmp_left_value_36 = var_sn1;
        if (var_phibar == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 444;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_36 = var_phibar;
        tmp_assign_source_64 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_36, tmp_right_value_36);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_psi;
            var_psi = tmp_assign_source_64;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_left_value_37;
        PyObject *tmp_right_value_37;
        CHECK_OBJECT(var_cs1);
        tmp_left_value_37 = var_cs1;
        if (var_phibar == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 445;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_37 = var_phibar;
        tmp_assign_source_65 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_37, tmp_right_value_37);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_phibar;
            var_phibar = tmp_assign_source_65;
            Py_XDECREF(old);
        }

    }
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_66;
        if (var_rhobar == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 448;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_66 = var_rhobar;
        {
            PyObject *old = var_rhobar1;
            var_rhobar1 = tmp_assign_source_66;
            Py_INCREF(var_rhobar1);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[53];
        {
            PyObject *old = var_psi;
            var_psi = tmp_assign_source_67;
            Py_INCREF(var_psi);
            Py_XDECREF(old);
        }

    }
    branch_end_14:;
    // Tried code:
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (var_rhobar1 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 453;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_24 = var_rhobar1;
        if (var_beta == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 453;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_25 = var_beta;
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 453;
        {
            PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_21, call_args);
        }

        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_68 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_68;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_69 = UNPACK_NEXT(tmp_unpack_3, 0, 3);
        if (tmp_assign_source_69 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            exception_lineno = 453;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_69;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_70 = UNPACK_NEXT(tmp_unpack_4, 1, 3);
        if (tmp_assign_source_70 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            exception_lineno = 453;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_70;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_71 = UNPACK_NEXT(tmp_unpack_5, 2, 3);
        if (tmp_assign_source_71 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            exception_lineno = 453;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_3;
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_71;
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

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
                    exception_lineno = 453;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[57];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            exception_lineno = 453;
            goto try_except_handler_5;
        }
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
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
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_72;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_72 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_cs;
            var_cs = tmp_assign_source_72;
            Py_INCREF(var_cs);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_73;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_73 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_sn;
            var_sn = tmp_assign_source_73;
            Py_INCREF(var_sn);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_74;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_74 = tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = var_rho;
            var_rho = tmp_assign_source_74;
            Py_INCREF(var_rho);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_left_value_38;
        PyObject *tmp_right_value_38;
        CHECK_OBJECT(var_sn);
        tmp_left_value_38 = var_sn;
        if (var_alfa == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 455;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_38 = var_alfa;
        tmp_assign_source_75 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_38, tmp_right_value_38);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_theta;
            var_theta = tmp_assign_source_75;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_left_value_39;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_right_value_39;
        CHECK_OBJECT(var_cs);
        tmp_operand_value_2 = var_cs;
        tmp_left_value_39 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
        if (tmp_left_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_alfa == NULL) {
            Py_DECREF(tmp_left_value_39);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 456;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_39 = var_alfa;
        tmp_assign_source_76 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_39, tmp_right_value_39);
        Py_DECREF(tmp_left_value_39);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rhobar;
            var_rhobar = tmp_assign_source_76;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_left_value_40;
        PyObject *tmp_right_value_40;
        CHECK_OBJECT(var_cs);
        tmp_left_value_40 = var_cs;
        if (var_phibar == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 457;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_40 = var_phibar;
        tmp_assign_source_77 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_40, tmp_right_value_40);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_phi;
            var_phi = tmp_assign_source_77;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_left_value_41;
        PyObject *tmp_right_value_41;
        CHECK_OBJECT(var_sn);
        tmp_left_value_41 = var_sn;
        if (var_phibar == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 458;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_41 = var_phibar;
        tmp_assign_source_78 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_41, tmp_right_value_41);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_phibar;
            var_phibar = tmp_assign_source_78;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_left_value_42;
        PyObject *tmp_right_value_42;
        CHECK_OBJECT(var_sn);
        tmp_left_value_42 = var_sn;
        CHECK_OBJECT(var_phi);
        tmp_right_value_42 = var_phi;
        tmp_assign_source_79 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_42, tmp_right_value_42);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_tau;
            var_tau = tmp_assign_source_79;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_left_value_43;
        PyObject *tmp_right_value_43;
        CHECK_OBJECT(var_phi);
        tmp_left_value_43 = var_phi;
        CHECK_OBJECT(var_rho);
        tmp_right_value_43 = var_rho;
        tmp_assign_source_80 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_43, tmp_right_value_43);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_t1;
            var_t1 = tmp_assign_source_80;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_left_value_44;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_right_value_44;
        CHECK_OBJECT(var_theta);
        tmp_operand_value_3 = var_theta;
        tmp_left_value_44 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_3);
        if (tmp_left_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rho);
        tmp_right_value_44 = var_rho;
        tmp_assign_source_81 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_44, tmp_right_value_44);
        Py_DECREF(tmp_left_value_44);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_t2;
            var_t2 = tmp_assign_source_81;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_left_value_45;
        PyObject *tmp_left_value_46;
        PyObject *tmp_right_value_45;
        PyObject *tmp_right_value_46;
        tmp_left_value_46 = mod_consts[4];
        CHECK_OBJECT(var_rho);
        tmp_right_value_45 = var_rho;
        tmp_left_value_45 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_left_value_46, tmp_right_value_45);
        if (tmp_left_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_w == NULL) {
            Py_DECREF(tmp_left_value_45);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 464;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_46 = var_w;
        tmp_assign_source_82 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_45, tmp_right_value_46);
        Py_DECREF(tmp_left_value_45);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_dk;
            var_dk = tmp_assign_source_82;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_left_value_47;
        PyObject *tmp_right_value_47;
        PyObject *tmp_left_value_48;
        PyObject *tmp_right_value_48;
        if (var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 466;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_47 = var_x;
        CHECK_OBJECT(var_t1);
        tmp_left_value_48 = var_t1;
        if (var_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 466;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_48 = var_w;
        tmp_right_value_47 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_48, tmp_right_value_48);
        if (tmp_right_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_83 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_47, tmp_right_value_47);
        Py_DECREF(tmp_right_value_47);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_x;
            var_x = tmp_assign_source_83;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_left_value_49;
        PyObject *tmp_right_value_49;
        PyObject *tmp_left_value_50;
        PyObject *tmp_right_value_50;
        if (var_v == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 467;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_49 = var_v;
        CHECK_OBJECT(var_t2);
        tmp_left_value_50 = var_t2;
        if (var_w == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 467;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_50 = var_w;
        tmp_right_value_49 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_50, tmp_right_value_50);
        if (tmp_right_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_84 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_49, tmp_right_value_49);
        Py_DECREF(tmp_right_value_49);
        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_w;
            var_w = tmp_assign_source_84;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_left_value_51;
        PyObject *tmp_right_value_51;
        PyObject *tmp_left_value_52;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_right_value_52;
        if (var_ddnorm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 468;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_51 = var_ddnorm;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[30]);
        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dk);
        tmp_args_element_value_26 = var_dk;
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 468;
        tmp_left_value_52 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[31], tmp_args_element_value_26);
        Py_DECREF(tmp_called_instance_11);
        if (tmp_left_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_52 = mod_consts[15];
        tmp_right_value_51 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_left_value_52, tmp_right_value_52);
        Py_DECREF(tmp_left_value_52);
        if (tmp_right_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_85 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_51, tmp_right_value_51);
        Py_DECREF(tmp_right_value_51);
        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_ddnorm;
            var_ddnorm = tmp_assign_source_85;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_15;
        int tmp_truth_name_4;
        CHECK_OBJECT(par_calc_var);
        tmp_truth_name_4 = CHECK_IF_TRUE(par_calc_var);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_left_value_53;
        PyObject *tmp_right_value_53;
        PyObject *tmp_left_value_54;
        PyObject *tmp_right_value_54;
        if (var_var == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 471;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_53 = var_var;
        CHECK_OBJECT(var_dk);
        tmp_left_value_54 = var_dk;
        tmp_right_value_54 = mod_consts[15];
        tmp_right_value_53 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_left_value_54, tmp_right_value_54);
        if (tmp_right_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_86 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_53, tmp_right_value_53);
        Py_DECREF(tmp_right_value_53);
        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_var;
            var_var = tmp_assign_source_86;
            Py_XDECREF(old);
        }

    }
    branch_no_15:;
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_left_value_55;
        PyObject *tmp_right_value_55;
        if (var_sn2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 476;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_55 = var_sn2;
        CHECK_OBJECT(var_rho);
        tmp_right_value_55 = var_rho;
        tmp_assign_source_87 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_55, tmp_right_value_55);
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_delta;
            var_delta = tmp_assign_source_87;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_left_value_56;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_right_value_56;
        if (var_cs2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 477;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_4 = var_cs2;
        tmp_left_value_56 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_4);
        if (tmp_left_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rho);
        tmp_right_value_56 = var_rho;
        tmp_assign_source_88 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_56, tmp_right_value_56);
        Py_DECREF(tmp_left_value_56);
        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gambar;
            var_gambar = tmp_assign_source_88;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_left_value_57;
        PyObject *tmp_right_value_57;
        PyObject *tmp_left_value_58;
        PyObject *tmp_right_value_58;
        CHECK_OBJECT(var_phi);
        tmp_left_value_57 = var_phi;
        CHECK_OBJECT(var_delta);
        tmp_left_value_58 = var_delta;
        if (var_z == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 478;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_58 = var_z;
        tmp_right_value_57 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_58, tmp_right_value_58);
        if (tmp_right_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_89 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_57, tmp_right_value_57);
        Py_DECREF(tmp_right_value_57);
        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rhs;
            var_rhs = tmp_assign_source_89;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_left_value_59;
        PyObject *tmp_right_value_59;
        CHECK_OBJECT(var_rhs);
        tmp_left_value_59 = var_rhs;
        CHECK_OBJECT(var_gambar);
        tmp_right_value_59 = var_gambar;
        tmp_assign_source_90 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_59, tmp_right_value_59);
        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_zbar;
            var_zbar = tmp_assign_source_90;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_left_value_60;
        PyObject *tmp_right_value_60;
        PyObject *tmp_left_value_61;
        PyObject *tmp_right_value_61;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_xxnorm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 480;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_60 = var_xxnorm;
        CHECK_OBJECT(var_zbar);
        tmp_left_value_61 = var_zbar;
        tmp_right_value_61 = mod_consts[15];
        tmp_right_value_60 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_left_value_61, tmp_right_value_61);
        if (tmp_right_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_27 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_60, tmp_right_value_60);
        Py_DECREF(tmp_right_value_60);
        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 480;
        tmp_assign_source_91 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_27);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_xnorm;
            var_xnorm = tmp_assign_source_91;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_left_value_62;
        PyObject *tmp_left_value_63;
        PyObject *tmp_right_value_62;
        PyObject *tmp_right_value_63;
        PyObject *tmp_left_value_64;
        PyObject *tmp_right_value_64;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_gambar);
        tmp_left_value_63 = var_gambar;
        tmp_right_value_62 = mod_consts[15];
        tmp_left_value_62 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_left_value_63, tmp_right_value_62);
        if (tmp_left_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_theta);
        tmp_left_value_64 = var_theta;
        tmp_right_value_64 = mod_consts[15];
        tmp_right_value_63 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_left_value_64, tmp_right_value_64);
        if (tmp_right_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_62);

            exception_lineno = 481;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_62, tmp_right_value_63);
        Py_DECREF(tmp_left_value_62);
        Py_DECREF(tmp_right_value_63);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 481;
        tmp_assign_source_92 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_28);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_gamma;
            var_gamma = tmp_assign_source_92;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_left_value_65;
        PyObject *tmp_right_value_65;
        CHECK_OBJECT(var_gambar);
        tmp_left_value_65 = var_gambar;
        CHECK_OBJECT(var_gamma);
        tmp_right_value_65 = var_gamma;
        tmp_assign_source_93 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_65, tmp_right_value_65);
        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_cs2;
            var_cs2 = tmp_assign_source_93;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_left_value_66;
        PyObject *tmp_right_value_66;
        CHECK_OBJECT(var_theta);
        tmp_left_value_66 = var_theta;
        CHECK_OBJECT(var_gamma);
        tmp_right_value_66 = var_gamma;
        tmp_assign_source_94 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_66, tmp_right_value_66);
        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_sn2;
            var_sn2 = tmp_assign_source_94;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_left_value_67;
        PyObject *tmp_right_value_67;
        CHECK_OBJECT(var_rhs);
        tmp_left_value_67 = var_rhs;
        CHECK_OBJECT(var_gamma);
        tmp_right_value_67 = var_gamma;
        tmp_assign_source_95 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_67, tmp_right_value_67);
        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_z;
            var_z = tmp_assign_source_95;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_left_value_68;
        PyObject *tmp_right_value_68;
        PyObject *tmp_left_value_69;
        PyObject *tmp_right_value_69;
        if (var_xxnorm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 485;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_68 = var_xxnorm;
        CHECK_OBJECT(var_z);
        tmp_left_value_69 = var_z;
        tmp_right_value_69 = mod_consts[15];
        tmp_right_value_68 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_left_value_69, tmp_right_value_69);
        if (tmp_right_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_96 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_68, tmp_right_value_68);
        Py_DECREF(tmp_right_value_68);
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_xxnorm;
            var_xxnorm = tmp_assign_source_96;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_left_value_70;
        PyObject *tmp_right_value_70;
        PyObject *tmp_called_value_24;
        PyObject *tmp_args_element_value_29;
        if (var_anorm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 490;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_70 = var_anorm;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ddnorm);
        tmp_args_element_value_29 = var_ddnorm;
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 490;
        tmp_right_value_70 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_29);
        if (tmp_right_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_97 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_70, tmp_right_value_70);
        Py_DECREF(tmp_right_value_70);
        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_acond;
            var_acond = tmp_assign_source_97;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_left_value_71;
        PyObject *tmp_right_value_71;
        CHECK_OBJECT(var_phibar);
        tmp_left_value_71 = var_phibar;
        tmp_right_value_71 = mod_consts[15];
        tmp_assign_source_98 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_left_value_71, tmp_right_value_71);
        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_res1;
            var_res1 = tmp_assign_source_98;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_left_value_72;
        PyObject *tmp_right_value_72;
        PyObject *tmp_left_value_73;
        PyObject *tmp_right_value_73;
        if (var_res2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 492;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_72 = var_res2;
        CHECK_OBJECT(var_psi);
        tmp_left_value_73 = var_psi;
        tmp_right_value_73 = mod_consts[15];
        tmp_right_value_72 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_left_value_73, tmp_right_value_73);
        if (tmp_right_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_99 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_72, tmp_right_value_72);
        Py_DECREF(tmp_right_value_72);
        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_res2;
            var_res2 = tmp_assign_source_99;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_called_value_25;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_left_value_74;
        PyObject *tmp_right_value_74;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res1);
        tmp_left_value_74 = var_res1;
        CHECK_OBJECT(var_res2);
        tmp_right_value_74 = var_res2;
        tmp_args_element_value_30 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_74, tmp_right_value_74);
        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 493;
        tmp_assign_source_100 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_30);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rnorm;
            var_rnorm = tmp_assign_source_100;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_left_value_75;
        PyObject *tmp_right_value_75;
        PyObject *tmp_abs_arg_1;
        if (var_alfa == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 494;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_75 = var_alfa;
        CHECK_OBJECT(var_tau);
        tmp_abs_arg_1 = var_tau;
        tmp_right_value_75 = BUILTIN_ABS(tmp_abs_arg_1);
        if (tmp_right_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_101 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_75, tmp_right_value_75);
        Py_DECREF(tmp_right_value_75);
        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_arnorm;
            var_arnorm = tmp_assign_source_101;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        if (par_damp == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 503;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_12 = par_damp;
        tmp_cmp_expr_right_12 = mod_consts[0];
        tmp_condition_result_16 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
        assert(tmp_condition_result_16 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_left_value_76;
        PyObject *tmp_left_value_77;
        PyObject *tmp_right_value_76;
        PyObject *tmp_right_value_77;
        PyObject *tmp_left_value_78;
        PyObject *tmp_right_value_78;
        CHECK_OBJECT(var_rnorm);
        tmp_left_value_77 = var_rnorm;
        tmp_right_value_76 = mod_consts[15];
        tmp_left_value_76 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_left_value_77, tmp_right_value_76);
        if (tmp_left_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_dampsq == NULL) {
            Py_DECREF(tmp_left_value_76);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 504;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_78 = var_dampsq;
        CHECK_OBJECT(var_xxnorm);
        tmp_right_value_78 = var_xxnorm;
        tmp_right_value_77 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_78, tmp_right_value_78);
        if (tmp_right_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_76);

            exception_lineno = 504;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_102 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_76, tmp_right_value_77);
        Py_DECREF(tmp_left_value_76);
        Py_DECREF(tmp_right_value_77);
        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_r1sq;
            var_r1sq = tmp_assign_source_102;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_value_26;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_abs_arg_2;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_r1sq);
        tmp_abs_arg_2 = var_r1sq;
        tmp_args_element_value_31 = BUILTIN_ABS(tmp_abs_arg_2);
        if (tmp_args_element_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 505;
        tmp_assign_source_103 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_31);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_r1norm;
            var_r1norm = tmp_assign_source_103;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        CHECK_OBJECT(var_r1sq);
        tmp_cmp_expr_left_13 = var_r1sq;
        tmp_cmp_expr_right_13 = mod_consts[0];
        tmp_condition_result_17 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
        assert(tmp_condition_result_17 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_operand_value_5;
        CHECK_OBJECT(var_r1norm);
        tmp_operand_value_5 = var_r1norm;
        tmp_assign_source_104 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_5);
        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_r1norm;
            assert(old != NULL);
            var_r1norm = tmp_assign_source_104;
            Py_DECREF(old);
        }

    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_105;
        CHECK_OBJECT(var_rnorm);
        tmp_assign_source_105 = var_rnorm;
        {
            PyObject *old = var_r1norm;
            var_r1norm = tmp_assign_source_105;
            Py_INCREF(var_r1norm);
            Py_XDECREF(old);
        }

    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_106;
        if (var_rnorm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[66]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 510;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_106 = var_rnorm;
        {
            PyObject *old = var_r2norm;
            var_r2norm = tmp_assign_source_106;
            Py_INCREF(var_r2norm);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_left_value_79;
        PyObject *tmp_right_value_79;
        if (var_rnorm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[66]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 514;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_79 = var_rnorm;
        if (var_bnorm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[67]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 514;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_79 = var_bnorm;
        tmp_assign_source_107 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_79, tmp_right_value_79);
        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_test1;
            var_test1 = tmp_assign_source_107;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_left_value_80;
        PyObject *tmp_right_value_80;
        PyObject *tmp_left_value_81;
        PyObject *tmp_left_value_82;
        PyObject *tmp_right_value_81;
        PyObject *tmp_right_value_82;
        CHECK_OBJECT(var_arnorm);
        tmp_left_value_80 = var_arnorm;
        if (var_anorm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 515;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_82 = var_anorm;
        if (var_rnorm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[66]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 515;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_81 = var_rnorm;
        tmp_left_value_81 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_82, tmp_right_value_81);
        if (tmp_left_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_82 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_right_value_82 == NULL)) {
            tmp_right_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_right_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_81);

            exception_lineno = 515;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_80 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_81, tmp_right_value_82);
        Py_DECREF(tmp_left_value_81);
        if (tmp_right_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_108 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_80, tmp_right_value_80);
        Py_DECREF(tmp_right_value_80);
        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_test2;
            var_test2 = tmp_assign_source_108;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_left_value_83;
        PyObject *tmp_right_value_83;
        PyObject *tmp_left_value_84;
        PyObject *tmp_right_value_84;
        tmp_left_value_83 = mod_consts[4];
        CHECK_OBJECT(var_acond);
        tmp_left_value_84 = var_acond;
        tmp_right_value_84 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_right_value_84 == NULL)) {
            tmp_right_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_right_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_83 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_84, tmp_right_value_84);
        if (tmp_right_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_109 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_left_value_83, tmp_right_value_83);
        Py_DECREF(tmp_right_value_83);
        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_test3;
            var_test3 = tmp_assign_source_109;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_left_value_85;
        PyObject *tmp_right_value_85;
        PyObject *tmp_left_value_86;
        PyObject *tmp_right_value_86;
        PyObject *tmp_left_value_87;
        PyObject *tmp_left_value_88;
        PyObject *tmp_right_value_87;
        PyObject *tmp_right_value_88;
        CHECK_OBJECT(var_test1);
        tmp_left_value_85 = var_test1;
        tmp_left_value_86 = mod_consts[4];
        if (var_anorm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 517;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_88 = var_anorm;
        CHECK_OBJECT(var_xnorm);
        tmp_right_value_87 = var_xnorm;
        tmp_left_value_87 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_88, tmp_right_value_87);
        if (tmp_left_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_bnorm == NULL) {
            Py_DECREF(tmp_left_value_87);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[67]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 517;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_88 = var_bnorm;
        tmp_right_value_86 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_87, tmp_right_value_88);
        Py_DECREF(tmp_left_value_87);
        if (tmp_right_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_85 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_left_value_86, tmp_right_value_86);
        Py_DECREF(tmp_right_value_86);
        if (tmp_right_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_110 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_85, tmp_right_value_85);
        Py_DECREF(tmp_right_value_85);
        if (tmp_assign_source_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_t1;
            assert(old != NULL);
            var_t1 = tmp_assign_source_110;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_left_value_89;
        PyObject *tmp_right_value_89;
        PyObject *tmp_left_value_90;
        PyObject *tmp_left_value_91;
        PyObject *tmp_left_value_92;
        PyObject *tmp_right_value_90;
        PyObject *tmp_right_value_91;
        PyObject *tmp_right_value_92;
        if (par_btol == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 518;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_89 = par_btol;
        if (par_atol == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[70]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 518;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_92 = par_atol;
        if (var_anorm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 518;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_90 = var_anorm;
        tmp_left_value_91 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_92, tmp_right_value_90);
        if (tmp_left_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_xnorm);
        tmp_right_value_91 = var_xnorm;
        tmp_left_value_90 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_91, tmp_right_value_91);
        Py_DECREF(tmp_left_value_91);
        if (tmp_left_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_bnorm == NULL) {
            Py_DECREF(tmp_left_value_90);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[67]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 518;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_92 = var_bnorm;
        tmp_right_value_89 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_90, tmp_right_value_92);
        Py_DECREF(tmp_left_value_90);
        if (tmp_right_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_111 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_89, tmp_right_value_89);
        Py_DECREF(tmp_right_value_89);
        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rtol;
            var_rtol = tmp_assign_source_111;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        CHECK_OBJECT(var_itn);
        tmp_cmp_expr_left_14 = var_itn;
        if (par_iter_lim == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 525;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_14 = par_iter_lim;
        tmp_condition_result_18 = RICH_COMPARE_GE_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
        assert(tmp_condition_result_18 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = mod_consts[71];
        {
            PyObject *old = var_istop;
            var_istop = tmp_assign_source_112;
            Py_INCREF(var_istop);
            Py_XDECREF(old);
        }

    }
    branch_no_18:;
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        PyObject *tmp_left_value_93;
        PyObject *tmp_right_value_93;
        tmp_left_value_93 = mod_consts[4];
        CHECK_OBJECT(var_test3);
        tmp_right_value_93 = var_test3;
        tmp_cmp_expr_left_15 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_left_value_93, tmp_right_value_93);
        if (tmp_cmp_expr_left_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_15 = mod_consts[4];
        tmp_condition_result_19 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        Py_DECREF(tmp_cmp_expr_left_15);
        if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
        assert(tmp_condition_result_19 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = mod_consts[72];
        {
            PyObject *old = var_istop;
            var_istop = tmp_assign_source_113;
            Py_INCREF(var_istop);
            Py_XDECREF(old);
        }

    }
    branch_no_19:;
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        PyObject *tmp_left_value_94;
        PyObject *tmp_right_value_94;
        tmp_left_value_94 = mod_consts[4];
        CHECK_OBJECT(var_test2);
        tmp_right_value_94 = var_test2;
        tmp_cmp_expr_left_16 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_left_value_94, tmp_right_value_94);
        if (tmp_cmp_expr_left_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_16 = mod_consts[4];
        tmp_condition_result_20 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        Py_DECREF(tmp_cmp_expr_left_16);
        if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
        assert(tmp_condition_result_20 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_20:;
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = mod_consts[73];
        {
            PyObject *old = var_istop;
            var_istop = tmp_assign_source_114;
            Py_INCREF(var_istop);
            Py_XDECREF(old);
        }

    }
    branch_no_20:;
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        PyObject *tmp_left_value_95;
        PyObject *tmp_right_value_95;
        tmp_left_value_95 = mod_consts[4];
        CHECK_OBJECT(var_t1);
        tmp_right_value_95 = var_t1;
        tmp_cmp_expr_left_17 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_left_value_95, tmp_right_value_95);
        if (tmp_cmp_expr_left_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_17 = mod_consts[4];
        tmp_condition_result_21 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        Py_DECREF(tmp_cmp_expr_left_17);
        if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
        assert(tmp_condition_result_21 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_21:;
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = mod_consts[74];
        {
            PyObject *old = var_istop;
            var_istop = tmp_assign_source_115;
            Py_INCREF(var_istop);
            Py_XDECREF(old);
        }

    }
    branch_no_21:;
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        CHECK_OBJECT(var_test3);
        tmp_cmp_expr_left_18 = var_test3;
        if (var_ctol == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 535;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_18 = var_ctol;
        tmp_condition_result_22 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        if (tmp_condition_result_22 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
        assert(tmp_condition_result_22 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = mod_consts[76];
        {
            PyObject *old = var_istop;
            var_istop = tmp_assign_source_116;
            Py_INCREF(var_istop);
            Py_XDECREF(old);
        }

    }
    branch_no_22:;
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        CHECK_OBJECT(var_test2);
        tmp_cmp_expr_left_19 = var_test2;
        if (par_atol == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[70]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 537;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_19 = par_atol;
        tmp_condition_result_23 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
        if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
        assert(tmp_condition_result_23 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_23:;
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = mod_consts[15];
        {
            PyObject *old = var_istop;
            var_istop = tmp_assign_source_117;
            Py_INCREF(var_istop);
            Py_XDECREF(old);
        }

    }
    branch_no_23:;
    {
        nuitka_bool tmp_condition_result_24;
        PyObject *tmp_cmp_expr_left_20;
        PyObject *tmp_cmp_expr_right_20;
        CHECK_OBJECT(var_test1);
        tmp_cmp_expr_left_20 = var_test1;
        CHECK_OBJECT(var_rtol);
        tmp_cmp_expr_right_20 = var_rtol;
        tmp_condition_result_24 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
        if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
        assert(tmp_condition_result_24 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_24:;
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = mod_consts[4];
        {
            PyObject *old = var_istop;
            var_istop = tmp_assign_source_118;
            Py_INCREF(var_istop);
            Py_XDECREF(old);
        }

    }
    branch_no_24:;
    {
        nuitka_bool tmp_condition_result_25;
        int tmp_truth_name_5;
        CHECK_OBJECT(par_show);
        tmp_truth_name_5 = CHECK_IF_TRUE(par_show);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_25 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = Py_False;
        {
            PyObject *old = var_prnt;
            var_prnt = tmp_assign_source_119;
            Py_INCREF(var_prnt);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_cmp_expr_left_21;
        PyObject *tmp_cmp_expr_right_21;
        if (var_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 545;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_21 = var_n;
        tmp_cmp_expr_right_21 = mod_consts[77];
        tmp_condition_result_26 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
        if (tmp_condition_result_26 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
        assert(tmp_condition_result_26 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_26:;
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = Py_True;
        {
            PyObject *old = var_prnt;
            assert(old != NULL);
            var_prnt = tmp_assign_source_120;
            Py_INCREF(var_prnt);
            Py_DECREF(old);
        }

    }
    branch_no_26:;
    {
        bool tmp_condition_result_27;
        PyObject *tmp_cmp_expr_left_22;
        PyObject *tmp_cmp_expr_right_22;
        CHECK_OBJECT(var_itn);
        tmp_cmp_expr_left_22 = var_itn;
        tmp_cmp_expr_right_22 = mod_consts[78];
        tmp_condition_result_27 = RICH_COMPARE_LE_CBOOL_LONG_LONG(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
        if (tmp_condition_result_27 != false) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = Py_True;
        {
            PyObject *old = var_prnt;
            assert(old != NULL);
            var_prnt = tmp_assign_source_121;
            Py_INCREF(var_prnt);
            Py_DECREF(old);
        }

    }
    branch_no_27:;
    {
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_cmp_expr_left_23;
        PyObject *tmp_cmp_expr_right_23;
        PyObject *tmp_left_value_96;
        PyObject *tmp_right_value_96;
        CHECK_OBJECT(var_itn);
        tmp_cmp_expr_left_23 = var_itn;
        if (par_iter_lim == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 549;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_96 = par_iter_lim;
        tmp_right_value_96 = mod_consts[78];
        tmp_cmp_expr_right_23 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_96, tmp_right_value_96);
        if (tmp_cmp_expr_right_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_28 = RICH_COMPARE_GE_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
        Py_DECREF(tmp_cmp_expr_right_23);
        if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
        assert(tmp_condition_result_28 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_28:;
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = Py_True;
        {
            PyObject *old = var_prnt;
            var_prnt = tmp_assign_source_122;
            Py_INCREF(var_prnt);
            Py_XDECREF(old);
        }

    }
    branch_no_28:;
    {
        nuitka_bool tmp_condition_result_29;
        PyObject *tmp_cmp_expr_left_24;
        PyObject *tmp_cmp_expr_right_24;
        PyObject *tmp_left_value_97;
        PyObject *tmp_right_value_97;
        CHECK_OBJECT(var_test3);
        tmp_cmp_expr_left_24 = var_test3;
        tmp_left_value_97 = mod_consts[15];
        if (var_ctol == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 552;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_97 = var_ctol;
        tmp_cmp_expr_right_24 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_97, tmp_right_value_97);
        if (tmp_cmp_expr_right_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_29 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
        Py_DECREF(tmp_cmp_expr_right_24);
        if (tmp_condition_result_29 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
        assert(tmp_condition_result_29 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_29:;
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = Py_True;
        {
            PyObject *old = var_prnt;
            var_prnt = tmp_assign_source_123;
            Py_INCREF(var_prnt);
            Py_XDECREF(old);
        }

    }
    branch_no_29:;
    {
        nuitka_bool tmp_condition_result_30;
        PyObject *tmp_cmp_expr_left_25;
        PyObject *tmp_cmp_expr_right_25;
        PyObject *tmp_left_value_98;
        PyObject *tmp_right_value_98;
        CHECK_OBJECT(var_test2);
        tmp_cmp_expr_left_25 = var_test2;
        tmp_left_value_98 = mod_consts[78];
        if (par_atol == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[70]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 554;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_value_98 = par_atol;
        tmp_cmp_expr_right_25 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_98, tmp_right_value_98);
        if (tmp_cmp_expr_right_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_30 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
        Py_DECREF(tmp_cmp_expr_right_25);
        if (tmp_condition_result_30 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
        assert(tmp_condition_result_30 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_30:;
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = Py_True;
        {
            PyObject *old = var_prnt;
            var_prnt = tmp_assign_source_124;
            Py_INCREF(var_prnt);
            Py_XDECREF(old);
        }

    }
    branch_no_30:;
    {
        nuitka_bool tmp_condition_result_31;
        PyObject *tmp_cmp_expr_left_26;
        PyObject *tmp_cmp_expr_right_26;
        PyObject *tmp_left_value_99;
        PyObject *tmp_right_value_99;
        CHECK_OBJECT(var_test1);
        tmp_cmp_expr_left_26 = var_test1;
        tmp_left_value_99 = mod_consts[78];
        CHECK_OBJECT(var_rtol);
        tmp_right_value_99 = var_rtol;
        tmp_cmp_expr_right_26 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_99, tmp_right_value_99);
        if (tmp_cmp_expr_right_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_31 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_26, tmp_cmp_expr_right_26);
        Py_DECREF(tmp_cmp_expr_right_26);
        if (tmp_condition_result_31 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
        assert(tmp_condition_result_31 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_31:;
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = Py_True;
        {
            PyObject *old = var_prnt;
            var_prnt = tmp_assign_source_125;
            Py_INCREF(var_prnt);
            Py_XDECREF(old);
        }

    }
    branch_no_31:;
    {
        nuitka_bool tmp_condition_result_32;
        PyObject *tmp_cmp_expr_left_27;
        PyObject *tmp_cmp_expr_right_27;
        if (var_istop == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 558;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_27 = var_istop;
        tmp_cmp_expr_right_27 = mod_consts[0];
        tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_27, tmp_cmp_expr_right_27);
        if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
        assert(tmp_condition_result_32 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_32:;
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = Py_True;
        {
            PyObject *old = var_prnt;
            var_prnt = tmp_assign_source_126;
            Py_INCREF(var_prnt);
            Py_XDECREF(old);
        }

    }
    branch_no_32:;
    {
        nuitka_bool tmp_condition_result_33;
        int tmp_truth_name_6;
        if (var_prnt == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 561;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_6 = CHECK_IF_TRUE(var_prnt);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_33 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_left_value_100;
        PyObject *tmp_right_value_100;
        PyObject *tmp_tuple_element_9;
        tmp_left_value_100 = mod_consts[42];
        CHECK_OBJECT(var_itn);
        tmp_tuple_element_9 = var_itn;
        tmp_right_value_100 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_2;
            PyTuple_SET_ITEM0(tmp_right_value_100, 0, tmp_tuple_element_9);
            CHECK_OBJECT(var_x);
            tmp_expression_value_17 = var_x;
            tmp_subscript_value_2 = mod_consts[0];
            tmp_tuple_element_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_17, tmp_subscript_value_2, 0);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;
                type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_right_value_100, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_right_value_100);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_assign_source_127 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_100, tmp_right_value_100);
        Py_DECREF(tmp_right_value_100);
        if (tmp_assign_source_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_str1;
            var_str1 = tmp_assign_source_127;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_left_value_101;
        PyObject *tmp_right_value_101;
        PyObject *tmp_tuple_element_10;
        tmp_left_value_101 = mod_consts[43];
        if (var_r1norm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 563;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_10 = var_r1norm;
        tmp_right_value_101 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_right_value_101, 0, tmp_tuple_element_10);
        CHECK_OBJECT(var_r2norm);
        tmp_tuple_element_10 = var_r2norm;
        PyTuple_SET_ITEM0(tmp_right_value_101, 1, tmp_tuple_element_10);
        tmp_assign_source_128 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_101, tmp_right_value_101);
        Py_DECREF(tmp_right_value_101);
        if (tmp_assign_source_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_str2;
            var_str2 = tmp_assign_source_128;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_left_value_102;
        PyObject *tmp_right_value_102;
        PyObject *tmp_tuple_element_11;
        tmp_left_value_102 = mod_consts[44];
        CHECK_OBJECT(var_test1);
        tmp_tuple_element_11 = var_test1;
        tmp_right_value_102 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_right_value_102, 0, tmp_tuple_element_11);
        CHECK_OBJECT(var_test2);
        tmp_tuple_element_11 = var_test2;
        PyTuple_SET_ITEM0(tmp_right_value_102, 1, tmp_tuple_element_11);
        tmp_assign_source_129 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_102, tmp_right_value_102);
        Py_DECREF(tmp_right_value_102);
        if (tmp_assign_source_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_str3;
            var_str3 = tmp_assign_source_129;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_left_value_103;
        PyObject *tmp_right_value_103;
        PyObject *tmp_tuple_element_12;
        tmp_left_value_103 = mod_consts[82];
        if (var_anorm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 565;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_12 = var_anorm;
        tmp_right_value_103 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_right_value_103, 0, tmp_tuple_element_12);
        CHECK_OBJECT(var_acond);
        tmp_tuple_element_12 = var_acond;
        PyTuple_SET_ITEM0(tmp_right_value_103, 1, tmp_tuple_element_12);
        tmp_assign_source_130 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_103, tmp_right_value_103);
        Py_DECREF(tmp_right_value_103);
        if (tmp_assign_source_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_str4;
            var_str4 = tmp_assign_source_130;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        tmp_called_value_27 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_called_value_27 != NULL);
        CHECK_OBJECT(var_str1);
        tmp_args_element_value_32 = var_str1;
        CHECK_OBJECT(var_str2);
        tmp_args_element_value_33 = var_str2;
        CHECK_OBJECT(var_str3);
        tmp_args_element_value_34 = var_str3;
        CHECK_OBJECT(var_str4);
        tmp_args_element_value_35 = var_str4;
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 566;
        {
            PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_27, call_args);
        }

        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    branch_no_33:;
    branch_no_25:;
    {
        nuitka_bool tmp_condition_result_34;
        PyObject *tmp_cmp_expr_left_28;
        PyObject *tmp_cmp_expr_right_28;
        if (var_istop == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 568;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_28 = var_istop;
        tmp_cmp_expr_right_28 = mod_consts[0];
        tmp_condition_result_34 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_28, tmp_cmp_expr_right_28);
        if (tmp_condition_result_34 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
        assert(tmp_condition_result_34 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_34:;
    goto loop_end_1;
    branch_no_34:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 421;
        type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        nuitka_bool tmp_condition_result_35;
        int tmp_truth_name_7;
        CHECK_OBJECT(par_show);
        tmp_truth_name_7 = CHECK_IF_TRUE(par_show);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_35 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_call_result_12;
        tmp_called_value_28 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_called_value_28 != NULL);
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 574;
        tmp_call_result_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_28, mod_consts[19]);

        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_call_result_13;
        tmp_called_value_29 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_called_value_29 != NULL);
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 575;
        tmp_call_result_13 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_29, mod_consts[83]);

        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_3;
        tmp_called_value_30 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_called_value_30 != NULL);
        tmp_expression_value_18 = mod_consts[84];
        if (var_istop == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 576;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_3 = var_istop;
        tmp_args_element_value_36 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_3);
        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 576;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_36);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_call_result_15;
        tmp_called_value_31 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_called_value_31 != NULL);
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 577;
        tmp_call_result_15 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_31, mod_consts[19]);

        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_left_value_104;
        PyObject *tmp_right_value_104;
        PyObject *tmp_tuple_element_13;
        tmp_left_value_104 = mod_consts[85];
        if (var_istop == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 578;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_13 = var_istop;
        tmp_right_value_104 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_right_value_104, 0, tmp_tuple_element_13);
        if (var_r1norm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 578;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto tuple_build_exception_4;
        }

        tmp_tuple_element_13 = var_r1norm;
        PyTuple_SET_ITEM0(tmp_right_value_104, 1, tmp_tuple_element_13);
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_right_value_104);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_assign_source_131 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_104, tmp_right_value_104);
        Py_DECREF(tmp_right_value_104);
        if (tmp_assign_source_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_str1;
            var_str1 = tmp_assign_source_131;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_left_value_105;
        PyObject *tmp_right_value_105;
        PyObject *tmp_tuple_element_14;
        tmp_left_value_105 = mod_consts[86];
        if (var_anorm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 579;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_14 = var_anorm;
        tmp_right_value_105 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_right_value_105, 0, tmp_tuple_element_14);
        if (var_arnorm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 579;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto tuple_build_exception_5;
        }

        tmp_tuple_element_14 = var_arnorm;
        PyTuple_SET_ITEM0(tmp_right_value_105, 1, tmp_tuple_element_14);
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_right_value_105);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_assign_source_132 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_105, tmp_right_value_105);
        Py_DECREF(tmp_right_value_105);
        if (tmp_assign_source_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_str2;
            var_str2 = tmp_assign_source_132;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_left_value_106;
        PyObject *tmp_right_value_106;
        PyObject *tmp_tuple_element_15;
        tmp_left_value_106 = mod_consts[88];
        if (var_itn == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 580;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_15 = var_itn;
        tmp_right_value_106 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_right_value_106, 0, tmp_tuple_element_15);
        if (var_r2norm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 580;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto tuple_build_exception_6;
        }

        tmp_tuple_element_15 = var_r2norm;
        PyTuple_SET_ITEM0(tmp_right_value_106, 1, tmp_tuple_element_15);
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_right_value_106);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_assign_source_133 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_106, tmp_right_value_106);
        Py_DECREF(tmp_right_value_106);
        if (tmp_assign_source_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_str3;
            var_str3 = tmp_assign_source_133;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_left_value_107;
        PyObject *tmp_right_value_107;
        PyObject *tmp_tuple_element_16;
        tmp_left_value_107 = mod_consts[90];
        if (var_acond == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 581;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_16 = var_acond;
        tmp_right_value_107 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_right_value_107, 0, tmp_tuple_element_16);
        if (var_xnorm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 581;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto tuple_build_exception_7;
        }

        tmp_tuple_element_16 = var_xnorm;
        PyTuple_SET_ITEM0(tmp_right_value_107, 1, tmp_tuple_element_16);
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_right_value_107);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_assign_source_134 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_107, tmp_right_value_107);
        Py_DECREF(tmp_right_value_107);
        if (tmp_assign_source_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_str4;
            var_str4 = tmp_assign_source_134;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_left_value_108;
        PyObject *tmp_left_value_109;
        PyObject *tmp_right_value_108;
        PyObject *tmp_right_value_109;
        tmp_called_value_32 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_called_value_32 != NULL);
        CHECK_OBJECT(var_str1);
        tmp_left_value_109 = var_str1;
        tmp_right_value_108 = mod_consts[93];
        tmp_left_value_108 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_109, tmp_right_value_108);
        assert(!(tmp_left_value_108 == NULL));
        CHECK_OBJECT(var_str2);
        tmp_right_value_109 = var_str2;
        tmp_args_element_value_37 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_108, tmp_right_value_109);
        Py_DECREF(tmp_left_value_108);
        assert(!(tmp_args_element_value_37 == NULL));
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 582;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_37);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_left_value_110;
        PyObject *tmp_left_value_111;
        PyObject *tmp_right_value_110;
        PyObject *tmp_right_value_111;
        tmp_called_value_33 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_called_value_33 != NULL);
        CHECK_OBJECT(var_str3);
        tmp_left_value_111 = var_str3;
        tmp_right_value_110 = mod_consts[93];
        tmp_left_value_110 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_111, tmp_right_value_110);
        assert(!(tmp_left_value_110 == NULL));
        CHECK_OBJECT(var_str4);
        tmp_right_value_111 = var_str4;
        tmp_args_element_value_38 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_value_110, tmp_right_value_111);
        Py_DECREF(tmp_left_value_110);
        assert(!(tmp_args_element_value_38 == NULL));
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 583;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_38);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_call_result_18;
        tmp_called_value_34 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_called_value_34 != NULL);
        frame_57c6a9baed55e006220928cbb685bdf6->m_frame.f_lineno = 584;
        tmp_call_result_18 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_34, mod_consts[19]);

        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    branch_no_35:;
    {
        PyObject *tmp_tuple_element_17;
        if (var_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[37]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 586;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_17 = var_x;
        tmp_return_value = PyTuple_New(10);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_17);
        if (var_istop == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 586;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto tuple_build_exception_8;
        }

        tmp_tuple_element_17 = var_istop;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_17);
        if (var_itn == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 586;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto tuple_build_exception_8;
        }

        tmp_tuple_element_17 = var_itn;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_17);
        if (var_r1norm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 586;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto tuple_build_exception_8;
        }

        tmp_tuple_element_17 = var_r1norm;
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_17);
        if (var_r2norm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 586;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto tuple_build_exception_8;
        }

        tmp_tuple_element_17 = var_r2norm;
        PyTuple_SET_ITEM0(tmp_return_value, 4, tmp_tuple_element_17);
        if (var_anorm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 586;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto tuple_build_exception_8;
        }

        tmp_tuple_element_17 = var_anorm;
        PyTuple_SET_ITEM0(tmp_return_value, 5, tmp_tuple_element_17);
        if (var_acond == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 586;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto tuple_build_exception_8;
        }

        tmp_tuple_element_17 = var_acond;
        PyTuple_SET_ITEM0(tmp_return_value, 6, tmp_tuple_element_17);
        if (var_arnorm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 586;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto tuple_build_exception_8;
        }

        tmp_tuple_element_17 = var_arnorm;
        PyTuple_SET_ITEM0(tmp_return_value, 7, tmp_tuple_element_17);
        if (var_xnorm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 586;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto tuple_build_exception_8;
        }

        tmp_tuple_element_17 = var_xnorm;
        PyTuple_SET_ITEM0(tmp_return_value, 8, tmp_tuple_element_17);
        if (var_var == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 586;
            type_description_1 = "oooooooooooooNooooooooooooooooooooooooooooooNNooooooooooooooooooooooooo";
            goto tuple_build_exception_8;
        }

        tmp_tuple_element_17 = var_var;
        PyTuple_SET_ITEM0(tmp_return_value, 9, tmp_tuple_element_17);
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_57c6a9baed55e006220928cbb685bdf6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_57c6a9baed55e006220928cbb685bdf6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_57c6a9baed55e006220928cbb685bdf6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_57c6a9baed55e006220928cbb685bdf6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_57c6a9baed55e006220928cbb685bdf6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_57c6a9baed55e006220928cbb685bdf6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_57c6a9baed55e006220928cbb685bdf6,
        type_description_1,
        par_A,
        par_b,
        par_damp,
        par_atol,
        par_btol,
        par_conlim,
        par_iter_lim,
        par_show,
        par_calc_var,
        par_x0,
        var_m,
        var_n,
        var_var,
        NULL,
        var_str1,
        var_str2,
        var_str3,
        var_str4,
        var_itn,
        var_istop,
        var_ctol,
        var_anorm,
        var_acond,
        var_dampsq,
        var_ddnorm,
        var_res2,
        var_xnorm,
        var_xxnorm,
        var_z,
        var_cs2,
        var_sn2,
        var_u,
        var_bnorm,
        var_x,
        var_beta,
        var_v,
        var_alfa,
        var_w,
        var_rhobar,
        var_phibar,
        var_rnorm,
        var_r1norm,
        var_r2norm,
        var_arnorm,
        NULL,
        NULL,
        var_test1,
        var_test2,
        var_rhobar1,
        var_cs1,
        var_sn1,
        var_psi,
        var_cs,
        var_sn,
        var_rho,
        var_theta,
        var_phi,
        var_tau,
        var_t1,
        var_t2,
        var_dk,
        var_delta,
        var_gambar,
        var_rhs,
        var_zbar,
        var_gamma,
        var_res1,
        var_r1sq,
        var_test3,
        var_rtol,
        var_prnt
    );


    // Release cached frame if used for exception.
    if (frame_57c6a9baed55e006220928cbb685bdf6 == cache_frame_57c6a9baed55e006220928cbb685bdf6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_57c6a9baed55e006220928cbb685bdf6);
        cache_frame_57c6a9baed55e006220928cbb685bdf6 = NULL;
    }

    assertFrameObject(frame_57c6a9baed55e006220928cbb685bdf6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_A);
    par_A = NULL;
    Py_XDECREF(par_b);
    par_b = NULL;
    Py_XDECREF(par_iter_lim);
    par_iter_lim = NULL;
    CHECK_OBJECT(var_m);
    Py_DECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_var);
    var_var = NULL;
    Py_XDECREF(var_str1);
    var_str1 = NULL;
    Py_XDECREF(var_str2);
    var_str2 = NULL;
    Py_XDECREF(var_str3);
    var_str3 = NULL;
    Py_XDECREF(var_str4);
    var_str4 = NULL;
    Py_XDECREF(var_itn);
    var_itn = NULL;
    Py_XDECREF(var_istop);
    var_istop = NULL;
    Py_XDECREF(var_ctol);
    var_ctol = NULL;
    Py_XDECREF(var_anorm);
    var_anorm = NULL;
    Py_XDECREF(var_acond);
    var_acond = NULL;
    Py_XDECREF(var_dampsq);
    var_dampsq = NULL;
    Py_XDECREF(var_ddnorm);
    var_ddnorm = NULL;
    Py_XDECREF(var_res2);
    var_res2 = NULL;
    Py_XDECREF(var_xnorm);
    var_xnorm = NULL;
    Py_XDECREF(var_xxnorm);
    var_xxnorm = NULL;
    Py_XDECREF(var_z);
    var_z = NULL;
    Py_XDECREF(var_cs2);
    var_cs2 = NULL;
    Py_XDECREF(var_sn2);
    var_sn2 = NULL;
    Py_XDECREF(var_u);
    var_u = NULL;
    Py_XDECREF(var_bnorm);
    var_bnorm = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_beta);
    var_beta = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_alfa);
    var_alfa = NULL;
    Py_XDECREF(var_w);
    var_w = NULL;
    Py_XDECREF(var_rhobar);
    var_rhobar = NULL;
    Py_XDECREF(var_phibar);
    var_phibar = NULL;
    Py_XDECREF(var_rnorm);
    var_rnorm = NULL;
    Py_XDECREF(var_r1norm);
    var_r1norm = NULL;
    Py_XDECREF(var_r2norm);
    var_r2norm = NULL;
    Py_XDECREF(var_arnorm);
    var_arnorm = NULL;
    Py_XDECREF(var_test1);
    var_test1 = NULL;
    Py_XDECREF(var_test2);
    var_test2 = NULL;
    Py_XDECREF(var_rhobar1);
    var_rhobar1 = NULL;
    Py_XDECREF(var_cs1);
    var_cs1 = NULL;
    Py_XDECREF(var_sn1);
    var_sn1 = NULL;
    Py_XDECREF(var_psi);
    var_psi = NULL;
    Py_XDECREF(var_cs);
    var_cs = NULL;
    Py_XDECREF(var_sn);
    var_sn = NULL;
    Py_XDECREF(var_rho);
    var_rho = NULL;
    Py_XDECREF(var_theta);
    var_theta = NULL;
    Py_XDECREF(var_phi);
    var_phi = NULL;
    Py_XDECREF(var_tau);
    var_tau = NULL;
    Py_XDECREF(var_t1);
    var_t1 = NULL;
    Py_XDECREF(var_t2);
    var_t2 = NULL;
    Py_XDECREF(var_dk);
    var_dk = NULL;
    Py_XDECREF(var_delta);
    var_delta = NULL;
    Py_XDECREF(var_gambar);
    var_gambar = NULL;
    Py_XDECREF(var_rhs);
    var_rhs = NULL;
    Py_XDECREF(var_zbar);
    var_zbar = NULL;
    Py_XDECREF(var_gamma);
    var_gamma = NULL;
    Py_XDECREF(var_res1);
    var_res1 = NULL;
    Py_XDECREF(var_r1sq);
    var_r1sq = NULL;
    Py_XDECREF(var_test3);
    var_test3 = NULL;
    Py_XDECREF(var_rtol);
    var_rtol = NULL;
    Py_XDECREF(var_prnt);
    var_prnt = NULL;
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

    Py_XDECREF(par_A);
    par_A = NULL;
    Py_XDECREF(par_b);
    par_b = NULL;
    Py_XDECREF(par_iter_lim);
    par_iter_lim = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_var);
    var_var = NULL;
    Py_XDECREF(var_str1);
    var_str1 = NULL;
    Py_XDECREF(var_str2);
    var_str2 = NULL;
    Py_XDECREF(var_str3);
    var_str3 = NULL;
    Py_XDECREF(var_str4);
    var_str4 = NULL;
    Py_XDECREF(var_itn);
    var_itn = NULL;
    Py_XDECREF(var_istop);
    var_istop = NULL;
    Py_XDECREF(var_ctol);
    var_ctol = NULL;
    Py_XDECREF(var_anorm);
    var_anorm = NULL;
    Py_XDECREF(var_acond);
    var_acond = NULL;
    Py_XDECREF(var_dampsq);
    var_dampsq = NULL;
    Py_XDECREF(var_ddnorm);
    var_ddnorm = NULL;
    Py_XDECREF(var_res2);
    var_res2 = NULL;
    Py_XDECREF(var_xnorm);
    var_xnorm = NULL;
    Py_XDECREF(var_xxnorm);
    var_xxnorm = NULL;
    Py_XDECREF(var_z);
    var_z = NULL;
    Py_XDECREF(var_cs2);
    var_cs2 = NULL;
    Py_XDECREF(var_sn2);
    var_sn2 = NULL;
    Py_XDECREF(var_u);
    var_u = NULL;
    Py_XDECREF(var_bnorm);
    var_bnorm = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_beta);
    var_beta = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_alfa);
    var_alfa = NULL;
    Py_XDECREF(var_w);
    var_w = NULL;
    Py_XDECREF(var_rhobar);
    var_rhobar = NULL;
    Py_XDECREF(var_phibar);
    var_phibar = NULL;
    Py_XDECREF(var_rnorm);
    var_rnorm = NULL;
    Py_XDECREF(var_r1norm);
    var_r1norm = NULL;
    Py_XDECREF(var_r2norm);
    var_r2norm = NULL;
    Py_XDECREF(var_arnorm);
    var_arnorm = NULL;
    Py_XDECREF(var_test1);
    var_test1 = NULL;
    Py_XDECREF(var_test2);
    var_test2 = NULL;
    Py_XDECREF(var_rhobar1);
    var_rhobar1 = NULL;
    Py_XDECREF(var_cs1);
    var_cs1 = NULL;
    Py_XDECREF(var_sn1);
    var_sn1 = NULL;
    Py_XDECREF(var_psi);
    var_psi = NULL;
    Py_XDECREF(var_cs);
    var_cs = NULL;
    Py_XDECREF(var_sn);
    var_sn = NULL;
    Py_XDECREF(var_rho);
    var_rho = NULL;
    Py_XDECREF(var_theta);
    var_theta = NULL;
    Py_XDECREF(var_phi);
    var_phi = NULL;
    Py_XDECREF(var_tau);
    var_tau = NULL;
    Py_XDECREF(var_t1);
    var_t1 = NULL;
    Py_XDECREF(var_t2);
    var_t2 = NULL;
    Py_XDECREF(var_dk);
    var_dk = NULL;
    Py_XDECREF(var_delta);
    var_delta = NULL;
    Py_XDECREF(var_gambar);
    var_gambar = NULL;
    Py_XDECREF(var_rhs);
    var_rhs = NULL;
    Py_XDECREF(var_zbar);
    var_zbar = NULL;
    Py_XDECREF(var_gamma);
    var_gamma = NULL;
    Py_XDECREF(var_res1);
    var_res1 = NULL;
    Py_XDECREF(var_r1sq);
    var_r1sq = NULL;
    Py_XDECREF(var_test3);
    var_test3 = NULL;
    Py_XDECREF(var_rtol);
    var_rtol = NULL;
    Py_XDECREF(var_prnt);
    var_prnt = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_damp);
    Py_DECREF(par_damp);
    CHECK_OBJECT(par_atol);
    Py_DECREF(par_atol);
    CHECK_OBJECT(par_btol);
    Py_DECREF(par_btol);
    CHECK_OBJECT(par_conlim);
    Py_DECREF(par_conlim);
    CHECK_OBJECT(par_show);
    Py_DECREF(par_show);
    CHECK_OBJECT(par_calc_var);
    Py_DECREF(par_calc_var);
    CHECK_OBJECT(par_x0);
    Py_DECREF(par_x0);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_damp);
    Py_DECREF(par_damp);
    CHECK_OBJECT(par_atol);
    Py_DECREF(par_atol);
    CHECK_OBJECT(par_btol);
    Py_DECREF(par_btol);
    CHECK_OBJECT(par_conlim);
    Py_DECREF(par_conlim);
    CHECK_OBJECT(par_show);
    Py_DECREF(par_show);
    CHECK_OBJECT(par_calc_var);
    Py_DECREF(par_calc_var);
    CHECK_OBJECT(par_x0);
    Py_DECREF(par_x0);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_isolve$lsqr$$$function__1__sym_ortho() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_isolve$lsqr$$$function__1__sym_ortho,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ea3cf57ea979449e36b2d1fa780a8bd8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_isolve$lsqr,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$sparse$linalg$_isolve$lsqr$$$function__2_lsqr(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$sparse$linalg$_isolve$lsqr$$$function__2_lsqr,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_57c6a9baed55e006220928cbb685bdf6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$sparse$linalg$_isolve$lsqr,
        mod_consts[94],
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

function_impl_code functable_scipy$sparse$linalg$_isolve$lsqr[] = {
    impl_scipy$sparse$linalg$_isolve$lsqr$$$function__1__sym_ortho,
    impl_scipy$sparse$linalg$_isolve$lsqr$$$function__2_lsqr,
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

    function_impl_code *current = functable_scipy$sparse$linalg$_isolve$lsqr;
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

    if (offset > sizeof(functable_scipy$sparse$linalg$_isolve$lsqr) || offset < 0) {
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
        functable_scipy$sparse$linalg$_isolve$lsqr[offset],
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
        module_scipy$sparse$linalg$_isolve$lsqr,
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
PyObject *modulecode_scipy$sparse$linalg$_isolve$lsqr(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scipy.sparse.linalg._isolve.lsqr");

    // Store the module for future use.
    module_scipy$sparse$linalg$_isolve$lsqr = module;

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
        PRINT_STRING("scipy.sparse.linalg._isolve.lsqr: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.sparse.linalg._isolve.lsqr: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.sparse.linalg._isolve.lsqr: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initscipy$sparse$linalg$_isolve$lsqr\n");

    moduledict_scipy$sparse$linalg$_isolve$lsqr = MODULE_DICT(module_scipy$sparse$linalg$_isolve$lsqr);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$sparse$linalg$_isolve$lsqr,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$sparse$linalg$_isolve$lsqr,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[22]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$sparse$linalg$_isolve$lsqr,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$linalg$_isolve$lsqr,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$sparse$linalg$_isolve$lsqr,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$sparse$linalg$_isolve$lsqr);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_scipy$sparse$linalg$_isolve$lsqr);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_429bb7d11a0513b6b48f10598efc0734;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[95];
        UPDATE_STRING_DICT0(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_429bb7d11a0513b6b48f10598efc0734 = MAKE_MODULE_FRAME(codeobj_429bb7d11a0513b6b48f10598efc0734, module_scipy$sparse$linalg$_isolve$lsqr);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_429bb7d11a0513b6b48f10598efc0734);
    assert(Py_REFCNT(frame_429bb7d11a0513b6b48f10598efc0734) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[99], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[100], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = LIST_COPY(mod_consts[102]);
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[104];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_scipy$sparse$linalg$_isolve$lsqr;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[0];
        frame_429bb7d11a0513b6b48f10598efc0734->m_frame.f_lineno = 54;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[105];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_scipy$sparse$linalg$_isolve$lsqr;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[106];
        tmp_level_value_2 = mod_consts[0];
        frame_429bb7d11a0513b6b48f10598efc0734->m_frame.f_lineno = 55;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$sparse$linalg$_isolve$lsqr,
                mod_consts[3],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_1);
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[107];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_scipy$sparse$linalg$_isolve$lsqr;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[108];
        tmp_level_value_3 = mod_consts[0];
        frame_429bb7d11a0513b6b48f10598efc0734->m_frame.f_lineno = 56;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_scipy$sparse$linalg$_isolve$lsqr,
                mod_consts[9],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[9]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[109]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[110]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        frame_429bb7d11a0513b6b48f10598efc0734->m_frame.f_lineno = 58;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[68]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_8);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_429bb7d11a0513b6b48f10598efc0734);
#endif
    popFrameStack();

    assertFrameObject(frame_429bb7d11a0513b6b48f10598efc0734);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_429bb7d11a0513b6b48f10598efc0734);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_429bb7d11a0513b6b48f10598efc0734, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_429bb7d11a0513b6b48f10598efc0734->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_429bb7d11a0513b6b48f10598efc0734, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_scipy$sparse$linalg$_isolve$lsqr$$$function__1__sym_ortho();

        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[111];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_10 = MAKE_FUNCTION_scipy$sparse$linalg$_isolve$lsqr$$$function__2_lsqr(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_10);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scipy.sparse.linalg._isolve.lsqr", false);

    Py_INCREF(module_scipy$sparse$linalg$_isolve$lsqr);
    return module_scipy$sparse$linalg$_isolve$lsqr;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$sparse$linalg$_isolve$lsqr, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("scipy$sparse$linalg$_isolve$lsqr", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
