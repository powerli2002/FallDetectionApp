/* Generated code for Python module 'scipy.integrate._ivp.dop853_coefficients'
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

/* The "module_scipy$integrate$_ivp$dop853_coefficients" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$integrate$_ivp$dop853_coefficients;
PyDictObject *moduledict_scipy$integrate$_ivp$dop853_coefficients;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[305];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[305];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("scipy.integrate._ivp.dop853_coefficients"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 305; i++) {
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
void checkModuleConstants_scipy$integrate$_ivp$dop853_coefficients(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 305; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_33b89686f0c602fd45584fb394f0be15;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[302]); CHECK_OBJECT(module_filename_obj);
    codeobj_33b89686f0c602fd45584fb394f0be15 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[303], NULL, NULL, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.


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

function_impl_code functable_scipy$integrate$_ivp$dop853_coefficients[] = {

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

    function_impl_code *current = functable_scipy$integrate$_ivp$dop853_coefficients;
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

    if (offset > sizeof(functable_scipy$integrate$_ivp$dop853_coefficients) || offset < 0) {
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
        functable_scipy$integrate$_ivp$dop853_coefficients[offset],
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
        module_scipy$integrate$_ivp$dop853_coefficients,
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
PyObject *modulecode_scipy$integrate$_ivp$dop853_coefficients(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scipy.integrate._ivp.dop853_coefficients");

    // Store the module for future use.
    module_scipy$integrate$_ivp$dop853_coefficients = module;

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
        PRINT_STRING("scipy.integrate._ivp.dop853_coefficients: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.integrate._ivp.dop853_coefficients: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.integrate._ivp.dop853_coefficients: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initscipy$integrate$_ivp$dop853_coefficients\n");

    moduledict_scipy$integrate$_ivp$dop853_coefficients = MODULE_DICT(module_scipy$integrate$_ivp$dop853_coefficients);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$integrate$_ivp$dop853_coefficients,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$integrate$_ivp$dop853_coefficients,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[304]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$integrate$_ivp$dop853_coefficients,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$integrate$_ivp$dop853_coefficients,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$integrate$_ivp$dop853_coefficients,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$integrate$_ivp$dop853_coefficients);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_scipy$integrate$_ivp$dop853_coefficients);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_1__value = NULL;
    PyObject *tmp_inplace_assign_subscr_2__target = NULL;
    PyObject *tmp_inplace_assign_subscr_2__value = NULL;
    PyObject *tmp_inplace_assign_subscr_3__target = NULL;
    PyObject *tmp_inplace_assign_subscr_3__value = NULL;
    struct Nuitka_FrameObject *frame_33b89686f0c602fd45584fb394f0be15;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_33b89686f0c602fd45584fb394f0be15 = MAKE_MODULE_FRAME(codeobj_33b89686f0c602fd45584fb394f0be15, module_scipy$integrate$_ivp$dop853_coefficients);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_33b89686f0c602fd45584fb394f0be15);
    assert(Py_REFCNT(frame_33b89686f0c602fd45584fb394f0be15) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[6];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_scipy$integrate$_ivp$dop853_coefficients;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[7];
        frame_33b89686f0c602fd45584fb394f0be15->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_arg_element_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        tmp_call_arg_element_1 = LIST_COPY(mod_consts[16]);
        frame_33b89686f0c602fd45584fb394f0be15->m_frame.f_lineno = 7;
        tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[15], tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_element_value_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_33b89686f0c602fd45584fb394f0be15->m_frame.f_lineno = 24;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_9);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = mod_consts[20];
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        assert(!(tmp_ass_subscribed_1 == NULL));
        tmp_ass_subscript_1 = mod_consts[21];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = mod_consts[22];
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[23];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_ass_subvalue_3 = mod_consts[24];
        tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_3 == NULL)) {
            tmp_ass_subscribed_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_3 = mod_consts[25];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        tmp_ass_subvalue_4 = mod_consts[26];
        tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_4 == NULL)) {
            tmp_ass_subscribed_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_4 = mod_consts[27];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        tmp_ass_subvalue_5 = mod_consts[28];
        tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_5 == NULL)) {
            tmp_ass_subscribed_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_5 = mod_consts[29];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        tmp_ass_subvalue_6 = mod_consts[30];
        tmp_ass_subscribed_6 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_6 == NULL)) {
            tmp_ass_subscribed_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_6 = mod_consts[31];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        tmp_ass_subvalue_7 = mod_consts[32];
        tmp_ass_subscribed_7 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_7 == NULL)) {
            tmp_ass_subscribed_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_7 = mod_consts[33];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_ass_subscript_8;
        tmp_ass_subvalue_8 = mod_consts[34];
        tmp_ass_subscribed_8 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_8 == NULL)) {
            tmp_ass_subscribed_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_8 = mod_consts[35];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_9;
        PyObject *tmp_ass_subscribed_9;
        PyObject *tmp_ass_subscript_9;
        tmp_ass_subvalue_9 = mod_consts[36];
        tmp_ass_subscribed_9 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_9 == NULL)) {
            tmp_ass_subscribed_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_9 = mod_consts[37];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_10;
        PyObject *tmp_ass_subscribed_10;
        PyObject *tmp_ass_subscript_10;
        tmp_ass_subvalue_10 = mod_consts[38];
        tmp_ass_subscribed_10 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_10 == NULL)) {
            tmp_ass_subscribed_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_10 = mod_consts[39];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_11;
        PyObject *tmp_ass_subscribed_11;
        PyObject *tmp_ass_subscript_11;
        tmp_ass_subvalue_11 = mod_consts[40];
        tmp_ass_subscribed_11 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_11 == NULL)) {
            tmp_ass_subscribed_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_11 = mod_consts[41];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_12;
        PyObject *tmp_ass_subscribed_12;
        PyObject *tmp_ass_subscript_12;
        tmp_ass_subvalue_12 = mod_consts[42];
        tmp_ass_subscribed_12 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_12 == NULL)) {
            tmp_ass_subscribed_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_12 = mod_consts[43];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_13;
        PyObject *tmp_ass_subscribed_13;
        PyObject *tmp_ass_subscript_13;
        tmp_ass_subvalue_13 = mod_consts[44];
        tmp_ass_subscribed_13 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_13 == NULL)) {
            tmp_ass_subscribed_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_13 = mod_consts[45];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_14;
        PyObject *tmp_ass_subscribed_14;
        PyObject *tmp_ass_subscript_14;
        tmp_ass_subvalue_14 = mod_consts[46];
        tmp_ass_subscribed_14 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_14 == NULL)) {
            tmp_ass_subscribed_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_14 = mod_consts[47];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_15;
        PyObject *tmp_ass_subscribed_15;
        PyObject *tmp_ass_subscript_15;
        tmp_ass_subvalue_15 = mod_consts[48];
        tmp_ass_subscribed_15 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_15 == NULL)) {
            tmp_ass_subscribed_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_15 = mod_consts[49];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_16;
        PyObject *tmp_ass_subscribed_16;
        PyObject *tmp_ass_subscript_16;
        tmp_ass_subvalue_16 = mod_consts[50];
        tmp_ass_subscribed_16 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_16 == NULL)) {
            tmp_ass_subscribed_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_16 = mod_consts[51];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_17;
        PyObject *tmp_ass_subscribed_17;
        PyObject *tmp_ass_subscript_17;
        tmp_ass_subvalue_17 = mod_consts[52];
        tmp_ass_subscribed_17 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_17 == NULL)) {
            tmp_ass_subscribed_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_17 = mod_consts[53];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_18;
        PyObject *tmp_ass_subscribed_18;
        PyObject *tmp_ass_subscript_18;
        tmp_ass_subvalue_18 = mod_consts[54];
        tmp_ass_subscribed_18 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_18 == NULL)) {
            tmp_ass_subscribed_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_18 = mod_consts[55];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_19;
        PyObject *tmp_ass_subscribed_19;
        PyObject *tmp_ass_subscript_19;
        tmp_ass_subvalue_19 = mod_consts[56];
        tmp_ass_subscribed_19 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_19 == NULL)) {
            tmp_ass_subscribed_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_19 = mod_consts[57];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_20;
        PyObject *tmp_ass_subscribed_20;
        PyObject *tmp_ass_subscript_20;
        tmp_ass_subvalue_20 = mod_consts[58];
        tmp_ass_subscribed_20 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_20 == NULL)) {
            tmp_ass_subscribed_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_20 = mod_consts[59];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_21;
        PyObject *tmp_ass_subscribed_21;
        PyObject *tmp_ass_subscript_21;
        tmp_ass_subvalue_21 = mod_consts[60];
        tmp_ass_subscribed_21 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_21 == NULL)) {
            tmp_ass_subscribed_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_21 = mod_consts[61];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_22;
        PyObject *tmp_ass_subscribed_22;
        PyObject *tmp_ass_subscript_22;
        tmp_ass_subvalue_22 = mod_consts[62];
        tmp_ass_subscribed_22 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_22 == NULL)) {
            tmp_ass_subscribed_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_22 = mod_consts[63];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_23;
        PyObject *tmp_ass_subscribed_23;
        PyObject *tmp_ass_subscript_23;
        tmp_ass_subvalue_23 = mod_consts[64];
        tmp_ass_subscribed_23 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_23 == NULL)) {
            tmp_ass_subscribed_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_23 = mod_consts[65];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_24;
        PyObject *tmp_ass_subscribed_24;
        PyObject *tmp_ass_subscript_24;
        tmp_ass_subvalue_24 = mod_consts[66];
        tmp_ass_subscribed_24 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_24 == NULL)) {
            tmp_ass_subscribed_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_24 = mod_consts[67];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_24, tmp_ass_subscript_24, tmp_ass_subvalue_24);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_25;
        PyObject *tmp_ass_subscribed_25;
        PyObject *tmp_ass_subscript_25;
        tmp_ass_subvalue_25 = mod_consts[68];
        tmp_ass_subscribed_25 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_25 == NULL)) {
            tmp_ass_subscribed_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_25 = mod_consts[69];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_25, tmp_ass_subscript_25, tmp_ass_subvalue_25);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_26;
        PyObject *tmp_ass_subscribed_26;
        PyObject *tmp_ass_subscript_26;
        tmp_ass_subvalue_26 = mod_consts[70];
        tmp_ass_subscribed_26 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_26 == NULL)) {
            tmp_ass_subscribed_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_26 = mod_consts[71];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_26, tmp_ass_subscript_26, tmp_ass_subvalue_26);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_27;
        PyObject *tmp_ass_subscribed_27;
        PyObject *tmp_ass_subscript_27;
        tmp_ass_subvalue_27 = mod_consts[72];
        tmp_ass_subscribed_27 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_27 == NULL)) {
            tmp_ass_subscribed_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_27 = mod_consts[73];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_27, tmp_ass_subscript_27, tmp_ass_subvalue_27);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_28;
        PyObject *tmp_ass_subscribed_28;
        PyObject *tmp_ass_subscript_28;
        tmp_ass_subvalue_28 = mod_consts[74];
        tmp_ass_subscribed_28 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_28 == NULL)) {
            tmp_ass_subscribed_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_28 = mod_consts[75];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_28, tmp_ass_subscript_28, tmp_ass_subvalue_28);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_29;
        PyObject *tmp_ass_subscribed_29;
        PyObject *tmp_ass_subscript_29;
        tmp_ass_subvalue_29 = mod_consts[76];
        tmp_ass_subscribed_29 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_29 == NULL)) {
            tmp_ass_subscribed_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_29 = mod_consts[77];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_29, tmp_ass_subscript_29, tmp_ass_subvalue_29);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_30;
        PyObject *tmp_ass_subscribed_30;
        PyObject *tmp_ass_subscript_30;
        tmp_ass_subvalue_30 = mod_consts[78];
        tmp_ass_subscribed_30 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_30 == NULL)) {
            tmp_ass_subscribed_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_30 = mod_consts[79];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_30, tmp_ass_subscript_30, tmp_ass_subvalue_30);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_31;
        PyObject *tmp_ass_subscribed_31;
        PyObject *tmp_ass_subscript_31;
        tmp_ass_subvalue_31 = mod_consts[80];
        tmp_ass_subscribed_31 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_31 == NULL)) {
            tmp_ass_subscribed_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_31 = mod_consts[81];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_31, tmp_ass_subscript_31, tmp_ass_subvalue_31);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_32;
        PyObject *tmp_ass_subscribed_32;
        PyObject *tmp_ass_subscript_32;
        tmp_ass_subvalue_32 = mod_consts[82];
        tmp_ass_subscribed_32 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_32 == NULL)) {
            tmp_ass_subscribed_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_32 = mod_consts[83];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_32, tmp_ass_subscript_32, tmp_ass_subvalue_32);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_33;
        PyObject *tmp_ass_subscribed_33;
        PyObject *tmp_ass_subscript_33;
        tmp_ass_subvalue_33 = mod_consts[84];
        tmp_ass_subscribed_33 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_33 == NULL)) {
            tmp_ass_subscribed_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_33 = mod_consts[85];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_33, tmp_ass_subscript_33, tmp_ass_subvalue_33);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_34;
        PyObject *tmp_ass_subscribed_34;
        PyObject *tmp_ass_subscript_34;
        tmp_ass_subvalue_34 = mod_consts[86];
        tmp_ass_subscribed_34 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_34 == NULL)) {
            tmp_ass_subscribed_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_34 = mod_consts[87];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_34, tmp_ass_subscript_34, tmp_ass_subvalue_34);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_35;
        PyObject *tmp_ass_subscribed_35;
        PyObject *tmp_ass_subscript_35;
        tmp_ass_subvalue_35 = mod_consts[88];
        tmp_ass_subscribed_35 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_35 == NULL)) {
            tmp_ass_subscribed_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_35 = mod_consts[89];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_35, tmp_ass_subscript_35, tmp_ass_subvalue_35);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_36;
        PyObject *tmp_ass_subscribed_36;
        PyObject *tmp_ass_subscript_36;
        tmp_ass_subvalue_36 = mod_consts[90];
        tmp_ass_subscribed_36 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_36 == NULL)) {
            tmp_ass_subscribed_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_36 = mod_consts[91];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_36, tmp_ass_subscript_36, tmp_ass_subvalue_36);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_37;
        PyObject *tmp_ass_subscribed_37;
        PyObject *tmp_ass_subscript_37;
        tmp_ass_subvalue_37 = mod_consts[92];
        tmp_ass_subscribed_37 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_37 == NULL)) {
            tmp_ass_subscribed_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_37 = mod_consts[93];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_37, tmp_ass_subscript_37, tmp_ass_subvalue_37);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_38;
        PyObject *tmp_ass_subscribed_38;
        PyObject *tmp_ass_subscript_38;
        tmp_ass_subvalue_38 = mod_consts[94];
        tmp_ass_subscribed_38 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_38 == NULL)) {
            tmp_ass_subscribed_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_38 = mod_consts[95];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_38, tmp_ass_subscript_38, tmp_ass_subvalue_38);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_39;
        PyObject *tmp_ass_subscribed_39;
        PyObject *tmp_ass_subscript_39;
        tmp_ass_subvalue_39 = mod_consts[96];
        tmp_ass_subscribed_39 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_39 == NULL)) {
            tmp_ass_subscribed_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_39 = mod_consts[97];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_39, tmp_ass_subscript_39, tmp_ass_subvalue_39);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_40;
        PyObject *tmp_ass_subscribed_40;
        PyObject *tmp_ass_subscript_40;
        tmp_ass_subvalue_40 = mod_consts[98];
        tmp_ass_subscribed_40 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_40 == NULL)) {
            tmp_ass_subscribed_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_40 = mod_consts[99];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_40, tmp_ass_subscript_40, tmp_ass_subvalue_40);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_41;
        PyObject *tmp_ass_subscribed_41;
        PyObject *tmp_ass_subscript_41;
        tmp_ass_subvalue_41 = mod_consts[100];
        tmp_ass_subscribed_41 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_41 == NULL)) {
            tmp_ass_subscribed_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_41 = mod_consts[101];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_41, tmp_ass_subscript_41, tmp_ass_subvalue_41);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_42;
        PyObject *tmp_ass_subscribed_42;
        PyObject *tmp_ass_subscript_42;
        tmp_ass_subvalue_42 = mod_consts[102];
        tmp_ass_subscribed_42 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_42 == NULL)) {
            tmp_ass_subscribed_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_42 = mod_consts[103];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_42, tmp_ass_subscript_42, tmp_ass_subvalue_42);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_43;
        PyObject *tmp_ass_subscribed_43;
        PyObject *tmp_ass_subscript_43;
        tmp_ass_subvalue_43 = mod_consts[104];
        tmp_ass_subscribed_43 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_43 == NULL)) {
            tmp_ass_subscribed_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_43 = mod_consts[105];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_43, tmp_ass_subscript_43, tmp_ass_subvalue_43);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_44;
        PyObject *tmp_ass_subscribed_44;
        PyObject *tmp_ass_subscript_44;
        tmp_ass_subvalue_44 = mod_consts[106];
        tmp_ass_subscribed_44 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_44 == NULL)) {
            tmp_ass_subscribed_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_44 = mod_consts[107];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_44, tmp_ass_subscript_44, tmp_ass_subvalue_44);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_45;
        PyObject *tmp_ass_subscribed_45;
        PyObject *tmp_ass_subscript_45;
        tmp_ass_subvalue_45 = mod_consts[108];
        tmp_ass_subscribed_45 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_45 == NULL)) {
            tmp_ass_subscribed_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_45 = mod_consts[109];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_45, tmp_ass_subscript_45, tmp_ass_subvalue_45);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_46;
        PyObject *tmp_ass_subscribed_46;
        PyObject *tmp_ass_subscript_46;
        tmp_ass_subvalue_46 = mod_consts[110];
        tmp_ass_subscribed_46 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_46 == NULL)) {
            tmp_ass_subscribed_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_46 = mod_consts[111];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_46, tmp_ass_subscript_46, tmp_ass_subvalue_46);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_47;
        PyObject *tmp_ass_subscribed_47;
        PyObject *tmp_ass_subscript_47;
        tmp_ass_subvalue_47 = mod_consts[112];
        tmp_ass_subscribed_47 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_47 == NULL)) {
            tmp_ass_subscribed_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_47 = mod_consts[113];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_47, tmp_ass_subscript_47, tmp_ass_subvalue_47);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_48;
        PyObject *tmp_ass_subscribed_48;
        PyObject *tmp_ass_subscript_48;
        tmp_ass_subvalue_48 = mod_consts[114];
        tmp_ass_subscribed_48 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_48 == NULL)) {
            tmp_ass_subscribed_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_48 = mod_consts[115];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_48, tmp_ass_subscript_48, tmp_ass_subvalue_48);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_49;
        PyObject *tmp_ass_subscribed_49;
        PyObject *tmp_ass_subscript_49;
        tmp_ass_subvalue_49 = mod_consts[116];
        tmp_ass_subscribed_49 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_49 == NULL)) {
            tmp_ass_subscribed_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_49 = mod_consts[117];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_49, tmp_ass_subscript_49, tmp_ass_subvalue_49);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_50;
        PyObject *tmp_ass_subscribed_50;
        PyObject *tmp_ass_subscript_50;
        tmp_ass_subvalue_50 = mod_consts[118];
        tmp_ass_subscribed_50 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_50 == NULL)) {
            tmp_ass_subscribed_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_50 = mod_consts[119];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_50, tmp_ass_subscript_50, tmp_ass_subvalue_50);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_51;
        PyObject *tmp_ass_subscribed_51;
        PyObject *tmp_ass_subscript_51;
        tmp_ass_subvalue_51 = mod_consts[120];
        tmp_ass_subscribed_51 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_51 == NULL)) {
            tmp_ass_subscribed_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_51 = mod_consts[121];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_51, tmp_ass_subscript_51, tmp_ass_subvalue_51);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_52;
        PyObject *tmp_ass_subscribed_52;
        PyObject *tmp_ass_subscript_52;
        tmp_ass_subvalue_52 = mod_consts[122];
        tmp_ass_subscribed_52 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_52 == NULL)) {
            tmp_ass_subscribed_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_52 = mod_consts[123];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_52, tmp_ass_subscript_52, tmp_ass_subvalue_52);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_53;
        PyObject *tmp_ass_subscribed_53;
        PyObject *tmp_ass_subscript_53;
        tmp_ass_subvalue_53 = mod_consts[124];
        tmp_ass_subscribed_53 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_53 == NULL)) {
            tmp_ass_subscribed_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_53 = mod_consts[125];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_53, tmp_ass_subscript_53, tmp_ass_subvalue_53);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_54;
        PyObject *tmp_ass_subscribed_54;
        PyObject *tmp_ass_subscript_54;
        tmp_ass_subvalue_54 = mod_consts[126];
        tmp_ass_subscribed_54 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_54 == NULL)) {
            tmp_ass_subscribed_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_54 = mod_consts[127];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_54, tmp_ass_subscript_54, tmp_ass_subvalue_54);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_55;
        PyObject *tmp_ass_subscribed_55;
        PyObject *tmp_ass_subscript_55;
        tmp_ass_subvalue_55 = mod_consts[128];
        tmp_ass_subscribed_55 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_55 == NULL)) {
            tmp_ass_subscribed_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_55 = mod_consts[129];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_55, tmp_ass_subscript_55, tmp_ass_subvalue_55);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_56;
        PyObject *tmp_ass_subscribed_56;
        PyObject *tmp_ass_subscript_56;
        tmp_ass_subvalue_56 = mod_consts[130];
        tmp_ass_subscribed_56 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_56 == NULL)) {
            tmp_ass_subscribed_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_56 = mod_consts[131];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_56, tmp_ass_subscript_56, tmp_ass_subvalue_56);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_57;
        PyObject *tmp_ass_subscribed_57;
        PyObject *tmp_ass_subscript_57;
        tmp_ass_subvalue_57 = mod_consts[132];
        tmp_ass_subscribed_57 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_57 == NULL)) {
            tmp_ass_subscribed_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_57 = mod_consts[133];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_57, tmp_ass_subscript_57, tmp_ass_subvalue_57);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_58;
        PyObject *tmp_ass_subscribed_58;
        PyObject *tmp_ass_subscript_58;
        tmp_ass_subvalue_58 = mod_consts[134];
        tmp_ass_subscribed_58 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_58 == NULL)) {
            tmp_ass_subscribed_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_58 = mod_consts[135];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_58, tmp_ass_subscript_58, tmp_ass_subvalue_58);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_59;
        PyObject *tmp_ass_subscribed_59;
        PyObject *tmp_ass_subscript_59;
        tmp_ass_subvalue_59 = mod_consts[136];
        tmp_ass_subscribed_59 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_59 == NULL)) {
            tmp_ass_subscribed_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_59 = mod_consts[137];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_59, tmp_ass_subscript_59, tmp_ass_subvalue_59);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_60;
        PyObject *tmp_ass_subscribed_60;
        PyObject *tmp_ass_subscript_60;
        tmp_ass_subvalue_60 = mod_consts[138];
        tmp_ass_subscribed_60 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_60 == NULL)) {
            tmp_ass_subscribed_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_60 = mod_consts[139];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_60, tmp_ass_subscript_60, tmp_ass_subvalue_60);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_61;
        PyObject *tmp_ass_subscribed_61;
        PyObject *tmp_ass_subscript_61;
        tmp_ass_subvalue_61 = mod_consts[140];
        tmp_ass_subscribed_61 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_61 == NULL)) {
            tmp_ass_subscribed_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_61 = mod_consts[141];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_61, tmp_ass_subscript_61, tmp_ass_subvalue_61);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_62;
        PyObject *tmp_ass_subscribed_62;
        PyObject *tmp_ass_subscript_62;
        tmp_ass_subvalue_62 = mod_consts[142];
        tmp_ass_subscribed_62 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_62 == NULL)) {
            tmp_ass_subscribed_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_62 = mod_consts[143];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_62, tmp_ass_subscript_62, tmp_ass_subvalue_62);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_63;
        PyObject *tmp_ass_subscribed_63;
        PyObject *tmp_ass_subscript_63;
        tmp_ass_subvalue_63 = mod_consts[144];
        tmp_ass_subscribed_63 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_63 == NULL)) {
            tmp_ass_subscribed_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_63 = mod_consts[145];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_63, tmp_ass_subscript_63, tmp_ass_subvalue_63);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_64;
        PyObject *tmp_ass_subscribed_64;
        PyObject *tmp_ass_subscript_64;
        tmp_ass_subvalue_64 = mod_consts[146];
        tmp_ass_subscribed_64 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_64 == NULL)) {
            tmp_ass_subscribed_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_64 = mod_consts[147];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_64, tmp_ass_subscript_64, tmp_ass_subvalue_64);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_65;
        PyObject *tmp_ass_subscribed_65;
        PyObject *tmp_ass_subscript_65;
        tmp_ass_subvalue_65 = mod_consts[148];
        tmp_ass_subscribed_65 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_65 == NULL)) {
            tmp_ass_subscribed_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_65 = mod_consts[149];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_65, tmp_ass_subscript_65, tmp_ass_subvalue_65);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_66;
        PyObject *tmp_ass_subscribed_66;
        PyObject *tmp_ass_subscript_66;
        tmp_ass_subvalue_66 = mod_consts[150];
        tmp_ass_subscribed_66 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_66 == NULL)) {
            tmp_ass_subscribed_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_66 = mod_consts[151];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_66, tmp_ass_subscript_66, tmp_ass_subvalue_66);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_67;
        PyObject *tmp_ass_subscribed_67;
        PyObject *tmp_ass_subscript_67;
        tmp_ass_subvalue_67 = mod_consts[152];
        tmp_ass_subscribed_67 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_67 == NULL)) {
            tmp_ass_subscribed_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_67 = mod_consts[153];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_67, tmp_ass_subscript_67, tmp_ass_subvalue_67);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_68;
        PyObject *tmp_ass_subscribed_68;
        PyObject *tmp_ass_subscript_68;
        tmp_ass_subvalue_68 = mod_consts[154];
        tmp_ass_subscribed_68 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_68 == NULL)) {
            tmp_ass_subscribed_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_68 = mod_consts[155];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_68, tmp_ass_subscript_68, tmp_ass_subvalue_68);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_69;
        PyObject *tmp_ass_subscribed_69;
        PyObject *tmp_ass_subscript_69;
        tmp_ass_subvalue_69 = mod_consts[156];
        tmp_ass_subscribed_69 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_69 == NULL)) {
            tmp_ass_subscribed_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_69 = mod_consts[157];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_69, tmp_ass_subscript_69, tmp_ass_subvalue_69);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_70;
        PyObject *tmp_ass_subscribed_70;
        PyObject *tmp_ass_subscript_70;
        tmp_ass_subvalue_70 = mod_consts[158];
        tmp_ass_subscribed_70 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_70 == NULL)) {
            tmp_ass_subscribed_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_70 = mod_consts[159];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_70, tmp_ass_subscript_70, tmp_ass_subvalue_70);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_71;
        PyObject *tmp_ass_subscribed_71;
        PyObject *tmp_ass_subscript_71;
        tmp_ass_subvalue_71 = mod_consts[160];
        tmp_ass_subscribed_71 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_71 == NULL)) {
            tmp_ass_subscribed_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_71 = mod_consts[161];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_71, tmp_ass_subscript_71, tmp_ass_subvalue_71);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_72;
        PyObject *tmp_ass_subscribed_72;
        PyObject *tmp_ass_subscript_72;
        tmp_ass_subvalue_72 = mod_consts[162];
        tmp_ass_subscribed_72 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_72 == NULL)) {
            tmp_ass_subscribed_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_72 = mod_consts[163];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_72, tmp_ass_subscript_72, tmp_ass_subvalue_72);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_73;
        PyObject *tmp_ass_subscribed_73;
        PyObject *tmp_ass_subscript_73;
        tmp_ass_subvalue_73 = mod_consts[164];
        tmp_ass_subscribed_73 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_73 == NULL)) {
            tmp_ass_subscribed_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_73 = mod_consts[165];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_73, tmp_ass_subscript_73, tmp_ass_subvalue_73);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_74;
        PyObject *tmp_ass_subscribed_74;
        PyObject *tmp_ass_subscript_74;
        tmp_ass_subvalue_74 = mod_consts[166];
        tmp_ass_subscribed_74 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_74 == NULL)) {
            tmp_ass_subscribed_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_74 = mod_consts[167];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_74, tmp_ass_subscript_74, tmp_ass_subvalue_74);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_75;
        PyObject *tmp_ass_subscribed_75;
        PyObject *tmp_ass_subscript_75;
        tmp_ass_subvalue_75 = mod_consts[168];
        tmp_ass_subscribed_75 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_75 == NULL)) {
            tmp_ass_subscribed_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_75 = mod_consts[169];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_75, tmp_ass_subscript_75, tmp_ass_subvalue_75);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_76;
        PyObject *tmp_ass_subscribed_76;
        PyObject *tmp_ass_subscript_76;
        tmp_ass_subvalue_76 = mod_consts[170];
        tmp_ass_subscribed_76 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_76 == NULL)) {
            tmp_ass_subscribed_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_76 = mod_consts[171];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_76, tmp_ass_subscript_76, tmp_ass_subvalue_76);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_77;
        PyObject *tmp_ass_subscribed_77;
        PyObject *tmp_ass_subscript_77;
        tmp_ass_subvalue_77 = mod_consts[172];
        tmp_ass_subscribed_77 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_77 == NULL)) {
            tmp_ass_subscribed_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_77 = mod_consts[173];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_77, tmp_ass_subscript_77, tmp_ass_subvalue_77);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_78;
        PyObject *tmp_ass_subscribed_78;
        PyObject *tmp_ass_subscript_78;
        tmp_ass_subvalue_78 = mod_consts[174];
        tmp_ass_subscribed_78 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_78 == NULL)) {
            tmp_ass_subscribed_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_78 = mod_consts[175];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_78, tmp_ass_subscript_78, tmp_ass_subvalue_78);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_79;
        PyObject *tmp_ass_subscribed_79;
        PyObject *tmp_ass_subscript_79;
        tmp_ass_subvalue_79 = mod_consts[176];
        tmp_ass_subscribed_79 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_79 == NULL)) {
            tmp_ass_subscribed_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_79 = mod_consts[177];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_79, tmp_ass_subscript_79, tmp_ass_subvalue_79);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_80;
        PyObject *tmp_ass_subscribed_80;
        PyObject *tmp_ass_subscript_80;
        tmp_ass_subvalue_80 = mod_consts[178];
        tmp_ass_subscribed_80 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_80 == NULL)) {
            tmp_ass_subscribed_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_80 = mod_consts[179];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_80, tmp_ass_subscript_80, tmp_ass_subvalue_80);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_81;
        PyObject *tmp_ass_subscribed_81;
        PyObject *tmp_ass_subscript_81;
        tmp_ass_subvalue_81 = mod_consts[180];
        tmp_ass_subscribed_81 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_81 == NULL)) {
            tmp_ass_subscribed_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_81 = mod_consts[181];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_81, tmp_ass_subscript_81, tmp_ass_subvalue_81);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_82;
        PyObject *tmp_ass_subscribed_82;
        PyObject *tmp_ass_subscript_82;
        tmp_ass_subvalue_82 = mod_consts[182];
        tmp_ass_subscribed_82 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_ass_subscribed_82 == NULL)) {
            tmp_ass_subscribed_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_ass_subscribed_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_82 = mod_consts[183];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_82, tmp_ass_subscript_82, tmp_ass_subvalue_82);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = PyTuple_New(2);
        {
            PyObject *tmp_stop_value_1;
            PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_2);
            tmp_stop_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_stop_value_1 == NULL)) {
                tmp_stop_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_stop_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = MAKE_SLICEOBJ1(tmp_stop_value_1);
            assert(!(tmp_tuple_element_2 == NULL));
            PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_subscript_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_left_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_left_value_1 == NULL)) {
            tmp_left_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        tmp_right_value_1 = mod_consts[185];
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_1, tmp_right_value_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        frame_33b89686f0c602fd45584fb394f0be15->m_frame.f_lineno = 125;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_11);
    }
    {
        PyObject *tmp_ass_subvalue_83;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_ass_subscribed_83;
        PyObject *tmp_ass_subscript_83;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[184]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[187]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        frame_33b89686f0c602fd45584fb394f0be15->m_frame.f_lineno = 126;
        tmp_ass_subvalue_83 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_ass_subvalue_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_83 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_ass_subscribed_83 == NULL)) {
            tmp_ass_subscribed_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        if (tmp_ass_subscribed_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_83);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_83 = mod_consts[188];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_83, tmp_ass_subscript_83, tmp_ass_subvalue_83);
        Py_DECREF(tmp_ass_subvalue_83);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_assign_source_12 == NULL)) {
            tmp_assign_source_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_subscr_1__target == NULL);
        Py_INCREF(tmp_assign_source_12);
        tmp_inplace_assign_subscr_1__target = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_expression_value_5 = tmp_inplace_assign_subscr_1__target;
        tmp_subscript_value_2 = mod_consts[7];
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_2, 0);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_1;
        }
        assert(tmp_inplace_assign_subscr_1__value == NULL);
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_left_value_2 = tmp_inplace_assign_subscr_1__value;
        tmp_right_value_2 = mod_consts[189];
        tmp_result = BINARY_OPERATION_SUB_OBJECT_FLOAT_INPLACE(&tmp_left_value_2, tmp_right_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_1;
        }
        tmp_assign_source_14 = tmp_left_value_2;
        tmp_inplace_assign_subscr_1__value = tmp_assign_source_14;

    }
    {
        PyObject *tmp_ass_subvalue_84;
        PyObject *tmp_ass_subscribed_84;
        PyObject *tmp_ass_subscript_84;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
        tmp_ass_subvalue_84 = tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
        tmp_ass_subscribed_84 = tmp_inplace_assign_subscr_1__target;
        tmp_ass_subscript_84 = mod_consts[7];
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_84, tmp_ass_subscript_84, 0, tmp_ass_subvalue_84);
        if (tmp_ass_subscript_res_1 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto try_except_handler_1;
        }
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

    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__target);
    Py_DECREF(tmp_inplace_assign_subscr_1__target);
    tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_1__value);
    Py_DECREF(tmp_inplace_assign_subscr_1__value);
    tmp_inplace_assign_subscr_1__value = NULL;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_assign_source_15 == NULL)) {
            tmp_assign_source_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_subscr_2__target == NULL);
        Py_INCREF(tmp_assign_source_15);
        tmp_inplace_assign_subscr_2__target = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(tmp_inplace_assign_subscr_2__target);
        tmp_expression_value_6 = tmp_inplace_assign_subscr_2__target;
        tmp_subscript_value_3 = mod_consts[190];
        tmp_assign_source_16 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_3, 8);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_2;
        }
        assert(tmp_inplace_assign_subscr_2__value == NULL);
        tmp_inplace_assign_subscr_2__value = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_3;
        CHECK_OBJECT(tmp_inplace_assign_subscr_2__value);
        tmp_left_value_3 = tmp_inplace_assign_subscr_2__value;
        tmp_right_value_3 = mod_consts[191];
        tmp_result = BINARY_OPERATION_SUB_OBJECT_FLOAT_INPLACE(&tmp_left_value_3, tmp_right_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_2;
        }
        tmp_assign_source_17 = tmp_left_value_3;
        tmp_inplace_assign_subscr_2__value = tmp_assign_source_17;

    }
    {
        PyObject *tmp_ass_subvalue_85;
        PyObject *tmp_ass_subscribed_85;
        PyObject *tmp_ass_subscript_85;
        int tmp_ass_subscript_res_2;
        CHECK_OBJECT(tmp_inplace_assign_subscr_2__value);
        tmp_ass_subvalue_85 = tmp_inplace_assign_subscr_2__value;
        CHECK_OBJECT(tmp_inplace_assign_subscr_2__target);
        tmp_ass_subscribed_85 = tmp_inplace_assign_subscr_2__target;
        tmp_ass_subscript_85 = mod_consts[190];
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_85, tmp_ass_subscript_85, 8, tmp_ass_subvalue_85);
        if (tmp_ass_subscript_res_2 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_2;
        }
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

    CHECK_OBJECT(tmp_inplace_assign_subscr_2__target);
    Py_DECREF(tmp_inplace_assign_subscr_2__target);
    tmp_inplace_assign_subscr_2__target = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_2__value);
    tmp_inplace_assign_subscr_2__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_inplace_assign_subscr_2__target);
    Py_DECREF(tmp_inplace_assign_subscr_2__target);
    tmp_inplace_assign_subscr_2__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_2__value);
    Py_DECREF(tmp_inplace_assign_subscr_2__value);
    tmp_inplace_assign_subscr_2__value = NULL;
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_assign_source_18 == NULL)) {
            tmp_assign_source_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_subscr_3__target == NULL);
        Py_INCREF(tmp_assign_source_18);
        tmp_inplace_assign_subscr_3__target = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(tmp_inplace_assign_subscr_3__target);
        tmp_expression_value_7 = tmp_inplace_assign_subscr_3__target;
        tmp_subscript_value_4 = mod_consts[192];
        tmp_assign_source_19 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_4, 11);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_3;
        }
        assert(tmp_inplace_assign_subscr_3__value == NULL);
        tmp_inplace_assign_subscr_3__value = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_left_value_4;
        PyObject *tmp_right_value_4;
        CHECK_OBJECT(tmp_inplace_assign_subscr_3__value);
        tmp_left_value_4 = tmp_inplace_assign_subscr_3__value;
        tmp_right_value_4 = mod_consts[193];
        tmp_result = BINARY_OPERATION_SUB_OBJECT_FLOAT_INPLACE(&tmp_left_value_4, tmp_right_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_3;
        }
        tmp_assign_source_20 = tmp_left_value_4;
        tmp_inplace_assign_subscr_3__value = tmp_assign_source_20;

    }
    {
        PyObject *tmp_ass_subvalue_86;
        PyObject *tmp_ass_subscribed_86;
        PyObject *tmp_ass_subscript_86;
        int tmp_ass_subscript_res_3;
        CHECK_OBJECT(tmp_inplace_assign_subscr_3__value);
        tmp_ass_subvalue_86 = tmp_inplace_assign_subscr_3__value;
        CHECK_OBJECT(tmp_inplace_assign_subscr_3__target);
        tmp_ass_subscribed_86 = tmp_inplace_assign_subscr_3__target;
        tmp_ass_subscript_86 = mod_consts[192];
        tmp_ass_subscript_res_3 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_86, tmp_ass_subscript_86, 11, tmp_ass_subvalue_86);
        if (tmp_ass_subscript_res_3 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_3;
        }
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_inplace_assign_subscr_3__target);
    Py_DECREF(tmp_inplace_assign_subscr_3__target);
    tmp_inplace_assign_subscr_3__target = NULL;
    Py_XDECREF(tmp_inplace_assign_subscr_3__value);
    tmp_inplace_assign_subscr_3__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_inplace_assign_subscr_3__target);
    Py_DECREF(tmp_inplace_assign_subscr_3__target);
    tmp_inplace_assign_subscr_3__target = NULL;
    CHECK_OBJECT(tmp_inplace_assign_subscr_3__value);
    Py_DECREF(tmp_inplace_assign_subscr_3__value);
    tmp_inplace_assign_subscr_3__value = NULL;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_left_value_5;
        PyObject *tmp_right_value_5;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[18]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_left_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_left_value_5 == NULL)) {
            tmp_left_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_left_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_right_value_5 = mod_consts[185];
        tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_5, tmp_right_value_5);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        frame_33b89686f0c602fd45584fb394f0be15->m_frame.f_lineno = 131;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_21);
    }
    {
        PyObject *tmp_ass_subvalue_87;
        PyObject *tmp_ass_subscribed_87;
        PyObject *tmp_ass_subscript_87;
        int tmp_ass_subscript_res_4;
        tmp_ass_subvalue_87 = mod_consts[195];
        tmp_ass_subscribed_87 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_ass_subscribed_87 == NULL)) {
            tmp_ass_subscribed_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[194]);
        }

        assert(!(tmp_ass_subscribed_87 == NULL));
        tmp_ass_subscript_87 = mod_consts[7];
        tmp_ass_subscript_res_4 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_87, tmp_ass_subscript_87, 0, tmp_ass_subvalue_87);
        if (tmp_ass_subscript_res_4 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_88;
        PyObject *tmp_ass_subscribed_88;
        PyObject *tmp_ass_subscript_88;
        int tmp_ass_subscript_res_5;
        tmp_ass_subvalue_88 = mod_consts[196];
        tmp_ass_subscribed_88 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_ass_subscribed_88 == NULL)) {
            tmp_ass_subscribed_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[194]);
        }

        if (tmp_ass_subscribed_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_88 = mod_consts[197];
        tmp_ass_subscript_res_5 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_88, tmp_ass_subscript_88, 5, tmp_ass_subvalue_88);
        if (tmp_ass_subscript_res_5 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_89;
        PyObject *tmp_ass_subscribed_89;
        PyObject *tmp_ass_subscript_89;
        int tmp_ass_subscript_res_6;
        tmp_ass_subvalue_89 = mod_consts[198];
        tmp_ass_subscribed_89 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_ass_subscribed_89 == NULL)) {
            tmp_ass_subscribed_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[194]);
        }

        if (tmp_ass_subscribed_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_89 = mod_consts[199];
        tmp_ass_subscript_res_6 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_89, tmp_ass_subscript_89, 6, tmp_ass_subvalue_89);
        if (tmp_ass_subscript_res_6 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_90;
        PyObject *tmp_ass_subscribed_90;
        PyObject *tmp_ass_subscript_90;
        int tmp_ass_subscript_res_7;
        tmp_ass_subvalue_90 = mod_consts[200];
        tmp_ass_subscribed_90 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_ass_subscribed_90 == NULL)) {
            tmp_ass_subscribed_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[194]);
        }

        if (tmp_ass_subscribed_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_90 = mod_consts[13];
        tmp_ass_subscript_res_7 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_90, tmp_ass_subscript_90, 7, tmp_ass_subvalue_90);
        if (tmp_ass_subscript_res_7 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_91;
        PyObject *tmp_ass_subscribed_91;
        PyObject *tmp_ass_subscript_91;
        int tmp_ass_subscript_res_8;
        tmp_ass_subvalue_91 = mod_consts[201];
        tmp_ass_subscribed_91 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_ass_subscribed_91 == NULL)) {
            tmp_ass_subscribed_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[194]);
        }

        if (tmp_ass_subscribed_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_91 = mod_consts[190];
        tmp_ass_subscript_res_8 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_91, tmp_ass_subscript_91, 8, tmp_ass_subvalue_91);
        if (tmp_ass_subscript_res_8 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_92;
        PyObject *tmp_ass_subscribed_92;
        PyObject *tmp_ass_subscript_92;
        int tmp_ass_subscript_res_9;
        tmp_ass_subvalue_92 = mod_consts[202];
        tmp_ass_subscribed_92 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_ass_subscribed_92 == NULL)) {
            tmp_ass_subscribed_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[194]);
        }

        if (tmp_ass_subscribed_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_92 = mod_consts[203];
        tmp_ass_subscript_res_9 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_92, tmp_ass_subscript_92, 9, tmp_ass_subvalue_92);
        if (tmp_ass_subscript_res_9 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_93;
        PyObject *tmp_ass_subscribed_93;
        PyObject *tmp_ass_subscript_93;
        int tmp_ass_subscript_res_10;
        tmp_ass_subvalue_93 = mod_consts[204];
        tmp_ass_subscribed_93 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_ass_subscribed_93 == NULL)) {
            tmp_ass_subscribed_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[194]);
        }

        if (tmp_ass_subscribed_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_93 = mod_consts[205];
        tmp_ass_subscript_res_10 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_93, tmp_ass_subscript_93, 10, tmp_ass_subvalue_93);
        if (tmp_ass_subscript_res_10 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_94;
        PyObject *tmp_ass_subscribed_94;
        PyObject *tmp_ass_subscript_94;
        int tmp_ass_subscript_res_11;
        tmp_ass_subvalue_94 = mod_consts[206];
        tmp_ass_subscribed_94 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_ass_subscribed_94 == NULL)) {
            tmp_ass_subscribed_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[194]);
        }

        if (tmp_ass_subscribed_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_94 = mod_consts[192];
        tmp_ass_subscript_res_11 = SET_SUBSCRIPT_CONST(tmp_ass_subscribed_94, tmp_ass_subscript_94, 11, tmp_ass_subvalue_94);
        if (tmp_ass_subscript_res_11 == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_left_value_6;
        PyObject *tmp_right_value_6;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[18]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_left_value_6 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_left_value_6 == NULL)) {
            tmp_left_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_left_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_right_value_6 = mod_consts[207];
        tmp_tuple_element_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_6, tmp_right_value_6);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_element_value_4, 0, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_args_element_value_4, 1, tmp_tuple_element_3);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        frame_33b89686f0c602fd45584fb394f0be15->m_frame.f_lineno = 142;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_22);
    }
    {
        PyObject *tmp_ass_subvalue_95;
        PyObject *tmp_ass_subscribed_95;
        PyObject *tmp_ass_subscript_95;
        tmp_ass_subvalue_95 = mod_consts[209];
        tmp_ass_subscribed_95 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_95 == NULL)) {
            tmp_ass_subscribed_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        assert(!(tmp_ass_subscribed_95 == NULL));
        tmp_ass_subscript_95 = mod_consts[210];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_95, tmp_ass_subscript_95, tmp_ass_subvalue_95);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_96;
        PyObject *tmp_ass_subscribed_96;
        PyObject *tmp_ass_subscript_96;
        tmp_ass_subvalue_96 = mod_consts[211];
        tmp_ass_subscribed_96 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_96 == NULL)) {
            tmp_ass_subscribed_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_96 = mod_consts[212];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_96, tmp_ass_subscript_96, tmp_ass_subvalue_96);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_97;
        PyObject *tmp_ass_subscribed_97;
        PyObject *tmp_ass_subscript_97;
        tmp_ass_subvalue_97 = mod_consts[213];
        tmp_ass_subscribed_97 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_97 == NULL)) {
            tmp_ass_subscribed_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_97 = mod_consts[214];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_97, tmp_ass_subscript_97, tmp_ass_subvalue_97);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_98;
        PyObject *tmp_ass_subscribed_98;
        PyObject *tmp_ass_subscript_98;
        tmp_ass_subvalue_98 = mod_consts[215];
        tmp_ass_subscribed_98 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_98 == NULL)) {
            tmp_ass_subscribed_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_98 = mod_consts[216];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_98, tmp_ass_subscript_98, tmp_ass_subvalue_98);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_99;
        PyObject *tmp_ass_subscribed_99;
        PyObject *tmp_ass_subscript_99;
        tmp_ass_subvalue_99 = mod_consts[217];
        tmp_ass_subscribed_99 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_99 == NULL)) {
            tmp_ass_subscribed_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_99 = mod_consts[218];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_99, tmp_ass_subscript_99, tmp_ass_subvalue_99);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_100;
        PyObject *tmp_ass_subscribed_100;
        PyObject *tmp_ass_subscript_100;
        tmp_ass_subvalue_100 = mod_consts[219];
        tmp_ass_subscribed_100 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_100 == NULL)) {
            tmp_ass_subscribed_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_100 = mod_consts[220];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_100, tmp_ass_subscript_100, tmp_ass_subvalue_100);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_101;
        PyObject *tmp_ass_subscribed_101;
        PyObject *tmp_ass_subscript_101;
        tmp_ass_subvalue_101 = mod_consts[221];
        tmp_ass_subscribed_101 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_101 == NULL)) {
            tmp_ass_subscribed_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_101 = mod_consts[222];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_101, tmp_ass_subscript_101, tmp_ass_subvalue_101);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_102;
        PyObject *tmp_ass_subscribed_102;
        PyObject *tmp_ass_subscript_102;
        tmp_ass_subvalue_102 = mod_consts[223];
        tmp_ass_subscribed_102 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_102 == NULL)) {
            tmp_ass_subscribed_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_102 = mod_consts[224];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_102, tmp_ass_subscript_102, tmp_ass_subvalue_102);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_103;
        PyObject *tmp_ass_subscribed_103;
        PyObject *tmp_ass_subscript_103;
        tmp_ass_subvalue_103 = mod_consts[225];
        tmp_ass_subscribed_103 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_103 == NULL)) {
            tmp_ass_subscribed_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_103 = mod_consts[226];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_103, tmp_ass_subscript_103, tmp_ass_subvalue_103);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_104;
        PyObject *tmp_ass_subscribed_104;
        PyObject *tmp_ass_subscript_104;
        tmp_ass_subvalue_104 = mod_consts[227];
        tmp_ass_subscribed_104 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_104 == NULL)) {
            tmp_ass_subscribed_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_104 = mod_consts[228];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_104, tmp_ass_subscript_104, tmp_ass_subvalue_104);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_105;
        PyObject *tmp_ass_subscribed_105;
        PyObject *tmp_ass_subscript_105;
        tmp_ass_subvalue_105 = mod_consts[229];
        tmp_ass_subscribed_105 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_105 == NULL)) {
            tmp_ass_subscribed_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_105 = mod_consts[230];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_105, tmp_ass_subscript_105, tmp_ass_subvalue_105);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_106;
        PyObject *tmp_ass_subscribed_106;
        PyObject *tmp_ass_subscript_106;
        tmp_ass_subvalue_106 = mod_consts[231];
        tmp_ass_subscribed_106 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_106 == NULL)) {
            tmp_ass_subscribed_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_106 = mod_consts[232];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_106, tmp_ass_subscript_106, tmp_ass_subvalue_106);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_107;
        PyObject *tmp_ass_subscribed_107;
        PyObject *tmp_ass_subscript_107;
        tmp_ass_subvalue_107 = mod_consts[233];
        tmp_ass_subscribed_107 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_107 == NULL)) {
            tmp_ass_subscribed_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_107 = mod_consts[21];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_107, tmp_ass_subscript_107, tmp_ass_subvalue_107);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_108;
        PyObject *tmp_ass_subscribed_108;
        PyObject *tmp_ass_subscript_108;
        tmp_ass_subvalue_108 = mod_consts[234];
        tmp_ass_subscribed_108 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_108 == NULL)) {
            tmp_ass_subscribed_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_108 = mod_consts[235];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_108, tmp_ass_subscript_108, tmp_ass_subvalue_108);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_109;
        PyObject *tmp_ass_subscribed_109;
        PyObject *tmp_ass_subscript_109;
        tmp_ass_subvalue_109 = mod_consts[236];
        tmp_ass_subscribed_109 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_109 == NULL)) {
            tmp_ass_subscribed_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_109 = mod_consts[237];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_109, tmp_ass_subscript_109, tmp_ass_subvalue_109);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_110;
        PyObject *tmp_ass_subscribed_110;
        PyObject *tmp_ass_subscript_110;
        tmp_ass_subvalue_110 = mod_consts[238];
        tmp_ass_subscribed_110 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_110 == NULL)) {
            tmp_ass_subscribed_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_110 = mod_consts[239];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_110, tmp_ass_subscript_110, tmp_ass_subvalue_110);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_111;
        PyObject *tmp_ass_subscribed_111;
        PyObject *tmp_ass_subscript_111;
        tmp_ass_subvalue_111 = mod_consts[240];
        tmp_ass_subscribed_111 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_111 == NULL)) {
            tmp_ass_subscribed_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_111 = mod_consts[241];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_111, tmp_ass_subscript_111, tmp_ass_subvalue_111);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_112;
        PyObject *tmp_ass_subscribed_112;
        PyObject *tmp_ass_subscript_112;
        tmp_ass_subvalue_112 = mod_consts[242];
        tmp_ass_subscribed_112 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_112 == NULL)) {
            tmp_ass_subscribed_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_112 = mod_consts[243];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_112, tmp_ass_subscript_112, tmp_ass_subvalue_112);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_113;
        PyObject *tmp_ass_subscribed_113;
        PyObject *tmp_ass_subscript_113;
        tmp_ass_subvalue_113 = mod_consts[244];
        tmp_ass_subscribed_113 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_113 == NULL)) {
            tmp_ass_subscribed_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_113 = mod_consts[245];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_113, tmp_ass_subscript_113, tmp_ass_subvalue_113);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_114;
        PyObject *tmp_ass_subscribed_114;
        PyObject *tmp_ass_subscript_114;
        tmp_ass_subvalue_114 = mod_consts[246];
        tmp_ass_subscribed_114 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_114 == NULL)) {
            tmp_ass_subscribed_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_114 = mod_consts[247];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_114, tmp_ass_subscript_114, tmp_ass_subvalue_114);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_115;
        PyObject *tmp_ass_subscribed_115;
        PyObject *tmp_ass_subscript_115;
        tmp_ass_subvalue_115 = mod_consts[248];
        tmp_ass_subscribed_115 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_115 == NULL)) {
            tmp_ass_subscribed_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_115 = mod_consts[249];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_115, tmp_ass_subscript_115, tmp_ass_subvalue_115);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_116;
        PyObject *tmp_ass_subscribed_116;
        PyObject *tmp_ass_subscript_116;
        tmp_ass_subvalue_116 = mod_consts[250];
        tmp_ass_subscribed_116 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_116 == NULL)) {
            tmp_ass_subscribed_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_116 = mod_consts[251];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_116, tmp_ass_subscript_116, tmp_ass_subvalue_116);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_117;
        PyObject *tmp_ass_subscribed_117;
        PyObject *tmp_ass_subscript_117;
        tmp_ass_subvalue_117 = mod_consts[252];
        tmp_ass_subscribed_117 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_117 == NULL)) {
            tmp_ass_subscribed_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_117 = mod_consts[253];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_117, tmp_ass_subscript_117, tmp_ass_subvalue_117);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_118;
        PyObject *tmp_ass_subscribed_118;
        PyObject *tmp_ass_subscript_118;
        tmp_ass_subvalue_118 = mod_consts[254];
        tmp_ass_subscribed_118 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_118 == NULL)) {
            tmp_ass_subscribed_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_118 = mod_consts[255];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_118, tmp_ass_subscript_118, tmp_ass_subvalue_118);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_119;
        PyObject *tmp_ass_subscribed_119;
        PyObject *tmp_ass_subscript_119;
        tmp_ass_subvalue_119 = mod_consts[256];
        tmp_ass_subscribed_119 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_119 == NULL)) {
            tmp_ass_subscribed_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_119 = mod_consts[23];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_119, tmp_ass_subscript_119, tmp_ass_subvalue_119);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_120;
        PyObject *tmp_ass_subscribed_120;
        PyObject *tmp_ass_subscript_120;
        tmp_ass_subvalue_120 = mod_consts[257];
        tmp_ass_subscribed_120 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_120 == NULL)) {
            tmp_ass_subscribed_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_120 = mod_consts[258];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_120, tmp_ass_subscript_120, tmp_ass_subvalue_120);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_121;
        PyObject *tmp_ass_subscribed_121;
        PyObject *tmp_ass_subscript_121;
        tmp_ass_subvalue_121 = mod_consts[259];
        tmp_ass_subscribed_121 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_121 == NULL)) {
            tmp_ass_subscribed_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_121 = mod_consts[260];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_121, tmp_ass_subscript_121, tmp_ass_subvalue_121);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_122;
        PyObject *tmp_ass_subscribed_122;
        PyObject *tmp_ass_subscript_122;
        tmp_ass_subvalue_122 = mod_consts[261];
        tmp_ass_subscribed_122 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_122 == NULL)) {
            tmp_ass_subscribed_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_122 = mod_consts[262];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_122, tmp_ass_subscript_122, tmp_ass_subvalue_122);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_123;
        PyObject *tmp_ass_subscribed_123;
        PyObject *tmp_ass_subscript_123;
        tmp_ass_subvalue_123 = mod_consts[263];
        tmp_ass_subscribed_123 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_123 == NULL)) {
            tmp_ass_subscribed_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_123 = mod_consts[264];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_123, tmp_ass_subscript_123, tmp_ass_subvalue_123);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_124;
        PyObject *tmp_ass_subscribed_124;
        PyObject *tmp_ass_subscript_124;
        tmp_ass_subvalue_124 = mod_consts[265];
        tmp_ass_subscribed_124 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_124 == NULL)) {
            tmp_ass_subscribed_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_124 = mod_consts[266];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_124, tmp_ass_subscript_124, tmp_ass_subvalue_124);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_125;
        PyObject *tmp_ass_subscribed_125;
        PyObject *tmp_ass_subscript_125;
        tmp_ass_subvalue_125 = mod_consts[267];
        tmp_ass_subscribed_125 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_125 == NULL)) {
            tmp_ass_subscribed_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_125 = mod_consts[268];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_125, tmp_ass_subscript_125, tmp_ass_subvalue_125);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_126;
        PyObject *tmp_ass_subscribed_126;
        PyObject *tmp_ass_subscript_126;
        tmp_ass_subvalue_126 = mod_consts[269];
        tmp_ass_subscribed_126 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_126 == NULL)) {
            tmp_ass_subscribed_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_126 = mod_consts[270];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_126, tmp_ass_subscript_126, tmp_ass_subvalue_126);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_127;
        PyObject *tmp_ass_subscribed_127;
        PyObject *tmp_ass_subscript_127;
        tmp_ass_subvalue_127 = mod_consts[271];
        tmp_ass_subscribed_127 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_127 == NULL)) {
            tmp_ass_subscribed_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_127 = mod_consts[272];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_127, tmp_ass_subscript_127, tmp_ass_subvalue_127);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_128;
        PyObject *tmp_ass_subscribed_128;
        PyObject *tmp_ass_subscript_128;
        tmp_ass_subvalue_128 = mod_consts[273];
        tmp_ass_subscribed_128 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_128 == NULL)) {
            tmp_ass_subscribed_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_128 = mod_consts[274];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_128, tmp_ass_subscript_128, tmp_ass_subvalue_128);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_129;
        PyObject *tmp_ass_subscribed_129;
        PyObject *tmp_ass_subscript_129;
        tmp_ass_subvalue_129 = mod_consts[275];
        tmp_ass_subscribed_129 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_129 == NULL)) {
            tmp_ass_subscribed_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_129 = mod_consts[276];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_129, tmp_ass_subscript_129, tmp_ass_subvalue_129);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_130;
        PyObject *tmp_ass_subscribed_130;
        PyObject *tmp_ass_subscript_130;
        tmp_ass_subvalue_130 = mod_consts[277];
        tmp_ass_subscribed_130 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_130 == NULL)) {
            tmp_ass_subscribed_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_130 = mod_consts[278];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_130, tmp_ass_subscript_130, tmp_ass_subvalue_130);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_131;
        PyObject *tmp_ass_subscribed_131;
        PyObject *tmp_ass_subscript_131;
        tmp_ass_subvalue_131 = mod_consts[279];
        tmp_ass_subscribed_131 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_131 == NULL)) {
            tmp_ass_subscribed_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_131 = mod_consts[27];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_131, tmp_ass_subscript_131, tmp_ass_subvalue_131);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_132;
        PyObject *tmp_ass_subscribed_132;
        PyObject *tmp_ass_subscript_132;
        tmp_ass_subvalue_132 = mod_consts[280];
        tmp_ass_subscribed_132 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_132 == NULL)) {
            tmp_ass_subscribed_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_132 = mod_consts[281];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_132, tmp_ass_subscript_132, tmp_ass_subvalue_132);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_133;
        PyObject *tmp_ass_subscribed_133;
        PyObject *tmp_ass_subscript_133;
        tmp_ass_subvalue_133 = mod_consts[282];
        tmp_ass_subscribed_133 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_133 == NULL)) {
            tmp_ass_subscribed_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_133 = mod_consts[283];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_133, tmp_ass_subscript_133, tmp_ass_subvalue_133);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_134;
        PyObject *tmp_ass_subscribed_134;
        PyObject *tmp_ass_subscript_134;
        tmp_ass_subvalue_134 = mod_consts[284];
        tmp_ass_subscribed_134 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_134 == NULL)) {
            tmp_ass_subscribed_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_134 = mod_consts[285];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_134, tmp_ass_subscript_134, tmp_ass_subvalue_134);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_135;
        PyObject *tmp_ass_subscribed_135;
        PyObject *tmp_ass_subscript_135;
        tmp_ass_subvalue_135 = mod_consts[286];
        tmp_ass_subscribed_135 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_135 == NULL)) {
            tmp_ass_subscribed_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_135 = mod_consts[287];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_135, tmp_ass_subscript_135, tmp_ass_subvalue_135);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_136;
        PyObject *tmp_ass_subscribed_136;
        PyObject *tmp_ass_subscript_136;
        tmp_ass_subvalue_136 = mod_consts[288];
        tmp_ass_subscribed_136 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_136 == NULL)) {
            tmp_ass_subscribed_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_136 = mod_consts[289];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_136, tmp_ass_subscript_136, tmp_ass_subvalue_136);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_137;
        PyObject *tmp_ass_subscribed_137;
        PyObject *tmp_ass_subscript_137;
        tmp_ass_subvalue_137 = mod_consts[290];
        tmp_ass_subscribed_137 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_137 == NULL)) {
            tmp_ass_subscribed_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_137 = mod_consts[291];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_137, tmp_ass_subscript_137, tmp_ass_subvalue_137);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_138;
        PyObject *tmp_ass_subscribed_138;
        PyObject *tmp_ass_subscript_138;
        tmp_ass_subvalue_138 = mod_consts[292];
        tmp_ass_subscribed_138 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_138 == NULL)) {
            tmp_ass_subscribed_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_138 = mod_consts[293];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_138, tmp_ass_subscript_138, tmp_ass_subvalue_138);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_139;
        PyObject *tmp_ass_subscribed_139;
        PyObject *tmp_ass_subscript_139;
        tmp_ass_subvalue_139 = mod_consts[294];
        tmp_ass_subscribed_139 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_139 == NULL)) {
            tmp_ass_subscribed_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_139 = mod_consts[295];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_139, tmp_ass_subscript_139, tmp_ass_subvalue_139);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_140;
        PyObject *tmp_ass_subscribed_140;
        PyObject *tmp_ass_subscript_140;
        tmp_ass_subvalue_140 = mod_consts[296];
        tmp_ass_subscribed_140 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_140 == NULL)) {
            tmp_ass_subscribed_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_140 = mod_consts[297];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_140, tmp_ass_subscript_140, tmp_ass_subvalue_140);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_141;
        PyObject *tmp_ass_subscribed_141;
        PyObject *tmp_ass_subscript_141;
        tmp_ass_subvalue_141 = mod_consts[298];
        tmp_ass_subscribed_141 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_141 == NULL)) {
            tmp_ass_subscribed_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_141 = mod_consts[299];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_141, tmp_ass_subscript_141, tmp_ass_subvalue_141);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_142;
        PyObject *tmp_ass_subscribed_142;
        PyObject *tmp_ass_subscript_142;
        tmp_ass_subvalue_142 = mod_consts[300];
        tmp_ass_subscribed_142 = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_ass_subscribed_142 == NULL)) {
            tmp_ass_subscribed_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
        }

        if (tmp_ass_subscribed_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_142 = mod_consts[301];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_142, tmp_ass_subscript_142, tmp_ass_subvalue_142);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_33b89686f0c602fd45584fb394f0be15);
#endif
    popFrameStack();

    assertFrameObject(frame_33b89686f0c602fd45584fb394f0be15);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_33b89686f0c602fd45584fb394f0be15);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_33b89686f0c602fd45584fb394f0be15, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_33b89686f0c602fd45584fb394f0be15->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_33b89686f0c602fd45584fb394f0be15, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scipy.integrate._ivp.dop853_coefficients", false);

    Py_INCREF(module_scipy$integrate$_ivp$dop853_coefficients);
    return module_scipy$integrate$_ivp$dop853_coefficients;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$integrate$_ivp$dop853_coefficients, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("scipy$integrate$_ivp$dop853_coefficients", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
