/* Generated code for Python module 'scipy.constants._constants'
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

/* The "module_scipy$constants$_constants" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$constants$_constants;
PyDictObject *moduledict_scipy$constants$_constants;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[288];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[288];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("scipy.constants._constants"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 288; i++) {
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
void checkModuleConstants_scipy$constants$_constants(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 288; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b172aab359d88a1c60add353ac2cbf94;
static PyCodeObject *codeobj_15b4b30314e15d71caa42af9c3aca426;
static PyCodeObject *codeobj_dbc4a2a8a4f53241c6811e3854360cde;
static PyCodeObject *codeobj_60ac497eb439ab4c4c262c573e906de5;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[282]); CHECK_OBJECT(module_filename_obj);
    codeobj_b172aab359d88a1c60add353ac2cbf94 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[283], NULL, NULL, 0, 0, 0);
    codeobj_15b4b30314e15d71caa42af9c3aca426 = MAKE_CODEOBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[279], mod_consts[284], NULL, 3, 0, 0);
    codeobj_dbc4a2a8a4f53241c6811e3854360cde = MAKE_CODEOBJECT(module_filename_obj, 290, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[280], mod_consts[285], NULL, 1, 0, 0);
    codeobj_60ac497eb439ab4c4c262c573e906de5 = MAKE_CODEOBJECT(module_filename_obj, 319, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[281], mod_consts[286], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$constants$_constants$$$function__1_convert_temperature();


static PyObject *MAKE_FUNCTION_scipy$constants$_constants$$$function__2_lambda2nu();


static PyObject *MAKE_FUNCTION_scipy$constants$_constants$$$function__3_nu2lambda();


// The module function definitions.
static PyObject *impl_scipy$constants$_constants$$$function__1_convert_temperature(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_val = python_pars[0];
    PyObject *par_old_scale = python_pars[1];
    PyObject *par_new_scale = python_pars[2];
    PyObject *var_tempo = NULL;
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_15b4b30314e15d71caa42af9c3aca426;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_15b4b30314e15d71caa42af9c3aca426 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_15b4b30314e15d71caa42af9c3aca426)) {
        Py_XDECREF(cache_frame_15b4b30314e15d71caa42af9c3aca426);

#if _DEBUG_REFCOUNTS
        if (cache_frame_15b4b30314e15d71caa42af9c3aca426 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_15b4b30314e15d71caa42af9c3aca426 = MAKE_FUNCTION_FRAME(codeobj_15b4b30314e15d71caa42af9c3aca426, module_scipy$constants$_constants, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_15b4b30314e15d71caa42af9c3aca426->m_type_description == NULL);
    frame_15b4b30314e15d71caa42af9c3aca426 = cache_frame_15b4b30314e15d71caa42af9c3aca426;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_15b4b30314e15d71caa42af9c3aca426);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_15b4b30314e15d71caa42af9c3aca426) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_old_scale);
        tmp_expression_value_1 = par_old_scale;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_15b4b30314e15d71caa42af9c3aca426->m_frame.f_lineno = 258;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LIST_COPY(mod_consts[1]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_right_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_val);
        tmp_args_element_value_1 = par_val;
        frame_15b4b30314e15d71caa42af9c3aca426->m_frame.f_lineno = 259;
        tmp_left_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[3], tmp_args_element_value_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_right_value_1 == NULL)) {
            tmp_right_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 259;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_left_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tempo == NULL);
        var_tempo = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_old_scale);
        tmp_expression_value_2 = par_old_scale;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_15b4b30314e15d71caa42af9c3aca426->m_frame.f_lineno = 260;
        tmp_cmp_expr_left_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LIST_COPY(mod_consts[5]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_val);
        tmp_args_element_value_2 = par_val;
        frame_15b4b30314e15d71caa42af9c3aca426->m_frame.f_lineno = 261;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[3], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tempo == NULL);
        var_tempo = tmp_assign_source_2;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_old_scale);
        tmp_expression_value_3 = par_old_scale;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[0]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_15b4b30314e15d71caa42af9c3aca426->m_frame.f_lineno = 262;
        tmp_cmp_expr_left_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = LIST_COPY(mod_consts[6]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_value_2;
        PyObject *tmp_left_value_3;
        PyObject *tmp_left_value_4;
        PyObject *tmp_left_value_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_right_value_2;
        PyObject *tmp_right_value_3;
        PyObject *tmp_right_value_4;
        PyObject *tmp_right_value_5;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_val);
        tmp_args_element_value_3 = par_val;
        frame_15b4b30314e15d71caa42af9c3aca426->m_frame.f_lineno = 263;
        tmp_left_value_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[3], tmp_args_element_value_3);
        if (tmp_left_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_2 = mod_consts[7];
        tmp_left_value_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_5, tmp_right_value_2);
        Py_DECREF(tmp_left_value_5);
        if (tmp_left_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_3 = mod_consts[8];
        tmp_left_value_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_4, tmp_right_value_3);
        Py_DECREF(tmp_left_value_4);
        if (tmp_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_4 = mod_consts[9];
        tmp_left_value_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_3, tmp_right_value_4);
        Py_DECREF(tmp_left_value_3);
        if (tmp_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_right_value_5 == NULL)) {
            tmp_right_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_right_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_2);

            exception_lineno = 263;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_2, tmp_right_value_5);
        Py_DECREF(tmp_left_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tempo == NULL);
        var_tempo = tmp_assign_source_3;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_old_scale);
        tmp_expression_value_4 = par_old_scale;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[0]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_15b4b30314e15d71caa42af9c3aca426->m_frame.f_lineno = 264;
        tmp_cmp_expr_left_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = LIST_COPY(mod_consts[10]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_value_6;
        PyObject *tmp_left_value_7;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_right_value_6;
        PyObject *tmp_right_value_7;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_val);
        tmp_args_element_value_4 = par_val;
        frame_15b4b30314e15d71caa42af9c3aca426->m_frame.f_lineno = 265;
        tmp_left_value_7 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[3], tmp_args_element_value_4);
        if (tmp_left_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_6 = mod_consts[8];
        tmp_left_value_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_7, tmp_right_value_6);
        Py_DECREF(tmp_left_value_7);
        if (tmp_left_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_7 = mod_consts[9];
        tmp_assign_source_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_6, tmp_right_value_7);
        Py_DECREF(tmp_left_value_6);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tempo == NULL);
        var_tempo = tmp_assign_source_4;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_left_value_8;
        PyObject *tmp_right_value_8;
        tmp_left_value_8 = mod_consts[11];
        CHECK_OBJECT(par_old_scale);
        tmp_right_value_8 = par_old_scale;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_value_8, tmp_right_value_8);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_15b4b30314e15d71caa42af9c3aca426->m_frame.f_lineno = 267;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 267;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_new_scale);
        tmp_expression_value_5 = par_new_scale;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[0]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_15b4b30314e15d71caa42af9c3aca426->m_frame.f_lineno = 271;
        tmp_cmp_expr_left_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = LIST_COPY(mod_consts[1]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_value_9;
        PyObject *tmp_right_value_9;
        if (var_tempo == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 272;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_9 = var_tempo;
        tmp_right_value_9 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_right_value_9 == NULL)) {
            tmp_right_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_right_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_9, tmp_right_value_9);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_5;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_new_scale);
        tmp_expression_value_6 = par_new_scale;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[0]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_15b4b30314e15d71caa42af9c3aca426->m_frame.f_lineno = 273;
        tmp_cmp_expr_left_6 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = LIST_COPY(mod_consts[5]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        Py_DECREF(tmp_cmp_expr_right_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_6;
        if (var_tempo == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 274;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_6 = var_tempo;
        assert(var_res == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_res = tmp_assign_source_6;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_new_scale);
        tmp_expression_value_7 = par_new_scale;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[0]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_15b4b30314e15d71caa42af9c3aca426->m_frame.f_lineno = 275;
        tmp_cmp_expr_left_7 = CALL_FUNCTION_NO_ARGS(tmp_called_value_7);
        Py_DECREF(tmp_called_value_7);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = LIST_COPY(mod_consts[6]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        Py_DECREF(tmp_cmp_expr_right_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_value_10;
        PyObject *tmp_left_value_11;
        PyObject *tmp_left_value_12;
        PyObject *tmp_left_value_13;
        PyObject *tmp_right_value_10;
        PyObject *tmp_right_value_11;
        PyObject *tmp_right_value_12;
        PyObject *tmp_right_value_13;
        if (var_tempo == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 276;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_13 = var_tempo;
        tmp_right_value_10 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_right_value_10 == NULL)) {
            tmp_right_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_right_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_12 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_13, tmp_right_value_10);
        if (tmp_left_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_11 = mod_consts[9];
        tmp_left_value_11 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_12, tmp_right_value_11);
        Py_DECREF(tmp_left_value_12);
        if (tmp_left_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_12 = mod_consts[8];
        tmp_left_value_10 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_11, tmp_right_value_12);
        Py_DECREF(tmp_left_value_11);
        if (tmp_left_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_13 = mod_consts[7];
        tmp_assign_source_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_10, tmp_right_value_13);
        Py_DECREF(tmp_left_value_10);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_7;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_new_scale);
        tmp_expression_value_8 = par_new_scale;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[0]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_15b4b30314e15d71caa42af9c3aca426->m_frame.f_lineno = 277;
        tmp_cmp_expr_left_8 = CALL_FUNCTION_NO_ARGS(tmp_called_value_8);
        Py_DECREF(tmp_called_value_8);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_8 = LIST_COPY(mod_consts[10]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        Py_DECREF(tmp_cmp_expr_right_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_value_14;
        PyObject *tmp_left_value_15;
        PyObject *tmp_right_value_14;
        PyObject *tmp_right_value_15;
        if (var_tempo == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 278;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_value_15 = var_tempo;
        tmp_right_value_14 = mod_consts[9];
        tmp_left_value_14 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_left_value_15, tmp_right_value_14);
        if (tmp_left_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_15 = mod_consts[8];
        tmp_assign_source_8 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_14, tmp_right_value_15);
        Py_DECREF(tmp_left_value_14);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_8;
    }
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_left_value_16;
        PyObject *tmp_right_value_16;
        tmp_left_value_16 = mod_consts[13];
        CHECK_OBJECT(par_new_scale);
        tmp_right_value_16 = par_new_scale;
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_value_16, tmp_right_value_16);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_15b4b30314e15d71caa42af9c3aca426->m_frame.f_lineno = 280;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 280;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_end_8:;
    branch_end_7:;
    branch_end_6:;
    branch_end_5:;
    if (var_res == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 284;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_res;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_15b4b30314e15d71caa42af9c3aca426);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_15b4b30314e15d71caa42af9c3aca426);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_15b4b30314e15d71caa42af9c3aca426);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_15b4b30314e15d71caa42af9c3aca426, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_15b4b30314e15d71caa42af9c3aca426->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_15b4b30314e15d71caa42af9c3aca426, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_15b4b30314e15d71caa42af9c3aca426,
        type_description_1,
        par_val,
        par_old_scale,
        par_new_scale,
        var_tempo,
        var_res
    );


    // Release cached frame if used for exception.
    if (frame_15b4b30314e15d71caa42af9c3aca426 == cache_frame_15b4b30314e15d71caa42af9c3aca426) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_15b4b30314e15d71caa42af9c3aca426);
        cache_frame_15b4b30314e15d71caa42af9c3aca426 = NULL;
    }

    assertFrameObject(frame_15b4b30314e15d71caa42af9c3aca426);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_tempo);
    var_tempo = NULL;
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

    Py_XDECREF(var_tempo);
    var_tempo = NULL;
    Py_XDECREF(var_res);
    var_res = NULL;
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
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);
    CHECK_OBJECT(par_old_scale);
    Py_DECREF(par_old_scale);
    CHECK_OBJECT(par_new_scale);
    Py_DECREF(par_new_scale);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);
    CHECK_OBJECT(par_old_scale);
    Py_DECREF(par_old_scale);
    CHECK_OBJECT(par_new_scale);
    Py_DECREF(par_new_scale);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$constants$_constants$$$function__2_lambda2nu(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_lambda_ = python_pars[0];
    struct Nuitka_FrameObject *frame_dbc4a2a8a4f53241c6811e3854360cde;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dbc4a2a8a4f53241c6811e3854360cde = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dbc4a2a8a4f53241c6811e3854360cde)) {
        Py_XDECREF(cache_frame_dbc4a2a8a4f53241c6811e3854360cde);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dbc4a2a8a4f53241c6811e3854360cde == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dbc4a2a8a4f53241c6811e3854360cde = MAKE_FUNCTION_FRAME(codeobj_dbc4a2a8a4f53241c6811e3854360cde, module_scipy$constants$_constants, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_dbc4a2a8a4f53241c6811e3854360cde->m_type_description == NULL);
    frame_dbc4a2a8a4f53241c6811e3854360cde = cache_frame_dbc4a2a8a4f53241c6811e3854360cde;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_dbc4a2a8a4f53241c6811e3854360cde);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_dbc4a2a8a4f53241c6811e3854360cde) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_left_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_left_value_1 == NULL)) {
            tmp_left_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_lambda_);
        tmp_args_element_value_1 = par_lambda_;
        frame_dbc4a2a8a4f53241c6811e3854360cde->m_frame.f_lineno = 316;
        tmp_right_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[3], tmp_args_element_value_1);
        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dbc4a2a8a4f53241c6811e3854360cde);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_dbc4a2a8a4f53241c6811e3854360cde);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dbc4a2a8a4f53241c6811e3854360cde);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dbc4a2a8a4f53241c6811e3854360cde, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dbc4a2a8a4f53241c6811e3854360cde->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dbc4a2a8a4f53241c6811e3854360cde, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dbc4a2a8a4f53241c6811e3854360cde,
        type_description_1,
        par_lambda_
    );


    // Release cached frame if used for exception.
    if (frame_dbc4a2a8a4f53241c6811e3854360cde == cache_frame_dbc4a2a8a4f53241c6811e3854360cde) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_dbc4a2a8a4f53241c6811e3854360cde);
        cache_frame_dbc4a2a8a4f53241c6811e3854360cde = NULL;
    }

    assertFrameObject(frame_dbc4a2a8a4f53241c6811e3854360cde);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_lambda_);
    Py_DECREF(par_lambda_);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_lambda_);
    Py_DECREF(par_lambda_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$constants$_constants$$$function__3_nu2lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_nu = python_pars[0];
    struct Nuitka_FrameObject *frame_60ac497eb439ab4c4c262c573e906de5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_60ac497eb439ab4c4c262c573e906de5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_60ac497eb439ab4c4c262c573e906de5)) {
        Py_XDECREF(cache_frame_60ac497eb439ab4c4c262c573e906de5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_60ac497eb439ab4c4c262c573e906de5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_60ac497eb439ab4c4c262c573e906de5 = MAKE_FUNCTION_FRAME(codeobj_60ac497eb439ab4c4c262c573e906de5, module_scipy$constants$_constants, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_60ac497eb439ab4c4c262c573e906de5->m_type_description == NULL);
    frame_60ac497eb439ab4c4c262c573e906de5 = cache_frame_60ac497eb439ab4c4c262c573e906de5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_60ac497eb439ab4c4c262c573e906de5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_60ac497eb439ab4c4c262c573e906de5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_left_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_left_value_1 == NULL)) {
            tmp_left_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_nu);
        tmp_args_element_value_1 = par_nu;
        frame_60ac497eb439ab4c4c262c573e906de5->m_frame.f_lineno = 345;
        tmp_right_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[3], tmp_args_element_value_1);
        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_60ac497eb439ab4c4c262c573e906de5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_60ac497eb439ab4c4c262c573e906de5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_60ac497eb439ab4c4c262c573e906de5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_60ac497eb439ab4c4c262c573e906de5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_60ac497eb439ab4c4c262c573e906de5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_60ac497eb439ab4c4c262c573e906de5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_60ac497eb439ab4c4c262c573e906de5,
        type_description_1,
        par_nu
    );


    // Release cached frame if used for exception.
    if (frame_60ac497eb439ab4c4c262c573e906de5 == cache_frame_60ac497eb439ab4c4c262c573e906de5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_60ac497eb439ab4c4c262c573e906de5);
        cache_frame_60ac497eb439ab4c4c262c573e906de5 = NULL;
    }

    assertFrameObject(frame_60ac497eb439ab4c4c262c573e906de5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_nu);
    Py_DECREF(par_nu);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_nu);
    Py_DECREF(par_nu);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_scipy$constants$_constants$$$function__1_convert_temperature() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$constants$_constants$$$function__1_convert_temperature,
        mod_consts[279],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_15b4b30314e15d71caa42af9c3aca426,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$constants$_constants,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$constants$_constants$$$function__2_lambda2nu() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$constants$_constants$$$function__2_lambda2nu,
        mod_consts[280],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dbc4a2a8a4f53241c6811e3854360cde,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$constants$_constants,
        mod_consts[17],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$constants$_constants$$$function__3_nu2lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$constants$_constants$$$function__3_nu2lambda,
        mod_consts[281],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_60ac497eb439ab4c4c262c573e906de5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$constants$_constants,
        mod_consts[18],
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

function_impl_code functable_scipy$constants$_constants[] = {
    impl_scipy$constants$_constants$$$function__1_convert_temperature,
    impl_scipy$constants$_constants$$$function__2_lambda2nu,
    impl_scipy$constants$_constants$$$function__3_nu2lambda,
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

    function_impl_code *current = functable_scipy$constants$_constants;
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

    if (offset > sizeof(functable_scipy$constants$_constants) || offset < 0) {
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
        functable_scipy$constants$_constants[offset],
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
        module_scipy$constants$_constants,
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
PyObject *modulecode_scipy$constants$_constants(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scipy.constants._constants");

    // Store the module for future use.
    module_scipy$constants$_constants = module;

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
        PRINT_STRING("scipy.constants._constants: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.constants._constants: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.constants._constants: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initscipy$constants$_constants\n");

    moduledict_scipy$constants$_constants = MODULE_DICT(module_scipy$constants$_constants);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$constants$_constants,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$constants$_constants,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[287]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$constants$_constants,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$constants$_constants,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$constants$_constants,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$constants$_constants);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_scipy$constants$_constants);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_assign_unpack_10__assign_source = NULL;
    PyObject *tmp_assign_unpack_11__assign_source = NULL;
    PyObject *tmp_assign_unpack_12__assign_source = NULL;
    PyObject *tmp_assign_unpack_13__assign_source = NULL;
    PyObject *tmp_assign_unpack_14__assign_source = NULL;
    PyObject *tmp_assign_unpack_15__assign_source = NULL;
    PyObject *tmp_assign_unpack_16__assign_source = NULL;
    PyObject *tmp_assign_unpack_17__assign_source = NULL;
    PyObject *tmp_assign_unpack_18__assign_source = NULL;
    PyObject *tmp_assign_unpack_19__assign_source = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_20__assign_source = NULL;
    PyObject *tmp_assign_unpack_22__assign_source = NULL;
    PyObject *tmp_assign_unpack_23__assign_source = NULL;
    PyObject *tmp_assign_unpack_25__assign_source = NULL;
    PyObject *tmp_assign_unpack_26__assign_source = NULL;
    PyObject *tmp_assign_unpack_27__assign_source = NULL;
    PyObject *tmp_assign_unpack_29__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
    PyObject *tmp_assign_unpack_31__assign_source = NULL;
    PyObject *tmp_assign_unpack_32__assign_source = NULL;
    PyObject *tmp_assign_unpack_34__assign_source = NULL;
    PyObject *tmp_assign_unpack_35__assign_source = NULL;
    PyObject *tmp_assign_unpack_3__assign_source = NULL;
    PyObject *tmp_assign_unpack_4__assign_source = NULL;
    PyObject *tmp_assign_unpack_5__assign_source = NULL;
    PyObject *tmp_assign_unpack_6__assign_source = NULL;
    PyObject *tmp_assign_unpack_7__assign_source = NULL;
    PyObject *tmp_assign_unpack_8__assign_source = NULL;
    PyObject *tmp_assign_unpack_9__assign_source = NULL;
    struct Nuitka_FrameObject *frame_b172aab359d88a1c60add353ac2cbf94;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_b172aab359d88a1c60add353ac2cbf94 = MAKE_MODULE_FRAME(codeobj_b172aab359d88a1c60add353ac2cbf94, module_scipy$constants$_constants);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_b172aab359d88a1c60add353ac2cbf94);
    assert(Py_REFCNT(frame_b172aab359d88a1c60add353ac2cbf94) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[23], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[24], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[26];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_scipy$constants$_constants;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[27];
        frame_b172aab359d88a1c60add353ac2cbf94->m_frame.f_lineno = 18;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[29];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_scipy$constants$_constants;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[30];
        tmp_level_value_2 = mod_consts[31];
        frame_b172aab359d88a1c60add353ac2cbf94->m_frame.f_lineno = 19;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$constants$_constants,
                mod_consts[32],
                mod_consts[27]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[32]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[34];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_scipy$constants$_constants;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[27];
        frame_b172aab359d88a1c60add353ac2cbf94->m_frame.f_lineno = 20;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = LIST_COPY(mod_consts[35]);
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[37]);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_value_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_right_value_2;
        tmp_left_value_2 = mod_consts[31];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        frame_b172aab359d88a1c60add353ac2cbf94->m_frame.f_lineno = 63;
        tmp_right_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[38],
            PyTuple_GET_ITEM(mod_consts[39], 0)
        );

        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_left_value_1 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_left_value_2, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_right_value_2 = mod_consts[40];
        tmp_assign_source_9 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_1, tmp_right_value_2);
        Py_DECREF(tmp_left_value_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_10 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_11 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_11);
    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[43];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[47];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[61];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[65];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[71];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[81];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[87];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[89];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[91];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[93];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[95];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[97];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        frame_b172aab359d88a1c60add353ac2cbf94->m_frame.f_lineno = 98;
        tmp_assign_source_40 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[99]);

        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_2__assign_source == NULL);
        tmp_assign_unpack_2__assign_source = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assign_source_41 = tmp_assign_unpack_2__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assign_source_42 = tmp_assign_unpack_2__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_42);
    }
    CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
    Py_DECREF(tmp_assign_unpack_2__assign_source);
    tmp_assign_unpack_2__assign_source = NULL;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        frame_b172aab359d88a1c60add353ac2cbf94->m_frame.f_lineno = 99;
        tmp_assign_source_43 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[101]);

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        frame_b172aab359d88a1c60add353ac2cbf94->m_frame.f_lineno = 100;
        tmp_assign_source_44 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[103]);

        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        frame_b172aab359d88a1c60add353ac2cbf94->m_frame.f_lineno = 101;
        tmp_assign_source_45 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[105]);

        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_3__assign_source == NULL);
        tmp_assign_unpack_3__assign_source = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
        tmp_assign_source_46 = tmp_assign_unpack_3__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
        tmp_assign_source_47 = tmp_assign_unpack_3__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_47);
    }
    CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
    Py_DECREF(tmp_assign_unpack_3__assign_source);
    tmp_assign_unpack_3__assign_source = NULL;
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_3;
        PyObject *tmp_left_value_4;
        PyObject *tmp_right_value_4;
        tmp_left_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_left_value_3 == NULL)) {
            tmp_left_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_left_value_4 = mod_consts[40];
        tmp_right_value_4 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_right_value_4 == NULL)) {
            tmp_right_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_right_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_right_value_3 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_4, tmp_right_value_4);
        if (tmp_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_48 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_3, tmp_right_value_3);
        Py_DECREF(tmp_right_value_3);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        frame_b172aab359d88a1c60add353ac2cbf94->m_frame.f_lineno = 103;
        tmp_assign_source_49 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[109]);

        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_4__assign_source == NULL);
        tmp_assign_unpack_4__assign_source = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        CHECK_OBJECT(tmp_assign_unpack_4__assign_source);
        tmp_assign_source_50 = tmp_assign_unpack_4__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        CHECK_OBJECT(tmp_assign_unpack_4__assign_source);
        tmp_assign_source_51 = tmp_assign_unpack_4__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_51);
    }
    CHECK_OBJECT(tmp_assign_unpack_4__assign_source);
    Py_DECREF(tmp_assign_unpack_4__assign_source);
    tmp_assign_unpack_4__assign_source = NULL;
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        frame_b172aab359d88a1c60add353ac2cbf94->m_frame.f_lineno = 104;
        tmp_assign_source_52 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[112]);

        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        frame_b172aab359d88a1c60add353ac2cbf94->m_frame.f_lineno = 105;
        tmp_assign_source_53 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_7, mod_consts[114]);

        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_5__assign_source == NULL);
        tmp_assign_unpack_5__assign_source = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT(tmp_assign_unpack_5__assign_source);
        tmp_assign_source_54 = tmp_assign_unpack_5__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT(tmp_assign_unpack_5__assign_source);
        tmp_assign_source_55 = tmp_assign_unpack_5__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_55);
    }
    CHECK_OBJECT(tmp_assign_unpack_5__assign_source);
    Py_DECREF(tmp_assign_unpack_5__assign_source);
    tmp_assign_unpack_5__assign_source = NULL;
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        frame_b172aab359d88a1c60add353ac2cbf94->m_frame.f_lineno = 106;
        tmp_assign_source_56 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_8, mod_consts[117]);

        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_6__assign_source == NULL);
        tmp_assign_unpack_6__assign_source = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT(tmp_assign_unpack_6__assign_source);
        tmp_assign_source_57 = tmp_assign_unpack_6__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        CHECK_OBJECT(tmp_assign_unpack_6__assign_source);
        tmp_assign_source_58 = tmp_assign_unpack_6__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_58);
    }
    CHECK_OBJECT(tmp_assign_unpack_6__assign_source);
    Py_DECREF(tmp_assign_unpack_6__assign_source);
    tmp_assign_unpack_6__assign_source = NULL;
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        frame_b172aab359d88a1c60add353ac2cbf94->m_frame.f_lineno = 107;
        tmp_assign_source_59 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[120]);

        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_7__assign_source == NULL);
        tmp_assign_unpack_7__assign_source = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        CHECK_OBJECT(tmp_assign_unpack_7__assign_source);
        tmp_assign_source_60 = tmp_assign_unpack_7__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        CHECK_OBJECT(tmp_assign_unpack_7__assign_source);
        tmp_assign_source_61 = tmp_assign_unpack_7__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_61);
    }
    CHECK_OBJECT(tmp_assign_unpack_7__assign_source);
    Py_DECREF(tmp_assign_unpack_7__assign_source);
    tmp_assign_unpack_7__assign_source = NULL;
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_value_10;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        frame_b172aab359d88a1c60add353ac2cbf94->m_frame.f_lineno = 108;
        tmp_assign_source_62 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_10, mod_consts[123]);

        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_8__assign_source == NULL);
        tmp_assign_unpack_8__assign_source = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        CHECK_OBJECT(tmp_assign_unpack_8__assign_source);
        tmp_assign_source_63 = tmp_assign_unpack_8__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        CHECK_OBJECT(tmp_assign_unpack_8__assign_source);
        tmp_assign_source_64 = tmp_assign_unpack_8__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_64);
    }
    CHECK_OBJECT(tmp_assign_unpack_8__assign_source);
    Py_DECREF(tmp_assign_unpack_8__assign_source);
    tmp_assign_unpack_8__assign_source = NULL;
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        frame_b172aab359d88a1c60add353ac2cbf94->m_frame.f_lineno = 109;
        tmp_assign_source_65 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_11, mod_consts[126]);

        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_9__assign_source == NULL);
        tmp_assign_unpack_9__assign_source = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        CHECK_OBJECT(tmp_assign_unpack_9__assign_source);
        tmp_assign_source_66 = tmp_assign_unpack_9__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        CHECK_OBJECT(tmp_assign_unpack_9__assign_source);
        tmp_assign_source_67 = tmp_assign_unpack_9__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_67);
    }
    CHECK_OBJECT(tmp_assign_unpack_9__assign_source);
    Py_DECREF(tmp_assign_unpack_9__assign_source);
    tmp_assign_unpack_9__assign_source = NULL;
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_value_12;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        frame_b172aab359d88a1c60add353ac2cbf94->m_frame.f_lineno = 110;
        tmp_assign_source_68 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_12, mod_consts[129]);

        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_10__assign_source == NULL);
        tmp_assign_unpack_10__assign_source = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        CHECK_OBJECT(tmp_assign_unpack_10__assign_source);
        tmp_assign_source_69 = tmp_assign_unpack_10__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        CHECK_OBJECT(tmp_assign_unpack_10__assign_source);
        tmp_assign_source_70 = tmp_assign_unpack_10__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_70);
    }
    CHECK_OBJECT(tmp_assign_unpack_10__assign_source);
    Py_DECREF(tmp_assign_unpack_10__assign_source);
    tmp_assign_unpack_10__assign_source = NULL;
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_value_13;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        frame_b172aab359d88a1c60add353ac2cbf94->m_frame.f_lineno = 111;
        tmp_assign_source_71 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_13, mod_consts[132]);

        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_14;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        frame_b172aab359d88a1c60add353ac2cbf94->m_frame.f_lineno = 112;
        tmp_assign_source_72 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_14, mod_consts[134]);

        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[138];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_left_value_5;
        PyObject *tmp_right_value_5;
        tmp_left_value_5 = mod_consts[140];
        tmp_right_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_right_value_5 == NULL)) {
            tmp_right_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
        }

        assert(!(tmp_right_value_5 == NULL));
        tmp_assign_source_76 = BINARY_OPERATION_MULT_OBJECT_LONG_FLOAT(tmp_left_value_5, tmp_right_value_5);
        assert(!(tmp_assign_source_76 == NULL));
        assert(tmp_assign_unpack_11__assign_source == NULL);
        tmp_assign_unpack_11__assign_source = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
        CHECK_OBJECT(tmp_assign_unpack_11__assign_source);
        tmp_assign_source_77 = tmp_assign_unpack_11__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        CHECK_OBJECT(tmp_assign_unpack_11__assign_source);
        tmp_assign_source_78 = tmp_assign_unpack_11__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_78);
    }
    CHECK_OBJECT(tmp_assign_unpack_11__assign_source);
    Py_DECREF(tmp_assign_unpack_11__assign_source);
    tmp_assign_unpack_11__assign_source = NULL;
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_left_value_6;
        PyObject *tmp_left_value_7;
        PyObject *tmp_right_value_6;
        PyObject *tmp_right_value_7;
        tmp_left_value_7 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_left_value_7 == NULL)) {
            tmp_left_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
        }

        if (tmp_left_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_right_value_6 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_right_value_6 == NULL)) {
            tmp_right_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_right_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_left_value_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_7, tmp_right_value_6);
        if (tmp_left_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_right_value_7 = mod_consts[143];
        tmp_assign_source_79 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_left_value_6, tmp_right_value_7);
        Py_DECREF(tmp_left_value_6);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_12__assign_source == NULL);
        tmp_assign_unpack_12__assign_source = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        CHECK_OBJECT(tmp_assign_unpack_12__assign_source);
        tmp_assign_source_80 = tmp_assign_unpack_12__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        CHECK_OBJECT(tmp_assign_unpack_12__assign_source);
        tmp_assign_source_81 = tmp_assign_unpack_12__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_81);
    }
    CHECK_OBJECT(tmp_assign_unpack_12__assign_source);
    Py_DECREF(tmp_assign_unpack_12__assign_source);
    tmp_assign_unpack_12__assign_source = NULL;
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_left_value_8;
        PyObject *tmp_right_value_8;
        tmp_left_value_8 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_left_value_8 == NULL)) {
            tmp_left_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
        }

        if (tmp_left_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_right_value_8 = mod_consts[146];
        tmp_assign_source_82 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_8, tmp_right_value_8);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_left_value_9;
        PyObject *tmp_right_value_9;
        tmp_left_value_9 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_left_value_9 == NULL)) {
            tmp_left_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
        }

        if (tmp_left_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_right_value_9 = mod_consts[148];
        tmp_assign_source_83 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_9, tmp_right_value_9);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_13__assign_source == NULL);
        tmp_assign_unpack_13__assign_source = tmp_assign_source_83;
    }
    {
        PyObject *tmp_assign_source_84;
        CHECK_OBJECT(tmp_assign_unpack_13__assign_source);
        tmp_assign_source_84 = tmp_assign_unpack_13__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        CHECK_OBJECT(tmp_assign_unpack_13__assign_source);
        tmp_assign_source_85 = tmp_assign_unpack_13__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_85);
    }
    CHECK_OBJECT(tmp_assign_unpack_13__assign_source);
    Py_DECREF(tmp_assign_unpack_13__assign_source);
    tmp_assign_unpack_13__assign_source = NULL;
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_left_value_10;
        PyObject *tmp_right_value_10;
        tmp_left_value_10 = mod_consts[151];
        tmp_right_value_10 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_right_value_10 == NULL)) {
            tmp_right_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
        }

        if (tmp_right_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_86 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_10, tmp_right_value_10);
        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_left_value_11;
        PyObject *tmp_right_value_11;
        tmp_left_value_11 = mod_consts[153];
        tmp_right_value_11 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_right_value_11 == NULL)) {
            tmp_right_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
        }

        if (tmp_right_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_87 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_11, tmp_right_value_11);
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_left_value_12;
        PyObject *tmp_right_value_12;
        tmp_left_value_12 = mod_consts[155];
        tmp_right_value_12 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_right_value_12 == NULL)) {
            tmp_right_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
        }

        if (tmp_right_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_88 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_12, tmp_right_value_12);
        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_left_value_13;
        PyObject *tmp_right_value_13;
        tmp_left_value_13 = mod_consts[157];
        tmp_right_value_13 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_right_value_13 == NULL)) {
            tmp_right_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
        }

        if (tmp_right_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_89 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_13, tmp_right_value_13);
        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_left_value_14;
        PyObject *tmp_right_value_14;
        tmp_left_value_14 = mod_consts[146];
        tmp_right_value_14 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_right_value_14 == NULL)) {
            tmp_right_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
        }

        assert(!(tmp_right_value_14 == NULL));
        tmp_assign_source_90 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_14, tmp_right_value_14);
        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[160];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_called_value_15;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        frame_b172aab359d88a1c60add353ac2cbf94->m_frame.f_lineno = 130;
        tmp_assign_source_92 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_15, mod_consts[162]);

        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_14__assign_source == NULL);
        tmp_assign_unpack_14__assign_source = tmp_assign_source_92;
    }
    {
        PyObject *tmp_assign_source_93;
        CHECK_OBJECT(tmp_assign_unpack_14__assign_source);
        tmp_assign_source_93 = tmp_assign_unpack_14__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        CHECK_OBJECT(tmp_assign_unpack_14__assign_source);
        tmp_assign_source_94 = tmp_assign_unpack_14__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_94);
    }
    CHECK_OBJECT(tmp_assign_unpack_14__assign_source);
    Py_DECREF(tmp_assign_unpack_14__assign_source);
    tmp_assign_unpack_14__assign_source = NULL;
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_called_value_16;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        frame_b172aab359d88a1c60add353ac2cbf94->m_frame.f_lineno = 131;
        tmp_assign_source_95 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_16, mod_consts[165]);

        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_15__assign_source == NULL);
        tmp_assign_unpack_15__assign_source = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_96;
        CHECK_OBJECT(tmp_assign_unpack_15__assign_source);
        tmp_assign_source_96 = tmp_assign_unpack_15__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        CHECK_OBJECT(tmp_assign_unpack_15__assign_source);
        tmp_assign_source_97 = tmp_assign_unpack_15__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_97);
    }
    CHECK_OBJECT(tmp_assign_unpack_15__assign_source);
    Py_DECREF(tmp_assign_unpack_15__assign_source);
    tmp_assign_unpack_15__assign_source = NULL;
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_called_value_17;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        frame_b172aab359d88a1c60add353ac2cbf94->m_frame.f_lineno = 132;
        tmp_assign_source_98 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_17, mod_consts[168]);

        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_16__assign_source == NULL);
        tmp_assign_unpack_16__assign_source = tmp_assign_source_98;
    }
    {
        PyObject *tmp_assign_source_99;
        CHECK_OBJECT(tmp_assign_unpack_16__assign_source);
        tmp_assign_source_99 = tmp_assign_unpack_16__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        CHECK_OBJECT(tmp_assign_unpack_16__assign_source);
        tmp_assign_source_100 = tmp_assign_unpack_16__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_100);
    }
    CHECK_OBJECT(tmp_assign_unpack_16__assign_source);
    Py_DECREF(tmp_assign_unpack_16__assign_source);
    tmp_assign_unpack_16__assign_source = NULL;
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_called_value_18;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        frame_b172aab359d88a1c60add353ac2cbf94->m_frame.f_lineno = 133;
        tmp_assign_source_101 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_18, mod_consts[171]);

        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_17__assign_source == NULL);
        tmp_assign_unpack_17__assign_source = tmp_assign_source_101;
    }
    {
        PyObject *tmp_assign_source_102;
        CHECK_OBJECT(tmp_assign_unpack_17__assign_source);
        tmp_assign_source_102 = tmp_assign_unpack_17__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        CHECK_OBJECT(tmp_assign_unpack_17__assign_source);
        tmp_assign_source_103 = tmp_assign_unpack_17__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        CHECK_OBJECT(tmp_assign_unpack_17__assign_source);
        tmp_assign_source_104 = tmp_assign_unpack_17__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_104);
    }
    CHECK_OBJECT(tmp_assign_unpack_17__assign_source);
    Py_DECREF(tmp_assign_unpack_17__assign_source);
    tmp_assign_unpack_17__assign_source = NULL;
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_left_value_15;
        PyObject *tmp_right_value_15;
        tmp_left_value_15 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_left_value_15 == NULL)) {
            tmp_left_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_left_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_right_value_15 = mod_consts[175];
        tmp_assign_source_105 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_15, tmp_right_value_15);
        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_left_value_16;
        PyObject *tmp_right_value_16;
        tmp_left_value_16 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[176]);

        if (unlikely(tmp_left_value_16 == NULL)) {
            tmp_left_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[176]);
        }

        assert(!(tmp_left_value_16 == NULL));
        tmp_right_value_16 = mod_consts[177];
        tmp_assign_source_106 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_16, tmp_right_value_16);
        if (tmp_assign_source_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_18__assign_source == NULL);
        tmp_assign_unpack_18__assign_source = tmp_assign_source_106;
    }
    {
        PyObject *tmp_assign_source_107;
        CHECK_OBJECT(tmp_assign_unpack_18__assign_source);
        tmp_assign_source_107 = tmp_assign_unpack_18__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        CHECK_OBJECT(tmp_assign_unpack_18__assign_source);
        tmp_assign_source_108 = tmp_assign_unpack_18__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_108);
    }
    CHECK_OBJECT(tmp_assign_unpack_18__assign_source);
    Py_DECREF(tmp_assign_unpack_18__assign_source);
    tmp_assign_unpack_18__assign_source = NULL;
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_left_value_17;
        PyObject *tmp_right_value_17;
        tmp_left_value_17 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[178]);

        if (unlikely(tmp_left_value_17 == NULL)) {
            tmp_left_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[178]);
        }

        if (tmp_left_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_right_value_17 = mod_consts[177];
        tmp_assign_source_109 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_17, tmp_right_value_17);
        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_19__assign_source == NULL);
        tmp_assign_unpack_19__assign_source = tmp_assign_source_109;
    }
    {
        PyObject *tmp_assign_source_110;
        CHECK_OBJECT(tmp_assign_unpack_19__assign_source);
        tmp_assign_source_110 = tmp_assign_unpack_19__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        CHECK_OBJECT(tmp_assign_unpack_19__assign_source);
        tmp_assign_source_111 = tmp_assign_unpack_19__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_111);
    }
    CHECK_OBJECT(tmp_assign_unpack_19__assign_source);
    Py_DECREF(tmp_assign_unpack_19__assign_source);
    tmp_assign_unpack_19__assign_source = NULL;
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = mod_consts[182];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_left_value_18;
        PyObject *tmp_right_value_18;
        tmp_left_value_18 = mod_consts[177];
        tmp_right_value_18 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[183]);

        if (unlikely(tmp_right_value_18 == NULL)) {
            tmp_right_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
        }

        assert(!(tmp_right_value_18 == NULL));
        tmp_assign_source_113 = BINARY_OPERATION_MULT_OBJECT_LONG_FLOAT(tmp_left_value_18, tmp_right_value_18);
        assert(!(tmp_assign_source_113 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_left_value_19;
        PyObject *tmp_right_value_19;
        tmp_left_value_19 = mod_consts[185];
        tmp_right_value_19 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[184]);

        if (unlikely(tmp_right_value_19 == NULL)) {
            tmp_right_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
        }

        assert(!(tmp_right_value_19 == NULL));
        tmp_assign_source_114 = BINARY_OPERATION_MULT_OBJECT_LONG_FLOAT(tmp_left_value_19, tmp_right_value_19);
        assert(!(tmp_assign_source_114 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_left_value_20;
        PyObject *tmp_right_value_20;
        tmp_left_value_20 = mod_consts[187];
        tmp_right_value_20 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_right_value_20 == NULL)) {
            tmp_right_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        assert(!(tmp_right_value_20 == NULL));
        tmp_assign_source_115 = BINARY_OPERATION_MULT_OBJECT_LONG_FLOAT(tmp_left_value_20, tmp_right_value_20);
        assert(!(tmp_assign_source_115 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_left_value_21;
        PyObject *tmp_right_value_21;
        tmp_left_value_21 = mod_consts[189];
        tmp_right_value_21 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_right_value_21 == NULL)) {
            tmp_right_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        assert(!(tmp_right_value_21 == NULL));
        tmp_assign_source_116 = BINARY_OPERATION_MULT_OBJECT_LONG_FLOAT(tmp_left_value_21, tmp_right_value_21);
        assert(!(tmp_assign_source_116 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_left_value_22;
        PyObject *tmp_right_value_22;
        tmp_left_value_22 = mod_consts[191];
        tmp_right_value_22 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_right_value_22 == NULL)) {
            tmp_right_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        assert(!(tmp_right_value_22 == NULL));
        tmp_assign_source_117 = BINARY_OPERATION_MULT_OBJECT_FLOAT_FLOAT(tmp_left_value_22, tmp_right_value_22);
        assert(!(tmp_assign_source_117 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = mod_consts[143];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_left_value_23;
        PyObject *tmp_right_value_23;
        tmp_left_value_23 = mod_consts[146];
        tmp_right_value_23 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[193]);

        if (unlikely(tmp_right_value_23 == NULL)) {
            tmp_right_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
        }

        assert(!(tmp_right_value_23 == NULL));
        tmp_assign_source_119 = BINARY_OPERATION_MULT_OBJECT_LONG_FLOAT(tmp_left_value_23, tmp_right_value_23);
        assert(!(tmp_assign_source_119 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_left_value_24;
        PyObject *tmp_right_value_24;
        tmp_left_value_24 = mod_consts[195];
        tmp_right_value_24 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_right_value_24 == NULL)) {
            tmp_right_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[194]);
        }

        assert(!(tmp_right_value_24 == NULL));
        tmp_assign_source_120 = BINARY_OPERATION_MULT_OBJECT_LONG_FLOAT(tmp_left_value_24, tmp_right_value_24);
        assert(!(tmp_assign_source_120 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_left_value_25;
        PyObject *tmp_right_value_25;
        tmp_left_value_25 = mod_consts[197];
        tmp_right_value_25 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_right_value_25 == NULL)) {
            tmp_right_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
        }

        assert(!(tmp_right_value_25 == NULL));
        tmp_assign_source_121 = BINARY_OPERATION_MULT_OBJECT_LONG_FLOAT(tmp_left_value_25, tmp_right_value_25);
        assert(!(tmp_assign_source_121 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_left_value_26;
        PyObject *tmp_right_value_26;
        tmp_left_value_26 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[193]);

        if (unlikely(tmp_left_value_26 == NULL)) {
            tmp_left_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
        }

        assert(!(tmp_left_value_26 == NULL));
        tmp_right_value_26 = mod_consts[199];
        tmp_assign_source_122 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_LONG(tmp_left_value_26, tmp_right_value_26);
        if (tmp_assign_source_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_left_value_27;
        PyObject *tmp_right_value_27;
        tmp_left_value_27 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[193]);

        if (unlikely(tmp_left_value_27 == NULL)) {
            tmp_left_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
        }

        assert(!(tmp_left_value_27 == NULL));
        tmp_right_value_27 = mod_consts[201];
        tmp_assign_source_123 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_LONG(tmp_left_value_27, tmp_right_value_27);
        if (tmp_assign_source_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_20__assign_source == NULL);
        tmp_assign_unpack_20__assign_source = tmp_assign_source_123;
    }
    {
        PyObject *tmp_assign_source_124;
        CHECK_OBJECT(tmp_assign_unpack_20__assign_source);
        tmp_assign_source_124 = tmp_assign_unpack_20__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        CHECK_OBJECT(tmp_assign_unpack_20__assign_source);
        tmp_assign_source_125 = tmp_assign_unpack_20__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_125);
    }
    CHECK_OBJECT(tmp_assign_unpack_20__assign_source);
    Py_DECREF(tmp_assign_unpack_20__assign_source);
    tmp_assign_unpack_20__assign_source = NULL;
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = mod_consts[204];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_left_value_28;
        PyObject *tmp_right_value_28;
        tmp_left_value_28 = mod_consts[206];
        tmp_right_value_28 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_right_value_28 == NULL)) {
            tmp_right_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[205]);
        }

        assert(!(tmp_right_value_28 == NULL));
        tmp_assign_source_127 = BINARY_OPERATION_MULT_OBJECT_LONG_FLOAT(tmp_left_value_28, tmp_right_value_28);
        assert(!(tmp_assign_source_127 == NULL));
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = mod_consts[208];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = mod_consts[211];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = mod_consts[214];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = mod_consts[214];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_left_value_29;
        PyObject *tmp_right_value_29;
        tmp_left_value_29 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[192]);

        if (unlikely(tmp_left_value_29 == NULL)) {
            tmp_left_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[192]);
        }

        if (tmp_left_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_right_value_29 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_right_value_29 == NULL)) {
            tmp_right_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_right_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_134 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_29, tmp_right_value_29);
        if (tmp_assign_source_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_left_value_30;
        PyObject *tmp_right_value_30;
        tmp_left_value_30 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[215]);

        if (unlikely(tmp_left_value_30 == NULL)) {
            tmp_left_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[215]);
        }

        if (tmp_left_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_right_value_30 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_right_value_30 == NULL)) {
            tmp_right_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_right_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_135 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_30, tmp_right_value_30);
        if (tmp_assign_source_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_called_value_19;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        frame_b172aab359d88a1c60add353ac2cbf94->m_frame.f_lineno = 166;
        tmp_assign_source_136 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_19, mod_consts[219]);

        if (tmp_assign_source_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_22__assign_source == NULL);
        tmp_assign_unpack_22__assign_source = tmp_assign_source_136;
    }
    {
        PyObject *tmp_assign_source_137;
        CHECK_OBJECT(tmp_assign_unpack_22__assign_source);
        tmp_assign_source_137 = tmp_assign_unpack_22__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        CHECK_OBJECT(tmp_assign_unpack_22__assign_source);
        tmp_assign_source_138 = tmp_assign_unpack_22__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_138);
    }
    CHECK_OBJECT(tmp_assign_unpack_22__assign_source);
    Py_DECREF(tmp_assign_unpack_22__assign_source);
    tmp_assign_unpack_22__assign_source = NULL;
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = mod_consts[222];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_left_value_31;
        PyObject *tmp_right_value_31;
        tmp_left_value_31 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[220]);

        if (unlikely(tmp_left_value_31 == NULL)) {
            tmp_left_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[220]);
        }

        if (tmp_left_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_right_value_31 = mod_consts[224];
        tmp_assign_source_140 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_31, tmp_right_value_31);
        if (tmp_assign_source_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_23__assign_source == NULL);
        tmp_assign_unpack_23__assign_source = tmp_assign_source_140;
    }
    {
        PyObject *tmp_assign_source_141;
        CHECK_OBJECT(tmp_assign_unpack_23__assign_source);
        tmp_assign_source_141 = tmp_assign_unpack_23__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        CHECK_OBJECT(tmp_assign_unpack_23__assign_source);
        tmp_assign_source_142 = tmp_assign_unpack_23__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_142);
    }
    CHECK_OBJECT(tmp_assign_unpack_23__assign_source);
    Py_DECREF(tmp_assign_unpack_23__assign_source);
    tmp_assign_unpack_23__assign_source = NULL;
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_left_value_32;
        PyObject *tmp_left_value_33;
        PyObject *tmp_right_value_32;
        PyObject *tmp_right_value_33;
        PyObject *tmp_left_value_34;
        PyObject *tmp_right_value_34;
        tmp_left_value_33 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_left_value_33 == NULL)) {
            tmp_left_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
        }

        if (tmp_left_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_right_value_32 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_right_value_32 == NULL)) {
            tmp_right_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_right_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_left_value_32 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_33, tmp_right_value_32);
        if (tmp_left_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_left_value_34 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[193]);

        if (unlikely(tmp_left_value_34 == NULL)) {
            tmp_left_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
        }

        if (tmp_left_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_32);

            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_right_value_34 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[193]);

        if (unlikely(tmp_right_value_34 == NULL)) {
            tmp_right_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
        }

        if (tmp_right_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_32);

            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_right_value_33 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_34, tmp_right_value_34);
        if (tmp_right_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_32);

            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_143 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_32, tmp_right_value_33);
        Py_DECREF(tmp_left_value_32);
        Py_DECREF(tmp_right_value_33);
        if (tmp_assign_source_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = mod_consts[228];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_left_value_35;
        PyObject *tmp_right_value_35;
        PyObject *tmp_left_value_36;
        PyObject *tmp_right_value_36;
        tmp_left_value_35 = mod_consts[230];
        tmp_left_value_36 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_left_value_36 == NULL)) {
            tmp_left_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[194]);
        }

        if (tmp_left_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_right_value_36 = mod_consts[40];
        tmp_right_value_35 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_left_value_36, tmp_right_value_36);
        if (tmp_right_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_145 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_35, tmp_right_value_35);
        Py_DECREF(tmp_right_value_35);
        if (tmp_assign_source_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_left_value_37;
        PyObject *tmp_right_value_37;
        PyObject *tmp_left_value_38;
        PyObject *tmp_right_value_38;
        tmp_left_value_37 = mod_consts[234];
        tmp_left_value_38 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[193]);

        if (unlikely(tmp_left_value_38 == NULL)) {
            tmp_left_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
        }

        if (tmp_left_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_right_value_38 = mod_consts[195];
        tmp_right_value_37 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_left_value_38, tmp_right_value_38);
        if (tmp_right_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_148 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_37, tmp_right_value_37);
        Py_DECREF(tmp_right_value_37);
        if (tmp_assign_source_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_25__assign_source == NULL);
        tmp_assign_unpack_25__assign_source = tmp_assign_source_148;
    }
    {
        PyObject *tmp_assign_source_149;
        CHECK_OBJECT(tmp_assign_unpack_25__assign_source);
        tmp_assign_source_149 = tmp_assign_unpack_25__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        CHECK_OBJECT(tmp_assign_unpack_25__assign_source);
        tmp_assign_source_150 = tmp_assign_unpack_25__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_150);
    }
    CHECK_OBJECT(tmp_assign_unpack_25__assign_source);
    Py_DECREF(tmp_assign_unpack_25__assign_source);
    tmp_assign_unpack_25__assign_source = NULL;
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_left_value_39;
        PyObject *tmp_right_value_39;
        tmp_left_value_39 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[236]);

        if (unlikely(tmp_left_value_39 == NULL)) {
            tmp_left_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[236]);
        }

        if (tmp_left_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_right_value_39 = mod_consts[237];
        tmp_assign_source_151 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_left_value_39, tmp_right_value_39);
        if (tmp_assign_source_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_26__assign_source == NULL);
        tmp_assign_unpack_26__assign_source = tmp_assign_source_151;
    }
    {
        PyObject *tmp_assign_source_152;
        CHECK_OBJECT(tmp_assign_unpack_26__assign_source);
        tmp_assign_source_152 = tmp_assign_unpack_26__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        CHECK_OBJECT(tmp_assign_unpack_26__assign_source);
        tmp_assign_source_153 = tmp_assign_unpack_26__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_153);
    }
    CHECK_OBJECT(tmp_assign_unpack_26__assign_source);
    Py_DECREF(tmp_assign_unpack_26__assign_source);
    tmp_assign_unpack_26__assign_source = NULL;
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_left_value_40;
        PyObject *tmp_right_value_40;
        tmp_left_value_40 = mod_consts[240];
        tmp_right_value_40 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[236]);

        if (unlikely(tmp_right_value_40 == NULL)) {
            tmp_right_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[236]);
        }

        if (tmp_right_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_154 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_40, tmp_right_value_40);
        if (tmp_assign_source_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_27__assign_source == NULL);
        tmp_assign_unpack_27__assign_source = tmp_assign_source_154;
    }
    {
        PyObject *tmp_assign_source_155;
        CHECK_OBJECT(tmp_assign_unpack_27__assign_source);
        tmp_assign_source_155 = tmp_assign_unpack_27__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        CHECK_OBJECT(tmp_assign_unpack_27__assign_source);
        tmp_assign_source_156 = tmp_assign_unpack_27__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_156);
    }
    CHECK_OBJECT(tmp_assign_unpack_27__assign_source);
    Py_DECREF(tmp_assign_unpack_27__assign_source);
    tmp_assign_unpack_27__assign_source = NULL;
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = mod_consts[243];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_left_value_41;
        PyObject *tmp_right_value_41;
        tmp_left_value_41 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[244]);

        if (unlikely(tmp_left_value_41 == NULL)) {
            tmp_left_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[244]);
        }

        assert(!(tmp_left_value_41 == NULL));
        tmp_right_value_41 = mod_consts[245];
        tmp_assign_source_158 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_LONG(tmp_left_value_41, tmp_right_value_41);
        if (tmp_assign_source_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_left_value_42;
        PyObject *tmp_right_value_42;
        tmp_left_value_42 = mod_consts[57];
        tmp_right_value_42 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[184]);

        if (unlikely(tmp_right_value_42 == NULL)) {
            tmp_right_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
        }

        if (tmp_right_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_159 = BINARY_OPERATION_TRUEDIV_OBJECT_FLOAT_OBJECT(tmp_left_value_42, tmp_right_value_42);
        if (tmp_assign_source_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_left_value_43;
        PyObject *tmp_right_value_43;
        tmp_left_value_43 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_left_value_43 == NULL)) {
            tmp_left_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[198]);
        }

        if (tmp_left_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_right_value_43 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[184]);

        if (unlikely(tmp_right_value_43 == NULL)) {
            tmp_right_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
        }

        if (tmp_right_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_160 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_43, tmp_right_value_43);
        if (tmp_assign_source_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        tmp_assign_source_161 = mod_consts[249];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        tmp_assign_source_162 = mod_consts[249];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_left_value_44;
        PyObject *tmp_right_value_44;
        tmp_left_value_44 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_left_value_44 == NULL)) {
            tmp_left_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[209]);
        }

        if (tmp_left_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_right_value_44 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[184]);

        if (unlikely(tmp_right_value_44 == NULL)) {
            tmp_right_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
        }

        if (tmp_right_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_163 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_44, tmp_right_value_44);
        if (tmp_assign_source_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[252], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        tmp_assign_source_164 = mod_consts[253];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = mod_consts[254];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        tmp_assign_source_166 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_assign_source_166 == NULL)) {
            tmp_assign_source_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_assign_source_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_29__assign_source == NULL);
        Py_INCREF(tmp_assign_source_166);
        tmp_assign_unpack_29__assign_source = tmp_assign_source_166;
    }
    {
        PyObject *tmp_assign_source_167;
        CHECK_OBJECT(tmp_assign_unpack_29__assign_source);
        tmp_assign_source_167 = tmp_assign_unpack_29__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        CHECK_OBJECT(tmp_assign_unpack_29__assign_source);
        tmp_assign_source_168 = tmp_assign_unpack_29__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_168);
    }
    CHECK_OBJECT(tmp_assign_unpack_29__assign_source);
    Py_DECREF(tmp_assign_unpack_29__assign_source);
    tmp_assign_unpack_29__assign_source = NULL;
    {
        PyObject *tmp_assign_source_169;
        tmp_assign_source_169 = mod_consts[258];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        tmp_assign_source_170 = mod_consts[258];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        tmp_assign_source_171 = mod_consts[261];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        tmp_assign_source_172 = mod_consts[263];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        PyObject *tmp_left_value_45;
        PyObject *tmp_left_value_46;
        PyObject *tmp_left_value_47;
        PyObject *tmp_right_value_45;
        PyObject *tmp_right_value_46;
        PyObject *tmp_right_value_47;
        tmp_left_value_47 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_left_value_47 == NULL)) {
            tmp_left_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
        }

        if (tmp_left_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_right_value_45 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[255]);

        if (unlikely(tmp_right_value_45 == NULL)) {
            tmp_right_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[255]);
        }

        if (tmp_right_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_left_value_46 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_47, tmp_right_value_45);
        if (tmp_left_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_right_value_46 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[260]);

        if (unlikely(tmp_right_value_46 == NULL)) {
            tmp_right_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[260]);
        }

        if (tmp_right_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_46);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_left_value_45 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_46, tmp_right_value_46);
        Py_DECREF(tmp_left_value_46);
        if (tmp_left_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_right_value_47 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_right_value_47 == NULL)) {
            tmp_right_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
        }

        if (tmp_right_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_45);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_173 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_45, tmp_right_value_47);
        Py_DECREF(tmp_left_value_45);
        if (tmp_assign_source_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[265], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_left_value_48;
        PyObject *tmp_left_value_49;
        PyObject *tmp_left_value_50;
        PyObject *tmp_right_value_48;
        PyObject *tmp_right_value_49;
        PyObject *tmp_right_value_50;
        tmp_left_value_50 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_left_value_50 == NULL)) {
            tmp_left_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
        }

        if (tmp_left_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_right_value_48 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[255]);

        if (unlikely(tmp_right_value_48 == NULL)) {
            tmp_right_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[255]);
        }

        if (tmp_right_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_left_value_49 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_50, tmp_right_value_48);
        if (tmp_left_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_right_value_49 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[262]);

        if (unlikely(tmp_right_value_49 == NULL)) {
            tmp_right_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[262]);
        }

        if (tmp_right_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_49);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_left_value_48 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_49, tmp_right_value_49);
        Py_DECREF(tmp_left_value_49);
        if (tmp_left_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_right_value_50 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_right_value_50 == NULL)) {
            tmp_right_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
        }

        if (tmp_right_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_48);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_174 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_48, tmp_right_value_50);
        Py_DECREF(tmp_left_value_48);
        if (tmp_assign_source_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_31__assign_source == NULL);
        tmp_assign_unpack_31__assign_source = tmp_assign_source_174;
    }
    {
        PyObject *tmp_assign_source_175;
        CHECK_OBJECT(tmp_assign_unpack_31__assign_source);
        tmp_assign_source_175 = tmp_assign_unpack_31__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[266], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        CHECK_OBJECT(tmp_assign_unpack_31__assign_source);
        tmp_assign_source_176 = tmp_assign_unpack_31__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_176);
    }
    CHECK_OBJECT(tmp_assign_unpack_31__assign_source);
    Py_DECREF(tmp_assign_unpack_31__assign_source);
    tmp_assign_unpack_31__assign_source = NULL;
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_left_value_51;
        PyObject *tmp_right_value_51;
        tmp_left_value_51 = mod_consts[53];
        tmp_right_value_51 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[260]);

        if (unlikely(tmp_right_value_51 == NULL)) {
            tmp_right_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[260]);
        }

        if (tmp_right_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_177 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_left_value_51, tmp_right_value_51);
        if (tmp_assign_source_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[268], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        PyObject *tmp_left_value_52;
        PyObject *tmp_left_value_53;
        PyObject *tmp_left_value_54;
        PyObject *tmp_right_value_52;
        PyObject *tmp_right_value_53;
        PyObject *tmp_right_value_54;
        tmp_left_value_54 = mod_consts[269];
        tmp_right_value_52 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_right_value_52 == NULL)) {
            tmp_right_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[194]);
        }

        if (tmp_right_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_left_value_53 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_left_value_54, tmp_right_value_52);
        if (tmp_left_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_right_value_53 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_right_value_53 == NULL)) {
            tmp_right_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
        }

        if (tmp_right_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_53);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_left_value_52 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_53, tmp_right_value_53);
        Py_DECREF(tmp_left_value_53);
        if (tmp_left_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_right_value_54 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_right_value_54 == NULL)) {
            tmp_right_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_right_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_52);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_178 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_52, tmp_right_value_54);
        Py_DECREF(tmp_left_value_52);
        if (tmp_assign_source_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_32__assign_source == NULL);
        tmp_assign_unpack_32__assign_source = tmp_assign_source_178;
    }
    {
        PyObject *tmp_assign_source_179;
        CHECK_OBJECT(tmp_assign_unpack_32__assign_source);
        tmp_assign_source_179 = tmp_assign_unpack_32__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        CHECK_OBJECT(tmp_assign_unpack_32__assign_source);
        tmp_assign_source_180 = tmp_assign_unpack_32__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_180);
    }
    CHECK_OBJECT(tmp_assign_unpack_32__assign_source);
    Py_DECREF(tmp_assign_unpack_32__assign_source);
    tmp_assign_unpack_32__assign_source = NULL;
    {
        PyObject *tmp_assign_source_181;
        tmp_assign_source_181 = mod_consts[272];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[273], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        tmp_assign_source_182 = mod_consts[272];
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[274], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        PyObject *tmp_left_value_55;
        PyObject *tmp_right_value_55;
        tmp_left_value_55 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_left_value_55 == NULL)) {
            tmp_left_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
        }

        if (tmp_left_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_right_value_55 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_right_value_55 == NULL)) {
            tmp_right_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_right_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_183 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_55, tmp_right_value_55);
        if (tmp_assign_source_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_34__assign_source == NULL);
        tmp_assign_unpack_34__assign_source = tmp_assign_source_183;
    }
    {
        PyObject *tmp_assign_source_184;
        CHECK_OBJECT(tmp_assign_unpack_34__assign_source);
        tmp_assign_source_184 = tmp_assign_unpack_34__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assign_source_185;
        CHECK_OBJECT(tmp_assign_unpack_34__assign_source);
        tmp_assign_source_185 = tmp_assign_unpack_34__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[276], tmp_assign_source_185);
    }
    CHECK_OBJECT(tmp_assign_unpack_34__assign_source);
    Py_DECREF(tmp_assign_unpack_34__assign_source);
    tmp_assign_unpack_34__assign_source = NULL;
    {
        PyObject *tmp_assign_source_186;
        tmp_assign_source_186 = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_assign_source_186 == NULL)) {
            tmp_assign_source_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_assign_source_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_35__assign_source == NULL);
        Py_INCREF(tmp_assign_source_186);
        tmp_assign_unpack_35__assign_source = tmp_assign_source_186;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b172aab359d88a1c60add353ac2cbf94);
#endif
    popFrameStack();

    assertFrameObject(frame_b172aab359d88a1c60add353ac2cbf94);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b172aab359d88a1c60add353ac2cbf94);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b172aab359d88a1c60add353ac2cbf94, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b172aab359d88a1c60add353ac2cbf94->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b172aab359d88a1c60add353ac2cbf94, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_187;
        CHECK_OBJECT(tmp_assign_unpack_35__assign_source);
        tmp_assign_source_187 = tmp_assign_unpack_35__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;
        CHECK_OBJECT(tmp_assign_unpack_35__assign_source);
        tmp_assign_source_188 = tmp_assign_unpack_35__assign_source;
        UPDATE_STRING_DICT0(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_188);
    }
    CHECK_OBJECT(tmp_assign_unpack_35__assign_source);
    Py_DECREF(tmp_assign_unpack_35__assign_source);
    tmp_assign_unpack_35__assign_source = NULL;
    {
        PyObject *tmp_assign_source_189;


        tmp_assign_source_189 = MAKE_FUNCTION_scipy$constants$_constants$$$function__1_convert_temperature();

        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[279], tmp_assign_source_189);
    }
    {
        PyObject *tmp_assign_source_190;


        tmp_assign_source_190 = MAKE_FUNCTION_scipy$constants$_constants$$$function__2_lambda2nu();

        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_190);
    }
    {
        PyObject *tmp_assign_source_191;


        tmp_assign_source_191 = MAKE_FUNCTION_scipy$constants$_constants$$$function__3_nu2lambda();

        UPDATE_STRING_DICT1(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_191);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scipy.constants._constants", false);

    Py_INCREF(module_scipy$constants$_constants);
    return module_scipy$constants$_constants;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$constants$_constants, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("scipy$constants$_constants", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
