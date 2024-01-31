/* Generated code for Python module 'torch.jit._builtins'
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

/* The "module_torch$jit$_builtins" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$jit$_builtins;
PyDictObject *moduledict_torch$jit$_builtins;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[213];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[213];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.jit._builtins"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 213; i++) {
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
void checkModuleConstants_torch$jit$_builtins(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 213; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_c6ef7b42b8045f308e4e7b302a790137;
static PyCodeObject *codeobj_531b900c158d98129ce34ba3dd0fae62;
static PyCodeObject *codeobj_ee4d75aef1ff8687628428c2d40634f5;
static PyCodeObject *codeobj_3f7fcd2888b487ddec76b49de0fb19b4;
static PyCodeObject *codeobj_e279e3e2a4dc0ca3d51310e248ba116e;
static PyCodeObject *codeobj_937e01a060f9889521b57880515fdd31;
static PyCodeObject *codeobj_d72b8f6f606c31a17c1f209a27361daf;
static PyCodeObject *codeobj_a142b666d79bad46153539dd2d7a5915;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[204]); CHECK_OBJECT(module_filename_obj);
    codeobj_c6ef7b42b8045f308e4e7b302a790137 = MAKE_CODEOBJECT(module_filename_obj, 121, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[205], NULL, 1, 0, 0);
    codeobj_531b900c158d98129ce34ba3dd0fae62 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[206], NULL, NULL, 0, 0, 0);
    codeobj_ee4d75aef1ff8687628428c2d40634f5 = MAKE_CODEOBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[203], mod_consts[207], NULL, 1, 0, 0);
    codeobj_3f7fcd2888b487ddec76b49de0fb19b4 = MAKE_CODEOBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[201], mod_consts[208], NULL, 0, 0, 0);
    codeobj_e279e3e2a4dc0ca3d51310e248ba116e = MAKE_CODEOBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[209], NULL, 0, 0, 0);
    codeobj_937e01a060f9889521b57880515fdd31 = MAKE_CODEOBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[207], NULL, 1, 0, 0);
    codeobj_d72b8f6f606c31a17c1f209a27361daf = MAKE_CODEOBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[202], mod_consts[210], NULL, 2, 0, 0);
    codeobj_a142b666d79bad46153539dd2d7a5915 = MAKE_CODEOBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[211], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_torch$jit$_builtins$$$function__1__gen_torch_functional_registered_ops$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$jit$_builtins$$$function__1__gen_torch_functional_registered_ops();


static PyObject *MAKE_FUNCTION_torch$jit$_builtins$$$function__2__is_special_functional_bound_op();


static PyObject *MAKE_FUNCTION_torch$jit$_builtins$$$function__3__get_builtin_table();


static PyObject *MAKE_FUNCTION_torch$jit$_builtins$$$function__3__get_builtin_table$$$function__1_register_all();


static PyObject *MAKE_FUNCTION_torch$jit$_builtins$$$function__4__register_builtin();


static PyObject *MAKE_FUNCTION_torch$jit$_builtins$$$function__5__find_builtin();


// The module function definitions.
static PyObject *impl_torch$jit$_builtins$$$function__1__gen_torch_functional_registered_ops(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_ops = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_3f7fcd2888b487ddec76b49de0fb19b4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3f7fcd2888b487ddec76b49de0fb19b4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = LIST_COPY(mod_consts[0]);
        assert(var_ops == NULL);
        var_ops = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_3f7fcd2888b487ddec76b49de0fb19b4)) {
        Py_XDECREF(cache_frame_3f7fcd2888b487ddec76b49de0fb19b4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3f7fcd2888b487ddec76b49de0fb19b4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3f7fcd2888b487ddec76b49de0fb19b4 = MAKE_FUNCTION_FRAME(codeobj_3f7fcd2888b487ddec76b49de0fb19b4, module_torch$jit$_builtins, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3f7fcd2888b487ddec76b49de0fb19b4->m_type_description == NULL);
    frame_3f7fcd2888b487ddec76b49de0fb19b4 = cache_frame_3f7fcd2888b487ddec76b49de0fb19b4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3f7fcd2888b487ddec76b49de0fb19b4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3f7fcd2888b487ddec76b49de0fb19b4) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_set_arg_1;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_ops);
            tmp_iter_arg_1 = var_ops;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_set_arg_1 = MAKE_GENERATOR_torch$jit$_builtins$$$function__1__gen_torch_functional_registered_ops$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_return_value = PySet_New(tmp_set_arg_1);
        Py_DECREF(tmp_set_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3f7fcd2888b487ddec76b49de0fb19b4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3f7fcd2888b487ddec76b49de0fb19b4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3f7fcd2888b487ddec76b49de0fb19b4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3f7fcd2888b487ddec76b49de0fb19b4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3f7fcd2888b487ddec76b49de0fb19b4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3f7fcd2888b487ddec76b49de0fb19b4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3f7fcd2888b487ddec76b49de0fb19b4,
        type_description_1,
        var_ops
    );


    // Release cached frame if used for exception.
    if (frame_3f7fcd2888b487ddec76b49de0fb19b4 == cache_frame_3f7fcd2888b487ddec76b49de0fb19b4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3f7fcd2888b487ddec76b49de0fb19b4);
        cache_frame_3f7fcd2888b487ddec76b49de0fb19b4 = NULL;
    }

    assertFrameObject(frame_3f7fcd2888b487ddec76b49de0fb19b4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ops);
    Py_DECREF(var_ops);
    var_ops = NULL;
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

    CHECK_OBJECT(var_ops);
    Py_DECREF(var_ops);
    var_ops = NULL;
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



struct torch$jit$_builtins$$$function__1__gen_torch_functional_registered_ops$$$genexpr__1_genexpr_locals {
    PyObject *var_name;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *torch$jit$_builtins$$$function__1__gen_torch_functional_registered_ops$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$jit$_builtins$$$function__1__gen_torch_functional_registered_ops$$$genexpr__1_genexpr_locals *generator_heap = (struct torch$jit$_builtins$$$function__1__gen_torch_functional_registered_ops$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_name = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_c6ef7b42b8045f308e4e7b302a790137, module_torch$jit$_builtins, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

#if PYTHON_VERSION >= 0x340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    assert(generator->m_frame->m_frame.f_back == NULL);
    Py_CLEAR(generator->m_frame->m_frame.f_back);

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF(generator->m_frame->m_frame.f_back);

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF(generator->m_frame);

    Nuitka_Frame_MarkAsExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

        EXC_TYPE_F(generator) = EXC_TYPE(thread_state);
        if (EXC_TYPE_F(generator) == Py_None) EXC_TYPE_F(generator) = NULL;
        Py_XINCREF(EXC_TYPE_F(generator));
        EXC_VALUE_F(generator) = EXC_VALUE(thread_state);
        Py_XINCREF(EXC_VALUE_F(generator));
        EXC_TRACEBACK_F(generator) = EXC_TRACEBACK(thread_state);
        Py_XINCREF(EXC_TRACEBACK_F(generator));
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 121;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_name;
            generator_heap->var_name = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_name);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_getattr_attr_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 121;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 121;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_name);
        tmp_getattr_attr_1 = generator_heap->var_name;
        tmp_expression_value_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_target_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 121;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_getattr_target_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_getattr_attr_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_getattr_target_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_getattr_attr_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 121;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 121;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    Nuitka_Frame_MarkAsNotExecuting(generator->m_frame);

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    // Allow re-use of the frame again.
    Py_DECREF(generator->m_frame);
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_name
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
    Py_CLEAR(EXC_TYPE_F(generator));
    Py_CLEAR(EXC_VALUE_F(generator));
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif

    Py_DECREF(generator->m_frame);

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_name);
    generator_heap->var_name = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_name);
    generator_heap->var_name = NULL;


    return NULL;

    function_exception_exit:
    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torch$jit$_builtins$$$function__1__gen_torch_functional_registered_ops$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$jit$_builtins$$$function__1__gen_torch_functional_registered_ops$$$genexpr__1_genexpr_context,
        module_torch$jit$_builtins,
        mod_consts[3],
#if PYTHON_VERSION >= 0x350
        mod_consts[4],
#endif
        codeobj_c6ef7b42b8045f308e4e7b302a790137,
        closure,
        1,
        sizeof(struct torch$jit$_builtins$$$function__1__gen_torch_functional_registered_ops$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_torch$jit$_builtins$$$function__2__is_special_functional_bound_op(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fn = python_pars[0];
    struct Nuitka_FrameObject *frame_937e01a060f9889521b57880515fdd31;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_937e01a060f9889521b57880515fdd31 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_937e01a060f9889521b57880515fdd31)) {
        Py_XDECREF(cache_frame_937e01a060f9889521b57880515fdd31);

#if _DEBUG_REFCOUNTS
        if (cache_frame_937e01a060f9889521b57880515fdd31 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_937e01a060f9889521b57880515fdd31 = MAKE_FUNCTION_FRAME(codeobj_937e01a060f9889521b57880515fdd31, module_torch$jit$_builtins, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_937e01a060f9889521b57880515fdd31->m_type_description == NULL);
    frame_937e01a060f9889521b57880515fdd31 = cache_frame_937e01a060f9889521b57880515fdd31;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_937e01a060f9889521b57880515fdd31);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_937e01a060f9889521b57880515fdd31) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_fn);
        tmp_cmp_expr_left_1 = par_fn;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_937e01a060f9889521b57880515fdd31);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_937e01a060f9889521b57880515fdd31);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_937e01a060f9889521b57880515fdd31);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_937e01a060f9889521b57880515fdd31, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_937e01a060f9889521b57880515fdd31->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_937e01a060f9889521b57880515fdd31, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_937e01a060f9889521b57880515fdd31,
        type_description_1,
        par_fn
    );


    // Release cached frame if used for exception.
    if (frame_937e01a060f9889521b57880515fdd31 == cache_frame_937e01a060f9889521b57880515fdd31) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_937e01a060f9889521b57880515fdd31);
        cache_frame_937e01a060f9889521b57880515fdd31 = NULL;
    }

    assertFrameObject(frame_937e01a060f9889521b57880515fdd31);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_fn);
    Py_DECREF(par_fn);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fn);
    Py_DECREF(par_fn);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$jit$_builtins$$$function__3__get_builtin_table(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_register_all = NULL;
    PyObject *var_mod = NULL;
    PyObject *var_dist_autograd = NULL;
    PyObject *var_builtin = NULL;
    PyObject *var_aten_op = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e279e3e2a4dc0ca3d51310e248ba116e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_e279e3e2a4dc0ca3d51310e248ba116e = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e279e3e2a4dc0ca3d51310e248ba116e)) {
        Py_XDECREF(cache_frame_e279e3e2a4dc0ca3d51310e248ba116e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e279e3e2a4dc0ca3d51310e248ba116e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e279e3e2a4dc0ca3d51310e248ba116e = MAKE_FUNCTION_FRAME(codeobj_e279e3e2a4dc0ca3d51310e248ba116e, module_torch$jit$_builtins, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e279e3e2a4dc0ca3d51310e248ba116e->m_type_description == NULL);
    frame_e279e3e2a4dc0ca3d51310e248ba116e = cache_frame_e279e3e2a4dc0ca3d51310e248ba116e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e279e3e2a4dc0ca3d51310e248ba116e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e279e3e2a4dc0ca3d51310e248ba116e) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
            tmp_cmp_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[6]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 132;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;


        tmp_assign_source_2 = MAKE_FUNCTION_torch$jit$_builtins$$$function__3__get_builtin_table$$$function__1_register_all();

        assert(var_register_all == NULL);
        var_register_all = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_iter_arg_1 == NULL)) {
            tmp_iter_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooo";
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
                type_description_1 = "ooooo";
                exception_lineno = 140;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_mod;
            var_mod = tmp_assign_source_5;
            Py_INCREF(var_mod);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (var_register_all == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 141;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_value_1 = var_register_all;
        CHECK_OBJECT(var_mod);
        tmp_args_element_value_1 = var_mod;
        frame_e279e3e2a4dc0ca3d51310e248ba116e->m_frame.f_lineno = 141;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 140;
        type_description_1 = "ooooo";
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
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
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
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 143;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[13]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 143;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_element_value_2, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[14];
        PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_1);
        frame_e279e3e2a4dc0ca3d51310e248ba116e->m_frame.f_lineno = 143;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 144;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[15]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 144;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_element_value_3, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[16];
        PyTuple_SET_ITEM0(tmp_args_element_value_3, 1, tmp_tuple_element_2);
        frame_e279e3e2a4dc0ca3d51310e248ba116e->m_frame.f_lineno = 144;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[11]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 146;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[18]);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 146;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_element_value_4, 0, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[19];
        PyTuple_SET_ITEM0(tmp_args_element_value_4, 1, tmp_tuple_element_3);
        frame_e279e3e2a4dc0ca3d51310e248ba116e->m_frame.f_lineno = 146;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[20];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$jit$_builtins;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[21];
        frame_e279e3e2a4dc0ca3d51310e248ba116e->m_frame.f_lineno = 148;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_import_name_from_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$jit$_builtins,
                mod_consts[22],
                mod_consts[21]
            );
        } else {
            tmp_import_name_from_1 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[22]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$jit$_builtins,
                mod_consts[23],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[23]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dist_autograd == NULL);
        var_dist_autograd = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_5;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_dist_autograd);
        tmp_called_instance_1 = var_dist_autograd;
        frame_e279e3e2a4dc0ca3d51310e248ba116e->m_frame.f_lineno = 149;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[24]);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_5);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_5);

            exception_lineno = 149;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_5);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[11]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dist_autograd);
        tmp_expression_value_8 = var_dist_autograd;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[25]);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 150;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_element_value_5, 0, tmp_tuple_element_4);
        tmp_tuple_element_4 = mod_consts[26];
        PyTuple_SET_ITEM0(tmp_args_element_value_5, 1, tmp_tuple_element_4);
        frame_e279e3e2a4dc0ca3d51310e248ba116e->m_frame.f_lineno = 150;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_10;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[11]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dist_autograd);
        tmp_expression_value_10 = var_dist_autograd;
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[27]);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 151;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_element_value_6, 0, tmp_tuple_element_5);
        tmp_tuple_element_5 = mod_consts[28];
        PyTuple_SET_ITEM0(tmp_args_element_value_6, 1, tmp_tuple_element_5);
        frame_e279e3e2a4dc0ca3d51310e248ba116e->m_frame.f_lineno = 151;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        tmp_iter_arg_2 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_iter_arg_2 == NULL)) {
            tmp_iter_arg_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooo";
                exception_lineno = 154;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooo";
            goto try_except_handler_4;
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


            type_description_1 = "ooooo";
            exception_lineno = 154;
            goto try_except_handler_5;
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


            type_description_1 = "ooooo";
            exception_lineno = 154;
            goto try_except_handler_5;
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

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooo";
                    exception_lineno = 154;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[29];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 154;
            goto try_except_handler_5;
        }
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_builtin;
            var_builtin = tmp_assign_source_12;
            Py_INCREF(var_builtin);
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
            PyObject *old = var_aten_op;
            var_aten_op = tmp_assign_source_13;
            Py_INCREF(var_aten_op);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_id_arg_1;
        CHECK_OBJECT(var_aten_op);
        tmp_ass_subvalue_1 = var_aten_op;
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_builtin);
        tmp_id_arg_1 = var_builtin;
        tmp_ass_subscript_1 = PyLong_FromVoidPtr(tmp_id_arg_1);
        assert(!(tmp_ass_subscript_1 == NULL));
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 154;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[6]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 157;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e279e3e2a4dc0ca3d51310e248ba116e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e279e3e2a4dc0ca3d51310e248ba116e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e279e3e2a4dc0ca3d51310e248ba116e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e279e3e2a4dc0ca3d51310e248ba116e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e279e3e2a4dc0ca3d51310e248ba116e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e279e3e2a4dc0ca3d51310e248ba116e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e279e3e2a4dc0ca3d51310e248ba116e,
        type_description_1,
        var_register_all,
        var_mod,
        var_dist_autograd,
        var_builtin,
        var_aten_op
    );


    // Release cached frame if used for exception.
    if (frame_e279e3e2a4dc0ca3d51310e248ba116e == cache_frame_e279e3e2a4dc0ca3d51310e248ba116e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e279e3e2a4dc0ca3d51310e248ba116e);
        cache_frame_e279e3e2a4dc0ca3d51310e248ba116e = NULL;
    }

    assertFrameObject(frame_e279e3e2a4dc0ca3d51310e248ba116e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_register_all);
    var_register_all = NULL;
    Py_XDECREF(var_mod);
    var_mod = NULL;
    Py_XDECREF(var_dist_autograd);
    var_dist_autograd = NULL;
    Py_XDECREF(var_builtin);
    var_builtin = NULL;
    Py_XDECREF(var_aten_op);
    var_aten_op = NULL;
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

    Py_XDECREF(var_register_all);
    var_register_all = NULL;
    Py_XDECREF(var_mod);
    var_mod = NULL;
    Py_XDECREF(var_dist_autograd);
    var_dist_autograd = NULL;
    Py_XDECREF(var_builtin);
    var_builtin = NULL;
    Py_XDECREF(var_aten_op);
    var_aten_op = NULL;
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


static PyObject *impl_torch$jit$_builtins$$$function__3__get_builtin_table$$$function__1_register_all(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mod = python_pars[0];
    PyObject *var_name = NULL;
    PyObject *var_v = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_a142b666d79bad46153539dd2d7a5915;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_a142b666d79bad46153539dd2d7a5915 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a142b666d79bad46153539dd2d7a5915)) {
        Py_XDECREF(cache_frame_a142b666d79bad46153539dd2d7a5915);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a142b666d79bad46153539dd2d7a5915 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a142b666d79bad46153539dd2d7a5915 = MAKE_FUNCTION_FRAME(codeobj_a142b666d79bad46153539dd2d7a5915, module_torch$jit$_builtins, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a142b666d79bad46153539dd2d7a5915->m_type_description == NULL);
    frame_a142b666d79bad46153539dd2d7a5915 = cache_frame_a142b666d79bad46153539dd2d7a5915;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a142b666d79bad46153539dd2d7a5915);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a142b666d79bad46153539dd2d7a5915) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_dir_arg_1;
        CHECK_OBJECT(par_mod);
        tmp_dir_arg_1 = par_mod;
        tmp_iter_arg_1 = PyObject_Dir(tmp_dir_arg_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooo";
                exception_lineno = 136;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_3;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        CHECK_OBJECT(par_mod);
        tmp_getattr_target_1 = par_mod;
        CHECK_OBJECT(var_name);
        tmp_getattr_attr_1 = var_name;
        tmp_assign_source_4 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[30]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(var_v);
        tmp_args_element_value_1 = var_v;
        frame_a142b666d79bad46153539dd2d7a5915->m_frame.f_lineno = 138;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 138;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_v);
        tmp_args_element_value_2 = var_v;
        frame_a142b666d79bad46153539dd2d7a5915->m_frame.f_lineno = 138;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_and_left_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_v);
        tmp_cmp_expr_left_1 = var_v;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[32]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_cmp_expr_right_1);
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
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
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        if (var_v == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 139;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = var_v;
        tmp_args_element_value_3 = PyTuple_New(2);
        {
            PyObject *tmp_left_value_1;
            PyObject *tmp_right_value_1;
            PyTuple_SET_ITEM0(tmp_args_element_value_3, 0, tmp_tuple_element_1);
            tmp_left_value_1 = mod_consts[34];
            CHECK_OBJECT(var_name);
            tmp_right_value_1 = var_name;
            tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_value_1, tmp_right_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_3, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_a142b666d79bad46153539dd2d7a5915->m_frame.f_lineno = 139;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 136;
        type_description_1 = "ooo";
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
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
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

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a142b666d79bad46153539dd2d7a5915);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a142b666d79bad46153539dd2d7a5915);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a142b666d79bad46153539dd2d7a5915, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a142b666d79bad46153539dd2d7a5915->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a142b666d79bad46153539dd2d7a5915, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a142b666d79bad46153539dd2d7a5915,
        type_description_1,
        par_mod,
        var_name,
        var_v
    );


    // Release cached frame if used for exception.
    if (frame_a142b666d79bad46153539dd2d7a5915 == cache_frame_a142b666d79bad46153539dd2d7a5915) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a142b666d79bad46153539dd2d7a5915);
        cache_frame_a142b666d79bad46153539dd2d7a5915 = NULL;
    }

    assertFrameObject(frame_a142b666d79bad46153539dd2d7a5915);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
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

    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
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
    CHECK_OBJECT(par_mod);
    Py_DECREF(par_mod);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_mod);
    Py_DECREF(par_mod);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$jit$_builtins$$$function__4__register_builtin(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fn = python_pars[0];
    PyObject *par_op = python_pars[1];
    struct Nuitka_FrameObject *frame_d72b8f6f606c31a17c1f209a27361daf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_d72b8f6f606c31a17c1f209a27361daf = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d72b8f6f606c31a17c1f209a27361daf)) {
        Py_XDECREF(cache_frame_d72b8f6f606c31a17c1f209a27361daf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d72b8f6f606c31a17c1f209a27361daf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d72b8f6f606c31a17c1f209a27361daf = MAKE_FUNCTION_FRAME(codeobj_d72b8f6f606c31a17c1f209a27361daf, module_torch$jit$_builtins, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d72b8f6f606c31a17c1f209a27361daf->m_type_description == NULL);
    frame_d72b8f6f606c31a17c1f209a27361daf = cache_frame_d72b8f6f606c31a17c1f209a27361daf;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d72b8f6f606c31a17c1f209a27361daf);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d72b8f6f606c31a17c1f209a27361daf) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_id_arg_1;
        CHECK_OBJECT(par_op);
        tmp_ass_subvalue_1 = par_op;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d72b8f6f606c31a17c1f209a27361daf->m_frame.f_lineno = 161;
        tmp_ass_subscribed_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fn);
        tmp_id_arg_1 = par_fn;
        tmp_ass_subscript_1 = PyLong_FromVoidPtr(tmp_id_arg_1);
        assert(!(tmp_ass_subscript_1 == NULL));
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d72b8f6f606c31a17c1f209a27361daf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d72b8f6f606c31a17c1f209a27361daf);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d72b8f6f606c31a17c1f209a27361daf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d72b8f6f606c31a17c1f209a27361daf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d72b8f6f606c31a17c1f209a27361daf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d72b8f6f606c31a17c1f209a27361daf,
        type_description_1,
        par_fn,
        par_op
    );


    // Release cached frame if used for exception.
    if (frame_d72b8f6f606c31a17c1f209a27361daf == cache_frame_d72b8f6f606c31a17c1f209a27361daf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d72b8f6f606c31a17c1f209a27361daf);
        cache_frame_d72b8f6f606c31a17c1f209a27361daf = NULL;
    }

    assertFrameObject(frame_d72b8f6f606c31a17c1f209a27361daf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_fn);
    Py_DECREF(par_fn);
    CHECK_OBJECT(par_op);
    Py_DECREF(par_op);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fn);
    Py_DECREF(par_fn);
    CHECK_OBJECT(par_op);
    Py_DECREF(par_op);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$jit$_builtins$$$function__5__find_builtin(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fn = python_pars[0];
    struct Nuitka_FrameObject *frame_ee4d75aef1ff8687628428c2d40634f5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ee4d75aef1ff8687628428c2d40634f5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ee4d75aef1ff8687628428c2d40634f5)) {
        Py_XDECREF(cache_frame_ee4d75aef1ff8687628428c2d40634f5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ee4d75aef1ff8687628428c2d40634f5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ee4d75aef1ff8687628428c2d40634f5 = MAKE_FUNCTION_FRAME(codeobj_ee4d75aef1ff8687628428c2d40634f5, module_torch$jit$_builtins, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ee4d75aef1ff8687628428c2d40634f5->m_type_description == NULL);
    frame_ee4d75aef1ff8687628428c2d40634f5 = cache_frame_ee4d75aef1ff8687628428c2d40634f5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ee4d75aef1ff8687628428c2d40634f5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ee4d75aef1ff8687628428c2d40634f5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_id_arg_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ee4d75aef1ff8687628428c2d40634f5->m_frame.f_lineno = 165;
        tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[36]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fn);
        tmp_id_arg_1 = par_fn;
        tmp_args_element_value_1 = PyLong_FromVoidPtr(tmp_id_arg_1);
        assert(!(tmp_args_element_value_1 == NULL));
        frame_ee4d75aef1ff8687628428c2d40634f5->m_frame.f_lineno = 165;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee4d75aef1ff8687628428c2d40634f5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee4d75aef1ff8687628428c2d40634f5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ee4d75aef1ff8687628428c2d40634f5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ee4d75aef1ff8687628428c2d40634f5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ee4d75aef1ff8687628428c2d40634f5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ee4d75aef1ff8687628428c2d40634f5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ee4d75aef1ff8687628428c2d40634f5,
        type_description_1,
        par_fn
    );


    // Release cached frame if used for exception.
    if (frame_ee4d75aef1ff8687628428c2d40634f5 == cache_frame_ee4d75aef1ff8687628428c2d40634f5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ee4d75aef1ff8687628428c2d40634f5);
        cache_frame_ee4d75aef1ff8687628428c2d40634f5 = NULL;
    }

    assertFrameObject(frame_ee4d75aef1ff8687628428c2d40634f5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_fn);
    Py_DECREF(par_fn);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fn);
    Py_DECREF(par_fn);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$jit$_builtins$$$function__1__gen_torch_functional_registered_ops() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$jit$_builtins$$$function__1__gen_torch_functional_registered_ops,
        mod_consts[201],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3f7fcd2888b487ddec76b49de0fb19b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$jit$_builtins,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$jit$_builtins$$$function__2__is_special_functional_bound_op() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$jit$_builtins$$$function__2__is_special_functional_bound_op,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_937e01a060f9889521b57880515fdd31,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$jit$_builtins,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$jit$_builtins$$$function__3__get_builtin_table() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$jit$_builtins$$$function__3__get_builtin_table,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e279e3e2a4dc0ca3d51310e248ba116e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$jit$_builtins,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$jit$_builtins$$$function__3__get_builtin_table$$$function__1_register_all() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$jit$_builtins$$$function__3__get_builtin_table$$$function__1_register_all,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[8],
#endif
        codeobj_a142b666d79bad46153539dd2d7a5915,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$jit$_builtins,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$jit$_builtins$$$function__4__register_builtin() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$jit$_builtins$$$function__4__register_builtin,
        mod_consts[202],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d72b8f6f606c31a17c1f209a27361daf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$jit$_builtins,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$jit$_builtins$$$function__5__find_builtin() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$jit$_builtins$$$function__5__find_builtin,
        mod_consts[203],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ee4d75aef1ff8687628428c2d40634f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$jit$_builtins,
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

function_impl_code functable_torch$jit$_builtins[] = {
    impl_torch$jit$_builtins$$$function__3__get_builtin_table$$$function__1_register_all,
    impl_torch$jit$_builtins$$$function__1__gen_torch_functional_registered_ops,
    impl_torch$jit$_builtins$$$function__2__is_special_functional_bound_op,
    impl_torch$jit$_builtins$$$function__3__get_builtin_table,
    impl_torch$jit$_builtins$$$function__4__register_builtin,
    impl_torch$jit$_builtins$$$function__5__find_builtin,
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

    function_impl_code *current = functable_torch$jit$_builtins;
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

    if (offset > sizeof(functable_torch$jit$_builtins) || offset < 0) {
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
        functable_torch$jit$_builtins[offset],
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
        module_torch$jit$_builtins,
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
PyObject *modulecode_torch$jit$_builtins(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.jit._builtins");

    // Store the module for future use.
    module_torch$jit$_builtins = module;

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
        PRINT_STRING("torch.jit._builtins: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.jit._builtins: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.jit._builtins: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$jit$_builtins\n");

    moduledict_torch$jit$_builtins = MODULE_DICT(module_torch$jit$_builtins);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$jit$_builtins,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$jit$_builtins,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[212]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$jit$_builtins,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$jit$_builtins,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$jit$_builtins,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$jit$_builtins);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$jit$_builtins);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_531b900c158d98129ce34ba3dd0fae62;
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
        UPDATE_STRING_DICT0(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_531b900c158d98129ce34ba3dd0fae62 = MAKE_MODULE_FRAME(codeobj_531b900c158d98129ce34ba3dd0fae62, module_torch$jit$_builtins);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_531b900c158d98129ce34ba3dd0fae62);
    assert(Py_REFCNT(frame_531b900c158d98129ce34ba3dd0fae62) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[40], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[41], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[12];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$jit$_builtins;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[21];
        frame_531b900c158d98129ce34ba3dd0fae62->m_frame.f_lineno = 1;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[44];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$jit$_builtins;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[21];
        frame_531b900c158d98129ce34ba3dd0fae62->m_frame.f_lineno = 2;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[45];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$jit$_builtins;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[21];
        frame_531b900c158d98129ce34ba3dd0fae62->m_frame.f_lineno = 3;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[1];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torch$jit$_builtins;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[21];
        frame_531b900c158d98129ce34ba3dd0fae62->m_frame.f_lineno = 5;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[46];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_torch$jit$_builtins;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[21];
        frame_531b900c158d98129ce34ba3dd0fae62->m_frame.f_lineno = 6;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_import_name_from_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$jit$_builtins,
                mod_consts[47],
                mod_consts[21]
            );
        } else {
            tmp_import_name_from_1 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[47]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$jit$_builtins,
                mod_consts[48],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[48]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[49];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_torch$jit$_builtins;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[50];
        tmp_level_value_6 = mod_consts[21];
        frame_531b900c158d98129ce34ba3dd0fae62->m_frame.f_lineno = 8;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torch$jit$_builtins,
                mod_consts[17],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[17]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[51];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_torch$jit$_builtins;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[52];
        tmp_level_value_7 = mod_consts[53];
        frame_531b900c158d98129ce34ba3dd0fae62->m_frame.f_lineno = 9;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torch$jit$_builtins,
                mod_consts[54],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[54]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torch$jit$_builtins,
                mod_consts[55],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[55]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torch$jit$_builtins,
                mod_consts[56],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[56]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_torch$jit$_builtins,
                mod_consts[57],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[57]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_torch$jit$_builtins,
                mod_consts[58],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[58]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_16);
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[59];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_torch$jit$_builtins;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[60];
        tmp_level_value_8 = mod_consts[21];
        frame_531b900c158d98129ce34ba3dd0fae62->m_frame.f_lineno = 11;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_torch$jit$_builtins,
                mod_consts[61],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[61]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_18 == NULL));
        assert(tmp_import_from_2__module == NULL);
        Py_INCREF(tmp_assign_source_18);
        tmp_import_from_2__module = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_torch$jit$_builtins,
                mod_consts[62],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[62]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_torch$jit$_builtins,
                mod_consts[63],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[63]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_20);
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
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_21);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[64];
        tmp_subscript_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[6];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = PyTuple_New(5);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyTuple_SET_ITEM0(tmp_assign_source_22, 0, tmp_tuple_element_1);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto tuple_build_exception_1;
            }
            tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[65]);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[66]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 1, tmp_tuple_element_1);
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto tuple_build_exception_1;
            }
            tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[65]);
            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[67]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 2, tmp_tuple_element_1);
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto tuple_build_exception_1;
            }
            tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[65]);
            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[68]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 3, tmp_tuple_element_1);
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto tuple_build_exception_1;
            }
            tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[65]);
            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[69]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_22);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_list_element_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[70];
        PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_2);
        tmp_assign_source_23 = PyList_New(89);
        {
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_tuple_element_33;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_tuple_element_34;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_tuple_element_37;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_tuple_element_38;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_tuple_element_40;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_tuple_element_41;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_tuple_element_42;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_tuple_element_43;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_tuple_element_44;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_tuple_element_45;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_tuple_element_46;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_tuple_element_47;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_tuple_element_48;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_tuple_element_49;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_tuple_element_50;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_tuple_element_51;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_tuple_element_52;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_tuple_element_53;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_tuple_element_54;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_tuple_element_55;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_tuple_element_56;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_tuple_element_57;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_tuple_element_58;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_tuple_element_59;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_tuple_element_60;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_tuple_element_61;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_tuple_element_62;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_tuple_element_63;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_tuple_element_64;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_tuple_element_65;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_tuple_element_66;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_tuple_element_67;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_tuple_element_68;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_tuple_element_69;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_tuple_element_70;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_tuple_element_71;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_tuple_element_72;
            PyObject *tmp_expression_value_77;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_tuple_element_73;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_expression_value_81;
            PyObject *tmp_tuple_element_74;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_expression_value_84;
            PyObject *tmp_tuple_element_75;
            PyObject *tmp_expression_value_85;
            PyObject *tmp_expression_value_86;
            PyObject *tmp_expression_value_87;
            PyObject *tmp_tuple_element_76;
            PyObject *tmp_expression_value_88;
            PyObject *tmp_expression_value_89;
            PyObject *tmp_expression_value_90;
            PyObject *tmp_tuple_element_77;
            PyObject *tmp_expression_value_91;
            PyObject *tmp_expression_value_92;
            PyObject *tmp_expression_value_93;
            PyObject *tmp_tuple_element_78;
            PyObject *tmp_expression_value_94;
            PyObject *tmp_expression_value_95;
            PyObject *tmp_expression_value_96;
            PyObject *tmp_tuple_element_79;
            PyObject *tmp_expression_value_97;
            PyObject *tmp_expression_value_98;
            PyObject *tmp_tuple_element_80;
            PyObject *tmp_expression_value_99;
            PyObject *tmp_tuple_element_81;
            PyObject *tmp_expression_value_100;
            PyObject *tmp_expression_value_101;
            PyObject *tmp_tuple_element_82;
            PyObject *tmp_expression_value_102;
            PyObject *tmp_expression_value_103;
            PyObject *tmp_tuple_element_83;
            PyObject *tmp_expression_value_104;
            PyObject *tmp_expression_value_105;
            PyObject *tmp_tuple_element_84;
            PyObject *tmp_expression_value_106;
            PyObject *tmp_expression_value_107;
            PyObject *tmp_tuple_element_85;
            PyObject *tmp_expression_value_108;
            PyObject *tmp_expression_value_109;
            PyObject *tmp_tuple_element_86;
            PyObject *tmp_expression_value_110;
            PyObject *tmp_expression_value_111;
            PyObject *tmp_tuple_element_87;
            PyObject *tmp_expression_value_112;
            PyObject *tmp_expression_value_113;
            PyObject *tmp_tuple_element_88;
            PyObject *tmp_expression_value_114;
            PyObject *tmp_expression_value_115;
            PyObject *tmp_tuple_element_89;
            PyObject *tmp_expression_value_116;
            PyObject *tmp_expression_value_117;
            PyList_SET_ITEM(tmp_assign_source_23, 0, tmp_list_element_1);
            tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_tuple_element_3 == NULL)) {
                tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
            }

            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[71];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_3);
            PyList_SET_ITEM(tmp_assign_source_23, 1, tmp_list_element_1);
            tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_tuple_element_4 == NULL)) {
                tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[72];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_4);
            PyList_SET_ITEM(tmp_assign_source_23, 2, tmp_list_element_1);
            tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_tuple_element_5 == NULL)) {
                tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[73];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_5);
            PyList_SET_ITEM(tmp_assign_source_23, 3, tmp_list_element_1);
            tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_tuple_element_6 == NULL)) {
                tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
            }

            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[74];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_6);
            PyList_SET_ITEM(tmp_assign_source_23, 4, tmp_list_element_1);
            tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_tuple_element_7 == NULL)) {
                tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
            }

            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[75];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_7);
            PyList_SET_ITEM(tmp_assign_source_23, 5, tmp_list_element_1);
            tmp_list_element_1 = mod_consts[76];
            PyList_SET_ITEM0(tmp_assign_source_23, 6, tmp_list_element_1);
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto list_build_exception_1;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[77]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_8);
            PyList_SET_ITEM(tmp_assign_source_23, 7, tmp_list_element_1);
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto list_build_exception_1;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[79]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[80];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_9);
            PyList_SET_ITEM(tmp_assign_source_23, 8, tmp_list_element_1);
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto list_build_exception_1;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[81]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[82];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_10);
            PyList_SET_ITEM(tmp_assign_source_23, 9, tmp_list_element_1);
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto list_build_exception_1;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[83]);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[84];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_11);
            PyList_SET_ITEM(tmp_assign_source_23, 10, tmp_list_element_1);
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto list_build_exception_1;
            }
            tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[85]);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[86];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_12);
            PyList_SET_ITEM(tmp_assign_source_23, 11, tmp_list_element_1);
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto list_build_exception_1;
            }
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[87]);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = mod_consts[88];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_13);
            PyList_SET_ITEM(tmp_assign_source_23, 12, tmp_list_element_1);
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto list_build_exception_1;
            }
            tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[89]);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_14);
            tmp_tuple_element_14 = mod_consts[90];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_14);
            PyList_SET_ITEM(tmp_assign_source_23, 13, tmp_list_element_1);
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto list_build_exception_1;
            }
            tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[91]);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_15);
            tmp_tuple_element_15 = mod_consts[92];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_15);
            PyList_SET_ITEM(tmp_assign_source_23, 14, tmp_list_element_1);
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto list_build_exception_1;
            }
            tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[93]);
            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_16);
            tmp_tuple_element_16 = mod_consts[94];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_16);
            PyList_SET_ITEM(tmp_assign_source_23, 15, tmp_list_element_1);
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;

                goto list_build_exception_1;
            }
            tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[95]);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_17);
            tmp_tuple_element_17 = mod_consts[96];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_17);
            PyList_SET_ITEM(tmp_assign_source_23, 16, tmp_list_element_1);
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

                goto list_build_exception_1;
            }
            tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[97]);
            if (tmp_tuple_element_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_18);
            tmp_tuple_element_18 = mod_consts[98];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_18);
            PyList_SET_ITEM(tmp_assign_source_23, 17, tmp_list_element_1);
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto list_build_exception_1;
            }
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[99]);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_19);
            tmp_tuple_element_19 = mod_consts[100];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_19);
            PyList_SET_ITEM(tmp_assign_source_23, 18, tmp_list_element_1);
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto list_build_exception_1;
            }
            tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[101]);
            if (tmp_tuple_element_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_20);
            tmp_tuple_element_20 = mod_consts[102];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_20);
            PyList_SET_ITEM(tmp_assign_source_23, 19, tmp_list_element_1);
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto list_build_exception_1;
            }
            tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[103]);
            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_21);
            tmp_tuple_element_21 = mod_consts[104];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_21);
            PyList_SET_ITEM(tmp_assign_source_23, 20, tmp_list_element_1);
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto list_build_exception_1;
            }
            tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[105]);
            if (tmp_tuple_element_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_22);
            tmp_tuple_element_22 = mod_consts[106];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_22);
            PyList_SET_ITEM(tmp_assign_source_23, 21, tmp_list_element_1);
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto list_build_exception_1;
            }
            tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[107]);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_23);
            tmp_tuple_element_23 = mod_consts[108];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_23);
            PyList_SET_ITEM(tmp_assign_source_23, 22, tmp_list_element_1);
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto list_build_exception_1;
            }
            tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[109]);
            if (tmp_tuple_element_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_24);
            tmp_tuple_element_24 = mod_consts[110];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_24);
            PyList_SET_ITEM(tmp_assign_source_23, 23, tmp_list_element_1);
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto list_build_exception_1;
            }
            tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[111]);
            if (tmp_tuple_element_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_25);
            tmp_tuple_element_25 = mod_consts[112];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_25);
            PyList_SET_ITEM(tmp_assign_source_23, 24, tmp_list_element_1);
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto list_build_exception_1;
            }
            tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[113]);
            if (tmp_tuple_element_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_26);
            tmp_tuple_element_26 = mod_consts[114];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_26);
            PyList_SET_ITEM(tmp_assign_source_23, 25, tmp_list_element_1);
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto list_build_exception_1;
            }
            tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[115]);
            if (tmp_tuple_element_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_27);
            tmp_tuple_element_27 = mod_consts[116];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_27);
            PyList_SET_ITEM(tmp_assign_source_23, 26, tmp_list_element_1);
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto list_build_exception_1;
            }
            tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[117]);
            if (tmp_tuple_element_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_28);
            tmp_tuple_element_28 = mod_consts[118];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_28);
            PyList_SET_ITEM(tmp_assign_source_23, 27, tmp_list_element_1);
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto list_build_exception_1;
            }
            tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[119]);
            if (tmp_tuple_element_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_29);
            tmp_tuple_element_29 = mod_consts[120];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_29);
            PyList_SET_ITEM(tmp_assign_source_23, 28, tmp_list_element_1);
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto list_build_exception_1;
            }
            tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[121]);
            if (tmp_tuple_element_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_30);
            tmp_tuple_element_30 = mod_consts[122];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_30);
            PyList_SET_ITEM(tmp_assign_source_23, 29, tmp_list_element_1);
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto list_build_exception_1;
            }
            tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[123]);
            if (tmp_tuple_element_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_31);
            tmp_tuple_element_31 = mod_consts[124];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_31);
            PyList_SET_ITEM(tmp_assign_source_23, 30, tmp_list_element_1);
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto list_build_exception_1;
            }
            tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[125]);
            if (tmp_tuple_element_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_32);
            tmp_tuple_element_32 = mod_consts[126];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_32);
            PyList_SET_ITEM(tmp_assign_source_23, 31, tmp_list_element_1);
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto list_build_exception_1;
            }
            tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[127]);
            if (tmp_tuple_element_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_33);
            tmp_tuple_element_33 = mod_consts[128];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_33);
            PyList_SET_ITEM(tmp_assign_source_23, 32, tmp_list_element_1);
            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_37 == NULL)) {
                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto list_build_exception_1;
            }
            tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[129]);
            if (tmp_tuple_element_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_34);
            tmp_tuple_element_34 = mod_consts[130];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_34);
            PyList_SET_ITEM(tmp_assign_source_23, 33, tmp_list_element_1);
            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_38 == NULL)) {
                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto list_build_exception_1;
            }
            tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[131]);
            if (tmp_tuple_element_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_35);
            tmp_tuple_element_35 = mod_consts[132];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_35);
            PyList_SET_ITEM(tmp_assign_source_23, 34, tmp_list_element_1);
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto list_build_exception_1;
            }
            tmp_tuple_element_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[133]);
            if (tmp_tuple_element_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_36);
            tmp_tuple_element_36 = mod_consts[134];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_36);
            PyList_SET_ITEM(tmp_assign_source_23, 35, tmp_list_element_1);
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto list_build_exception_1;
            }
            tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[111]);
            if (tmp_tuple_element_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_37);
            tmp_tuple_element_37 = mod_consts[112];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_37);
            PyList_SET_ITEM(tmp_assign_source_23, 36, tmp_list_element_1);
            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_41 == NULL)) {
                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto list_build_exception_1;
            }
            tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[113]);
            if (tmp_tuple_element_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_38);
            tmp_tuple_element_38 = mod_consts[114];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_38);
            PyList_SET_ITEM(tmp_assign_source_23, 37, tmp_list_element_1);
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto list_build_exception_1;
            }
            tmp_tuple_element_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[135]);
            if (tmp_tuple_element_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_39);
            tmp_tuple_element_39 = mod_consts[136];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_39);
            PyList_SET_ITEM(tmp_assign_source_23, 38, tmp_list_element_1);
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto list_build_exception_1;
            }
            tmp_tuple_element_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[137]);
            if (tmp_tuple_element_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_40);
            tmp_tuple_element_40 = mod_consts[138];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_40);
            PyList_SET_ITEM(tmp_assign_source_23, 39, tmp_list_element_1);
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto list_build_exception_1;
            }
            tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[139]);
            if (tmp_tuple_element_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_41);
            tmp_tuple_element_41 = mod_consts[140];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_41);
            PyList_SET_ITEM(tmp_assign_source_23, 40, tmp_list_element_1);
            tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_45 == NULL)) {
                tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto list_build_exception_1;
            }
            tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[141]);
            if (tmp_tuple_element_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_42);
            tmp_tuple_element_42 = mod_consts[142];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_42);
            PyList_SET_ITEM(tmp_assign_source_23, 41, tmp_list_element_1);
            tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_46 == NULL)) {
                tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto list_build_exception_1;
            }
            tmp_tuple_element_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[143]);
            if (tmp_tuple_element_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_43);
            tmp_tuple_element_43 = mod_consts[144];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_43);
            PyList_SET_ITEM(tmp_assign_source_23, 42, tmp_list_element_1);
            tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_47 == NULL)) {
                tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto list_build_exception_1;
            }
            tmp_tuple_element_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[145]);
            if (tmp_tuple_element_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_44);
            tmp_tuple_element_44 = mod_consts[146];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_44);
            PyList_SET_ITEM(tmp_assign_source_23, 43, tmp_list_element_1);
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto list_build_exception_1;
            }
            tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[147]);
            if (tmp_tuple_element_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_45);
            tmp_tuple_element_45 = mod_consts[148];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_45);
            PyList_SET_ITEM(tmp_assign_source_23, 44, tmp_list_element_1);
            tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_49 == NULL)) {
                tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto list_build_exception_1;
            }
            tmp_tuple_element_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[149]);
            if (tmp_tuple_element_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_46);
            tmp_tuple_element_46 = mod_consts[150];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_46);
            PyList_SET_ITEM(tmp_assign_source_23, 45, tmp_list_element_1);
            tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_50 == NULL)) {
                tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto list_build_exception_1;
            }
            tmp_tuple_element_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[109]);
            if (tmp_tuple_element_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_47);
            tmp_tuple_element_47 = mod_consts[110];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_47);
            PyList_SET_ITEM(tmp_assign_source_23, 46, tmp_list_element_1);
            tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_51 == NULL)) {
                tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto list_build_exception_1;
            }
            tmp_tuple_element_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[15]);
            if (tmp_tuple_element_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_48);
            tmp_tuple_element_48 = mod_consts[16];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_48);
            PyList_SET_ITEM(tmp_assign_source_23, 47, tmp_list_element_1);
            tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_52 == NULL)) {
                tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto list_build_exception_1;
            }
            tmp_tuple_element_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[145]);
            if (tmp_tuple_element_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_49);
            tmp_tuple_element_49 = mod_consts[146];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_49);
            PyList_SET_ITEM(tmp_assign_source_23, 48, tmp_list_element_1);
            tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_53 == NULL)) {
                tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto list_build_exception_1;
            }
            tmp_tuple_element_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[151]);
            if (tmp_tuple_element_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_50);
            tmp_tuple_element_50 = mod_consts[152];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_50);
            PyList_SET_ITEM(tmp_assign_source_23, 49, tmp_list_element_1);
            tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_54 == NULL)) {
                tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto list_build_exception_1;
            }
            tmp_tuple_element_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[153]);
            if (tmp_tuple_element_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_51);
            tmp_tuple_element_51 = mod_consts[154];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_51);
            PyList_SET_ITEM(tmp_assign_source_23, 50, tmp_list_element_1);
            tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_55 == NULL)) {
                tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto list_build_exception_1;
            }
            tmp_tuple_element_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[99]);
            if (tmp_tuple_element_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_52);
            tmp_tuple_element_52 = mod_consts[100];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_52);
            PyList_SET_ITEM(tmp_assign_source_23, 51, tmp_list_element_1);
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto list_build_exception_1;
            }
            tmp_tuple_element_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[101]);
            if (tmp_tuple_element_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_53);
            tmp_tuple_element_53 = mod_consts[102];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_53);
            PyList_SET_ITEM(tmp_assign_source_23, 52, tmp_list_element_1);
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto list_build_exception_1;
            }
            tmp_tuple_element_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[107]);
            if (tmp_tuple_element_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_54);
            tmp_tuple_element_54 = mod_consts[108];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_54);
            PyList_SET_ITEM(tmp_assign_source_23, 53, tmp_list_element_1);
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto list_build_exception_1;
            }
            tmp_tuple_element_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[87]);
            if (tmp_tuple_element_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_55);
            tmp_tuple_element_55 = mod_consts[88];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_55);
            PyList_SET_ITEM(tmp_assign_source_23, 54, tmp_list_element_1);
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto list_build_exception_1;
            }
            tmp_tuple_element_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[131]);
            if (tmp_tuple_element_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_56);
            tmp_tuple_element_56 = mod_consts[132];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_56);
            PyList_SET_ITEM(tmp_assign_source_23, 55, tmp_list_element_1);
            tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_60 == NULL)) {
                tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto list_build_exception_1;
            }
            tmp_tuple_element_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[133]);
            if (tmp_tuple_element_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_57);
            tmp_tuple_element_57 = mod_consts[134];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_57);
            PyList_SET_ITEM(tmp_assign_source_23, 56, tmp_list_element_1);
            tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_61 == NULL)) {
                tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto list_build_exception_1;
            }
            tmp_tuple_element_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[129]);
            if (tmp_tuple_element_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_58);
            tmp_tuple_element_58 = mod_consts[130];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_58);
            PyList_SET_ITEM(tmp_assign_source_23, 57, tmp_list_element_1);
            tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_62 == NULL)) {
                tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;

                goto list_build_exception_1;
            }
            tmp_tuple_element_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[123]);
            if (tmp_tuple_element_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_59);
            tmp_tuple_element_59 = mod_consts[124];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_59);
            PyList_SET_ITEM(tmp_assign_source_23, 58, tmp_list_element_1);
            tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_63 == NULL)) {
                tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto list_build_exception_1;
            }
            tmp_tuple_element_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[121]);
            if (tmp_tuple_element_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_60);
            tmp_tuple_element_60 = mod_consts[122];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_60);
            PyList_SET_ITEM(tmp_assign_source_23, 59, tmp_list_element_1);
            tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_64 == NULL)) {
                tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto list_build_exception_1;
            }
            tmp_tuple_element_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[125]);
            if (tmp_tuple_element_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_61);
            tmp_tuple_element_61 = mod_consts[126];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_61);
            PyList_SET_ITEM(tmp_assign_source_23, 60, tmp_list_element_1);
            tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_65 == NULL)) {
                tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto list_build_exception_1;
            }
            tmp_tuple_element_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[117]);
            if (tmp_tuple_element_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_62);
            tmp_tuple_element_62 = mod_consts[118];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_62);
            PyList_SET_ITEM(tmp_assign_source_23, 61, tmp_list_element_1);
            tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_66 == NULL)) {
                tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto list_build_exception_1;
            }
            tmp_tuple_element_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[115]);
            if (tmp_tuple_element_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_63);
            tmp_tuple_element_63 = mod_consts[116];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_63);
            PyList_SET_ITEM(tmp_assign_source_23, 62, tmp_list_element_1);
            tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_67 == NULL)) {
                tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto list_build_exception_1;
            }
            tmp_tuple_element_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[119]);
            if (tmp_tuple_element_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_64);
            tmp_tuple_element_64 = mod_consts[120];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_64);
            PyList_SET_ITEM(tmp_assign_source_23, 63, tmp_list_element_1);
            tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_68 == NULL)) {
                tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto list_build_exception_1;
            }
            tmp_tuple_element_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[111]);
            if (tmp_tuple_element_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_65);
            tmp_tuple_element_65 = mod_consts[112];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_65);
            PyList_SET_ITEM(tmp_assign_source_23, 64, tmp_list_element_1);
            tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_69 == NULL)) {
                tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto list_build_exception_1;
            }
            tmp_tuple_element_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[135]);
            if (tmp_tuple_element_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_66);
            tmp_tuple_element_66 = mod_consts[136];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_66);
            PyList_SET_ITEM(tmp_assign_source_23, 65, tmp_list_element_1);
            tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_70 == NULL)) {
                tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto list_build_exception_1;
            }
            tmp_tuple_element_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[113]);
            if (tmp_tuple_element_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_67);
            tmp_tuple_element_67 = mod_consts[114];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_67);
            PyList_SET_ITEM(tmp_assign_source_23, 66, tmp_list_element_1);
            tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_71 == NULL)) {
                tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
            }

            if (tmp_expression_value_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto list_build_exception_1;
            }
            tmp_tuple_element_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[155]);
            if (tmp_tuple_element_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_68);
            tmp_tuple_element_68 = mod_consts[156];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_68);
            PyList_SET_ITEM(tmp_assign_source_23, 67, tmp_list_element_1);
            tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_72 == NULL)) {
                tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto list_build_exception_1;
            }
            tmp_tuple_element_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[157]);
            if (tmp_tuple_element_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_69);
            tmp_tuple_element_69 = mod_consts[158];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_69);
            PyList_SET_ITEM(tmp_assign_source_23, 68, tmp_list_element_1);
            tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_74 == NULL)) {
                tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto list_build_exception_1;
            }
            tmp_expression_value_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[23]);
            if (tmp_expression_value_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto list_build_exception_1;
            }
            tmp_tuple_element_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[159]);
            Py_DECREF(tmp_expression_value_73);
            if (tmp_tuple_element_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_70);
            tmp_tuple_element_70 = mod_consts[160];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_70);
            PyList_SET_ITEM(tmp_assign_source_23, 69, tmp_list_element_1);
            tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_76 == NULL)) {
                tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto list_build_exception_1;
            }
            tmp_expression_value_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[23]);
            if (tmp_expression_value_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto list_build_exception_1;
            }
            tmp_tuple_element_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[27]);
            Py_DECREF(tmp_expression_value_75);
            if (tmp_tuple_element_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_71);
            tmp_tuple_element_71 = mod_consts[161];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_71);
            PyList_SET_ITEM(tmp_assign_source_23, 70, tmp_list_element_1);
            tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_78 == NULL)) {
                tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto list_build_exception_1;
            }
            tmp_expression_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[65]);
            if (tmp_expression_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto list_build_exception_1;
            }
            tmp_tuple_element_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[162]);
            Py_DECREF(tmp_expression_value_77);
            if (tmp_tuple_element_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_72);
            tmp_tuple_element_72 = mod_consts[163];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_72);
            PyList_SET_ITEM(tmp_assign_source_23, 71, tmp_list_element_1);
            tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_81 == NULL)) {
                tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto list_build_exception_1;
            }
            tmp_expression_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[164]);
            if (tmp_expression_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto list_build_exception_1;
            }
            tmp_expression_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[2]);
            Py_DECREF(tmp_expression_value_80);
            if (tmp_expression_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto list_build_exception_1;
            }
            tmp_tuple_element_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[165]);
            Py_DECREF(tmp_expression_value_79);
            if (tmp_tuple_element_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_73);
            tmp_tuple_element_73 = mod_consts[166];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_73);
            PyList_SET_ITEM(tmp_assign_source_23, 72, tmp_list_element_1);
            tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_84 == NULL)) {
                tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto list_build_exception_1;
            }
            tmp_expression_value_83 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[164]);
            if (tmp_expression_value_83 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto list_build_exception_1;
            }
            tmp_expression_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[2]);
            Py_DECREF(tmp_expression_value_83);
            if (tmp_expression_value_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto list_build_exception_1;
            }
            tmp_tuple_element_74 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[167]);
            Py_DECREF(tmp_expression_value_82);
            if (tmp_tuple_element_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_74);
            tmp_tuple_element_74 = mod_consts[168];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_74);
            PyList_SET_ITEM(tmp_assign_source_23, 73, tmp_list_element_1);
            tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_87 == NULL)) {
                tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_87 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto list_build_exception_1;
            }
            tmp_expression_value_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[164]);
            if (tmp_expression_value_86 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto list_build_exception_1;
            }
            tmp_expression_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[169]);
            Py_DECREF(tmp_expression_value_86);
            if (tmp_expression_value_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto list_build_exception_1;
            }
            tmp_tuple_element_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[170]);
            Py_DECREF(tmp_expression_value_85);
            if (tmp_tuple_element_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_75);
            tmp_tuple_element_75 = mod_consts[171];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_75);
            PyList_SET_ITEM(tmp_assign_source_23, 74, tmp_list_element_1);
            tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_90 == NULL)) {
                tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_90 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto list_build_exception_1;
            }
            tmp_expression_value_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[164]);
            if (tmp_expression_value_89 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto list_build_exception_1;
            }
            tmp_expression_value_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[169]);
            Py_DECREF(tmp_expression_value_89);
            if (tmp_expression_value_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto list_build_exception_1;
            }
            tmp_tuple_element_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[172]);
            Py_DECREF(tmp_expression_value_88);
            if (tmp_tuple_element_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_76);
            tmp_tuple_element_76 = mod_consts[173];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_76);
            PyList_SET_ITEM(tmp_assign_source_23, 75, tmp_list_element_1);
            tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_93 == NULL)) {
                tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_93 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto list_build_exception_1;
            }
            tmp_expression_value_92 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[164]);
            if (tmp_expression_value_92 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto list_build_exception_1;
            }
            tmp_expression_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[169]);
            Py_DECREF(tmp_expression_value_92);
            if (tmp_expression_value_91 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto list_build_exception_1;
            }
            tmp_tuple_element_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[174]);
            Py_DECREF(tmp_expression_value_91);
            if (tmp_tuple_element_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_77);
            tmp_tuple_element_77 = mod_consts[175];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_77);
            PyList_SET_ITEM(tmp_assign_source_23, 76, tmp_list_element_1);
            tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_96 == NULL)) {
                tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_96 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto list_build_exception_1;
            }
            tmp_expression_value_95 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[164]);
            if (tmp_expression_value_95 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto list_build_exception_1;
            }
            tmp_expression_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[169]);
            Py_DECREF(tmp_expression_value_95);
            if (tmp_expression_value_94 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto list_build_exception_1;
            }
            tmp_tuple_element_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_94, mod_consts[176]);
            Py_DECREF(tmp_expression_value_94);
            if (tmp_tuple_element_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_78);
            tmp_tuple_element_78 = mod_consts[177];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_78);
            PyList_SET_ITEM(tmp_assign_source_23, 77, tmp_list_element_1);
            tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_98 == NULL)) {
                tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_98 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto list_build_exception_1;
            }
            tmp_expression_value_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[65]);
            if (tmp_expression_value_97 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto list_build_exception_1;
            }
            tmp_tuple_element_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[178]);
            Py_DECREF(tmp_expression_value_97);
            if (tmp_tuple_element_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_79);
            tmp_tuple_element_79 = mod_consts[179];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_79);
            PyList_SET_ITEM(tmp_assign_source_23, 78, tmp_list_element_1);
            tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_expression_value_99 == NULL)) {
                tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_expression_value_99 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto list_build_exception_1;
            }
            tmp_tuple_element_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[180]);
            if (tmp_tuple_element_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_80);
            tmp_tuple_element_80 = mod_consts[181];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_80);
            PyList_SET_ITEM(tmp_assign_source_23, 79, tmp_list_element_1);
            tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_101 == NULL)) {
                tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_101 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto list_build_exception_1;
            }
            tmp_expression_value_100 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[182]);
            if (tmp_expression_value_100 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto list_build_exception_1;
            }
            tmp_tuple_element_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[183]);
            Py_DECREF(tmp_expression_value_100);
            if (tmp_tuple_element_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_81);
            tmp_tuple_element_81 = mod_consts[184];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_81);
            PyList_SET_ITEM(tmp_assign_source_23, 80, tmp_list_element_1);
            tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_103 == NULL)) {
                tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_103 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto list_build_exception_1;
            }
            tmp_expression_value_102 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[182]);
            if (tmp_expression_value_102 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto list_build_exception_1;
            }
            tmp_tuple_element_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[185]);
            Py_DECREF(tmp_expression_value_102);
            if (tmp_tuple_element_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_82);
            tmp_tuple_element_82 = mod_consts[186];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_82);
            PyList_SET_ITEM(tmp_assign_source_23, 81, tmp_list_element_1);
            tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_105 == NULL)) {
                tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_105 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto list_build_exception_1;
            }
            tmp_expression_value_104 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[182]);
            if (tmp_expression_value_104 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto list_build_exception_1;
            }
            tmp_tuple_element_83 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[187]);
            Py_DECREF(tmp_expression_value_104);
            if (tmp_tuple_element_83 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_83);
            tmp_tuple_element_83 = mod_consts[188];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_83);
            PyList_SET_ITEM(tmp_assign_source_23, 82, tmp_list_element_1);
            tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_107 == NULL)) {
                tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_107 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto list_build_exception_1;
            }
            tmp_expression_value_106 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[182]);
            if (tmp_expression_value_106 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto list_build_exception_1;
            }
            tmp_tuple_element_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[189]);
            Py_DECREF(tmp_expression_value_106);
            if (tmp_tuple_element_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_84);
            tmp_tuple_element_84 = mod_consts[190];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_84);
            PyList_SET_ITEM(tmp_assign_source_23, 83, tmp_list_element_1);
            tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_109 == NULL)) {
                tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_109 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto list_build_exception_1;
            }
            tmp_expression_value_108 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[182]);
            if (tmp_expression_value_108 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto list_build_exception_1;
            }
            tmp_tuple_element_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[191]);
            Py_DECREF(tmp_expression_value_108);
            if (tmp_tuple_element_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_85);
            tmp_tuple_element_85 = mod_consts[192];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_85);
            PyList_SET_ITEM(tmp_assign_source_23, 84, tmp_list_element_1);
            tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_111 == NULL)) {
                tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_111 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto list_build_exception_1;
            }
            tmp_expression_value_110 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[182]);
            if (tmp_expression_value_110 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto list_build_exception_1;
            }
            tmp_tuple_element_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[193]);
            Py_DECREF(tmp_expression_value_110);
            if (tmp_tuple_element_86 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_86);
            tmp_tuple_element_86 = mod_consts[194];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_86);
            PyList_SET_ITEM(tmp_assign_source_23, 85, tmp_list_element_1);
            tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_113 == NULL)) {
                tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_113 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto list_build_exception_1;
            }
            tmp_expression_value_112 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[182]);
            if (tmp_expression_value_112 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto list_build_exception_1;
            }
            tmp_tuple_element_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[195]);
            Py_DECREF(tmp_expression_value_112);
            if (tmp_tuple_element_87 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_87);
            tmp_tuple_element_87 = mod_consts[196];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_87);
            PyList_SET_ITEM(tmp_assign_source_23, 86, tmp_list_element_1);
            tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_115 == NULL)) {
                tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_115 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto list_build_exception_1;
            }
            tmp_expression_value_114 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[182]);
            if (tmp_expression_value_114 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto list_build_exception_1;
            }
            tmp_tuple_element_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[197]);
            Py_DECREF(tmp_expression_value_114);
            if (tmp_tuple_element_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_88);
            tmp_tuple_element_88 = mod_consts[198];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_88);
            PyList_SET_ITEM(tmp_assign_source_23, 87, tmp_list_element_1);
            tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[1]);

            if (unlikely(tmp_expression_value_117 == NULL)) {
                tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
            }

            if (tmp_expression_value_117 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto list_build_exception_1;
            }
            tmp_expression_value_116 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[182]);
            if (tmp_expression_value_116 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto list_build_exception_1;
            }
            tmp_tuple_element_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[199]);
            Py_DECREF(tmp_expression_value_116);
            if (tmp_tuple_element_89 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto list_build_exception_1;
            }
            tmp_list_element_1 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_list_element_1, 0, tmp_tuple_element_89);
            tmp_tuple_element_89 = mod_consts[200];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_89);
            PyList_SET_ITEM(tmp_assign_source_23, 88, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_23);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_torch$jit$_builtins$$$function__1__gen_torch_functional_registered_ops();

        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[201]);
        }

        assert(!(tmp_called_value_1 == NULL));
        frame_531b900c158d98129ce34ba3dd0fae62->m_frame.f_lineno = 123;
        tmp_assign_source_25 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_25);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_531b900c158d98129ce34ba3dd0fae62);
#endif
    popFrameStack();

    assertFrameObject(frame_531b900c158d98129ce34ba3dd0fae62);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_531b900c158d98129ce34ba3dd0fae62);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_531b900c158d98129ce34ba3dd0fae62, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_531b900c158d98129ce34ba3dd0fae62->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_531b900c158d98129ce34ba3dd0fae62, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_torch$jit$_builtins$$$function__2__is_special_functional_bound_op();

        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_torch$jit$_builtins$$$function__3__get_builtin_table();

        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_torch$jit$_builtins$$$function__4__register_builtin();

        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_torch$jit$_builtins$$$function__5__find_builtin();

        UPDATE_STRING_DICT1(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_29);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.jit._builtins", false);

    Py_INCREF(module_torch$jit$_builtins);
    return module_torch$jit$_builtins;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$jit$_builtins, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$jit$_builtins", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
