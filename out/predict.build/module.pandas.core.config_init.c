/* Generated code for Python module 'pandas.core.config_init'
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

/* The "module_pandas$core$config_init" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pandas$core$config_init;
PyDictObject *moduledict_pandas$core$config_init;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[279];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[279];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("pandas.core.config_init"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 279; i++) {
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
void checkModuleConstants_pandas$core$config_init(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 279; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_929860c9d36c161b6d170f2111d32473;
static PyCodeObject *codeobj_f0466501b00b4afb96b9826d38cfbacf;
static PyCodeObject *codeobj_88116bf82897ef6b511cbc6e29fc6f2d;
static PyCodeObject *codeobj_e47615fc9d9a28bc23bf983893c0ebdd;
static PyCodeObject *codeobj_7d10429bafa0f0033daa0dc0f3d71d1d;
static PyCodeObject *codeobj_119e8427ae5a70456a40d619261765f2;
static PyCodeObject *codeobj_48ffd9225c38c74827678ed4f64fe91d;
static PyCodeObject *codeobj_770b6dd3da768736d3536a45ba094baa;
static PyCodeObject *codeobj_39746ed63a0ebd20ea0a8f9eaa4c2cd6;
static PyCodeObject *codeobj_059f1d8d32f21ffefaa21557f5cfed11;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[267]); CHECK_OBJECT(module_filename_obj);
    codeobj_929860c9d36c161b6d170f2111d32473 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[268], NULL, NULL, 0, 0, 0);
    codeobj_f0466501b00b4afb96b9826d38cfbacf = MAKE_CODEOBJECT(module_filename_obj, 365, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[157], mod_consts[269], NULL, 1, 0, 0);
    codeobj_88116bf82897ef6b511cbc6e29fc6f2d = MAKE_CODEOBJECT(module_filename_obj, 323, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[140], mod_consts[270], NULL, 0, 0, 0);
    codeobj_e47615fc9d9a28bc23bf983893c0ebdd = MAKE_CODEOBJECT(module_filename_obj, 672, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[263], mod_consts[271], NULL, 1, 0, 0);
    codeobj_7d10429bafa0f0033daa0dc0f3d71d1d = MAKE_CODEOBJECT(module_filename_obj, 646, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[257], mod_consts[272], NULL, 1, 0, 0);
    codeobj_119e8427ae5a70456a40d619261765f2 = MAKE_CODEOBJECT(module_filename_obj, 317, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[138], mod_consts[273], NULL, 1, 0, 0);
    codeobj_48ffd9225c38c74827678ed4f64fe91d = MAKE_CODEOBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[57], mod_consts[274], NULL, 1, 0, 0);
    codeobj_770b6dd3da768736d3536a45ba094baa = MAKE_CODEOBJECT(module_filename_obj, 475, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[204], mod_consts[275], NULL, 1, 0, 0);
    codeobj_39746ed63a0ebd20ea0a8f9eaa4c2cd6 = MAKE_CODEOBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[276], NULL, 1, 0, 0);
    codeobj_059f1d8d32f21ffefaa21557f5cfed11 = MAKE_CODEOBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[277], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__1_use_bottleneck_cb();


static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__2_use_numexpr_cb();


static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__3_use_numba_cb();


static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__4_table_schema_cb();


static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__5_is_terminal(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth();


static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__7_use_inf_as_na_cb();


static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__8_register_plotting_backend_cb();


static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__9_register_converter_cb();


// The module function definitions.
static PyObject *impl_pandas$core$config_init$$$function__1_use_bottleneck_cb(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var_nanops = NULL;
    struct Nuitka_FrameObject *frame_48ffd9225c38c74827678ed4f64fe91d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_48ffd9225c38c74827678ed4f64fe91d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_48ffd9225c38c74827678ed4f64fe91d)) {
        Py_XDECREF(cache_frame_48ffd9225c38c74827678ed4f64fe91d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_48ffd9225c38c74827678ed4f64fe91d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_48ffd9225c38c74827678ed4f64fe91d = MAKE_FUNCTION_FRAME(codeobj_48ffd9225c38c74827678ed4f64fe91d, module_pandas$core$config_init, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_48ffd9225c38c74827678ed4f64fe91d->m_type_description == NULL);
    frame_48ffd9225c38c74827678ed4f64fe91d = cache_frame_48ffd9225c38c74827678ed4f64fe91d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_48ffd9225c38c74827678ed4f64fe91d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_48ffd9225c38c74827678ed4f64fe91d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[1];
        tmp_level_value_1 = mod_consts[2];
        frame_48ffd9225c38c74827678ed4f64fe91d->m_frame.f_lineno = 36;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[3],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[3]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_nanops == NULL);
        var_nanops = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_nanops);
        tmp_expression_value_1 = var_nanops;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_2 = par_key;
        frame_48ffd9225c38c74827678ed4f64fe91d->m_frame.f_lineno = 38;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_48ffd9225c38c74827678ed4f64fe91d->m_frame.f_lineno = 38;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_48ffd9225c38c74827678ed4f64fe91d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_48ffd9225c38c74827678ed4f64fe91d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_48ffd9225c38c74827678ed4f64fe91d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_48ffd9225c38c74827678ed4f64fe91d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_48ffd9225c38c74827678ed4f64fe91d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_48ffd9225c38c74827678ed4f64fe91d,
        type_description_1,
        par_key,
        var_nanops
    );


    // Release cached frame if used for exception.
    if (frame_48ffd9225c38c74827678ed4f64fe91d == cache_frame_48ffd9225c38c74827678ed4f64fe91d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_48ffd9225c38c74827678ed4f64fe91d);
        cache_frame_48ffd9225c38c74827678ed4f64fe91d = NULL;
    }

    assertFrameObject(frame_48ffd9225c38c74827678ed4f64fe91d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_nanops);
    Py_DECREF(var_nanops);
    var_nanops = NULL;
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

    Py_XDECREF(var_nanops);
    var_nanops = NULL;
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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$config_init$$$function__2_use_numexpr_cb(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var_expressions = NULL;
    struct Nuitka_FrameObject *frame_059f1d8d32f21ffefaa21557f5cfed11;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_059f1d8d32f21ffefaa21557f5cfed11 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_059f1d8d32f21ffefaa21557f5cfed11)) {
        Py_XDECREF(cache_frame_059f1d8d32f21ffefaa21557f5cfed11);

#if _DEBUG_REFCOUNTS
        if (cache_frame_059f1d8d32f21ffefaa21557f5cfed11 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_059f1d8d32f21ffefaa21557f5cfed11 = MAKE_FUNCTION_FRAME(codeobj_059f1d8d32f21ffefaa21557f5cfed11, module_pandas$core$config_init, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_059f1d8d32f21ffefaa21557f5cfed11->m_type_description == NULL);
    frame_059f1d8d32f21ffefaa21557f5cfed11 = cache_frame_059f1d8d32f21ffefaa21557f5cfed11;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_059f1d8d32f21ffefaa21557f5cfed11);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_059f1d8d32f21ffefaa21557f5cfed11) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[7];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[8];
        tmp_level_value_1 = mod_consts[2];
        frame_059f1d8d32f21ffefaa21557f5cfed11->m_frame.f_lineno = 50;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[9],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[9]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_expressions == NULL);
        var_expressions = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_expressions);
        tmp_expression_value_1 = var_expressions;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_2 = par_key;
        frame_059f1d8d32f21ffefaa21557f5cfed11->m_frame.f_lineno = 52;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_059f1d8d32f21ffefaa21557f5cfed11->m_frame.f_lineno = 52;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_059f1d8d32f21ffefaa21557f5cfed11);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_059f1d8d32f21ffefaa21557f5cfed11);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_059f1d8d32f21ffefaa21557f5cfed11, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_059f1d8d32f21ffefaa21557f5cfed11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_059f1d8d32f21ffefaa21557f5cfed11, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_059f1d8d32f21ffefaa21557f5cfed11,
        type_description_1,
        par_key,
        var_expressions
    );


    // Release cached frame if used for exception.
    if (frame_059f1d8d32f21ffefaa21557f5cfed11 == cache_frame_059f1d8d32f21ffefaa21557f5cfed11) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_059f1d8d32f21ffefaa21557f5cfed11);
        cache_frame_059f1d8d32f21ffefaa21557f5cfed11 = NULL;
    }

    assertFrameObject(frame_059f1d8d32f21ffefaa21557f5cfed11);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_expressions);
    Py_DECREF(var_expressions);
    var_expressions = NULL;
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

    Py_XDECREF(var_expressions);
    var_expressions = NULL;
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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$config_init$$$function__3_use_numba_cb(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var_numba_ = NULL;
    struct Nuitka_FrameObject *frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6)) {
        Py_XDECREF(cache_frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6 = MAKE_FUNCTION_FRAME(codeobj_39746ed63a0ebd20ea0a8f9eaa4c2cd6, module_pandas$core$config_init, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6->m_type_description == NULL);
    frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6 = cache_frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[11];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[12];
        tmp_level_value_1 = mod_consts[2];
        frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6->m_frame.f_lineno = 64;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[13],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[13]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_numba_ == NULL);
        var_numba_ = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_numba_);
        tmp_expression_value_1 = var_numba_;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_2 = par_key;
        frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6->m_frame.f_lineno = 66;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6->m_frame.f_lineno = 66;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6,
        type_description_1,
        par_key,
        var_numba_
    );


    // Release cached frame if used for exception.
    if (frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6 == cache_frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6);
        cache_frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6 = NULL;
    }

    assertFrameObject(frame_39746ed63a0ebd20ea0a8f9eaa4c2cd6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_numba_);
    Py_DECREF(var_numba_);
    var_numba_ = NULL;
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

    Py_XDECREF(var_numba_);
    var_numba_ = NULL;
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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$config_init$$$function__4_table_schema_cb(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var_enable_data_resource_formatter = NULL;
    struct Nuitka_FrameObject *frame_119e8427ae5a70456a40d619261765f2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_119e8427ae5a70456a40d619261765f2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_119e8427ae5a70456a40d619261765f2)) {
        Py_XDECREF(cache_frame_119e8427ae5a70456a40d619261765f2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_119e8427ae5a70456a40d619261765f2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_119e8427ae5a70456a40d619261765f2 = MAKE_FUNCTION_FRAME(codeobj_119e8427ae5a70456a40d619261765f2, module_pandas$core$config_init, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_119e8427ae5a70456a40d619261765f2->m_type_description == NULL);
    frame_119e8427ae5a70456a40d619261765f2 = cache_frame_119e8427ae5a70456a40d619261765f2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_119e8427ae5a70456a40d619261765f2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_119e8427ae5a70456a40d619261765f2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[15];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[16];
        tmp_level_value_1 = mod_consts[2];
        frame_119e8427ae5a70456a40d619261765f2->m_frame.f_lineno = 318;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[17],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[17]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_enable_data_resource_formatter == NULL);
        var_enable_data_resource_formatter = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_enable_data_resource_formatter);
        tmp_called_value_1 = var_enable_data_resource_formatter;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_2 = par_key;
        frame_119e8427ae5a70456a40d619261765f2->m_frame.f_lineno = 320;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_119e8427ae5a70456a40d619261765f2->m_frame.f_lineno = 320;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_119e8427ae5a70456a40d619261765f2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_119e8427ae5a70456a40d619261765f2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_119e8427ae5a70456a40d619261765f2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_119e8427ae5a70456a40d619261765f2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_119e8427ae5a70456a40d619261765f2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_119e8427ae5a70456a40d619261765f2,
        type_description_1,
        par_key,
        var_enable_data_resource_formatter
    );


    // Release cached frame if used for exception.
    if (frame_119e8427ae5a70456a40d619261765f2 == cache_frame_119e8427ae5a70456a40d619261765f2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_119e8427ae5a70456a40d619261765f2);
        cache_frame_119e8427ae5a70456a40d619261765f2 = NULL;
    }

    assertFrameObject(frame_119e8427ae5a70456a40d619261765f2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_enable_data_resource_formatter);
    Py_DECREF(var_enable_data_resource_formatter);
    var_enable_data_resource_formatter = NULL;
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

    Py_XDECREF(var_enable_data_resource_formatter);
    var_enable_data_resource_formatter = NULL;
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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$config_init$$$function__5_is_terminal(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_ip = NULL;
    struct Nuitka_FrameObject *frame_88116bf82897ef6b511cbc6e29fc6f2d;
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
    static struct Nuitka_FrameObject *cache_frame_88116bf82897ef6b511cbc6e29fc6f2d = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_88116bf82897ef6b511cbc6e29fc6f2d)) {
        Py_XDECREF(cache_frame_88116bf82897ef6b511cbc6e29fc6f2d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_88116bf82897ef6b511cbc6e29fc6f2d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_88116bf82897ef6b511cbc6e29fc6f2d = MAKE_FUNCTION_FRAME(codeobj_88116bf82897ef6b511cbc6e29fc6f2d, module_pandas$core$config_init, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_88116bf82897ef6b511cbc6e29fc6f2d->m_type_description == NULL);
    frame_88116bf82897ef6b511cbc6e29fc6f2d = cache_frame_88116bf82897ef6b511cbc6e29fc6f2d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_88116bf82897ef6b511cbc6e29fc6f2d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_88116bf82897ef6b511cbc6e29fc6f2d) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        frame_88116bf82897ef6b511cbc6e29fc6f2d->m_frame.f_lineno = 331;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        assert(var_ip == NULL);
        var_ip = tmp_assign_source_1;
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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_88116bf82897ef6b511cbc6e29fc6f2d, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_88116bf82897ef6b511cbc6e29fc6f2d, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_NameError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 329;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_88116bf82897ef6b511cbc6e29fc6f2d->m_frame) frame_88116bf82897ef6b511cbc6e29fc6f2d->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
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

    // Restore previous exception id 1.
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
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(var_ip);
        tmp_expression_value_1 = var_ip;
        tmp_attribute_value_1 = mod_consts[19];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_88116bf82897ef6b511cbc6e29fc6f2d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_88116bf82897ef6b511cbc6e29fc6f2d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_88116bf82897ef6b511cbc6e29fc6f2d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_88116bf82897ef6b511cbc6e29fc6f2d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_88116bf82897ef6b511cbc6e29fc6f2d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_88116bf82897ef6b511cbc6e29fc6f2d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_88116bf82897ef6b511cbc6e29fc6f2d,
        type_description_1,
        var_ip
    );


    // Release cached frame if used for exception.
    if (frame_88116bf82897ef6b511cbc6e29fc6f2d == cache_frame_88116bf82897ef6b511cbc6e29fc6f2d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_88116bf82897ef6b511cbc6e29fc6f2d);
        cache_frame_88116bf82897ef6b511cbc6e29fc6f2d = NULL;
    }

    assertFrameObject(frame_88116bf82897ef6b511cbc6e29fc6f2d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_ip);
    var_ip = NULL;
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

    Py_XDECREF(var_ip);
    var_ip = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var_value = NULL;
    struct Nuitka_FrameObject *frame_f0466501b00b4afb96b9826d38cfbacf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f0466501b00b4afb96b9826d38cfbacf = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f0466501b00b4afb96b9826d38cfbacf)) {
        Py_XDECREF(cache_frame_f0466501b00b4afb96b9826d38cfbacf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f0466501b00b4afb96b9826d38cfbacf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f0466501b00b4afb96b9826d38cfbacf = MAKE_FUNCTION_FRAME(codeobj_f0466501b00b4afb96b9826d38cfbacf, module_pandas$core$config_init, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f0466501b00b4afb96b9826d38cfbacf->m_type_description == NULL);
    frame_f0466501b00b4afb96b9826d38cfbacf = cache_frame_f0466501b00b4afb96b9826d38cfbacf;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f0466501b00b4afb96b9826d38cfbacf);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f0466501b00b4afb96b9826d38cfbacf) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        frame_f0466501b00b4afb96b9826d38cfbacf->m_frame.f_lineno = 366;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_value == NULL);
        var_value = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_value);
        tmp_cmp_expr_left_1 = var_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_value);
        tmp_cmp_expr_left_2 = var_value;
        tmp_cmp_expr_right_2 = mod_consts[2];
        tmp_and_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
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
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[22]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[23];
        tmp_args_value_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "oo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = PyDict_Copy(mod_consts[25]);
        frame_f0466501b00b4afb96b9826d38cfbacf->m_frame.f_lineno = 368;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f0466501b00b4afb96b9826d38cfbacf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f0466501b00b4afb96b9826d38cfbacf);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f0466501b00b4afb96b9826d38cfbacf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f0466501b00b4afb96b9826d38cfbacf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f0466501b00b4afb96b9826d38cfbacf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f0466501b00b4afb96b9826d38cfbacf,
        type_description_1,
        par_key,
        var_value
    );


    // Release cached frame if used for exception.
    if (frame_f0466501b00b4afb96b9826d38cfbacf == cache_frame_f0466501b00b4afb96b9826d38cfbacf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f0466501b00b4afb96b9826d38cfbacf);
        cache_frame_f0466501b00b4afb96b9826d38cfbacf = NULL;
    }

    assertFrameObject(frame_f0466501b00b4afb96b9826d38cfbacf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_value);
    Py_DECREF(var_value);
    var_value = NULL;
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

    Py_XDECREF(var_value);
    var_value = NULL;
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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$config_init$$$function__7_use_inf_as_na_cb(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var__use_inf_as_na = NULL;
    struct Nuitka_FrameObject *frame_770b6dd3da768736d3536a45ba094baa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_770b6dd3da768736d3536a45ba094baa = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_770b6dd3da768736d3536a45ba094baa)) {
        Py_XDECREF(cache_frame_770b6dd3da768736d3536a45ba094baa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_770b6dd3da768736d3536a45ba094baa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_770b6dd3da768736d3536a45ba094baa = MAKE_FUNCTION_FRAME(codeobj_770b6dd3da768736d3536a45ba094baa, module_pandas$core$config_init, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_770b6dd3da768736d3536a45ba094baa->m_type_description == NULL);
    frame_770b6dd3da768736d3536a45ba094baa = cache_frame_770b6dd3da768736d3536a45ba094baa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_770b6dd3da768736d3536a45ba094baa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_770b6dd3da768736d3536a45ba094baa) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[26];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[27];
        tmp_level_value_1 = mod_consts[2];
        frame_770b6dd3da768736d3536a45ba094baa->m_frame.f_lineno = 476;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[28],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[28]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var__use_inf_as_na == NULL);
        var__use_inf_as_na = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var__use_inf_as_na);
        tmp_called_value_1 = var__use_inf_as_na;
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        frame_770b6dd3da768736d3536a45ba094baa->m_frame.f_lineno = 478;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_770b6dd3da768736d3536a45ba094baa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_770b6dd3da768736d3536a45ba094baa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_770b6dd3da768736d3536a45ba094baa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_770b6dd3da768736d3536a45ba094baa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_770b6dd3da768736d3536a45ba094baa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_770b6dd3da768736d3536a45ba094baa,
        type_description_1,
        par_key,
        var__use_inf_as_na
    );


    // Release cached frame if used for exception.
    if (frame_770b6dd3da768736d3536a45ba094baa == cache_frame_770b6dd3da768736d3536a45ba094baa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_770b6dd3da768736d3536a45ba094baa);
        cache_frame_770b6dd3da768736d3536a45ba094baa = NULL;
    }

    assertFrameObject(frame_770b6dd3da768736d3536a45ba094baa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var__use_inf_as_na);
    Py_DECREF(var__use_inf_as_na);
    var__use_inf_as_na = NULL;
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

    Py_XDECREF(var__use_inf_as_na);
    var__use_inf_as_na = NULL;
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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$config_init$$$function__8_register_plotting_backend_cb(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var__get_plot_backend = NULL;
    struct Nuitka_FrameObject *frame_7d10429bafa0f0033daa0dc0f3d71d1d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7d10429bafa0f0033daa0dc0f3d71d1d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7d10429bafa0f0033daa0dc0f3d71d1d)) {
        Py_XDECREF(cache_frame_7d10429bafa0f0033daa0dc0f3d71d1d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d10429bafa0f0033daa0dc0f3d71d1d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d10429bafa0f0033daa0dc0f3d71d1d = MAKE_FUNCTION_FRAME(codeobj_7d10429bafa0f0033daa0dc0f3d71d1d, module_pandas$core$config_init, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7d10429bafa0f0033daa0dc0f3d71d1d->m_type_description == NULL);
    frame_7d10429bafa0f0033daa0dc0f3d71d1d = cache_frame_7d10429bafa0f0033daa0dc0f3d71d1d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7d10429bafa0f0033daa0dc0f3d71d1d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7d10429bafa0f0033daa0dc0f3d71d1d) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_key);
        tmp_cmp_expr_left_1 = par_key;
        tmp_cmp_expr_right_1 = mod_consts[29];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 647;
            type_description_1 = "oo";
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[30];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[31];
        tmp_level_value_1 = mod_consts[2];
        frame_7d10429bafa0f0033daa0dc0f3d71d1d->m_frame.f_lineno = 650;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 650;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[32],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[32]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 650;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var__get_plot_backend == NULL);
        var__get_plot_backend = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var__get_plot_backend);
        tmp_called_value_1 = var__get_plot_backend;
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        frame_7d10429bafa0f0033daa0dc0f3d71d1d->m_frame.f_lineno = 652;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 652;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7d10429bafa0f0033daa0dc0f3d71d1d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7d10429bafa0f0033daa0dc0f3d71d1d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7d10429bafa0f0033daa0dc0f3d71d1d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7d10429bafa0f0033daa0dc0f3d71d1d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d10429bafa0f0033daa0dc0f3d71d1d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d10429bafa0f0033daa0dc0f3d71d1d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d10429bafa0f0033daa0dc0f3d71d1d,
        type_description_1,
        par_key,
        var__get_plot_backend
    );


    // Release cached frame if used for exception.
    if (frame_7d10429bafa0f0033daa0dc0f3d71d1d == cache_frame_7d10429bafa0f0033daa0dc0f3d71d1d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7d10429bafa0f0033daa0dc0f3d71d1d);
        cache_frame_7d10429bafa0f0033daa0dc0f3d71d1d = NULL;
    }

    assertFrameObject(frame_7d10429bafa0f0033daa0dc0f3d71d1d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var__get_plot_backend);
    var__get_plot_backend = NULL;
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

    Py_XDECREF(var__get_plot_backend);
    var__get_plot_backend = NULL;
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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$config_init$$$function__9_register_converter_cb(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_key = python_pars[0];
    PyObject *var_deregister_matplotlib_converters = NULL;
    PyObject *var_register_matplotlib_converters = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_e47615fc9d9a28bc23bf983893c0ebdd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e47615fc9d9a28bc23bf983893c0ebdd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e47615fc9d9a28bc23bf983893c0ebdd)) {
        Py_XDECREF(cache_frame_e47615fc9d9a28bc23bf983893c0ebdd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e47615fc9d9a28bc23bf983893c0ebdd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e47615fc9d9a28bc23bf983893c0ebdd = MAKE_FUNCTION_FRAME(codeobj_e47615fc9d9a28bc23bf983893c0ebdd, module_pandas$core$config_init, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e47615fc9d9a28bc23bf983893c0ebdd->m_type_description == NULL);
    frame_e47615fc9d9a28bc23bf983893c0ebdd = cache_frame_e47615fc9d9a28bc23bf983893c0ebdd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e47615fc9d9a28bc23bf983893c0ebdd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e47615fc9d9a28bc23bf983893c0ebdd) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[33];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[34];
        tmp_level_value_1 = mod_consts[2];
        frame_e47615fc9d9a28bc23bf983893c0ebdd->m_frame.f_lineno = 673;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 673;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[35],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[35]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 673;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(var_deregister_matplotlib_converters == NULL);
        var_deregister_matplotlib_converters = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[36],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[36]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 673;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(var_register_matplotlib_converters == NULL);
        var_register_matplotlib_converters = tmp_assign_source_3;
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
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        frame_e47615fc9d9a28bc23bf983893c0ebdd->m_frame.f_lineno = 678;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 678;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 678;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_register_matplotlib_converters);
        tmp_called_value_1 = var_register_matplotlib_converters;
        frame_e47615fc9d9a28bc23bf983893c0ebdd->m_frame.f_lineno = 679;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 679;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(var_deregister_matplotlib_converters);
        tmp_called_value_2 = var_deregister_matplotlib_converters;
        frame_e47615fc9d9a28bc23bf983893c0ebdd->m_frame.f_lineno = 681;
        tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 681;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e47615fc9d9a28bc23bf983893c0ebdd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e47615fc9d9a28bc23bf983893c0ebdd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e47615fc9d9a28bc23bf983893c0ebdd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e47615fc9d9a28bc23bf983893c0ebdd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e47615fc9d9a28bc23bf983893c0ebdd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e47615fc9d9a28bc23bf983893c0ebdd,
        type_description_1,
        par_key,
        var_deregister_matplotlib_converters,
        var_register_matplotlib_converters
    );


    // Release cached frame if used for exception.
    if (frame_e47615fc9d9a28bc23bf983893c0ebdd == cache_frame_e47615fc9d9a28bc23bf983893c0ebdd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e47615fc9d9a28bc23bf983893c0ebdd);
        cache_frame_e47615fc9d9a28bc23bf983893c0ebdd = NULL;
    }

    assertFrameObject(frame_e47615fc9d9a28bc23bf983893c0ebdd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_deregister_matplotlib_converters);
    var_deregister_matplotlib_converters = NULL;
    CHECK_OBJECT(var_register_matplotlib_converters);
    Py_DECREF(var_register_matplotlib_converters);
    var_register_matplotlib_converters = NULL;
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

    Py_XDECREF(var_deregister_matplotlib_converters);
    var_deregister_matplotlib_converters = NULL;
    Py_XDECREF(var_register_matplotlib_converters);
    var_register_matplotlib_converters = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__1_use_bottleneck_cb() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__1_use_bottleneck_cb,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_48ffd9225c38c74827678ed4f64fe91d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$config_init,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__2_use_numexpr_cb() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__2_use_numexpr_cb,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_059f1d8d32f21ffefaa21557f5cfed11,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$config_init,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__3_use_numba_cb() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__3_use_numba_cb,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_39746ed63a0ebd20ea0a8f9eaa4c2cd6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$config_init,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__4_table_schema_cb() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__4_table_schema_cb,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_119e8427ae5a70456a40d619261765f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$config_init,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__5_is_terminal(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__5_is_terminal,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_88116bf82897ef6b511cbc6e29fc6f2d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$config_init,
        mod_consts[20],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth,
        mod_consts[157],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f0466501b00b4afb96b9826d38cfbacf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$config_init,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__7_use_inf_as_na_cb() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__7_use_inf_as_na_cb,
        mod_consts[204],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_770b6dd3da768736d3536a45ba094baa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$config_init,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__8_register_plotting_backend_cb() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__8_register_plotting_backend_cb,
        mod_consts[257],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7d10429bafa0f0033daa0dc0f3d71d1d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$config_init,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$config_init$$$function__9_register_converter_cb() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$config_init$$$function__9_register_converter_cb,
        mod_consts[263],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e47615fc9d9a28bc23bf983893c0ebdd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$config_init,
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

function_impl_code functable_pandas$core$config_init[] = {
    impl_pandas$core$config_init$$$function__1_use_bottleneck_cb,
    impl_pandas$core$config_init$$$function__2_use_numexpr_cb,
    impl_pandas$core$config_init$$$function__3_use_numba_cb,
    impl_pandas$core$config_init$$$function__4_table_schema_cb,
    impl_pandas$core$config_init$$$function__5_is_terminal,
    impl_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth,
    impl_pandas$core$config_init$$$function__7_use_inf_as_na_cb,
    impl_pandas$core$config_init$$$function__8_register_plotting_backend_cb,
    impl_pandas$core$config_init$$$function__9_register_converter_cb,
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

    function_impl_code *current = functable_pandas$core$config_init;
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

    if (offset > sizeof(functable_pandas$core$config_init) || offset < 0) {
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
        functable_pandas$core$config_init[offset],
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
        module_pandas$core$config_init,
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
PyObject *modulecode_pandas$core$config_init(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pandas.core.config_init");

    // Store the module for future use.
    module_pandas$core$config_init = module;

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
        PRINT_STRING("pandas.core.config_init: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pandas.core.config_init: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pandas.core.config_init: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpandas$core$config_init\n");

    moduledict_pandas$core$config_init = MODULE_DICT(module_pandas$core$config_init);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pandas$core$config_init,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pandas$core$config_init,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[278]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pandas$core$config_init,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$config_init,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$config_init,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pandas$core$config_init);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pandas$core$config_init);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_with_10__enter = NULL;
    PyObject *tmp_with_10__exit = NULL;
    nuitka_bool tmp_with_10__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_10__source = NULL;
    PyObject *tmp_with_11__enter = NULL;
    PyObject *tmp_with_11__exit = NULL;
    nuitka_bool tmp_with_11__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_11__source = NULL;
    PyObject *tmp_with_12__enter = NULL;
    PyObject *tmp_with_12__exit = NULL;
    nuitka_bool tmp_with_12__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_12__source = NULL;
    PyObject *tmp_with_13__enter = NULL;
    PyObject *tmp_with_13__exit = NULL;
    nuitka_bool tmp_with_13__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_13__source = NULL;
    PyObject *tmp_with_14__enter = NULL;
    PyObject *tmp_with_14__exit = NULL;
    nuitka_bool tmp_with_14__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_14__source = NULL;
    PyObject *tmp_with_15__enter = NULL;
    PyObject *tmp_with_15__exit = NULL;
    nuitka_bool tmp_with_15__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_15__source = NULL;
    PyObject *tmp_with_16__enter = NULL;
    PyObject *tmp_with_16__exit = NULL;
    nuitka_bool tmp_with_16__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_16__source = NULL;
    PyObject *tmp_with_17__enter = NULL;
    PyObject *tmp_with_17__exit = NULL;
    nuitka_bool tmp_with_17__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_17__source = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    PyObject *tmp_with_3__enter = NULL;
    PyObject *tmp_with_3__exit = NULL;
    nuitka_bool tmp_with_3__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_3__source = NULL;
    PyObject *tmp_with_4__enter = NULL;
    PyObject *tmp_with_4__exit = NULL;
    nuitka_bool tmp_with_4__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_4__source = NULL;
    PyObject *tmp_with_5__enter = NULL;
    PyObject *tmp_with_5__exit = NULL;
    nuitka_bool tmp_with_5__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_5__source = NULL;
    PyObject *tmp_with_6__enter = NULL;
    PyObject *tmp_with_6__exit = NULL;
    nuitka_bool tmp_with_6__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_6__source = NULL;
    PyObject *tmp_with_7__enter = NULL;
    PyObject *tmp_with_7__exit = NULL;
    nuitka_bool tmp_with_7__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_7__source = NULL;
    PyObject *tmp_with_8__enter = NULL;
    PyObject *tmp_with_8__exit = NULL;
    nuitka_bool tmp_with_8__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_8__source = NULL;
    PyObject *tmp_with_9__enter = NULL;
    PyObject *tmp_with_9__exit = NULL;
    nuitka_bool tmp_with_9__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_9__source = NULL;
    struct Nuitka_FrameObject *frame_929860c9d36c161b6d170f2111d32473;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
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
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
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
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_preserved_type_4;
    PyObject *exception_preserved_value_4;
    PyTracebackObject *exception_preserved_tb_4;
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
    PyObject *exception_preserved_type_5;
    PyObject *exception_preserved_value_5;
    PyTracebackObject *exception_preserved_tb_5;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_preserved_type_6;
    PyObject *exception_preserved_value_6;
    PyTracebackObject *exception_preserved_tb_6;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_preserved_type_7;
    PyObject *exception_preserved_value_7;
    PyTracebackObject *exception_preserved_tb_7;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_preserved_type_8;
    PyObject *exception_preserved_value_8;
    PyTracebackObject *exception_preserved_tb_8;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_preserved_type_9;
    PyObject *exception_preserved_value_9;
    PyTracebackObject *exception_preserved_tb_9;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_preserved_type_10;
    PyObject *exception_preserved_value_10;
    PyTracebackObject *exception_preserved_tb_10;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_preserved_type_11;
    PyObject *exception_preserved_value_11;
    PyTracebackObject *exception_preserved_tb_11;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *exception_preserved_type_12;
    PyObject *exception_preserved_value_12;
    PyTracebackObject *exception_preserved_tb_12;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *exception_preserved_type_13;
    PyObject *exception_preserved_value_13;
    PyTracebackObject *exception_preserved_tb_13;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    PyObject *exception_preserved_type_14;
    PyObject *exception_preserved_value_14;
    PyTracebackObject *exception_preserved_tb_14;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    PyObject *exception_preserved_type_15;
    PyObject *exception_preserved_value_15;
    PyTracebackObject *exception_preserved_tb_15;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    PyObject *exception_keeper_type_60;
    PyObject *exception_keeper_value_60;
    PyTracebackObject *exception_keeper_tb_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    PyObject *exception_keeper_type_61;
    PyObject *exception_keeper_value_61;
    PyTracebackObject *exception_keeper_tb_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
    PyObject *exception_keeper_type_62;
    PyObject *exception_keeper_value_62;
    PyTracebackObject *exception_keeper_tb_62;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
    PyObject *exception_preserved_type_16;
    PyObject *exception_preserved_value_16;
    PyTracebackObject *exception_preserved_tb_16;
    PyObject *exception_keeper_type_63;
    PyObject *exception_keeper_value_63;
    PyTracebackObject *exception_keeper_tb_63;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
    PyObject *exception_keeper_type_64;
    PyObject *exception_keeper_value_64;
    PyTracebackObject *exception_keeper_tb_64;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
    PyObject *exception_keeper_type_65;
    PyObject *exception_keeper_value_65;
    PyTracebackObject *exception_keeper_tb_65;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
    PyObject *exception_keeper_type_66;
    PyObject *exception_keeper_value_66;
    PyTracebackObject *exception_keeper_tb_66;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
    PyObject *exception_preserved_type_17;
    PyObject *exception_preserved_value_17;
    PyTracebackObject *exception_preserved_tb_17;
    PyObject *exception_keeper_type_67;
    PyObject *exception_keeper_value_67;
    PyTracebackObject *exception_keeper_tb_67;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
    PyObject *exception_keeper_type_68;
    PyObject *exception_keeper_value_68;
    PyTracebackObject *exception_keeper_tb_68;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_68;
    PyObject *exception_keeper_type_69;
    PyObject *exception_keeper_value_69;
    PyTracebackObject *exception_keeper_tb_69;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_69;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_929860c9d36c161b6d170f2111d32473 = MAKE_MODULE_FRAME(codeobj_929860c9d36c161b6d170f2111d32473, module_pandas$core$config_init);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_929860c9d36c161b6d170f2111d32473);
    assert(Py_REFCNT(frame_929860c9d36c161b6d170f2111d32473) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[41], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[42], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[21];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[2];
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 12;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[44];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[2];
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 14;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_import_name_from_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[45],
                mod_consts[2]
            );
        } else {
            tmp_import_name_from_1 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[45]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[46],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[46]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[44];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pandas$core$config_init;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[47];
        tmp_level_value_3 = mod_consts[2];
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 15;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[48],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[48]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[49],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[49]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[50],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[50]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[51],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[51]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[52],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[52]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[53],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[53]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_pandas$core$config_init,
                mod_consts[54],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[54]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_13);
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
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_pandas$core$config_init$$$function__1_use_bottleneck_cb();

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_pandas$core$config_init$$$function__2_use_numexpr_cb();

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[61];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_pandas$core$config_init$$$function__3_use_numba_cb();

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_19);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_2;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 69;
        tmp_assign_source_20 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[65], 0)
        );

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_1 = tmp_with_1__source;
        tmp_called_value_1 = LOOKUP_SPECIAL(tmp_expression_value_1, mod_consts[66]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_2;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 69;
        tmp_assign_source_21 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_assign_source_22 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[67]);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_assign_source_23;
        tmp_assign_source_23 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_23;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_4;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[68]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_4;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[69];
        tmp_kw_call_arg_value_1_1 = Py_True;
        tmp_kw_call_arg_value_2_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_kw_call_arg_value_2_1 == NULL)) {
            tmp_kw_call_arg_value_2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 73;

            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_0_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
            tmp_kw_call_dict_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 74;

            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_1_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
            tmp_kw_call_dict_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 75;

            goto try_except_handler_4;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 70;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[70]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_4;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[68]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_4;
        }
        tmp_kw_call_arg_value_0_2 = mod_consts[71];
        tmp_kw_call_arg_value_1_2 = Py_True;
        tmp_kw_call_arg_value_2_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_kw_call_arg_value_2_2 == NULL)) {
            tmp_kw_call_arg_value_2_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_kw_call_arg_value_2_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 78;

            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_0_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_kw_call_dict_value_0_2 == NULL)) {
            tmp_kw_call_dict_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 78;

            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_1_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_kw_call_dict_value_1_2 == NULL)) {
            tmp_kw_call_dict_value_1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_kw_call_dict_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 78;

            goto try_except_handler_4;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 77;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[70]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_kw_call_arg_value_2_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_3;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_4;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[68]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_4;
        }
        tmp_kw_call_arg_value_0_3 = mod_consts[72];
        tmp_kw_call_arg_value_1_3 = Py_False;
        tmp_kw_call_arg_value_2_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_kw_call_arg_value_2_3 == NULL)) {
            tmp_kw_call_arg_value_2_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_kw_call_arg_value_2_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 81;

            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_0_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_kw_call_dict_value_0_3 == NULL)) {
            tmp_kw_call_dict_value_0_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 81;

            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_1_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_kw_call_dict_value_1_3 == NULL)) {
            tmp_kw_call_dict_value_1_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_kw_call_dict_value_1_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 81;

            goto try_except_handler_4;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 80;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3, tmp_kw_call_arg_value_2_3};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[70]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_3);
    }
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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_2);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_2, exception_keeper_tb_2);
    PUBLISH_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_assign_source_24;
        tmp_assign_source_24 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        tmp_args_element_value_1 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_2 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_3 = EXC_TRACEBACK(PyThreadState_GET());
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_5;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 81;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_5;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 69;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_5;
    branch_end_1:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
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

    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 81;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[73]);

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_4);
            Py_XDECREF(exception_keeper_value_4);
            Py_XDECREF(exception_keeper_tb_4);

            exception_lineno = 81;

            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 81;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_7, mod_consts[73]);

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[76];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[80];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[86];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[90];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[92];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[96];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[98];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[100];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[102];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[104];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[108];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[110];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[112];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[114];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[116];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[118];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[122];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[124];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[126];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[128];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[130];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[132];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[134];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[136];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;


        tmp_assign_source_57 = MAKE_FUNCTION_pandas$core$config_init$$$function__4_table_schema_cb();

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = PyDict_Copy(mod_consts[139]);


        tmp_assign_source_58 = MAKE_FUNCTION_pandas$core$config_init$$$function__5_is_terminal(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_58);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;

            goto try_except_handler_6;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 341;
        tmp_assign_source_59 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[141], 0)
        );

        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;

            goto try_except_handler_6;
        }
        assert(tmp_with_2__source == NULL);
        tmp_with_2__source = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_6 = tmp_with_2__source;
        tmp_called_value_8 = LOOKUP_SPECIAL(tmp_expression_value_6, mod_consts[66]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;

            goto try_except_handler_6;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 341;
        tmp_assign_source_60 = CALL_FUNCTION_NO_ARGS(tmp_called_value_8);
        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;

            goto try_except_handler_6;
        }
        assert(tmp_with_2__enter == NULL);
        tmp_with_2__enter = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_7 = tmp_with_2__source;
        tmp_assign_source_61 = LOOKUP_SPECIAL(tmp_expression_value_7, mod_consts[67]);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;

            goto try_except_handler_6;
        }
        assert(tmp_with_2__exit == NULL);
        tmp_with_2__exit = tmp_assign_source_61;
    }
    {
        nuitka_bool tmp_assign_source_62;
        tmp_assign_source_62 = NUITKA_BOOL_TRUE;
        tmp_with_2__indicator = tmp_assign_source_62;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_6;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_arg_value_1_4;
        PyObject *tmp_kw_call_arg_value_2_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_8;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[68]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_4 = mod_consts[142];
        tmp_kw_call_arg_value_1_4 = mod_consts[143];
        tmp_kw_call_arg_value_2_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_kw_call_arg_value_2_4 == NULL)) {
            tmp_kw_call_arg_value_2_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_kw_call_arg_value_2_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 342;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_kw_call_dict_value_0_4 == NULL)) {
            tmp_kw_call_dict_value_0_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_kw_call_dict_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 342;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 342;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_4, tmp_kw_call_arg_value_2_4};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_9, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_7;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_arg_value_1_5;
        PyObject *tmp_kw_call_arg_value_2_5;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_list_element_1;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto try_except_handler_8;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[68]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_5 = mod_consts[145];
        tmp_kw_call_arg_value_1_5 = Py_None;
        tmp_kw_call_arg_value_2_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_kw_call_arg_value_2_5 == NULL)) {
            tmp_kw_call_arg_value_2_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_kw_call_arg_value_2_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 346;

            goto try_except_handler_8;
        }
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 347;

            goto try_except_handler_8;
        }
        tmp_list_element_1 = Py_None;
        tmp_args_element_value_4 = PyList_New(2);
        PyList_SET_ITEM0(tmp_args_element_value_4, 0, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_args_element_value_4, 1, tmp_list_element_1);
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_4);
        goto try_except_handler_8;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 347;
        tmp_kw_call_dict_value_0_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_kw_call_dict_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 347;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 343;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_5, tmp_kw_call_arg_value_2_5};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_10, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_kw_call_dict_value_0_5);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_8;
        PyObject *tmp_kw_call_value_0_1;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_8;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[68]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_8;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 349;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 349;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_call_result_8 = CALL_FUNCTION_WITH_POSARGS2_KWSPLIT(tmp_called_value_12, mod_consts[146], kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_12);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_9;
        PyObject *tmp_kw_call_arg_value_0_6;
        PyObject *tmp_kw_call_arg_value_1_6;
        PyObject *tmp_kw_call_arg_value_2_6;
        PyObject *tmp_kw_call_dict_value_0_6;
        PyObject *tmp_called_value_14;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto try_except_handler_8;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[68]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_6 = mod_consts[147];
        tmp_kw_call_arg_value_1_6 = mod_consts[148];
        tmp_kw_call_arg_value_2_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_kw_call_arg_value_2_6 == NULL)) {
            tmp_kw_call_arg_value_2_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_kw_call_arg_value_2_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 353;

            goto try_except_handler_8;
        }
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 354;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 354;
        tmp_kw_call_dict_value_0_6 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_14, mod_consts[149]);

        if (tmp_kw_call_dict_value_0_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 354;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 350;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_6, tmp_kw_call_arg_value_1_6, tmp_kw_call_arg_value_2_6};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_6};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_13, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_kw_call_dict_value_0_6);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_10;
        PyObject *tmp_kw_call_arg_value_0_7;
        PyObject *tmp_kw_call_arg_value_1_7;
        PyObject *tmp_kw_call_arg_value_2_7;
        PyObject *tmp_kw_call_dict_value_0_7;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;

            goto try_except_handler_8;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[68]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_7 = mod_consts[150];
        tmp_kw_call_arg_value_1_7 = mod_consts[151];
        tmp_kw_call_arg_value_2_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_kw_call_arg_value_2_7 == NULL)) {
            tmp_kw_call_arg_value_2_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_kw_call_arg_value_2_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 356;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_kw_call_dict_value_0_7 == NULL)) {
            tmp_kw_call_dict_value_0_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_kw_call_dict_value_0_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 356;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 356;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_7, tmp_kw_call_arg_value_1_7, tmp_kw_call_arg_value_2_7};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_7};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_15, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_15);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_11;
        PyObject *tmp_kw_call_arg_value_0_8;
        PyObject *tmp_kw_call_arg_value_1_8;
        PyObject *tmp_kw_call_arg_value_2_8;
        PyObject *tmp_kw_call_dict_value_0_8;
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_arg_element_1;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto try_except_handler_8;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[68]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_8 = mod_consts[152];
        tmp_kw_call_arg_value_1_8 = mod_consts[153];
        tmp_kw_call_arg_value_2_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_kw_call_arg_value_2_8 == NULL)) {
            tmp_kw_call_arg_value_2_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_kw_call_arg_value_2_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 360;

            goto try_except_handler_8;
        }
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 361;

            goto try_except_handler_8;
        }
        tmp_call_arg_element_1 = LIST_COPY(mod_consts[154]);
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 361;
        tmp_kw_call_dict_value_0_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_kw_call_dict_value_0_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 361;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 357;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_8, tmp_kw_call_arg_value_1_8, tmp_kw_call_arg_value_2_8};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_8};
            tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_16, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_kw_call_dict_value_0_8);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_12;
        PyObject *tmp_kw_call_arg_value_0_9;
        PyObject *tmp_kw_call_arg_value_1_9;
        PyObject *tmp_kw_call_arg_value_2_9;
        PyObject *tmp_kw_call_dict_value_0_9;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_8;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[68]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_9 = mod_consts[155];
        tmp_kw_call_arg_value_1_9 = mod_consts[156];
        tmp_kw_call_arg_value_2_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_kw_call_arg_value_2_9 == NULL)) {
            tmp_kw_call_arg_value_2_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_kw_call_arg_value_2_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 363;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_kw_call_dict_value_0_9 == NULL)) {
            tmp_kw_call_dict_value_0_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_kw_call_dict_value_0_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 363;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 363;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_9, tmp_kw_call_arg_value_1_9, tmp_kw_call_arg_value_2_9};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_9};
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_18, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_18);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_assign_source_63;


        tmp_assign_source_63 = MAKE_FUNCTION_pandas$core$config_init$$$function__6__deprecate_negative_int_max_colwidth();

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_63);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_13;
        PyObject *tmp_kw_call_arg_value_0_10;
        PyObject *tmp_kw_call_arg_value_1_10;
        PyObject *tmp_kw_call_arg_value_2_10;
        PyObject *tmp_kw_call_dict_value_0_10;
        PyObject *tmp_called_value_20;
        PyObject *tmp_call_arg_element_2;
        PyObject *tmp_kw_call_dict_value_1_4;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto try_except_handler_8;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[68]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_10 = mod_consts[158];
        tmp_kw_call_arg_value_1_10 = mod_consts[159];
        tmp_kw_call_arg_value_2_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_kw_call_arg_value_2_10 == NULL)) {
            tmp_kw_call_arg_value_2_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_kw_call_arg_value_2_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 380;

            goto try_except_handler_8;
        }
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 381;

            goto try_except_handler_8;
        }
        tmp_call_arg_element_2 = LIST_COPY(mod_consts[154]);
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 381;
        tmp_kw_call_dict_value_0_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_call_arg_element_2);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_kw_call_dict_value_0_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 381;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_1_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_kw_call_dict_value_1_4 == NULL)) {
            tmp_kw_call_dict_value_1_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[157]);
        }

        if (tmp_kw_call_dict_value_1_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_kw_call_dict_value_0_10);

            exception_lineno = 382;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 376;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_10, tmp_kw_call_arg_value_1_10, tmp_kw_call_arg_value_2_10};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_10, tmp_kw_call_dict_value_1_4};
            tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_19, args, kw_values, mod_consts[70]);
        }

        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_kw_call_dict_value_0_10);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_called_value_21;
        PyObject *tmp_call_result_14;
        int tmp_truth_name_1;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 384;
        tmp_call_result_14 = CALL_FUNCTION_NO_ARGS(tmp_called_value_21);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto try_except_handler_8;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_14);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_14);

            exception_lineno = 384;

            goto try_except_handler_8;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_14);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[2];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_64);
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[161];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_65);
    }
    branch_end_5:;
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_15;
        PyObject *tmp_kw_call_arg_value_0_11;
        PyObject *tmp_kw_call_arg_value_1_11;
        PyObject *tmp_kw_call_arg_value_2_11;
        PyObject *tmp_kw_call_dict_value_0_11;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;

            goto try_except_handler_8;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[68]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_11 = mod_consts[162];
        tmp_kw_call_arg_value_1_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[160]);

        if (unlikely(tmp_kw_call_arg_value_1_11 == NULL)) {
            tmp_kw_call_arg_value_1_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[160]);
        }

        if (tmp_kw_call_arg_value_1_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 389;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_2_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_kw_call_arg_value_2_11 == NULL)) {
            tmp_kw_call_arg_value_2_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_kw_call_arg_value_2_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 389;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_kw_call_dict_value_0_11 == NULL)) {
            tmp_kw_call_dict_value_0_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_kw_call_dict_value_0_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 389;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 388;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_11, tmp_kw_call_arg_value_1_11, tmp_kw_call_arg_value_2_11};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_11};
            tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_22, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_22);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_16;
        PyObject *tmp_kw_call_arg_value_0_12;
        PyObject *tmp_kw_call_arg_value_1_12;
        PyObject *tmp_kw_call_arg_value_2_12;
        PyObject *tmp_kw_call_dict_value_0_12;
        PyObject *tmp_called_value_24;
        PyObject *tmp_call_arg_element_3;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto try_except_handler_8;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[68]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_12 = mod_consts[163];
        tmp_kw_call_arg_value_1_12 = mod_consts[164];
        tmp_kw_call_arg_value_2_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_kw_call_arg_value_2_12 == NULL)) {
            tmp_kw_call_arg_value_2_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_kw_call_arg_value_2_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 394;

            goto try_except_handler_8;
        }
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 395;

            goto try_except_handler_8;
        }
        tmp_call_arg_element_3 = LIST_COPY(mod_consts[165]);
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 395;
        tmp_kw_call_dict_value_0_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_call_arg_element_3);
        Py_DECREF(tmp_call_arg_element_3);
        if (tmp_kw_call_dict_value_0_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 395;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 391;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_12, tmp_kw_call_arg_value_1_12, tmp_kw_call_arg_value_2_12};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_12};
            tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_23, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_kw_call_dict_value_0_12);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_17;
        PyObject *tmp_kw_call_arg_value_0_13;
        PyObject *tmp_kw_call_arg_value_1_13;
        PyObject *tmp_kw_call_arg_value_2_13;
        PyObject *tmp_kw_call_dict_value_0_13;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_8;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[68]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_13 = mod_consts[166];
        tmp_kw_call_arg_value_1_13 = mod_consts[167];
        tmp_kw_call_arg_value_2_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_kw_call_arg_value_2_13 == NULL)) {
            tmp_kw_call_arg_value_2_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_kw_call_arg_value_2_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 397;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_kw_call_dict_value_0_13 == NULL)) {
            tmp_kw_call_dict_value_0_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_kw_call_dict_value_0_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 397;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 397;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_13, tmp_kw_call_arg_value_1_13, tmp_kw_call_arg_value_2_13};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_13};
            tmp_call_result_17 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_25, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_25);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_18;
        PyObject *tmp_kw_call_arg_value_0_14;
        PyObject *tmp_kw_call_arg_value_1_14;
        PyObject *tmp_kw_call_arg_value_2_14;
        PyObject *tmp_kw_call_dict_value_0_14;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto try_except_handler_8;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[68]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_14 = mod_consts[168];
        tmp_kw_call_arg_value_1_14 = mod_consts[169];
        tmp_kw_call_arg_value_2_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_kw_call_arg_value_2_14 == NULL)) {
            tmp_kw_call_arg_value_2_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_kw_call_arg_value_2_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 399;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_kw_call_dict_value_0_14 == NULL)) {
            tmp_kw_call_dict_value_0_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_kw_call_dict_value_0_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 399;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 398;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_14, tmp_kw_call_arg_value_1_14, tmp_kw_call_arg_value_2_14};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_14};
            tmp_call_result_18 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_26, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_26);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_19;
        PyObject *tmp_kw_call_arg_value_0_15;
        PyObject *tmp_kw_call_arg_value_1_15;
        PyObject *tmp_kw_call_arg_value_2_15;
        PyObject *tmp_kw_call_dict_value_0_15;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;

            goto try_except_handler_8;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[68]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_15 = mod_consts[170];
        tmp_kw_call_arg_value_1_15 = Py_True;
        tmp_kw_call_arg_value_2_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_kw_call_arg_value_2_15 == NULL)) {
            tmp_kw_call_arg_value_2_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_kw_call_arg_value_2_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 401;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_kw_call_dict_value_0_15 == NULL)) {
            tmp_kw_call_dict_value_0_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_kw_call_dict_value_0_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 401;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 401;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_15, tmp_kw_call_arg_value_1_15, tmp_kw_call_arg_value_2_15};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_15};
            tmp_call_result_19 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_27, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_27);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_20;
        PyObject *tmp_kw_call_arg_value_0_16;
        PyObject *tmp_kw_call_arg_value_1_16;
        PyObject *tmp_kw_call_arg_value_2_16;
        PyObject *tmp_kw_call_dict_value_0_16;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_8;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[68]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_16 = mod_consts[171];
        tmp_kw_call_arg_value_1_16 = mod_consts[172];
        tmp_kw_call_arg_value_2_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_kw_call_arg_value_2_16 == NULL)) {
            tmp_kw_call_arg_value_2_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_kw_call_arg_value_2_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 402;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_kw_call_dict_value_0_16 == NULL)) {
            tmp_kw_call_dict_value_0_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_kw_call_dict_value_0_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 402;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 402;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_16, tmp_kw_call_arg_value_1_16, tmp_kw_call_arg_value_2_16};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_16};
            tmp_call_result_20 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_28, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_28);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_21;
        PyObject *tmp_kw_call_arg_value_0_17;
        PyObject *tmp_kw_call_arg_value_1_17;
        PyObject *tmp_kw_call_arg_value_2_17;
        PyObject *tmp_kw_call_dict_value_0_17;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;

            goto try_except_handler_8;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[68]);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_17 = mod_consts[173];
        tmp_kw_call_arg_value_1_17 = Py_True;
        tmp_kw_call_arg_value_2_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_kw_call_arg_value_2_17 == NULL)) {
            tmp_kw_call_arg_value_2_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_kw_call_arg_value_2_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 403;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_kw_call_dict_value_0_17 == NULL)) {
            tmp_kw_call_dict_value_0_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_kw_call_dict_value_0_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 403;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 403;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_17, tmp_kw_call_arg_value_1_17, tmp_kw_call_arg_value_2_17};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_17};
            tmp_call_result_21 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_29, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_29);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto try_except_handler_8;
        }
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[68]);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto try_except_handler_8;
        }
        tmp_args_element_value_5 = mod_consts[174];
        tmp_args_element_value_6 = Py_True;
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 404;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 404;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_22 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_30, call_args);
        }

        Py_DECREF(tmp_called_value_30);
        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_23;
        PyObject *tmp_kw_call_arg_value_0_18;
        PyObject *tmp_kw_call_arg_value_1_18;
        PyObject *tmp_kw_call_arg_value_2_18;
        PyObject *tmp_kw_call_dict_value_0_18;
        PyObject *tmp_called_value_32;
        PyObject *tmp_call_arg_element_4;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto try_except_handler_8;
        }
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[68]);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_18 = mod_consts[175];
        tmp_kw_call_arg_value_1_18 = mod_consts[164];
        tmp_kw_call_arg_value_2_18 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_kw_call_arg_value_2_18 == NULL)) {
            tmp_kw_call_arg_value_2_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        if (tmp_kw_call_arg_value_2_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 408;

            goto try_except_handler_8;
        }
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 409;

            goto try_except_handler_8;
        }
        tmp_call_arg_element_4 = LIST_COPY(mod_consts[176]);
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 409;
        tmp_kw_call_dict_value_0_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_call_arg_element_4);
        Py_DECREF(tmp_call_arg_element_4);
        if (tmp_kw_call_dict_value_0_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 409;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 405;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_18, tmp_kw_call_arg_value_1_18, tmp_kw_call_arg_value_2_18};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_18};
            tmp_call_result_23 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_31, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_kw_call_dict_value_0_18);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_24;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto try_except_handler_8;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[68]);
        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto try_except_handler_8;
        }
        tmp_args_element_value_8 = mod_consts[177];
        tmp_args_element_value_9 = Py_None;
        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_args_element_value_10 == NULL)) {
            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 411;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 411;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_24 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_33, call_args);
        }

        Py_DECREF(tmp_called_value_33);
        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_25;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;

            goto try_except_handler_8;
        }
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[68]);
        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;

            goto try_except_handler_8;
        }
        tmp_args_element_value_11 = mod_consts[178];
        tmp_args_element_value_12 = mod_consts[167];
        tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_args_element_value_13 == NULL)) {
            tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 412;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 412;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_call_result_25 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_34, call_args);
        }

        Py_DECREF(tmp_called_value_34);
        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_26;
        PyObject *tmp_kw_call_arg_value_0_19;
        PyObject *tmp_kw_call_arg_value_1_19;
        PyObject *tmp_kw_call_arg_value_2_19;
        PyObject *tmp_kw_call_dict_value_0_19;
        PyObject *tmp_called_value_36;
        PyObject *tmp_call_arg_element_5;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto try_except_handler_8;
        }
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[68]);
        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_19 = mod_consts[179];
        tmp_kw_call_arg_value_1_19 = mod_consts[180];
        tmp_kw_call_arg_value_2_19 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_kw_call_arg_value_2_19 == NULL)) {
            tmp_kw_call_arg_value_2_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        if (tmp_kw_call_arg_value_2_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 414;

            goto try_except_handler_8;
        }
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 414;

            goto try_except_handler_8;
        }
        tmp_call_arg_element_5 = LIST_COPY(mod_consts[154]);
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 414;
        tmp_kw_call_dict_value_0_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_call_arg_element_5);
        Py_DECREF(tmp_call_arg_element_5);
        if (tmp_kw_call_dict_value_0_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 414;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 413;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_19, tmp_kw_call_arg_value_1_19, tmp_kw_call_arg_value_2_19};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_19};
            tmp_call_result_26 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_35, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_kw_call_dict_value_0_19);
        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_27;
        PyObject *tmp_kw_call_arg_value_0_20;
        PyObject *tmp_kw_call_arg_value_1_20;
        PyObject *tmp_kw_call_arg_value_2_20;
        PyObject *tmp_kw_call_dict_value_0_20;
        PyObject *tmp_called_value_38;
        PyObject *tmp_call_arg_element_6;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto try_except_handler_8;
        }
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[68]);
        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_20 = mod_consts[181];
        tmp_kw_call_arg_value_1_20 = Py_True;
        tmp_kw_call_arg_value_2_20 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_kw_call_arg_value_2_20 == NULL)) {
            tmp_kw_call_arg_value_2_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_kw_call_arg_value_2_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 419;

            goto try_except_handler_8;
        }
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 420;

            goto try_except_handler_8;
        }
        tmp_call_arg_element_6 = LIST_COPY(mod_consts[182]);
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 420;
        tmp_kw_call_dict_value_0_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_call_arg_element_6);
        Py_DECREF(tmp_call_arg_element_6);
        if (tmp_kw_call_dict_value_0_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 420;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 416;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_20, tmp_kw_call_arg_value_1_20, tmp_kw_call_arg_value_2_20};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_20};
            tmp_call_result_27 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_37, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_kw_call_dict_value_0_20);
        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_call_result_28;
        PyObject *tmp_kw_call_arg_value_0_21;
        PyObject *tmp_kw_call_arg_value_1_21;
        PyObject *tmp_kw_call_arg_value_2_21;
        PyObject *tmp_kw_call_dict_value_0_21;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto try_except_handler_8;
        }
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[68]);
        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_21 = mod_consts[183];
        tmp_kw_call_arg_value_1_21 = Py_False;
        tmp_kw_call_arg_value_2_21 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_kw_call_arg_value_2_21 == NULL)) {
            tmp_kw_call_arg_value_2_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_kw_call_arg_value_2_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 423;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_21 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_kw_call_dict_value_0_21 == NULL)) {
            tmp_kw_call_dict_value_0_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_kw_call_dict_value_0_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 423;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 422;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_21, tmp_kw_call_arg_value_1_21, tmp_kw_call_arg_value_2_21};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_21};
            tmp_call_result_28 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_39, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_39);
        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_call_result_29;
        PyObject *tmp_kw_call_arg_value_0_22;
        PyObject *tmp_kw_call_arg_value_1_22;
        PyObject *tmp_kw_call_arg_value_2_22;
        PyObject *tmp_kw_call_dict_value_0_22;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_8;
        }
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[68]);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_22 = mod_consts[184];
        tmp_kw_call_arg_value_1_22 = Py_False;
        tmp_kw_call_arg_value_2_22 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_kw_call_arg_value_2_22 == NULL)) {
            tmp_kw_call_arg_value_2_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_kw_call_arg_value_2_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 426;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_22 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_kw_call_dict_value_0_22 == NULL)) {
            tmp_kw_call_dict_value_0_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_kw_call_dict_value_0_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 426;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 425;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_22, tmp_kw_call_arg_value_1_22, tmp_kw_call_arg_value_2_22};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_22};
            tmp_call_result_29 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_40, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_40);
        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_30;
        PyObject *tmp_kw_call_arg_value_0_23;
        PyObject *tmp_kw_call_arg_value_1_23;
        PyObject *tmp_kw_call_arg_value_2_23;
        PyObject *tmp_kw_call_dict_value_0_23;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto try_except_handler_8;
        }
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[68]);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_23 = mod_consts[185];
        tmp_kw_call_arg_value_1_23 = Py_False;
        tmp_kw_call_arg_value_2_23 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_kw_call_arg_value_2_23 == NULL)) {
            tmp_kw_call_arg_value_2_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_kw_call_arg_value_2_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 428;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_23 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_kw_call_dict_value_0_23 == NULL)) {
            tmp_kw_call_dict_value_0_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_kw_call_dict_value_0_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 428;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 428;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_23, tmp_kw_call_arg_value_1_23, tmp_kw_call_arg_value_2_23};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_23};
            tmp_call_result_30 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_41, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_41);
        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_call_result_31;
        PyObject *tmp_kw_call_arg_value_0_24;
        PyObject *tmp_kw_call_arg_value_1_24;
        PyObject *tmp_kw_call_arg_value_2_24;
        PyObject *tmp_kw_call_dict_value_0_24;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto try_except_handler_8;
        }
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[68]);
        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_24 = mod_consts[186];
        tmp_kw_call_arg_value_1_24 = Py_True;
        tmp_kw_call_arg_value_2_24 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_kw_call_arg_value_2_24 == NULL)) {
            tmp_kw_call_arg_value_2_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_kw_call_arg_value_2_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 429;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_24 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_kw_call_dict_value_0_24 == NULL)) {
            tmp_kw_call_dict_value_0_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_kw_call_dict_value_0_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 429;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 429;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_24, tmp_kw_call_arg_value_1_24, tmp_kw_call_arg_value_2_24};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_24};
            tmp_call_result_31 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_42, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_42);
        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_result_32;
        PyObject *tmp_kw_call_arg_value_0_25;
        PyObject *tmp_kw_call_arg_value_1_25;
        PyObject *tmp_kw_call_arg_value_2_25;
        PyObject *tmp_kw_call_dict_value_0_25;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto try_except_handler_8;
        }
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[68]);
        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_25 = mod_consts[187];
        tmp_kw_call_arg_value_1_25 = Py_False;
        tmp_kw_call_arg_value_2_25 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_kw_call_arg_value_2_25 == NULL)) {
            tmp_kw_call_arg_value_2_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_kw_call_arg_value_2_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 430;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_25 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_kw_call_dict_value_0_25 == NULL)) {
            tmp_kw_call_dict_value_0_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_kw_call_dict_value_0_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 430;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 430;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_25, tmp_kw_call_arg_value_1_25, tmp_kw_call_arg_value_2_25};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_25};
            tmp_call_result_32 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_43, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_43);
        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_call_result_33;
        PyObject *tmp_kw_call_arg_value_0_26;
        PyObject *tmp_kw_call_arg_value_1_26;
        PyObject *tmp_kw_call_arg_value_2_26;
        PyObject *tmp_kw_call_dict_value_0_26;
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto try_except_handler_8;
        }
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[68]);
        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_26 = mod_consts[188];
        tmp_kw_call_arg_value_1_26 = Py_True;
        tmp_kw_call_arg_value_2_26 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_kw_call_arg_value_2_26 == NULL)) {
            tmp_kw_call_arg_value_2_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
        }

        if (tmp_kw_call_arg_value_2_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 432;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_26 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_kw_call_dict_value_0_26 == NULL)) {
            tmp_kw_call_dict_value_0_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_kw_call_dict_value_0_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 432;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 431;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_26, tmp_kw_call_arg_value_1_26, tmp_kw_call_arg_value_2_26};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_26};
            tmp_call_result_33 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_44, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_44);
        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_call_result_34;
        PyObject *tmp_kw_call_arg_value_0_27;
        PyObject *tmp_kw_call_arg_value_1_27;
        PyObject *tmp_kw_call_arg_value_2_27;
        PyObject *tmp_kw_call_dict_value_0_27;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto try_except_handler_8;
        }
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[68]);
        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_27 = mod_consts[189];
        tmp_kw_call_arg_value_1_27 = mod_consts[190];
        tmp_kw_call_arg_value_2_27 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_kw_call_arg_value_2_27 == NULL)) {
            tmp_kw_call_arg_value_2_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
        }

        if (tmp_kw_call_arg_value_2_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 435;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_27 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_kw_call_dict_value_0_27 == NULL)) {
            tmp_kw_call_dict_value_0_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_kw_call_dict_value_0_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 435;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 434;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_27, tmp_kw_call_arg_value_1_27, tmp_kw_call_arg_value_2_27};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_27};
            tmp_call_result_34 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_45, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_45);
        if (tmp_call_result_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_34);
    }
    {
        PyObject *tmp_called_value_46;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_call_result_35;
        PyObject *tmp_kw_call_arg_value_0_28;
        PyObject *tmp_kw_call_arg_value_1_28;
        PyObject *tmp_kw_call_arg_value_2_28;
        PyObject *tmp_kw_call_dict_value_0_28;
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;

            goto try_except_handler_8;
        }
        tmp_called_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[68]);
        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_28 = mod_consts[191];
        tmp_kw_call_arg_value_1_28 = Py_False;
        tmp_kw_call_arg_value_2_28 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_kw_call_arg_value_2_28 == NULL)) {
            tmp_kw_call_arg_value_2_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
        }

        if (tmp_kw_call_arg_value_2_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 437;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_28 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_kw_call_dict_value_0_28 == NULL)) {
            tmp_kw_call_dict_value_0_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_kw_call_dict_value_0_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 437;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 437;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_28, tmp_kw_call_arg_value_1_28, tmp_kw_call_arg_value_2_28};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_28};
            tmp_call_result_35 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_46, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_46);
        if (tmp_call_result_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_call_result_36;
        PyObject *tmp_kw_call_arg_value_0_29;
        PyObject *tmp_kw_call_arg_value_1_29;
        PyObject *tmp_kw_call_arg_value_2_29;
        PyObject *tmp_kw_call_dict_value_0_29;
        PyObject *tmp_kw_call_dict_value_1_5;
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;

            goto try_except_handler_8;
        }
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[68]);
        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_29 = mod_consts[192];
        tmp_kw_call_arg_value_1_29 = Py_False;
        tmp_kw_call_arg_value_2_29 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_kw_call_arg_value_2_29 == NULL)) {
            tmp_kw_call_arg_value_2_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_kw_call_arg_value_2_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 441;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_29 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_kw_call_dict_value_0_29 == NULL)) {
            tmp_kw_call_dict_value_0_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_kw_call_dict_value_0_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 442;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_1_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_kw_call_dict_value_1_5 == NULL)) {
            tmp_kw_call_dict_value_1_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
        }

        if (tmp_kw_call_dict_value_1_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 443;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 438;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_29, tmp_kw_call_arg_value_1_29, tmp_kw_call_arg_value_2_29};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_29, tmp_kw_call_dict_value_1_5};
            tmp_call_result_36 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_47, args, kw_values, mod_consts[70]);
        }

        Py_DECREF(tmp_called_value_47);
        if (tmp_call_result_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_call_result_37;
        PyObject *tmp_kw_call_arg_value_0_30;
        PyObject *tmp_kw_call_arg_value_1_30;
        PyObject *tmp_kw_call_arg_value_2_30;
        PyObject *tmp_kw_call_dict_value_0_30;
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto try_except_handler_8;
        }
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[68]);
        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_30 = mod_consts[193];
        tmp_kw_call_arg_value_1_30 = mod_consts[194];
        tmp_kw_call_arg_value_2_30 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_kw_call_arg_value_2_30 == NULL)) {
            tmp_kw_call_arg_value_2_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_kw_call_arg_value_2_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 445;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_30 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_kw_call_dict_value_0_30 == NULL)) {
            tmp_kw_call_dict_value_0_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_kw_call_dict_value_0_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 445;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 445;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_30, tmp_kw_call_arg_value_1_30, tmp_kw_call_arg_value_2_30};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_30};
            tmp_call_result_37 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_48, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_48);
        if (tmp_call_result_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_call_result_38;
        PyObject *tmp_kw_call_arg_value_0_31;
        PyObject *tmp_kw_call_arg_value_1_31;
        PyObject *tmp_kw_call_arg_value_2_31;
        PyObject *tmp_kw_call_dict_value_0_31;
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_8;
        }
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[68]);
        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_8;
        }
        tmp_kw_call_arg_value_0_31 = mod_consts[195];
        tmp_kw_call_arg_value_1_31 = Py_True;
        tmp_kw_call_arg_value_2_31 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_kw_call_arg_value_2_31 == NULL)) {
            tmp_kw_call_arg_value_2_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_kw_call_arg_value_2_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 447;

            goto try_except_handler_8;
        }
        tmp_kw_call_dict_value_0_31 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_kw_call_dict_value_0_31 == NULL)) {
            tmp_kw_call_dict_value_0_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_kw_call_dict_value_0_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 447;

            goto try_except_handler_8;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 446;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_31, tmp_kw_call_arg_value_1_31, tmp_kw_call_arg_value_2_31};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_31};
            tmp_call_result_38 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_49, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_49);
        if (tmp_call_result_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_38);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_6 == NULL) {
        exception_keeper_tb_6 = MAKE_TRACEBACK(frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_6);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_keeper_tb_6 = ADD_TRACEBACK(exception_keeper_tb_6, frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_6);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_6, exception_keeper_tb_6);
    PUBLISH_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
    // Tried code:
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        nuitka_bool tmp_assign_source_66;
        tmp_assign_source_66 = NUITKA_BOOL_FALSE;
        tmp_with_2__indicator = tmp_assign_source_66;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_50;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_50 = tmp_with_2__exit;
        tmp_args_element_value_14 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_15 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_16 = EXC_TRACEBACK(PyThreadState_GET());
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 447;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_50, call_args);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto try_except_handler_9;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto try_except_handler_9;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 447;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_9;
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 341;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_9;
    branch_end_6:;
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

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_7;
    // End of try:
    try_end_7:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto try_end_6;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_6:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_8;
        nuitka_bool tmp_cmp_expr_left_5;
        nuitka_bool tmp_cmp_expr_right_5;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_5 = tmp_with_2__indicator;
        tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_8 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_51;
        PyObject *tmp_call_result_39;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_51 = tmp_with_2__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 447;
        tmp_call_result_39 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_51, mod_consts[73]);

        if (tmp_call_result_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_8);
            Py_XDECREF(exception_keeper_value_8);
            Py_XDECREF(exception_keeper_tb_8);

            exception_lineno = 447;

            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_39);
    }
    branch_no_8:;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_6;
    // End of try:
    try_end_8:;
    {
        bool tmp_condition_result_9;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = tmp_with_2__indicator;
        tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_9 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_value_52;
        PyObject *tmp_call_result_40;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_52 = tmp_with_2__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 447;
        tmp_call_result_40 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_52, mod_consts[73]);

        if (tmp_call_result_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_40);
    }
    branch_no_9:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    Py_XDECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_with_2__source);
    Py_DECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    CHECK_OBJECT(tmp_with_2__enter);
    Py_DECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[196];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_67);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;

            goto try_except_handler_10;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 455;
        tmp_assign_source_68 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[198], 0)
        );

        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;

            goto try_except_handler_10;
        }
        assert(tmp_with_3__source == NULL);
        tmp_with_3__source = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_40;
        CHECK_OBJECT(tmp_with_3__source);
        tmp_expression_value_40 = tmp_with_3__source;
        tmp_called_value_53 = LOOKUP_SPECIAL(tmp_expression_value_40, mod_consts[66]);
        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;

            goto try_except_handler_10;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 455;
        tmp_assign_source_69 = CALL_FUNCTION_NO_ARGS(tmp_called_value_53);
        Py_DECREF(tmp_called_value_53);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;

            goto try_except_handler_10;
        }
        assert(tmp_with_3__enter == NULL);
        tmp_with_3__enter = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_expression_value_41;
        CHECK_OBJECT(tmp_with_3__source);
        tmp_expression_value_41 = tmp_with_3__source;
        tmp_assign_source_70 = LOOKUP_SPECIAL(tmp_expression_value_41, mod_consts[67]);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;

            goto try_except_handler_10;
        }
        assert(tmp_with_3__exit == NULL);
        tmp_with_3__exit = tmp_assign_source_70;
    }
    {
        nuitka_bool tmp_assign_source_71;
        tmp_assign_source_71 = NUITKA_BOOL_TRUE;
        tmp_with_3__indicator = tmp_assign_source_71;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_54;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_call_result_41;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;

            goto try_except_handler_12;
        }
        tmp_called_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[68]);
        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;

            goto try_except_handler_12;
        }
        tmp_args_element_value_17 = mod_consts[199];
        tmp_args_element_value_18 = Py_False;
        tmp_args_element_value_19 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_args_element_value_19 == NULL)) {
            tmp_args_element_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 456;

            goto try_except_handler_12;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 456;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_call_result_41 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_54, call_args);
        }

        Py_DECREF(tmp_called_value_54);
        if (tmp_call_result_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;

            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_41);
    }
    goto try_end_10;
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

    // Preserve existing published exception id 3.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_3, &exception_preserved_value_3, &exception_preserved_tb_3);

    if (exception_keeper_tb_10 == NULL) {
        exception_keeper_tb_10 = MAKE_TRACEBACK(frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_10);
    } else if (exception_keeper_lineno_10 != 0) {
        exception_keeper_tb_10 = ADD_TRACEBACK(exception_keeper_tb_10, frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_10);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_10, exception_keeper_tb_10);
    PUBLISH_EXCEPTION(&exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10);
    // Tried code:
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_7 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        nuitka_bool tmp_assign_source_72;
        tmp_assign_source_72 = NUITKA_BOOL_FALSE;
        tmp_with_3__indicator = tmp_assign_source_72;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_called_value_55;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        CHECK_OBJECT(tmp_with_3__exit);
        tmp_called_value_55 = tmp_with_3__exit;
        tmp_args_element_value_20 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_21 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_22 = EXC_TRACEBACK(PyThreadState_GET());
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 456;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_55, call_args);
        }

        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;

            goto try_except_handler_13;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;

            goto try_except_handler_13;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 456;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_13;
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 455;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_13;
    branch_end_10:;
    goto try_end_11;
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

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3);

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_11;
    // End of try:
    try_end_11:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3);

    goto try_end_10;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_10:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_12;
        nuitka_bool tmp_cmp_expr_left_8;
        nuitka_bool tmp_cmp_expr_right_8;
        assert(tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_8 = tmp_with_3__indicator;
        tmp_cmp_expr_right_8 = NUITKA_BOOL_TRUE;
        tmp_condition_result_12 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_called_value_56;
        PyObject *tmp_call_result_42;
        CHECK_OBJECT(tmp_with_3__exit);
        tmp_called_value_56 = tmp_with_3__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 456;
        tmp_call_result_42 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_56, mod_consts[73]);

        if (tmp_call_result_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_12);
            Py_XDECREF(exception_keeper_value_12);
            Py_XDECREF(exception_keeper_tb_12);

            exception_lineno = 456;

            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_42);
    }
    branch_no_12:;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_10;
    // End of try:
    try_end_12:;
    {
        bool tmp_condition_result_13;
        nuitka_bool tmp_cmp_expr_left_9;
        nuitka_bool tmp_cmp_expr_right_9;
        assert(tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_9 = tmp_with_3__indicator;
        tmp_cmp_expr_right_9 = NUITKA_BOOL_TRUE;
        tmp_condition_result_13 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_called_value_57;
        PyObject *tmp_call_result_43;
        CHECK_OBJECT(tmp_with_3__exit);
        tmp_called_value_57 = tmp_with_3__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 456;
        tmp_call_result_43 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_57, mod_consts[73]);

        if (tmp_call_result_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;

            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_43);
    }
    branch_no_13:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_3__source);
    tmp_with_3__source = NULL;
    Py_XDECREF(tmp_with_3__enter);
    tmp_with_3__enter = NULL;
    Py_XDECREF(tmp_with_3__exit);
    tmp_with_3__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_with_3__source);
    Py_DECREF(tmp_with_3__source);
    tmp_with_3__source = NULL;
    CHECK_OBJECT(tmp_with_3__enter);
    Py_DECREF(tmp_with_3__enter);
    tmp_with_3__enter = NULL;
    Py_XDECREF(tmp_with_3__exit);
    tmp_with_3__exit = NULL;
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[200];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[202];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;


        tmp_assign_source_75 = MAKE_FUNCTION_pandas$core$config_init$$$function__7_use_inf_as_na_cb();

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_75);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_instance_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto try_except_handler_14;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 481;
        tmp_assign_source_76 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[198], 0)
        );

        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto try_except_handler_14;
        }
        assert(tmp_with_4__source == NULL);
        tmp_with_4__source = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_43;
        CHECK_OBJECT(tmp_with_4__source);
        tmp_expression_value_43 = tmp_with_4__source;
        tmp_called_value_58 = LOOKUP_SPECIAL(tmp_expression_value_43, mod_consts[66]);
        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto try_except_handler_14;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 481;
        tmp_assign_source_77 = CALL_FUNCTION_NO_ARGS(tmp_called_value_58);
        Py_DECREF(tmp_called_value_58);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto try_except_handler_14;
        }
        assert(tmp_with_4__enter == NULL);
        tmp_with_4__enter = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_expression_value_44;
        CHECK_OBJECT(tmp_with_4__source);
        tmp_expression_value_44 = tmp_with_4__source;
        tmp_assign_source_78 = LOOKUP_SPECIAL(tmp_expression_value_44, mod_consts[67]);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto try_except_handler_14;
        }
        assert(tmp_with_4__exit == NULL);
        tmp_with_4__exit = tmp_assign_source_78;
    }
    {
        nuitka_bool tmp_assign_source_79;
        tmp_assign_source_79 = NUITKA_BOOL_TRUE;
        tmp_with_4__indicator = tmp_assign_source_79;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_59;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_call_result_44;
        PyObject *tmp_kw_call_arg_value_0_32;
        PyObject *tmp_kw_call_arg_value_1_32;
        PyObject *tmp_kw_call_arg_value_2_32;
        PyObject *tmp_kw_call_dict_value_0_32;
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;

            goto try_except_handler_16;
        }
        tmp_called_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[68]);
        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;

            goto try_except_handler_16;
        }
        tmp_kw_call_arg_value_0_32 = mod_consts[205];
        tmp_kw_call_arg_value_1_32 = Py_False;
        tmp_kw_call_arg_value_2_32 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[203]);

        if (unlikely(tmp_kw_call_arg_value_2_32 == NULL)) {
            tmp_kw_call_arg_value_2_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[203]);
        }

        if (tmp_kw_call_arg_value_2_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_59);

            exception_lineno = 482;

            goto try_except_handler_16;
        }
        tmp_kw_call_dict_value_0_32 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_kw_call_dict_value_0_32 == NULL)) {
            tmp_kw_call_dict_value_0_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
        }

        if (tmp_kw_call_dict_value_0_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_59);

            exception_lineno = 482;

            goto try_except_handler_16;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 482;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_32, tmp_kw_call_arg_value_1_32, tmp_kw_call_arg_value_2_32};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_32};
            tmp_call_result_44 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_59, args, kw_values, mod_consts[206]);
        }

        Py_DECREF(tmp_called_value_59);
        if (tmp_call_result_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;

            goto try_except_handler_16;
        }
        Py_DECREF(tmp_call_result_44);
    }
    {
        PyObject *tmp_called_value_60;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_call_result_45;
        PyObject *tmp_kw_call_arg_value_0_33;
        PyObject *tmp_kw_call_arg_value_1_33;
        PyObject *tmp_kw_call_arg_value_2_33;
        PyObject *tmp_kw_call_dict_value_0_33;
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;

            goto try_except_handler_16;
        }
        tmp_called_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[68]);
        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;

            goto try_except_handler_16;
        }
        tmp_kw_call_arg_value_0_33 = mod_consts[207];
        tmp_kw_call_arg_value_1_33 = Py_False;
        tmp_kw_call_arg_value_2_33 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_kw_call_arg_value_2_33 == NULL)) {
            tmp_kw_call_arg_value_2_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[201]);
        }

        if (tmp_kw_call_arg_value_2_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 484;

            goto try_except_handler_16;
        }
        tmp_kw_call_dict_value_0_33 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_kw_call_dict_value_0_33 == NULL)) {
            tmp_kw_call_dict_value_0_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
        }

        if (tmp_kw_call_dict_value_0_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 484;

            goto try_except_handler_16;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 483;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_33, tmp_kw_call_arg_value_1_33, tmp_kw_call_arg_value_2_33};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_33};
            tmp_call_result_45 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_60, args, kw_values, mod_consts[206]);
        }

        Py_DECREF(tmp_called_value_60);
        if (tmp_call_result_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;

            goto try_except_handler_16;
        }
        Py_DECREF(tmp_call_result_45);
    }
    goto try_end_14;
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

    // Preserve existing published exception id 4.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_4, &exception_preserved_value_4, &exception_preserved_tb_4);

    if (exception_keeper_tb_14 == NULL) {
        exception_keeper_tb_14 = MAKE_TRACEBACK(frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_14);
    } else if (exception_keeper_lineno_14 != 0) {
        exception_keeper_tb_14 = ADD_TRACEBACK(exception_keeper_tb_14, frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_14);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_14, &exception_keeper_value_14, &exception_keeper_tb_14);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_14, exception_keeper_tb_14);
    PUBLISH_EXCEPTION(&exception_keeper_type_14, &exception_keeper_value_14, &exception_keeper_tb_14);
    // Tried code:
    {
        bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        tmp_cmp_expr_left_10 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_10 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        nuitka_bool tmp_assign_source_80;
        tmp_assign_source_80 = NUITKA_BOOL_FALSE;
        tmp_with_4__indicator = tmp_assign_source_80;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_called_value_61;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        CHECK_OBJECT(tmp_with_4__exit);
        tmp_called_value_61 = tmp_with_4__exit;
        tmp_args_element_value_23 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_24 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_25 = EXC_TRACEBACK(PyThreadState_GET());
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 484;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_operand_value_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_61, call_args);
        }

        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto try_except_handler_17;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto try_except_handler_17;
        }
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 484;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_17;
    branch_no_15:;
    goto branch_end_14;
    branch_no_14:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 481;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_17;
    branch_end_14:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(exception_preserved_type_4, exception_preserved_value_4, exception_preserved_tb_4);

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_15;
    // End of try:
    try_end_15:;
    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(exception_preserved_type_4, exception_preserved_value_4, exception_preserved_tb_4);

    goto try_end_14;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_14:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_16;
        nuitka_bool tmp_cmp_expr_left_11;
        nuitka_bool tmp_cmp_expr_right_11;
        assert(tmp_with_4__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_11 = tmp_with_4__indicator;
        tmp_cmp_expr_right_11 = NUITKA_BOOL_TRUE;
        tmp_condition_result_16 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_called_value_62;
        PyObject *tmp_call_result_46;
        CHECK_OBJECT(tmp_with_4__exit);
        tmp_called_value_62 = tmp_with_4__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 484;
        tmp_call_result_46 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_62, mod_consts[73]);

        if (tmp_call_result_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_16);
            Py_XDECREF(exception_keeper_value_16);
            Py_XDECREF(exception_keeper_tb_16);

            exception_lineno = 484;

            goto try_except_handler_14;
        }
        Py_DECREF(tmp_call_result_46);
    }
    branch_no_16:;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_14;
    // End of try:
    try_end_16:;
    {
        bool tmp_condition_result_17;
        nuitka_bool tmp_cmp_expr_left_12;
        nuitka_bool tmp_cmp_expr_right_12;
        assert(tmp_with_4__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_12 = tmp_with_4__indicator;
        tmp_cmp_expr_right_12 = NUITKA_BOOL_TRUE;
        tmp_condition_result_17 = (tmp_cmp_expr_left_12 == tmp_cmp_expr_right_12) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_called_value_63;
        PyObject *tmp_call_result_47;
        CHECK_OBJECT(tmp_with_4__exit);
        tmp_called_value_63 = tmp_with_4__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 484;
        tmp_call_result_47 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_63, mod_consts[73]);

        if (tmp_call_result_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto try_except_handler_14;
        }
        Py_DECREF(tmp_call_result_47);
    }
    branch_no_17:;
    goto try_end_17;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_4__source);
    tmp_with_4__source = NULL;
    Py_XDECREF(tmp_with_4__enter);
    tmp_with_4__enter = NULL;
    Py_XDECREF(tmp_with_4__exit);
    tmp_with_4__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_with_4__source);
    Py_DECREF(tmp_with_4__source);
    tmp_with_4__source = NULL;
    CHECK_OBJECT(tmp_with_4__enter);
    Py_DECREF(tmp_with_4__enter);
    tmp_with_4__enter = NULL;
    Py_XDECREF(tmp_with_4__exit);
    tmp_with_4__exit = NULL;
    {
        PyObject *tmp_called_value_64;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_call_result_48;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_1;
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;

            goto frame_exception_exit_1;
        }
        tmp_called_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[208]);
        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_kw_call_value_0_2 == NULL)) {
            tmp_kw_call_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[201]);
        }

        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = mod_consts[209];
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 487;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1};
            tmp_call_result_48 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_64, mod_consts[210], kw_values, mod_consts[211]);
        }

        Py_DECREF(tmp_called_value_64);
        if (tmp_call_result_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_48);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[212];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_81);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_instance_5;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto try_except_handler_18;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 499;
        tmp_assign_source_82 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[198], 0)
        );

        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto try_except_handler_18;
        }
        assert(tmp_with_5__source == NULL);
        tmp_with_5__source = tmp_assign_source_82;
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_65;
        PyObject *tmp_expression_value_48;
        CHECK_OBJECT(tmp_with_5__source);
        tmp_expression_value_48 = tmp_with_5__source;
        tmp_called_value_65 = LOOKUP_SPECIAL(tmp_expression_value_48, mod_consts[66]);
        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto try_except_handler_18;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 499;
        tmp_assign_source_83 = CALL_FUNCTION_NO_ARGS(tmp_called_value_65);
        Py_DECREF(tmp_called_value_65);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto try_except_handler_18;
        }
        assert(tmp_with_5__enter == NULL);
        tmp_with_5__enter = tmp_assign_source_83;
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_expression_value_49;
        CHECK_OBJECT(tmp_with_5__source);
        tmp_expression_value_49 = tmp_with_5__source;
        tmp_assign_source_84 = LOOKUP_SPECIAL(tmp_expression_value_49, mod_consts[67]);
        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto try_except_handler_18;
        }
        assert(tmp_with_5__exit == NULL);
        tmp_with_5__exit = tmp_assign_source_84;
    }
    {
        nuitka_bool tmp_assign_source_85;
        tmp_assign_source_85 = NUITKA_BOOL_TRUE;
        tmp_with_5__indicator = tmp_assign_source_85;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_66;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_call_result_49;
        PyObject *tmp_kw_call_arg_value_0_34;
        PyObject *tmp_kw_call_arg_value_1_34;
        PyObject *tmp_kw_call_arg_value_2_34;
        PyObject *tmp_kw_call_dict_value_0_34;
        PyObject *tmp_called_value_67;
        PyObject *tmp_call_arg_element_7;
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;

            goto try_except_handler_20;
        }
        tmp_called_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[68]);
        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;

            goto try_except_handler_20;
        }
        tmp_kw_call_arg_value_0_34 = mod_consts[213];
        tmp_kw_call_arg_value_1_34 = mod_consts[22];
        tmp_kw_call_arg_value_2_34 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[213]);

        if (unlikely(tmp_kw_call_arg_value_2_34 == NULL)) {
            tmp_kw_call_arg_value_2_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[213]);
        }

        if (tmp_kw_call_arg_value_2_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 503;

            goto try_except_handler_20;
        }
        tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_67 == NULL)) {
            tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 504;

            goto try_except_handler_20;
        }
        tmp_call_arg_element_7 = LIST_COPY(mod_consts[214]);
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 504;
        tmp_kw_call_dict_value_0_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_67, tmp_call_arg_element_7);
        Py_DECREF(tmp_call_arg_element_7);
        if (tmp_kw_call_dict_value_0_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 504;

            goto try_except_handler_20;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 500;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_34, tmp_kw_call_arg_value_1_34, tmp_kw_call_arg_value_2_34};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_34};
            tmp_call_result_49 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_66, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_66);
        Py_DECREF(tmp_kw_call_dict_value_0_34);
        if (tmp_call_result_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;

            goto try_except_handler_20;
        }
        Py_DECREF(tmp_call_result_49);
    }
    goto try_end_18;
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

    // Preserve existing published exception id 5.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_5, &exception_preserved_value_5, &exception_preserved_tb_5);

    if (exception_keeper_tb_18 == NULL) {
        exception_keeper_tb_18 = MAKE_TRACEBACK(frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_18);
    } else if (exception_keeper_lineno_18 != 0) {
        exception_keeper_tb_18 = ADD_TRACEBACK(exception_keeper_tb_18, frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_18);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_18, &exception_keeper_value_18, &exception_keeper_tb_18);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_18, exception_keeper_tb_18);
    PUBLISH_EXCEPTION(&exception_keeper_type_18, &exception_keeper_value_18, &exception_keeper_tb_18);
    // Tried code:
    {
        bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        tmp_cmp_expr_left_13 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_13 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_18 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        nuitka_bool tmp_assign_source_86;
        tmp_assign_source_86 = NUITKA_BOOL_FALSE;
        tmp_with_5__indicator = tmp_assign_source_86;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_called_value_68;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        CHECK_OBJECT(tmp_with_5__exit);
        tmp_called_value_68 = tmp_with_5__exit;
        tmp_args_element_value_26 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_27 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_28 = EXC_TRACEBACK(PyThreadState_GET());
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 504;
        {
            PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_operand_value_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_68, call_args);
        }

        if (tmp_operand_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto try_except_handler_21;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto try_except_handler_21;
        }
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 504;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_21;
    branch_no_19:;
    goto branch_end_18;
    branch_no_18:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 499;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_21;
    branch_end_18:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(exception_preserved_type_5, exception_preserved_value_5, exception_preserved_tb_5);

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto try_except_handler_19;
    // End of try:
    try_end_19:;
    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(exception_preserved_type_5, exception_preserved_value_5, exception_preserved_tb_5);

    goto try_end_18;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_18:;
    goto try_end_20;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_20;
        nuitka_bool tmp_cmp_expr_left_14;
        nuitka_bool tmp_cmp_expr_right_14;
        assert(tmp_with_5__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_14 = tmp_with_5__indicator;
        tmp_cmp_expr_right_14 = NUITKA_BOOL_TRUE;
        tmp_condition_result_20 = (tmp_cmp_expr_left_14 == tmp_cmp_expr_right_14) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_called_value_69;
        PyObject *tmp_call_result_50;
        CHECK_OBJECT(tmp_with_5__exit);
        tmp_called_value_69 = tmp_with_5__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 504;
        tmp_call_result_50 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_69, mod_consts[73]);

        if (tmp_call_result_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_20);
            Py_XDECREF(exception_keeper_value_20);
            Py_XDECREF(exception_keeper_tb_20);

            exception_lineno = 504;

            goto try_except_handler_18;
        }
        Py_DECREF(tmp_call_result_50);
    }
    branch_no_20:;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_18;
    // End of try:
    try_end_20:;
    {
        bool tmp_condition_result_21;
        nuitka_bool tmp_cmp_expr_left_15;
        nuitka_bool tmp_cmp_expr_right_15;
        assert(tmp_with_5__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_15 = tmp_with_5__indicator;
        tmp_cmp_expr_right_15 = NUITKA_BOOL_TRUE;
        tmp_condition_result_21 = (tmp_cmp_expr_left_15 == tmp_cmp_expr_right_15) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_call_result_51;
        CHECK_OBJECT(tmp_with_5__exit);
        tmp_called_value_70 = tmp_with_5__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 504;
        tmp_call_result_51 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_70, mod_consts[73]);

        if (tmp_call_result_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto try_except_handler_18;
        }
        Py_DECREF(tmp_call_result_51);
    }
    branch_no_21:;
    goto try_end_21;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_5__source);
    tmp_with_5__source = NULL;
    Py_XDECREF(tmp_with_5__enter);
    tmp_with_5__enter = NULL;
    Py_XDECREF(tmp_with_5__exit);
    tmp_with_5__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    CHECK_OBJECT(tmp_with_5__source);
    Py_DECREF(tmp_with_5__source);
    tmp_with_5__source = NULL;
    CHECK_OBJECT(tmp_with_5__enter);
    Py_DECREF(tmp_with_5__enter);
    tmp_with_5__enter = NULL;
    Py_XDECREF(tmp_with_5__exit);
    tmp_with_5__exit = NULL;
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = mod_consts[215];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = LIST_COPY(mod_consts[217]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = LIST_COPY(mod_consts[219]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = LIST_COPY(mod_consts[219]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = LIST_COPY(mod_consts[222]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = LIST_COPY(mod_consts[224]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_92);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_called_instance_6;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;

            goto try_except_handler_22;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 522;
        tmp_assign_source_93 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_6,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[226], 0)
        );

        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;

            goto try_except_handler_22;
        }
        assert(tmp_with_6__source == NULL);
        tmp_with_6__source = tmp_assign_source_93;
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_called_value_71;
        PyObject *tmp_expression_value_51;
        CHECK_OBJECT(tmp_with_6__source);
        tmp_expression_value_51 = tmp_with_6__source;
        tmp_called_value_71 = LOOKUP_SPECIAL(tmp_expression_value_51, mod_consts[66]);
        if (tmp_called_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;

            goto try_except_handler_22;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 522;
        tmp_assign_source_94 = CALL_FUNCTION_NO_ARGS(tmp_called_value_71);
        Py_DECREF(tmp_called_value_71);
        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;

            goto try_except_handler_22;
        }
        assert(tmp_with_6__enter == NULL);
        tmp_with_6__enter = tmp_assign_source_94;
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_expression_value_52;
        CHECK_OBJECT(tmp_with_6__source);
        tmp_expression_value_52 = tmp_with_6__source;
        tmp_assign_source_95 = LOOKUP_SPECIAL(tmp_expression_value_52, mod_consts[67]);
        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;

            goto try_except_handler_22;
        }
        assert(tmp_with_6__exit == NULL);
        tmp_with_6__exit = tmp_assign_source_95;
    }
    {
        nuitka_bool tmp_assign_source_96;
        tmp_assign_source_96 = NUITKA_BOOL_TRUE;
        tmp_with_6__indicator = tmp_assign_source_96;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_72;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_call_result_52;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;

            goto try_except_handler_24;
        }
        tmp_called_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[68]);
        if (tmp_called_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;

            goto try_except_handler_24;
        }
        tmp_tuple_element_1 = mod_consts[227];
        tmp_args_value_1 = PyTuple_New(3);
        {
            PyObject *tmp_called_value_73;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_kw_call_value_0_3;
            PyObject *tmp_kw_call_value_1_2;
            PyObject *tmp_str_arg_value_1;
            PyObject *tmp_iterable_value_1;
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[228];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[216]);

            if (unlikely(tmp_expression_value_54 == NULL)) {
                tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[216]);
            }

            if (tmp_expression_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 526;

                goto tuple_build_exception_1;
            }
            tmp_called_value_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[229]);
            if (tmp_called_value_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 526;

                goto tuple_build_exception_1;
            }
            tmp_kw_call_value_0_3 = mod_consts[230];
            tmp_str_arg_value_1 = mod_consts[231];
            tmp_iterable_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[218]);

            if (unlikely(tmp_iterable_value_1 == NULL)) {
                tmp_iterable_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[218]);
            }

            if (tmp_iterable_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_73);

                exception_lineno = 526;

                goto tuple_build_exception_1;
            }
            tmp_kw_call_value_1_2 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
            if (tmp_kw_call_value_1_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_73);

                exception_lineno = 526;

                goto tuple_build_exception_1;
            }
            frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 526;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_2};

                tmp_tuple_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_73, kw_values, mod_consts[232]);
            }

            Py_DECREF(tmp_called_value_73);
            Py_DECREF(tmp_kw_call_value_1_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 526;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_value_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_72);
        Py_DECREF(tmp_args_value_1);
        goto try_except_handler_24;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = PyDict_Copy(mod_consts[233]);
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 523;
        tmp_call_result_52 = CALL_FUNCTION(tmp_called_value_72, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_72);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;

            goto try_except_handler_24;
        }
        Py_DECREF(tmp_call_result_52);
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 6.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_6, &exception_preserved_value_6, &exception_preserved_tb_6);

    if (exception_keeper_tb_22 == NULL) {
        exception_keeper_tb_22 = MAKE_TRACEBACK(frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_22);
    } else if (exception_keeper_lineno_22 != 0) {
        exception_keeper_tb_22 = ADD_TRACEBACK(exception_keeper_tb_22, frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_22);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_22, &exception_keeper_value_22, &exception_keeper_tb_22);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_22, exception_keeper_tb_22);
    PUBLISH_EXCEPTION(&exception_keeper_type_22, &exception_keeper_value_22, &exception_keeper_tb_22);
    // Tried code:
    {
        bool tmp_condition_result_22;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        tmp_cmp_expr_left_16 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_16 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_22 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        nuitka_bool tmp_assign_source_97;
        tmp_assign_source_97 = NUITKA_BOOL_FALSE;
        tmp_with_6__indicator = tmp_assign_source_97;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_called_value_74;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        CHECK_OBJECT(tmp_with_6__exit);
        tmp_called_value_74 = tmp_with_6__exit;
        tmp_args_element_value_29 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_30 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_31 = EXC_TRACEBACK(PyThreadState_GET());
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 527;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31};
            tmp_operand_value_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_74, call_args);
        }

        if (tmp_operand_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;

            goto try_except_handler_25;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        Py_DECREF(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;

            goto try_except_handler_25;
        }
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 527;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_25;
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 522;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_25;
    branch_end_22:;
    goto try_end_23;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 6.
    SET_CURRENT_EXCEPTION(exception_preserved_type_6, exception_preserved_value_6, exception_preserved_tb_6);

    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto try_except_handler_23;
    // End of try:
    try_end_23:;
    // Restore previous exception id 6.
    SET_CURRENT_EXCEPTION(exception_preserved_type_6, exception_preserved_value_6, exception_preserved_tb_6);

    goto try_end_22;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_22:;
    goto try_end_24;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_24;
        nuitka_bool tmp_cmp_expr_left_17;
        nuitka_bool tmp_cmp_expr_right_17;
        assert(tmp_with_6__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_17 = tmp_with_6__indicator;
        tmp_cmp_expr_right_17 = NUITKA_BOOL_TRUE;
        tmp_condition_result_24 = (tmp_cmp_expr_left_17 == tmp_cmp_expr_right_17) ? true : false;
        if (tmp_condition_result_24 != false) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_called_value_75;
        PyObject *tmp_call_result_53;
        CHECK_OBJECT(tmp_with_6__exit);
        tmp_called_value_75 = tmp_with_6__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 527;
        tmp_call_result_53 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_75, mod_consts[73]);

        if (tmp_call_result_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_24);
            Py_XDECREF(exception_keeper_value_24);
            Py_XDECREF(exception_keeper_tb_24);

            exception_lineno = 527;

            goto try_except_handler_22;
        }
        Py_DECREF(tmp_call_result_53);
    }
    branch_no_24:;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto try_except_handler_22;
    // End of try:
    try_end_24:;
    {
        bool tmp_condition_result_25;
        nuitka_bool tmp_cmp_expr_left_18;
        nuitka_bool tmp_cmp_expr_right_18;
        assert(tmp_with_6__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_18 = tmp_with_6__indicator;
        tmp_cmp_expr_right_18 = NUITKA_BOOL_TRUE;
        tmp_condition_result_25 = (tmp_cmp_expr_left_18 == tmp_cmp_expr_right_18) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_called_value_76;
        PyObject *tmp_call_result_54;
        CHECK_OBJECT(tmp_with_6__exit);
        tmp_called_value_76 = tmp_with_6__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 527;
        tmp_call_result_54 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_76, mod_consts[73]);

        if (tmp_call_result_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;

            goto try_except_handler_22;
        }
        Py_DECREF(tmp_call_result_54);
    }
    branch_no_25:;
    goto try_end_25;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_6__source);
    tmp_with_6__source = NULL;
    Py_XDECREF(tmp_with_6__enter);
    tmp_with_6__enter = NULL;
    Py_XDECREF(tmp_with_6__exit);
    tmp_with_6__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_25:;
    CHECK_OBJECT(tmp_with_6__source);
    Py_DECREF(tmp_with_6__source);
    tmp_with_6__source = NULL;
    CHECK_OBJECT(tmp_with_6__enter);
    Py_DECREF(tmp_with_6__enter);
    tmp_with_6__enter = NULL;
    Py_XDECREF(tmp_with_6__exit);
    tmp_with_6__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_called_instance_7;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto try_except_handler_26;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 530;
        tmp_assign_source_98 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_7,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[234], 0)
        );

        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto try_except_handler_26;
        }
        assert(tmp_with_7__source == NULL);
        tmp_with_7__source = tmp_assign_source_98;
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_value_77;
        PyObject *tmp_expression_value_55;
        CHECK_OBJECT(tmp_with_7__source);
        tmp_expression_value_55 = tmp_with_7__source;
        tmp_called_value_77 = LOOKUP_SPECIAL(tmp_expression_value_55, mod_consts[66]);
        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto try_except_handler_26;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 530;
        tmp_assign_source_99 = CALL_FUNCTION_NO_ARGS(tmp_called_value_77);
        Py_DECREF(tmp_called_value_77);
        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto try_except_handler_26;
        }
        assert(tmp_with_7__enter == NULL);
        tmp_with_7__enter = tmp_assign_source_99;
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_expression_value_56;
        CHECK_OBJECT(tmp_with_7__source);
        tmp_expression_value_56 = tmp_with_7__source;
        tmp_assign_source_100 = LOOKUP_SPECIAL(tmp_expression_value_56, mod_consts[67]);
        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto try_except_handler_26;
        }
        assert(tmp_with_7__exit == NULL);
        tmp_with_7__exit = tmp_assign_source_100;
    }
    {
        nuitka_bool tmp_assign_source_101;
        tmp_assign_source_101 = NUITKA_BOOL_TRUE;
        tmp_with_7__indicator = tmp_assign_source_101;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_78;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_call_result_55;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto try_except_handler_28;
        }
        tmp_called_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[68]);
        if (tmp_called_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto try_except_handler_28;
        }
        tmp_tuple_element_2 = mod_consts[227];
        tmp_args_value_2 = PyTuple_New(3);
        {
            PyObject *tmp_called_value_79;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_kw_call_value_0_4;
            PyObject *tmp_kw_call_value_1_3;
            PyObject *tmp_str_arg_value_2;
            PyObject *tmp_iterable_value_2;
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[228];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[216]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[216]);
            }

            if (tmp_expression_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 534;

                goto tuple_build_exception_2;
            }
            tmp_called_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[229]);
            if (tmp_called_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 534;

                goto tuple_build_exception_2;
            }
            tmp_kw_call_value_0_4 = mod_consts[235];
            tmp_str_arg_value_2 = mod_consts[231];
            tmp_iterable_value_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[220]);

            if (unlikely(tmp_iterable_value_2 == NULL)) {
                tmp_iterable_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[220]);
            }

            if (tmp_iterable_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_79);

                exception_lineno = 534;

                goto tuple_build_exception_2;
            }
            tmp_kw_call_value_1_3 = UNICODE_JOIN(tmp_str_arg_value_2, tmp_iterable_value_2);
            if (tmp_kw_call_value_1_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_79);

                exception_lineno = 534;

                goto tuple_build_exception_2;
            }
            frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 534;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_3};

                tmp_tuple_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_79, kw_values, mod_consts[232]);
            }

            Py_DECREF(tmp_called_value_79);
            Py_DECREF(tmp_kw_call_value_1_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 534;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_args_value_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_78);
        Py_DECREF(tmp_args_value_2);
        goto try_except_handler_28;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_kwargs_value_2 = PyDict_Copy(mod_consts[233]);
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 531;
        tmp_call_result_55 = CALL_FUNCTION(tmp_called_value_78, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_78);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_call_result_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto try_except_handler_28;
        }
        Py_DECREF(tmp_call_result_55);
    }
    goto try_end_26;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 7.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_7, &exception_preserved_value_7, &exception_preserved_tb_7);

    if (exception_keeper_tb_26 == NULL) {
        exception_keeper_tb_26 = MAKE_TRACEBACK(frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_26);
    } else if (exception_keeper_lineno_26 != 0) {
        exception_keeper_tb_26 = ADD_TRACEBACK(exception_keeper_tb_26, frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_26);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_26, &exception_keeper_value_26, &exception_keeper_tb_26);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_26, exception_keeper_tb_26);
    PUBLISH_EXCEPTION(&exception_keeper_type_26, &exception_keeper_value_26, &exception_keeper_tb_26);
    // Tried code:
    {
        bool tmp_condition_result_26;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        tmp_cmp_expr_left_19 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_19 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_26 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        nuitka_bool tmp_assign_source_102;
        tmp_assign_source_102 = NUITKA_BOOL_FALSE;
        tmp_with_7__indicator = tmp_assign_source_102;
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_called_value_80;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        CHECK_OBJECT(tmp_with_7__exit);
        tmp_called_value_80 = tmp_with_7__exit;
        tmp_args_element_value_32 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_33 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_34 = EXC_TRACEBACK(PyThreadState_GET());
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 535;
        {
            PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34};
            tmp_operand_value_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_80, call_args);
        }

        if (tmp_operand_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;

            goto try_except_handler_29;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        Py_DECREF(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;

            goto try_except_handler_29;
        }
        tmp_condition_result_27 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 535;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_29;
    branch_no_27:;
    goto branch_end_26;
    branch_no_26:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 530;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_29;
    branch_end_26:;
    goto try_end_27;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 7.
    SET_CURRENT_EXCEPTION(exception_preserved_type_7, exception_preserved_value_7, exception_preserved_tb_7);

    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto try_except_handler_27;
    // End of try:
    try_end_27:;
    // Restore previous exception id 7.
    SET_CURRENT_EXCEPTION(exception_preserved_type_7, exception_preserved_value_7, exception_preserved_tb_7);

    goto try_end_26;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_26:;
    goto try_end_28;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_28;
        nuitka_bool tmp_cmp_expr_left_20;
        nuitka_bool tmp_cmp_expr_right_20;
        assert(tmp_with_7__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_20 = tmp_with_7__indicator;
        tmp_cmp_expr_right_20 = NUITKA_BOOL_TRUE;
        tmp_condition_result_28 = (tmp_cmp_expr_left_20 == tmp_cmp_expr_right_20) ? true : false;
        if (tmp_condition_result_28 != false) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_called_value_81;
        PyObject *tmp_call_result_56;
        CHECK_OBJECT(tmp_with_7__exit);
        tmp_called_value_81 = tmp_with_7__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 535;
        tmp_call_result_56 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_81, mod_consts[73]);

        if (tmp_call_result_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_28);
            Py_XDECREF(exception_keeper_value_28);
            Py_XDECREF(exception_keeper_tb_28);

            exception_lineno = 535;

            goto try_except_handler_26;
        }
        Py_DECREF(tmp_call_result_56);
    }
    branch_no_28:;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto try_except_handler_26;
    // End of try:
    try_end_28:;
    {
        bool tmp_condition_result_29;
        nuitka_bool tmp_cmp_expr_left_21;
        nuitka_bool tmp_cmp_expr_right_21;
        assert(tmp_with_7__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_21 = tmp_with_7__indicator;
        tmp_cmp_expr_right_21 = NUITKA_BOOL_TRUE;
        tmp_condition_result_29 = (tmp_cmp_expr_left_21 == tmp_cmp_expr_right_21) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_called_value_82;
        PyObject *tmp_call_result_57;
        CHECK_OBJECT(tmp_with_7__exit);
        tmp_called_value_82 = tmp_with_7__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 535;
        tmp_call_result_57 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_82, mod_consts[73]);

        if (tmp_call_result_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;

            goto try_except_handler_26;
        }
        Py_DECREF(tmp_call_result_57);
    }
    branch_no_29:;
    goto try_end_29;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_7__source);
    tmp_with_7__source = NULL;
    Py_XDECREF(tmp_with_7__enter);
    tmp_with_7__enter = NULL;
    Py_XDECREF(tmp_with_7__exit);
    tmp_with_7__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_29:;
    CHECK_OBJECT(tmp_with_7__source);
    Py_DECREF(tmp_with_7__source);
    tmp_with_7__source = NULL;
    CHECK_OBJECT(tmp_with_7__enter);
    Py_DECREF(tmp_with_7__enter);
    tmp_with_7__enter = NULL;
    Py_XDECREF(tmp_with_7__exit);
    tmp_with_7__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_instance_8;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto try_except_handler_30;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 539;
        tmp_assign_source_103 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_8,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[236], 0)
        );

        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto try_except_handler_30;
        }
        assert(tmp_with_8__source == NULL);
        tmp_with_8__source = tmp_assign_source_103;
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_called_value_83;
        PyObject *tmp_expression_value_59;
        CHECK_OBJECT(tmp_with_8__source);
        tmp_expression_value_59 = tmp_with_8__source;
        tmp_called_value_83 = LOOKUP_SPECIAL(tmp_expression_value_59, mod_consts[66]);
        if (tmp_called_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto try_except_handler_30;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 539;
        tmp_assign_source_104 = CALL_FUNCTION_NO_ARGS(tmp_called_value_83);
        Py_DECREF(tmp_called_value_83);
        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto try_except_handler_30;
        }
        assert(tmp_with_8__enter == NULL);
        tmp_with_8__enter = tmp_assign_source_104;
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_expression_value_60;
        CHECK_OBJECT(tmp_with_8__source);
        tmp_expression_value_60 = tmp_with_8__source;
        tmp_assign_source_105 = LOOKUP_SPECIAL(tmp_expression_value_60, mod_consts[67]);
        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto try_except_handler_30;
        }
        assert(tmp_with_8__exit == NULL);
        tmp_with_8__exit = tmp_assign_source_105;
    }
    {
        nuitka_bool tmp_assign_source_106;
        tmp_assign_source_106 = NUITKA_BOOL_TRUE;
        tmp_with_8__indicator = tmp_assign_source_106;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_84;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_call_result_58;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_3;
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;

            goto try_except_handler_32;
        }
        tmp_called_value_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[68]);
        if (tmp_called_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;

            goto try_except_handler_32;
        }
        tmp_tuple_element_3 = mod_consts[227];
        tmp_args_value_3 = PyTuple_New(3);
        {
            PyObject *tmp_called_value_85;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_kw_call_value_0_5;
            PyObject *tmp_kw_call_value_1_4;
            PyObject *tmp_str_arg_value_3;
            PyObject *tmp_iterable_value_3;
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[228];
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_3);
            tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[216]);

            if (unlikely(tmp_expression_value_62 == NULL)) {
                tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[216]);
            }

            if (tmp_expression_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;

                goto tuple_build_exception_3;
            }
            tmp_called_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[229]);
            if (tmp_called_value_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;

                goto tuple_build_exception_3;
            }
            tmp_kw_call_value_0_5 = mod_consts[237];
            tmp_str_arg_value_3 = mod_consts[231];
            tmp_iterable_value_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[221]);

            if (unlikely(tmp_iterable_value_3 == NULL)) {
                tmp_iterable_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[221]);
            }

            if (tmp_iterable_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_85);

                exception_lineno = 543;

                goto tuple_build_exception_3;
            }
            tmp_kw_call_value_1_4 = UNICODE_JOIN(tmp_str_arg_value_3, tmp_iterable_value_3);
            if (tmp_kw_call_value_1_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_85);

                exception_lineno = 543;

                goto tuple_build_exception_3;
            }
            frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 543;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_4};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_85, kw_values, mod_consts[232]);
            }

            Py_DECREF(tmp_called_value_85);
            Py_DECREF(tmp_kw_call_value_1_4);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_args_value_3, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_84);
        Py_DECREF(tmp_args_value_3);
        goto try_except_handler_32;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_kwargs_value_3 = PyDict_Copy(mod_consts[233]);
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 540;
        tmp_call_result_58 = CALL_FUNCTION(tmp_called_value_84, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_84);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_call_result_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;

            goto try_except_handler_32;
        }
        Py_DECREF(tmp_call_result_58);
    }
    goto try_end_30;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 8.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_8, &exception_preserved_value_8, &exception_preserved_tb_8);

    if (exception_keeper_tb_30 == NULL) {
        exception_keeper_tb_30 = MAKE_TRACEBACK(frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_30);
    } else if (exception_keeper_lineno_30 != 0) {
        exception_keeper_tb_30 = ADD_TRACEBACK(exception_keeper_tb_30, frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_30);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_30, &exception_keeper_value_30, &exception_keeper_tb_30);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_30, exception_keeper_tb_30);
    PUBLISH_EXCEPTION(&exception_keeper_type_30, &exception_keeper_value_30, &exception_keeper_tb_30);
    // Tried code:
    {
        bool tmp_condition_result_30;
        PyObject *tmp_cmp_expr_left_22;
        PyObject *tmp_cmp_expr_right_22;
        tmp_cmp_expr_left_22 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_22 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
        assert(!(tmp_res == -1));
        tmp_condition_result_30 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        nuitka_bool tmp_assign_source_107;
        tmp_assign_source_107 = NUITKA_BOOL_FALSE;
        tmp_with_8__indicator = tmp_assign_source_107;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_called_value_86;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_args_element_value_37;
        CHECK_OBJECT(tmp_with_8__exit);
        tmp_called_value_86 = tmp_with_8__exit;
        tmp_args_element_value_35 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_36 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_37 = EXC_TRACEBACK(PyThreadState_GET());
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 544;
        {
            PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36, tmp_args_element_value_37};
            tmp_operand_value_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_86, call_args);
        }

        if (tmp_operand_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto try_except_handler_33;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        Py_DECREF(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto try_except_handler_33;
        }
        tmp_condition_result_31 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 544;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_33;
    branch_no_31:;
    goto branch_end_30;
    branch_no_30:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 539;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_33;
    branch_end_30:;
    goto try_end_31;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 8.
    SET_CURRENT_EXCEPTION(exception_preserved_type_8, exception_preserved_value_8, exception_preserved_tb_8);

    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto try_except_handler_31;
    // End of try:
    try_end_31:;
    // Restore previous exception id 8.
    SET_CURRENT_EXCEPTION(exception_preserved_type_8, exception_preserved_value_8, exception_preserved_tb_8);

    goto try_end_30;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_30:;
    goto try_end_32;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_32;
        nuitka_bool tmp_cmp_expr_left_23;
        nuitka_bool tmp_cmp_expr_right_23;
        assert(tmp_with_8__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_23 = tmp_with_8__indicator;
        tmp_cmp_expr_right_23 = NUITKA_BOOL_TRUE;
        tmp_condition_result_32 = (tmp_cmp_expr_left_23 == tmp_cmp_expr_right_23) ? true : false;
        if (tmp_condition_result_32 != false) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_called_value_87;
        PyObject *tmp_call_result_59;
        CHECK_OBJECT(tmp_with_8__exit);
        tmp_called_value_87 = tmp_with_8__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 544;
        tmp_call_result_59 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_87, mod_consts[73]);

        if (tmp_call_result_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_32);
            Py_XDECREF(exception_keeper_value_32);
            Py_XDECREF(exception_keeper_tb_32);

            exception_lineno = 544;

            goto try_except_handler_30;
        }
        Py_DECREF(tmp_call_result_59);
    }
    branch_no_32:;
    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto try_except_handler_30;
    // End of try:
    try_end_32:;
    {
        bool tmp_condition_result_33;
        nuitka_bool tmp_cmp_expr_left_24;
        nuitka_bool tmp_cmp_expr_right_24;
        assert(tmp_with_8__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_24 = tmp_with_8__indicator;
        tmp_cmp_expr_right_24 = NUITKA_BOOL_TRUE;
        tmp_condition_result_33 = (tmp_cmp_expr_left_24 == tmp_cmp_expr_right_24) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        PyObject *tmp_called_value_88;
        PyObject *tmp_call_result_60;
        CHECK_OBJECT(tmp_with_8__exit);
        tmp_called_value_88 = tmp_with_8__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 544;
        tmp_call_result_60 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_88, mod_consts[73]);

        if (tmp_call_result_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto try_except_handler_30;
        }
        Py_DECREF(tmp_call_result_60);
    }
    branch_no_33:;
    goto try_end_33;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_8__source);
    tmp_with_8__source = NULL;
    Py_XDECREF(tmp_with_8__enter);
    tmp_with_8__enter = NULL;
    Py_XDECREF(tmp_with_8__exit);
    tmp_with_8__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_33:;
    CHECK_OBJECT(tmp_with_8__source);
    Py_DECREF(tmp_with_8__source);
    tmp_with_8__source = NULL;
    CHECK_OBJECT(tmp_with_8__enter);
    Py_DECREF(tmp_with_8__enter);
    tmp_with_8__enter = NULL;
    Py_XDECREF(tmp_with_8__exit);
    tmp_with_8__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_called_instance_9;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_34;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 548;
        tmp_assign_source_108 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_9,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[238], 0)
        );

        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_34;
        }
        assert(tmp_with_9__source == NULL);
        tmp_with_9__source = tmp_assign_source_108;
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_called_value_89;
        PyObject *tmp_expression_value_63;
        CHECK_OBJECT(tmp_with_9__source);
        tmp_expression_value_63 = tmp_with_9__source;
        tmp_called_value_89 = LOOKUP_SPECIAL(tmp_expression_value_63, mod_consts[66]);
        if (tmp_called_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_34;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 548;
        tmp_assign_source_109 = CALL_FUNCTION_NO_ARGS(tmp_called_value_89);
        Py_DECREF(tmp_called_value_89);
        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_34;
        }
        assert(tmp_with_9__enter == NULL);
        tmp_with_9__enter = tmp_assign_source_109;
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_expression_value_64;
        CHECK_OBJECT(tmp_with_9__source);
        tmp_expression_value_64 = tmp_with_9__source;
        tmp_assign_source_110 = LOOKUP_SPECIAL(tmp_expression_value_64, mod_consts[67]);
        if (tmp_assign_source_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto try_except_handler_34;
        }
        assert(tmp_with_9__exit == NULL);
        tmp_with_9__exit = tmp_assign_source_110;
    }
    {
        nuitka_bool tmp_assign_source_111;
        tmp_assign_source_111 = NUITKA_BOOL_TRUE;
        tmp_with_9__indicator = tmp_assign_source_111;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_90;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_call_result_61;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_4;
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto try_except_handler_36;
        }
        tmp_called_value_90 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[68]);
        if (tmp_called_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto try_except_handler_36;
        }
        tmp_tuple_element_4 = mod_consts[227];
        tmp_args_value_4 = PyTuple_New(3);
        {
            PyObject *tmp_called_value_91;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_kw_call_value_0_6;
            PyObject *tmp_kw_call_value_1_5;
            PyObject *tmp_str_arg_value_4;
            PyObject *tmp_iterable_value_4;
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[228];
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_4);
            tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[216]);

            if (unlikely(tmp_expression_value_66 == NULL)) {
                tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[216]);
            }

            if (tmp_expression_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 552;

                goto tuple_build_exception_4;
            }
            tmp_called_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[229]);
            if (tmp_called_value_91 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 552;

                goto tuple_build_exception_4;
            }
            tmp_kw_call_value_0_6 = mod_consts[239];
            tmp_str_arg_value_4 = mod_consts[231];
            tmp_iterable_value_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[223]);

            if (unlikely(tmp_iterable_value_4 == NULL)) {
                tmp_iterable_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[223]);
            }

            if (tmp_iterable_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_91);

                exception_lineno = 552;

                goto tuple_build_exception_4;
            }
            tmp_kw_call_value_1_5 = UNICODE_JOIN(tmp_str_arg_value_4, tmp_iterable_value_4);
            if (tmp_kw_call_value_1_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_91);

                exception_lineno = 552;

                goto tuple_build_exception_4;
            }
            frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 552;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_5};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_91, kw_values, mod_consts[232]);
            }

            Py_DECREF(tmp_called_value_91);
            Py_DECREF(tmp_kw_call_value_1_5);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 552;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_args_value_4, 2, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_called_value_90);
        Py_DECREF(tmp_args_value_4);
        goto try_except_handler_36;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_kwargs_value_4 = PyDict_Copy(mod_consts[233]);
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 549;
        tmp_call_result_61 = CALL_FUNCTION(tmp_called_value_90, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_called_value_90);
        Py_DECREF(tmp_args_value_4);
        Py_DECREF(tmp_kwargs_value_4);
        if (tmp_call_result_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto try_except_handler_36;
        }
        Py_DECREF(tmp_call_result_61);
    }
    goto try_end_34;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 9.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_9, &exception_preserved_value_9, &exception_preserved_tb_9);

    if (exception_keeper_tb_34 == NULL) {
        exception_keeper_tb_34 = MAKE_TRACEBACK(frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_34);
    } else if (exception_keeper_lineno_34 != 0) {
        exception_keeper_tb_34 = ADD_TRACEBACK(exception_keeper_tb_34, frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_34);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_34, &exception_keeper_value_34, &exception_keeper_tb_34);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_34, exception_keeper_tb_34);
    PUBLISH_EXCEPTION(&exception_keeper_type_34, &exception_keeper_value_34, &exception_keeper_tb_34);
    // Tried code:
    {
        bool tmp_condition_result_34;
        PyObject *tmp_cmp_expr_left_25;
        PyObject *tmp_cmp_expr_right_25;
        tmp_cmp_expr_left_25 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_25 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
        assert(!(tmp_res == -1));
        tmp_condition_result_34 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_34 != false) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        nuitka_bool tmp_assign_source_112;
        tmp_assign_source_112 = NUITKA_BOOL_FALSE;
        tmp_with_9__indicator = tmp_assign_source_112;
    }
    {
        bool tmp_condition_result_35;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_called_value_92;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        CHECK_OBJECT(tmp_with_9__exit);
        tmp_called_value_92 = tmp_with_9__exit;
        tmp_args_element_value_38 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_39 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_40 = EXC_TRACEBACK(PyThreadState_GET());
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 553;
        {
            PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40};
            tmp_operand_value_9 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_92, call_args);
        }

        if (tmp_operand_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;

            goto try_except_handler_37;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        Py_DECREF(tmp_operand_value_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;

            goto try_except_handler_37;
        }
        tmp_condition_result_35 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 553;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_37;
    branch_no_35:;
    goto branch_end_34;
    branch_no_34:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 548;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_37;
    branch_end_34:;
    goto try_end_35;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 9.
    SET_CURRENT_EXCEPTION(exception_preserved_type_9, exception_preserved_value_9, exception_preserved_tb_9);

    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto try_except_handler_35;
    // End of try:
    try_end_35:;
    // Restore previous exception id 9.
    SET_CURRENT_EXCEPTION(exception_preserved_type_9, exception_preserved_value_9, exception_preserved_tb_9);

    goto try_end_34;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_34:;
    goto try_end_36;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_36;
        nuitka_bool tmp_cmp_expr_left_26;
        nuitka_bool tmp_cmp_expr_right_26;
        assert(tmp_with_9__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_26 = tmp_with_9__indicator;
        tmp_cmp_expr_right_26 = NUITKA_BOOL_TRUE;
        tmp_condition_result_36 = (tmp_cmp_expr_left_26 == tmp_cmp_expr_right_26) ? true : false;
        if (tmp_condition_result_36 != false) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
    }
    branch_yes_36:;
    {
        PyObject *tmp_called_value_93;
        PyObject *tmp_call_result_62;
        CHECK_OBJECT(tmp_with_9__exit);
        tmp_called_value_93 = tmp_with_9__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 553;
        tmp_call_result_62 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_93, mod_consts[73]);

        if (tmp_call_result_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_36);
            Py_XDECREF(exception_keeper_value_36);
            Py_XDECREF(exception_keeper_tb_36);

            exception_lineno = 553;

            goto try_except_handler_34;
        }
        Py_DECREF(tmp_call_result_62);
    }
    branch_no_36:;
    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto try_except_handler_34;
    // End of try:
    try_end_36:;
    {
        bool tmp_condition_result_37;
        nuitka_bool tmp_cmp_expr_left_27;
        nuitka_bool tmp_cmp_expr_right_27;
        assert(tmp_with_9__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_27 = tmp_with_9__indicator;
        tmp_cmp_expr_right_27 = NUITKA_BOOL_TRUE;
        tmp_condition_result_37 = (tmp_cmp_expr_left_27 == tmp_cmp_expr_right_27) ? true : false;
        if (tmp_condition_result_37 != false) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_called_value_94;
        PyObject *tmp_call_result_63;
        CHECK_OBJECT(tmp_with_9__exit);
        tmp_called_value_94 = tmp_with_9__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 553;
        tmp_call_result_63 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_94, mod_consts[73]);

        if (tmp_call_result_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;

            goto try_except_handler_34;
        }
        Py_DECREF(tmp_call_result_63);
    }
    branch_no_37:;
    goto try_end_37;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_9__source);
    tmp_with_9__source = NULL;
    Py_XDECREF(tmp_with_9__enter);
    tmp_with_9__enter = NULL;
    Py_XDECREF(tmp_with_9__exit);
    tmp_with_9__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto frame_exception_exit_1;
    // End of try:
    try_end_37:;
    CHECK_OBJECT(tmp_with_9__source);
    Py_DECREF(tmp_with_9__source);
    tmp_with_9__source = NULL;
    CHECK_OBJECT(tmp_with_9__enter);
    Py_DECREF(tmp_with_9__enter);
    tmp_with_9__enter = NULL;
    Py_XDECREF(tmp_with_9__exit);
    tmp_with_9__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_called_instance_10;
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto try_except_handler_38;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 556;
        tmp_assign_source_113 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_10,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[240], 0)
        );

        if (tmp_assign_source_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto try_except_handler_38;
        }
        assert(tmp_with_10__source == NULL);
        tmp_with_10__source = tmp_assign_source_113;
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_called_value_95;
        PyObject *tmp_expression_value_67;
        CHECK_OBJECT(tmp_with_10__source);
        tmp_expression_value_67 = tmp_with_10__source;
        tmp_called_value_95 = LOOKUP_SPECIAL(tmp_expression_value_67, mod_consts[66]);
        if (tmp_called_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto try_except_handler_38;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 556;
        tmp_assign_source_114 = CALL_FUNCTION_NO_ARGS(tmp_called_value_95);
        Py_DECREF(tmp_called_value_95);
        if (tmp_assign_source_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto try_except_handler_38;
        }
        assert(tmp_with_10__enter == NULL);
        tmp_with_10__enter = tmp_assign_source_114;
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_expression_value_68;
        CHECK_OBJECT(tmp_with_10__source);
        tmp_expression_value_68 = tmp_with_10__source;
        tmp_assign_source_115 = LOOKUP_SPECIAL(tmp_expression_value_68, mod_consts[67]);
        if (tmp_assign_source_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto try_except_handler_38;
        }
        assert(tmp_with_10__exit == NULL);
        tmp_with_10__exit = tmp_assign_source_115;
    }
    {
        nuitka_bool tmp_assign_source_116;
        tmp_assign_source_116 = NUITKA_BOOL_TRUE;
        tmp_with_10__indicator = tmp_assign_source_116;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_96;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_call_result_64;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_5;
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;

            goto try_except_handler_40;
        }
        tmp_called_value_96 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[68]);
        if (tmp_called_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;

            goto try_except_handler_40;
        }
        tmp_tuple_element_5 = mod_consts[227];
        tmp_args_value_5 = PyTuple_New(3);
        {
            PyObject *tmp_called_value_97;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_kw_call_value_0_7;
            PyObject *tmp_kw_call_value_1_6;
            PyObject *tmp_str_arg_value_5;
            PyObject *tmp_iterable_value_5;
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[228];
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_5);
            tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[216]);

            if (unlikely(tmp_expression_value_70 == NULL)) {
                tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[216]);
            }

            if (tmp_expression_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;

                goto tuple_build_exception_5;
            }
            tmp_called_value_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[229]);
            if (tmp_called_value_97 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;

                goto tuple_build_exception_5;
            }
            tmp_kw_call_value_0_7 = mod_consts[241];
            tmp_str_arg_value_5 = mod_consts[231];
            tmp_iterable_value_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[225]);

            if (unlikely(tmp_iterable_value_5 == NULL)) {
                tmp_iterable_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[225]);
            }

            if (tmp_iterable_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_97);

                exception_lineno = 560;

                goto tuple_build_exception_5;
            }
            tmp_kw_call_value_1_6 = UNICODE_JOIN(tmp_str_arg_value_5, tmp_iterable_value_5);
            if (tmp_kw_call_value_1_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_97);

                exception_lineno = 560;

                goto tuple_build_exception_5;
            }
            frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 560;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_6};

                tmp_tuple_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_97, kw_values, mod_consts[232]);
            }

            Py_DECREF(tmp_called_value_97);
            Py_DECREF(tmp_kw_call_value_1_6);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_args_value_5, 2, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_called_value_96);
        Py_DECREF(tmp_args_value_5);
        goto try_except_handler_40;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_kwargs_value_5 = PyDict_Copy(mod_consts[233]);
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 557;
        tmp_call_result_64 = CALL_FUNCTION(tmp_called_value_96, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_96);
        Py_DECREF(tmp_args_value_5);
        Py_DECREF(tmp_kwargs_value_5);
        if (tmp_call_result_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;

            goto try_except_handler_40;
        }
        Py_DECREF(tmp_call_result_64);
    }
    goto try_end_38;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 10.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_10, &exception_preserved_value_10, &exception_preserved_tb_10);

    if (exception_keeper_tb_38 == NULL) {
        exception_keeper_tb_38 = MAKE_TRACEBACK(frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_38);
    } else if (exception_keeper_lineno_38 != 0) {
        exception_keeper_tb_38 = ADD_TRACEBACK(exception_keeper_tb_38, frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_38);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_38, &exception_keeper_value_38, &exception_keeper_tb_38);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_38, exception_keeper_tb_38);
    PUBLISH_EXCEPTION(&exception_keeper_type_38, &exception_keeper_value_38, &exception_keeper_tb_38);
    // Tried code:
    {
        bool tmp_condition_result_38;
        PyObject *tmp_cmp_expr_left_28;
        PyObject *tmp_cmp_expr_right_28;
        tmp_cmp_expr_left_28 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_28 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_28, tmp_cmp_expr_right_28);
        assert(!(tmp_res == -1));
        tmp_condition_result_38 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_38 != false) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        nuitka_bool tmp_assign_source_117;
        tmp_assign_source_117 = NUITKA_BOOL_FALSE;
        tmp_with_10__indicator = tmp_assign_source_117;
    }
    {
        bool tmp_condition_result_39;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_called_value_98;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_args_element_value_43;
        CHECK_OBJECT(tmp_with_10__exit);
        tmp_called_value_98 = tmp_with_10__exit;
        tmp_args_element_value_41 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_42 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_43 = EXC_TRACEBACK(PyThreadState_GET());
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 561;
        {
            PyObject *call_args[] = {tmp_args_element_value_41, tmp_args_element_value_42, tmp_args_element_value_43};
            tmp_operand_value_10 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_98, call_args);
        }

        if (tmp_operand_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;

            goto try_except_handler_41;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
        Py_DECREF(tmp_operand_value_10);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;

            goto try_except_handler_41;
        }
        tmp_condition_result_39 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 561;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_41;
    branch_no_39:;
    goto branch_end_38;
    branch_no_38:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 556;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_41;
    branch_end_38:;
    goto try_end_39;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 10.
    SET_CURRENT_EXCEPTION(exception_preserved_type_10, exception_preserved_value_10, exception_preserved_tb_10);

    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto try_except_handler_39;
    // End of try:
    try_end_39:;
    // Restore previous exception id 10.
    SET_CURRENT_EXCEPTION(exception_preserved_type_10, exception_preserved_value_10, exception_preserved_tb_10);

    goto try_end_38;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_38:;
    goto try_end_40;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_40;
        nuitka_bool tmp_cmp_expr_left_29;
        nuitka_bool tmp_cmp_expr_right_29;
        assert(tmp_with_10__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_29 = tmp_with_10__indicator;
        tmp_cmp_expr_right_29 = NUITKA_BOOL_TRUE;
        tmp_condition_result_40 = (tmp_cmp_expr_left_29 == tmp_cmp_expr_right_29) ? true : false;
        if (tmp_condition_result_40 != false) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    {
        PyObject *tmp_called_value_99;
        PyObject *tmp_call_result_65;
        CHECK_OBJECT(tmp_with_10__exit);
        tmp_called_value_99 = tmp_with_10__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 561;
        tmp_call_result_65 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_99, mod_consts[73]);

        if (tmp_call_result_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_40);
            Py_XDECREF(exception_keeper_value_40);
            Py_XDECREF(exception_keeper_tb_40);

            exception_lineno = 561;

            goto try_except_handler_38;
        }
        Py_DECREF(tmp_call_result_65);
    }
    branch_no_40:;
    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

    goto try_except_handler_38;
    // End of try:
    try_end_40:;
    {
        bool tmp_condition_result_41;
        nuitka_bool tmp_cmp_expr_left_30;
        nuitka_bool tmp_cmp_expr_right_30;
        assert(tmp_with_10__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_30 = tmp_with_10__indicator;
        tmp_cmp_expr_right_30 = NUITKA_BOOL_TRUE;
        tmp_condition_result_41 = (tmp_cmp_expr_left_30 == tmp_cmp_expr_right_30) ? true : false;
        if (tmp_condition_result_41 != false) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_called_value_100;
        PyObject *tmp_call_result_66;
        CHECK_OBJECT(tmp_with_10__exit);
        tmp_called_value_100 = tmp_with_10__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 561;
        tmp_call_result_66 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_100, mod_consts[73]);

        if (tmp_call_result_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;

            goto try_except_handler_38;
        }
        Py_DECREF(tmp_call_result_66);
    }
    branch_no_41:;
    goto try_end_41;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_10__source);
    tmp_with_10__source = NULL;
    Py_XDECREF(tmp_with_10__enter);
    tmp_with_10__enter = NULL;
    Py_XDECREF(tmp_with_10__exit);
    tmp_with_10__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_41;
    exception_value = exception_keeper_value_41;
    exception_tb = exception_keeper_tb_41;
    exception_lineno = exception_keeper_lineno_41;

    goto frame_exception_exit_1;
    // End of try:
    try_end_41:;
    CHECK_OBJECT(tmp_with_10__source);
    Py_DECREF(tmp_with_10__source);
    tmp_with_10__source = NULL;
    CHECK_OBJECT(tmp_with_10__enter);
    Py_DECREF(tmp_with_10__enter);
    tmp_with_10__enter = NULL;
    Py_XDECREF(tmp_with_10__exit);
    tmp_with_10__exit = NULL;
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = mod_consts[242];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = LIST_COPY(mod_consts[244]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = LIST_COPY(mod_consts[245]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = LIST_COPY(mod_consts[246]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = LIST_COPY(mod_consts[222]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_122);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_called_instance_11;
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto try_except_handler_42;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 577;
        tmp_assign_source_123 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_11,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[226], 0)
        );

        if (tmp_assign_source_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto try_except_handler_42;
        }
        assert(tmp_with_11__source == NULL);
        tmp_with_11__source = tmp_assign_source_123;
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_called_value_101;
        PyObject *tmp_expression_value_71;
        CHECK_OBJECT(tmp_with_11__source);
        tmp_expression_value_71 = tmp_with_11__source;
        tmp_called_value_101 = LOOKUP_SPECIAL(tmp_expression_value_71, mod_consts[66]);
        if (tmp_called_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto try_except_handler_42;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 577;
        tmp_assign_source_124 = CALL_FUNCTION_NO_ARGS(tmp_called_value_101);
        Py_DECREF(tmp_called_value_101);
        if (tmp_assign_source_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto try_except_handler_42;
        }
        assert(tmp_with_11__enter == NULL);
        tmp_with_11__enter = tmp_assign_source_124;
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_expression_value_72;
        CHECK_OBJECT(tmp_with_11__source);
        tmp_expression_value_72 = tmp_with_11__source;
        tmp_assign_source_125 = LOOKUP_SPECIAL(tmp_expression_value_72, mod_consts[67]);
        if (tmp_assign_source_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto try_except_handler_42;
        }
        assert(tmp_with_11__exit == NULL);
        tmp_with_11__exit = tmp_assign_source_125;
    }
    {
        nuitka_bool tmp_assign_source_126;
        tmp_assign_source_126 = NUITKA_BOOL_TRUE;
        tmp_with_11__indicator = tmp_assign_source_126;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_102;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_call_result_67;
        PyObject *tmp_args_value_6;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_6;
        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_73 == NULL)) {
            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;

            goto try_except_handler_44;
        }
        tmp_called_value_102 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[68]);
        if (tmp_called_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;

            goto try_except_handler_44;
        }
        tmp_tuple_element_6 = mod_consts[247];
        tmp_args_value_6 = PyTuple_New(3);
        {
            PyObject *tmp_called_value_103;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_kw_call_value_0_8;
            PyObject *tmp_kw_call_value_1_7;
            PyObject *tmp_str_arg_value_6;
            PyObject *tmp_iterable_value_6;
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[228];
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_6);
            tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[243]);

            if (unlikely(tmp_expression_value_74 == NULL)) {
                tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[243]);
            }

            if (tmp_expression_value_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 581;

                goto tuple_build_exception_6;
            }
            tmp_called_value_103 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[229]);
            if (tmp_called_value_103 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 581;

                goto tuple_build_exception_6;
            }
            tmp_kw_call_value_0_8 = mod_consts[230];
            tmp_str_arg_value_6 = mod_consts[231];
            tmp_iterable_value_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[218]);

            if (unlikely(tmp_iterable_value_6 == NULL)) {
                tmp_iterable_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[218]);
            }

            if (tmp_iterable_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_103);

                exception_lineno = 581;

                goto tuple_build_exception_6;
            }
            tmp_kw_call_value_1_7 = UNICODE_JOIN(tmp_str_arg_value_6, tmp_iterable_value_6);
            if (tmp_kw_call_value_1_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_103);

                exception_lineno = 581;

                goto tuple_build_exception_6;
            }
            frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 581;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_7};

                tmp_tuple_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_103, kw_values, mod_consts[232]);
            }

            Py_DECREF(tmp_called_value_103);
            Py_DECREF(tmp_kw_call_value_1_7);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 581;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_6, 2, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_called_value_102);
        Py_DECREF(tmp_args_value_6);
        goto try_except_handler_44;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_kwargs_value_6 = PyDict_Copy(mod_consts[233]);
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 578;
        tmp_call_result_67 = CALL_FUNCTION(tmp_called_value_102, tmp_args_value_6, tmp_kwargs_value_6);
        Py_DECREF(tmp_called_value_102);
        Py_DECREF(tmp_args_value_6);
        Py_DECREF(tmp_kwargs_value_6);
        if (tmp_call_result_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;

            goto try_except_handler_44;
        }
        Py_DECREF(tmp_call_result_67);
    }
    goto try_end_42;
    // Exception handler code:
    try_except_handler_44:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_keeper_lineno_42 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 11.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_11, &exception_preserved_value_11, &exception_preserved_tb_11);

    if (exception_keeper_tb_42 == NULL) {
        exception_keeper_tb_42 = MAKE_TRACEBACK(frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_42);
    } else if (exception_keeper_lineno_42 != 0) {
        exception_keeper_tb_42 = ADD_TRACEBACK(exception_keeper_tb_42, frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_42);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_42, &exception_keeper_value_42, &exception_keeper_tb_42);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_42, exception_keeper_tb_42);
    PUBLISH_EXCEPTION(&exception_keeper_type_42, &exception_keeper_value_42, &exception_keeper_tb_42);
    // Tried code:
    {
        bool tmp_condition_result_42;
        PyObject *tmp_cmp_expr_left_31;
        PyObject *tmp_cmp_expr_right_31;
        tmp_cmp_expr_left_31 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_31 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_31, tmp_cmp_expr_right_31);
        assert(!(tmp_res == -1));
        tmp_condition_result_42 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_42 != false) {
            goto branch_yes_42;
        } else {
            goto branch_no_42;
        }
    }
    branch_yes_42:;
    {
        nuitka_bool tmp_assign_source_127;
        tmp_assign_source_127 = NUITKA_BOOL_FALSE;
        tmp_with_11__indicator = tmp_assign_source_127;
    }
    {
        bool tmp_condition_result_43;
        PyObject *tmp_operand_value_11;
        PyObject *tmp_called_value_104;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_args_element_value_46;
        CHECK_OBJECT(tmp_with_11__exit);
        tmp_called_value_104 = tmp_with_11__exit;
        tmp_args_element_value_44 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_45 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_46 = EXC_TRACEBACK(PyThreadState_GET());
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 582;
        {
            PyObject *call_args[] = {tmp_args_element_value_44, tmp_args_element_value_45, tmp_args_element_value_46};
            tmp_operand_value_11 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_104, call_args);
        }

        if (tmp_operand_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;

            goto try_except_handler_45;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
        Py_DECREF(tmp_operand_value_11);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;

            goto try_except_handler_45;
        }
        tmp_condition_result_43 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_43 != false) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 582;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_45;
    branch_no_43:;
    goto branch_end_42;
    branch_no_42:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 577;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_45;
    branch_end_42:;
    goto try_end_43;
    // Exception handler code:
    try_except_handler_45:;
    exception_keeper_type_43 = exception_type;
    exception_keeper_value_43 = exception_value;
    exception_keeper_tb_43 = exception_tb;
    exception_keeper_lineno_43 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 11.
    SET_CURRENT_EXCEPTION(exception_preserved_type_11, exception_preserved_value_11, exception_preserved_tb_11);

    // Re-raise.
    exception_type = exception_keeper_type_43;
    exception_value = exception_keeper_value_43;
    exception_tb = exception_keeper_tb_43;
    exception_lineno = exception_keeper_lineno_43;

    goto try_except_handler_43;
    // End of try:
    try_end_43:;
    // Restore previous exception id 11.
    SET_CURRENT_EXCEPTION(exception_preserved_type_11, exception_preserved_value_11, exception_preserved_tb_11);

    goto try_end_42;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_42:;
    goto try_end_44;
    // Exception handler code:
    try_except_handler_43:;
    exception_keeper_type_44 = exception_type;
    exception_keeper_value_44 = exception_value;
    exception_keeper_tb_44 = exception_tb;
    exception_keeper_lineno_44 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_44;
        nuitka_bool tmp_cmp_expr_left_32;
        nuitka_bool tmp_cmp_expr_right_32;
        assert(tmp_with_11__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_32 = tmp_with_11__indicator;
        tmp_cmp_expr_right_32 = NUITKA_BOOL_TRUE;
        tmp_condition_result_44 = (tmp_cmp_expr_left_32 == tmp_cmp_expr_right_32) ? true : false;
        if (tmp_condition_result_44 != false) {
            goto branch_yes_44;
        } else {
            goto branch_no_44;
        }
    }
    branch_yes_44:;
    {
        PyObject *tmp_called_value_105;
        PyObject *tmp_call_result_68;
        CHECK_OBJECT(tmp_with_11__exit);
        tmp_called_value_105 = tmp_with_11__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 582;
        tmp_call_result_68 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_105, mod_consts[73]);

        if (tmp_call_result_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_44);
            Py_XDECREF(exception_keeper_value_44);
            Py_XDECREF(exception_keeper_tb_44);

            exception_lineno = 582;

            goto try_except_handler_42;
        }
        Py_DECREF(tmp_call_result_68);
    }
    branch_no_44:;
    // Re-raise.
    exception_type = exception_keeper_type_44;
    exception_value = exception_keeper_value_44;
    exception_tb = exception_keeper_tb_44;
    exception_lineno = exception_keeper_lineno_44;

    goto try_except_handler_42;
    // End of try:
    try_end_44:;
    {
        bool tmp_condition_result_45;
        nuitka_bool tmp_cmp_expr_left_33;
        nuitka_bool tmp_cmp_expr_right_33;
        assert(tmp_with_11__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_33 = tmp_with_11__indicator;
        tmp_cmp_expr_right_33 = NUITKA_BOOL_TRUE;
        tmp_condition_result_45 = (tmp_cmp_expr_left_33 == tmp_cmp_expr_right_33) ? true : false;
        if (tmp_condition_result_45 != false) {
            goto branch_yes_45;
        } else {
            goto branch_no_45;
        }
    }
    branch_yes_45:;
    {
        PyObject *tmp_called_value_106;
        PyObject *tmp_call_result_69;
        CHECK_OBJECT(tmp_with_11__exit);
        tmp_called_value_106 = tmp_with_11__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 582;
        tmp_call_result_69 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_106, mod_consts[73]);

        if (tmp_call_result_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;

            goto try_except_handler_42;
        }
        Py_DECREF(tmp_call_result_69);
    }
    branch_no_45:;
    goto try_end_45;
    // Exception handler code:
    try_except_handler_42:;
    exception_keeper_type_45 = exception_type;
    exception_keeper_value_45 = exception_value;
    exception_keeper_tb_45 = exception_tb;
    exception_keeper_lineno_45 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_11__source);
    tmp_with_11__source = NULL;
    Py_XDECREF(tmp_with_11__enter);
    tmp_with_11__enter = NULL;
    Py_XDECREF(tmp_with_11__exit);
    tmp_with_11__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_45;
    exception_value = exception_keeper_value_45;
    exception_tb = exception_keeper_tb_45;
    exception_lineno = exception_keeper_lineno_45;

    goto frame_exception_exit_1;
    // End of try:
    try_end_45:;
    CHECK_OBJECT(tmp_with_11__source);
    Py_DECREF(tmp_with_11__source);
    tmp_with_11__source = NULL;
    CHECK_OBJECT(tmp_with_11__enter);
    Py_DECREF(tmp_with_11__enter);
    tmp_with_11__enter = NULL;
    Py_XDECREF(tmp_with_11__exit);
    tmp_with_11__exit = NULL;
    {
        PyObject *tmp_called_value_107;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_call_result_70;
        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_75 == NULL)) {
            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;

            goto frame_exception_exit_1;
        }
        tmp_called_value_107 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[208]);
        if (tmp_called_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;

            goto frame_exception_exit_1;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 584;
        tmp_call_result_70 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_107, &PyTuple_GET_ITEM(mod_consts[248], 0), mod_consts[249]);
        Py_DECREF(tmp_called_value_107);
        if (tmp_call_result_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_70);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_called_instance_12;
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;

            goto try_except_handler_46;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 592;
        tmp_assign_source_128 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_12,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[234], 0)
        );

        if (tmp_assign_source_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;

            goto try_except_handler_46;
        }
        assert(tmp_with_12__source == NULL);
        tmp_with_12__source = tmp_assign_source_128;
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_called_value_108;
        PyObject *tmp_expression_value_76;
        CHECK_OBJECT(tmp_with_12__source);
        tmp_expression_value_76 = tmp_with_12__source;
        tmp_called_value_108 = LOOKUP_SPECIAL(tmp_expression_value_76, mod_consts[66]);
        if (tmp_called_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;

            goto try_except_handler_46;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 592;
        tmp_assign_source_129 = CALL_FUNCTION_NO_ARGS(tmp_called_value_108);
        Py_DECREF(tmp_called_value_108);
        if (tmp_assign_source_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;

            goto try_except_handler_46;
        }
        assert(tmp_with_12__enter == NULL);
        tmp_with_12__enter = tmp_assign_source_129;
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_expression_value_77;
        CHECK_OBJECT(tmp_with_12__source);
        tmp_expression_value_77 = tmp_with_12__source;
        tmp_assign_source_130 = LOOKUP_SPECIAL(tmp_expression_value_77, mod_consts[67]);
        if (tmp_assign_source_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;

            goto try_except_handler_46;
        }
        assert(tmp_with_12__exit == NULL);
        tmp_with_12__exit = tmp_assign_source_130;
    }
    {
        nuitka_bool tmp_assign_source_131;
        tmp_assign_source_131 = NUITKA_BOOL_TRUE;
        tmp_with_12__indicator = tmp_assign_source_131;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_109;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_call_result_71;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_value_7;
        tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_78 == NULL)) {
            tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;

            goto try_except_handler_48;
        }
        tmp_called_value_109 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[68]);
        if (tmp_called_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;

            goto try_except_handler_48;
        }
        tmp_tuple_element_7 = mod_consts[247];
        tmp_args_value_7 = PyTuple_New(3);
        {
            PyObject *tmp_called_value_110;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_kw_call_value_0_9;
            PyObject *tmp_kw_call_value_1_8;
            PyObject *tmp_str_arg_value_7;
            PyObject *tmp_iterable_value_7;
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[228];
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_7);
            tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[243]);

            if (unlikely(tmp_expression_value_79 == NULL)) {
                tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[243]);
            }

            if (tmp_expression_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 596;

                goto tuple_build_exception_7;
            }
            tmp_called_value_110 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[229]);
            if (tmp_called_value_110 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 596;

                goto tuple_build_exception_7;
            }
            tmp_kw_call_value_0_9 = mod_consts[235];
            tmp_str_arg_value_7 = mod_consts[231];
            tmp_iterable_value_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[220]);

            if (unlikely(tmp_iterable_value_7 == NULL)) {
                tmp_iterable_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[220]);
            }

            if (tmp_iterable_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_110);

                exception_lineno = 596;

                goto tuple_build_exception_7;
            }
            tmp_kw_call_value_1_8 = UNICODE_JOIN(tmp_str_arg_value_7, tmp_iterable_value_7);
            if (tmp_kw_call_value_1_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_110);

                exception_lineno = 596;

                goto tuple_build_exception_7;
            }
            frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 596;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_9, tmp_kw_call_value_1_8};

                tmp_tuple_element_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_110, kw_values, mod_consts[232]);
            }

            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_kw_call_value_1_8);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 596;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_args_value_7, 2, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_called_value_109);
        Py_DECREF(tmp_args_value_7);
        goto try_except_handler_48;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_kwargs_value_7 = PyDict_Copy(mod_consts[233]);
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 593;
        tmp_call_result_71 = CALL_FUNCTION(tmp_called_value_109, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_109);
        Py_DECREF(tmp_args_value_7);
        Py_DECREF(tmp_kwargs_value_7);
        if (tmp_call_result_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;

            goto try_except_handler_48;
        }
        Py_DECREF(tmp_call_result_71);
    }
    goto try_end_46;
    // Exception handler code:
    try_except_handler_48:;
    exception_keeper_type_46 = exception_type;
    exception_keeper_value_46 = exception_value;
    exception_keeper_tb_46 = exception_tb;
    exception_keeper_lineno_46 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 12.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_12, &exception_preserved_value_12, &exception_preserved_tb_12);

    if (exception_keeper_tb_46 == NULL) {
        exception_keeper_tb_46 = MAKE_TRACEBACK(frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_46);
    } else if (exception_keeper_lineno_46 != 0) {
        exception_keeper_tb_46 = ADD_TRACEBACK(exception_keeper_tb_46, frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_46);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_46, &exception_keeper_value_46, &exception_keeper_tb_46);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_46, exception_keeper_tb_46);
    PUBLISH_EXCEPTION(&exception_keeper_type_46, &exception_keeper_value_46, &exception_keeper_tb_46);
    // Tried code:
    {
        bool tmp_condition_result_46;
        PyObject *tmp_cmp_expr_left_34;
        PyObject *tmp_cmp_expr_right_34;
        tmp_cmp_expr_left_34 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_34 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_34, tmp_cmp_expr_right_34);
        assert(!(tmp_res == -1));
        tmp_condition_result_46 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_46 != false) {
            goto branch_yes_46;
        } else {
            goto branch_no_46;
        }
    }
    branch_yes_46:;
    {
        nuitka_bool tmp_assign_source_132;
        tmp_assign_source_132 = NUITKA_BOOL_FALSE;
        tmp_with_12__indicator = tmp_assign_source_132;
    }
    {
        bool tmp_condition_result_47;
        PyObject *tmp_operand_value_12;
        PyObject *tmp_called_value_111;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_args_element_value_49;
        CHECK_OBJECT(tmp_with_12__exit);
        tmp_called_value_111 = tmp_with_12__exit;
        tmp_args_element_value_47 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_48 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_49 = EXC_TRACEBACK(PyThreadState_GET());
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 597;
        {
            PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_48, tmp_args_element_value_49};
            tmp_operand_value_12 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_111, call_args);
        }

        if (tmp_operand_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;

            goto try_except_handler_49;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
        Py_DECREF(tmp_operand_value_12);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;

            goto try_except_handler_49;
        }
        tmp_condition_result_47 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_47 != false) {
            goto branch_yes_47;
        } else {
            goto branch_no_47;
        }
    }
    branch_yes_47:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 597;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_49;
    branch_no_47:;
    goto branch_end_46;
    branch_no_46:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 592;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_49;
    branch_end_46:;
    goto try_end_47;
    // Exception handler code:
    try_except_handler_49:;
    exception_keeper_type_47 = exception_type;
    exception_keeper_value_47 = exception_value;
    exception_keeper_tb_47 = exception_tb;
    exception_keeper_lineno_47 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 12.
    SET_CURRENT_EXCEPTION(exception_preserved_type_12, exception_preserved_value_12, exception_preserved_tb_12);

    // Re-raise.
    exception_type = exception_keeper_type_47;
    exception_value = exception_keeper_value_47;
    exception_tb = exception_keeper_tb_47;
    exception_lineno = exception_keeper_lineno_47;

    goto try_except_handler_47;
    // End of try:
    try_end_47:;
    // Restore previous exception id 12.
    SET_CURRENT_EXCEPTION(exception_preserved_type_12, exception_preserved_value_12, exception_preserved_tb_12);

    goto try_end_46;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_46:;
    goto try_end_48;
    // Exception handler code:
    try_except_handler_47:;
    exception_keeper_type_48 = exception_type;
    exception_keeper_value_48 = exception_value;
    exception_keeper_tb_48 = exception_tb;
    exception_keeper_lineno_48 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_48;
        nuitka_bool tmp_cmp_expr_left_35;
        nuitka_bool tmp_cmp_expr_right_35;
        assert(tmp_with_12__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_35 = tmp_with_12__indicator;
        tmp_cmp_expr_right_35 = NUITKA_BOOL_TRUE;
        tmp_condition_result_48 = (tmp_cmp_expr_left_35 == tmp_cmp_expr_right_35) ? true : false;
        if (tmp_condition_result_48 != false) {
            goto branch_yes_48;
        } else {
            goto branch_no_48;
        }
    }
    branch_yes_48:;
    {
        PyObject *tmp_called_value_112;
        PyObject *tmp_call_result_72;
        CHECK_OBJECT(tmp_with_12__exit);
        tmp_called_value_112 = tmp_with_12__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 597;
        tmp_call_result_72 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_112, mod_consts[73]);

        if (tmp_call_result_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_48);
            Py_XDECREF(exception_keeper_value_48);
            Py_XDECREF(exception_keeper_tb_48);

            exception_lineno = 597;

            goto try_except_handler_46;
        }
        Py_DECREF(tmp_call_result_72);
    }
    branch_no_48:;
    // Re-raise.
    exception_type = exception_keeper_type_48;
    exception_value = exception_keeper_value_48;
    exception_tb = exception_keeper_tb_48;
    exception_lineno = exception_keeper_lineno_48;

    goto try_except_handler_46;
    // End of try:
    try_end_48:;
    {
        bool tmp_condition_result_49;
        nuitka_bool tmp_cmp_expr_left_36;
        nuitka_bool tmp_cmp_expr_right_36;
        assert(tmp_with_12__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_36 = tmp_with_12__indicator;
        tmp_cmp_expr_right_36 = NUITKA_BOOL_TRUE;
        tmp_condition_result_49 = (tmp_cmp_expr_left_36 == tmp_cmp_expr_right_36) ? true : false;
        if (tmp_condition_result_49 != false) {
            goto branch_yes_49;
        } else {
            goto branch_no_49;
        }
    }
    branch_yes_49:;
    {
        PyObject *tmp_called_value_113;
        PyObject *tmp_call_result_73;
        CHECK_OBJECT(tmp_with_12__exit);
        tmp_called_value_113 = tmp_with_12__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 597;
        tmp_call_result_73 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_113, mod_consts[73]);

        if (tmp_call_result_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;

            goto try_except_handler_46;
        }
        Py_DECREF(tmp_call_result_73);
    }
    branch_no_49:;
    goto try_end_49;
    // Exception handler code:
    try_except_handler_46:;
    exception_keeper_type_49 = exception_type;
    exception_keeper_value_49 = exception_value;
    exception_keeper_tb_49 = exception_tb;
    exception_keeper_lineno_49 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_12__source);
    tmp_with_12__source = NULL;
    Py_XDECREF(tmp_with_12__enter);
    tmp_with_12__enter = NULL;
    Py_XDECREF(tmp_with_12__exit);
    tmp_with_12__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_49;
    exception_value = exception_keeper_value_49;
    exception_tb = exception_keeper_tb_49;
    exception_lineno = exception_keeper_lineno_49;

    goto frame_exception_exit_1;
    // End of try:
    try_end_49:;
    CHECK_OBJECT(tmp_with_12__source);
    Py_DECREF(tmp_with_12__source);
    tmp_with_12__source = NULL;
    CHECK_OBJECT(tmp_with_12__enter);
    Py_DECREF(tmp_with_12__enter);
    tmp_with_12__enter = NULL;
    Py_XDECREF(tmp_with_12__exit);
    tmp_with_12__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_called_instance_13;
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 601;

            goto try_except_handler_50;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 601;
        tmp_assign_source_133 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_13,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[236], 0)
        );

        if (tmp_assign_source_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 601;

            goto try_except_handler_50;
        }
        assert(tmp_with_13__source == NULL);
        tmp_with_13__source = tmp_assign_source_133;
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_called_value_114;
        PyObject *tmp_expression_value_80;
        CHECK_OBJECT(tmp_with_13__source);
        tmp_expression_value_80 = tmp_with_13__source;
        tmp_called_value_114 = LOOKUP_SPECIAL(tmp_expression_value_80, mod_consts[66]);
        if (tmp_called_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 601;

            goto try_except_handler_50;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 601;
        tmp_assign_source_134 = CALL_FUNCTION_NO_ARGS(tmp_called_value_114);
        Py_DECREF(tmp_called_value_114);
        if (tmp_assign_source_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 601;

            goto try_except_handler_50;
        }
        assert(tmp_with_13__enter == NULL);
        tmp_with_13__enter = tmp_assign_source_134;
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_expression_value_81;
        CHECK_OBJECT(tmp_with_13__source);
        tmp_expression_value_81 = tmp_with_13__source;
        tmp_assign_source_135 = LOOKUP_SPECIAL(tmp_expression_value_81, mod_consts[67]);
        if (tmp_assign_source_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 601;

            goto try_except_handler_50;
        }
        assert(tmp_with_13__exit == NULL);
        tmp_with_13__exit = tmp_assign_source_135;
    }
    {
        nuitka_bool tmp_assign_source_136;
        tmp_assign_source_136 = NUITKA_BOOL_TRUE;
        tmp_with_13__indicator = tmp_assign_source_136;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_115;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_call_result_74;
        PyObject *tmp_args_value_8;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_8;
        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_82 == NULL)) {
            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 602;

            goto try_except_handler_52;
        }
        tmp_called_value_115 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[68]);
        if (tmp_called_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 602;

            goto try_except_handler_52;
        }
        tmp_tuple_element_8 = mod_consts[247];
        tmp_args_value_8 = PyTuple_New(3);
        {
            PyObject *tmp_called_value_116;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_kw_call_value_0_10;
            PyObject *tmp_kw_call_value_1_9;
            PyObject *tmp_str_arg_value_8;
            PyObject *tmp_iterable_value_8;
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[228];
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_8);
            tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[243]);

            if (unlikely(tmp_expression_value_83 == NULL)) {
                tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[243]);
            }

            if (tmp_expression_value_83 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 605;

                goto tuple_build_exception_8;
            }
            tmp_called_value_116 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[229]);
            if (tmp_called_value_116 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 605;

                goto tuple_build_exception_8;
            }
            tmp_kw_call_value_0_10 = mod_consts[237];
            tmp_str_arg_value_8 = mod_consts[231];
            tmp_iterable_value_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[221]);

            if (unlikely(tmp_iterable_value_8 == NULL)) {
                tmp_iterable_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[221]);
            }

            if (tmp_iterable_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_116);

                exception_lineno = 605;

                goto tuple_build_exception_8;
            }
            tmp_kw_call_value_1_9 = UNICODE_JOIN(tmp_str_arg_value_8, tmp_iterable_value_8);
            if (tmp_kw_call_value_1_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_116);

                exception_lineno = 605;

                goto tuple_build_exception_8;
            }
            frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 605;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_10, tmp_kw_call_value_1_9};

                tmp_tuple_element_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_116, kw_values, mod_consts[232]);
            }

            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_kw_call_value_1_9);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 605;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_args_value_8, 2, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_called_value_115);
        Py_DECREF(tmp_args_value_8);
        goto try_except_handler_52;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_kwargs_value_8 = PyDict_Copy(mod_consts[233]);
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 602;
        tmp_call_result_74 = CALL_FUNCTION(tmp_called_value_115, tmp_args_value_8, tmp_kwargs_value_8);
        Py_DECREF(tmp_called_value_115);
        Py_DECREF(tmp_args_value_8);
        Py_DECREF(tmp_kwargs_value_8);
        if (tmp_call_result_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 602;

            goto try_except_handler_52;
        }
        Py_DECREF(tmp_call_result_74);
    }
    goto try_end_50;
    // Exception handler code:
    try_except_handler_52:;
    exception_keeper_type_50 = exception_type;
    exception_keeper_value_50 = exception_value;
    exception_keeper_tb_50 = exception_tb;
    exception_keeper_lineno_50 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 13.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_13, &exception_preserved_value_13, &exception_preserved_tb_13);

    if (exception_keeper_tb_50 == NULL) {
        exception_keeper_tb_50 = MAKE_TRACEBACK(frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_50);
    } else if (exception_keeper_lineno_50 != 0) {
        exception_keeper_tb_50 = ADD_TRACEBACK(exception_keeper_tb_50, frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_50);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_50, &exception_keeper_value_50, &exception_keeper_tb_50);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_50, exception_keeper_tb_50);
    PUBLISH_EXCEPTION(&exception_keeper_type_50, &exception_keeper_value_50, &exception_keeper_tb_50);
    // Tried code:
    {
        bool tmp_condition_result_50;
        PyObject *tmp_cmp_expr_left_37;
        PyObject *tmp_cmp_expr_right_37;
        tmp_cmp_expr_left_37 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_37 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_37, tmp_cmp_expr_right_37);
        assert(!(tmp_res == -1));
        tmp_condition_result_50 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_50 != false) {
            goto branch_yes_50;
        } else {
            goto branch_no_50;
        }
    }
    branch_yes_50:;
    {
        nuitka_bool tmp_assign_source_137;
        tmp_assign_source_137 = NUITKA_BOOL_FALSE;
        tmp_with_13__indicator = tmp_assign_source_137;
    }
    {
        bool tmp_condition_result_51;
        PyObject *tmp_operand_value_13;
        PyObject *tmp_called_value_117;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_args_element_value_52;
        CHECK_OBJECT(tmp_with_13__exit);
        tmp_called_value_117 = tmp_with_13__exit;
        tmp_args_element_value_50 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_51 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_52 = EXC_TRACEBACK(PyThreadState_GET());
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 606;
        {
            PyObject *call_args[] = {tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_52};
            tmp_operand_value_13 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_117, call_args);
        }

        if (tmp_operand_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 606;

            goto try_except_handler_53;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
        Py_DECREF(tmp_operand_value_13);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 606;

            goto try_except_handler_53;
        }
        tmp_condition_result_51 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_51 != false) {
            goto branch_yes_51;
        } else {
            goto branch_no_51;
        }
    }
    branch_yes_51:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 606;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_53;
    branch_no_51:;
    goto branch_end_50;
    branch_no_50:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 601;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_53;
    branch_end_50:;
    goto try_end_51;
    // Exception handler code:
    try_except_handler_53:;
    exception_keeper_type_51 = exception_type;
    exception_keeper_value_51 = exception_value;
    exception_keeper_tb_51 = exception_tb;
    exception_keeper_lineno_51 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 13.
    SET_CURRENT_EXCEPTION(exception_preserved_type_13, exception_preserved_value_13, exception_preserved_tb_13);

    // Re-raise.
    exception_type = exception_keeper_type_51;
    exception_value = exception_keeper_value_51;
    exception_tb = exception_keeper_tb_51;
    exception_lineno = exception_keeper_lineno_51;

    goto try_except_handler_51;
    // End of try:
    try_end_51:;
    // Restore previous exception id 13.
    SET_CURRENT_EXCEPTION(exception_preserved_type_13, exception_preserved_value_13, exception_preserved_tb_13);

    goto try_end_50;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_50:;
    goto try_end_52;
    // Exception handler code:
    try_except_handler_51:;
    exception_keeper_type_52 = exception_type;
    exception_keeper_value_52 = exception_value;
    exception_keeper_tb_52 = exception_tb;
    exception_keeper_lineno_52 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_52;
        nuitka_bool tmp_cmp_expr_left_38;
        nuitka_bool tmp_cmp_expr_right_38;
        assert(tmp_with_13__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_38 = tmp_with_13__indicator;
        tmp_cmp_expr_right_38 = NUITKA_BOOL_TRUE;
        tmp_condition_result_52 = (tmp_cmp_expr_left_38 == tmp_cmp_expr_right_38) ? true : false;
        if (tmp_condition_result_52 != false) {
            goto branch_yes_52;
        } else {
            goto branch_no_52;
        }
    }
    branch_yes_52:;
    {
        PyObject *tmp_called_value_118;
        PyObject *tmp_call_result_75;
        CHECK_OBJECT(tmp_with_13__exit);
        tmp_called_value_118 = tmp_with_13__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 606;
        tmp_call_result_75 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_118, mod_consts[73]);

        if (tmp_call_result_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_52);
            Py_XDECREF(exception_keeper_value_52);
            Py_XDECREF(exception_keeper_tb_52);

            exception_lineno = 606;

            goto try_except_handler_50;
        }
        Py_DECREF(tmp_call_result_75);
    }
    branch_no_52:;
    // Re-raise.
    exception_type = exception_keeper_type_52;
    exception_value = exception_keeper_value_52;
    exception_tb = exception_keeper_tb_52;
    exception_lineno = exception_keeper_lineno_52;

    goto try_except_handler_50;
    // End of try:
    try_end_52:;
    {
        bool tmp_condition_result_53;
        nuitka_bool tmp_cmp_expr_left_39;
        nuitka_bool tmp_cmp_expr_right_39;
        assert(tmp_with_13__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_39 = tmp_with_13__indicator;
        tmp_cmp_expr_right_39 = NUITKA_BOOL_TRUE;
        tmp_condition_result_53 = (tmp_cmp_expr_left_39 == tmp_cmp_expr_right_39) ? true : false;
        if (tmp_condition_result_53 != false) {
            goto branch_yes_53;
        } else {
            goto branch_no_53;
        }
    }
    branch_yes_53:;
    {
        PyObject *tmp_called_value_119;
        PyObject *tmp_call_result_76;
        CHECK_OBJECT(tmp_with_13__exit);
        tmp_called_value_119 = tmp_with_13__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 606;
        tmp_call_result_76 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_119, mod_consts[73]);

        if (tmp_call_result_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 606;

            goto try_except_handler_50;
        }
        Py_DECREF(tmp_call_result_76);
    }
    branch_no_53:;
    goto try_end_53;
    // Exception handler code:
    try_except_handler_50:;
    exception_keeper_type_53 = exception_type;
    exception_keeper_value_53 = exception_value;
    exception_keeper_tb_53 = exception_tb;
    exception_keeper_lineno_53 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_13__source);
    tmp_with_13__source = NULL;
    Py_XDECREF(tmp_with_13__enter);
    tmp_with_13__enter = NULL;
    Py_XDECREF(tmp_with_13__exit);
    tmp_with_13__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_53;
    exception_value = exception_keeper_value_53;
    exception_tb = exception_keeper_tb_53;
    exception_lineno = exception_keeper_lineno_53;

    goto frame_exception_exit_1;
    // End of try:
    try_end_53:;
    CHECK_OBJECT(tmp_with_13__source);
    Py_DECREF(tmp_with_13__source);
    tmp_with_13__source = NULL;
    CHECK_OBJECT(tmp_with_13__enter);
    Py_DECREF(tmp_with_13__enter);
    tmp_with_13__enter = NULL;
    Py_XDECREF(tmp_with_13__exit);
    tmp_with_13__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_called_instance_14;
        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_14 == NULL)) {
            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_54;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 610;
        tmp_assign_source_138 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_14,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[238], 0)
        );

        if (tmp_assign_source_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_54;
        }
        assert(tmp_with_14__source == NULL);
        tmp_with_14__source = tmp_assign_source_138;
    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_called_value_120;
        PyObject *tmp_expression_value_84;
        CHECK_OBJECT(tmp_with_14__source);
        tmp_expression_value_84 = tmp_with_14__source;
        tmp_called_value_120 = LOOKUP_SPECIAL(tmp_expression_value_84, mod_consts[66]);
        if (tmp_called_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_54;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 610;
        tmp_assign_source_139 = CALL_FUNCTION_NO_ARGS(tmp_called_value_120);
        Py_DECREF(tmp_called_value_120);
        if (tmp_assign_source_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_54;
        }
        assert(tmp_with_14__enter == NULL);
        tmp_with_14__enter = tmp_assign_source_139;
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_expression_value_85;
        CHECK_OBJECT(tmp_with_14__source);
        tmp_expression_value_85 = tmp_with_14__source;
        tmp_assign_source_140 = LOOKUP_SPECIAL(tmp_expression_value_85, mod_consts[67]);
        if (tmp_assign_source_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto try_except_handler_54;
        }
        assert(tmp_with_14__exit == NULL);
        tmp_with_14__exit = tmp_assign_source_140;
    }
    {
        nuitka_bool tmp_assign_source_141;
        tmp_assign_source_141 = NUITKA_BOOL_TRUE;
        tmp_with_14__indicator = tmp_assign_source_141;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_121;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_call_result_77;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kwargs_value_9;
        tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_86 == NULL)) {
            tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;

            goto try_except_handler_56;
        }
        tmp_called_value_121 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[68]);
        if (tmp_called_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;

            goto try_except_handler_56;
        }
        tmp_tuple_element_9 = mod_consts[247];
        tmp_args_value_9 = PyTuple_New(3);
        {
            PyObject *tmp_called_value_122;
            PyObject *tmp_expression_value_87;
            PyObject *tmp_kw_call_value_0_11;
            PyObject *tmp_kw_call_value_1_10;
            PyObject *tmp_str_arg_value_9;
            PyObject *tmp_iterable_value_9;
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[228];
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_9);
            tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[243]);

            if (unlikely(tmp_expression_value_87 == NULL)) {
                tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[243]);
            }

            if (tmp_expression_value_87 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 614;

                goto tuple_build_exception_9;
            }
            tmp_called_value_122 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[229]);
            if (tmp_called_value_122 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 614;

                goto tuple_build_exception_9;
            }
            tmp_kw_call_value_0_11 = mod_consts[239];
            tmp_str_arg_value_9 = mod_consts[231];
            tmp_iterable_value_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[223]);

            if (unlikely(tmp_iterable_value_9 == NULL)) {
                tmp_iterable_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[223]);
            }

            if (tmp_iterable_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_122);

                exception_lineno = 614;

                goto tuple_build_exception_9;
            }
            tmp_kw_call_value_1_10 = UNICODE_JOIN(tmp_str_arg_value_9, tmp_iterable_value_9);
            if (tmp_kw_call_value_1_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_122);

                exception_lineno = 614;

                goto tuple_build_exception_9;
            }
            frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 614;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_11, tmp_kw_call_value_1_10};

                tmp_tuple_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_122, kw_values, mod_consts[232]);
            }

            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_kw_call_value_1_10);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 614;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_args_value_9, 2, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_called_value_121);
        Py_DECREF(tmp_args_value_9);
        goto try_except_handler_56;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_kwargs_value_9 = PyDict_Copy(mod_consts[233]);
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 611;
        tmp_call_result_77 = CALL_FUNCTION(tmp_called_value_121, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_121);
        Py_DECREF(tmp_args_value_9);
        Py_DECREF(tmp_kwargs_value_9);
        if (tmp_call_result_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;

            goto try_except_handler_56;
        }
        Py_DECREF(tmp_call_result_77);
    }
    goto try_end_54;
    // Exception handler code:
    try_except_handler_56:;
    exception_keeper_type_54 = exception_type;
    exception_keeper_value_54 = exception_value;
    exception_keeper_tb_54 = exception_tb;
    exception_keeper_lineno_54 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 14.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_14, &exception_preserved_value_14, &exception_preserved_tb_14);

    if (exception_keeper_tb_54 == NULL) {
        exception_keeper_tb_54 = MAKE_TRACEBACK(frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_54);
    } else if (exception_keeper_lineno_54 != 0) {
        exception_keeper_tb_54 = ADD_TRACEBACK(exception_keeper_tb_54, frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_54);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_54, &exception_keeper_value_54, &exception_keeper_tb_54);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_54, exception_keeper_tb_54);
    PUBLISH_EXCEPTION(&exception_keeper_type_54, &exception_keeper_value_54, &exception_keeper_tb_54);
    // Tried code:
    {
        bool tmp_condition_result_54;
        PyObject *tmp_cmp_expr_left_40;
        PyObject *tmp_cmp_expr_right_40;
        tmp_cmp_expr_left_40 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_40 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_40, tmp_cmp_expr_right_40);
        assert(!(tmp_res == -1));
        tmp_condition_result_54 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_54 != false) {
            goto branch_yes_54;
        } else {
            goto branch_no_54;
        }
    }
    branch_yes_54:;
    {
        nuitka_bool tmp_assign_source_142;
        tmp_assign_source_142 = NUITKA_BOOL_FALSE;
        tmp_with_14__indicator = tmp_assign_source_142;
    }
    {
        bool tmp_condition_result_55;
        PyObject *tmp_operand_value_14;
        PyObject *tmp_called_value_123;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_args_element_value_55;
        CHECK_OBJECT(tmp_with_14__exit);
        tmp_called_value_123 = tmp_with_14__exit;
        tmp_args_element_value_53 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_54 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_55 = EXC_TRACEBACK(PyThreadState_GET());
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 615;
        {
            PyObject *call_args[] = {tmp_args_element_value_53, tmp_args_element_value_54, tmp_args_element_value_55};
            tmp_operand_value_14 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_123, call_args);
        }

        if (tmp_operand_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;

            goto try_except_handler_57;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
        Py_DECREF(tmp_operand_value_14);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;

            goto try_except_handler_57;
        }
        tmp_condition_result_55 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_55 != false) {
            goto branch_yes_55;
        } else {
            goto branch_no_55;
        }
    }
    branch_yes_55:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 615;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_57;
    branch_no_55:;
    goto branch_end_54;
    branch_no_54:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 610;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_57;
    branch_end_54:;
    goto try_end_55;
    // Exception handler code:
    try_except_handler_57:;
    exception_keeper_type_55 = exception_type;
    exception_keeper_value_55 = exception_value;
    exception_keeper_tb_55 = exception_tb;
    exception_keeper_lineno_55 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 14.
    SET_CURRENT_EXCEPTION(exception_preserved_type_14, exception_preserved_value_14, exception_preserved_tb_14);

    // Re-raise.
    exception_type = exception_keeper_type_55;
    exception_value = exception_keeper_value_55;
    exception_tb = exception_keeper_tb_55;
    exception_lineno = exception_keeper_lineno_55;

    goto try_except_handler_55;
    // End of try:
    try_end_55:;
    // Restore previous exception id 14.
    SET_CURRENT_EXCEPTION(exception_preserved_type_14, exception_preserved_value_14, exception_preserved_tb_14);

    goto try_end_54;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_54:;
    goto try_end_56;
    // Exception handler code:
    try_except_handler_55:;
    exception_keeper_type_56 = exception_type;
    exception_keeper_value_56 = exception_value;
    exception_keeper_tb_56 = exception_tb;
    exception_keeper_lineno_56 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_56;
        nuitka_bool tmp_cmp_expr_left_41;
        nuitka_bool tmp_cmp_expr_right_41;
        assert(tmp_with_14__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_41 = tmp_with_14__indicator;
        tmp_cmp_expr_right_41 = NUITKA_BOOL_TRUE;
        tmp_condition_result_56 = (tmp_cmp_expr_left_41 == tmp_cmp_expr_right_41) ? true : false;
        if (tmp_condition_result_56 != false) {
            goto branch_yes_56;
        } else {
            goto branch_no_56;
        }
    }
    branch_yes_56:;
    {
        PyObject *tmp_called_value_124;
        PyObject *tmp_call_result_78;
        CHECK_OBJECT(tmp_with_14__exit);
        tmp_called_value_124 = tmp_with_14__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 615;
        tmp_call_result_78 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_124, mod_consts[73]);

        if (tmp_call_result_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_56);
            Py_XDECREF(exception_keeper_value_56);
            Py_XDECREF(exception_keeper_tb_56);

            exception_lineno = 615;

            goto try_except_handler_54;
        }
        Py_DECREF(tmp_call_result_78);
    }
    branch_no_56:;
    // Re-raise.
    exception_type = exception_keeper_type_56;
    exception_value = exception_keeper_value_56;
    exception_tb = exception_keeper_tb_56;
    exception_lineno = exception_keeper_lineno_56;

    goto try_except_handler_54;
    // End of try:
    try_end_56:;
    {
        bool tmp_condition_result_57;
        nuitka_bool tmp_cmp_expr_left_42;
        nuitka_bool tmp_cmp_expr_right_42;
        assert(tmp_with_14__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_42 = tmp_with_14__indicator;
        tmp_cmp_expr_right_42 = NUITKA_BOOL_TRUE;
        tmp_condition_result_57 = (tmp_cmp_expr_left_42 == tmp_cmp_expr_right_42) ? true : false;
        if (tmp_condition_result_57 != false) {
            goto branch_yes_57;
        } else {
            goto branch_no_57;
        }
    }
    branch_yes_57:;
    {
        PyObject *tmp_called_value_125;
        PyObject *tmp_call_result_79;
        CHECK_OBJECT(tmp_with_14__exit);
        tmp_called_value_125 = tmp_with_14__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 615;
        tmp_call_result_79 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_125, mod_consts[73]);

        if (tmp_call_result_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;

            goto try_except_handler_54;
        }
        Py_DECREF(tmp_call_result_79);
    }
    branch_no_57:;
    goto try_end_57;
    // Exception handler code:
    try_except_handler_54:;
    exception_keeper_type_57 = exception_type;
    exception_keeper_value_57 = exception_value;
    exception_keeper_tb_57 = exception_tb;
    exception_keeper_lineno_57 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_14__source);
    tmp_with_14__source = NULL;
    Py_XDECREF(tmp_with_14__enter);
    tmp_with_14__enter = NULL;
    Py_XDECREF(tmp_with_14__exit);
    tmp_with_14__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_57;
    exception_value = exception_keeper_value_57;
    exception_tb = exception_keeper_tb_57;
    exception_lineno = exception_keeper_lineno_57;

    goto frame_exception_exit_1;
    // End of try:
    try_end_57:;
    CHECK_OBJECT(tmp_with_14__source);
    Py_DECREF(tmp_with_14__source);
    tmp_with_14__source = NULL;
    CHECK_OBJECT(tmp_with_14__enter);
    Py_DECREF(tmp_with_14__enter);
    tmp_with_14__enter = NULL;
    Py_XDECREF(tmp_with_14__exit);
    tmp_with_14__exit = NULL;
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = mod_consts[250];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_143);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_called_instance_15;
        tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_15 == NULL)) {
            tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;

            goto try_except_handler_58;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 626;
        tmp_assign_source_144 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_15,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[252], 0)
        );

        if (tmp_assign_source_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;

            goto try_except_handler_58;
        }
        assert(tmp_with_15__source == NULL);
        tmp_with_15__source = tmp_assign_source_144;
    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_called_value_126;
        PyObject *tmp_expression_value_88;
        CHECK_OBJECT(tmp_with_15__source);
        tmp_expression_value_88 = tmp_with_15__source;
        tmp_called_value_126 = LOOKUP_SPECIAL(tmp_expression_value_88, mod_consts[66]);
        if (tmp_called_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;

            goto try_except_handler_58;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 626;
        tmp_assign_source_145 = CALL_FUNCTION_NO_ARGS(tmp_called_value_126);
        Py_DECREF(tmp_called_value_126);
        if (tmp_assign_source_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;

            goto try_except_handler_58;
        }
        assert(tmp_with_15__enter == NULL);
        tmp_with_15__enter = tmp_assign_source_145;
    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_expression_value_89;
        CHECK_OBJECT(tmp_with_15__source);
        tmp_expression_value_89 = tmp_with_15__source;
        tmp_assign_source_146 = LOOKUP_SPECIAL(tmp_expression_value_89, mod_consts[67]);
        if (tmp_assign_source_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;

            goto try_except_handler_58;
        }
        assert(tmp_with_15__exit == NULL);
        tmp_with_15__exit = tmp_assign_source_146;
    }
    {
        nuitka_bool tmp_assign_source_147;
        tmp_assign_source_147 = NUITKA_BOOL_TRUE;
        tmp_with_15__indicator = tmp_assign_source_147;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_127;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_call_result_80;
        PyObject *tmp_kw_call_arg_value_0_35;
        PyObject *tmp_kw_call_arg_value_1_35;
        PyObject *tmp_kw_call_arg_value_2_35;
        PyObject *tmp_kw_call_dict_value_0_35;
        PyObject *tmp_called_value_128;
        PyObject *tmp_call_arg_element_8;
        tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_90 == NULL)) {
            tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;

            goto try_except_handler_60;
        }
        tmp_called_value_127 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[68]);
        if (tmp_called_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;

            goto try_except_handler_60;
        }
        tmp_kw_call_arg_value_0_35 = mod_consts[253];
        tmp_kw_call_arg_value_1_35 = mod_consts[228];
        tmp_kw_call_arg_value_2_35 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[251]);

        if (unlikely(tmp_kw_call_arg_value_2_35 == NULL)) {
            tmp_kw_call_arg_value_2_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[251]);
        }

        if (tmp_kw_call_arg_value_2_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_127);

            exception_lineno = 630;

            goto try_except_handler_60;
        }
        tmp_called_value_128 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_128 == NULL)) {
            tmp_called_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_127);

            exception_lineno = 631;

            goto try_except_handler_60;
        }
        tmp_call_arg_element_8 = LIST_COPY(mod_consts[254]);
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 631;
        tmp_kw_call_dict_value_0_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_128, tmp_call_arg_element_8);
        Py_DECREF(tmp_call_arg_element_8);
        if (tmp_kw_call_dict_value_0_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_127);

            exception_lineno = 631;

            goto try_except_handler_60;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 627;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_35, tmp_kw_call_arg_value_1_35, tmp_kw_call_arg_value_2_35};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_35};
            tmp_call_result_80 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_127, args, kw_values, mod_consts[144]);
        }

        Py_DECREF(tmp_called_value_127);
        Py_DECREF(tmp_kw_call_dict_value_0_35);
        if (tmp_call_result_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;

            goto try_except_handler_60;
        }
        Py_DECREF(tmp_call_result_80);
    }
    goto try_end_58;
    // Exception handler code:
    try_except_handler_60:;
    exception_keeper_type_58 = exception_type;
    exception_keeper_value_58 = exception_value;
    exception_keeper_tb_58 = exception_tb;
    exception_keeper_lineno_58 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 15.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_15, &exception_preserved_value_15, &exception_preserved_tb_15);

    if (exception_keeper_tb_58 == NULL) {
        exception_keeper_tb_58 = MAKE_TRACEBACK(frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_58);
    } else if (exception_keeper_lineno_58 != 0) {
        exception_keeper_tb_58 = ADD_TRACEBACK(exception_keeper_tb_58, frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_58);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_58, &exception_keeper_value_58, &exception_keeper_tb_58);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_58, exception_keeper_tb_58);
    PUBLISH_EXCEPTION(&exception_keeper_type_58, &exception_keeper_value_58, &exception_keeper_tb_58);
    // Tried code:
    {
        bool tmp_condition_result_58;
        PyObject *tmp_cmp_expr_left_43;
        PyObject *tmp_cmp_expr_right_43;
        tmp_cmp_expr_left_43 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_43 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_43, tmp_cmp_expr_right_43);
        assert(!(tmp_res == -1));
        tmp_condition_result_58 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_58 != false) {
            goto branch_yes_58;
        } else {
            goto branch_no_58;
        }
    }
    branch_yes_58:;
    {
        nuitka_bool tmp_assign_source_148;
        tmp_assign_source_148 = NUITKA_BOOL_FALSE;
        tmp_with_15__indicator = tmp_assign_source_148;
    }
    {
        bool tmp_condition_result_59;
        PyObject *tmp_operand_value_15;
        PyObject *tmp_called_value_129;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_args_element_value_58;
        CHECK_OBJECT(tmp_with_15__exit);
        tmp_called_value_129 = tmp_with_15__exit;
        tmp_args_element_value_56 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_57 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_58 = EXC_TRACEBACK(PyThreadState_GET());
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 631;
        {
            PyObject *call_args[] = {tmp_args_element_value_56, tmp_args_element_value_57, tmp_args_element_value_58};
            tmp_operand_value_15 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_129, call_args);
        }

        if (tmp_operand_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 631;

            goto try_except_handler_61;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_15);
        Py_DECREF(tmp_operand_value_15);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 631;

            goto try_except_handler_61;
        }
        tmp_condition_result_59 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_59 != false) {
            goto branch_yes_59;
        } else {
            goto branch_no_59;
        }
    }
    branch_yes_59:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 631;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_61;
    branch_no_59:;
    goto branch_end_58;
    branch_no_58:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 626;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_61;
    branch_end_58:;
    goto try_end_59;
    // Exception handler code:
    try_except_handler_61:;
    exception_keeper_type_59 = exception_type;
    exception_keeper_value_59 = exception_value;
    exception_keeper_tb_59 = exception_tb;
    exception_keeper_lineno_59 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 15.
    SET_CURRENT_EXCEPTION(exception_preserved_type_15, exception_preserved_value_15, exception_preserved_tb_15);

    // Re-raise.
    exception_type = exception_keeper_type_59;
    exception_value = exception_keeper_value_59;
    exception_tb = exception_keeper_tb_59;
    exception_lineno = exception_keeper_lineno_59;

    goto try_except_handler_59;
    // End of try:
    try_end_59:;
    // Restore previous exception id 15.
    SET_CURRENT_EXCEPTION(exception_preserved_type_15, exception_preserved_value_15, exception_preserved_tb_15);

    goto try_end_58;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_58:;
    goto try_end_60;
    // Exception handler code:
    try_except_handler_59:;
    exception_keeper_type_60 = exception_type;
    exception_keeper_value_60 = exception_value;
    exception_keeper_tb_60 = exception_tb;
    exception_keeper_lineno_60 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_60;
        nuitka_bool tmp_cmp_expr_left_44;
        nuitka_bool tmp_cmp_expr_right_44;
        assert(tmp_with_15__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_44 = tmp_with_15__indicator;
        tmp_cmp_expr_right_44 = NUITKA_BOOL_TRUE;
        tmp_condition_result_60 = (tmp_cmp_expr_left_44 == tmp_cmp_expr_right_44) ? true : false;
        if (tmp_condition_result_60 != false) {
            goto branch_yes_60;
        } else {
            goto branch_no_60;
        }
    }
    branch_yes_60:;
    {
        PyObject *tmp_called_value_130;
        PyObject *tmp_call_result_81;
        CHECK_OBJECT(tmp_with_15__exit);
        tmp_called_value_130 = tmp_with_15__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 631;
        tmp_call_result_81 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_130, mod_consts[73]);

        if (tmp_call_result_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_60);
            Py_XDECREF(exception_keeper_value_60);
            Py_XDECREF(exception_keeper_tb_60);

            exception_lineno = 631;

            goto try_except_handler_58;
        }
        Py_DECREF(tmp_call_result_81);
    }
    branch_no_60:;
    // Re-raise.
    exception_type = exception_keeper_type_60;
    exception_value = exception_keeper_value_60;
    exception_tb = exception_keeper_tb_60;
    exception_lineno = exception_keeper_lineno_60;

    goto try_except_handler_58;
    // End of try:
    try_end_60:;
    {
        bool tmp_condition_result_61;
        nuitka_bool tmp_cmp_expr_left_45;
        nuitka_bool tmp_cmp_expr_right_45;
        assert(tmp_with_15__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_45 = tmp_with_15__indicator;
        tmp_cmp_expr_right_45 = NUITKA_BOOL_TRUE;
        tmp_condition_result_61 = (tmp_cmp_expr_left_45 == tmp_cmp_expr_right_45) ? true : false;
        if (tmp_condition_result_61 != false) {
            goto branch_yes_61;
        } else {
            goto branch_no_61;
        }
    }
    branch_yes_61:;
    {
        PyObject *tmp_called_value_131;
        PyObject *tmp_call_result_82;
        CHECK_OBJECT(tmp_with_15__exit);
        tmp_called_value_131 = tmp_with_15__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 631;
        tmp_call_result_82 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_131, mod_consts[73]);

        if (tmp_call_result_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 631;

            goto try_except_handler_58;
        }
        Py_DECREF(tmp_call_result_82);
    }
    branch_no_61:;
    goto try_end_61;
    // Exception handler code:
    try_except_handler_58:;
    exception_keeper_type_61 = exception_type;
    exception_keeper_value_61 = exception_value;
    exception_keeper_tb_61 = exception_tb;
    exception_keeper_lineno_61 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_15__source);
    tmp_with_15__source = NULL;
    Py_XDECREF(tmp_with_15__enter);
    tmp_with_15__enter = NULL;
    Py_XDECREF(tmp_with_15__exit);
    tmp_with_15__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_61;
    exception_value = exception_keeper_value_61;
    exception_tb = exception_keeper_tb_61;
    exception_lineno = exception_keeper_lineno_61;

    goto frame_exception_exit_1;
    // End of try:
    try_end_61:;
    CHECK_OBJECT(tmp_with_15__source);
    Py_DECREF(tmp_with_15__source);
    tmp_with_15__source = NULL;
    CHECK_OBJECT(tmp_with_15__enter);
    Py_DECREF(tmp_with_15__enter);
    tmp_with_15__enter = NULL;
    Py_XDECREF(tmp_with_15__exit);
    tmp_with_15__exit = NULL;
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = mod_consts[255];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;


        tmp_assign_source_150 = MAKE_FUNCTION_pandas$core$config_init$$$function__8_register_plotting_backend_cb();

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_150);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_called_instance_16;
        tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_16 == NULL)) {
            tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;

            goto try_except_handler_62;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 655;
        tmp_assign_source_151 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_16,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[258], 0)
        );

        if (tmp_assign_source_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;

            goto try_except_handler_62;
        }
        assert(tmp_with_16__source == NULL);
        tmp_with_16__source = tmp_assign_source_151;
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_called_value_132;
        PyObject *tmp_expression_value_91;
        CHECK_OBJECT(tmp_with_16__source);
        tmp_expression_value_91 = tmp_with_16__source;
        tmp_called_value_132 = LOOKUP_SPECIAL(tmp_expression_value_91, mod_consts[66]);
        if (tmp_called_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;

            goto try_except_handler_62;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 655;
        tmp_assign_source_152 = CALL_FUNCTION_NO_ARGS(tmp_called_value_132);
        Py_DECREF(tmp_called_value_132);
        if (tmp_assign_source_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;

            goto try_except_handler_62;
        }
        assert(tmp_with_16__enter == NULL);
        tmp_with_16__enter = tmp_assign_source_152;
    }
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_expression_value_92;
        CHECK_OBJECT(tmp_with_16__source);
        tmp_expression_value_92 = tmp_with_16__source;
        tmp_assign_source_153 = LOOKUP_SPECIAL(tmp_expression_value_92, mod_consts[67]);
        if (tmp_assign_source_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;

            goto try_except_handler_62;
        }
        assert(tmp_with_16__exit == NULL);
        tmp_with_16__exit = tmp_assign_source_153;
    }
    {
        nuitka_bool tmp_assign_source_154;
        tmp_assign_source_154 = NUITKA_BOOL_TRUE;
        tmp_with_16__indicator = tmp_assign_source_154;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_133;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_call_result_83;
        PyObject *tmp_kw_call_value_0_12;
        PyObject *tmp_kw_call_value_1_11;
        PyObject *tmp_kw_call_value_2_1;
        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_93 == NULL)) {
            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 656;

            goto try_except_handler_64;
        }
        tmp_called_value_133 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[68]);
        if (tmp_called_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 656;

            goto try_except_handler_64;
        }
        tmp_kw_call_value_0_12 = mod_consts[29];
        tmp_kw_call_value_1_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[256]);

        if (unlikely(tmp_kw_call_value_1_11 == NULL)) {
            tmp_kw_call_value_1_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[256]);
        }

        if (tmp_kw_call_value_1_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);

            exception_lineno = 659;

            goto try_except_handler_64;
        }
        tmp_kw_call_value_2_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[257]);

        if (unlikely(tmp_kw_call_value_2_1 == NULL)) {
            tmp_kw_call_value_2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[257]);
        }

        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_133);

            exception_lineno = 660;

            goto try_except_handler_64;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 656;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_12, tmp_kw_call_value_1_11, tmp_kw_call_value_2_1};
            tmp_call_result_83 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_133, mod_consts[259], kw_values, mod_consts[260]);
        }

        Py_DECREF(tmp_called_value_133);
        if (tmp_call_result_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 656;

            goto try_except_handler_64;
        }
        Py_DECREF(tmp_call_result_83);
    }
    goto try_end_62;
    // Exception handler code:
    try_except_handler_64:;
    exception_keeper_type_62 = exception_type;
    exception_keeper_value_62 = exception_value;
    exception_keeper_tb_62 = exception_tb;
    exception_keeper_lineno_62 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 16.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_16, &exception_preserved_value_16, &exception_preserved_tb_16);

    if (exception_keeper_tb_62 == NULL) {
        exception_keeper_tb_62 = MAKE_TRACEBACK(frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_62);
    } else if (exception_keeper_lineno_62 != 0) {
        exception_keeper_tb_62 = ADD_TRACEBACK(exception_keeper_tb_62, frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_62);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_62, &exception_keeper_value_62, &exception_keeper_tb_62);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_62, exception_keeper_tb_62);
    PUBLISH_EXCEPTION(&exception_keeper_type_62, &exception_keeper_value_62, &exception_keeper_tb_62);
    // Tried code:
    {
        bool tmp_condition_result_62;
        PyObject *tmp_cmp_expr_left_46;
        PyObject *tmp_cmp_expr_right_46;
        tmp_cmp_expr_left_46 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_46 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_46, tmp_cmp_expr_right_46);
        assert(!(tmp_res == -1));
        tmp_condition_result_62 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_62 != false) {
            goto branch_yes_62;
        } else {
            goto branch_no_62;
        }
    }
    branch_yes_62:;
    {
        nuitka_bool tmp_assign_source_155;
        tmp_assign_source_155 = NUITKA_BOOL_FALSE;
        tmp_with_16__indicator = tmp_assign_source_155;
    }
    {
        bool tmp_condition_result_63;
        PyObject *tmp_operand_value_16;
        PyObject *tmp_called_value_134;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_args_element_value_61;
        CHECK_OBJECT(tmp_with_16__exit);
        tmp_called_value_134 = tmp_with_16__exit;
        tmp_args_element_value_59 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_60 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_61 = EXC_TRACEBACK(PyThreadState_GET());
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 660;
        {
            PyObject *call_args[] = {tmp_args_element_value_59, tmp_args_element_value_60, tmp_args_element_value_61};
            tmp_operand_value_16 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_134, call_args);
        }

        if (tmp_operand_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 660;

            goto try_except_handler_65;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_16);
        Py_DECREF(tmp_operand_value_16);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 660;

            goto try_except_handler_65;
        }
        tmp_condition_result_63 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_63 != false) {
            goto branch_yes_63;
        } else {
            goto branch_no_63;
        }
    }
    branch_yes_63:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 660;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_65;
    branch_no_63:;
    goto branch_end_62;
    branch_no_62:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 655;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_65;
    branch_end_62:;
    goto try_end_63;
    // Exception handler code:
    try_except_handler_65:;
    exception_keeper_type_63 = exception_type;
    exception_keeper_value_63 = exception_value;
    exception_keeper_tb_63 = exception_tb;
    exception_keeper_lineno_63 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 16.
    SET_CURRENT_EXCEPTION(exception_preserved_type_16, exception_preserved_value_16, exception_preserved_tb_16);

    // Re-raise.
    exception_type = exception_keeper_type_63;
    exception_value = exception_keeper_value_63;
    exception_tb = exception_keeper_tb_63;
    exception_lineno = exception_keeper_lineno_63;

    goto try_except_handler_63;
    // End of try:
    try_end_63:;
    // Restore previous exception id 16.
    SET_CURRENT_EXCEPTION(exception_preserved_type_16, exception_preserved_value_16, exception_preserved_tb_16);

    goto try_end_62;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_62:;
    goto try_end_64;
    // Exception handler code:
    try_except_handler_63:;
    exception_keeper_type_64 = exception_type;
    exception_keeper_value_64 = exception_value;
    exception_keeper_tb_64 = exception_tb;
    exception_keeper_lineno_64 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_64;
        nuitka_bool tmp_cmp_expr_left_47;
        nuitka_bool tmp_cmp_expr_right_47;
        assert(tmp_with_16__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_47 = tmp_with_16__indicator;
        tmp_cmp_expr_right_47 = NUITKA_BOOL_TRUE;
        tmp_condition_result_64 = (tmp_cmp_expr_left_47 == tmp_cmp_expr_right_47) ? true : false;
        if (tmp_condition_result_64 != false) {
            goto branch_yes_64;
        } else {
            goto branch_no_64;
        }
    }
    branch_yes_64:;
    {
        PyObject *tmp_called_value_135;
        PyObject *tmp_call_result_84;
        CHECK_OBJECT(tmp_with_16__exit);
        tmp_called_value_135 = tmp_with_16__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 660;
        tmp_call_result_84 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_135, mod_consts[73]);

        if (tmp_call_result_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_64);
            Py_XDECREF(exception_keeper_value_64);
            Py_XDECREF(exception_keeper_tb_64);

            exception_lineno = 660;

            goto try_except_handler_62;
        }
        Py_DECREF(tmp_call_result_84);
    }
    branch_no_64:;
    // Re-raise.
    exception_type = exception_keeper_type_64;
    exception_value = exception_keeper_value_64;
    exception_tb = exception_keeper_tb_64;
    exception_lineno = exception_keeper_lineno_64;

    goto try_except_handler_62;
    // End of try:
    try_end_64:;
    {
        bool tmp_condition_result_65;
        nuitka_bool tmp_cmp_expr_left_48;
        nuitka_bool tmp_cmp_expr_right_48;
        assert(tmp_with_16__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_48 = tmp_with_16__indicator;
        tmp_cmp_expr_right_48 = NUITKA_BOOL_TRUE;
        tmp_condition_result_65 = (tmp_cmp_expr_left_48 == tmp_cmp_expr_right_48) ? true : false;
        if (tmp_condition_result_65 != false) {
            goto branch_yes_65;
        } else {
            goto branch_no_65;
        }
    }
    branch_yes_65:;
    {
        PyObject *tmp_called_value_136;
        PyObject *tmp_call_result_85;
        CHECK_OBJECT(tmp_with_16__exit);
        tmp_called_value_136 = tmp_with_16__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 660;
        tmp_call_result_85 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_136, mod_consts[73]);

        if (tmp_call_result_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 660;

            goto try_except_handler_62;
        }
        Py_DECREF(tmp_call_result_85);
    }
    branch_no_65:;
    goto try_end_65;
    // Exception handler code:
    try_except_handler_62:;
    exception_keeper_type_65 = exception_type;
    exception_keeper_value_65 = exception_value;
    exception_keeper_tb_65 = exception_tb;
    exception_keeper_lineno_65 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_16__source);
    tmp_with_16__source = NULL;
    Py_XDECREF(tmp_with_16__enter);
    tmp_with_16__enter = NULL;
    Py_XDECREF(tmp_with_16__exit);
    tmp_with_16__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_65;
    exception_value = exception_keeper_value_65;
    exception_tb = exception_keeper_tb_65;
    exception_lineno = exception_keeper_lineno_65;

    goto frame_exception_exit_1;
    // End of try:
    try_end_65:;
    CHECK_OBJECT(tmp_with_16__source);
    Py_DECREF(tmp_with_16__source);
    tmp_with_16__source = NULL;
    CHECK_OBJECT(tmp_with_16__enter);
    Py_DECREF(tmp_with_16__enter);
    tmp_with_16__enter = NULL;
    Py_XDECREF(tmp_with_16__exit);
    tmp_with_16__exit = NULL;
    {
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = mod_consts[261];
        UPDATE_STRING_DICT0(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;


        tmp_assign_source_157 = MAKE_FUNCTION_pandas$core$config_init$$$function__9_register_converter_cb();

        UPDATE_STRING_DICT1(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_157);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_called_instance_17;
        tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_17 == NULL)) {
            tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 684;

            goto try_except_handler_66;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 684;
        tmp_assign_source_158 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_17,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[264], 0)
        );

        if (tmp_assign_source_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 684;

            goto try_except_handler_66;
        }
        assert(tmp_with_17__source == NULL);
        tmp_with_17__source = tmp_assign_source_158;
    }
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_called_value_137;
        PyObject *tmp_expression_value_94;
        CHECK_OBJECT(tmp_with_17__source);
        tmp_expression_value_94 = tmp_with_17__source;
        tmp_called_value_137 = LOOKUP_SPECIAL(tmp_expression_value_94, mod_consts[66]);
        if (tmp_called_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 684;

            goto try_except_handler_66;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 684;
        tmp_assign_source_159 = CALL_FUNCTION_NO_ARGS(tmp_called_value_137);
        Py_DECREF(tmp_called_value_137);
        if (tmp_assign_source_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 684;

            goto try_except_handler_66;
        }
        assert(tmp_with_17__enter == NULL);
        tmp_with_17__enter = tmp_assign_source_159;
    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_expression_value_95;
        CHECK_OBJECT(tmp_with_17__source);
        tmp_expression_value_95 = tmp_with_17__source;
        tmp_assign_source_160 = LOOKUP_SPECIAL(tmp_expression_value_95, mod_consts[67]);
        if (tmp_assign_source_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 684;

            goto try_except_handler_66;
        }
        assert(tmp_with_17__exit == NULL);
        tmp_with_17__exit = tmp_assign_source_160;
    }
    {
        nuitka_bool tmp_assign_source_161;
        tmp_assign_source_161 = NUITKA_BOOL_TRUE;
        tmp_with_17__indicator = tmp_assign_source_161;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_138;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_call_result_86;
        PyObject *tmp_kw_call_arg_value_0_36;
        PyObject *tmp_kw_call_arg_value_1_36;
        PyObject *tmp_kw_call_arg_value_2_36;
        PyObject *tmp_kw_call_dict_value_0_36;
        PyObject *tmp_called_value_139;
        PyObject *tmp_call_arg_element_9;
        PyObject *tmp_kw_call_dict_value_1_6;
        tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_96 == NULL)) {
            tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 685;

            goto try_except_handler_68;
        }
        tmp_called_value_138 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[68]);
        if (tmp_called_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 685;

            goto try_except_handler_68;
        }
        tmp_kw_call_arg_value_0_36 = mod_consts[265];
        tmp_kw_call_arg_value_1_36 = mod_consts[228];
        tmp_kw_call_arg_value_2_36 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[262]);

        if (unlikely(tmp_kw_call_arg_value_2_36 == NULL)) {
            tmp_kw_call_arg_value_2_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[262]);
        }

        if (tmp_kw_call_arg_value_2_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_138);

            exception_lineno = 688;

            goto try_except_handler_68;
        }
        tmp_called_value_139 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_139 == NULL)) {
            tmp_called_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_138);

            exception_lineno = 689;

            goto try_except_handler_68;
        }
        tmp_call_arg_element_9 = LIST_COPY(mod_consts[266]);
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 689;
        tmp_kw_call_dict_value_0_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_139, tmp_call_arg_element_9);
        Py_DECREF(tmp_call_arg_element_9);
        if (tmp_kw_call_dict_value_0_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_138);

            exception_lineno = 689;

            goto try_except_handler_68;
        }
        tmp_kw_call_dict_value_1_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_kw_call_dict_value_1_6 == NULL)) {
            tmp_kw_call_dict_value_1_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[263]);
        }

        if (tmp_kw_call_dict_value_1_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_kw_call_dict_value_0_36);

            exception_lineno = 690;

            goto try_except_handler_68;
        }
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 685;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_36, tmp_kw_call_arg_value_1_36, tmp_kw_call_arg_value_2_36};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_36, tmp_kw_call_dict_value_1_6};
            tmp_call_result_86 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_138, args, kw_values, mod_consts[70]);
        }

        Py_DECREF(tmp_called_value_138);
        Py_DECREF(tmp_kw_call_dict_value_0_36);
        if (tmp_call_result_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 685;

            goto try_except_handler_68;
        }
        Py_DECREF(tmp_call_result_86);
    }
    goto try_end_66;
    // Exception handler code:
    try_except_handler_68:;
    exception_keeper_type_66 = exception_type;
    exception_keeper_value_66 = exception_value;
    exception_keeper_tb_66 = exception_tb;
    exception_keeper_lineno_66 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 17.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_17, &exception_preserved_value_17, &exception_preserved_tb_17);

    if (exception_keeper_tb_66 == NULL) {
        exception_keeper_tb_66 = MAKE_TRACEBACK(frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_66);
    } else if (exception_keeper_lineno_66 != 0) {
        exception_keeper_tb_66 = ADD_TRACEBACK(exception_keeper_tb_66, frame_929860c9d36c161b6d170f2111d32473, exception_keeper_lineno_66);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_66, &exception_keeper_value_66, &exception_keeper_tb_66);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_66, exception_keeper_tb_66);
    PUBLISH_EXCEPTION(&exception_keeper_type_66, &exception_keeper_value_66, &exception_keeper_tb_66);
    // Tried code:
    {
        bool tmp_condition_result_66;
        PyObject *tmp_cmp_expr_left_49;
        PyObject *tmp_cmp_expr_right_49;
        tmp_cmp_expr_left_49 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_49 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_49, tmp_cmp_expr_right_49);
        assert(!(tmp_res == -1));
        tmp_condition_result_66 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_66 != false) {
            goto branch_yes_66;
        } else {
            goto branch_no_66;
        }
    }
    branch_yes_66:;
    {
        nuitka_bool tmp_assign_source_162;
        tmp_assign_source_162 = NUITKA_BOOL_FALSE;
        tmp_with_17__indicator = tmp_assign_source_162;
    }
    {
        bool tmp_condition_result_67;
        PyObject *tmp_operand_value_17;
        PyObject *tmp_called_value_140;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_args_element_value_64;
        CHECK_OBJECT(tmp_with_17__exit);
        tmp_called_value_140 = tmp_with_17__exit;
        tmp_args_element_value_62 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_63 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_64 = EXC_TRACEBACK(PyThreadState_GET());
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 690;
        {
            PyObject *call_args[] = {tmp_args_element_value_62, tmp_args_element_value_63, tmp_args_element_value_64};
            tmp_operand_value_17 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_140, call_args);
        }

        if (tmp_operand_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 690;

            goto try_except_handler_69;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_17);
        Py_DECREF(tmp_operand_value_17);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 690;

            goto try_except_handler_69;
        }
        tmp_condition_result_67 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_67 != false) {
            goto branch_yes_67;
        } else {
            goto branch_no_67;
        }
    }
    branch_yes_67:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 690;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_69;
    branch_no_67:;
    goto branch_end_66;
    branch_no_66:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 684;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_929860c9d36c161b6d170f2111d32473->m_frame) frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_69;
    branch_end_66:;
    goto try_end_67;
    // Exception handler code:
    try_except_handler_69:;
    exception_keeper_type_67 = exception_type;
    exception_keeper_value_67 = exception_value;
    exception_keeper_tb_67 = exception_tb;
    exception_keeper_lineno_67 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 17.
    SET_CURRENT_EXCEPTION(exception_preserved_type_17, exception_preserved_value_17, exception_preserved_tb_17);

    // Re-raise.
    exception_type = exception_keeper_type_67;
    exception_value = exception_keeper_value_67;
    exception_tb = exception_keeper_tb_67;
    exception_lineno = exception_keeper_lineno_67;

    goto try_except_handler_67;
    // End of try:
    try_end_67:;
    // Restore previous exception id 17.
    SET_CURRENT_EXCEPTION(exception_preserved_type_17, exception_preserved_value_17, exception_preserved_tb_17);

    goto try_end_66;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_66:;
    goto try_end_68;
    // Exception handler code:
    try_except_handler_67:;
    exception_keeper_type_68 = exception_type;
    exception_keeper_value_68 = exception_value;
    exception_keeper_tb_68 = exception_tb;
    exception_keeper_lineno_68 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_68;
        nuitka_bool tmp_cmp_expr_left_50;
        nuitka_bool tmp_cmp_expr_right_50;
        assert(tmp_with_17__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_50 = tmp_with_17__indicator;
        tmp_cmp_expr_right_50 = NUITKA_BOOL_TRUE;
        tmp_condition_result_68 = (tmp_cmp_expr_left_50 == tmp_cmp_expr_right_50) ? true : false;
        if (tmp_condition_result_68 != false) {
            goto branch_yes_68;
        } else {
            goto branch_no_68;
        }
    }
    branch_yes_68:;
    {
        PyObject *tmp_called_value_141;
        PyObject *tmp_call_result_87;
        CHECK_OBJECT(tmp_with_17__exit);
        tmp_called_value_141 = tmp_with_17__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 690;
        tmp_call_result_87 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_141, mod_consts[73]);

        if (tmp_call_result_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_68);
            Py_XDECREF(exception_keeper_value_68);
            Py_XDECREF(exception_keeper_tb_68);

            exception_lineno = 690;

            goto try_except_handler_66;
        }
        Py_DECREF(tmp_call_result_87);
    }
    branch_no_68:;
    // Re-raise.
    exception_type = exception_keeper_type_68;
    exception_value = exception_keeper_value_68;
    exception_tb = exception_keeper_tb_68;
    exception_lineno = exception_keeper_lineno_68;

    goto try_except_handler_66;
    // End of try:
    try_end_68:;
    {
        bool tmp_condition_result_69;
        nuitka_bool tmp_cmp_expr_left_51;
        nuitka_bool tmp_cmp_expr_right_51;
        assert(tmp_with_17__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_51 = tmp_with_17__indicator;
        tmp_cmp_expr_right_51 = NUITKA_BOOL_TRUE;
        tmp_condition_result_69 = (tmp_cmp_expr_left_51 == tmp_cmp_expr_right_51) ? true : false;
        if (tmp_condition_result_69 != false) {
            goto branch_yes_69;
        } else {
            goto branch_no_69;
        }
    }
    branch_yes_69:;
    {
        PyObject *tmp_called_value_142;
        PyObject *tmp_call_result_88;
        CHECK_OBJECT(tmp_with_17__exit);
        tmp_called_value_142 = tmp_with_17__exit;
        frame_929860c9d36c161b6d170f2111d32473->m_frame.f_lineno = 690;
        tmp_call_result_88 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_142, mod_consts[73]);

        if (tmp_call_result_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 690;

            goto try_except_handler_66;
        }
        Py_DECREF(tmp_call_result_88);
    }
    branch_no_69:;
    goto try_end_69;
    // Exception handler code:
    try_except_handler_66:;
    exception_keeper_type_69 = exception_type;
    exception_keeper_value_69 = exception_value;
    exception_keeper_tb_69 = exception_tb;
    exception_keeper_lineno_69 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_17__source);
    tmp_with_17__source = NULL;
    Py_XDECREF(tmp_with_17__enter);
    tmp_with_17__enter = NULL;
    Py_XDECREF(tmp_with_17__exit);
    tmp_with_17__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_69;
    exception_value = exception_keeper_value_69;
    exception_tb = exception_keeper_tb_69;
    exception_lineno = exception_keeper_lineno_69;

    goto frame_exception_exit_1;
    // End of try:
    try_end_69:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_929860c9d36c161b6d170f2111d32473);
#endif
    popFrameStack();

    assertFrameObject(frame_929860c9d36c161b6d170f2111d32473);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_929860c9d36c161b6d170f2111d32473);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_929860c9d36c161b6d170f2111d32473, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_929860c9d36c161b6d170f2111d32473->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_929860c9d36c161b6d170f2111d32473, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT(tmp_with_17__source);
    Py_DECREF(tmp_with_17__source);
    tmp_with_17__source = NULL;
    CHECK_OBJECT(tmp_with_17__enter);
    Py_DECREF(tmp_with_17__enter);
    tmp_with_17__enter = NULL;
    Py_XDECREF(tmp_with_17__exit);
    tmp_with_17__exit = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pandas.core.config_init", false);

    Py_INCREF(module_pandas$core$config_init);
    return module_pandas$core$config_init;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$config_init, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("pandas$core$config_init", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
