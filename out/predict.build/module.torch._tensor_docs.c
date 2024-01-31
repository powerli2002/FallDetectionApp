/* Generated code for Python module 'torch._tensor_docs'
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

/* The "module_torch$_tensor_docs" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$_tensor_docs;
PyDictObject *moduledict_torch$_tensor_docs;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[575];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[575];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch._tensor_docs"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 575; i++) {
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
void checkModuleConstants_torch$_tensor_docs(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 575; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_869e019e356adbd30c0305fa7a70a5fa;
static PyCodeObject *codeobj_4097c7f0830be19e711e258dd44b9c6e;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[571]); CHECK_OBJECT(module_filename_obj);
    codeobj_869e019e356adbd30c0305fa7a70a5fa = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[572], NULL, NULL, 0, 0, 0);
    codeobj_4097c7f0830be19e711e258dd44b9c6e = MAKE_CODEOBJECT(module_filename_obj, 9, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[573], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torch$_tensor_docs$$$function__1_add_docstr_all();


// The module function definitions.
static PyObject *impl_torch$_tensor_docs$$$function__1_add_docstr_all(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_method = python_pars[0];
    PyObject *par_docstr = python_pars[1];
    struct Nuitka_FrameObject *frame_4097c7f0830be19e711e258dd44b9c6e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4097c7f0830be19e711e258dd44b9c6e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4097c7f0830be19e711e258dd44b9c6e)) {
        Py_XDECREF(cache_frame_4097c7f0830be19e711e258dd44b9c6e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4097c7f0830be19e711e258dd44b9c6e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4097c7f0830be19e711e258dd44b9c6e = MAKE_FUNCTION_FRAME(codeobj_4097c7f0830be19e711e258dd44b9c6e, module_torch$_tensor_docs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4097c7f0830be19e711e258dd44b9c6e->m_type_description == NULL);
    frame_4097c7f0830be19e711e258dd44b9c6e = cache_frame_4097c7f0830be19e711e258dd44b9c6e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4097c7f0830be19e711e258dd44b9c6e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4097c7f0830be19e711e258dd44b9c6e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_method);
        tmp_getattr_attr_1 = par_method;
        tmp_args_element_value_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        Py_DECREF(tmp_getattr_target_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_docstr);
        tmp_args_element_value_2 = par_docstr;
        frame_4097c7f0830be19e711e258dd44b9c6e->m_frame.f_lineno = 10;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4097c7f0830be19e711e258dd44b9c6e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4097c7f0830be19e711e258dd44b9c6e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4097c7f0830be19e711e258dd44b9c6e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4097c7f0830be19e711e258dd44b9c6e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4097c7f0830be19e711e258dd44b9c6e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4097c7f0830be19e711e258dd44b9c6e,
        type_description_1,
        par_method,
        par_docstr
    );


    // Release cached frame if used for exception.
    if (frame_4097c7f0830be19e711e258dd44b9c6e == cache_frame_4097c7f0830be19e711e258dd44b9c6e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4097c7f0830be19e711e258dd44b9c6e);
        cache_frame_4097c7f0830be19e711e258dd44b9c6e = NULL;
    }

    assertFrameObject(frame_4097c7f0830be19e711e258dd44b9c6e);

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
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_docstr);
    Py_DECREF(par_docstr);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_docstr);
    Py_DECREF(par_docstr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$_tensor_docs$$$function__1_add_docstr_all() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_tensor_docs$$$function__1_add_docstr_all,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4097c7f0830be19e711e258dd44b9c6e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_tensor_docs,
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

function_impl_code functable_torch$_tensor_docs[] = {
    impl_torch$_tensor_docs$$$function__1_add_docstr_all,
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

    function_impl_code *current = functable_torch$_tensor_docs;
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

    if (offset > sizeof(functable_torch$_tensor_docs) || offset < 0) {
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
        functable_torch$_tensor_docs[offset],
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
        module_torch$_tensor_docs,
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
PyObject *modulecode_torch$_tensor_docs(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch._tensor_docs");

    // Store the module for future use.
    module_torch$_tensor_docs = module;

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
        PRINT_STRING("torch._tensor_docs: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch._tensor_docs: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch._tensor_docs: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$_tensor_docs\n");

    moduledict_torch$_tensor_docs = MODULE_DICT(module_torch$_tensor_docs);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$_tensor_docs,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$_tensor_docs,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[574]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$_tensor_docs,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$_tensor_docs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$_tensor_docs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$_tensor_docs);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$_tensor_docs);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_869e019e356adbd30c0305fa7a70a5fa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[4];
        UPDATE_STRING_DICT0(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_869e019e356adbd30c0305fa7a70a5fa = MAKE_MODULE_FRAME(codeobj_869e019e356adbd30c0305fa7a70a5fa, module_torch$_tensor_docs);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_869e019e356adbd30c0305fa7a70a5fa);
    assert(Py_REFCNT(frame_869e019e356adbd30c0305fa7a70a5fa) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[8], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[9], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[11];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$_tensor_docs;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[12];
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[11];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$_tensor_docs;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[13];
        tmp_level_value_2 = mod_consts[12];
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$_tensor_docs,
                mod_consts[14],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[15];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$_tensor_docs;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[16];
        tmp_level_value_3 = mod_consts[17];
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 5;
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
                (PyObject *)moduledict_torch$_tensor_docs,
                mod_consts[18],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[18]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[15];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torch$_tensor_docs;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[19];
        tmp_level_value_4 = mod_consts[17];
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 6;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torch$_tensor_docs,
                mod_consts[20],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[20]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_torch$_tensor_docs$$$function__1_add_docstr_all();

        UPDATE_STRING_DICT1(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 12;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[22]);

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 17;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[24]);

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_10);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[26];
        tmp_expression_value_1 = mod_consts[27];
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[28]);
        assert(!(tmp_dircall_arg1_1 == NULL));
        tmp_dircall_arg2_1 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_dircall_arg2_1 == NULL)) {
            tmp_dircall_arg2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        assert(!(tmp_dircall_arg2_1 == NULL));
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_args_element_value_2 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 30;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg2_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[29];
        tmp_expression_value_2 = mod_consts[30];
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[28]);
        assert(!(tmp_dircall_arg1_2 == NULL));
        tmp_dircall_arg2_2 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_dircall_arg2_2 == NULL)) {
            tmp_dircall_arg2_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_dircall_arg2_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_2);

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg2_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_args_element_value_4 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_dircall_arg1_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dircall_arg2_3;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[31];
        tmp_expression_value_3 = mod_consts[32];
        tmp_dircall_arg1_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[28]);
        assert(!(tmp_dircall_arg1_3 == NULL));
        tmp_dircall_arg2_3 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_dircall_arg2_3 == NULL)) {
            tmp_dircall_arg2_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_dircall_arg2_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_3);

            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg2_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3};
            tmp_args_element_value_6 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_dircall_arg1_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_dircall_arg2_4;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[33];
        tmp_expression_value_4 = mod_consts[34];
        tmp_dircall_arg1_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[28]);
        assert(!(tmp_dircall_arg1_4 == NULL));
        tmp_dircall_arg2_4 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_dircall_arg2_4 == NULL)) {
            tmp_dircall_arg2_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_dircall_arg2_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_4);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg2_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4, tmp_dircall_arg2_4};
            tmp_args_element_value_8 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_dircall_arg1_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_dircall_arg2_5;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = mod_consts[35];
        tmp_expression_value_5 = mod_consts[36];
        tmp_dircall_arg1_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[28]);
        assert(!(tmp_dircall_arg1_5 == NULL));
        tmp_dircall_arg2_5 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_dircall_arg2_5 == NULL)) {
            tmp_dircall_arg2_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_dircall_arg2_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_5);

            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg2_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5, tmp_dircall_arg2_5};
            tmp_args_element_value_10 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 137;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_dircall_arg1_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_dircall_arg2_6;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = mod_consts[37];
        tmp_expression_value_6 = mod_consts[38];
        tmp_dircall_arg1_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[28]);
        assert(!(tmp_dircall_arg1_6 == NULL));
        tmp_dircall_arg2_6 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_dircall_arg2_6 == NULL)) {
            tmp_dircall_arg2_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_dircall_arg2_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_6);

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg2_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6, tmp_dircall_arg2_6};
            tmp_args_element_value_12 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 161;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_7;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 185;
        tmp_call_result_7 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_9, mod_consts[39]);

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_8;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 192;
        tmp_call_result_8 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_10, mod_consts[40]);

        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_call_result_9;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 199;
        tmp_call_result_9 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_11, mod_consts[41]);

        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_call_result_10;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 206;
        tmp_call_result_10 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_12, mod_consts[42]);

        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_call_result_11;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 214;
        tmp_call_result_11 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_13, mod_consts[43]);

        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_call_result_12;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 221;
        tmp_call_result_12 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_14, mod_consts[44]);

        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_call_result_13;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 228;
        tmp_call_result_13 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_15, mod_consts[45]);

        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_call_result_14;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 234;
        tmp_call_result_14 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_16, mod_consts[46]);

        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_call_result_15;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 240;
        tmp_call_result_15 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_17, mod_consts[47]);

        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_call_result_16;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 247;
        tmp_call_result_16 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_18, mod_consts[48]);

        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_call_result_17;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 254;
        tmp_call_result_17 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_19, mod_consts[49]);

        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_call_result_18;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 260;
        tmp_call_result_18 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_20, mod_consts[50]);

        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_call_result_19;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 266;
        tmp_call_result_19 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_21, mod_consts[51]);

        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_call_result_20;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 281;
        tmp_call_result_20 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_22, mod_consts[52]);

        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_call_result_21;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 288;
        tmp_call_result_21 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_23, mod_consts[53]);

        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_call_result_22;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 295;
        tmp_call_result_22 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_24, mod_consts[54]);

        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_call_result_23;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 302;
        tmp_call_result_23 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_25, mod_consts[55]);

        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_call_result_24;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 309;
        tmp_call_result_24 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_26, mod_consts[56]);

        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_call_result_25;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 316;
        tmp_call_result_25 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_27, mod_consts[57]);

        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_call_result_26;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 323;
        tmp_call_result_26 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_28, mod_consts[58]);

        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_call_result_27;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 330;
        tmp_call_result_27 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_29, mod_consts[59]);

        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_call_result_28;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 337;
        tmp_call_result_28 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_30, mod_consts[60]);

        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_call_result_29;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 344;
        tmp_call_result_29 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_31, mod_consts[61]);

        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_call_result_30;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 351;
        tmp_call_result_30 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_32, mod_consts[62]);

        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_call_result_31;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 358;
        tmp_call_result_31 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_33, mod_consts[63]);

        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_call_result_32;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 365;
        tmp_call_result_32 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_34, mod_consts[64]);

        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_call_result_33;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 372;
        tmp_call_result_33 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_35, mod_consts[65]);

        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        PyObject *tmp_called_value_36;
        PyObject *tmp_call_result_34;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 379;
        tmp_call_result_34 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_36, mod_consts[66]);

        if (tmp_call_result_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_34);
    }
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_call_result_35;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 386;
        tmp_call_result_35 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_37, mod_consts[67]);

        if (tmp_call_result_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_called_value_38;
        PyObject *tmp_call_result_36;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 433;
        tmp_call_result_36 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_38, mod_consts[68]);

        if (tmp_call_result_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        PyObject *tmp_called_value_39;
        PyObject *tmp_call_result_37;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 440;
        tmp_call_result_37 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_39, mod_consts[69]);

        if (tmp_call_result_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_call_result_38;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 447;
        tmp_call_result_38 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_40, mod_consts[70]);

        if (tmp_call_result_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_38);
    }
    {
        PyObject *tmp_called_value_41;
        PyObject *tmp_call_result_39;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 454;
        tmp_call_result_39 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_41, mod_consts[71]);

        if (tmp_call_result_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_39);
    }
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_call_result_40;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 461;
        tmp_call_result_40 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_42, mod_consts[72]);

        if (tmp_call_result_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_40);
    }
    {
        PyObject *tmp_called_value_43;
        PyObject *tmp_call_result_41;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 474;
        tmp_call_result_41 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_43, mod_consts[73]);

        if (tmp_call_result_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_41);
    }
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_call_result_42;
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 480;
        tmp_call_result_42 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_44, mod_consts[74]);

        if (tmp_call_result_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_42);
    }
    {
        PyObject *tmp_called_value_45;
        PyObject *tmp_call_result_43;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 487;
        tmp_call_result_43 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_45, mod_consts[75]);

        if (tmp_call_result_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_43);
    }
    {
        PyObject *tmp_called_value_46;
        PyObject *tmp_call_result_44;
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 493;
        tmp_call_result_44 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_46, mod_consts[76]);

        if (tmp_call_result_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_44);
    }
    {
        PyObject *tmp_called_value_47;
        PyObject *tmp_call_result_45;
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 499;
        tmp_call_result_45 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_47, mod_consts[77]);

        if (tmp_call_result_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_45);
    }
    {
        PyObject *tmp_called_value_48;
        PyObject *tmp_call_result_46;
        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_48 == NULL)) {
            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 505;
        tmp_call_result_46 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_48, mod_consts[78]);

        if (tmp_call_result_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_46);
    }
    {
        PyObject *tmp_called_value_49;
        PyObject *tmp_call_result_47;
        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_49 == NULL)) {
            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 512;
        tmp_call_result_47 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_49, mod_consts[79]);

        if (tmp_call_result_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_47);
    }
    {
        PyObject *tmp_called_value_50;
        PyObject *tmp_call_result_48;
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 518;
        tmp_call_result_48 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_50, mod_consts[80]);

        if (tmp_call_result_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_48);
    }
    {
        PyObject *tmp_called_value_51;
        PyObject *tmp_call_result_49;
        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_51 == NULL)) {
            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 524;
        tmp_call_result_49 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_51, mod_consts[81]);

        if (tmp_call_result_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_49);
    }
    {
        PyObject *tmp_called_value_52;
        PyObject *tmp_call_result_50;
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 530;
        tmp_call_result_50 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_52, mod_consts[82]);

        if (tmp_call_result_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_50);
    }
    {
        PyObject *tmp_called_value_53;
        PyObject *tmp_call_result_51;
        tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_53 == NULL)) {
            tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 536;
        tmp_call_result_51 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_53, mod_consts[83]);

        if (tmp_call_result_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_51);
    }
    {
        PyObject *tmp_called_value_54;
        PyObject *tmp_call_result_52;
        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_54 == NULL)) {
            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 542;
        tmp_call_result_52 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_54, mod_consts[84]);

        if (tmp_call_result_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_52);
    }
    {
        PyObject *tmp_called_value_55;
        PyObject *tmp_call_result_53;
        tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_55 == NULL)) {
            tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 548;
        tmp_call_result_53 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_55, mod_consts[85]);

        if (tmp_call_result_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_53);
    }
    {
        PyObject *tmp_called_value_56;
        PyObject *tmp_call_result_54;
        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_56 == NULL)) {
            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 554;
        tmp_call_result_54 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_56, mod_consts[86]);

        if (tmp_call_result_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_54);
    }
    {
        PyObject *tmp_called_value_57;
        PyObject *tmp_call_result_55;
        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_57 == NULL)) {
            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 560;
        tmp_call_result_55 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_57, mod_consts[87]);

        if (tmp_call_result_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_55);
    }
    {
        PyObject *tmp_called_value_58;
        PyObject *tmp_call_result_56;
        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_58 == NULL)) {
            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 566;
        tmp_call_result_56 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_58, mod_consts[88]);

        if (tmp_call_result_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_56);
    }
    {
        PyObject *tmp_called_value_59;
        PyObject *tmp_call_result_57;
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 572;
        tmp_call_result_57 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_59, mod_consts[89]);

        if (tmp_call_result_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_57);
    }
    {
        PyObject *tmp_called_value_60;
        PyObject *tmp_call_result_58;
        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_60 == NULL)) {
            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 578;
        tmp_call_result_58 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_60, mod_consts[90]);

        if (tmp_call_result_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_58);
    }
    {
        PyObject *tmp_called_value_61;
        PyObject *tmp_call_result_59;
        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_61 == NULL)) {
            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 584;
        tmp_call_result_59 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_61, mod_consts[91]);

        if (tmp_call_result_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_59);
    }
    {
        PyObject *tmp_called_value_62;
        PyObject *tmp_call_result_60;
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 590;
        tmp_call_result_60 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_62, mod_consts[92]);

        if (tmp_call_result_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_60);
    }
    {
        PyObject *tmp_called_value_63;
        PyObject *tmp_call_result_61;
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 597;
        tmp_call_result_61 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_63, mod_consts[93]);

        if (tmp_call_result_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_61);
    }
    {
        PyObject *tmp_called_value_64;
        PyObject *tmp_call_result_62;
        tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_64 == NULL)) {
            tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 604;
        tmp_call_result_62 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_64, mod_consts[94]);

        if (tmp_call_result_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_62);
    }
    {
        PyObject *tmp_called_value_65;
        PyObject *tmp_call_result_63;
        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_65 == NULL)) {
            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 615;
        tmp_call_result_63 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_65, mod_consts[95]);

        if (tmp_call_result_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_63);
    }
    {
        PyObject *tmp_called_value_66;
        PyObject *tmp_call_result_64;
        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_66 == NULL)) {
            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 634;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 634;
        tmp_call_result_64 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_66, mod_consts[96]);

        if (tmp_call_result_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 634;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_64);
    }
    {
        PyObject *tmp_called_value_67;
        PyObject *tmp_call_result_65;
        tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_67 == NULL)) {
            tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 641;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 641;
        tmp_call_result_65 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_67, mod_consts[97]);

        if (tmp_call_result_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 641;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_65);
    }
    {
        PyObject *tmp_called_value_68;
        PyObject *tmp_call_result_66;
        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_68 == NULL)) {
            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 648;
        tmp_call_result_66 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_68, mod_consts[98]);

        if (tmp_call_result_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_66);
    }
    {
        PyObject *tmp_called_value_69;
        PyObject *tmp_call_result_67;
        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_69 == NULL)) {
            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 655;
        tmp_call_result_67 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_69, mod_consts[99]);

        if (tmp_call_result_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_67);
    }
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_call_result_68;
        tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_70 == NULL)) {
            tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 662;
        tmp_call_result_68 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_70, mod_consts[100]);

        if (tmp_call_result_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_68);
    }
    {
        PyObject *tmp_called_value_71;
        PyObject *tmp_call_result_69;
        tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_71 == NULL)) {
            tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 669;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 669;
        tmp_call_result_69 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_71, mod_consts[101]);

        if (tmp_call_result_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 669;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_69);
    }
    {
        PyObject *tmp_called_value_72;
        PyObject *tmp_call_result_70;
        tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_72 == NULL)) {
            tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 676;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 676;
        tmp_call_result_70 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_72, mod_consts[102]);

        if (tmp_call_result_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 676;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_70);
    }
    {
        PyObject *tmp_called_value_73;
        PyObject *tmp_call_result_71;
        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_73 == NULL)) {
            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 683;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 683;
        tmp_call_result_71 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_73, mod_consts[103]);

        if (tmp_call_result_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 683;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_71);
    }
    {
        PyObject *tmp_called_value_74;
        PyObject *tmp_call_result_72;
        tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_74 == NULL)) {
            tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 690;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 690;
        tmp_call_result_72 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_74, mod_consts[104]);

        if (tmp_call_result_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 690;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_72);
    }
    {
        PyObject *tmp_called_value_75;
        PyObject *tmp_call_result_73;
        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_75 == NULL)) {
            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 697;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 697;
        tmp_call_result_73 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_75, mod_consts[105]);

        if (tmp_call_result_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 697;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_73);
    }
    {
        PyObject *tmp_called_value_76;
        PyObject *tmp_call_result_74;
        tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_76 == NULL)) {
            tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 704;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 704;
        tmp_call_result_74 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_76, mod_consts[106]);

        if (tmp_call_result_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 704;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_74);
    }
    {
        PyObject *tmp_called_value_77;
        PyObject *tmp_call_result_75;
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 711;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 711;
        tmp_call_result_75 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_77, mod_consts[107]);

        if (tmp_call_result_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 711;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_75);
    }
    {
        PyObject *tmp_called_value_78;
        PyObject *tmp_call_result_76;
        tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_78 == NULL)) {
            tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 718;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 718;
        tmp_call_result_76 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_78, mod_consts[108]);

        if (tmp_call_result_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 718;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_76);
    }
    {
        PyObject *tmp_called_value_79;
        PyObject *tmp_call_result_77;
        tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_79 == NULL)) {
            tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 725;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 725;
        tmp_call_result_77 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_79, mod_consts[109]);

        if (tmp_call_result_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 725;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_77);
    }
    {
        PyObject *tmp_called_value_80;
        PyObject *tmp_call_result_78;
        tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_80 == NULL)) {
            tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 732;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 732;
        tmp_call_result_78 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_80, mod_consts[110]);

        if (tmp_call_result_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 732;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_78);
    }
    {
        PyObject *tmp_called_value_81;
        PyObject *tmp_call_result_79;
        tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_81 == NULL)) {
            tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 739;
        tmp_call_result_79 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_81, mod_consts[111]);

        if (tmp_call_result_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_79);
    }
    {
        PyObject *tmp_called_value_82;
        PyObject *tmp_call_result_80;
        tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_82 == NULL)) {
            tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 746;
        tmp_call_result_80 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_82, mod_consts[112]);

        if (tmp_call_result_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_80);
    }
    {
        PyObject *tmp_called_value_83;
        PyObject *tmp_call_result_81;
        tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_83 == NULL)) {
            tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 753;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 753;
        tmp_call_result_81 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_83, mod_consts[113]);

        if (tmp_call_result_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 753;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_81);
    }
    {
        PyObject *tmp_called_value_84;
        PyObject *tmp_call_result_82;
        tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_84 == NULL)) {
            tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 760;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 760;
        tmp_call_result_82 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_84, mod_consts[114]);

        if (tmp_call_result_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 760;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_82);
    }
    {
        PyObject *tmp_called_value_85;
        PyObject *tmp_call_result_83;
        tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_85 == NULL)) {
            tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 767;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 767;
        tmp_call_result_83 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_85, mod_consts[115]);

        if (tmp_call_result_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 767;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_83);
    }
    {
        PyObject *tmp_called_value_86;
        PyObject *tmp_call_result_84;
        tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_86 == NULL)) {
            tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 774;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 774;
        tmp_call_result_84 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_86, mod_consts[116]);

        if (tmp_call_result_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 774;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_84);
    }
    {
        PyObject *tmp_called_value_87;
        PyObject *tmp_call_result_85;
        tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_87 == NULL)) {
            tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 781;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 781;
        tmp_call_result_85 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_87, mod_consts[117]);

        if (tmp_call_result_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 781;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_85);
    }
    {
        PyObject *tmp_called_value_88;
        PyObject *tmp_call_result_86;
        tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_88 == NULL)) {
            tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 788;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 788;
        tmp_call_result_86 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_88, mod_consts[118]);

        if (tmp_call_result_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 788;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_86);
    }
    {
        PyObject *tmp_called_value_89;
        PyObject *tmp_call_result_87;
        tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_89 == NULL)) {
            tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 795;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 795;
        tmp_call_result_87 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_89, mod_consts[119]);

        if (tmp_call_result_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 795;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_87);
    }
    {
        PyObject *tmp_called_value_90;
        PyObject *tmp_call_result_88;
        tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_90 == NULL)) {
            tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 806;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 806;
        tmp_call_result_88 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_90, mod_consts[120]);

        if (tmp_call_result_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 806;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_88);
    }
    {
        PyObject *tmp_called_value_91;
        PyObject *tmp_call_result_89;
        tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_91 == NULL)) {
            tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 813;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 813;
        tmp_call_result_89 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_91, mod_consts[121]);

        if (tmp_call_result_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 813;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_89);
    }
    {
        PyObject *tmp_called_value_92;
        PyObject *tmp_call_result_90;
        tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_92 == NULL)) {
            tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 820;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 820;
        tmp_call_result_90 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_92, mod_consts[122]);

        if (tmp_call_result_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 820;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_90);
    }
    {
        PyObject *tmp_called_value_93;
        PyObject *tmp_call_result_91;
        tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_93 == NULL)) {
            tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 827;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 827;
        tmp_call_result_91 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_93, mod_consts[123]);

        if (tmp_call_result_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 827;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_91);
    }
    {
        PyObject *tmp_called_value_94;
        PyObject *tmp_call_result_92;
        tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_94 == NULL)) {
            tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 834;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 834;
        tmp_call_result_92 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_94, mod_consts[124]);

        if (tmp_call_result_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 834;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_92);
    }
    {
        PyObject *tmp_called_value_95;
        PyObject *tmp_call_result_93;
        tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_95 == NULL)) {
            tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 841;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 841;
        tmp_call_result_93 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_95, mod_consts[125]);

        if (tmp_call_result_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 841;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_93);
    }
    {
        PyObject *tmp_called_value_96;
        PyObject *tmp_call_result_94;
        tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_96 == NULL)) {
            tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 848;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 848;
        tmp_call_result_94 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_96, mod_consts[126]);

        if (tmp_call_result_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 848;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_94);
    }
    {
        PyObject *tmp_called_value_97;
        PyObject *tmp_call_result_95;
        tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_97 == NULL)) {
            tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 855;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 855;
        tmp_call_result_95 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_97, mod_consts[127]);

        if (tmp_call_result_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 855;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_95);
    }
    {
        PyObject *tmp_called_value_98;
        PyObject *tmp_call_result_96;
        tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_98 == NULL)) {
            tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 861;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 861;
        tmp_call_result_96 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_98, mod_consts[128]);

        if (tmp_call_result_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 861;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_96);
    }
    {
        PyObject *tmp_called_value_99;
        PyObject *tmp_call_result_97;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_dircall_arg1_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_dircall_arg2_7;
        tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_99 == NULL)) {
            tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 867;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[129];
        tmp_expression_value_7 = mod_consts[130];
        tmp_dircall_arg1_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[28]);
        assert(!(tmp_dircall_arg1_7 == NULL));
        tmp_dircall_arg2_7 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_dircall_arg2_7 == NULL)) {
            tmp_dircall_arg2_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_dircall_arg2_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_7);

            exception_lineno = 871;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg2_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7, tmp_dircall_arg2_7};
            tmp_args_element_value_14 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 867;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 867;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_97 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_99, call_args);
        }

        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 867;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_97);
    }
    {
        PyObject *tmp_called_value_100;
        PyObject *tmp_call_result_98;
        tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_100 == NULL)) {
            tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 873;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 873;
        tmp_call_result_98 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_100, mod_consts[131]);

        if (tmp_call_result_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 873;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_98);
    }
    {
        PyObject *tmp_called_value_101;
        PyObject *tmp_call_result_99;
        tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_101 == NULL)) {
            tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 886;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 886;
        tmp_call_result_99 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_101, mod_consts[132]);

        if (tmp_call_result_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 886;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_99);
    }
    {
        PyObject *tmp_called_value_102;
        PyObject *tmp_call_result_100;
        tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_102 == NULL)) {
            tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 899;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 899;
        tmp_call_result_100 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_102, mod_consts[133]);

        if (tmp_call_result_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 899;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_100);
    }
    {
        PyObject *tmp_called_value_103;
        PyObject *tmp_call_result_101;
        tmp_called_value_103 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_103 == NULL)) {
            tmp_called_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 917;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 917;
        tmp_call_result_101 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_103, mod_consts[134]);

        if (tmp_call_result_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 917;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_101);
    }
    {
        PyObject *tmp_called_value_104;
        PyObject *tmp_call_result_102;
        tmp_called_value_104 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_104 == NULL)) {
            tmp_called_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 924;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 924;
        tmp_call_result_102 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_104, mod_consts[135]);

        if (tmp_call_result_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 924;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_102);
    }
    {
        PyObject *tmp_called_value_105;
        PyObject *tmp_call_result_103;
        tmp_called_value_105 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_105 == NULL)) {
            tmp_called_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 931;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 931;
        tmp_call_result_103 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_105, mod_consts[136]);

        if (tmp_call_result_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 931;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_103);
    }
    {
        PyObject *tmp_called_value_106;
        PyObject *tmp_call_result_104;
        tmp_called_value_106 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_106 == NULL)) {
            tmp_called_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 938;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 938;
        tmp_call_result_104 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_106, mod_consts[137]);

        if (tmp_call_result_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 938;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_104);
    }
    {
        PyObject *tmp_called_value_107;
        PyObject *tmp_call_result_105;
        tmp_called_value_107 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_107 == NULL)) {
            tmp_called_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 945;
        tmp_call_result_105 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_107, mod_consts[138]);

        if (tmp_call_result_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_105);
    }
    {
        PyObject *tmp_called_value_108;
        PyObject *tmp_call_result_106;
        tmp_called_value_108 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_108 == NULL)) {
            tmp_called_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 952;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 952;
        tmp_call_result_106 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_108, mod_consts[139]);

        if (tmp_call_result_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 952;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_106);
    }
    {
        PyObject *tmp_called_value_109;
        PyObject *tmp_call_result_107;
        tmp_called_value_109 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_109 == NULL)) {
            tmp_called_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 959;
        tmp_call_result_107 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_109, mod_consts[140]);

        if (tmp_call_result_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 959;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_107);
    }
    {
        PyObject *tmp_called_value_110;
        PyObject *tmp_call_result_108;
        tmp_called_value_110 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_110 == NULL)) {
            tmp_called_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 965;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 965;
        tmp_call_result_108 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_110, mod_consts[141]);

        if (tmp_call_result_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 965;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_108);
    }
    {
        PyObject *tmp_called_value_111;
        PyObject *tmp_call_result_109;
        tmp_called_value_111 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_111 == NULL)) {
            tmp_called_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 972;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 972;
        tmp_call_result_109 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_111, mod_consts[142]);

        if (tmp_call_result_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 972;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_109);
    }
    {
        PyObject *tmp_called_value_112;
        PyObject *tmp_call_result_110;
        tmp_called_value_112 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_112 == NULL)) {
            tmp_called_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 979;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 979;
        tmp_call_result_110 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_112, mod_consts[143]);

        if (tmp_call_result_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 979;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_110);
    }
    {
        PyObject *tmp_called_value_113;
        PyObject *tmp_call_result_111;
        tmp_called_value_113 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_113 == NULL)) {
            tmp_called_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 986;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 986;
        tmp_call_result_111 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_113, mod_consts[144]);

        if (tmp_call_result_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 986;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_111);
    }
    {
        PyObject *tmp_called_value_114;
        PyObject *tmp_call_result_112;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_dircall_arg1_8;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_dircall_arg2_8;
        tmp_called_value_114 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_114 == NULL)) {
            tmp_called_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 993;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = mod_consts[145];
        tmp_expression_value_8 = mod_consts[146];
        tmp_dircall_arg1_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[28]);
        assert(!(tmp_dircall_arg1_8 == NULL));
        tmp_dircall_arg2_8 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_dircall_arg2_8 == NULL)) {
            tmp_dircall_arg2_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_dircall_arg2_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_8);

            exception_lineno = 1005;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg2_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8, tmp_dircall_arg2_8};
            tmp_args_element_value_16 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 994;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 993;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_112 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_114, call_args);
        }

        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 993;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_112);
    }
    {
        PyObject *tmp_called_value_115;
        PyObject *tmp_call_result_113;
        tmp_called_value_115 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_115 == NULL)) {
            tmp_called_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1007;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1007;
        tmp_call_result_113 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_115, mod_consts[147]);

        if (tmp_call_result_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1007;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_113);
    }
    {
        PyObject *tmp_called_value_116;
        PyObject *tmp_call_result_114;
        tmp_called_value_116 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_116 == NULL)) {
            tmp_called_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1014;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1014;
        tmp_call_result_114 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_116, mod_consts[148]);

        if (tmp_call_result_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1014;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_114);
    }
    {
        PyObject *tmp_called_value_117;
        PyObject *tmp_call_result_115;
        tmp_called_value_117 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_117 == NULL)) {
            tmp_called_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1020;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1020;
        tmp_call_result_115 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_117, mod_consts[149]);

        if (tmp_call_result_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1020;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_115);
    }
    {
        PyObject *tmp_called_value_118;
        PyObject *tmp_call_result_116;
        tmp_called_value_118 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_118 == NULL)) {
            tmp_called_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1026;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1026;
        tmp_call_result_116 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_118, mod_consts[150]);

        if (tmp_call_result_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1026;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_116);
    }
    {
        PyObject *tmp_called_value_119;
        PyObject *tmp_call_result_117;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_dircall_arg1_9;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_dircall_arg2_9;
        tmp_called_value_119 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_119 == NULL)) {
            tmp_called_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1033;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = mod_consts[151];
        tmp_expression_value_9 = mod_consts[152];
        tmp_dircall_arg1_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[28]);
        assert(!(tmp_dircall_arg1_9 == NULL));
        tmp_dircall_arg2_9 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_dircall_arg2_9 == NULL)) {
            tmp_dircall_arg2_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_dircall_arg2_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_9);

            exception_lineno = 1049;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg2_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9, tmp_dircall_arg2_9};
            tmp_args_element_value_18 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1034;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1033;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_call_result_117 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_119, call_args);
        }

        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1033;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_117);
    }
    {
        PyObject *tmp_called_value_120;
        PyObject *tmp_call_result_118;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_dircall_arg1_10;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_dircall_arg2_10;
        tmp_called_value_120 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_120 == NULL)) {
            tmp_called_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1051;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = mod_consts[153];
        tmp_expression_value_10 = mod_consts[154];
        tmp_dircall_arg1_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[28]);
        assert(!(tmp_dircall_arg1_10 == NULL));
        tmp_dircall_arg2_10 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_dircall_arg2_10 == NULL)) {
            tmp_dircall_arg2_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_dircall_arg2_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_10);

            exception_lineno = 1067;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg2_10);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_10, tmp_dircall_arg2_10};
            tmp_args_element_value_20 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1052;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1051;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_call_result_118 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_120, call_args);
        }

        Py_DECREF(tmp_args_element_value_20);
        if (tmp_call_result_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1051;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_118);
    }
    {
        PyObject *tmp_called_value_121;
        PyObject *tmp_call_result_119;
        tmp_called_value_121 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_121 == NULL)) {
            tmp_called_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1069;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1069;
        tmp_call_result_119 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_121, mod_consts[155]);

        if (tmp_call_result_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1069;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_119);
    }
    {
        PyObject *tmp_called_value_122;
        PyObject *tmp_call_result_120;
        tmp_called_value_122 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_122 == NULL)) {
            tmp_called_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1076;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1076;
        tmp_call_result_120 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_122, mod_consts[156]);

        if (tmp_call_result_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1076;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_120);
    }
    {
        PyObject *tmp_called_value_123;
        PyObject *tmp_call_result_121;
        tmp_called_value_123 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_123 == NULL)) {
            tmp_called_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1083;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1083;
        tmp_call_result_121 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_123, mod_consts[157]);

        if (tmp_call_result_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1083;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_121);
    }
    {
        PyObject *tmp_called_value_124;
        PyObject *tmp_call_result_122;
        tmp_called_value_124 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_124 == NULL)) {
            tmp_called_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1090;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1090;
        tmp_call_result_122 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_124, mod_consts[158]);

        if (tmp_call_result_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1090;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_122);
    }
    {
        PyObject *tmp_called_value_125;
        PyObject *tmp_call_result_123;
        tmp_called_value_125 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_125 == NULL)) {
            tmp_called_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1097;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1097;
        tmp_call_result_123 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_125, mod_consts[159]);

        if (tmp_call_result_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1097;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_123);
    }
    {
        PyObject *tmp_called_value_126;
        PyObject *tmp_call_result_124;
        tmp_called_value_126 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_126 == NULL)) {
            tmp_called_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1104;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1104;
        tmp_call_result_124 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_126, mod_consts[160]);

        if (tmp_call_result_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1104;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_124);
    }
    {
        PyObject *tmp_called_value_127;
        PyObject *tmp_call_result_125;
        tmp_called_value_127 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_127 == NULL)) {
            tmp_called_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1111;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1111;
        tmp_call_result_125 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_127, mod_consts[161]);

        if (tmp_call_result_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1111;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_125);
    }
    {
        PyObject *tmp_called_value_128;
        PyObject *tmp_call_result_126;
        tmp_called_value_128 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_128 == NULL)) {
            tmp_called_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1118;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1118;
        tmp_call_result_126 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_128, mod_consts[162]);

        if (tmp_call_result_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1118;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_126);
    }
    {
        PyObject *tmp_called_value_129;
        PyObject *tmp_call_result_127;
        tmp_called_value_129 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_129 == NULL)) {
            tmp_called_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1125;
        tmp_call_result_127 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_129, mod_consts[163]);

        if (tmp_call_result_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1125;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_127);
    }
    {
        PyObject *tmp_called_value_130;
        PyObject *tmp_call_result_128;
        tmp_called_value_130 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_130 == NULL)) {
            tmp_called_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1132;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1132;
        tmp_call_result_128 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_130, mod_consts[164]);

        if (tmp_call_result_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1132;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_128);
    }
    {
        PyObject *tmp_called_value_131;
        PyObject *tmp_call_result_129;
        tmp_called_value_131 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_131 == NULL)) {
            tmp_called_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1144;
        tmp_call_result_129 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_131, mod_consts[165]);

        if (tmp_call_result_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1144;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_129);
    }
    {
        PyObject *tmp_called_value_132;
        PyObject *tmp_call_result_130;
        tmp_called_value_132 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_132 == NULL)) {
            tmp_called_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1151;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1151;
        tmp_call_result_130 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_132, mod_consts[166]);

        if (tmp_call_result_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1151;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_130);
    }
    {
        PyObject *tmp_called_value_133;
        PyObject *tmp_call_result_131;
        tmp_called_value_133 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_133 == NULL)) {
            tmp_called_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1158;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1158;
        tmp_call_result_131 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_133, mod_consts[167]);

        if (tmp_call_result_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1158;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_131);
    }
    {
        PyObject *tmp_called_value_134;
        PyObject *tmp_call_result_132;
        tmp_called_value_134 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_134 == NULL)) {
            tmp_called_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1165;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1165;
        tmp_call_result_132 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_134, mod_consts[168]);

        if (tmp_call_result_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1165;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_132);
    }
    {
        PyObject *tmp_called_value_135;
        PyObject *tmp_call_result_133;
        tmp_called_value_135 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_135 == NULL)) {
            tmp_called_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1172;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1172;
        tmp_call_result_133 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_135, mod_consts[169]);

        if (tmp_call_result_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1172;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_133);
    }
    {
        PyObject *tmp_called_value_136;
        PyObject *tmp_call_result_134;
        tmp_called_value_136 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_136 == NULL)) {
            tmp_called_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1212;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1212;
        tmp_call_result_134 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_136, mod_consts[170]);

        if (tmp_call_result_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1212;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_134);
    }
    {
        PyObject *tmp_called_value_137;
        PyObject *tmp_call_result_135;
        tmp_called_value_137 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_137 == NULL)) {
            tmp_called_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1219;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1219;
        tmp_call_result_135 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_137, mod_consts[171]);

        if (tmp_call_result_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1219;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_135);
    }
    {
        PyObject *tmp_called_value_138;
        PyObject *tmp_call_result_136;
        tmp_called_value_138 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_138 == NULL)) {
            tmp_called_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1226;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1226;
        tmp_call_result_136 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_138, mod_consts[172]);

        if (tmp_call_result_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1226;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_136);
    }
    {
        PyObject *tmp_called_value_139;
        PyObject *tmp_call_result_137;
        tmp_called_value_139 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_139 == NULL)) {
            tmp_called_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1233;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1233;
        tmp_call_result_137 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_139, mod_consts[173]);

        if (tmp_call_result_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1233;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_137);
    }
    {
        PyObject *tmp_called_value_140;
        PyObject *tmp_call_result_138;
        tmp_called_value_140 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_140 == NULL)) {
            tmp_called_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1240;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1240;
        tmp_call_result_138 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_140, mod_consts[174]);

        if (tmp_call_result_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1240;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_138);
    }
    {
        PyObject *tmp_called_value_141;
        PyObject *tmp_call_result_139;
        tmp_called_value_141 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_141 == NULL)) {
            tmp_called_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1247;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1247;
        tmp_call_result_139 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_141, mod_consts[175]);

        if (tmp_call_result_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1247;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_139);
    }
    {
        PyObject *tmp_called_value_142;
        PyObject *tmp_call_result_140;
        tmp_called_value_142 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_142 == NULL)) {
            tmp_called_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1254;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1254;
        tmp_call_result_140 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_142, mod_consts[176]);

        if (tmp_call_result_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1254;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_140);
    }
    {
        PyObject *tmp_called_value_143;
        PyObject *tmp_call_result_141;
        tmp_called_value_143 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_143 == NULL)) {
            tmp_called_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1261;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1261;
        tmp_call_result_141 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_143, mod_consts[177]);

        if (tmp_call_result_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1261;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_141);
    }
    {
        PyObject *tmp_called_value_144;
        PyObject *tmp_call_result_142;
        tmp_called_value_144 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_144 == NULL)) {
            tmp_called_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1267;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1267;
        tmp_call_result_142 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_144, mod_consts[178]);

        if (tmp_call_result_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1267;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_142);
    }
    {
        PyObject *tmp_called_value_145;
        PyObject *tmp_call_result_143;
        tmp_called_value_145 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_145 == NULL)) {
            tmp_called_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1273;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1273;
        tmp_call_result_143 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_145, mod_consts[179]);

        if (tmp_call_result_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1273;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_143);
    }
    {
        PyObject *tmp_called_value_146;
        PyObject *tmp_call_result_144;
        tmp_called_value_146 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_146 == NULL)) {
            tmp_called_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1279;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1279;
        tmp_call_result_144 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_146, mod_consts[180]);

        if (tmp_call_result_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1279;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_144);
    }
    {
        PyObject *tmp_called_value_147;
        PyObject *tmp_call_result_145;
        tmp_called_value_147 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_147 == NULL)) {
            tmp_called_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1285;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1285;
        tmp_call_result_145 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_147, mod_consts[181]);

        if (tmp_call_result_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1285;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_145);
    }
    {
        PyObject *tmp_called_value_148;
        PyObject *tmp_call_result_146;
        tmp_called_value_148 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_148 == NULL)) {
            tmp_called_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1292;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1292;
        tmp_call_result_146 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_148, mod_consts[182]);

        if (tmp_call_result_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1292;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_146);
    }
    {
        PyObject *tmp_called_value_149;
        PyObject *tmp_call_result_147;
        tmp_called_value_149 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_149 == NULL)) {
            tmp_called_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1299;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1299;
        tmp_call_result_147 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_149, mod_consts[183]);

        if (tmp_call_result_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1299;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_147);
    }
    {
        PyObject *tmp_called_value_150;
        PyObject *tmp_call_result_148;
        tmp_called_value_150 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_150 == NULL)) {
            tmp_called_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1314;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1314;
        tmp_call_result_148 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_150, mod_consts[184]);

        if (tmp_call_result_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1314;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_148);
    }
    {
        PyObject *tmp_called_value_151;
        PyObject *tmp_call_result_149;
        tmp_called_value_151 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_151 == NULL)) {
            tmp_called_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1321;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1321;
        tmp_call_result_149 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_151, mod_consts[185]);

        if (tmp_call_result_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1321;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_149);
    }
    {
        PyObject *tmp_called_value_152;
        PyObject *tmp_call_result_150;
        tmp_called_value_152 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_152 == NULL)) {
            tmp_called_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1328;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1328;
        tmp_call_result_150 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_152, mod_consts[186]);

        if (tmp_call_result_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1328;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_150);
    }
    {
        PyObject *tmp_called_value_153;
        PyObject *tmp_call_result_151;
        tmp_called_value_153 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_153 == NULL)) {
            tmp_called_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1335;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1335;
        tmp_call_result_151 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_153, mod_consts[187]);

        if (tmp_call_result_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1335;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_151);
    }
    {
        PyObject *tmp_called_value_154;
        PyObject *tmp_call_result_152;
        tmp_called_value_154 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_154 == NULL)) {
            tmp_called_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1342;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1342;
        tmp_call_result_152 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_154, mod_consts[188]);

        if (tmp_call_result_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1342;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_152);
    }
    {
        PyObject *tmp_called_value_155;
        PyObject *tmp_call_result_153;
        tmp_called_value_155 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_155 == NULL)) {
            tmp_called_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1349;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1349;
        tmp_call_result_153 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_155, mod_consts[189]);

        if (tmp_call_result_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1349;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_153);
    }
    {
        PyObject *tmp_called_value_156;
        PyObject *tmp_call_result_154;
        tmp_called_value_156 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_156 == NULL)) {
            tmp_called_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1356;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1356;
        tmp_call_result_154 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_156, mod_consts[190]);

        if (tmp_call_result_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1356;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_154);
    }
    {
        PyObject *tmp_called_value_157;
        PyObject *tmp_call_result_155;
        tmp_called_value_157 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_157 == NULL)) {
            tmp_called_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1363;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1363;
        tmp_call_result_155 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_157, mod_consts[191]);

        if (tmp_call_result_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1363;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_155);
    }
    {
        PyObject *tmp_called_value_158;
        PyObject *tmp_call_result_156;
        tmp_called_value_158 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_158 == NULL)) {
            tmp_called_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1370;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1370;
        tmp_call_result_156 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_158, mod_consts[192]);

        if (tmp_call_result_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1370;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_156);
    }
    {
        PyObject *tmp_called_value_159;
        PyObject *tmp_call_result_157;
        tmp_called_value_159 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_159 == NULL)) {
            tmp_called_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1377;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1377;
        tmp_call_result_157 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_159, mod_consts[193]);

        if (tmp_call_result_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1377;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_157);
    }
    {
        PyObject *tmp_called_value_160;
        PyObject *tmp_call_result_158;
        tmp_called_value_160 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_160 == NULL)) {
            tmp_called_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1384;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1384;
        tmp_call_result_158 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_160, mod_consts[194]);

        if (tmp_call_result_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1384;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_158);
    }
    {
        PyObject *tmp_called_value_161;
        PyObject *tmp_call_result_159;
        tmp_called_value_161 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_161 == NULL)) {
            tmp_called_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1391;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1391;
        tmp_call_result_159 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_161, mod_consts[195]);

        if (tmp_call_result_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1391;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_159);
    }
    {
        PyObject *tmp_called_value_162;
        PyObject *tmp_call_result_160;
        tmp_called_value_162 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_162 == NULL)) {
            tmp_called_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1398;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1398;
        tmp_call_result_160 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_162, mod_consts[196]);

        if (tmp_call_result_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1398;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_160);
    }
    {
        PyObject *tmp_called_value_163;
        PyObject *tmp_call_result_161;
        tmp_called_value_163 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_163 == NULL)) {
            tmp_called_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1405;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1405;
        tmp_call_result_161 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_163, mod_consts[197]);

        if (tmp_call_result_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1405;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_161);
    }
    {
        PyObject *tmp_called_value_164;
        PyObject *tmp_call_result_162;
        tmp_called_value_164 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_164 == NULL)) {
            tmp_called_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1412;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1412;
        tmp_call_result_162 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_164, mod_consts[198]);

        if (tmp_call_result_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1412;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_162);
    }
    {
        PyObject *tmp_called_value_165;
        PyObject *tmp_call_result_163;
        tmp_called_value_165 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_165 == NULL)) {
            tmp_called_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1419;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1419;
        tmp_call_result_163 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_165, mod_consts[199]);

        if (tmp_call_result_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1419;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_163);
    }
    {
        PyObject *tmp_called_value_166;
        PyObject *tmp_call_result_164;
        tmp_called_value_166 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_166 == NULL)) {
            tmp_called_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1430;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1430;
        tmp_call_result_164 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_166, mod_consts[200]);

        if (tmp_call_result_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1430;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_164);
    }
    {
        PyObject *tmp_called_value_167;
        PyObject *tmp_call_result_165;
        tmp_called_value_167 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_167 == NULL)) {
            tmp_called_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1437;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1437;
        tmp_call_result_165 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_167, mod_consts[201]);

        if (tmp_call_result_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1437;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_165);
    }
    {
        PyObject *tmp_called_value_168;
        PyObject *tmp_call_result_166;
        tmp_called_value_168 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_168 == NULL)) {
            tmp_called_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1444;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1444;
        tmp_call_result_166 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_168, mod_consts[202]);

        if (tmp_call_result_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1444;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_166);
    }
    {
        PyObject *tmp_called_value_169;
        PyObject *tmp_call_result_167;
        tmp_called_value_169 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_169 == NULL)) {
            tmp_called_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1451;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1451;
        tmp_call_result_167 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_169, mod_consts[203]);

        if (tmp_call_result_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1451;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_167);
    }
    {
        PyObject *tmp_called_value_170;
        PyObject *tmp_call_result_168;
        tmp_called_value_170 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_170 == NULL)) {
            tmp_called_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1458;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1458;
        tmp_call_result_168 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_170, mod_consts[204]);

        if (tmp_call_result_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1458;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_168);
    }
    {
        PyObject *tmp_called_value_171;
        PyObject *tmp_call_result_169;
        tmp_called_value_171 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_171 == NULL)) {
            tmp_called_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1465;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1465;
        tmp_call_result_169 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_171, mod_consts[205]);

        if (tmp_call_result_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1465;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_169);
    }
    {
        PyObject *tmp_called_value_172;
        PyObject *tmp_call_result_170;
        tmp_called_value_172 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_172 == NULL)) {
            tmp_called_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1472;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1472;
        tmp_call_result_170 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_172, mod_consts[206]);

        if (tmp_call_result_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1472;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_170);
    }
    {
        PyObject *tmp_called_value_173;
        PyObject *tmp_call_result_171;
        tmp_called_value_173 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_173 == NULL)) {
            tmp_called_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1479;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1479;
        tmp_call_result_171 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_173, mod_consts[207]);

        if (tmp_call_result_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1479;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_171);
    }
    {
        PyObject *tmp_called_value_174;
        PyObject *tmp_call_result_172;
        tmp_called_value_174 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_174 == NULL)) {
            tmp_called_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1486;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1486;
        tmp_call_result_172 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_174, mod_consts[208]);

        if (tmp_call_result_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1486;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_172);
    }
    {
        PyObject *tmp_called_value_175;
        PyObject *tmp_call_result_173;
        tmp_called_value_175 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_175 == NULL)) {
            tmp_called_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1493;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1493;
        tmp_call_result_173 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_175, mod_consts[209]);

        if (tmp_call_result_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1493;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_173);
    }
    {
        PyObject *tmp_called_value_176;
        PyObject *tmp_call_result_174;
        tmp_called_value_176 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_176 == NULL)) {
            tmp_called_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1500;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1500;
        tmp_call_result_174 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_176, mod_consts[210]);

        if (tmp_call_result_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1500;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_174);
    }
    {
        PyObject *tmp_called_value_177;
        PyObject *tmp_call_result_175;
        tmp_called_value_177 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_177 == NULL)) {
            tmp_called_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1507;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1507;
        tmp_call_result_175 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_177, mod_consts[211]);

        if (tmp_call_result_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1507;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_175);
    }
    {
        PyObject *tmp_called_value_178;
        PyObject *tmp_call_result_176;
        tmp_called_value_178 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_178 == NULL)) {
            tmp_called_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1514;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1514;
        tmp_call_result_176 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_178, mod_consts[212]);

        if (tmp_call_result_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1514;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_176);
    }
    {
        PyObject *tmp_called_value_179;
        PyObject *tmp_call_result_177;
        tmp_called_value_179 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_179 == NULL)) {
            tmp_called_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1521;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1521;
        tmp_call_result_177 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_179, mod_consts[213]);

        if (tmp_call_result_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1521;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_177);
    }
    {
        PyObject *tmp_called_value_180;
        PyObject *tmp_call_result_178;
        tmp_called_value_180 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_180 == NULL)) {
            tmp_called_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1528;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1528;
        tmp_call_result_178 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_180, mod_consts[214]);

        if (tmp_call_result_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1528;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_178);
    }
    {
        PyObject *tmp_called_value_181;
        PyObject *tmp_call_result_179;
        tmp_called_value_181 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_181 == NULL)) {
            tmp_called_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1535;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1535;
        tmp_call_result_179 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_181, mod_consts[215]);

        if (tmp_call_result_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1535;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_179);
    }
    {
        PyObject *tmp_called_value_182;
        PyObject *tmp_call_result_180;
        tmp_called_value_182 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_182 == NULL)) {
            tmp_called_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1542;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1542;
        tmp_call_result_180 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_182, mod_consts[216]);

        if (tmp_call_result_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1542;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_180);
    }
    {
        PyObject *tmp_called_value_183;
        PyObject *tmp_call_result_181;
        tmp_called_value_183 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_183 == NULL)) {
            tmp_called_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1548;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1548;
        tmp_call_result_181 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_183, mod_consts[217]);

        if (tmp_call_result_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1548;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_181);
    }
    {
        PyObject *tmp_called_value_184;
        PyObject *tmp_call_result_182;
        tmp_called_value_184 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_184 == NULL)) {
            tmp_called_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1554;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1554;
        tmp_call_result_182 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_184, mod_consts[218]);

        if (tmp_call_result_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1554;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_182);
    }
    {
        PyObject *tmp_called_value_185;
        PyObject *tmp_call_result_183;
        tmp_called_value_185 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_185 == NULL)) {
            tmp_called_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1560;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1560;
        tmp_call_result_183 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_185, mod_consts[219]);

        if (tmp_call_result_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1560;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_183);
    }
    {
        PyObject *tmp_called_value_186;
        PyObject *tmp_call_result_184;
        tmp_called_value_186 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_186 == NULL)) {
            tmp_called_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1566;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1566;
        tmp_call_result_184 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_186, mod_consts[220]);

        if (tmp_call_result_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1566;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_184);
    }
    {
        PyObject *tmp_called_value_187;
        PyObject *tmp_call_result_185;
        tmp_called_value_187 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_187 == NULL)) {
            tmp_called_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1578;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1578;
        tmp_call_result_185 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_187, mod_consts[221]);

        if (tmp_call_result_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1578;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_185);
    }
    {
        PyObject *tmp_called_value_188;
        PyObject *tmp_call_result_186;
        tmp_called_value_188 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_188 == NULL)) {
            tmp_called_value_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1585;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1585;
        tmp_call_result_186 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_188, mod_consts[222]);

        if (tmp_call_result_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1585;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_186);
    }
    {
        PyObject *tmp_called_value_189;
        PyObject *tmp_call_result_187;
        tmp_called_value_189 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_189 == NULL)) {
            tmp_called_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1592;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1592;
        tmp_call_result_187 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_189, mod_consts[223]);

        if (tmp_call_result_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1592;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_187);
    }
    {
        PyObject *tmp_called_value_190;
        PyObject *tmp_call_result_188;
        tmp_called_value_190 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_190 == NULL)) {
            tmp_called_value_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1598;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1598;
        tmp_call_result_188 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_190, mod_consts[224]);

        if (tmp_call_result_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1598;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_188);
    }
    {
        PyObject *tmp_called_value_191;
        PyObject *tmp_call_result_189;
        tmp_called_value_191 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_191 == NULL)) {
            tmp_called_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1604;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1604;
        tmp_call_result_189 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_191, mod_consts[225]);

        if (tmp_call_result_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1604;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_189);
    }
    {
        PyObject *tmp_called_value_192;
        PyObject *tmp_call_result_190;
        tmp_called_value_192 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_192 == NULL)) {
            tmp_called_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1611;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1611;
        tmp_call_result_190 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_192, mod_consts[226]);

        if (tmp_call_result_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1611;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_190);
    }
    {
        PyObject *tmp_called_value_193;
        PyObject *tmp_call_result_191;
        tmp_called_value_193 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_193 == NULL)) {
            tmp_called_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1618;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1618;
        tmp_call_result_191 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_193, mod_consts[227]);

        if (tmp_call_result_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1618;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_191);
    }
    {
        PyObject *tmp_called_value_194;
        PyObject *tmp_call_result_192;
        tmp_called_value_194 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_194 == NULL)) {
            tmp_called_value_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1625;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1625;
        tmp_call_result_192 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_194, mod_consts[228]);

        if (tmp_call_result_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1625;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_192);
    }
    {
        PyObject *tmp_called_value_195;
        PyObject *tmp_call_result_193;
        tmp_called_value_195 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_195 == NULL)) {
            tmp_called_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1632;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1632;
        tmp_call_result_193 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_195, mod_consts[229]);

        if (tmp_call_result_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1632;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_193);
    }
    {
        PyObject *tmp_called_value_196;
        PyObject *tmp_call_result_194;
        tmp_called_value_196 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_196 == NULL)) {
            tmp_called_value_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1639;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1639;
        tmp_call_result_194 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_196, mod_consts[230]);

        if (tmp_call_result_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1639;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_194);
    }
    {
        PyObject *tmp_called_value_197;
        PyObject *tmp_call_result_195;
        tmp_called_value_197 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_197 == NULL)) {
            tmp_called_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1646;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1646;
        tmp_call_result_195 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_197, mod_consts[231]);

        if (tmp_call_result_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1646;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_195);
    }
    {
        PyObject *tmp_called_value_198;
        PyObject *tmp_call_result_196;
        tmp_called_value_198 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_198 == NULL)) {
            tmp_called_value_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1652;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1652;
        tmp_call_result_196 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_198, mod_consts[232]);

        if (tmp_call_result_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1652;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_196);
    }
    {
        PyObject *tmp_called_value_199;
        PyObject *tmp_call_result_197;
        tmp_called_value_199 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_199 == NULL)) {
            tmp_called_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1658;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1658;
        tmp_call_result_197 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_199, mod_consts[233]);

        if (tmp_call_result_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1658;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_197);
    }
    {
        PyObject *tmp_called_value_200;
        PyObject *tmp_call_result_198;
        tmp_called_value_200 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_200 == NULL)) {
            tmp_called_value_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1674;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1674;
        tmp_call_result_198 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_200, mod_consts[234]);

        if (tmp_call_result_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1674;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_198);
    }
    {
        PyObject *tmp_called_value_201;
        PyObject *tmp_call_result_199;
        tmp_called_value_201 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_201 == NULL)) {
            tmp_called_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1689;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1689;
        tmp_call_result_199 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_201, mod_consts[235]);

        if (tmp_call_result_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1689;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_199);
    }
    {
        PyObject *tmp_called_value_202;
        PyObject *tmp_call_result_200;
        tmp_called_value_202 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_202 == NULL)) {
            tmp_called_value_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1705;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1705;
        tmp_call_result_200 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_202, mod_consts[236]);

        if (tmp_call_result_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1705;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_200);
    }
    {
        PyObject *tmp_called_value_203;
        PyObject *tmp_call_result_201;
        tmp_called_value_203 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_203 == NULL)) {
            tmp_called_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1711;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1711;
        tmp_call_result_201 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_203, mod_consts[237]);

        if (tmp_call_result_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1711;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_201);
    }
    {
        PyObject *tmp_called_value_204;
        PyObject *tmp_call_result_202;
        tmp_called_value_204 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_204 == NULL)) {
            tmp_called_value_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1717;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1717;
        tmp_call_result_202 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_204, mod_consts[238]);

        if (tmp_call_result_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1717;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_202);
    }
    {
        PyObject *tmp_called_value_205;
        PyObject *tmp_call_result_203;
        tmp_called_value_205 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_205 == NULL)) {
            tmp_called_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1723;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1723;
        tmp_call_result_203 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_205, mod_consts[239]);

        if (tmp_call_result_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1723;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_203);
    }
    {
        PyObject *tmp_called_value_206;
        PyObject *tmp_call_result_204;
        tmp_called_value_206 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_206 == NULL)) {
            tmp_called_value_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1729;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1729;
        tmp_call_result_204 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_206, mod_consts[240]);

        if (tmp_call_result_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1729;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_204);
    }
    {
        PyObject *tmp_called_value_207;
        PyObject *tmp_call_result_205;
        tmp_called_value_207 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_207 == NULL)) {
            tmp_called_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1734;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1734;
        tmp_call_result_205 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_207, mod_consts[241]);

        if (tmp_call_result_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1734;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_205);
    }
    {
        PyObject *tmp_called_value_208;
        PyObject *tmp_call_result_206;
        tmp_called_value_208 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_208 == NULL)) {
            tmp_called_value_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1741;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1741;
        tmp_call_result_206 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_208, mod_consts[242]);

        if (tmp_call_result_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1741;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_206);
    }
    {
        PyObject *tmp_called_value_209;
        PyObject *tmp_call_result_207;
        tmp_called_value_209 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_209 == NULL)) {
            tmp_called_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1748;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1748;
        tmp_call_result_207 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_209, mod_consts[243]);

        if (tmp_call_result_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1748;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_207);
    }
    {
        PyObject *tmp_called_value_210;
        PyObject *tmp_call_result_208;
        tmp_called_value_210 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_210 == NULL)) {
            tmp_called_value_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1755;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1755;
        tmp_call_result_208 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_210, mod_consts[244]);

        if (tmp_call_result_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1755;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_208);
    }
    {
        PyObject *tmp_called_value_211;
        PyObject *tmp_call_result_209;
        tmp_called_value_211 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_211 == NULL)) {
            tmp_called_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1762;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1762;
        tmp_call_result_209 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_211, mod_consts[245]);

        if (tmp_call_result_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1762;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_209);
    }
    {
        PyObject *tmp_called_value_212;
        PyObject *tmp_call_result_210;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_dircall_arg1_11;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_dircall_arg2_11;
        tmp_called_value_212 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_212 == NULL)) {
            tmp_called_value_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1769;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = mod_consts[246];
        tmp_expression_value_11 = mod_consts[247];
        tmp_dircall_arg1_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[28]);
        assert(!(tmp_dircall_arg1_11 == NULL));
        tmp_dircall_arg2_11 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_dircall_arg2_11 == NULL)) {
            tmp_dircall_arg2_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_dircall_arg2_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_11);

            exception_lineno = 1810;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg2_11);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_11, tmp_dircall_arg2_11};
            tmp_args_element_value_22 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1770;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1769;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_call_result_210 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_212, call_args);
        }

        Py_DECREF(tmp_args_element_value_22);
        if (tmp_call_result_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1769;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_210);
    }
    {
        PyObject *tmp_called_value_213;
        PyObject *tmp_call_result_211;
        tmp_called_value_213 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_213 == NULL)) {
            tmp_called_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1812;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1812;
        tmp_call_result_211 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_213, mod_consts[248]);

        if (tmp_call_result_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1812;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_211);
    }
    {
        PyObject *tmp_called_value_214;
        PyObject *tmp_call_result_212;
        tmp_called_value_214 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_214 == NULL)) {
            tmp_called_value_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1848;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1848;
        tmp_call_result_212 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_214, mod_consts[249]);

        if (tmp_call_result_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1848;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_212);
    }
    {
        PyObject *tmp_called_value_215;
        PyObject *tmp_call_result_213;
        tmp_called_value_215 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_215 == NULL)) {
            tmp_called_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1869;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1869;
        tmp_call_result_213 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_215, mod_consts[250]);

        if (tmp_call_result_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1869;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_213);
    }
    {
        PyObject *tmp_called_value_216;
        PyObject *tmp_call_result_214;
        tmp_called_value_216 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_216 == NULL)) {
            tmp_called_value_216 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1888;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1888;
        tmp_call_result_214 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_216, mod_consts[251]);

        if (tmp_call_result_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1888;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_214);
    }
    {
        PyObject *tmp_called_value_217;
        PyObject *tmp_call_result_215;
        tmp_called_value_217 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_217 == NULL)) {
            tmp_called_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1895;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1895;
        tmp_call_result_215 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_217, mod_consts[252]);

        if (tmp_call_result_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1895;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_215);
    }
    {
        PyObject *tmp_called_value_218;
        PyObject *tmp_call_result_216;
        tmp_called_value_218 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_218 == NULL)) {
            tmp_called_value_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1902;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1902;
        tmp_call_result_216 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_218, mod_consts[253]);

        if (tmp_call_result_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1902;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_216);
    }
    {
        PyObject *tmp_called_value_219;
        PyObject *tmp_call_result_217;
        tmp_called_value_219 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_219 == NULL)) {
            tmp_called_value_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1947;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1947;
        tmp_call_result_217 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_219, mod_consts[254]);

        if (tmp_call_result_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1947;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_217);
    }
    {
        PyObject *tmp_called_value_220;
        PyObject *tmp_call_result_218;
        tmp_called_value_220 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_220 == NULL)) {
            tmp_called_value_220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_220 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1954;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1954;
        tmp_call_result_218 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_220, mod_consts[255]);

        if (tmp_call_result_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1954;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_218);
    }
    {
        PyObject *tmp_called_value_221;
        PyObject *tmp_call_result_219;
        tmp_called_value_221 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_221 == NULL)) {
            tmp_called_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1961;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1961;
        tmp_call_result_219 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_221, mod_consts[256]);

        if (tmp_call_result_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1961;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_219);
    }
    {
        PyObject *tmp_called_value_222;
        PyObject *tmp_call_result_220;
        tmp_called_value_222 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_222 == NULL)) {
            tmp_called_value_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1968;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1968;
        tmp_call_result_220 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_222, mod_consts[257]);

        if (tmp_call_result_220 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1968;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_220);
    }
    {
        PyObject *tmp_called_value_223;
        PyObject *tmp_call_result_221;
        tmp_called_value_223 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_223 == NULL)) {
            tmp_called_value_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1975;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1975;
        tmp_call_result_221 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_223, mod_consts[258]);

        if (tmp_call_result_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1975;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_221);
    }
    {
        PyObject *tmp_called_value_224;
        PyObject *tmp_call_result_222;
        tmp_called_value_224 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_224 == NULL)) {
            tmp_called_value_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1982;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1982;
        tmp_call_result_222 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_224, mod_consts[259]);

        if (tmp_call_result_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1982;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_222);
    }
    {
        PyObject *tmp_called_value_225;
        PyObject *tmp_call_result_223;
        tmp_called_value_225 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_225 == NULL)) {
            tmp_called_value_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1989;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1989;
        tmp_call_result_223 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_225, mod_consts[260]);

        if (tmp_call_result_223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1989;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_223);
    }
    {
        PyObject *tmp_called_value_226;
        PyObject *tmp_call_result_224;
        tmp_called_value_226 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_226 == NULL)) {
            tmp_called_value_226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1996;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 1996;
        tmp_call_result_224 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_226, mod_consts[261]);

        if (tmp_call_result_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1996;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_224);
    }
    {
        PyObject *tmp_called_value_227;
        PyObject *tmp_call_result_225;
        tmp_called_value_227 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_227 == NULL)) {
            tmp_called_value_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2003;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2003;
        tmp_call_result_225 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_227, mod_consts[262]);

        if (tmp_call_result_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2003;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_225);
    }
    {
        PyObject *tmp_called_value_228;
        PyObject *tmp_call_result_226;
        tmp_called_value_228 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_228 == NULL)) {
            tmp_called_value_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2016;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2016;
        tmp_call_result_226 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_228, mod_consts[263]);

        if (tmp_call_result_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2016;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_226);
    }
    {
        PyObject *tmp_called_value_229;
        PyObject *tmp_call_result_227;
        tmp_called_value_229 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_229 == NULL)) {
            tmp_called_value_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2028;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2028;
        tmp_call_result_227 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_229, mod_consts[264]);

        if (tmp_call_result_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2028;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_227);
    }
    {
        PyObject *tmp_called_value_230;
        PyObject *tmp_call_result_228;
        tmp_called_value_230 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_230 == NULL)) {
            tmp_called_value_230 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2033;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2033;
        tmp_call_result_228 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_230, mod_consts[265]);

        if (tmp_call_result_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2033;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_228);
    }
    {
        PyObject *tmp_called_value_231;
        PyObject *tmp_call_result_229;
        tmp_called_value_231 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_231 == NULL)) {
            tmp_called_value_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2040;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2040;
        tmp_call_result_229 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_231, mod_consts[266]);

        if (tmp_call_result_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2040;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_229);
    }
    {
        PyObject *tmp_called_value_232;
        PyObject *tmp_call_result_230;
        tmp_called_value_232 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_232 == NULL)) {
            tmp_called_value_232 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2047;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2047;
        tmp_call_result_230 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_232, mod_consts[267]);

        if (tmp_call_result_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2047;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_230);
    }
    {
        PyObject *tmp_called_value_233;
        PyObject *tmp_call_result_231;
        tmp_called_value_233 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_233 == NULL)) {
            tmp_called_value_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2054;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2054;
        tmp_call_result_231 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_233, mod_consts[268]);

        if (tmp_call_result_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2054;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_231);
    }
    {
        PyObject *tmp_called_value_234;
        PyObject *tmp_call_result_232;
        tmp_called_value_234 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_234 == NULL)) {
            tmp_called_value_234 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2061;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2061;
        tmp_call_result_232 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_234, mod_consts[269]);

        if (tmp_call_result_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2061;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_232);
    }
    {
        PyObject *tmp_called_value_235;
        PyObject *tmp_call_result_233;
        tmp_called_value_235 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_235 == NULL)) {
            tmp_called_value_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2068;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2068;
        tmp_call_result_233 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_235, mod_consts[270]);

        if (tmp_call_result_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2068;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_233);
    }
    {
        PyObject *tmp_called_value_236;
        PyObject *tmp_call_result_234;
        tmp_called_value_236 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_236 == NULL)) {
            tmp_called_value_236 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_236 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2075;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2075;
        tmp_call_result_234 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_236, mod_consts[271]);

        if (tmp_call_result_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2075;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_234);
    }
    {
        PyObject *tmp_called_value_237;
        PyObject *tmp_call_result_235;
        tmp_called_value_237 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_237 == NULL)) {
            tmp_called_value_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2083;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2083;
        tmp_call_result_235 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_237, mod_consts[272]);

        if (tmp_call_result_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2083;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_235);
    }
    {
        PyObject *tmp_called_value_238;
        PyObject *tmp_call_result_236;
        tmp_called_value_238 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_238 == NULL)) {
            tmp_called_value_238 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2099;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2099;
        tmp_call_result_236 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_238, mod_consts[273]);

        if (tmp_call_result_236 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2099;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_236);
    }
    {
        PyObject *tmp_called_value_239;
        PyObject *tmp_call_result_237;
        tmp_called_value_239 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_239 == NULL)) {
            tmp_called_value_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2106;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2106;
        tmp_call_result_237 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_239, mod_consts[274]);

        if (tmp_call_result_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2106;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_237);
    }
    {
        PyObject *tmp_called_value_240;
        PyObject *tmp_call_result_238;
        tmp_called_value_240 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_240 == NULL)) {
            tmp_called_value_240 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2113;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2113;
        tmp_call_result_238 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_240, mod_consts[275]);

        if (tmp_call_result_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2113;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_238);
    }
    {
        PyObject *tmp_called_value_241;
        PyObject *tmp_call_result_239;
        tmp_called_value_241 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_241 == NULL)) {
            tmp_called_value_241 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2120;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2120;
        tmp_call_result_239 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_241, mod_consts[276]);

        if (tmp_call_result_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2120;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_239);
    }
    {
        PyObject *tmp_called_value_242;
        PyObject *tmp_call_result_240;
        tmp_called_value_242 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_242 == NULL)) {
            tmp_called_value_242 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_242 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2127;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2127;
        tmp_call_result_240 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_242, mod_consts[277]);

        if (tmp_call_result_240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2127;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_240);
    }
    {
        PyObject *tmp_called_value_243;
        PyObject *tmp_call_result_241;
        tmp_called_value_243 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_243 == NULL)) {
            tmp_called_value_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2134;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2134;
        tmp_call_result_241 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_243, mod_consts[278]);

        if (tmp_call_result_241 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2134;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_241);
    }
    {
        PyObject *tmp_called_value_244;
        PyObject *tmp_call_result_242;
        tmp_called_value_244 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_244 == NULL)) {
            tmp_called_value_244 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_244 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2141;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2141;
        tmp_call_result_242 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_244, mod_consts[279]);

        if (tmp_call_result_242 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2141;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_242);
    }
    {
        PyObject *tmp_called_value_245;
        PyObject *tmp_call_result_243;
        tmp_called_value_245 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_245 == NULL)) {
            tmp_called_value_245 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2147;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2147;
        tmp_call_result_243 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_245, mod_consts[280]);

        if (tmp_call_result_243 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2147;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_243);
    }
    {
        PyObject *tmp_called_value_246;
        PyObject *tmp_call_result_244;
        tmp_called_value_246 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_246 == NULL)) {
            tmp_called_value_246 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2153;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2153;
        tmp_call_result_244 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_246, mod_consts[281]);

        if (tmp_call_result_244 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2153;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_244);
    }
    {
        PyObject *tmp_called_value_247;
        PyObject *tmp_call_result_245;
        tmp_called_value_247 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_247 == NULL)) {
            tmp_called_value_247 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2159;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2159;
        tmp_call_result_245 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_247, mod_consts[282]);

        if (tmp_call_result_245 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2159;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_245);
    }
    {
        PyObject *tmp_called_value_248;
        PyObject *tmp_call_result_246;
        tmp_called_value_248 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_248 == NULL)) {
            tmp_called_value_248 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2165;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2165;
        tmp_call_result_246 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_248, mod_consts[283]);

        if (tmp_call_result_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2165;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_246);
    }
    {
        PyObject *tmp_called_value_249;
        PyObject *tmp_call_result_247;
        tmp_called_value_249 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_249 == NULL)) {
            tmp_called_value_249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2172;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2172;
        tmp_call_result_247 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_249, mod_consts[284]);

        if (tmp_call_result_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2172;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_247);
    }
    {
        PyObject *tmp_called_value_250;
        PyObject *tmp_call_result_248;
        tmp_called_value_250 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_250 == NULL)) {
            tmp_called_value_250 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_250 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2179;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2179;
        tmp_call_result_248 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_250, mod_consts[285]);

        if (tmp_call_result_248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2179;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_248);
    }
    {
        PyObject *tmp_called_value_251;
        PyObject *tmp_call_result_249;
        tmp_called_value_251 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_251 == NULL)) {
            tmp_called_value_251 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2186;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2186;
        tmp_call_result_249 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_251, mod_consts[286]);

        if (tmp_call_result_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2186;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_249);
    }
    {
        PyObject *tmp_called_value_252;
        PyObject *tmp_call_result_250;
        tmp_called_value_252 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_252 == NULL)) {
            tmp_called_value_252 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_252 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2192;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2192;
        tmp_call_result_250 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_252, mod_consts[287]);

        if (tmp_call_result_250 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2192;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_250);
    }
    {
        PyObject *tmp_called_value_253;
        PyObject *tmp_call_result_251;
        tmp_called_value_253 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_253 == NULL)) {
            tmp_called_value_253 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2199;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2199;
        tmp_call_result_251 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_253, mod_consts[288]);

        if (tmp_call_result_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2199;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_251);
    }
    {
        PyObject *tmp_called_value_254;
        PyObject *tmp_call_result_252;
        tmp_called_value_254 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_254 == NULL)) {
            tmp_called_value_254 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_254 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2205;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2205;
        tmp_call_result_252 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_254, mod_consts[289]);

        if (tmp_call_result_252 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2205;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_252);
    }
    {
        PyObject *tmp_called_value_255;
        PyObject *tmp_call_result_253;
        tmp_called_value_255 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_255 == NULL)) {
            tmp_called_value_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2212;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2212;
        tmp_call_result_253 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_255, mod_consts[290]);

        if (tmp_call_result_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2212;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_253);
    }
    {
        PyObject *tmp_called_value_256;
        PyObject *tmp_call_result_254;
        tmp_called_value_256 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_256 == NULL)) {
            tmp_called_value_256 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_256 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2219;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2219;
        tmp_call_result_254 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_256, mod_consts[291]);

        if (tmp_call_result_254 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2219;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_254);
    }
    {
        PyObject *tmp_called_value_257;
        PyObject *tmp_call_result_255;
        tmp_called_value_257 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_257 == NULL)) {
            tmp_called_value_257 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2226;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2226;
        tmp_call_result_255 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_257, mod_consts[292]);

        if (tmp_call_result_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2226;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_255);
    }
    {
        PyObject *tmp_called_value_258;
        PyObject *tmp_call_result_256;
        tmp_called_value_258 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_258 == NULL)) {
            tmp_called_value_258 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_258 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2233;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2233;
        tmp_call_result_256 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_258, mod_consts[293]);

        if (tmp_call_result_256 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2233;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_256);
    }
    {
        PyObject *tmp_called_value_259;
        PyObject *tmp_call_result_257;
        tmp_called_value_259 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_259 == NULL)) {
            tmp_called_value_259 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_259 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2240;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2240;
        tmp_call_result_257 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_259, mod_consts[294]);

        if (tmp_call_result_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2240;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_257);
    }
    {
        PyObject *tmp_called_value_260;
        PyObject *tmp_call_result_258;
        tmp_called_value_260 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_260 == NULL)) {
            tmp_called_value_260 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_260 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2247;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2247;
        tmp_call_result_258 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_260, mod_consts[295]);

        if (tmp_call_result_258 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2247;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_258);
    }
    {
        PyObject *tmp_called_value_261;
        PyObject *tmp_call_result_259;
        tmp_called_value_261 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_261 == NULL)) {
            tmp_called_value_261 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2254;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2254;
        tmp_call_result_259 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_261, mod_consts[296]);

        if (tmp_call_result_259 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2254;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_259);
    }
    {
        PyObject *tmp_called_value_262;
        PyObject *tmp_call_result_260;
        tmp_called_value_262 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_262 == NULL)) {
            tmp_called_value_262 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_262 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2261;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2261;
        tmp_call_result_260 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_262, mod_consts[297]);

        if (tmp_call_result_260 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2261;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_260);
    }
    {
        PyObject *tmp_called_value_263;
        PyObject *tmp_call_result_261;
        tmp_called_value_263 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_263 == NULL)) {
            tmp_called_value_263 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2275;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2275;
        tmp_call_result_261 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_263, mod_consts[298]);

        if (tmp_call_result_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2275;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_261);
    }
    {
        PyObject *tmp_called_value_264;
        PyObject *tmp_call_result_262;
        tmp_called_value_264 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_264 == NULL)) {
            tmp_called_value_264 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_264 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2282;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2282;
        tmp_call_result_262 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_264, mod_consts[299]);

        if (tmp_call_result_262 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2282;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_262);
    }
    {
        PyObject *tmp_called_value_265;
        PyObject *tmp_call_result_263;
        tmp_called_value_265 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_265 == NULL)) {
            tmp_called_value_265 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_265 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2289;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2289;
        tmp_call_result_263 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_265, mod_consts[300]);

        if (tmp_call_result_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2289;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_263);
    }
    {
        PyObject *tmp_called_value_266;
        PyObject *tmp_call_result_264;
        tmp_called_value_266 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_266 == NULL)) {
            tmp_called_value_266 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_266 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2295;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2295;
        tmp_call_result_264 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_266, mod_consts[301]);

        if (tmp_call_result_264 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2295;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_264);
    }
    {
        PyObject *tmp_called_value_267;
        PyObject *tmp_call_result_265;
        tmp_called_value_267 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_267 == NULL)) {
            tmp_called_value_267 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_267 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2301;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2301;
        tmp_call_result_265 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_267, mod_consts[302]);

        if (tmp_call_result_265 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2301;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_265);
    }
    {
        PyObject *tmp_called_value_268;
        PyObject *tmp_call_result_266;
        tmp_called_value_268 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_268 == NULL)) {
            tmp_called_value_268 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2307;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2307;
        tmp_call_result_266 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_268, mod_consts[303]);

        if (tmp_call_result_266 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2307;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_266);
    }
    {
        PyObject *tmp_called_value_269;
        PyObject *tmp_call_result_267;
        tmp_called_value_269 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_269 == NULL)) {
            tmp_called_value_269 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2313;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2313;
        tmp_call_result_267 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_269, mod_consts[304]);

        if (tmp_call_result_267 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2313;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_267);
    }
    {
        PyObject *tmp_called_value_270;
        PyObject *tmp_call_result_268;
        tmp_called_value_270 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_270 == NULL)) {
            tmp_called_value_270 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2320;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2320;
        tmp_call_result_268 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_270, mod_consts[305]);

        if (tmp_call_result_268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2320;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_268);
    }
    {
        PyObject *tmp_called_value_271;
        PyObject *tmp_call_result_269;
        tmp_called_value_271 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_271 == NULL)) {
            tmp_called_value_271 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2333;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2333;
        tmp_call_result_269 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_271, mod_consts[306]);

        if (tmp_call_result_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2333;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_269);
    }
    {
        PyObject *tmp_called_value_272;
        PyObject *tmp_call_result_270;
        tmp_called_value_272 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_272 == NULL)) {
            tmp_called_value_272 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_272 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2353;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2353;
        tmp_call_result_270 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_272, mod_consts[307]);

        if (tmp_call_result_270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2353;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_270);
    }
    {
        PyObject *tmp_called_value_273;
        PyObject *tmp_call_result_271;
        tmp_called_value_273 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_273 == NULL)) {
            tmp_called_value_273 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2367;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2367;
        tmp_call_result_271 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_273, mod_consts[308]);

        if (tmp_call_result_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2367;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_271);
    }
    {
        PyObject *tmp_called_value_274;
        PyObject *tmp_call_result_272;
        tmp_called_value_274 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_274 == NULL)) {
            tmp_called_value_274 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_274 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2374;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2374;
        tmp_call_result_272 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_274, mod_consts[309]);

        if (tmp_call_result_272 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2374;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_272);
    }
    {
        PyObject *tmp_called_value_275;
        PyObject *tmp_call_result_273;
        tmp_called_value_275 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_275 == NULL)) {
            tmp_called_value_275 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_275 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2382;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2382;
        tmp_call_result_273 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_275, mod_consts[310]);

        if (tmp_call_result_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2382;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_273);
    }
    {
        PyObject *tmp_called_value_276;
        PyObject *tmp_call_result_274;
        tmp_called_value_276 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_276 == NULL)) {
            tmp_called_value_276 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_276 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2389;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2389;
        tmp_call_result_274 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_276, mod_consts[311]);

        if (tmp_call_result_274 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2389;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_274);
    }
    {
        PyObject *tmp_called_value_277;
        PyObject *tmp_call_result_275;
        tmp_called_value_277 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_277 == NULL)) {
            tmp_called_value_277 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2396;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2396;
        tmp_call_result_275 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_277, mod_consts[312]);

        if (tmp_call_result_275 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2396;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_275);
    }
    {
        PyObject *tmp_called_value_278;
        PyObject *tmp_call_result_276;
        tmp_called_value_278 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_278 == NULL)) {
            tmp_called_value_278 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_278 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2403;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2403;
        tmp_call_result_276 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_278, mod_consts[313]);

        if (tmp_call_result_276 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2403;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_276);
    }
    {
        PyObject *tmp_called_value_279;
        PyObject *tmp_call_result_277;
        tmp_called_value_279 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_279 == NULL)) {
            tmp_called_value_279 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_279 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2410;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2410;
        tmp_call_result_277 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_279, mod_consts[314]);

        if (tmp_call_result_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2410;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_277);
    }
    {
        PyObject *tmp_called_value_280;
        PyObject *tmp_call_result_278;
        tmp_called_value_280 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_280 == NULL)) {
            tmp_called_value_280 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_280 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2417;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2417;
        tmp_call_result_278 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_280, mod_consts[315]);

        if (tmp_call_result_278 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2417;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_278);
    }
    {
        PyObject *tmp_called_value_281;
        PyObject *tmp_call_result_279;
        tmp_called_value_281 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_281 == NULL)) {
            tmp_called_value_281 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_281 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2424;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2424;
        tmp_call_result_279 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_281, mod_consts[316]);

        if (tmp_call_result_279 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2424;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_279);
    }
    {
        PyObject *tmp_called_value_282;
        PyObject *tmp_call_result_280;
        tmp_called_value_282 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_282 == NULL)) {
            tmp_called_value_282 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_282 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2430;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2430;
        tmp_call_result_280 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_282, mod_consts[317]);

        if (tmp_call_result_280 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2430;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_280);
    }
    {
        PyObject *tmp_called_value_283;
        PyObject *tmp_call_result_281;
        tmp_called_value_283 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_283 == NULL)) {
            tmp_called_value_283 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_283 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2436;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2436;
        tmp_call_result_281 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_283, mod_consts[318]);

        if (tmp_call_result_281 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2436;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_281);
    }
    {
        PyObject *tmp_called_value_284;
        PyObject *tmp_call_result_282;
        tmp_called_value_284 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_284 == NULL)) {
            tmp_called_value_284 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_284 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2443;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2443;
        tmp_call_result_282 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_284, mod_consts[319]);

        if (tmp_call_result_282 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2443;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_282);
    }
    {
        PyObject *tmp_called_value_285;
        PyObject *tmp_call_result_283;
        tmp_called_value_285 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_285 == NULL)) {
            tmp_called_value_285 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_285 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2450;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2450;
        tmp_call_result_283 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_285, mod_consts[320]);

        if (tmp_call_result_283 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2450;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_283);
    }
    {
        PyObject *tmp_called_value_286;
        PyObject *tmp_call_result_284;
        tmp_called_value_286 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_286 == NULL)) {
            tmp_called_value_286 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_286 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2457;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2457;
        tmp_call_result_284 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_286, mod_consts[321]);

        if (tmp_call_result_284 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2457;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_284);
    }
    {
        PyObject *tmp_called_value_287;
        PyObject *tmp_call_result_285;
        tmp_called_value_287 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_287 == NULL)) {
            tmp_called_value_287 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_287 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2464;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2464;
        tmp_call_result_285 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_287, mod_consts[322]);

        if (tmp_call_result_285 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2464;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_285);
    }
    {
        PyObject *tmp_called_value_288;
        PyObject *tmp_call_result_286;
        tmp_called_value_288 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_288 == NULL)) {
            tmp_called_value_288 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_288 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2471;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2471;
        tmp_call_result_286 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_288, mod_consts[323]);

        if (tmp_call_result_286 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2471;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_286);
    }
    {
        PyObject *tmp_called_value_289;
        PyObject *tmp_call_result_287;
        tmp_called_value_289 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_289 == NULL)) {
            tmp_called_value_289 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2477;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2477;
        tmp_call_result_287 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_289, mod_consts[324]);

        if (tmp_call_result_287 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2477;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_287);
    }
    {
        PyObject *tmp_called_value_290;
        PyObject *tmp_call_result_288;
        tmp_called_value_290 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_290 == NULL)) {
            tmp_called_value_290 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_290 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2484;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2484;
        tmp_call_result_288 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_290, mod_consts[325]);

        if (tmp_call_result_288 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2484;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_288);
    }
    {
        PyObject *tmp_called_value_291;
        PyObject *tmp_call_result_289;
        tmp_called_value_291 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_291 == NULL)) {
            tmp_called_value_291 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_291 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2491;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2491;
        tmp_call_result_289 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_291, mod_consts[326]);

        if (tmp_call_result_289 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2491;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_289);
    }
    {
        PyObject *tmp_called_value_292;
        PyObject *tmp_call_result_290;
        tmp_called_value_292 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_292 == NULL)) {
            tmp_called_value_292 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_292 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2498;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2498;
        tmp_call_result_290 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_292, mod_consts[327]);

        if (tmp_call_result_290 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2498;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_290);
    }
    {
        PyObject *tmp_called_value_293;
        PyObject *tmp_call_result_291;
        tmp_called_value_293 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_293 == NULL)) {
            tmp_called_value_293 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_293 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2505;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2505;
        tmp_call_result_291 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_293, mod_consts[328]);

        if (tmp_call_result_291 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2505;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_291);
    }
    {
        PyObject *tmp_called_value_294;
        PyObject *tmp_call_result_292;
        tmp_called_value_294 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_294 == NULL)) {
            tmp_called_value_294 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_294 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2511;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2511;
        tmp_call_result_292 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_294, mod_consts[329]);

        if (tmp_call_result_292 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2511;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_292);
    }
    {
        PyObject *tmp_called_value_295;
        PyObject *tmp_call_result_293;
        tmp_called_value_295 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_295 == NULL)) {
            tmp_called_value_295 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_295 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2517;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2517;
        tmp_call_result_293 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_295, mod_consts[330]);

        if (tmp_call_result_293 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2517;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_293);
    }
    {
        PyObject *tmp_called_value_296;
        PyObject *tmp_call_result_294;
        tmp_called_value_296 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_296 == NULL)) {
            tmp_called_value_296 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_296 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2523;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2523;
        tmp_call_result_294 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_296, mod_consts[331]);

        if (tmp_call_result_294 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2523;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_294);
    }
    {
        PyObject *tmp_called_value_297;
        PyObject *tmp_call_result_295;
        tmp_called_value_297 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_297 == NULL)) {
            tmp_called_value_297 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_297 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2529;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2529;
        tmp_call_result_295 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_297, mod_consts[332]);

        if (tmp_call_result_295 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2529;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_295);
    }
    {
        PyObject *tmp_called_value_298;
        PyObject *tmp_call_result_296;
        tmp_called_value_298 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_298 == NULL)) {
            tmp_called_value_298 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_298 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2535;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2535;
        tmp_call_result_296 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_298, mod_consts[333]);

        if (tmp_call_result_296 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2535;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_296);
    }
    {
        PyObject *tmp_called_value_299;
        PyObject *tmp_call_result_297;
        tmp_called_value_299 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_299 == NULL)) {
            tmp_called_value_299 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_299 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2541;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2541;
        tmp_call_result_297 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_299, mod_consts[334]);

        if (tmp_call_result_297 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2541;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_297);
    }
    {
        PyObject *tmp_called_value_300;
        PyObject *tmp_call_result_298;
        tmp_called_value_300 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_300 == NULL)) {
            tmp_called_value_300 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_300 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2548;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2548;
        tmp_call_result_298 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_300, mod_consts[335]);

        if (tmp_call_result_298 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2548;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_298);
    }
    {
        PyObject *tmp_called_value_301;
        PyObject *tmp_call_result_299;
        tmp_called_value_301 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_301 == NULL)) {
            tmp_called_value_301 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_301 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2555;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2555;
        tmp_call_result_299 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_301, mod_consts[336]);

        if (tmp_call_result_299 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2555;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_299);
    }
    {
        PyObject *tmp_called_value_302;
        PyObject *tmp_call_result_300;
        tmp_called_value_302 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_302 == NULL)) {
            tmp_called_value_302 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_302 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2562;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2562;
        tmp_call_result_300 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_302, mod_consts[337]);

        if (tmp_call_result_300 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2562;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_300);
    }
    {
        PyObject *tmp_called_value_303;
        PyObject *tmp_call_result_301;
        tmp_called_value_303 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_303 == NULL)) {
            tmp_called_value_303 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_303 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2569;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2569;
        tmp_call_result_301 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_303, mod_consts[338]);

        if (tmp_call_result_301 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2569;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_301);
    }
    {
        PyObject *tmp_called_value_304;
        PyObject *tmp_call_result_302;
        tmp_called_value_304 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_304 == NULL)) {
            tmp_called_value_304 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_304 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2587;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2587;
        tmp_call_result_302 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_304, mod_consts[339]);

        if (tmp_call_result_302 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2587;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_302);
    }
    {
        PyObject *tmp_called_value_305;
        PyObject *tmp_call_result_303;
        tmp_called_value_305 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_305 == NULL)) {
            tmp_called_value_305 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_305 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2598;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2598;
        tmp_call_result_303 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_305, mod_consts[340]);

        if (tmp_call_result_303 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2598;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_303);
    }
    {
        PyObject *tmp_called_value_306;
        PyObject *tmp_call_result_304;
        tmp_called_value_306 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_306 == NULL)) {
            tmp_called_value_306 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_306 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2605;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2605;
        tmp_call_result_304 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_306, mod_consts[341]);

        if (tmp_call_result_304 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2605;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_304);
    }
    {
        PyObject *tmp_called_value_307;
        PyObject *tmp_call_result_305;
        tmp_called_value_307 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_307 == NULL)) {
            tmp_called_value_307 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_307 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2611;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2611;
        tmp_call_result_305 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_307, mod_consts[342]);

        if (tmp_call_result_305 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2611;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_305);
    }
    {
        PyObject *tmp_called_value_308;
        PyObject *tmp_call_result_306;
        tmp_called_value_308 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_308 == NULL)) {
            tmp_called_value_308 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_308 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2617;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2617;
        tmp_call_result_306 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_308, mod_consts[343]);

        if (tmp_call_result_306 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2617;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_306);
    }
    {
        PyObject *tmp_called_value_309;
        PyObject *tmp_call_result_307;
        tmp_called_value_309 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_309 == NULL)) {
            tmp_called_value_309 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_309 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2623;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2623;
        tmp_call_result_307 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_309, mod_consts[344]);

        if (tmp_call_result_307 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2623;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_307);
    }
    {
        PyObject *tmp_called_value_310;
        PyObject *tmp_call_result_308;
        tmp_called_value_310 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_310 == NULL)) {
            tmp_called_value_310 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_310 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2629;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2629;
        tmp_call_result_308 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_310, mod_consts[345]);

        if (tmp_call_result_308 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2629;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_308);
    }
    {
        PyObject *tmp_called_value_311;
        PyObject *tmp_call_result_309;
        tmp_called_value_311 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_311 == NULL)) {
            tmp_called_value_311 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_311 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2635;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2635;
        tmp_call_result_309 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_311, mod_consts[346]);

        if (tmp_call_result_309 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2635;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_309);
    }
    {
        PyObject *tmp_called_value_312;
        PyObject *tmp_call_result_310;
        tmp_called_value_312 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_312 == NULL)) {
            tmp_called_value_312 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_312 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2641;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2641;
        tmp_call_result_310 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_312, mod_consts[347]);

        if (tmp_call_result_310 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2641;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_310);
    }
    {
        PyObject *tmp_called_value_313;
        PyObject *tmp_call_result_311;
        tmp_called_value_313 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_313 == NULL)) {
            tmp_called_value_313 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_313 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2648;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2648;
        tmp_call_result_311 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_313, mod_consts[348]);

        if (tmp_call_result_311 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2648;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_311);
    }
    {
        PyObject *tmp_called_value_314;
        PyObject *tmp_call_result_312;
        tmp_called_value_314 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_314 == NULL)) {
            tmp_called_value_314 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_314 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2655;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2655;
        tmp_call_result_312 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_314, mod_consts[349]);

        if (tmp_call_result_312 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2655;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_312);
    }
    {
        PyObject *tmp_called_value_315;
        PyObject *tmp_call_result_313;
        tmp_called_value_315 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_315 == NULL)) {
            tmp_called_value_315 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_315 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2662;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2662;
        tmp_call_result_313 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_315, mod_consts[350]);

        if (tmp_call_result_313 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2662;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_313);
    }
    {
        PyObject *tmp_called_value_316;
        PyObject *tmp_call_result_314;
        tmp_called_value_316 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_316 == NULL)) {
            tmp_called_value_316 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_316 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2669;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2669;
        tmp_call_result_314 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_316, mod_consts[351]);

        if (tmp_call_result_314 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2669;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_314);
    }
    {
        PyObject *tmp_called_value_317;
        PyObject *tmp_call_result_315;
        tmp_called_value_317 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_317 == NULL)) {
            tmp_called_value_317 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_317 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2676;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2676;
        tmp_call_result_315 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_317, mod_consts[352]);

        if (tmp_call_result_315 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2676;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_315);
    }
    {
        PyObject *tmp_called_value_318;
        PyObject *tmp_call_result_316;
        tmp_called_value_318 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_318 == NULL)) {
            tmp_called_value_318 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_318 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2682;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2682;
        tmp_call_result_316 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_318, mod_consts[353]);

        if (tmp_call_result_316 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2682;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_316);
    }
    {
        PyObject *tmp_called_value_319;
        PyObject *tmp_call_result_317;
        tmp_called_value_319 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_319 == NULL)) {
            tmp_called_value_319 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_319 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2688;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2688;
        tmp_call_result_317 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_319, mod_consts[354]);

        if (tmp_call_result_317 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2688;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_317);
    }
    {
        PyObject *tmp_called_value_320;
        PyObject *tmp_call_result_318;
        tmp_called_value_320 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_320 == NULL)) {
            tmp_called_value_320 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_320 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2695;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2695;
        tmp_call_result_318 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_320, mod_consts[355]);

        if (tmp_call_result_318 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2695;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_318);
    }
    {
        PyObject *tmp_called_value_321;
        PyObject *tmp_call_result_319;
        tmp_called_value_321 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_321 == NULL)) {
            tmp_called_value_321 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_321 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2702;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2702;
        tmp_call_result_319 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_321, mod_consts[356]);

        if (tmp_call_result_319 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2702;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_319);
    }
    {
        PyObject *tmp_called_value_322;
        PyObject *tmp_call_result_320;
        tmp_called_value_322 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_322 == NULL)) {
            tmp_called_value_322 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_322 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2710;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2710;
        tmp_call_result_320 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_322, mod_consts[357]);

        if (tmp_call_result_320 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2710;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_320);
    }
    {
        PyObject *tmp_called_value_323;
        PyObject *tmp_call_result_321;
        tmp_called_value_323 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_323 == NULL)) {
            tmp_called_value_323 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_323 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2717;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2717;
        tmp_call_result_321 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_323, mod_consts[358]);

        if (tmp_call_result_321 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2717;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_321);
    }
    {
        PyObject *tmp_called_value_324;
        PyObject *tmp_call_result_322;
        tmp_called_value_324 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_324 == NULL)) {
            tmp_called_value_324 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_324 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2726;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2726;
        tmp_call_result_322 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_324, mod_consts[359]);

        if (tmp_call_result_322 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2726;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_322);
    }
    {
        PyObject *tmp_called_value_325;
        PyObject *tmp_call_result_323;
        tmp_called_value_325 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_325 == NULL)) {
            tmp_called_value_325 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_325 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2733;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2733;
        tmp_call_result_323 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_325, mod_consts[360]);

        if (tmp_call_result_323 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2733;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_323);
    }
    {
        PyObject *tmp_called_value_326;
        PyObject *tmp_call_result_324;
        tmp_called_value_326 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_326 == NULL)) {
            tmp_called_value_326 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_326 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2740;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2740;
        tmp_call_result_324 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_326, mod_consts[361]);

        if (tmp_call_result_324 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2740;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_324);
    }
    {
        PyObject *tmp_called_value_327;
        PyObject *tmp_call_result_325;
        tmp_called_value_327 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_327 == NULL)) {
            tmp_called_value_327 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_327 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2747;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2747;
        tmp_call_result_325 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_327, mod_consts[362]);

        if (tmp_call_result_325 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2747;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_325);
    }
    {
        PyObject *tmp_called_value_328;
        PyObject *tmp_call_result_326;
        tmp_called_value_328 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_328 == NULL)) {
            tmp_called_value_328 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_328 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2754;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2754;
        tmp_call_result_326 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_328, mod_consts[363]);

        if (tmp_call_result_326 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2754;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_326);
    }
    {
        PyObject *tmp_called_value_329;
        PyObject *tmp_call_result_327;
        tmp_called_value_329 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_329 == NULL)) {
            tmp_called_value_329 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_329 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2761;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2761;
        tmp_call_result_327 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_329, mod_consts[364]);

        if (tmp_call_result_327 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2761;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_327);
    }
    {
        PyObject *tmp_called_value_330;
        PyObject *tmp_call_result_328;
        tmp_called_value_330 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_330 == NULL)) {
            tmp_called_value_330 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_330 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2768;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2768;
        tmp_call_result_328 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_330, mod_consts[365]);

        if (tmp_call_result_328 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2768;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_328);
    }
    {
        PyObject *tmp_called_value_331;
        PyObject *tmp_call_result_329;
        tmp_called_value_331 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_331 == NULL)) {
            tmp_called_value_331 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_331 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2775;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2775;
        tmp_call_result_329 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_331, mod_consts[366]);

        if (tmp_call_result_329 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2775;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_329);
    }
    {
        PyObject *tmp_called_value_332;
        PyObject *tmp_call_result_330;
        tmp_called_value_332 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_332 == NULL)) {
            tmp_called_value_332 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_332 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2782;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2782;
        tmp_call_result_330 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_332, mod_consts[367]);

        if (tmp_call_result_330 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2782;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_330);
    }
    {
        PyObject *tmp_called_value_333;
        PyObject *tmp_call_result_331;
        tmp_called_value_333 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_333 == NULL)) {
            tmp_called_value_333 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_333 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2789;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2789;
        tmp_call_result_331 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_333, mod_consts[368]);

        if (tmp_call_result_331 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2789;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_331);
    }
    {
        PyObject *tmp_called_value_334;
        PyObject *tmp_call_result_332;
        tmp_called_value_334 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_334 == NULL)) {
            tmp_called_value_334 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_334 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2796;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2796;
        tmp_call_result_332 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_334, mod_consts[369]);

        if (tmp_call_result_332 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2796;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_332);
    }
    {
        PyObject *tmp_called_value_335;
        PyObject *tmp_call_result_333;
        tmp_called_value_335 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_335 == NULL)) {
            tmp_called_value_335 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_335 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2803;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2803;
        tmp_call_result_333 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_335, mod_consts[370]);

        if (tmp_call_result_333 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2803;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_333);
    }
    {
        PyObject *tmp_called_value_336;
        PyObject *tmp_call_result_334;
        tmp_called_value_336 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_336 == NULL)) {
            tmp_called_value_336 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_336 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2832;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2832;
        tmp_call_result_334 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_336, mod_consts[371]);

        if (tmp_call_result_334 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2832;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_334);
    }
    {
        PyObject *tmp_called_value_337;
        PyObject *tmp_call_result_335;
        tmp_called_value_337 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_337 == NULL)) {
            tmp_called_value_337 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_337 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2840;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2840;
        tmp_call_result_335 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_337, mod_consts[372]);

        if (tmp_call_result_335 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2840;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_335);
    }
    {
        PyObject *tmp_called_value_338;
        PyObject *tmp_call_result_336;
        tmp_called_value_338 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_338 == NULL)) {
            tmp_called_value_338 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_338 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2847;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2847;
        tmp_call_result_336 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_338, mod_consts[373]);

        if (tmp_call_result_336 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2847;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_336);
    }
    {
        PyObject *tmp_called_value_339;
        PyObject *tmp_call_result_337;
        tmp_called_value_339 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_339 == NULL)) {
            tmp_called_value_339 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_339 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2854;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2854;
        tmp_call_result_337 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_339, mod_consts[374]);

        if (tmp_call_result_337 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2854;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_337);
    }
    {
        PyObject *tmp_called_value_340;
        PyObject *tmp_call_result_338;
        tmp_called_value_340 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_340 == NULL)) {
            tmp_called_value_340 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_340 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2860;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2860;
        tmp_call_result_338 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_340, mod_consts[375]);

        if (tmp_call_result_338 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2860;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_338);
    }
    {
        PyObject *tmp_called_value_341;
        PyObject *tmp_call_result_339;
        tmp_called_value_341 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_341 == NULL)) {
            tmp_called_value_341 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_341 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2866;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2866;
        tmp_call_result_339 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_341, mod_consts[376]);

        if (tmp_call_result_339 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2866;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_339);
    }
    {
        PyObject *tmp_called_value_342;
        PyObject *tmp_call_result_340;
        tmp_called_value_342 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_342 == NULL)) {
            tmp_called_value_342 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_342 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2874;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2874;
        tmp_call_result_340 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_342, mod_consts[377]);

        if (tmp_call_result_340 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2874;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_340);
    }
    {
        PyObject *tmp_called_value_343;
        PyObject *tmp_call_result_341;
        tmp_called_value_343 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_343 == NULL)) {
            tmp_called_value_343 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_343 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2882;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2882;
        tmp_call_result_341 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_343, mod_consts[378]);

        if (tmp_call_result_341 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2882;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_341);
    }
    {
        PyObject *tmp_called_value_344;
        PyObject *tmp_call_result_342;
        tmp_called_value_344 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_344 == NULL)) {
            tmp_called_value_344 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_344 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2892;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2892;
        tmp_call_result_342 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_344, mod_consts[379]);

        if (tmp_call_result_342 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2892;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_342);
    }
    {
        PyObject *tmp_called_value_345;
        PyObject *tmp_call_result_343;
        tmp_called_value_345 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_345 == NULL)) {
            tmp_called_value_345 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_345 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2902;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2902;
        tmp_call_result_343 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_345, mod_consts[380]);

        if (tmp_call_result_343 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2902;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_343);
    }
    {
        PyObject *tmp_called_value_346;
        PyObject *tmp_call_result_344;
        tmp_called_value_346 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_346 == NULL)) {
            tmp_called_value_346 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_346 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2910;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2910;
        tmp_call_result_344 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_346, mod_consts[381]);

        if (tmp_call_result_344 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2910;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_344);
    }
    {
        PyObject *tmp_called_value_347;
        PyObject *tmp_call_result_345;
        tmp_called_value_347 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_347 == NULL)) {
            tmp_called_value_347 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_347 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2922;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2922;
        tmp_call_result_345 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_347, mod_consts[382]);

        if (tmp_call_result_345 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2922;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_345);
    }
    {
        PyObject *tmp_called_value_348;
        PyObject *tmp_call_result_346;
        tmp_called_value_348 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_348 == NULL)) {
            tmp_called_value_348 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_348 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2929;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2929;
        tmp_call_result_346 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_348, mod_consts[383]);

        if (tmp_call_result_346 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2929;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_346);
    }
    {
        PyObject *tmp_called_value_349;
        PyObject *tmp_call_result_347;
        tmp_called_value_349 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_349 == NULL)) {
            tmp_called_value_349 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_349 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2936;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2936;
        tmp_call_result_347 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_349, mod_consts[384]);

        if (tmp_call_result_347 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2936;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_347);
    }
    {
        PyObject *tmp_called_value_350;
        PyObject *tmp_call_result_348;
        tmp_called_value_350 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_350 == NULL)) {
            tmp_called_value_350 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_350 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2943;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2943;
        tmp_call_result_348 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_350, mod_consts[385]);

        if (tmp_call_result_348 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2943;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_348);
    }
    {
        PyObject *tmp_called_value_351;
        PyObject *tmp_call_result_349;
        tmp_called_value_351 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_351 == NULL)) {
            tmp_called_value_351 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_351 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2950;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2950;
        tmp_call_result_349 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_351, mod_consts[386]);

        if (tmp_call_result_349 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2950;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_349);
    }
    {
        PyObject *tmp_called_value_352;
        PyObject *tmp_call_result_350;
        tmp_called_value_352 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_352 == NULL)) {
            tmp_called_value_352 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_352 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2957;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2957;
        tmp_call_result_350 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_352, mod_consts[387]);

        if (tmp_call_result_350 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2957;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_350);
    }
    {
        PyObject *tmp_called_value_353;
        PyObject *tmp_call_result_351;
        tmp_called_value_353 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_353 == NULL)) {
            tmp_called_value_353 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_353 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2964;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2964;
        tmp_call_result_351 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_353, mod_consts[388]);

        if (tmp_call_result_351 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2964;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_351);
    }
    {
        PyObject *tmp_called_value_354;
        PyObject *tmp_call_result_352;
        tmp_called_value_354 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_354 == NULL)) {
            tmp_called_value_354 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_354 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2971;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2971;
        tmp_call_result_352 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_354, mod_consts[389]);

        if (tmp_call_result_352 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2971;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_352);
    }
    {
        PyObject *tmp_called_value_355;
        PyObject *tmp_call_result_353;
        tmp_called_value_355 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_355 == NULL)) {
            tmp_called_value_355 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_355 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2989;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2989;
        tmp_call_result_353 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_355, mod_consts[390]);

        if (tmp_call_result_353 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2989;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_353);
    }
    {
        PyObject *tmp_called_value_356;
        PyObject *tmp_call_result_354;
        tmp_called_value_356 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_356 == NULL)) {
            tmp_called_value_356 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_356 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2996;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 2996;
        tmp_call_result_354 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_356, mod_consts[391]);

        if (tmp_call_result_354 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2996;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_354);
    }
    {
        PyObject *tmp_called_value_357;
        PyObject *tmp_call_result_355;
        tmp_called_value_357 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_357 == NULL)) {
            tmp_called_value_357 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_357 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3003;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3003;
        tmp_call_result_355 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_357, mod_consts[392]);

        if (tmp_call_result_355 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3003;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_355);
    }
    {
        PyObject *tmp_called_value_358;
        PyObject *tmp_call_result_356;
        tmp_called_value_358 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_358 == NULL)) {
            tmp_called_value_358 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_358 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3010;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3010;
        tmp_call_result_356 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_358, mod_consts[393]);

        if (tmp_call_result_356 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3010;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_356);
    }
    {
        PyObject *tmp_called_value_359;
        PyObject *tmp_call_result_357;
        tmp_called_value_359 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_359 == NULL)) {
            tmp_called_value_359 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_359 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3017;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3017;
        tmp_call_result_357 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_359, mod_consts[394]);

        if (tmp_call_result_357 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3017;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_357);
    }
    {
        PyObject *tmp_called_value_360;
        PyObject *tmp_call_result_358;
        tmp_called_value_360 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_360 == NULL)) {
            tmp_called_value_360 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_360 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3049;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3049;
        tmp_call_result_358 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_360, mod_consts[395]);

        if (tmp_call_result_358 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3049;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_358);
    }
    {
        PyObject *tmp_called_value_361;
        PyObject *tmp_call_result_359;
        tmp_called_value_361 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_361 == NULL)) {
            tmp_called_value_361 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_361 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3056;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3056;
        tmp_call_result_359 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_361, mod_consts[396]);

        if (tmp_call_result_359 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3056;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_359);
    }
    {
        PyObject *tmp_called_value_362;
        PyObject *tmp_call_result_360;
        tmp_called_value_362 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_362 == NULL)) {
            tmp_called_value_362 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_362 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3092;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3092;
        tmp_call_result_360 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_362, mod_consts[397]);

        if (tmp_call_result_360 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3092;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_360);
    }
    {
        PyObject *tmp_called_value_363;
        PyObject *tmp_call_result_361;
        tmp_called_value_363 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_363 == NULL)) {
            tmp_called_value_363 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_363 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3108;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3108;
        tmp_call_result_361 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_363, mod_consts[398]);

        if (tmp_call_result_361 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3108;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_361);
    }
    {
        PyObject *tmp_called_value_364;
        PyObject *tmp_call_result_362;
        tmp_called_value_364 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_364 == NULL)) {
            tmp_called_value_364 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_364 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3124;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3124;
        tmp_call_result_362 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_364, mod_consts[399]);

        if (tmp_call_result_362 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3124;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_362);
    }
    {
        PyObject *tmp_called_value_365;
        PyObject *tmp_call_result_363;
        tmp_called_value_365 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_365 == NULL)) {
            tmp_called_value_365 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_365 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3157;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3157;
        tmp_call_result_363 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_365, mod_consts[400]);

        if (tmp_call_result_363 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3157;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_363);
    }
    {
        PyObject *tmp_called_value_366;
        PyObject *tmp_call_result_364;
        tmp_called_value_366 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_366 == NULL)) {
            tmp_called_value_366 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_366 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3171;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3171;
        tmp_call_result_364 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_366, mod_consts[401]);

        if (tmp_call_result_364 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3171;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_364);
    }
    {
        PyObject *tmp_called_value_367;
        PyObject *tmp_call_result_365;
        tmp_called_value_367 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_367 == NULL)) {
            tmp_called_value_367 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_367 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3178;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3178;
        tmp_call_result_365 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_367, mod_consts[402]);

        if (tmp_call_result_365 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3178;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_365);
    }
    {
        PyObject *tmp_called_value_368;
        PyObject *tmp_call_result_366;
        tmp_called_value_368 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_368 == NULL)) {
            tmp_called_value_368 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_368 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3185;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3185;
        tmp_call_result_366 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_368, mod_consts[403]);

        if (tmp_call_result_366 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3185;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_366);
    }
    {
        PyObject *tmp_called_value_369;
        PyObject *tmp_call_result_367;
        tmp_called_value_369 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_369 == NULL)) {
            tmp_called_value_369 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_369 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3192;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3192;
        tmp_call_result_367 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_369, mod_consts[404]);

        if (tmp_call_result_367 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3192;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_367);
    }
    {
        PyObject *tmp_called_value_370;
        PyObject *tmp_call_result_368;
        tmp_called_value_370 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_370 == NULL)) {
            tmp_called_value_370 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_370 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3199;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3199;
        tmp_call_result_368 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_370, mod_consts[405]);

        if (tmp_call_result_368 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3199;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_368);
    }
    {
        PyObject *tmp_called_value_371;
        PyObject *tmp_call_result_369;
        tmp_called_value_371 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_371 == NULL)) {
            tmp_called_value_371 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_371 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3206;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3206;
        tmp_call_result_369 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_371, mod_consts[406]);

        if (tmp_call_result_369 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3206;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_369);
    }
    {
        PyObject *tmp_called_value_372;
        PyObject *tmp_call_result_370;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_dircall_arg1_12;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_dircall_arg2_12;
        tmp_called_value_372 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_372 == NULL)) {
            tmp_called_value_372 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_372 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3298;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_23 = mod_consts[407];
        tmp_expression_value_12 = mod_consts[408];
        tmp_dircall_arg1_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[28]);
        assert(!(tmp_dircall_arg1_12 == NULL));
        tmp_dircall_arg2_12 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_dircall_arg2_12 == NULL)) {
            tmp_dircall_arg2_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_dircall_arg2_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_12);

            exception_lineno = 3348;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg2_12);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_12, tmp_dircall_arg2_12};
            tmp_args_element_value_24 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3299;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3298;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_call_result_370 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_372, call_args);
        }

        Py_DECREF(tmp_args_element_value_24);
        if (tmp_call_result_370 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3298;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_370);
    }
    {
        PyObject *tmp_called_value_373;
        PyObject *tmp_call_result_371;
        tmp_called_value_373 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_373 == NULL)) {
            tmp_called_value_373 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_373 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3350;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3350;
        tmp_call_result_371 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_373, mod_consts[409]);

        if (tmp_call_result_371 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3350;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_371);
    }
    {
        PyObject *tmp_called_value_374;
        PyObject *tmp_call_result_372;
        tmp_called_value_374 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_374 == NULL)) {
            tmp_called_value_374 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_374 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3368;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3368;
        tmp_call_result_372 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_374, mod_consts[410]);

        if (tmp_call_result_372 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3368;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_372);
    }
    {
        PyObject *tmp_called_value_375;
        PyObject *tmp_call_result_373;
        tmp_called_value_375 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_375 == NULL)) {
            tmp_called_value_375 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_375 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3387;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3387;
        tmp_call_result_373 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_375, mod_consts[411]);

        if (tmp_call_result_373 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3387;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_373);
    }
    {
        PyObject *tmp_called_value_376;
        PyObject *tmp_call_result_374;
        tmp_called_value_376 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_376 == NULL)) {
            tmp_called_value_376 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_376 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3394;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3394;
        tmp_call_result_374 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_376, mod_consts[412]);

        if (tmp_call_result_374 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3394;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_374);
    }
    {
        PyObject *tmp_called_value_377;
        PyObject *tmp_call_result_375;
        tmp_called_value_377 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_377 == NULL)) {
            tmp_called_value_377 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_377 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3401;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3401;
        tmp_call_result_375 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_377, mod_consts[413]);

        if (tmp_call_result_375 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3401;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_375);
    }
    {
        PyObject *tmp_called_value_378;
        PyObject *tmp_call_result_376;
        tmp_called_value_378 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_378 == NULL)) {
            tmp_called_value_378 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_378 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3408;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3408;
        tmp_call_result_376 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_378, mod_consts[414]);

        if (tmp_call_result_376 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3408;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_376);
    }
    {
        PyObject *tmp_called_value_379;
        PyObject *tmp_call_result_377;
        tmp_called_value_379 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_379 == NULL)) {
            tmp_called_value_379 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_379 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3415;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3415;
        tmp_call_result_377 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_379, mod_consts[415]);

        if (tmp_call_result_377 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3415;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_377);
    }
    {
        PyObject *tmp_called_value_380;
        PyObject *tmp_call_result_378;
        tmp_called_value_380 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_380 == NULL)) {
            tmp_called_value_380 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_380 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3422;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3422;
        tmp_call_result_378 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_380, mod_consts[416]);

        if (tmp_call_result_378 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3422;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_378);
    }
    {
        PyObject *tmp_called_value_381;
        PyObject *tmp_call_result_379;
        tmp_called_value_381 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_381 == NULL)) {
            tmp_called_value_381 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_381 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3429;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3429;
        tmp_call_result_379 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_381, mod_consts[417]);

        if (tmp_call_result_379 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3429;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_379);
    }
    {
        PyObject *tmp_called_value_382;
        PyObject *tmp_call_result_380;
        tmp_called_value_382 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_382 == NULL)) {
            tmp_called_value_382 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_382 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3436;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3436;
        tmp_call_result_380 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_382, mod_consts[418]);

        if (tmp_call_result_380 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3436;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_380);
    }
    {
        PyObject *tmp_called_value_383;
        PyObject *tmp_call_result_381;
        tmp_called_value_383 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_383 == NULL)) {
            tmp_called_value_383 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_383 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3443;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3443;
        tmp_call_result_381 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_383, mod_consts[419]);

        if (tmp_call_result_381 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3443;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_381);
    }
    {
        PyObject *tmp_called_value_384;
        PyObject *tmp_call_result_382;
        tmp_called_value_384 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_384 == NULL)) {
            tmp_called_value_384 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_384 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3450;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3450;
        tmp_call_result_382 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_384, mod_consts[420]);

        if (tmp_call_result_382 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3450;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_382);
    }
    {
        PyObject *tmp_called_value_385;
        PyObject *tmp_call_result_383;
        tmp_called_value_385 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_385 == NULL)) {
            tmp_called_value_385 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_385 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3457;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3457;
        tmp_call_result_383 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_385, mod_consts[421]);

        if (tmp_call_result_383 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3457;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_383);
    }
    {
        PyObject *tmp_called_value_386;
        PyObject *tmp_call_result_384;
        tmp_called_value_386 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_386 == NULL)) {
            tmp_called_value_386 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_386 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3464;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3464;
        tmp_call_result_384 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_386, mod_consts[422]);

        if (tmp_call_result_384 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3464;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_384);
    }
    {
        PyObject *tmp_called_value_387;
        PyObject *tmp_call_result_385;
        tmp_called_value_387 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_387 == NULL)) {
            tmp_called_value_387 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_387 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3471;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3471;
        tmp_call_result_385 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_387, mod_consts[423]);

        if (tmp_call_result_385 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3471;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_385);
    }
    {
        PyObject *tmp_called_value_388;
        PyObject *tmp_call_result_386;
        tmp_called_value_388 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_388 == NULL)) {
            tmp_called_value_388 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_388 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3478;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3478;
        tmp_call_result_386 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_388, mod_consts[424]);

        if (tmp_call_result_386 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3478;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_386);
    }
    {
        PyObject *tmp_called_value_389;
        PyObject *tmp_call_result_387;
        tmp_called_value_389 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_389 == NULL)) {
            tmp_called_value_389 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_389 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3485;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3485;
        tmp_call_result_387 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_389, mod_consts[425]);

        if (tmp_call_result_387 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3485;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_387);
    }
    {
        PyObject *tmp_called_value_390;
        PyObject *tmp_call_result_388;
        tmp_called_value_390 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_390 == NULL)) {
            tmp_called_value_390 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_390 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3492;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3492;
        tmp_call_result_388 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_390, mod_consts[426]);

        if (tmp_call_result_388 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3492;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_388);
    }
    {
        PyObject *tmp_called_value_391;
        PyObject *tmp_call_result_389;
        tmp_called_value_391 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_391 == NULL)) {
            tmp_called_value_391 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_391 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3513;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3513;
        tmp_call_result_389 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_391, mod_consts[427]);

        if (tmp_call_result_389 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3513;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_389);
    }
    {
        PyObject *tmp_called_value_392;
        PyObject *tmp_call_result_390;
        tmp_called_value_392 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_392 == NULL)) {
            tmp_called_value_392 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_392 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3520;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3520;
        tmp_call_result_390 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_392, mod_consts[428]);

        if (tmp_call_result_390 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3520;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_390);
    }
    {
        PyObject *tmp_called_value_393;
        PyObject *tmp_call_result_391;
        tmp_called_value_393 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_393 == NULL)) {
            tmp_called_value_393 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_393 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3527;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3527;
        tmp_call_result_391 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_393, mod_consts[429]);

        if (tmp_call_result_391 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3527;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_391);
    }
    {
        PyObject *tmp_called_value_394;
        PyObject *tmp_call_result_392;
        tmp_called_value_394 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_394 == NULL)) {
            tmp_called_value_394 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_394 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3534;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3534;
        tmp_call_result_392 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_394, mod_consts[430]);

        if (tmp_call_result_392 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3534;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_392);
    }
    {
        PyObject *tmp_called_value_395;
        PyObject *tmp_call_result_393;
        tmp_called_value_395 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_395 == NULL)) {
            tmp_called_value_395 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_395 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3541;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3541;
        tmp_call_result_393 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_395, mod_consts[431]);

        if (tmp_call_result_393 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3541;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_393);
    }
    {
        PyObject *tmp_called_value_396;
        PyObject *tmp_call_result_394;
        tmp_called_value_396 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_396 == NULL)) {
            tmp_called_value_396 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_396 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3553;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3553;
        tmp_call_result_394 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_396, mod_consts[432]);

        if (tmp_call_result_394 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3553;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_394);
    }
    {
        PyObject *tmp_called_value_397;
        PyObject *tmp_call_result_395;
        tmp_called_value_397 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_397 == NULL)) {
            tmp_called_value_397 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_397 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3583;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3583;
        tmp_call_result_395 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_397, mod_consts[433]);

        if (tmp_call_result_395 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3583;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_395);
    }
    {
        PyObject *tmp_called_value_398;
        PyObject *tmp_call_result_396;
        tmp_called_value_398 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_398 == NULL)) {
            tmp_called_value_398 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_398 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3600;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3600;
        tmp_call_result_396 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_398, mod_consts[434]);

        if (tmp_call_result_396 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3600;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_396);
    }
    {
        PyObject *tmp_called_value_399;
        PyObject *tmp_call_result_397;
        tmp_called_value_399 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_399 == NULL)) {
            tmp_called_value_399 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_399 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3607;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3607;
        tmp_call_result_397 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_399, mod_consts[435]);

        if (tmp_call_result_397 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3607;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_397);
    }
    {
        PyObject *tmp_called_value_400;
        PyObject *tmp_call_result_398;
        tmp_called_value_400 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_400 == NULL)) {
            tmp_called_value_400 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_400 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3614;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3614;
        tmp_call_result_398 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_400, mod_consts[436]);

        if (tmp_call_result_398 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3614;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_398);
    }
    {
        PyObject *tmp_called_value_401;
        PyObject *tmp_call_result_399;
        tmp_called_value_401 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_401 == NULL)) {
            tmp_called_value_401 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_401 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3621;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3621;
        tmp_call_result_399 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_401, mod_consts[437]);

        if (tmp_call_result_399 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3621;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_399);
    }
    {
        PyObject *tmp_called_value_402;
        PyObject *tmp_call_result_400;
        tmp_called_value_402 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_402 == NULL)) {
            tmp_called_value_402 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_402 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3628;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3628;
        tmp_call_result_400 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_402, mod_consts[438]);

        if (tmp_call_result_400 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3628;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_400);
    }
    {
        PyObject *tmp_called_value_403;
        PyObject *tmp_call_result_401;
        tmp_called_value_403 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_403 == NULL)) {
            tmp_called_value_403 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_403 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3635;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3635;
        tmp_call_result_401 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_403, mod_consts[439]);

        if (tmp_call_result_401 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3635;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_401);
    }
    {
        PyObject *tmp_called_value_404;
        PyObject *tmp_call_result_402;
        tmp_called_value_404 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_404 == NULL)) {
            tmp_called_value_404 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_404 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3642;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3642;
        tmp_call_result_402 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_404, mod_consts[440]);

        if (tmp_call_result_402 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3642;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_402);
    }
    {
        PyObject *tmp_called_value_405;
        PyObject *tmp_call_result_403;
        tmp_called_value_405 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_405 == NULL)) {
            tmp_called_value_405 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_405 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3654;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3654;
        tmp_call_result_403 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_405, mod_consts[441]);

        if (tmp_call_result_403 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3654;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_403);
    }
    {
        PyObject *tmp_called_value_406;
        PyObject *tmp_call_result_404;
        tmp_called_value_406 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_406 == NULL)) {
            tmp_called_value_406 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_406 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3661;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3661;
        tmp_call_result_404 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_406, mod_consts[442]);

        if (tmp_call_result_404 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3661;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_404);
    }
    {
        PyObject *tmp_called_value_407;
        PyObject *tmp_call_result_405;
        tmp_called_value_407 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_407 == NULL)) {
            tmp_called_value_407 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_407 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3678;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3678;
        tmp_call_result_405 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_407, mod_consts[443]);

        if (tmp_call_result_405 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3678;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_405);
    }
    {
        PyObject *tmp_called_value_408;
        PyObject *tmp_call_result_406;
        tmp_called_value_408 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_408 == NULL)) {
            tmp_called_value_408 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_408 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3685;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3685;
        tmp_call_result_406 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_408, mod_consts[444]);

        if (tmp_call_result_406 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3685;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_406);
    }
    {
        PyObject *tmp_called_value_409;
        PyObject *tmp_call_result_407;
        tmp_called_value_409 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_409 == NULL)) {
            tmp_called_value_409 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_409 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3711;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3711;
        tmp_call_result_407 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_409, mod_consts[445]);

        if (tmp_call_result_407 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3711;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_407);
    }
    {
        PyObject *tmp_called_value_410;
        PyObject *tmp_call_result_408;
        tmp_called_value_410 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_410 == NULL)) {
            tmp_called_value_410 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_410 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3717;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3717;
        tmp_call_result_408 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_410, mod_consts[446]);

        if (tmp_call_result_408 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3717;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_408);
    }
    {
        PyObject *tmp_called_value_411;
        PyObject *tmp_call_result_409;
        tmp_called_value_411 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_411 == NULL)) {
            tmp_called_value_411 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_411 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3724;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3724;
        tmp_call_result_409 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_411, mod_consts[447]);

        if (tmp_call_result_409 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3724;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_409);
    }
    {
        PyObject *tmp_called_value_412;
        PyObject *tmp_call_result_410;
        tmp_called_value_412 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_412 == NULL)) {
            tmp_called_value_412 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_412 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3730;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3730;
        tmp_call_result_410 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_412, mod_consts[448]);

        if (tmp_call_result_410 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3730;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_410);
    }
    {
        PyObject *tmp_called_value_413;
        PyObject *tmp_call_result_411;
        tmp_called_value_413 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_413 == NULL)) {
            tmp_called_value_413 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_413 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3736;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3736;
        tmp_call_result_411 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_413, mod_consts[449]);

        if (tmp_call_result_411 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3736;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_411);
    }
    {
        PyObject *tmp_called_value_414;
        PyObject *tmp_call_result_412;
        tmp_called_value_414 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_414 == NULL)) {
            tmp_called_value_414 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_414 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3743;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3743;
        tmp_call_result_412 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_414, mod_consts[450]);

        if (tmp_call_result_412 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3743;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_412);
    }
    {
        PyObject *tmp_called_value_415;
        PyObject *tmp_call_result_413;
        tmp_called_value_415 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_415 == NULL)) {
            tmp_called_value_415 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_415 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3750;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3750;
        tmp_call_result_413 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_415, mod_consts[451]);

        if (tmp_call_result_413 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3750;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_413);
    }
    {
        PyObject *tmp_called_value_416;
        PyObject *tmp_call_result_414;
        tmp_called_value_416 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_416 == NULL)) {
            tmp_called_value_416 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_416 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3757;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3757;
        tmp_call_result_414 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_416, mod_consts[452]);

        if (tmp_call_result_414 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3757;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_414);
    }
    {
        PyObject *tmp_called_value_417;
        PyObject *tmp_call_result_415;
        tmp_called_value_417 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_417 == NULL)) {
            tmp_called_value_417 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_417 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3764;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3764;
        tmp_call_result_415 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_417, mod_consts[453]);

        if (tmp_call_result_415 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3764;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_415);
    }
    {
        PyObject *tmp_called_value_418;
        PyObject *tmp_call_result_416;
        tmp_called_value_418 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_418 == NULL)) {
            tmp_called_value_418 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_418 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3770;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3770;
        tmp_call_result_416 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_418, mod_consts[454]);

        if (tmp_call_result_416 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3770;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_416);
    }
    {
        PyObject *tmp_called_value_419;
        PyObject *tmp_call_result_417;
        tmp_called_value_419 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_419 == NULL)) {
            tmp_called_value_419 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_419 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3777;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3777;
        tmp_call_result_417 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_419, mod_consts[455]);

        if (tmp_call_result_417 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3777;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_417);
    }
    {
        PyObject *tmp_called_value_420;
        PyObject *tmp_call_result_418;
        tmp_called_value_420 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_420 == NULL)) {
            tmp_called_value_420 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_420 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3783;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3783;
        tmp_call_result_418 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_420, mod_consts[456]);

        if (tmp_call_result_418 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3783;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_418);
    }
    {
        PyObject *tmp_called_value_421;
        PyObject *tmp_call_result_419;
        tmp_called_value_421 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_421 == NULL)) {
            tmp_called_value_421 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_421 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3789;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3789;
        tmp_call_result_419 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_421, mod_consts[457]);

        if (tmp_call_result_419 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3789;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_419);
    }
    {
        PyObject *tmp_called_value_422;
        PyObject *tmp_call_result_420;
        tmp_called_value_422 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_422 == NULL)) {
            tmp_called_value_422 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_422 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3796;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3796;
        tmp_call_result_420 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_422, mod_consts[458]);

        if (tmp_call_result_420 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3796;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_420);
    }
    {
        PyObject *tmp_called_value_423;
        PyObject *tmp_call_result_421;
        tmp_called_value_423 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_423 == NULL)) {
            tmp_called_value_423 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_423 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3803;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3803;
        tmp_call_result_421 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_423, mod_consts[459]);

        if (tmp_call_result_421 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3803;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_421);
    }
    {
        PyObject *tmp_called_value_424;
        PyObject *tmp_call_result_422;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_dircall_arg1_13;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_dircall_arg2_13;
        tmp_called_value_424 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_424 == NULL)) {
            tmp_called_value_424 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_424 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3810;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = mod_consts[460];
        tmp_expression_value_13 = mod_consts[461];
        tmp_dircall_arg1_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[28]);
        assert(!(tmp_dircall_arg1_13 == NULL));
        tmp_dircall_arg2_13 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_dircall_arg2_13 == NULL)) {
            tmp_dircall_arg2_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_dircall_arg2_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_13);

            exception_lineno = 3878;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg2_13);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_13, tmp_dircall_arg2_13};
            tmp_args_element_value_26 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3811;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3810;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_call_result_422 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_424, call_args);
        }

        Py_DECREF(tmp_args_element_value_26);
        if (tmp_call_result_422 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3810;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_422);
    }
    {
        PyObject *tmp_called_value_425;
        PyObject *tmp_call_result_423;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_dircall_arg1_14;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_dircall_arg2_14;
        tmp_called_value_425 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_425 == NULL)) {
            tmp_called_value_425 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_425 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3880;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_27 = mod_consts[462];
        tmp_expression_value_14 = mod_consts[463];
        tmp_dircall_arg1_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[28]);
        assert(!(tmp_dircall_arg1_14 == NULL));
        tmp_dircall_arg2_14 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_dircall_arg2_14 == NULL)) {
            tmp_dircall_arg2_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_dircall_arg2_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_14);

            exception_lineno = 3888;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg2_14);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_14, tmp_dircall_arg2_14};
            tmp_args_element_value_28 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3881;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3880;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_call_result_423 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_425, call_args);
        }

        Py_DECREF(tmp_args_element_value_28);
        if (tmp_call_result_423 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3880;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_423);
    }
    {
        PyObject *tmp_called_value_426;
        PyObject *tmp_call_result_424;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_dircall_arg1_15;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_dircall_arg2_15;
        tmp_called_value_426 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_426 == NULL)) {
            tmp_called_value_426 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_426 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3890;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = mod_consts[464];
        tmp_expression_value_15 = mod_consts[465];
        tmp_dircall_arg1_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[28]);
        assert(!(tmp_dircall_arg1_15 == NULL));
        tmp_dircall_arg2_15 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_dircall_arg2_15 == NULL)) {
            tmp_dircall_arg2_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_dircall_arg2_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_15);

            exception_lineno = 3898;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg2_15);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_15, tmp_dircall_arg2_15};
            tmp_args_element_value_30 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3891;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3890;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_call_result_424 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_426, call_args);
        }

        Py_DECREF(tmp_args_element_value_30);
        if (tmp_call_result_424 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3890;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_424);
    }
    {
        PyObject *tmp_called_value_427;
        PyObject *tmp_call_result_425;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_dircall_arg1_16;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_dircall_arg2_16;
        tmp_called_value_427 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_427 == NULL)) {
            tmp_called_value_427 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_427 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3900;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_31 = mod_consts[466];
        tmp_expression_value_16 = mod_consts[467];
        tmp_dircall_arg1_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[28]);
        assert(!(tmp_dircall_arg1_16 == NULL));
        tmp_dircall_arg2_16 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_dircall_arg2_16 == NULL)) {
            tmp_dircall_arg2_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_dircall_arg2_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_16);

            exception_lineno = 3908;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg2_16);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_16, tmp_dircall_arg2_16};
            tmp_args_element_value_32 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3901;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3900;
        {
            PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32};
            tmp_call_result_425 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_427, call_args);
        }

        Py_DECREF(tmp_args_element_value_32);
        if (tmp_call_result_425 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3900;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_425);
    }
    {
        PyObject *tmp_called_value_428;
        PyObject *tmp_call_result_426;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_dircall_arg1_17;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_dircall_arg2_17;
        tmp_called_value_428 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_428 == NULL)) {
            tmp_called_value_428 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_428 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3910;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_33 = mod_consts[468];
        tmp_expression_value_17 = mod_consts[469];
        tmp_dircall_arg1_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[28]);
        assert(!(tmp_dircall_arg1_17 == NULL));
        tmp_dircall_arg2_17 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_dircall_arg2_17 == NULL)) {
            tmp_dircall_arg2_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_dircall_arg2_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_17);

            exception_lineno = 3917;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg2_17);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_17, tmp_dircall_arg2_17};
            tmp_args_element_value_34 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3911;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3910;
        {
            PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34};
            tmp_call_result_426 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_428, call_args);
        }

        Py_DECREF(tmp_args_element_value_34);
        if (tmp_call_result_426 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3910;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_426);
    }
    {
        PyObject *tmp_called_value_429;
        PyObject *tmp_call_result_427;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_dircall_arg1_18;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_dircall_arg2_18;
        tmp_called_value_429 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_429 == NULL)) {
            tmp_called_value_429 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_429 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3919;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_35 = mod_consts[470];
        tmp_expression_value_18 = mod_consts[471];
        tmp_dircall_arg1_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[28]);
        assert(!(tmp_dircall_arg1_18 == NULL));
        tmp_dircall_arg2_18 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_dircall_arg2_18 == NULL)) {
            tmp_dircall_arg2_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_dircall_arg2_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_18);

            exception_lineno = 3927;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg2_18);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_18, tmp_dircall_arg2_18};
            tmp_args_element_value_36 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3920;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3919;
        {
            PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36};
            tmp_call_result_427 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_429, call_args);
        }

        Py_DECREF(tmp_args_element_value_36);
        if (tmp_call_result_427 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3919;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_427);
    }
    {
        PyObject *tmp_called_value_430;
        PyObject *tmp_call_result_428;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_dircall_arg1_19;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_dircall_arg2_19;
        tmp_called_value_430 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_430 == NULL)) {
            tmp_called_value_430 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_430 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3929;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_37 = mod_consts[472];
        tmp_expression_value_19 = mod_consts[473];
        tmp_dircall_arg1_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[28]);
        assert(!(tmp_dircall_arg1_19 == NULL));
        tmp_dircall_arg2_19 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_dircall_arg2_19 == NULL)) {
            tmp_dircall_arg2_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_dircall_arg2_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_19);

            exception_lineno = 3937;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg2_19);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_19, tmp_dircall_arg2_19};
            tmp_args_element_value_38 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3930;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3929;
        {
            PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38};
            tmp_call_result_428 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_430, call_args);
        }

        Py_DECREF(tmp_args_element_value_38);
        if (tmp_call_result_428 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3929;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_428);
    }
    {
        PyObject *tmp_called_value_431;
        PyObject *tmp_call_result_429;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_dircall_arg1_20;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_dircall_arg2_20;
        tmp_called_value_431 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_431 == NULL)) {
            tmp_called_value_431 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_431 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3939;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_39 = mod_consts[474];
        tmp_expression_value_20 = mod_consts[475];
        tmp_dircall_arg1_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[28]);
        assert(!(tmp_dircall_arg1_20 == NULL));
        tmp_dircall_arg2_20 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_dircall_arg2_20 == NULL)) {
            tmp_dircall_arg2_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_dircall_arg2_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_20);

            exception_lineno = 3947;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg2_20);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_20, tmp_dircall_arg2_20};
            tmp_args_element_value_40 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3940;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3939;
        {
            PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40};
            tmp_call_result_429 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_431, call_args);
        }

        Py_DECREF(tmp_args_element_value_40);
        if (tmp_call_result_429 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3939;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_429);
    }
    {
        PyObject *tmp_called_value_432;
        PyObject *tmp_call_result_430;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_dircall_arg1_21;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_dircall_arg2_21;
        tmp_called_value_432 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_432 == NULL)) {
            tmp_called_value_432 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_432 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3949;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_41 = mod_consts[476];
        tmp_expression_value_21 = mod_consts[477];
        tmp_dircall_arg1_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[28]);
        assert(!(tmp_dircall_arg1_21 == NULL));
        tmp_dircall_arg2_21 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_dircall_arg2_21 == NULL)) {
            tmp_dircall_arg2_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_dircall_arg2_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_21);

            exception_lineno = 3957;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg2_21);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_21, tmp_dircall_arg2_21};
            tmp_args_element_value_42 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3950;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3949;
        {
            PyObject *call_args[] = {tmp_args_element_value_41, tmp_args_element_value_42};
            tmp_call_result_430 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_432, call_args);
        }

        Py_DECREF(tmp_args_element_value_42);
        if (tmp_call_result_430 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3949;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_430);
    }
    {
        PyObject *tmp_called_value_433;
        PyObject *tmp_call_result_431;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_dircall_arg1_22;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_dircall_arg2_22;
        tmp_called_value_433 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_433 == NULL)) {
            tmp_called_value_433 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_433 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3959;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_43 = mod_consts[478];
        tmp_expression_value_22 = mod_consts[479];
        tmp_dircall_arg1_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[28]);
        assert(!(tmp_dircall_arg1_22 == NULL));
        tmp_dircall_arg2_22 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_dircall_arg2_22 == NULL)) {
            tmp_dircall_arg2_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_dircall_arg2_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_22);

            exception_lineno = 3967;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg2_22);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_22, tmp_dircall_arg2_22};
            tmp_args_element_value_44 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3960;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3959;
        {
            PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44};
            tmp_call_result_431 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_433, call_args);
        }

        Py_DECREF(tmp_args_element_value_44);
        if (tmp_call_result_431 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3959;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_431);
    }
    {
        PyObject *tmp_called_value_434;
        PyObject *tmp_call_result_432;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_dircall_arg1_23;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_dircall_arg2_23;
        tmp_called_value_434 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_434 == NULL)) {
            tmp_called_value_434 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_434 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3969;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_45 = mod_consts[480];
        tmp_expression_value_23 = mod_consts[481];
        tmp_dircall_arg1_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[28]);
        assert(!(tmp_dircall_arg1_23 == NULL));
        tmp_dircall_arg2_23 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_dircall_arg2_23 == NULL)) {
            tmp_dircall_arg2_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_dircall_arg2_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_23);

            exception_lineno = 3977;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg2_23);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_23, tmp_dircall_arg2_23};
            tmp_args_element_value_46 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3970;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3969;
        {
            PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46};
            tmp_call_result_432 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_434, call_args);
        }

        Py_DECREF(tmp_args_element_value_46);
        if (tmp_call_result_432 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3969;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_432);
    }
    {
        PyObject *tmp_called_value_435;
        PyObject *tmp_call_result_433;
        tmp_called_value_435 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_435 == NULL)) {
            tmp_called_value_435 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_435 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3979;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3979;
        tmp_call_result_433 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_435, mod_consts[482]);

        if (tmp_call_result_433 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3979;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_433);
    }
    {
        PyObject *tmp_called_value_436;
        PyObject *tmp_call_result_434;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_dircall_arg1_24;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_dircall_arg2_24;
        tmp_called_value_436 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_436 == NULL)) {
            tmp_called_value_436 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_436 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3989;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_47 = mod_consts[483];
        tmp_expression_value_24 = mod_consts[484];
        tmp_dircall_arg1_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[28]);
        assert(!(tmp_dircall_arg1_24 == NULL));
        tmp_dircall_arg2_24 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_dircall_arg2_24 == NULL)) {
            tmp_dircall_arg2_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_dircall_arg2_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_24);

            exception_lineno = 3997;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg2_24);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_24, tmp_dircall_arg2_24};
            tmp_args_element_value_48 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3990;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3989;
        {
            PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_48};
            tmp_call_result_434 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_436, call_args);
        }

        Py_DECREF(tmp_args_element_value_48);
        if (tmp_call_result_434 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3989;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_434);
    }
    {
        PyObject *tmp_called_value_437;
        PyObject *tmp_call_result_435;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_dircall_arg1_25;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_dircall_arg2_25;
        tmp_called_value_437 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_437 == NULL)) {
            tmp_called_value_437 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_437 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3999;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_49 = mod_consts[485];
        tmp_expression_value_25 = mod_consts[486];
        tmp_dircall_arg1_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[28]);
        assert(!(tmp_dircall_arg1_25 == NULL));
        tmp_dircall_arg2_25 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_dircall_arg2_25 == NULL)) {
            tmp_dircall_arg2_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_dircall_arg2_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_25);

            exception_lineno = 4007;

            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg2_25);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_25, tmp_dircall_arg2_25};
            tmp_args_element_value_50 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_args_element_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4000;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 3999;
        {
            PyObject *call_args[] = {tmp_args_element_value_49, tmp_args_element_value_50};
            tmp_call_result_435 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_437, call_args);
        }

        Py_DECREF(tmp_args_element_value_50);
        if (tmp_call_result_435 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3999;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_435);
    }
    {
        PyObject *tmp_called_value_438;
        PyObject *tmp_call_result_436;
        tmp_called_value_438 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_438 == NULL)) {
            tmp_called_value_438 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_438 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4009;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4009;
        tmp_call_result_436 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_438, mod_consts[487]);

        if (tmp_call_result_436 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4009;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_436);
    }
    {
        PyObject *tmp_called_value_439;
        PyObject *tmp_call_result_437;
        tmp_called_value_439 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_439 == NULL)) {
            tmp_called_value_439 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_439 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4016;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4016;
        tmp_call_result_437 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_439, mod_consts[488]);

        if (tmp_call_result_437 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4016;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_437);
    }
    {
        PyObject *tmp_called_value_440;
        PyObject *tmp_call_result_438;
        tmp_called_value_440 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_440 == NULL)) {
            tmp_called_value_440 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_440 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4023;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4023;
        tmp_call_result_438 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_440, mod_consts[489]);

        if (tmp_call_result_438 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4023;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_438);
    }
    {
        PyObject *tmp_called_value_441;
        PyObject *tmp_call_result_439;
        tmp_called_value_441 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_441 == NULL)) {
            tmp_called_value_441 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_441 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4030;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4030;
        tmp_call_result_439 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_441, mod_consts[490]);

        if (tmp_call_result_439 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4030;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_439);
    }
    {
        PyObject *tmp_called_value_442;
        PyObject *tmp_call_result_440;
        tmp_called_value_442 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_442 == NULL)) {
            tmp_called_value_442 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_442 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4037;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4037;
        tmp_call_result_440 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_442, mod_consts[491]);

        if (tmp_call_result_440 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4037;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_440);
    }
    {
        PyObject *tmp_called_value_443;
        PyObject *tmp_call_result_441;
        tmp_called_value_443 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_443 == NULL)) {
            tmp_called_value_443 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_443 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4044;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4044;
        tmp_call_result_441 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_443, mod_consts[492]);

        if (tmp_call_result_441 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4044;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_441);
    }
    {
        PyObject *tmp_called_value_444;
        PyObject *tmp_call_result_442;
        tmp_called_value_444 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_444 == NULL)) {
            tmp_called_value_444 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_444 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4051;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4051;
        tmp_call_result_442 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_444, mod_consts[493]);

        if (tmp_call_result_442 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4051;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_442);
    }
    {
        PyObject *tmp_called_value_445;
        PyObject *tmp_call_result_443;
        tmp_called_value_445 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_445 == NULL)) {
            tmp_called_value_445 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_445 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4071;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4071;
        tmp_call_result_443 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_445, mod_consts[494]);

        if (tmp_call_result_443 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4071;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_443);
    }
    {
        PyObject *tmp_called_value_446;
        PyObject *tmp_call_result_444;
        tmp_called_value_446 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_446 == NULL)) {
            tmp_called_value_446 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_446 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4078;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4078;
        tmp_call_result_444 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_446, mod_consts[495]);

        if (tmp_call_result_444 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4078;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_444);
    }
    {
        PyObject *tmp_called_value_447;
        PyObject *tmp_call_result_445;
        tmp_called_value_447 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_447 == NULL)) {
            tmp_called_value_447 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_447 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4100;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4100;
        tmp_call_result_445 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_447, mod_consts[496]);

        if (tmp_call_result_445 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4100;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_445);
    }
    {
        PyObject *tmp_called_value_448;
        PyObject *tmp_call_result_446;
        tmp_called_value_448 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_448 == NULL)) {
            tmp_called_value_448 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_448 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4127;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4127;
        tmp_call_result_446 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_448, mod_consts[497]);

        if (tmp_call_result_446 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4127;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_446);
    }
    {
        PyObject *tmp_called_value_449;
        PyObject *tmp_call_result_447;
        tmp_called_value_449 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_449 == NULL)) {
            tmp_called_value_449 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_449 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4134;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4134;
        tmp_call_result_447 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_449, mod_consts[498]);

        if (tmp_call_result_447 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4134;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_447);
    }
    {
        PyObject *tmp_called_value_450;
        PyObject *tmp_call_result_448;
        tmp_called_value_450 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_450 == NULL)) {
            tmp_called_value_450 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_450 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4141;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4141;
        tmp_call_result_448 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_450, mod_consts[499]);

        if (tmp_call_result_448 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4141;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_448);
    }
    {
        PyObject *tmp_called_value_451;
        PyObject *tmp_call_result_449;
        tmp_called_value_451 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_451 == NULL)) {
            tmp_called_value_451 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_451 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4148;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4148;
        tmp_call_result_449 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_451, mod_consts[500]);

        if (tmp_call_result_449 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4148;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_449);
    }
    {
        PyObject *tmp_called_value_452;
        PyObject *tmp_call_result_450;
        tmp_called_value_452 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_452 == NULL)) {
            tmp_called_value_452 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_452 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4155;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4155;
        tmp_call_result_450 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_452, mod_consts[501]);

        if (tmp_call_result_450 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4155;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_450);
    }
    {
        PyObject *tmp_called_value_453;
        PyObject *tmp_call_result_451;
        tmp_called_value_453 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_453 == NULL)) {
            tmp_called_value_453 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_453 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4162;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4162;
        tmp_call_result_451 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_453, mod_consts[502]);

        if (tmp_call_result_451 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4162;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_451);
    }
    {
        PyObject *tmp_called_value_454;
        PyObject *tmp_call_result_452;
        tmp_called_value_454 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_454 == NULL)) {
            tmp_called_value_454 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_454 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4169;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4169;
        tmp_call_result_452 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_454, mod_consts[503]);

        if (tmp_call_result_452 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4169;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_452);
    }
    {
        PyObject *tmp_called_value_455;
        PyObject *tmp_call_result_453;
        tmp_called_value_455 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_455 == NULL)) {
            tmp_called_value_455 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_455 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4176;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4176;
        tmp_call_result_453 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_455, mod_consts[504]);

        if (tmp_call_result_453 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4176;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_453);
    }
    {
        PyObject *tmp_called_value_456;
        PyObject *tmp_call_result_454;
        tmp_called_value_456 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_456 == NULL)) {
            tmp_called_value_456 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_456 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4183;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4183;
        tmp_call_result_454 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_456, mod_consts[505]);

        if (tmp_call_result_454 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4183;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_454);
    }
    {
        PyObject *tmp_called_value_457;
        PyObject *tmp_call_result_455;
        tmp_called_value_457 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_457 == NULL)) {
            tmp_called_value_457 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_457 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4190;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4190;
        tmp_call_result_455 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_457, mod_consts[506]);

        if (tmp_call_result_455 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4190;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_455);
    }
    {
        PyObject *tmp_called_value_458;
        PyObject *tmp_call_result_456;
        tmp_called_value_458 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_458 == NULL)) {
            tmp_called_value_458 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_458 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4197;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4197;
        tmp_call_result_456 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_458, mod_consts[507]);

        if (tmp_call_result_456 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4197;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_456);
    }
    {
        PyObject *tmp_called_value_459;
        PyObject *tmp_call_result_457;
        tmp_called_value_459 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_459 == NULL)) {
            tmp_called_value_459 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_459 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4204;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4204;
        tmp_call_result_457 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_459, mod_consts[508]);

        if (tmp_call_result_457 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4204;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_457);
    }
    {
        PyObject *tmp_called_value_460;
        PyObject *tmp_call_result_458;
        tmp_called_value_460 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_460 == NULL)) {
            tmp_called_value_460 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_460 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4211;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4211;
        tmp_call_result_458 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_460, mod_consts[509]);

        if (tmp_call_result_458 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4211;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_458);
    }
    {
        PyObject *tmp_called_value_461;
        PyObject *tmp_call_result_459;
        tmp_called_value_461 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_461 == NULL)) {
            tmp_called_value_461 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_461 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4218;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4218;
        tmp_call_result_459 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_461, mod_consts[510]);

        if (tmp_call_result_459 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4218;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_459);
    }
    {
        PyObject *tmp_called_value_462;
        PyObject *tmp_call_result_460;
        tmp_called_value_462 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_462 == NULL)) {
            tmp_called_value_462 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_462 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4225;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4225;
        tmp_call_result_460 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_462, mod_consts[511]);

        if (tmp_call_result_460 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4225;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_460);
    }
    {
        PyObject *tmp_called_value_463;
        PyObject *tmp_call_result_461;
        tmp_called_value_463 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_463 == NULL)) {
            tmp_called_value_463 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_463 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4232;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4232;
        tmp_call_result_461 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_463, mod_consts[512]);

        if (tmp_call_result_461 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4232;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_461);
    }
    {
        PyObject *tmp_called_value_464;
        PyObject *tmp_call_result_462;
        tmp_called_value_464 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_464 == NULL)) {
            tmp_called_value_464 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_464 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4251;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4251;
        tmp_call_result_462 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_464, mod_consts[513]);

        if (tmp_call_result_462 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4251;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_462);
    }
    {
        PyObject *tmp_called_value_465;
        PyObject *tmp_call_result_463;
        tmp_called_value_465 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_465 == NULL)) {
            tmp_called_value_465 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_465 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4264;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4264;
        tmp_call_result_463 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_465, mod_consts[514]);

        if (tmp_call_result_463 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4264;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_463);
    }
    {
        PyObject *tmp_called_value_466;
        PyObject *tmp_call_result_464;
        tmp_called_value_466 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_466 == NULL)) {
            tmp_called_value_466 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_466 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4302;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4302;
        tmp_call_result_464 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_466, mod_consts[515]);

        if (tmp_call_result_464 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4302;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_464);
    }
    {
        PyObject *tmp_called_value_467;
        PyObject *tmp_call_result_465;
        tmp_called_value_467 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_467 == NULL)) {
            tmp_called_value_467 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_467 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4313;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4313;
        tmp_call_result_465 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_467, mod_consts[516]);

        if (tmp_call_result_465 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4313;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_465);
    }
    {
        PyObject *tmp_called_value_468;
        PyObject *tmp_call_result_466;
        tmp_called_value_468 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_468 == NULL)) {
            tmp_called_value_468 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_468 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4320;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4320;
        tmp_call_result_466 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_468, mod_consts[517]);

        if (tmp_call_result_466 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4320;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_466);
    }
    {
        PyObject *tmp_called_value_469;
        PyObject *tmp_call_result_467;
        tmp_called_value_469 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_469 == NULL)) {
            tmp_called_value_469 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_469 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4327;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4327;
        tmp_call_result_467 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_469, mod_consts[518]);

        if (tmp_call_result_467 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4327;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_467);
    }
    {
        PyObject *tmp_called_value_470;
        PyObject *tmp_call_result_468;
        tmp_called_value_470 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_470 == NULL)) {
            tmp_called_value_470 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_470 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4339;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4339;
        tmp_call_result_468 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_470, mod_consts[519]);

        if (tmp_call_result_468 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4339;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_468);
    }
    {
        PyObject *tmp_called_value_471;
        PyObject *tmp_call_result_469;
        tmp_called_value_471 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_471 == NULL)) {
            tmp_called_value_471 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_471 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4346;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4346;
        tmp_call_result_469 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_471, mod_consts[520]);

        if (tmp_call_result_469 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4346;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_469);
    }
    {
        PyObject *tmp_called_value_472;
        PyObject *tmp_call_result_470;
        tmp_called_value_472 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_472 == NULL)) {
            tmp_called_value_472 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_472 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4445;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4445;
        tmp_call_result_470 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_472, mod_consts[521]);

        if (tmp_call_result_470 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4445;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_470);
    }
    {
        PyObject *tmp_called_value_473;
        PyObject *tmp_call_result_471;
        tmp_called_value_473 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_473 == NULL)) {
            tmp_called_value_473 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_473 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4459;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4459;
        tmp_call_result_471 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_473, mod_consts[522]);

        if (tmp_call_result_471 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4459;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_471);
    }
    {
        PyObject *tmp_called_value_474;
        PyObject *tmp_call_result_472;
        tmp_called_value_474 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_474 == NULL)) {
            tmp_called_value_474 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_474 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4504;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4504;
        tmp_call_result_472 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_474, mod_consts[523]);

        if (tmp_call_result_472 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4504;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_472);
    }
    {
        PyObject *tmp_called_value_475;
        PyObject *tmp_call_result_473;
        tmp_called_value_475 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_475 == NULL)) {
            tmp_called_value_475 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_475 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4518;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4518;
        tmp_call_result_473 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_475, mod_consts[524]);

        if (tmp_call_result_473 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4518;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_473);
    }
    {
        PyObject *tmp_called_value_476;
        PyObject *tmp_call_result_474;
        tmp_called_value_476 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_476 == NULL)) {
            tmp_called_value_476 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_476 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4530;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4530;
        tmp_call_result_474 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_476, mod_consts[525]);

        if (tmp_call_result_474 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4530;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_474);
    }
    {
        PyObject *tmp_called_value_477;
        PyObject *tmp_call_result_475;
        tmp_called_value_477 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_477 == NULL)) {
            tmp_called_value_477 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_477 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4537;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4537;
        tmp_call_result_475 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_477, mod_consts[526]);

        if (tmp_call_result_475 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4537;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_475);
    }
    {
        PyObject *tmp_called_value_478;
        PyObject *tmp_call_result_476;
        tmp_called_value_478 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_478 == NULL)) {
            tmp_called_value_478 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_478 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4544;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4544;
        tmp_call_result_476 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_478, mod_consts[527]);

        if (tmp_call_result_476 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4544;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_476);
    }
    {
        PyObject *tmp_called_value_479;
        PyObject *tmp_call_result_477;
        tmp_called_value_479 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_479 == NULL)) {
            tmp_called_value_479 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_479 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4551;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4551;
        tmp_call_result_477 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_479, mod_consts[528]);

        if (tmp_call_result_477 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4551;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_477);
    }
    {
        PyObject *tmp_called_value_480;
        PyObject *tmp_call_result_478;
        tmp_called_value_480 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_480 == NULL)) {
            tmp_called_value_480 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_480 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4558;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4558;
        tmp_call_result_478 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_480, mod_consts[529]);

        if (tmp_call_result_478 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4558;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_478);
    }
    {
        PyObject *tmp_called_value_481;
        PyObject *tmp_call_result_479;
        tmp_called_value_481 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_481 == NULL)) {
            tmp_called_value_481 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_481 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4565;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4565;
        tmp_call_result_479 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_481, mod_consts[530]);

        if (tmp_call_result_479 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4565;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_479);
    }
    {
        PyObject *tmp_called_value_482;
        PyObject *tmp_call_result_480;
        tmp_called_value_482 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_482 == NULL)) {
            tmp_called_value_482 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_482 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4572;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4572;
        tmp_call_result_480 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_482, mod_consts[531]);

        if (tmp_call_result_480 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4572;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_480);
    }
    {
        PyObject *tmp_called_value_483;
        PyObject *tmp_call_result_481;
        tmp_called_value_483 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_483 == NULL)) {
            tmp_called_value_483 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_483 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4579;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4579;
        tmp_call_result_481 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_483, mod_consts[532]);

        if (tmp_call_result_481 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4579;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_481);
    }
    {
        PyObject *tmp_called_value_484;
        PyObject *tmp_call_result_482;
        tmp_called_value_484 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_484 == NULL)) {
            tmp_called_value_484 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_484 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4586;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4586;
        tmp_call_result_482 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_484, mod_consts[533]);

        if (tmp_call_result_482 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4586;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_482);
    }
    {
        PyObject *tmp_called_value_485;
        PyObject *tmp_call_result_483;
        tmp_called_value_485 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_485 == NULL)) {
            tmp_called_value_485 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_485 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4593;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4593;
        tmp_call_result_483 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_485, mod_consts[534]);

        if (tmp_call_result_483 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4593;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_483);
    }
    {
        PyObject *tmp_called_value_486;
        PyObject *tmp_call_result_484;
        tmp_called_value_486 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_486 == NULL)) {
            tmp_called_value_486 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_486 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4600;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4600;
        tmp_call_result_484 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_486, mod_consts[535]);

        if (tmp_call_result_484 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4600;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_484);
    }
    {
        PyObject *tmp_called_value_487;
        PyObject *tmp_call_result_485;
        tmp_called_value_487 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_487 == NULL)) {
            tmp_called_value_487 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_487 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4608;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4608;
        tmp_call_result_485 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_487, mod_consts[536]);

        if (tmp_call_result_485 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4608;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_485);
    }
    {
        PyObject *tmp_called_value_488;
        PyObject *tmp_call_result_486;
        tmp_called_value_488 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_488 == NULL)) {
            tmp_called_value_488 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_488 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4615;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4615;
        tmp_call_result_486 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_488, mod_consts[537]);

        if (tmp_call_result_486 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4615;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_486);
    }
    {
        PyObject *tmp_called_value_489;
        PyObject *tmp_call_result_487;
        tmp_called_value_489 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_489 == NULL)) {
            tmp_called_value_489 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_489 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4623;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4623;
        tmp_call_result_487 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_489, mod_consts[538]);

        if (tmp_call_result_487 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4623;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_487);
    }
    {
        PyObject *tmp_called_value_490;
        PyObject *tmp_call_result_488;
        tmp_called_value_490 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_490 == NULL)) {
            tmp_called_value_490 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_490 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4630;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4630;
        tmp_call_result_488 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_490, mod_consts[539]);

        if (tmp_call_result_488 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4630;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_488);
    }
    {
        PyObject *tmp_called_value_491;
        PyObject *tmp_call_result_489;
        tmp_called_value_491 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_491 == NULL)) {
            tmp_called_value_491 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_491 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4637;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4637;
        tmp_call_result_489 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_491, mod_consts[540]);

        if (tmp_call_result_489 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4637;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_489);
    }
    {
        PyObject *tmp_called_value_492;
        PyObject *tmp_call_result_490;
        tmp_called_value_492 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_492 == NULL)) {
            tmp_called_value_492 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_492 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4644;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4644;
        tmp_call_result_490 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_492, mod_consts[541]);

        if (tmp_call_result_490 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4644;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_490);
    }
    {
        PyObject *tmp_called_value_493;
        PyObject *tmp_call_result_491;
        tmp_called_value_493 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_493 == NULL)) {
            tmp_called_value_493 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_493 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4651;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4651;
        tmp_call_result_491 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_493, mod_consts[542]);

        if (tmp_call_result_491 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4651;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_491);
    }
    {
        PyObject *tmp_called_value_494;
        PyObject *tmp_call_result_492;
        tmp_called_value_494 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_494 == NULL)) {
            tmp_called_value_494 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_494 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4658;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4658;
        tmp_call_result_492 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_494, mod_consts[543]);

        if (tmp_call_result_492 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4658;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_492);
    }
    {
        PyObject *tmp_called_value_495;
        PyObject *tmp_call_result_493;
        tmp_called_value_495 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_495 == NULL)) {
            tmp_called_value_495 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_495 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4665;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4665;
        tmp_call_result_493 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_495, mod_consts[544]);

        if (tmp_call_result_493 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4665;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_493);
    }
    {
        PyObject *tmp_called_value_496;
        PyObject *tmp_call_result_494;
        tmp_called_value_496 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_496 == NULL)) {
            tmp_called_value_496 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_496 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4672;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4672;
        tmp_call_result_494 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_496, mod_consts[545]);

        if (tmp_call_result_494 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4672;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_494);
    }
    {
        PyObject *tmp_called_value_497;
        PyObject *tmp_call_result_495;
        tmp_called_value_497 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_497 == NULL)) {
            tmp_called_value_497 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_497 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4679;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4679;
        tmp_call_result_495 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_497, mod_consts[546]);

        if (tmp_call_result_495 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4679;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_495);
    }
    {
        PyObject *tmp_called_value_498;
        PyObject *tmp_call_result_496;
        tmp_called_value_498 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_498 == NULL)) {
            tmp_called_value_498 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_498 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4686;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4686;
        tmp_call_result_496 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_498, mod_consts[547]);

        if (tmp_call_result_496 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4686;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_496);
    }
    {
        PyObject *tmp_called_value_499;
        PyObject *tmp_call_result_497;
        tmp_called_value_499 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_499 == NULL)) {
            tmp_called_value_499 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_499 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4693;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4693;
        tmp_call_result_497 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_499, mod_consts[548]);

        if (tmp_call_result_497 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4693;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_497);
    }
    {
        PyObject *tmp_called_value_500;
        PyObject *tmp_call_result_498;
        tmp_called_value_500 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_500 == NULL)) {
            tmp_called_value_500 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_500 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4700;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4700;
        tmp_call_result_498 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_500, mod_consts[549]);

        if (tmp_call_result_498 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4700;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_498);
    }
    {
        PyObject *tmp_called_value_501;
        PyObject *tmp_call_result_499;
        tmp_called_value_501 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_501 == NULL)) {
            tmp_called_value_501 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_501 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4707;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4707;
        tmp_call_result_499 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_501, mod_consts[550]);

        if (tmp_call_result_499 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4707;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_499);
    }
    {
        PyObject *tmp_called_value_502;
        PyObject *tmp_call_result_500;
        tmp_called_value_502 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_502 == NULL)) {
            tmp_called_value_502 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_502 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4714;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4714;
        tmp_call_result_500 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_502, mod_consts[551]);

        if (tmp_call_result_500 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4714;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_500);
    }
    {
        PyObject *tmp_called_value_503;
        PyObject *tmp_call_result_501;
        tmp_called_value_503 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_503 == NULL)) {
            tmp_called_value_503 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_503 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4721;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4721;
        tmp_call_result_501 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_503, mod_consts[552]);

        if (tmp_call_result_501 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4721;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_501);
    }
    {
        PyObject *tmp_called_value_504;
        PyObject *tmp_call_result_502;
        tmp_called_value_504 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_504 == NULL)) {
            tmp_called_value_504 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_504 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4729;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4729;
        tmp_call_result_502 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_504, mod_consts[553]);

        if (tmp_call_result_502 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4729;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_502);
    }
    {
        PyObject *tmp_called_value_505;
        PyObject *tmp_call_result_503;
        tmp_called_value_505 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_505 == NULL)) {
            tmp_called_value_505 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_505 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4735;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4735;
        tmp_call_result_503 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_505, mod_consts[554]);

        if (tmp_call_result_503 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4735;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_503);
    }
    {
        PyObject *tmp_called_value_506;
        PyObject *tmp_call_result_504;
        tmp_called_value_506 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_506 == NULL)) {
            tmp_called_value_506 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_506 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4746;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4746;
        tmp_call_result_504 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_506, mod_consts[555]);

        if (tmp_call_result_504 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4746;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_504);
    }
    {
        PyObject *tmp_called_value_507;
        PyObject *tmp_call_result_505;
        tmp_called_value_507 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_507 == NULL)) {
            tmp_called_value_507 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_507 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4786;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4786;
        tmp_call_result_505 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_507, mod_consts[556]);

        if (tmp_call_result_505 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4786;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_505);
    }
    {
        PyObject *tmp_called_value_508;
        PyObject *tmp_call_result_506;
        tmp_called_value_508 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_508 == NULL)) {
            tmp_called_value_508 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_508 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4804;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4804;
        tmp_call_result_506 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_508, mod_consts[557]);

        if (tmp_call_result_506 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4804;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_506);
    }
    {
        PyObject *tmp_called_value_509;
        PyObject *tmp_call_result_507;
        tmp_called_value_509 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_509 == NULL)) {
            tmp_called_value_509 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_509 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4809;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4809;
        tmp_call_result_507 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_509, mod_consts[558]);

        if (tmp_call_result_507 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4809;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_507);
    }
    {
        PyObject *tmp_called_value_510;
        PyObject *tmp_call_result_508;
        tmp_called_value_510 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_510 == NULL)) {
            tmp_called_value_510 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_510 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4814;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4814;
        tmp_call_result_508 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_510, mod_consts[559]);

        if (tmp_call_result_508 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4814;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_508);
    }
    {
        PyObject *tmp_called_value_511;
        PyObject *tmp_call_result_509;
        tmp_called_value_511 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_511 == NULL)) {
            tmp_called_value_511 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_511 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4819;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4819;
        tmp_call_result_509 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_511, mod_consts[560]);

        if (tmp_call_result_509 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4819;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_509);
    }
    {
        PyObject *tmp_called_value_512;
        PyObject *tmp_call_result_510;
        tmp_called_value_512 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_512 == NULL)) {
            tmp_called_value_512 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_512 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4825;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4825;
        tmp_call_result_510 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_512, mod_consts[561]);

        if (tmp_call_result_510 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4825;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_510);
    }
    {
        PyObject *tmp_called_value_513;
        PyObject *tmp_call_result_511;
        tmp_called_value_513 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_513 == NULL)) {
            tmp_called_value_513 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_513 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4830;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4830;
        tmp_call_result_511 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_513, mod_consts[562]);

        if (tmp_call_result_511 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4830;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_511);
    }
    {
        PyObject *tmp_called_value_514;
        PyObject *tmp_call_result_512;
        tmp_called_value_514 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_514 == NULL)) {
            tmp_called_value_514 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_514 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4835;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4835;
        tmp_call_result_512 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_514, mod_consts[563]);

        if (tmp_call_result_512 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4835;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_512);
    }
    {
        PyObject *tmp_called_value_515;
        PyObject *tmp_call_result_513;
        tmp_called_value_515 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_515 == NULL)) {
            tmp_called_value_515 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_515 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4840;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4840;
        tmp_call_result_513 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_515, mod_consts[564]);

        if (tmp_call_result_513 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4840;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_513);
    }
    {
        PyObject *tmp_called_value_516;
        PyObject *tmp_call_result_514;
        tmp_called_value_516 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_516 == NULL)) {
            tmp_called_value_516 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_516 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4845;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4845;
        tmp_call_result_514 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_516, mod_consts[565]);

        if (tmp_call_result_514 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4845;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_514);
    }
    {
        PyObject *tmp_called_value_517;
        PyObject *tmp_call_result_515;
        tmp_called_value_517 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_517 == NULL)) {
            tmp_called_value_517 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_517 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4853;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4853;
        tmp_call_result_515 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_517, mod_consts[566]);

        if (tmp_call_result_515 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4853;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_515);
    }
    {
        PyObject *tmp_called_value_518;
        PyObject *tmp_call_result_516;
        tmp_called_value_518 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_518 == NULL)) {
            tmp_called_value_518 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_518 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4870;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4870;
        tmp_call_result_516 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_518, mod_consts[567]);

        if (tmp_call_result_516 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4870;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_516);
    }
    {
        PyObject *tmp_called_value_519;
        PyObject *tmp_call_result_517;
        tmp_called_value_519 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_519 == NULL)) {
            tmp_called_value_519 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_519 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4887;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4887;
        tmp_call_result_517 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_519, mod_consts[568]);

        if (tmp_call_result_517 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4887;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_517);
    }
    {
        PyObject *tmp_called_value_520;
        PyObject *tmp_call_result_518;
        tmp_called_value_520 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_520 == NULL)) {
            tmp_called_value_520 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_520 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4896;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4896;
        tmp_call_result_518 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_520, mod_consts[569]);

        if (tmp_call_result_518 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4896;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_518);
    }
    {
        PyObject *tmp_called_value_521;
        PyObject *tmp_call_result_519;
        tmp_called_value_521 = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_521 == NULL)) {
            tmp_called_value_521 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_521 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4914;

            goto frame_exception_exit_1;
        }
        frame_869e019e356adbd30c0305fa7a70a5fa->m_frame.f_lineno = 4914;
        tmp_call_result_519 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_521, mod_consts[570]);

        if (tmp_call_result_519 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4914;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_519);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_869e019e356adbd30c0305fa7a70a5fa);
#endif
    popFrameStack();

    assertFrameObject(frame_869e019e356adbd30c0305fa7a70a5fa);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_869e019e356adbd30c0305fa7a70a5fa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_869e019e356adbd30c0305fa7a70a5fa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_869e019e356adbd30c0305fa7a70a5fa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_869e019e356adbd30c0305fa7a70a5fa, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch._tensor_docs", false);

    Py_INCREF(module_torch$_tensor_docs);
    return module_torch$_tensor_docs;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$_tensor_docs, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$_tensor_docs", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
