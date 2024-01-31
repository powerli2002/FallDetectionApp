/* Generated code for Python module 'pandas.core.ops.roperator'
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

/* The "module_pandas$core$ops$roperator" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pandas$core$ops$roperator;
PyDictObject *moduledict_pandas$core$ops$roperator;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[31];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[31];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("pandas.core.ops.roperator"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 31; i++) {
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
void checkModuleConstants_pandas$core$ops$roperator(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 31; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_a06a0faf7ecb191565a52cb29ef5914e;
static PyCodeObject *codeobj_76a7a323be5cb1ff6b4c5fd469442b2b;
static PyCodeObject *codeobj_ba9c9a4d33e0d10bcba3ca27e43cd366;
static PyCodeObject *codeobj_c28ef81bda27d1e85fbba89b36caa4e1;
static PyCodeObject *codeobj_4d7eb1e97ab5a2f91a9c453eed28c66d;
static PyCodeObject *codeobj_3e8a379d873032120307afabfba654a8;
static PyCodeObject *codeobj_69a1a3af11d7d4ccb33e771ea21351dc;
static PyCodeObject *codeobj_9fe4ae4e636679e19b5a7de0e018730f;
static PyCodeObject *codeobj_2fb267d58472284b1f73160005a02761;
static PyCodeObject *codeobj_e130afcdae77d4d75f1ddb74cdb87e9a;
static PyCodeObject *codeobj_cdc77ab039dca78a45a2aadd9c0c06cd;
static PyCodeObject *codeobj_65c8957a479aae26acbca38b7e55d279;
static PyCodeObject *codeobj_aa5e6f54e43a58ce9a0760cf1d30f292;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[27]); CHECK_OBJECT(module_filename_obj);
    codeobj_a06a0faf7ecb191565a52cb29ef5914e = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[28], NULL, NULL, 0, 0, 0);
    codeobj_76a7a323be5cb1ff6b4c5fd469442b2b = MAKE_CODEOBJECT(module_filename_obj, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[29], NULL, 2, 0, 0);
    codeobj_ba9c9a4d33e0d10bcba3ca27e43cd366 = MAKE_CODEOBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[29], NULL, 2, 0, 0);
    codeobj_c28ef81bda27d1e85fbba89b36caa4e1 = MAKE_CODEOBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[18], mod_consts[29], NULL, 2, 0, 0);
    codeobj_4d7eb1e97ab5a2f91a9c453eed28c66d = MAKE_CODEOBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[29], NULL, 2, 0, 0);
    codeobj_3e8a379d873032120307afabfba654a8 = MAKE_CODEOBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[29], NULL, 2, 0, 0);
    codeobj_69a1a3af11d7d4ccb33e771ea21351dc = MAKE_CODEOBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[30], NULL, 2, 0, 0);
    codeobj_9fe4ae4e636679e19b5a7de0e018730f = MAKE_CODEOBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[29], NULL, 2, 0, 0);
    codeobj_2fb267d58472284b1f73160005a02761 = MAKE_CODEOBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[29], NULL, 2, 0, 0);
    codeobj_e130afcdae77d4d75f1ddb74cdb87e9a = MAKE_CODEOBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[29], NULL, 2, 0, 0);
    codeobj_cdc77ab039dca78a45a2aadd9c0c06cd = MAKE_CODEOBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[29], NULL, 2, 0, 0);
    codeobj_65c8957a479aae26acbca38b7e55d279 = MAKE_CODEOBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[29], NULL, 2, 0, 0);
    codeobj_aa5e6f54e43a58ce9a0760cf1d30f292 = MAKE_CODEOBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[29], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pandas$core$ops$roperator$$$function__10_rand_();


static PyObject *MAKE_FUNCTION_pandas$core$ops$roperator$$$function__11_ror_();


static PyObject *MAKE_FUNCTION_pandas$core$ops$roperator$$$function__12_rxor();


static PyObject *MAKE_FUNCTION_pandas$core$ops$roperator$$$function__1_radd();


static PyObject *MAKE_FUNCTION_pandas$core$ops$roperator$$$function__2_rsub();


static PyObject *MAKE_FUNCTION_pandas$core$ops$roperator$$$function__3_rmul();


static PyObject *MAKE_FUNCTION_pandas$core$ops$roperator$$$function__4_rdiv();


static PyObject *MAKE_FUNCTION_pandas$core$ops$roperator$$$function__5_rtruediv();


static PyObject *MAKE_FUNCTION_pandas$core$ops$roperator$$$function__6_rfloordiv();


static PyObject *MAKE_FUNCTION_pandas$core$ops$roperator$$$function__7_rmod();


static PyObject *MAKE_FUNCTION_pandas$core$ops$roperator$$$function__8_rdivmod();


static PyObject *MAKE_FUNCTION_pandas$core$ops$roperator$$$function__9_rpow();


// The module function definitions.
static PyObject *impl_pandas$core$ops$roperator$$$function__1_radd(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    struct Nuitka_FrameObject *frame_76a7a323be5cb1ff6b4c5fd469442b2b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_76a7a323be5cb1ff6b4c5fd469442b2b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_76a7a323be5cb1ff6b4c5fd469442b2b)) {
        Py_XDECREF(cache_frame_76a7a323be5cb1ff6b4c5fd469442b2b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_76a7a323be5cb1ff6b4c5fd469442b2b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_76a7a323be5cb1ff6b4c5fd469442b2b = MAKE_FUNCTION_FRAME(codeobj_76a7a323be5cb1ff6b4c5fd469442b2b, module_pandas$core$ops$roperator, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_76a7a323be5cb1ff6b4c5fd469442b2b->m_type_description == NULL);
    frame_76a7a323be5cb1ff6b4c5fd469442b2b = cache_frame_76a7a323be5cb1ff6b4c5fd469442b2b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_76a7a323be5cb1ff6b4c5fd469442b2b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_76a7a323be5cb1ff6b4c5fd469442b2b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        CHECK_OBJECT(par_right);
        tmp_left_value_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_right_value_1 = par_left;
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_76a7a323be5cb1ff6b4c5fd469442b2b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_76a7a323be5cb1ff6b4c5fd469442b2b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_76a7a323be5cb1ff6b4c5fd469442b2b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_76a7a323be5cb1ff6b4c5fd469442b2b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_76a7a323be5cb1ff6b4c5fd469442b2b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_76a7a323be5cb1ff6b4c5fd469442b2b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_76a7a323be5cb1ff6b4c5fd469442b2b,
        type_description_1,
        par_left,
        par_right
    );


    // Release cached frame if used for exception.
    if (frame_76a7a323be5cb1ff6b4c5fd469442b2b == cache_frame_76a7a323be5cb1ff6b4c5fd469442b2b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_76a7a323be5cb1ff6b4c5fd469442b2b);
        cache_frame_76a7a323be5cb1ff6b4c5fd469442b2b = NULL;
    }

    assertFrameObject(frame_76a7a323be5cb1ff6b4c5fd469442b2b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$ops$roperator$$$function__2_rsub(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    struct Nuitka_FrameObject *frame_cdc77ab039dca78a45a2aadd9c0c06cd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cdc77ab039dca78a45a2aadd9c0c06cd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cdc77ab039dca78a45a2aadd9c0c06cd)) {
        Py_XDECREF(cache_frame_cdc77ab039dca78a45a2aadd9c0c06cd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cdc77ab039dca78a45a2aadd9c0c06cd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cdc77ab039dca78a45a2aadd9c0c06cd = MAKE_FUNCTION_FRAME(codeobj_cdc77ab039dca78a45a2aadd9c0c06cd, module_pandas$core$ops$roperator, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_cdc77ab039dca78a45a2aadd9c0c06cd->m_type_description == NULL);
    frame_cdc77ab039dca78a45a2aadd9c0c06cd = cache_frame_cdc77ab039dca78a45a2aadd9c0c06cd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_cdc77ab039dca78a45a2aadd9c0c06cd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_cdc77ab039dca78a45a2aadd9c0c06cd) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        CHECK_OBJECT(par_right);
        tmp_left_value_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_right_value_1 = par_left;
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cdc77ab039dca78a45a2aadd9c0c06cd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_cdc77ab039dca78a45a2aadd9c0c06cd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_cdc77ab039dca78a45a2aadd9c0c06cd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cdc77ab039dca78a45a2aadd9c0c06cd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cdc77ab039dca78a45a2aadd9c0c06cd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cdc77ab039dca78a45a2aadd9c0c06cd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cdc77ab039dca78a45a2aadd9c0c06cd,
        type_description_1,
        par_left,
        par_right
    );


    // Release cached frame if used for exception.
    if (frame_cdc77ab039dca78a45a2aadd9c0c06cd == cache_frame_cdc77ab039dca78a45a2aadd9c0c06cd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_cdc77ab039dca78a45a2aadd9c0c06cd);
        cache_frame_cdc77ab039dca78a45a2aadd9c0c06cd = NULL;
    }

    assertFrameObject(frame_cdc77ab039dca78a45a2aadd9c0c06cd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$ops$roperator$$$function__3_rmul(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    struct Nuitka_FrameObject *frame_9fe4ae4e636679e19b5a7de0e018730f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9fe4ae4e636679e19b5a7de0e018730f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9fe4ae4e636679e19b5a7de0e018730f)) {
        Py_XDECREF(cache_frame_9fe4ae4e636679e19b5a7de0e018730f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9fe4ae4e636679e19b5a7de0e018730f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9fe4ae4e636679e19b5a7de0e018730f = MAKE_FUNCTION_FRAME(codeobj_9fe4ae4e636679e19b5a7de0e018730f, module_pandas$core$ops$roperator, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9fe4ae4e636679e19b5a7de0e018730f->m_type_description == NULL);
    frame_9fe4ae4e636679e19b5a7de0e018730f = cache_frame_9fe4ae4e636679e19b5a7de0e018730f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9fe4ae4e636679e19b5a7de0e018730f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9fe4ae4e636679e19b5a7de0e018730f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        CHECK_OBJECT(par_right);
        tmp_left_value_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_right_value_1 = par_left;
        tmp_return_value = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9fe4ae4e636679e19b5a7de0e018730f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9fe4ae4e636679e19b5a7de0e018730f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9fe4ae4e636679e19b5a7de0e018730f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9fe4ae4e636679e19b5a7de0e018730f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9fe4ae4e636679e19b5a7de0e018730f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9fe4ae4e636679e19b5a7de0e018730f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9fe4ae4e636679e19b5a7de0e018730f,
        type_description_1,
        par_left,
        par_right
    );


    // Release cached frame if used for exception.
    if (frame_9fe4ae4e636679e19b5a7de0e018730f == cache_frame_9fe4ae4e636679e19b5a7de0e018730f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9fe4ae4e636679e19b5a7de0e018730f);
        cache_frame_9fe4ae4e636679e19b5a7de0e018730f = NULL;
    }

    assertFrameObject(frame_9fe4ae4e636679e19b5a7de0e018730f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$ops$roperator$$$function__4_rdiv(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    struct Nuitka_FrameObject *frame_c28ef81bda27d1e85fbba89b36caa4e1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c28ef81bda27d1e85fbba89b36caa4e1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c28ef81bda27d1e85fbba89b36caa4e1)) {
        Py_XDECREF(cache_frame_c28ef81bda27d1e85fbba89b36caa4e1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c28ef81bda27d1e85fbba89b36caa4e1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c28ef81bda27d1e85fbba89b36caa4e1 = MAKE_FUNCTION_FRAME(codeobj_c28ef81bda27d1e85fbba89b36caa4e1, module_pandas$core$ops$roperator, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c28ef81bda27d1e85fbba89b36caa4e1->m_type_description == NULL);
    frame_c28ef81bda27d1e85fbba89b36caa4e1 = cache_frame_c28ef81bda27d1e85fbba89b36caa4e1;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c28ef81bda27d1e85fbba89b36caa4e1);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c28ef81bda27d1e85fbba89b36caa4e1) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        CHECK_OBJECT(par_right);
        tmp_left_value_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_right_value_1 = par_left;
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c28ef81bda27d1e85fbba89b36caa4e1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c28ef81bda27d1e85fbba89b36caa4e1);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c28ef81bda27d1e85fbba89b36caa4e1);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c28ef81bda27d1e85fbba89b36caa4e1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c28ef81bda27d1e85fbba89b36caa4e1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c28ef81bda27d1e85fbba89b36caa4e1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c28ef81bda27d1e85fbba89b36caa4e1,
        type_description_1,
        par_left,
        par_right
    );


    // Release cached frame if used for exception.
    if (frame_c28ef81bda27d1e85fbba89b36caa4e1 == cache_frame_c28ef81bda27d1e85fbba89b36caa4e1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c28ef81bda27d1e85fbba89b36caa4e1);
        cache_frame_c28ef81bda27d1e85fbba89b36caa4e1 = NULL;
    }

    assertFrameObject(frame_c28ef81bda27d1e85fbba89b36caa4e1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$ops$roperator$$$function__5_rtruediv(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    struct Nuitka_FrameObject *frame_65c8957a479aae26acbca38b7e55d279;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_65c8957a479aae26acbca38b7e55d279 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_65c8957a479aae26acbca38b7e55d279)) {
        Py_XDECREF(cache_frame_65c8957a479aae26acbca38b7e55d279);

#if _DEBUG_REFCOUNTS
        if (cache_frame_65c8957a479aae26acbca38b7e55d279 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_65c8957a479aae26acbca38b7e55d279 = MAKE_FUNCTION_FRAME(codeobj_65c8957a479aae26acbca38b7e55d279, module_pandas$core$ops$roperator, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_65c8957a479aae26acbca38b7e55d279->m_type_description == NULL);
    frame_65c8957a479aae26acbca38b7e55d279 = cache_frame_65c8957a479aae26acbca38b7e55d279;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_65c8957a479aae26acbca38b7e55d279);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_65c8957a479aae26acbca38b7e55d279) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        CHECK_OBJECT(par_right);
        tmp_left_value_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_right_value_1 = par_left;
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_65c8957a479aae26acbca38b7e55d279);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_65c8957a479aae26acbca38b7e55d279);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_65c8957a479aae26acbca38b7e55d279);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_65c8957a479aae26acbca38b7e55d279, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_65c8957a479aae26acbca38b7e55d279->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_65c8957a479aae26acbca38b7e55d279, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_65c8957a479aae26acbca38b7e55d279,
        type_description_1,
        par_left,
        par_right
    );


    // Release cached frame if used for exception.
    if (frame_65c8957a479aae26acbca38b7e55d279 == cache_frame_65c8957a479aae26acbca38b7e55d279) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_65c8957a479aae26acbca38b7e55d279);
        cache_frame_65c8957a479aae26acbca38b7e55d279 = NULL;
    }

    assertFrameObject(frame_65c8957a479aae26acbca38b7e55d279);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$ops$roperator$$$function__6_rfloordiv(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    struct Nuitka_FrameObject *frame_3e8a379d873032120307afabfba654a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3e8a379d873032120307afabfba654a8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3e8a379d873032120307afabfba654a8)) {
        Py_XDECREF(cache_frame_3e8a379d873032120307afabfba654a8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3e8a379d873032120307afabfba654a8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3e8a379d873032120307afabfba654a8 = MAKE_FUNCTION_FRAME(codeobj_3e8a379d873032120307afabfba654a8, module_pandas$core$ops$roperator, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3e8a379d873032120307afabfba654a8->m_type_description == NULL);
    frame_3e8a379d873032120307afabfba654a8 = cache_frame_3e8a379d873032120307afabfba654a8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3e8a379d873032120307afabfba654a8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3e8a379d873032120307afabfba654a8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        CHECK_OBJECT(par_right);
        tmp_left_value_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_right_value_1 = par_left;
        tmp_return_value = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3e8a379d873032120307afabfba654a8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3e8a379d873032120307afabfba654a8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3e8a379d873032120307afabfba654a8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3e8a379d873032120307afabfba654a8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3e8a379d873032120307afabfba654a8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3e8a379d873032120307afabfba654a8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3e8a379d873032120307afabfba654a8,
        type_description_1,
        par_left,
        par_right
    );


    // Release cached frame if used for exception.
    if (frame_3e8a379d873032120307afabfba654a8 == cache_frame_3e8a379d873032120307afabfba654a8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3e8a379d873032120307afabfba654a8);
        cache_frame_3e8a379d873032120307afabfba654a8 = NULL;
    }

    assertFrameObject(frame_3e8a379d873032120307afabfba654a8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$ops$roperator$$$function__7_rmod(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    PyObject *var_typ = NULL;
    struct Nuitka_FrameObject *frame_69a1a3af11d7d4ccb33e771ea21351dc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_69a1a3af11d7d4ccb33e771ea21351dc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_69a1a3af11d7d4ccb33e771ea21351dc)) {
        Py_XDECREF(cache_frame_69a1a3af11d7d4ccb33e771ea21351dc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_69a1a3af11d7d4ccb33e771ea21351dc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_69a1a3af11d7d4ccb33e771ea21351dc = MAKE_FUNCTION_FRAME(codeobj_69a1a3af11d7d4ccb33e771ea21351dc, module_pandas$core$ops$roperator, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_69a1a3af11d7d4ccb33e771ea21351dc->m_type_description == NULL);
    frame_69a1a3af11d7d4ccb33e771ea21351dc = cache_frame_69a1a3af11d7d4ccb33e771ea21351dc;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_69a1a3af11d7d4ccb33e771ea21351dc);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_69a1a3af11d7d4ccb33e771ea21351dc) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_right);
        tmp_isinstance_inst_1 = par_right;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_left);
        tmp_type_arg_1 = par_left;
        tmp_expression_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_expression_value_1 == NULL));
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_typ == NULL);
        var_typ = tmp_assign_source_1;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(var_typ);
        tmp_format_value_1 = var_typ;
        tmp_format_spec_1 = mod_consts[1];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[2];
        PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[1], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_69a1a3af11d7d4ccb33e771ea21351dc->m_frame.f_lineno = 38;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 38;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        CHECK_OBJECT(par_right);
        tmp_left_value_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_right_value_1 = par_left;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_69a1a3af11d7d4ccb33e771ea21351dc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_69a1a3af11d7d4ccb33e771ea21351dc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_69a1a3af11d7d4ccb33e771ea21351dc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_69a1a3af11d7d4ccb33e771ea21351dc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_69a1a3af11d7d4ccb33e771ea21351dc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_69a1a3af11d7d4ccb33e771ea21351dc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_69a1a3af11d7d4ccb33e771ea21351dc,
        type_description_1,
        par_left,
        par_right,
        var_typ
    );


    // Release cached frame if used for exception.
    if (frame_69a1a3af11d7d4ccb33e771ea21351dc == cache_frame_69a1a3af11d7d4ccb33e771ea21351dc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_69a1a3af11d7d4ccb33e771ea21351dc);
        cache_frame_69a1a3af11d7d4ccb33e771ea21351dc = NULL;
    }

    assertFrameObject(frame_69a1a3af11d7d4ccb33e771ea21351dc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    Py_XDECREF(var_typ);
    var_typ = NULL;
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
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$ops$roperator$$$function__8_rdivmod(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    struct Nuitka_FrameObject *frame_4d7eb1e97ab5a2f91a9c453eed28c66d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4d7eb1e97ab5a2f91a9c453eed28c66d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4d7eb1e97ab5a2f91a9c453eed28c66d)) {
        Py_XDECREF(cache_frame_4d7eb1e97ab5a2f91a9c453eed28c66d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4d7eb1e97ab5a2f91a9c453eed28c66d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4d7eb1e97ab5a2f91a9c453eed28c66d = MAKE_FUNCTION_FRAME(codeobj_4d7eb1e97ab5a2f91a9c453eed28c66d, module_pandas$core$ops$roperator, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4d7eb1e97ab5a2f91a9c453eed28c66d->m_type_description == NULL);
    frame_4d7eb1e97ab5a2f91a9c453eed28c66d = cache_frame_4d7eb1e97ab5a2f91a9c453eed28c66d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4d7eb1e97ab5a2f91a9c453eed28c66d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4d7eb1e97ab5a2f91a9c453eed28c66d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        CHECK_OBJECT(par_right);
        tmp_left_value_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_right_value_1 = par_left;
        tmp_return_value = BINARY_OPERATION_DIVMOD_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4d7eb1e97ab5a2f91a9c453eed28c66d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4d7eb1e97ab5a2f91a9c453eed28c66d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4d7eb1e97ab5a2f91a9c453eed28c66d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4d7eb1e97ab5a2f91a9c453eed28c66d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4d7eb1e97ab5a2f91a9c453eed28c66d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4d7eb1e97ab5a2f91a9c453eed28c66d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4d7eb1e97ab5a2f91a9c453eed28c66d,
        type_description_1,
        par_left,
        par_right
    );


    // Release cached frame if used for exception.
    if (frame_4d7eb1e97ab5a2f91a9c453eed28c66d == cache_frame_4d7eb1e97ab5a2f91a9c453eed28c66d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4d7eb1e97ab5a2f91a9c453eed28c66d);
        cache_frame_4d7eb1e97ab5a2f91a9c453eed28c66d = NULL;
    }

    assertFrameObject(frame_4d7eb1e97ab5a2f91a9c453eed28c66d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$ops$roperator$$$function__9_rpow(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    struct Nuitka_FrameObject *frame_e130afcdae77d4d75f1ddb74cdb87e9a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e130afcdae77d4d75f1ddb74cdb87e9a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e130afcdae77d4d75f1ddb74cdb87e9a)) {
        Py_XDECREF(cache_frame_e130afcdae77d4d75f1ddb74cdb87e9a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e130afcdae77d4d75f1ddb74cdb87e9a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e130afcdae77d4d75f1ddb74cdb87e9a = MAKE_FUNCTION_FRAME(codeobj_e130afcdae77d4d75f1ddb74cdb87e9a, module_pandas$core$ops$roperator, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e130afcdae77d4d75f1ddb74cdb87e9a->m_type_description == NULL);
    frame_e130afcdae77d4d75f1ddb74cdb87e9a = cache_frame_e130afcdae77d4d75f1ddb74cdb87e9a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e130afcdae77d4d75f1ddb74cdb87e9a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e130afcdae77d4d75f1ddb74cdb87e9a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        CHECK_OBJECT(par_right);
        tmp_left_value_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_right_value_1 = par_left;
        tmp_return_value = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e130afcdae77d4d75f1ddb74cdb87e9a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_e130afcdae77d4d75f1ddb74cdb87e9a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e130afcdae77d4d75f1ddb74cdb87e9a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e130afcdae77d4d75f1ddb74cdb87e9a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e130afcdae77d4d75f1ddb74cdb87e9a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e130afcdae77d4d75f1ddb74cdb87e9a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e130afcdae77d4d75f1ddb74cdb87e9a,
        type_description_1,
        par_left,
        par_right
    );


    // Release cached frame if used for exception.
    if (frame_e130afcdae77d4d75f1ddb74cdb87e9a == cache_frame_e130afcdae77d4d75f1ddb74cdb87e9a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e130afcdae77d4d75f1ddb74cdb87e9a);
        cache_frame_e130afcdae77d4d75f1ddb74cdb87e9a = NULL;
    }

    assertFrameObject(frame_e130afcdae77d4d75f1ddb74cdb87e9a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$ops$roperator$$$function__10_rand_(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    struct Nuitka_FrameObject *frame_ba9c9a4d33e0d10bcba3ca27e43cd366;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ba9c9a4d33e0d10bcba3ca27e43cd366 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ba9c9a4d33e0d10bcba3ca27e43cd366)) {
        Py_XDECREF(cache_frame_ba9c9a4d33e0d10bcba3ca27e43cd366);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ba9c9a4d33e0d10bcba3ca27e43cd366 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ba9c9a4d33e0d10bcba3ca27e43cd366 = MAKE_FUNCTION_FRAME(codeobj_ba9c9a4d33e0d10bcba3ca27e43cd366, module_pandas$core$ops$roperator, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ba9c9a4d33e0d10bcba3ca27e43cd366->m_type_description == NULL);
    frame_ba9c9a4d33e0d10bcba3ca27e43cd366 = cache_frame_ba9c9a4d33e0d10bcba3ca27e43cd366;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ba9c9a4d33e0d10bcba3ca27e43cd366);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ba9c9a4d33e0d10bcba3ca27e43cd366) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_right);
        tmp_args_element_value_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_args_element_value_2 = par_left;
        frame_ba9c9a4d33e0d10bcba3ca27e43cd366->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[4],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ba9c9a4d33e0d10bcba3ca27e43cd366);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ba9c9a4d33e0d10bcba3ca27e43cd366);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ba9c9a4d33e0d10bcba3ca27e43cd366);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ba9c9a4d33e0d10bcba3ca27e43cd366, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ba9c9a4d33e0d10bcba3ca27e43cd366->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ba9c9a4d33e0d10bcba3ca27e43cd366, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ba9c9a4d33e0d10bcba3ca27e43cd366,
        type_description_1,
        par_left,
        par_right
    );


    // Release cached frame if used for exception.
    if (frame_ba9c9a4d33e0d10bcba3ca27e43cd366 == cache_frame_ba9c9a4d33e0d10bcba3ca27e43cd366) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ba9c9a4d33e0d10bcba3ca27e43cd366);
        cache_frame_ba9c9a4d33e0d10bcba3ca27e43cd366 = NULL;
    }

    assertFrameObject(frame_ba9c9a4d33e0d10bcba3ca27e43cd366);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$ops$roperator$$$function__11_ror_(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    struct Nuitka_FrameObject *frame_2fb267d58472284b1f73160005a02761;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2fb267d58472284b1f73160005a02761 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2fb267d58472284b1f73160005a02761)) {
        Py_XDECREF(cache_frame_2fb267d58472284b1f73160005a02761);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2fb267d58472284b1f73160005a02761 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2fb267d58472284b1f73160005a02761 = MAKE_FUNCTION_FRAME(codeobj_2fb267d58472284b1f73160005a02761, module_pandas$core$ops$roperator, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2fb267d58472284b1f73160005a02761->m_type_description == NULL);
    frame_2fb267d58472284b1f73160005a02761 = cache_frame_2fb267d58472284b1f73160005a02761;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2fb267d58472284b1f73160005a02761);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2fb267d58472284b1f73160005a02761) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_right);
        tmp_args_element_value_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_args_element_value_2 = par_left;
        frame_2fb267d58472284b1f73160005a02761->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[5],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2fb267d58472284b1f73160005a02761);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2fb267d58472284b1f73160005a02761);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2fb267d58472284b1f73160005a02761);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2fb267d58472284b1f73160005a02761, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2fb267d58472284b1f73160005a02761->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2fb267d58472284b1f73160005a02761, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2fb267d58472284b1f73160005a02761,
        type_description_1,
        par_left,
        par_right
    );


    // Release cached frame if used for exception.
    if (frame_2fb267d58472284b1f73160005a02761 == cache_frame_2fb267d58472284b1f73160005a02761) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2fb267d58472284b1f73160005a02761);
        cache_frame_2fb267d58472284b1f73160005a02761 = NULL;
    }

    assertFrameObject(frame_2fb267d58472284b1f73160005a02761);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$ops$roperator$$$function__12_rxor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[0];
    PyObject *par_right = python_pars[1];
    struct Nuitka_FrameObject *frame_aa5e6f54e43a58ce9a0760cf1d30f292;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_aa5e6f54e43a58ce9a0760cf1d30f292 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_aa5e6f54e43a58ce9a0760cf1d30f292)) {
        Py_XDECREF(cache_frame_aa5e6f54e43a58ce9a0760cf1d30f292);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aa5e6f54e43a58ce9a0760cf1d30f292 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aa5e6f54e43a58ce9a0760cf1d30f292 = MAKE_FUNCTION_FRAME(codeobj_aa5e6f54e43a58ce9a0760cf1d30f292, module_pandas$core$ops$roperator, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_aa5e6f54e43a58ce9a0760cf1d30f292->m_type_description == NULL);
    frame_aa5e6f54e43a58ce9a0760cf1d30f292 = cache_frame_aa5e6f54e43a58ce9a0760cf1d30f292;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_aa5e6f54e43a58ce9a0760cf1d30f292);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_aa5e6f54e43a58ce9a0760cf1d30f292) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_right);
        tmp_args_element_value_1 = par_right;
        CHECK_OBJECT(par_left);
        tmp_args_element_value_2 = par_left;
        frame_aa5e6f54e43a58ce9a0760cf1d30f292->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa5e6f54e43a58ce9a0760cf1d30f292);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa5e6f54e43a58ce9a0760cf1d30f292);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa5e6f54e43a58ce9a0760cf1d30f292);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aa5e6f54e43a58ce9a0760cf1d30f292, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aa5e6f54e43a58ce9a0760cf1d30f292->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aa5e6f54e43a58ce9a0760cf1d30f292, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aa5e6f54e43a58ce9a0760cf1d30f292,
        type_description_1,
        par_left,
        par_right
    );


    // Release cached frame if used for exception.
    if (frame_aa5e6f54e43a58ce9a0760cf1d30f292 == cache_frame_aa5e6f54e43a58ce9a0760cf1d30f292) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_aa5e6f54e43a58ce9a0760cf1d30f292);
        cache_frame_aa5e6f54e43a58ce9a0760cf1d30f292 = NULL;
    }

    assertFrameObject(frame_aa5e6f54e43a58ce9a0760cf1d30f292);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_left);
    Py_DECREF(par_left);
    CHECK_OBJECT(par_right);
    Py_DECREF(par_right);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pandas$core$ops$roperator$$$function__10_rand_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$ops$roperator$$$function__10_rand_,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ba9c9a4d33e0d10bcba3ca27e43cd366,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$ops$roperator,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$ops$roperator$$$function__11_ror_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$ops$roperator$$$function__11_ror_,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2fb267d58472284b1f73160005a02761,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$ops$roperator,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$ops$roperator$$$function__12_rxor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$ops$roperator$$$function__12_rxor,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aa5e6f54e43a58ce9a0760cf1d30f292,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$ops$roperator,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$ops$roperator$$$function__1_radd() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$ops$roperator$$$function__1_radd,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_76a7a323be5cb1ff6b4c5fd469442b2b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$ops$roperator,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$ops$roperator$$$function__2_rsub() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$ops$roperator$$$function__2_rsub,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cdc77ab039dca78a45a2aadd9c0c06cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$ops$roperator,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$ops$roperator$$$function__3_rmul() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$ops$roperator$$$function__3_rmul,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9fe4ae4e636679e19b5a7de0e018730f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$ops$roperator,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$ops$roperator$$$function__4_rdiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$ops$roperator$$$function__4_rdiv,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c28ef81bda27d1e85fbba89b36caa4e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$ops$roperator,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$ops$roperator$$$function__5_rtruediv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$ops$roperator$$$function__5_rtruediv,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_65c8957a479aae26acbca38b7e55d279,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$ops$roperator,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$ops$roperator$$$function__6_rfloordiv() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$ops$roperator$$$function__6_rfloordiv,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3e8a379d873032120307afabfba654a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$ops$roperator,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$ops$roperator$$$function__7_rmod() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$ops$roperator$$$function__7_rmod,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_69a1a3af11d7d4ccb33e771ea21351dc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$ops$roperator,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$ops$roperator$$$function__8_rdivmod() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$ops$roperator$$$function__8_rdivmod,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4d7eb1e97ab5a2f91a9c453eed28c66d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$ops$roperator,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$ops$roperator$$$function__9_rpow() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$ops$roperator$$$function__9_rpow,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e130afcdae77d4d75f1ddb74cdb87e9a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$ops$roperator,
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

function_impl_code functable_pandas$core$ops$roperator[] = {
    impl_pandas$core$ops$roperator$$$function__1_radd,
    impl_pandas$core$ops$roperator$$$function__2_rsub,
    impl_pandas$core$ops$roperator$$$function__3_rmul,
    impl_pandas$core$ops$roperator$$$function__4_rdiv,
    impl_pandas$core$ops$roperator$$$function__5_rtruediv,
    impl_pandas$core$ops$roperator$$$function__6_rfloordiv,
    impl_pandas$core$ops$roperator$$$function__7_rmod,
    impl_pandas$core$ops$roperator$$$function__8_rdivmod,
    impl_pandas$core$ops$roperator$$$function__9_rpow,
    impl_pandas$core$ops$roperator$$$function__10_rand_,
    impl_pandas$core$ops$roperator$$$function__11_ror_,
    impl_pandas$core$ops$roperator$$$function__12_rxor,
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

    function_impl_code *current = functable_pandas$core$ops$roperator;
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

    if (offset > sizeof(functable_pandas$core$ops$roperator) || offset < 0) {
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
        functable_pandas$core$ops$roperator[offset],
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
        module_pandas$core$ops$roperator,
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
PyObject *modulecode_pandas$core$ops$roperator(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pandas.core.ops.roperator");

    // Store the module for future use.
    module_pandas$core$ops$roperator = module;

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
        PRINT_STRING("pandas.core.ops.roperator: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pandas.core.ops.roperator: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pandas.core.ops.roperator: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpandas$core$ops$roperator\n");

    moduledict_pandas$core$ops$roperator = MODULE_DICT(module_pandas$core$ops$roperator);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pandas$core$ops$roperator,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pandas$core$ops$roperator,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[1]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pandas$core$ops$roperator,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$ops$roperator,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$ops$roperator,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pandas$core$ops$roperator);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pandas$core$ops$roperator);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_a06a0faf7ecb191565a52cb29ef5914e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_a06a0faf7ecb191565a52cb29ef5914e = MAKE_MODULE_FRAME(codeobj_a06a0faf7ecb191565a52cb29ef5914e, module_pandas$core$ops$roperator);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_a06a0faf7ecb191565a52cb29ef5914e);
    assert(Py_REFCNT(frame_a06a0faf7ecb191565a52cb29ef5914e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[12], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[3];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$ops$roperator;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[14];
        frame_a06a0faf7ecb191565a52cb29ef5914e->m_frame.f_lineno = 5;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_4);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a06a0faf7ecb191565a52cb29ef5914e);
#endif
    popFrameStack();

    assertFrameObject(frame_a06a0faf7ecb191565a52cb29ef5914e);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a06a0faf7ecb191565a52cb29ef5914e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a06a0faf7ecb191565a52cb29ef5914e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a06a0faf7ecb191565a52cb29ef5914e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a06a0faf7ecb191565a52cb29ef5914e, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_5;


        tmp_assign_source_5 = MAKE_FUNCTION_pandas$core$ops$roperator$$$function__1_radd();

        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_pandas$core$ops$roperator$$$function__2_rsub();

        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_pandas$core$ops$roperator$$$function__3_rmul();

        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_pandas$core$ops$roperator$$$function__4_rdiv();

        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_pandas$core$ops$roperator$$$function__5_rtruediv();

        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_pandas$core$ops$roperator$$$function__6_rfloordiv();

        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_pandas$core$ops$roperator$$$function__7_rmod();

        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_pandas$core$ops$roperator$$$function__8_rdivmod();

        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_pandas$core$ops$roperator$$$function__9_rpow();

        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_pandas$core$ops$roperator$$$function__10_rand_();

        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_pandas$core$ops$roperator$$$function__11_ror_();

        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_pandas$core$ops$roperator$$$function__12_rxor();

        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_16);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pandas.core.ops.roperator", false);

    Py_INCREF(module_pandas$core$ops$roperator);
    return module_pandas$core$ops$roperator;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$roperator, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("pandas$core$ops$roperator", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
