/* Generated code for Python module 'scipy.fft._basic'
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

/* The "module_scipy$fft$_basic" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$fft$_basic;
PyDictObject *moduledict_scipy$fft$_basic;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[69];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[69];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("scipy.fft._basic"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 69; i++) {
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
void checkModuleConstants_scipy$fft$_basic(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 69; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_55ffce6699eaa60f0c12d76a773ae9fc;
static PyCodeObject *codeobj_c30b503dfc6bfb9f12f83031b72b9a3b;
static PyCodeObject *codeobj_6e51f12ea7a6fc461bd72e6a4092d53b;
static PyCodeObject *codeobj_efd710e1bee6e3284863ff09ae664dc6;
static PyCodeObject *codeobj_9ed9760995827b4f9586146500cabc8b;
static PyCodeObject *codeobj_f909ed44d44cfbcfe768b72b99370c19;
static PyCodeObject *codeobj_289a3f02358964e564f040bc6710640d;
static PyCodeObject *codeobj_6ae9475bb76e725b1ecabc0bc4968290;
static PyCodeObject *codeobj_3fc266f8d1ec8f5cd83986595ffdfda9;
static PyCodeObject *codeobj_03bdfe21819550140b9ae6fbaa06df51;
static PyCodeObject *codeobj_af291d666ed3e707941d22659a6d069b;
static PyCodeObject *codeobj_6f6ad81c163de6ecc1a20827befb26a5;
static PyCodeObject *codeobj_1a23b7e45d3c128d1a689fe28d2bf038;
static PyCodeObject *codeobj_aa24ad5a4a0a85157eb888a74244586e;
static PyCodeObject *codeobj_c2fd5e810219f40d08d9b08fadf365ed;
static PyCodeObject *codeobj_0cd01bca12b2c69bf64bbcb365631cd2;
static PyCodeObject *codeobj_7be9c54f27d5028e96e85da9bec887f6;
static PyCodeObject *codeobj_d9a9b73143ee029ef82e626d8efee1f0;
static PyCodeObject *codeobj_6c0ffb52b118718617e1b7e03299469a;
static PyCodeObject *codeobj_4ca6b1df69c75f9ad3c6a71c9c9f4250;
static PyCodeObject *codeobj_3418faf3813c660812d650404cbb6a0c;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[62]); CHECK_OBJECT(module_filename_obj);
    codeobj_55ffce6699eaa60f0c12d76a773ae9fc = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[63], NULL, NULL, 0, 0, 0);
    codeobj_c30b503dfc6bfb9f12f83031b72b9a3b = MAKE_CODEOBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[64], NULL, 1, 0, 0);
    codeobj_6e51f12ea7a6fc461bd72e6a4092d53b = MAKE_CODEOBJECT(module_filename_obj, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[65], NULL, 3, 0, 0);
    codeobj_efd710e1bee6e3284863ff09ae664dc6 = MAKE_CODEOBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[66], NULL, 6, 1, 0);
    codeobj_9ed9760995827b4f9586146500cabc8b = MAKE_CODEOBJECT(module_filename_obj, 823, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[52], mod_consts[67], NULL, 6, 1, 0);
    codeobj_f909ed44d44cfbcfe768b72b99370c19 = MAKE_CODEOBJECT(module_filename_obj, 616, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[49], mod_consts[67], NULL, 6, 1, 0);
    codeobj_289a3f02358964e564f040bc6710640d = MAKE_CODEOBJECT(module_filename_obj, 468, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[46], mod_consts[66], NULL, 6, 1, 0);
    codeobj_6ae9475bb76e725b1ecabc0bc4968290 = MAKE_CODEOBJECT(module_filename_obj, 1434, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[59], mod_consts[67], NULL, 6, 1, 0);
    codeobj_3fc266f8d1ec8f5cd83986595ffdfda9 = MAKE_CODEOBJECT(module_filename_obj, 1321, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[58], mod_consts[67], NULL, 6, 1, 0);
    codeobj_03bdfe21819550140b9ae6fbaa06df51 = MAKE_CODEOBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[43], mod_consts[66], NULL, 6, 1, 0);
    codeobj_af291d666ed3e707941d22659a6d069b = MAKE_CODEOBJECT(module_filename_obj, 921, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[53], mod_consts[67], NULL, 6, 1, 0);
    codeobj_6f6ad81c163de6ecc1a20827befb26a5 = MAKE_CODEOBJECT(module_filename_obj, 720, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], mod_consts[67], NULL, 6, 1, 0);
    codeobj_1a23b7e45d3c128d1a689fe28d2bf038 = MAKE_CODEOBJECT(module_filename_obj, 550, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[66], NULL, 6, 1, 0);
    codeobj_aa24ad5a4a0a85157eb888a74244586e = MAKE_CODEOBJECT(module_filename_obj, 1576, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], mod_consts[67], NULL, 6, 1, 0);
    codeobj_c2fd5e810219f40d08d9b08fadf365ed = MAKE_CODEOBJECT(module_filename_obj, 1482, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[67], NULL, 6, 1, 0);
    codeobj_0cd01bca12b2c69bf64bbcb365631cd2 = MAKE_CODEOBJECT(module_filename_obj, 367, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[45], mod_consts[66], NULL, 6, 1, 0);
    codeobj_7be9c54f27d5028e96e85da9bec887f6 = MAKE_CODEOBJECT(module_filename_obj, 1271, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[57], mod_consts[67], NULL, 6, 1, 0);
    codeobj_d9a9b73143ee029ef82e626d8efee1f0 = MAKE_CODEOBJECT(module_filename_obj, 1165, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], mod_consts[67], NULL, 6, 1, 0);
    codeobj_6c0ffb52b118718617e1b7e03299469a = MAKE_CODEOBJECT(module_filename_obj, 273, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[44], mod_consts[66], NULL, 6, 1, 0);
    codeobj_4ca6b1df69c75f9ad3c6a71c9c9f4250 = MAKE_CODEOBJECT(module_filename_obj, 1115, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[55], mod_consts[67], NULL, 6, 1, 0);
    codeobj_3418faf3813c660812d650404cbb6a0c = MAKE_CODEOBJECT(module_filename_obj, 1016, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[67], NULL, 6, 1, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__10_ifftn(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__11_fft2(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__12_ifft2(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__13_rfftn(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__14_rfft2(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__15_irfftn(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__16_irfft2(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__17_hfftn(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__18_hfft2(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__19_ihfftn(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__1__x_replacer();


static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__20_ihfft2(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__2__dispatch();


static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__3_fft(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__4_ifft(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__5_rfft(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__6_irfft(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__7_hfft(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__8_ihfft(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__9_fftn(PyObject *defaults, PyObject *kw_defaults);


// The module function definitions.
static PyObject *impl_scipy$fft$_basic$$$function__1__x_replacer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *par_dispatchables = python_pars[2];
    PyObject *var_kw = NULL;
    struct Nuitka_FrameObject *frame_6e51f12ea7a6fc461bd72e6a4092d53b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6e51f12ea7a6fc461bd72e6a4092d53b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6e51f12ea7a6fc461bd72e6a4092d53b)) {
        Py_XDECREF(cache_frame_6e51f12ea7a6fc461bd72e6a4092d53b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e51f12ea7a6fc461bd72e6a4092d53b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e51f12ea7a6fc461bd72e6a4092d53b = MAKE_FUNCTION_FRAME(codeobj_6e51f12ea7a6fc461bd72e6a4092d53b, module_scipy$fft$_basic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6e51f12ea7a6fc461bd72e6a4092d53b->m_type_description == NULL);
    frame_6e51f12ea7a6fc461bd72e6a4092d53b = cache_frame_6e51f12ea7a6fc461bd72e6a4092d53b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6e51f12ea7a6fc461bd72e6a4092d53b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6e51f12ea7a6fc461bd72e6a4092d53b) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_args);
        tmp_len_arg_1 = par_args;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[0];
        tmp_condition_result_1 = RICH_COMPARE_GT_CBOOL_LONG_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_dispatchables);
        tmp_expression_value_1 = par_dispatchables;
        tmp_subscript_value_1 = mod_consts[0];
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_left_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_args);
        tmp_expression_value_2 = par_args;
        tmp_subscript_value_2 = mod_consts[1];
        tmp_right_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 10;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_TUPLE_OBJECT(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_left_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_tuple_element_1 = par_kwargs;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_3 = par_kwargs;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_6e51f12ea7a6fc461bd72e6a4092d53b->m_frame.f_lineno = 11;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_kw == NULL);
        var_kw = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_dispatchables);
        tmp_expression_value_4 = par_dispatchables;
        tmp_subscript_value_3 = mod_consts[0];
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_3, 0);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_kw);
        tmp_ass_subscribed_1 = var_kw;
        tmp_ass_subscript_1 = mod_consts[3];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6e51f12ea7a6fc461bd72e6a4092d53b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6e51f12ea7a6fc461bd72e6a4092d53b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6e51f12ea7a6fc461bd72e6a4092d53b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6e51f12ea7a6fc461bd72e6a4092d53b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e51f12ea7a6fc461bd72e6a4092d53b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e51f12ea7a6fc461bd72e6a4092d53b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e51f12ea7a6fc461bd72e6a4092d53b,
        type_description_1,
        par_args,
        par_kwargs,
        par_dispatchables,
        var_kw
    );


    // Release cached frame if used for exception.
    if (frame_6e51f12ea7a6fc461bd72e6a4092d53b == cache_frame_6e51f12ea7a6fc461bd72e6a4092d53b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6e51f12ea7a6fc461bd72e6a4092d53b);
        cache_frame_6e51f12ea7a6fc461bd72e6a4092d53b = NULL;
    }

    assertFrameObject(frame_6e51f12ea7a6fc461bd72e6a4092d53b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(par_args);
        tmp_tuple_element_3 = par_args;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_kw);
        tmp_tuple_element_3 = var_kw;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_3);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_kw);
    var_kw = NULL;
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

    Py_XDECREF(var_kw);
    var_kw = NULL;
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
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    CHECK_OBJECT(par_dispatchables);
    Py_DECREF(par_dispatchables);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    CHECK_OBJECT(par_dispatchables);
    Py_DECREF(par_dispatchables);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_basic$$$function__2__dispatch(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    struct Nuitka_FrameObject *frame_c30b503dfc6bfb9f12f83031b72b9a3b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c30b503dfc6bfb9f12f83031b72b9a3b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c30b503dfc6bfb9f12f83031b72b9a3b)) {
        Py_XDECREF(cache_frame_c30b503dfc6bfb9f12f83031b72b9a3b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c30b503dfc6bfb9f12f83031b72b9a3b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c30b503dfc6bfb9f12f83031b72b9a3b = MAKE_FUNCTION_FRAME(codeobj_c30b503dfc6bfb9f12f83031b72b9a3b, module_scipy$fft$_basic, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c30b503dfc6bfb9f12f83031b72b9a3b->m_type_description == NULL);
    frame_c30b503dfc6bfb9f12f83031b72b9a3b = cache_frame_c30b503dfc6bfb9f12f83031b72b9a3b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c30b503dfc6bfb9f12f83031b72b9a3b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c30b503dfc6bfb9f12f83031b72b9a3b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_tuple_element_1 = par_func;
        tmp_args_value_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "o";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = PyDict_Copy(mod_consts[7]);
        frame_c30b503dfc6bfb9f12f83031b72b9a3b->m_frame.f_lineno = 20;
        tmp_return_value = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c30b503dfc6bfb9f12f83031b72b9a3b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c30b503dfc6bfb9f12f83031b72b9a3b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c30b503dfc6bfb9f12f83031b72b9a3b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c30b503dfc6bfb9f12f83031b72b9a3b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c30b503dfc6bfb9f12f83031b72b9a3b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c30b503dfc6bfb9f12f83031b72b9a3b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c30b503dfc6bfb9f12f83031b72b9a3b,
        type_description_1,
        par_func
    );


    // Release cached frame if used for exception.
    if (frame_c30b503dfc6bfb9f12f83031b72b9a3b == cache_frame_c30b503dfc6bfb9f12f83031b72b9a3b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c30b503dfc6bfb9f12f83031b72b9a3b);
        cache_frame_c30b503dfc6bfb9f12f83031b72b9a3b = NULL;
    }

    assertFrameObject(frame_c30b503dfc6bfb9f12f83031b72b9a3b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_basic$$$function__3_fft(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_n = python_pars[1];
    PyObject *par_axis = python_pars[2];
    PyObject *par_norm = python_pars[3];
    PyObject *par_overwrite_x = python_pars[4];
    PyObject *par_workers = python_pars[5];
    PyObject *par_plan = python_pars[6];
    struct Nuitka_FrameObject *frame_efd710e1bee6e3284863ff09ae664dc6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_efd710e1bee6e3284863ff09ae664dc6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_efd710e1bee6e3284863ff09ae664dc6)) {
        Py_XDECREF(cache_frame_efd710e1bee6e3284863ff09ae664dc6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_efd710e1bee6e3284863ff09ae664dc6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_efd710e1bee6e3284863ff09ae664dc6 = MAKE_FUNCTION_FRAME(codeobj_efd710e1bee6e3284863ff09ae664dc6, module_scipy$fft$_basic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_efd710e1bee6e3284863ff09ae664dc6->m_type_description == NULL);
    frame_efd710e1bee6e3284863ff09ae664dc6 = cache_frame_efd710e1bee6e3284863ff09ae664dc6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_efd710e1bee6e3284863ff09ae664dc6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_efd710e1bee6e3284863ff09ae664dc6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_efd710e1bee6e3284863ff09ae664dc6->m_frame.f_lineno = 164;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_efd710e1bee6e3284863ff09ae664dc6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_efd710e1bee6e3284863ff09ae664dc6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_efd710e1bee6e3284863ff09ae664dc6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_efd710e1bee6e3284863ff09ae664dc6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_efd710e1bee6e3284863ff09ae664dc6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_efd710e1bee6e3284863ff09ae664dc6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_efd710e1bee6e3284863ff09ae664dc6,
        type_description_1,
        par_x,
        par_n,
        par_axis,
        par_norm,
        par_overwrite_x,
        par_workers,
        par_plan
    );


    // Release cached frame if used for exception.
    if (frame_efd710e1bee6e3284863ff09ae664dc6 == cache_frame_efd710e1bee6e3284863ff09ae664dc6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_efd710e1bee6e3284863ff09ae664dc6);
        cache_frame_efd710e1bee6e3284863ff09ae664dc6 = NULL;
    }

    assertFrameObject(frame_efd710e1bee6e3284863ff09ae664dc6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_basic$$$function__4_ifft(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_n = python_pars[1];
    PyObject *par_axis = python_pars[2];
    PyObject *par_norm = python_pars[3];
    PyObject *par_overwrite_x = python_pars[4];
    PyObject *par_workers = python_pars[5];
    PyObject *par_plan = python_pars[6];
    struct Nuitka_FrameObject *frame_03bdfe21819550140b9ae6fbaa06df51;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_03bdfe21819550140b9ae6fbaa06df51 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_03bdfe21819550140b9ae6fbaa06df51)) {
        Py_XDECREF(cache_frame_03bdfe21819550140b9ae6fbaa06df51);

#if _DEBUG_REFCOUNTS
        if (cache_frame_03bdfe21819550140b9ae6fbaa06df51 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_03bdfe21819550140b9ae6fbaa06df51 = MAKE_FUNCTION_FRAME(codeobj_03bdfe21819550140b9ae6fbaa06df51, module_scipy$fft$_basic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_03bdfe21819550140b9ae6fbaa06df51->m_type_description == NULL);
    frame_03bdfe21819550140b9ae6fbaa06df51 = cache_frame_03bdfe21819550140b9ae6fbaa06df51;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_03bdfe21819550140b9ae6fbaa06df51);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_03bdfe21819550140b9ae6fbaa06df51) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_03bdfe21819550140b9ae6fbaa06df51->m_frame.f_lineno = 269;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_03bdfe21819550140b9ae6fbaa06df51);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_03bdfe21819550140b9ae6fbaa06df51);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_03bdfe21819550140b9ae6fbaa06df51);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_03bdfe21819550140b9ae6fbaa06df51, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_03bdfe21819550140b9ae6fbaa06df51->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_03bdfe21819550140b9ae6fbaa06df51, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_03bdfe21819550140b9ae6fbaa06df51,
        type_description_1,
        par_x,
        par_n,
        par_axis,
        par_norm,
        par_overwrite_x,
        par_workers,
        par_plan
    );


    // Release cached frame if used for exception.
    if (frame_03bdfe21819550140b9ae6fbaa06df51 == cache_frame_03bdfe21819550140b9ae6fbaa06df51) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_03bdfe21819550140b9ae6fbaa06df51);
        cache_frame_03bdfe21819550140b9ae6fbaa06df51 = NULL;
    }

    assertFrameObject(frame_03bdfe21819550140b9ae6fbaa06df51);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_basic$$$function__5_rfft(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_n = python_pars[1];
    PyObject *par_axis = python_pars[2];
    PyObject *par_norm = python_pars[3];
    PyObject *par_overwrite_x = python_pars[4];
    PyObject *par_workers = python_pars[5];
    PyObject *par_plan = python_pars[6];
    struct Nuitka_FrameObject *frame_6c0ffb52b118718617e1b7e03299469a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6c0ffb52b118718617e1b7e03299469a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6c0ffb52b118718617e1b7e03299469a)) {
        Py_XDECREF(cache_frame_6c0ffb52b118718617e1b7e03299469a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6c0ffb52b118718617e1b7e03299469a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6c0ffb52b118718617e1b7e03299469a = MAKE_FUNCTION_FRAME(codeobj_6c0ffb52b118718617e1b7e03299469a, module_scipy$fft$_basic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6c0ffb52b118718617e1b7e03299469a->m_type_description == NULL);
    frame_6c0ffb52b118718617e1b7e03299469a = cache_frame_6c0ffb52b118718617e1b7e03299469a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6c0ffb52b118718617e1b7e03299469a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6c0ffb52b118718617e1b7e03299469a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_6c0ffb52b118718617e1b7e03299469a->m_frame.f_lineno = 363;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6c0ffb52b118718617e1b7e03299469a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6c0ffb52b118718617e1b7e03299469a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6c0ffb52b118718617e1b7e03299469a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6c0ffb52b118718617e1b7e03299469a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6c0ffb52b118718617e1b7e03299469a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6c0ffb52b118718617e1b7e03299469a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6c0ffb52b118718617e1b7e03299469a,
        type_description_1,
        par_x,
        par_n,
        par_axis,
        par_norm,
        par_overwrite_x,
        par_workers,
        par_plan
    );


    // Release cached frame if used for exception.
    if (frame_6c0ffb52b118718617e1b7e03299469a == cache_frame_6c0ffb52b118718617e1b7e03299469a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6c0ffb52b118718617e1b7e03299469a);
        cache_frame_6c0ffb52b118718617e1b7e03299469a = NULL;
    }

    assertFrameObject(frame_6c0ffb52b118718617e1b7e03299469a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_basic$$$function__6_irfft(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_n = python_pars[1];
    PyObject *par_axis = python_pars[2];
    PyObject *par_norm = python_pars[3];
    PyObject *par_overwrite_x = python_pars[4];
    PyObject *par_workers = python_pars[5];
    PyObject *par_plan = python_pars[6];
    struct Nuitka_FrameObject *frame_0cd01bca12b2c69bf64bbcb365631cd2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0cd01bca12b2c69bf64bbcb365631cd2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0cd01bca12b2c69bf64bbcb365631cd2)) {
        Py_XDECREF(cache_frame_0cd01bca12b2c69bf64bbcb365631cd2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0cd01bca12b2c69bf64bbcb365631cd2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0cd01bca12b2c69bf64bbcb365631cd2 = MAKE_FUNCTION_FRAME(codeobj_0cd01bca12b2c69bf64bbcb365631cd2, module_scipy$fft$_basic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0cd01bca12b2c69bf64bbcb365631cd2->m_type_description == NULL);
    frame_0cd01bca12b2c69bf64bbcb365631cd2 = cache_frame_0cd01bca12b2c69bf64bbcb365631cd2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0cd01bca12b2c69bf64bbcb365631cd2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0cd01bca12b2c69bf64bbcb365631cd2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_0cd01bca12b2c69bf64bbcb365631cd2->m_frame.f_lineno = 464;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0cd01bca12b2c69bf64bbcb365631cd2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0cd01bca12b2c69bf64bbcb365631cd2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0cd01bca12b2c69bf64bbcb365631cd2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0cd01bca12b2c69bf64bbcb365631cd2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0cd01bca12b2c69bf64bbcb365631cd2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0cd01bca12b2c69bf64bbcb365631cd2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0cd01bca12b2c69bf64bbcb365631cd2,
        type_description_1,
        par_x,
        par_n,
        par_axis,
        par_norm,
        par_overwrite_x,
        par_workers,
        par_plan
    );


    // Release cached frame if used for exception.
    if (frame_0cd01bca12b2c69bf64bbcb365631cd2 == cache_frame_0cd01bca12b2c69bf64bbcb365631cd2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0cd01bca12b2c69bf64bbcb365631cd2);
        cache_frame_0cd01bca12b2c69bf64bbcb365631cd2 = NULL;
    }

    assertFrameObject(frame_0cd01bca12b2c69bf64bbcb365631cd2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_basic$$$function__7_hfft(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_n = python_pars[1];
    PyObject *par_axis = python_pars[2];
    PyObject *par_norm = python_pars[3];
    PyObject *par_overwrite_x = python_pars[4];
    PyObject *par_workers = python_pars[5];
    PyObject *par_plan = python_pars[6];
    struct Nuitka_FrameObject *frame_289a3f02358964e564f040bc6710640d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_289a3f02358964e564f040bc6710640d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_289a3f02358964e564f040bc6710640d)) {
        Py_XDECREF(cache_frame_289a3f02358964e564f040bc6710640d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_289a3f02358964e564f040bc6710640d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_289a3f02358964e564f040bc6710640d = MAKE_FUNCTION_FRAME(codeobj_289a3f02358964e564f040bc6710640d, module_scipy$fft$_basic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_289a3f02358964e564f040bc6710640d->m_type_description == NULL);
    frame_289a3f02358964e564f040bc6710640d = cache_frame_289a3f02358964e564f040bc6710640d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_289a3f02358964e564f040bc6710640d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_289a3f02358964e564f040bc6710640d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_289a3f02358964e564f040bc6710640d->m_frame.f_lineno = 546;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_289a3f02358964e564f040bc6710640d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_289a3f02358964e564f040bc6710640d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_289a3f02358964e564f040bc6710640d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_289a3f02358964e564f040bc6710640d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_289a3f02358964e564f040bc6710640d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_289a3f02358964e564f040bc6710640d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_289a3f02358964e564f040bc6710640d,
        type_description_1,
        par_x,
        par_n,
        par_axis,
        par_norm,
        par_overwrite_x,
        par_workers,
        par_plan
    );


    // Release cached frame if used for exception.
    if (frame_289a3f02358964e564f040bc6710640d == cache_frame_289a3f02358964e564f040bc6710640d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_289a3f02358964e564f040bc6710640d);
        cache_frame_289a3f02358964e564f040bc6710640d = NULL;
    }

    assertFrameObject(frame_289a3f02358964e564f040bc6710640d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_basic$$$function__8_ihfft(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_n = python_pars[1];
    PyObject *par_axis = python_pars[2];
    PyObject *par_norm = python_pars[3];
    PyObject *par_overwrite_x = python_pars[4];
    PyObject *par_workers = python_pars[5];
    PyObject *par_plan = python_pars[6];
    struct Nuitka_FrameObject *frame_1a23b7e45d3c128d1a689fe28d2bf038;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1a23b7e45d3c128d1a689fe28d2bf038 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1a23b7e45d3c128d1a689fe28d2bf038)) {
        Py_XDECREF(cache_frame_1a23b7e45d3c128d1a689fe28d2bf038);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a23b7e45d3c128d1a689fe28d2bf038 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a23b7e45d3c128d1a689fe28d2bf038 = MAKE_FUNCTION_FRAME(codeobj_1a23b7e45d3c128d1a689fe28d2bf038, module_scipy$fft$_basic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1a23b7e45d3c128d1a689fe28d2bf038->m_type_description == NULL);
    frame_1a23b7e45d3c128d1a689fe28d2bf038 = cache_frame_1a23b7e45d3c128d1a689fe28d2bf038;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1a23b7e45d3c128d1a689fe28d2bf038);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1a23b7e45d3c128d1a689fe28d2bf038) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 612;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 612;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 612;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_1a23b7e45d3c128d1a689fe28d2bf038->m_frame.f_lineno = 612;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 612;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1a23b7e45d3c128d1a689fe28d2bf038);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1a23b7e45d3c128d1a689fe28d2bf038);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1a23b7e45d3c128d1a689fe28d2bf038);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1a23b7e45d3c128d1a689fe28d2bf038, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a23b7e45d3c128d1a689fe28d2bf038->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a23b7e45d3c128d1a689fe28d2bf038, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a23b7e45d3c128d1a689fe28d2bf038,
        type_description_1,
        par_x,
        par_n,
        par_axis,
        par_norm,
        par_overwrite_x,
        par_workers,
        par_plan
    );


    // Release cached frame if used for exception.
    if (frame_1a23b7e45d3c128d1a689fe28d2bf038 == cache_frame_1a23b7e45d3c128d1a689fe28d2bf038) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1a23b7e45d3c128d1a689fe28d2bf038);
        cache_frame_1a23b7e45d3c128d1a689fe28d2bf038 = NULL;
    }

    assertFrameObject(frame_1a23b7e45d3c128d1a689fe28d2bf038);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_n);
    Py_DECREF(par_n);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_basic$$$function__9_fftn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_s = python_pars[1];
    PyObject *par_axes = python_pars[2];
    PyObject *par_norm = python_pars[3];
    PyObject *par_overwrite_x = python_pars[4];
    PyObject *par_workers = python_pars[5];
    PyObject *par_plan = python_pars[6];
    struct Nuitka_FrameObject *frame_f909ed44d44cfbcfe768b72b99370c19;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f909ed44d44cfbcfe768b72b99370c19 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f909ed44d44cfbcfe768b72b99370c19)) {
        Py_XDECREF(cache_frame_f909ed44d44cfbcfe768b72b99370c19);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f909ed44d44cfbcfe768b72b99370c19 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f909ed44d44cfbcfe768b72b99370c19 = MAKE_FUNCTION_FRAME(codeobj_f909ed44d44cfbcfe768b72b99370c19, module_scipy$fft$_basic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f909ed44d44cfbcfe768b72b99370c19->m_type_description == NULL);
    frame_f909ed44d44cfbcfe768b72b99370c19 = cache_frame_f909ed44d44cfbcfe768b72b99370c19;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f909ed44d44cfbcfe768b72b99370c19);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f909ed44d44cfbcfe768b72b99370c19) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 716;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 716;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 716;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_f909ed44d44cfbcfe768b72b99370c19->m_frame.f_lineno = 716;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 716;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f909ed44d44cfbcfe768b72b99370c19);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f909ed44d44cfbcfe768b72b99370c19);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f909ed44d44cfbcfe768b72b99370c19);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f909ed44d44cfbcfe768b72b99370c19, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f909ed44d44cfbcfe768b72b99370c19->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f909ed44d44cfbcfe768b72b99370c19, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f909ed44d44cfbcfe768b72b99370c19,
        type_description_1,
        par_x,
        par_s,
        par_axes,
        par_norm,
        par_overwrite_x,
        par_workers,
        par_plan
    );


    // Release cached frame if used for exception.
    if (frame_f909ed44d44cfbcfe768b72b99370c19 == cache_frame_f909ed44d44cfbcfe768b72b99370c19) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f909ed44d44cfbcfe768b72b99370c19);
        cache_frame_f909ed44d44cfbcfe768b72b99370c19 = NULL;
    }

    assertFrameObject(frame_f909ed44d44cfbcfe768b72b99370c19);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_basic$$$function__10_ifftn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_s = python_pars[1];
    PyObject *par_axes = python_pars[2];
    PyObject *par_norm = python_pars[3];
    PyObject *par_overwrite_x = python_pars[4];
    PyObject *par_workers = python_pars[5];
    PyObject *par_plan = python_pars[6];
    struct Nuitka_FrameObject *frame_6f6ad81c163de6ecc1a20827befb26a5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6f6ad81c163de6ecc1a20827befb26a5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6f6ad81c163de6ecc1a20827befb26a5)) {
        Py_XDECREF(cache_frame_6f6ad81c163de6ecc1a20827befb26a5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6f6ad81c163de6ecc1a20827befb26a5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6f6ad81c163de6ecc1a20827befb26a5 = MAKE_FUNCTION_FRAME(codeobj_6f6ad81c163de6ecc1a20827befb26a5, module_scipy$fft$_basic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6f6ad81c163de6ecc1a20827befb26a5->m_type_description == NULL);
    frame_6f6ad81c163de6ecc1a20827befb26a5 = cache_frame_6f6ad81c163de6ecc1a20827befb26a5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6f6ad81c163de6ecc1a20827befb26a5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6f6ad81c163de6ecc1a20827befb26a5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 819;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 819;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 819;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_6f6ad81c163de6ecc1a20827befb26a5->m_frame.f_lineno = 819;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 819;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6f6ad81c163de6ecc1a20827befb26a5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6f6ad81c163de6ecc1a20827befb26a5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6f6ad81c163de6ecc1a20827befb26a5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6f6ad81c163de6ecc1a20827befb26a5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6f6ad81c163de6ecc1a20827befb26a5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6f6ad81c163de6ecc1a20827befb26a5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6f6ad81c163de6ecc1a20827befb26a5,
        type_description_1,
        par_x,
        par_s,
        par_axes,
        par_norm,
        par_overwrite_x,
        par_workers,
        par_plan
    );


    // Release cached frame if used for exception.
    if (frame_6f6ad81c163de6ecc1a20827befb26a5 == cache_frame_6f6ad81c163de6ecc1a20827befb26a5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6f6ad81c163de6ecc1a20827befb26a5);
        cache_frame_6f6ad81c163de6ecc1a20827befb26a5 = NULL;
    }

    assertFrameObject(frame_6f6ad81c163de6ecc1a20827befb26a5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_basic$$$function__11_fft2(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_s = python_pars[1];
    PyObject *par_axes = python_pars[2];
    PyObject *par_norm = python_pars[3];
    PyObject *par_overwrite_x = python_pars[4];
    PyObject *par_workers = python_pars[5];
    PyObject *par_plan = python_pars[6];
    struct Nuitka_FrameObject *frame_9ed9760995827b4f9586146500cabc8b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9ed9760995827b4f9586146500cabc8b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9ed9760995827b4f9586146500cabc8b)) {
        Py_XDECREF(cache_frame_9ed9760995827b4f9586146500cabc8b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9ed9760995827b4f9586146500cabc8b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9ed9760995827b4f9586146500cabc8b = MAKE_FUNCTION_FRAME(codeobj_9ed9760995827b4f9586146500cabc8b, module_scipy$fft$_basic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9ed9760995827b4f9586146500cabc8b->m_type_description == NULL);
    frame_9ed9760995827b4f9586146500cabc8b = cache_frame_9ed9760995827b4f9586146500cabc8b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9ed9760995827b4f9586146500cabc8b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9ed9760995827b4f9586146500cabc8b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 917;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 917;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 917;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_9ed9760995827b4f9586146500cabc8b->m_frame.f_lineno = 917;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 917;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9ed9760995827b4f9586146500cabc8b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9ed9760995827b4f9586146500cabc8b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9ed9760995827b4f9586146500cabc8b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9ed9760995827b4f9586146500cabc8b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9ed9760995827b4f9586146500cabc8b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9ed9760995827b4f9586146500cabc8b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9ed9760995827b4f9586146500cabc8b,
        type_description_1,
        par_x,
        par_s,
        par_axes,
        par_norm,
        par_overwrite_x,
        par_workers,
        par_plan
    );


    // Release cached frame if used for exception.
    if (frame_9ed9760995827b4f9586146500cabc8b == cache_frame_9ed9760995827b4f9586146500cabc8b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9ed9760995827b4f9586146500cabc8b);
        cache_frame_9ed9760995827b4f9586146500cabc8b = NULL;
    }

    assertFrameObject(frame_9ed9760995827b4f9586146500cabc8b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_basic$$$function__12_ifft2(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_s = python_pars[1];
    PyObject *par_axes = python_pars[2];
    PyObject *par_norm = python_pars[3];
    PyObject *par_overwrite_x = python_pars[4];
    PyObject *par_workers = python_pars[5];
    PyObject *par_plan = python_pars[6];
    struct Nuitka_FrameObject *frame_af291d666ed3e707941d22659a6d069b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_af291d666ed3e707941d22659a6d069b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_af291d666ed3e707941d22659a6d069b)) {
        Py_XDECREF(cache_frame_af291d666ed3e707941d22659a6d069b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_af291d666ed3e707941d22659a6d069b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_af291d666ed3e707941d22659a6d069b = MAKE_FUNCTION_FRAME(codeobj_af291d666ed3e707941d22659a6d069b, module_scipy$fft$_basic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_af291d666ed3e707941d22659a6d069b->m_type_description == NULL);
    frame_af291d666ed3e707941d22659a6d069b = cache_frame_af291d666ed3e707941d22659a6d069b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_af291d666ed3e707941d22659a6d069b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_af291d666ed3e707941d22659a6d069b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1012;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1012;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1012;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_af291d666ed3e707941d22659a6d069b->m_frame.f_lineno = 1012;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1012;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_af291d666ed3e707941d22659a6d069b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_af291d666ed3e707941d22659a6d069b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_af291d666ed3e707941d22659a6d069b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_af291d666ed3e707941d22659a6d069b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_af291d666ed3e707941d22659a6d069b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_af291d666ed3e707941d22659a6d069b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_af291d666ed3e707941d22659a6d069b,
        type_description_1,
        par_x,
        par_s,
        par_axes,
        par_norm,
        par_overwrite_x,
        par_workers,
        par_plan
    );


    // Release cached frame if used for exception.
    if (frame_af291d666ed3e707941d22659a6d069b == cache_frame_af291d666ed3e707941d22659a6d069b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_af291d666ed3e707941d22659a6d069b);
        cache_frame_af291d666ed3e707941d22659a6d069b = NULL;
    }

    assertFrameObject(frame_af291d666ed3e707941d22659a6d069b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_basic$$$function__13_rfftn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_s = python_pars[1];
    PyObject *par_axes = python_pars[2];
    PyObject *par_norm = python_pars[3];
    PyObject *par_overwrite_x = python_pars[4];
    PyObject *par_workers = python_pars[5];
    PyObject *par_plan = python_pars[6];
    struct Nuitka_FrameObject *frame_3418faf3813c660812d650404cbb6a0c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3418faf3813c660812d650404cbb6a0c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3418faf3813c660812d650404cbb6a0c)) {
        Py_XDECREF(cache_frame_3418faf3813c660812d650404cbb6a0c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3418faf3813c660812d650404cbb6a0c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3418faf3813c660812d650404cbb6a0c = MAKE_FUNCTION_FRAME(codeobj_3418faf3813c660812d650404cbb6a0c, module_scipy$fft$_basic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3418faf3813c660812d650404cbb6a0c->m_type_description == NULL);
    frame_3418faf3813c660812d650404cbb6a0c = cache_frame_3418faf3813c660812d650404cbb6a0c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3418faf3813c660812d650404cbb6a0c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3418faf3813c660812d650404cbb6a0c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_3418faf3813c660812d650404cbb6a0c->m_frame.f_lineno = 1111;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1111;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3418faf3813c660812d650404cbb6a0c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3418faf3813c660812d650404cbb6a0c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3418faf3813c660812d650404cbb6a0c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3418faf3813c660812d650404cbb6a0c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3418faf3813c660812d650404cbb6a0c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3418faf3813c660812d650404cbb6a0c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3418faf3813c660812d650404cbb6a0c,
        type_description_1,
        par_x,
        par_s,
        par_axes,
        par_norm,
        par_overwrite_x,
        par_workers,
        par_plan
    );


    // Release cached frame if used for exception.
    if (frame_3418faf3813c660812d650404cbb6a0c == cache_frame_3418faf3813c660812d650404cbb6a0c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3418faf3813c660812d650404cbb6a0c);
        cache_frame_3418faf3813c660812d650404cbb6a0c = NULL;
    }

    assertFrameObject(frame_3418faf3813c660812d650404cbb6a0c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_basic$$$function__14_rfft2(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_s = python_pars[1];
    PyObject *par_axes = python_pars[2];
    PyObject *par_norm = python_pars[3];
    PyObject *par_overwrite_x = python_pars[4];
    PyObject *par_workers = python_pars[5];
    PyObject *par_plan = python_pars[6];
    struct Nuitka_FrameObject *frame_4ca6b1df69c75f9ad3c6a71c9c9f4250;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4ca6b1df69c75f9ad3c6a71c9c9f4250 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4ca6b1df69c75f9ad3c6a71c9c9f4250)) {
        Py_XDECREF(cache_frame_4ca6b1df69c75f9ad3c6a71c9c9f4250);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4ca6b1df69c75f9ad3c6a71c9c9f4250 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4ca6b1df69c75f9ad3c6a71c9c9f4250 = MAKE_FUNCTION_FRAME(codeobj_4ca6b1df69c75f9ad3c6a71c9c9f4250, module_scipy$fft$_basic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4ca6b1df69c75f9ad3c6a71c9c9f4250->m_type_description == NULL);
    frame_4ca6b1df69c75f9ad3c6a71c9c9f4250 = cache_frame_4ca6b1df69c75f9ad3c6a71c9c9f4250;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4ca6b1df69c75f9ad3c6a71c9c9f4250);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4ca6b1df69c75f9ad3c6a71c9c9f4250) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1161;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1161;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1161;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_4ca6b1df69c75f9ad3c6a71c9c9f4250->m_frame.f_lineno = 1161;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1161;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4ca6b1df69c75f9ad3c6a71c9c9f4250);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4ca6b1df69c75f9ad3c6a71c9c9f4250);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4ca6b1df69c75f9ad3c6a71c9c9f4250);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4ca6b1df69c75f9ad3c6a71c9c9f4250, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4ca6b1df69c75f9ad3c6a71c9c9f4250->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4ca6b1df69c75f9ad3c6a71c9c9f4250, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4ca6b1df69c75f9ad3c6a71c9c9f4250,
        type_description_1,
        par_x,
        par_s,
        par_axes,
        par_norm,
        par_overwrite_x,
        par_workers,
        par_plan
    );


    // Release cached frame if used for exception.
    if (frame_4ca6b1df69c75f9ad3c6a71c9c9f4250 == cache_frame_4ca6b1df69c75f9ad3c6a71c9c9f4250) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4ca6b1df69c75f9ad3c6a71c9c9f4250);
        cache_frame_4ca6b1df69c75f9ad3c6a71c9c9f4250 = NULL;
    }

    assertFrameObject(frame_4ca6b1df69c75f9ad3c6a71c9c9f4250);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_basic$$$function__15_irfftn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_s = python_pars[1];
    PyObject *par_axes = python_pars[2];
    PyObject *par_norm = python_pars[3];
    PyObject *par_overwrite_x = python_pars[4];
    PyObject *par_workers = python_pars[5];
    PyObject *par_plan = python_pars[6];
    struct Nuitka_FrameObject *frame_d9a9b73143ee029ef82e626d8efee1f0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d9a9b73143ee029ef82e626d8efee1f0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d9a9b73143ee029ef82e626d8efee1f0)) {
        Py_XDECREF(cache_frame_d9a9b73143ee029ef82e626d8efee1f0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d9a9b73143ee029ef82e626d8efee1f0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d9a9b73143ee029ef82e626d8efee1f0 = MAKE_FUNCTION_FRAME(codeobj_d9a9b73143ee029ef82e626d8efee1f0, module_scipy$fft$_basic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d9a9b73143ee029ef82e626d8efee1f0->m_type_description == NULL);
    frame_d9a9b73143ee029ef82e626d8efee1f0 = cache_frame_d9a9b73143ee029ef82e626d8efee1f0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d9a9b73143ee029ef82e626d8efee1f0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d9a9b73143ee029ef82e626d8efee1f0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1267;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1267;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1267;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_d9a9b73143ee029ef82e626d8efee1f0->m_frame.f_lineno = 1267;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1267;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d9a9b73143ee029ef82e626d8efee1f0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d9a9b73143ee029ef82e626d8efee1f0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d9a9b73143ee029ef82e626d8efee1f0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d9a9b73143ee029ef82e626d8efee1f0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d9a9b73143ee029ef82e626d8efee1f0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d9a9b73143ee029ef82e626d8efee1f0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d9a9b73143ee029ef82e626d8efee1f0,
        type_description_1,
        par_x,
        par_s,
        par_axes,
        par_norm,
        par_overwrite_x,
        par_workers,
        par_plan
    );


    // Release cached frame if used for exception.
    if (frame_d9a9b73143ee029ef82e626d8efee1f0 == cache_frame_d9a9b73143ee029ef82e626d8efee1f0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d9a9b73143ee029ef82e626d8efee1f0);
        cache_frame_d9a9b73143ee029ef82e626d8efee1f0 = NULL;
    }

    assertFrameObject(frame_d9a9b73143ee029ef82e626d8efee1f0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_basic$$$function__16_irfft2(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_s = python_pars[1];
    PyObject *par_axes = python_pars[2];
    PyObject *par_norm = python_pars[3];
    PyObject *par_overwrite_x = python_pars[4];
    PyObject *par_workers = python_pars[5];
    PyObject *par_plan = python_pars[6];
    struct Nuitka_FrameObject *frame_7be9c54f27d5028e96e85da9bec887f6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7be9c54f27d5028e96e85da9bec887f6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7be9c54f27d5028e96e85da9bec887f6)) {
        Py_XDECREF(cache_frame_7be9c54f27d5028e96e85da9bec887f6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7be9c54f27d5028e96e85da9bec887f6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7be9c54f27d5028e96e85da9bec887f6 = MAKE_FUNCTION_FRAME(codeobj_7be9c54f27d5028e96e85da9bec887f6, module_scipy$fft$_basic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7be9c54f27d5028e96e85da9bec887f6->m_type_description == NULL);
    frame_7be9c54f27d5028e96e85da9bec887f6 = cache_frame_7be9c54f27d5028e96e85da9bec887f6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7be9c54f27d5028e96e85da9bec887f6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7be9c54f27d5028e96e85da9bec887f6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1317;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1317;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1317;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_7be9c54f27d5028e96e85da9bec887f6->m_frame.f_lineno = 1317;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1317;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7be9c54f27d5028e96e85da9bec887f6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7be9c54f27d5028e96e85da9bec887f6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7be9c54f27d5028e96e85da9bec887f6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7be9c54f27d5028e96e85da9bec887f6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7be9c54f27d5028e96e85da9bec887f6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7be9c54f27d5028e96e85da9bec887f6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7be9c54f27d5028e96e85da9bec887f6,
        type_description_1,
        par_x,
        par_s,
        par_axes,
        par_norm,
        par_overwrite_x,
        par_workers,
        par_plan
    );


    // Release cached frame if used for exception.
    if (frame_7be9c54f27d5028e96e85da9bec887f6 == cache_frame_7be9c54f27d5028e96e85da9bec887f6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7be9c54f27d5028e96e85da9bec887f6);
        cache_frame_7be9c54f27d5028e96e85da9bec887f6 = NULL;
    }

    assertFrameObject(frame_7be9c54f27d5028e96e85da9bec887f6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_basic$$$function__17_hfftn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_s = python_pars[1];
    PyObject *par_axes = python_pars[2];
    PyObject *par_norm = python_pars[3];
    PyObject *par_overwrite_x = python_pars[4];
    PyObject *par_workers = python_pars[5];
    PyObject *par_plan = python_pars[6];
    struct Nuitka_FrameObject *frame_3fc266f8d1ec8f5cd83986595ffdfda9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3fc266f8d1ec8f5cd83986595ffdfda9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3fc266f8d1ec8f5cd83986595ffdfda9)) {
        Py_XDECREF(cache_frame_3fc266f8d1ec8f5cd83986595ffdfda9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3fc266f8d1ec8f5cd83986595ffdfda9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3fc266f8d1ec8f5cd83986595ffdfda9 = MAKE_FUNCTION_FRAME(codeobj_3fc266f8d1ec8f5cd83986595ffdfda9, module_scipy$fft$_basic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3fc266f8d1ec8f5cd83986595ffdfda9->m_type_description == NULL);
    frame_3fc266f8d1ec8f5cd83986595ffdfda9 = cache_frame_3fc266f8d1ec8f5cd83986595ffdfda9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3fc266f8d1ec8f5cd83986595ffdfda9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3fc266f8d1ec8f5cd83986595ffdfda9) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1430;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1430;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1430;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_3fc266f8d1ec8f5cd83986595ffdfda9->m_frame.f_lineno = 1430;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1430;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3fc266f8d1ec8f5cd83986595ffdfda9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3fc266f8d1ec8f5cd83986595ffdfda9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3fc266f8d1ec8f5cd83986595ffdfda9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3fc266f8d1ec8f5cd83986595ffdfda9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3fc266f8d1ec8f5cd83986595ffdfda9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3fc266f8d1ec8f5cd83986595ffdfda9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3fc266f8d1ec8f5cd83986595ffdfda9,
        type_description_1,
        par_x,
        par_s,
        par_axes,
        par_norm,
        par_overwrite_x,
        par_workers,
        par_plan
    );


    // Release cached frame if used for exception.
    if (frame_3fc266f8d1ec8f5cd83986595ffdfda9 == cache_frame_3fc266f8d1ec8f5cd83986595ffdfda9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3fc266f8d1ec8f5cd83986595ffdfda9);
        cache_frame_3fc266f8d1ec8f5cd83986595ffdfda9 = NULL;
    }

    assertFrameObject(frame_3fc266f8d1ec8f5cd83986595ffdfda9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_basic$$$function__18_hfft2(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_s = python_pars[1];
    PyObject *par_axes = python_pars[2];
    PyObject *par_norm = python_pars[3];
    PyObject *par_overwrite_x = python_pars[4];
    PyObject *par_workers = python_pars[5];
    PyObject *par_plan = python_pars[6];
    struct Nuitka_FrameObject *frame_6ae9475bb76e725b1ecabc0bc4968290;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6ae9475bb76e725b1ecabc0bc4968290 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6ae9475bb76e725b1ecabc0bc4968290)) {
        Py_XDECREF(cache_frame_6ae9475bb76e725b1ecabc0bc4968290);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6ae9475bb76e725b1ecabc0bc4968290 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6ae9475bb76e725b1ecabc0bc4968290 = MAKE_FUNCTION_FRAME(codeobj_6ae9475bb76e725b1ecabc0bc4968290, module_scipy$fft$_basic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6ae9475bb76e725b1ecabc0bc4968290->m_type_description == NULL);
    frame_6ae9475bb76e725b1ecabc0bc4968290 = cache_frame_6ae9475bb76e725b1ecabc0bc4968290;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6ae9475bb76e725b1ecabc0bc4968290);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6ae9475bb76e725b1ecabc0bc4968290) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1478;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1478;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1478;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_6ae9475bb76e725b1ecabc0bc4968290->m_frame.f_lineno = 1478;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1478;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6ae9475bb76e725b1ecabc0bc4968290);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6ae9475bb76e725b1ecabc0bc4968290);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6ae9475bb76e725b1ecabc0bc4968290);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6ae9475bb76e725b1ecabc0bc4968290, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6ae9475bb76e725b1ecabc0bc4968290->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6ae9475bb76e725b1ecabc0bc4968290, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6ae9475bb76e725b1ecabc0bc4968290,
        type_description_1,
        par_x,
        par_s,
        par_axes,
        par_norm,
        par_overwrite_x,
        par_workers,
        par_plan
    );


    // Release cached frame if used for exception.
    if (frame_6ae9475bb76e725b1ecabc0bc4968290 == cache_frame_6ae9475bb76e725b1ecabc0bc4968290) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6ae9475bb76e725b1ecabc0bc4968290);
        cache_frame_6ae9475bb76e725b1ecabc0bc4968290 = NULL;
    }

    assertFrameObject(frame_6ae9475bb76e725b1ecabc0bc4968290);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_basic$$$function__19_ihfftn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_s = python_pars[1];
    PyObject *par_axes = python_pars[2];
    PyObject *par_norm = python_pars[3];
    PyObject *par_overwrite_x = python_pars[4];
    PyObject *par_workers = python_pars[5];
    PyObject *par_plan = python_pars[6];
    struct Nuitka_FrameObject *frame_c2fd5e810219f40d08d9b08fadf365ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c2fd5e810219f40d08d9b08fadf365ed = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c2fd5e810219f40d08d9b08fadf365ed)) {
        Py_XDECREF(cache_frame_c2fd5e810219f40d08d9b08fadf365ed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c2fd5e810219f40d08d9b08fadf365ed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c2fd5e810219f40d08d9b08fadf365ed = MAKE_FUNCTION_FRAME(codeobj_c2fd5e810219f40d08d9b08fadf365ed, module_scipy$fft$_basic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c2fd5e810219f40d08d9b08fadf365ed->m_type_description == NULL);
    frame_c2fd5e810219f40d08d9b08fadf365ed = cache_frame_c2fd5e810219f40d08d9b08fadf365ed;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c2fd5e810219f40d08d9b08fadf365ed);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c2fd5e810219f40d08d9b08fadf365ed) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1572;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1572;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1572;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_c2fd5e810219f40d08d9b08fadf365ed->m_frame.f_lineno = 1572;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1572;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c2fd5e810219f40d08d9b08fadf365ed);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c2fd5e810219f40d08d9b08fadf365ed);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c2fd5e810219f40d08d9b08fadf365ed);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c2fd5e810219f40d08d9b08fadf365ed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c2fd5e810219f40d08d9b08fadf365ed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c2fd5e810219f40d08d9b08fadf365ed, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c2fd5e810219f40d08d9b08fadf365ed,
        type_description_1,
        par_x,
        par_s,
        par_axes,
        par_norm,
        par_overwrite_x,
        par_workers,
        par_plan
    );


    // Release cached frame if used for exception.
    if (frame_c2fd5e810219f40d08d9b08fadf365ed == cache_frame_c2fd5e810219f40d08d9b08fadf365ed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c2fd5e810219f40d08d9b08fadf365ed);
        cache_frame_c2fd5e810219f40d08d9b08fadf365ed = NULL;
    }

    assertFrameObject(frame_c2fd5e810219f40d08d9b08fadf365ed);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$fft$_basic$$$function__20_ihfft2(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_s = python_pars[1];
    PyObject *par_axes = python_pars[2];
    PyObject *par_norm = python_pars[3];
    PyObject *par_overwrite_x = python_pars[4];
    PyObject *par_workers = python_pars[5];
    PyObject *par_plan = python_pars[6];
    struct Nuitka_FrameObject *frame_aa24ad5a4a0a85157eb888a74244586e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_aa24ad5a4a0a85157eb888a74244586e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_aa24ad5a4a0a85157eb888a74244586e)) {
        Py_XDECREF(cache_frame_aa24ad5a4a0a85157eb888a74244586e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aa24ad5a4a0a85157eb888a74244586e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aa24ad5a4a0a85157eb888a74244586e = MAKE_FUNCTION_FRAME(codeobj_aa24ad5a4a0a85157eb888a74244586e, module_scipy$fft$_basic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_aa24ad5a4a0a85157eb888a74244586e->m_type_description == NULL);
    frame_aa24ad5a4a0a85157eb888a74244586e = cache_frame_aa24ad5a4a0a85157eb888a74244586e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_aa24ad5a4a0a85157eb888a74244586e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_aa24ad5a4a0a85157eb888a74244586e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1620;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1620;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1620;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_aa24ad5a4a0a85157eb888a74244586e->m_frame.f_lineno = 1620;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1620;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa24ad5a4a0a85157eb888a74244586e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa24ad5a4a0a85157eb888a74244586e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa24ad5a4a0a85157eb888a74244586e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aa24ad5a4a0a85157eb888a74244586e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aa24ad5a4a0a85157eb888a74244586e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aa24ad5a4a0a85157eb888a74244586e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aa24ad5a4a0a85157eb888a74244586e,
        type_description_1,
        par_x,
        par_s,
        par_axes,
        par_norm,
        par_overwrite_x,
        par_workers,
        par_plan
    );


    // Release cached frame if used for exception.
    if (frame_aa24ad5a4a0a85157eb888a74244586e == cache_frame_aa24ad5a4a0a85157eb888a74244586e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_aa24ad5a4a0a85157eb888a74244586e);
        cache_frame_aa24ad5a4a0a85157eb888a74244586e = NULL;
    }

    assertFrameObject(frame_aa24ad5a4a0a85157eb888a74244586e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_axes);
    Py_DECREF(par_axes);
    CHECK_OBJECT(par_norm);
    Py_DECREF(par_norm);
    CHECK_OBJECT(par_overwrite_x);
    Py_DECREF(par_overwrite_x);
    CHECK_OBJECT(par_workers);
    Py_DECREF(par_workers);
    CHECK_OBJECT(par_plan);
    Py_DECREF(par_plan);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__10_ifftn(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_basic$$$function__10_ifftn,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6f6ad81c163de6ecc1a20827befb26a5,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_scipy$fft$_basic,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__11_fft2(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_basic$$$function__11_fft2,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9ed9760995827b4f9586146500cabc8b,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_scipy$fft$_basic,
        mod_consts[20],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__12_ifft2(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_basic$$$function__12_ifft2,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_af291d666ed3e707941d22659a6d069b,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_scipy$fft$_basic,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__13_rfftn(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_basic$$$function__13_rfftn,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3418faf3813c660812d650404cbb6a0c,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_scipy$fft$_basic,
        mod_consts[22],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__14_rfft2(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_basic$$$function__14_rfft2,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4ca6b1df69c75f9ad3c6a71c9c9f4250,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_scipy$fft$_basic,
        mod_consts[23],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__15_irfftn(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_basic$$$function__15_irfftn,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d9a9b73143ee029ef82e626d8efee1f0,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_scipy$fft$_basic,
        mod_consts[24],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__16_irfft2(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_basic$$$function__16_irfft2,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7be9c54f27d5028e96e85da9bec887f6,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_scipy$fft$_basic,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__17_hfftn(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_basic$$$function__17_hfftn,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3fc266f8d1ec8f5cd83986595ffdfda9,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_scipy$fft$_basic,
        mod_consts[26],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__18_hfft2(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_basic$$$function__18_hfft2,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6ae9475bb76e725b1ecabc0bc4968290,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_scipy$fft$_basic,
        mod_consts[27],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__19_ihfftn(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_basic$$$function__19_ihfftn,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c2fd5e810219f40d08d9b08fadf365ed,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_scipy$fft$_basic,
        mod_consts[28],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__1__x_replacer() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_basic$$$function__1__x_replacer,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6e51f12ea7a6fc461bd72e6a4092d53b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$fft$_basic,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__20_ihfft2(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_basic$$$function__20_ihfft2,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aa24ad5a4a0a85157eb888a74244586e,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_scipy$fft$_basic,
        mod_consts[29],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__2__dispatch() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_basic$$$function__2__dispatch,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c30b503dfc6bfb9f12f83031b72b9a3b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$fft$_basic,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__3_fft(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_basic$$$function__3_fft,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_efd710e1bee6e3284863ff09ae664dc6,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_scipy$fft$_basic,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__4_ifft(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_basic$$$function__4_ifft,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_03bdfe21819550140b9ae6fbaa06df51,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_scipy$fft$_basic,
        mod_consts[13],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__5_rfft(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_basic$$$function__5_rfft,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6c0ffb52b118718617e1b7e03299469a,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_scipy$fft$_basic,
        mod_consts[14],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__6_irfft(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_basic$$$function__6_irfft,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0cd01bca12b2c69bf64bbcb365631cd2,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_scipy$fft$_basic,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__7_hfft(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_basic$$$function__7_hfft,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_289a3f02358964e564f040bc6710640d,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_scipy$fft$_basic,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__8_ihfft(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_basic$$$function__8_ihfft,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1a23b7e45d3c128d1a689fe28d2bf038,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_scipy$fft$_basic,
        mod_consts[17],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$fft$_basic$$$function__9_fftn(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$fft$_basic$$$function__9_fftn,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f909ed44d44cfbcfe768b72b99370c19,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_scipy$fft$_basic,
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

function_impl_code functable_scipy$fft$_basic[] = {
    impl_scipy$fft$_basic$$$function__1__x_replacer,
    impl_scipy$fft$_basic$$$function__2__dispatch,
    impl_scipy$fft$_basic$$$function__3_fft,
    impl_scipy$fft$_basic$$$function__4_ifft,
    impl_scipy$fft$_basic$$$function__5_rfft,
    impl_scipy$fft$_basic$$$function__6_irfft,
    impl_scipy$fft$_basic$$$function__7_hfft,
    impl_scipy$fft$_basic$$$function__8_ihfft,
    impl_scipy$fft$_basic$$$function__9_fftn,
    impl_scipy$fft$_basic$$$function__10_ifftn,
    impl_scipy$fft$_basic$$$function__11_fft2,
    impl_scipy$fft$_basic$$$function__12_ifft2,
    impl_scipy$fft$_basic$$$function__13_rfftn,
    impl_scipy$fft$_basic$$$function__14_rfft2,
    impl_scipy$fft$_basic$$$function__15_irfftn,
    impl_scipy$fft$_basic$$$function__16_irfft2,
    impl_scipy$fft$_basic$$$function__17_hfftn,
    impl_scipy$fft$_basic$$$function__18_hfft2,
    impl_scipy$fft$_basic$$$function__19_ihfftn,
    impl_scipy$fft$_basic$$$function__20_ihfft2,
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

    function_impl_code *current = functable_scipy$fft$_basic;
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

    if (offset > sizeof(functable_scipy$fft$_basic) || offset < 0) {
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
        functable_scipy$fft$_basic[offset],
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
        module_scipy$fft$_basic,
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
PyObject *modulecode_scipy$fft$_basic(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scipy.fft._basic");

    // Store the module for future use.
    module_scipy$fft$_basic = module;

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
        PRINT_STRING("scipy.fft._basic: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.fft._basic: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.fft._basic: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initscipy$fft$_basic\n");

    moduledict_scipy$fft$_basic = MODULE_DICT(module_scipy$fft$_basic);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$fft$_basic,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$fft$_basic,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[68]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$fft$_basic,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$fft$_basic,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$fft$_basic,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$fft$_basic);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_scipy$fft$_basic);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_55ffce6699eaa60f0c12d76a773ae9fc;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_55ffce6699eaa60f0c12d76a773ae9fc = MAKE_MODULE_FRAME(codeobj_55ffce6699eaa60f0c12d76a773ae9fc, module_scipy$fft$_basic);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_55ffce6699eaa60f0c12d76a773ae9fc);
    assert(Py_REFCNT(frame_55ffce6699eaa60f0c12d76a773ae9fc) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[33], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[34], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[36];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_scipy$fft$_basic;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[37];
        tmp_level_value_1 = mod_consts[0];
        frame_55ffce6699eaa60f0c12d76a773ae9fc->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$fft$_basic,
                mod_consts[5],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[5]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_scipy$fft$_basic,
                mod_consts[9],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[9]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_6);
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
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[38];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_scipy$fft$_basic;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[0];
        frame_55ffce6699eaa60f0c12d76a773ae9fc->m_frame.f_lineno = 2;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_scipy$fft$_basic$$$function__1__x_replacer();

        UPDATE_STRING_DICT1(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_scipy$fft$_basic$$$function__2__dispatch();

        UPDATE_STRING_DICT1(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_defaults_1;
        PyObject *tmp_kw_defaults_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_called_value_1 == NULL));
        tmp_defaults_1 = mod_consts[40];
        tmp_kw_defaults_1 = PyDict_Copy(mod_consts[41]);
        Py_INCREF(tmp_defaults_1);


        tmp_args_element_value_1 = MAKE_FUNCTION_scipy$fft$_basic$$$function__3_fft(tmp_defaults_1, tmp_kw_defaults_1);

        frame_55ffce6699eaa60f0c12d76a773ae9fc->m_frame.f_lineno = 23;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_defaults_2;
        PyObject *tmp_kw_defaults_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = mod_consts[40];
        tmp_kw_defaults_2 = PyDict_Copy(mod_consts[41]);
        Py_INCREF(tmp_defaults_2);


        tmp_args_element_value_2 = MAKE_FUNCTION_scipy$fft$_basic$$$function__4_ifft(tmp_defaults_2, tmp_kw_defaults_2);

        frame_55ffce6699eaa60f0c12d76a773ae9fc->m_frame.f_lineno = 167;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_defaults_3;
        PyObject *tmp_kw_defaults_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_defaults_3 = mod_consts[40];
        tmp_kw_defaults_3 = PyDict_Copy(mod_consts[41]);
        Py_INCREF(tmp_defaults_3);


        tmp_args_element_value_3 = MAKE_FUNCTION_scipy$fft$_basic$$$function__5_rfft(tmp_defaults_3, tmp_kw_defaults_3);

        frame_55ffce6699eaa60f0c12d76a773ae9fc->m_frame.f_lineno = 272;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_defaults_4;
        PyObject *tmp_kw_defaults_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_defaults_4 = mod_consts[40];
        tmp_kw_defaults_4 = PyDict_Copy(mod_consts[41]);
        Py_INCREF(tmp_defaults_4);


        tmp_args_element_value_4 = MAKE_FUNCTION_scipy$fft$_basic$$$function__6_irfft(tmp_defaults_4, tmp_kw_defaults_4);

        frame_55ffce6699eaa60f0c12d76a773ae9fc->m_frame.f_lineno = 366;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_defaults_5;
        PyObject *tmp_kw_defaults_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;

            goto frame_exception_exit_1;
        }
        tmp_defaults_5 = mod_consts[40];
        tmp_kw_defaults_5 = PyDict_Copy(mod_consts[41]);
        Py_INCREF(tmp_defaults_5);


        tmp_args_element_value_5 = MAKE_FUNCTION_scipy$fft$_basic$$$function__7_hfft(tmp_defaults_5, tmp_kw_defaults_5);

        frame_55ffce6699eaa60f0c12d76a773ae9fc->m_frame.f_lineno = 467;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_defaults_6;
        PyObject *tmp_kw_defaults_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        tmp_defaults_6 = mod_consts[40];
        tmp_kw_defaults_6 = PyDict_Copy(mod_consts[41]);
        Py_INCREF(tmp_defaults_6);


        tmp_args_element_value_6 = MAKE_FUNCTION_scipy$fft$_basic$$$function__8_ihfft(tmp_defaults_6, tmp_kw_defaults_6);

        frame_55ffce6699eaa60f0c12d76a773ae9fc->m_frame.f_lineno = 549;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_defaults_7;
        PyObject *tmp_kw_defaults_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;

            goto frame_exception_exit_1;
        }
        tmp_defaults_7 = mod_consts[48];
        tmp_kw_defaults_7 = PyDict_Copy(mod_consts[41]);
        Py_INCREF(tmp_defaults_7);


        tmp_args_element_value_7 = MAKE_FUNCTION_scipy$fft$_basic$$$function__9_fftn(tmp_defaults_7, tmp_kw_defaults_7);

        frame_55ffce6699eaa60f0c12d76a773ae9fc->m_frame.f_lineno = 615;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_defaults_8;
        PyObject *tmp_kw_defaults_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 719;

            goto frame_exception_exit_1;
        }
        tmp_defaults_8 = mod_consts[48];
        tmp_kw_defaults_8 = PyDict_Copy(mod_consts[41]);
        Py_INCREF(tmp_defaults_8);


        tmp_args_element_value_8 = MAKE_FUNCTION_scipy$fft$_basic$$$function__10_ifftn(tmp_defaults_8, tmp_kw_defaults_8);

        frame_55ffce6699eaa60f0c12d76a773ae9fc->m_frame.f_lineno = 719;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 719;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_defaults_9;
        PyObject *tmp_kw_defaults_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 822;

            goto frame_exception_exit_1;
        }
        tmp_defaults_9 = mod_consts[51];
        tmp_kw_defaults_9 = PyDict_Copy(mod_consts[41]);
        Py_INCREF(tmp_defaults_9);


        tmp_args_element_value_9 = MAKE_FUNCTION_scipy$fft$_basic$$$function__11_fft2(tmp_defaults_9, tmp_kw_defaults_9);

        frame_55ffce6699eaa60f0c12d76a773ae9fc->m_frame.f_lineno = 822;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 822;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_defaults_10;
        PyObject *tmp_kw_defaults_10;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 920;

            goto frame_exception_exit_1;
        }
        tmp_defaults_10 = mod_consts[51];
        tmp_kw_defaults_10 = PyDict_Copy(mod_consts[41]);
        Py_INCREF(tmp_defaults_10);


        tmp_args_element_value_10 = MAKE_FUNCTION_scipy$fft$_basic$$$function__12_ifft2(tmp_defaults_10, tmp_kw_defaults_10);

        frame_55ffce6699eaa60f0c12d76a773ae9fc->m_frame.f_lineno = 920;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 920;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_defaults_11;
        PyObject *tmp_kw_defaults_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1015;

            goto frame_exception_exit_1;
        }
        tmp_defaults_11 = mod_consts[48];
        tmp_kw_defaults_11 = PyDict_Copy(mod_consts[41]);
        Py_INCREF(tmp_defaults_11);


        tmp_args_element_value_11 = MAKE_FUNCTION_scipy$fft$_basic$$$function__13_rfftn(tmp_defaults_11, tmp_kw_defaults_11);

        frame_55ffce6699eaa60f0c12d76a773ae9fc->m_frame.f_lineno = 1015;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1015;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_defaults_12;
        PyObject *tmp_kw_defaults_12;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1114;

            goto frame_exception_exit_1;
        }
        tmp_defaults_12 = mod_consts[51];
        tmp_kw_defaults_12 = PyDict_Copy(mod_consts[41]);
        Py_INCREF(tmp_defaults_12);


        tmp_args_element_value_12 = MAKE_FUNCTION_scipy$fft$_basic$$$function__14_rfft2(tmp_defaults_12, tmp_kw_defaults_12);

        frame_55ffce6699eaa60f0c12d76a773ae9fc->m_frame.f_lineno = 1114;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1114;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_defaults_13;
        PyObject *tmp_kw_defaults_13;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1164;

            goto frame_exception_exit_1;
        }
        tmp_defaults_13 = mod_consts[48];
        tmp_kw_defaults_13 = PyDict_Copy(mod_consts[41]);
        Py_INCREF(tmp_defaults_13);


        tmp_args_element_value_13 = MAKE_FUNCTION_scipy$fft$_basic$$$function__15_irfftn(tmp_defaults_13, tmp_kw_defaults_13);

        frame_55ffce6699eaa60f0c12d76a773ae9fc->m_frame.f_lineno = 1164;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1164;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_defaults_14;
        PyObject *tmp_kw_defaults_14;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1270;

            goto frame_exception_exit_1;
        }
        tmp_defaults_14 = mod_consts[51];
        tmp_kw_defaults_14 = PyDict_Copy(mod_consts[41]);
        Py_INCREF(tmp_defaults_14);


        tmp_args_element_value_14 = MAKE_FUNCTION_scipy$fft$_basic$$$function__16_irfft2(tmp_defaults_14, tmp_kw_defaults_14);

        frame_55ffce6699eaa60f0c12d76a773ae9fc->m_frame.f_lineno = 1270;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1270;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_defaults_15;
        PyObject *tmp_kw_defaults_15;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1320;

            goto frame_exception_exit_1;
        }
        tmp_defaults_15 = mod_consts[48];
        tmp_kw_defaults_15 = PyDict_Copy(mod_consts[41]);
        Py_INCREF(tmp_defaults_15);


        tmp_args_element_value_15 = MAKE_FUNCTION_scipy$fft$_basic$$$function__17_hfftn(tmp_defaults_15, tmp_kw_defaults_15);

        frame_55ffce6699eaa60f0c12d76a773ae9fc->m_frame.f_lineno = 1320;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1320;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_defaults_16;
        PyObject *tmp_kw_defaults_16;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1433;

            goto frame_exception_exit_1;
        }
        tmp_defaults_16 = mod_consts[51];
        tmp_kw_defaults_16 = PyDict_Copy(mod_consts[41]);
        Py_INCREF(tmp_defaults_16);


        tmp_args_element_value_16 = MAKE_FUNCTION_scipy$fft$_basic$$$function__18_hfft2(tmp_defaults_16, tmp_kw_defaults_16);

        frame_55ffce6699eaa60f0c12d76a773ae9fc->m_frame.f_lineno = 1433;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1433;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_defaults_17;
        PyObject *tmp_kw_defaults_17;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1481;

            goto frame_exception_exit_1;
        }
        tmp_defaults_17 = mod_consts[48];
        tmp_kw_defaults_17 = PyDict_Copy(mod_consts[41]);
        Py_INCREF(tmp_defaults_17);


        tmp_args_element_value_17 = MAKE_FUNCTION_scipy$fft$_basic$$$function__19_ihfftn(tmp_defaults_17, tmp_kw_defaults_17);

        frame_55ffce6699eaa60f0c12d76a773ae9fc->m_frame.f_lineno = 1481;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1481;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_defaults_18;
        PyObject *tmp_kw_defaults_18;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1575;

            goto frame_exception_exit_1;
        }
        tmp_defaults_18 = mod_consts[51];
        tmp_kw_defaults_18 = PyDict_Copy(mod_consts[41]);
        Py_INCREF(tmp_defaults_18);


        tmp_args_element_value_18 = MAKE_FUNCTION_scipy$fft$_basic$$$function__20_ihfft2(tmp_defaults_18, tmp_kw_defaults_18);

        frame_55ffce6699eaa60f0c12d76a773ae9fc->m_frame.f_lineno = 1575;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1575;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_27);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_55ffce6699eaa60f0c12d76a773ae9fc);
#endif
    popFrameStack();

    assertFrameObject(frame_55ffce6699eaa60f0c12d76a773ae9fc);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_55ffce6699eaa60f0c12d76a773ae9fc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_55ffce6699eaa60f0c12d76a773ae9fc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_55ffce6699eaa60f0c12d76a773ae9fc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_55ffce6699eaa60f0c12d76a773ae9fc, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scipy.fft._basic", false);

    Py_INCREF(module_scipy$fft$_basic);
    return module_scipy$fft$_basic;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$fft$_basic, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("scipy$fft$_basic", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
