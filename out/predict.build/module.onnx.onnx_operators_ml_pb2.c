/* Generated code for Python module 'onnx.onnx_operators_ml_pb2'
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

/* The "module_onnx$onnx_operators_ml_pb2" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_onnx$onnx_operators_ml_pb2;
PyDictObject *moduledict_onnx$onnx_operators_ml_pb2;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[104];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[104];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("onnx.onnx_operators_ml_pb2"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 104; i++) {
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
void checkModuleConstants_onnx$onnx_operators_ml_pb2(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 104; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_8abafa342c2751518a1a158b09f31662;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[101]); CHECK_OBJECT(module_filename_obj);
    codeobj_8abafa342c2751518a1a158b09f31662 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[102], NULL, NULL, 0, 0, 0);
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

function_impl_code functable_onnx$onnx_operators_ml_pb2[] = {

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

    function_impl_code *current = functable_onnx$onnx_operators_ml_pb2;
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

    if (offset > sizeof(functable_onnx$onnx_operators_ml_pb2) || offset < 0) {
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
        functable_onnx$onnx_operators_ml_pb2[offset],
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
        module_onnx$onnx_operators_ml_pb2,
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
PyObject *modulecode_onnx$onnx_operators_ml_pb2(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("onnx.onnx_operators_ml_pb2");

    // Store the module for future use.
    module_onnx$onnx_operators_ml_pb2 = module;

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
        PRINT_STRING("onnx.onnx_operators_ml_pb2: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("onnx.onnx_operators_ml_pb2: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("onnx.onnx_operators_ml_pb2: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initonnx$onnx_operators_ml_pb2\n");

    moduledict_onnx$onnx_operators_ml_pb2 = MODULE_DICT(module_onnx$onnx_operators_ml_pb2);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_onnx$onnx_operators_ml_pb2,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_onnx$onnx_operators_ml_pb2,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[103]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_onnx$onnx_operators_ml_pb2,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_onnx$onnx_operators_ml_pb2,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_onnx$onnx_operators_ml_pb2,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_onnx$onnx_operators_ml_pb2);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_onnx$onnx_operators_ml_pb2);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_8abafa342c2751518a1a158b09f31662;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_8abafa342c2751518a1a158b09f31662 = MAKE_MODULE_FRAME(codeobj_8abafa342c2751518a1a158b09f31662, module_onnx$onnx_operators_ml_pb2);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_8abafa342c2751518a1a158b09f31662);
    assert(Py_REFCNT(frame_8abafa342c2751518a1a158b09f31662) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[5], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[7];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_onnx$onnx_operators_ml_pb2;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[8];
        tmp_level_value_1 = mod_consts[9];
        frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 5;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_onnx$onnx_operators_ml_pb2,
                mod_consts[10],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[10]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[7];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_onnx$onnx_operators_ml_pb2;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[12];
        tmp_level_value_2 = mod_consts[9];
        frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 6;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_onnx$onnx_operators_ml_pb2,
                mod_consts[13],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[13]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[7];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_onnx$onnx_operators_ml_pb2;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[15];
        tmp_level_value_3 = mod_consts[9];
        frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 7;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_onnx$onnx_operators_ml_pb2,
                mod_consts[16],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[16]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[7];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_onnx$onnx_operators_ml_pb2;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[18];
        tmp_level_value_4 = mod_consts[9];
        frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 8;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_onnx$onnx_operators_ml_pb2,
                mod_consts[19],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[19]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 11;
        tmp_assign_source_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[21]);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[23];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_onnx$onnx_operators_ml_pb2;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[24];
        tmp_level_value_5 = mod_consts[9];
        frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 14;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_onnx$onnx_operators_ml_pb2,
                mod_consts[25],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[25]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[27]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = mod_consts[28];
        tmp_kw_call_value_1_1 = mod_consts[23];
        tmp_kw_call_value_2_1 = mod_consts[29];
        tmp_kw_call_value_3_1 = mod_consts[30];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[31]);
        if (tmp_kw_call_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_1 = mod_consts[32];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_4_1);

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[33]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_4_1);

            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_1 = PyList_New(1);
        PyList_SET_ITEM(tmp_kw_call_value_6_1, 0, tmp_list_element_1);
        frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 17;
        {
            PyObject *kw_values[7] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1};

            tmp_assign_source_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_4_1);
        Py_DECREF(tmp_kw_call_value_6_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_kw_call_value_3_2;
        PyObject *tmp_kw_call_value_4_2;
        PyObject *tmp_kw_call_value_5_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_6_2;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_2_3;
        PyObject *tmp_kw_call_value_3_3;
        PyObject *tmp_kw_call_value_4_3;
        PyObject *tmp_kw_call_value_5_3;
        PyObject *tmp_kw_call_value_6_3;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_kw_call_value_8_1;
        PyObject *tmp_bytes_arg_value_1;
        PyObject *tmp_encoding_value_1;
        PyObject *tmp_kw_call_value_9_1;
        PyObject *tmp_kw_call_value_10_1;
        PyObject *tmp_kw_call_value_11_1;
        PyObject *tmp_kw_call_value_12_1;
        PyObject *tmp_kw_call_value_13_1;
        PyObject *tmp_kw_call_value_14_1;
        PyObject *tmp_kw_call_value_15_1;
        PyObject *tmp_kw_call_value_16_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_value_7_5;
        PyObject *tmp_kw_call_value_8_5;
        PyObject *tmp_kw_call_value_9_5;
        PyObject *tmp_kw_call_value_10_5;
        PyObject *tmp_kw_call_value_11_5;
        PyObject *tmp_kw_call_value_12_5;
        PyObject *tmp_kw_call_value_13_5;
        PyObject *tmp_kw_call_value_14_5;
        PyObject *tmp_kw_call_value_15_5;
        PyObject *tmp_kw_call_value_16_5;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[35]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = mod_consts[36];
        tmp_kw_call_value_1_2 = mod_consts[37];
        tmp_kw_call_value_2_2 = Py_None;
        tmp_kw_call_value_3_2 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_kw_call_value_3_2 == NULL)) {
            tmp_kw_call_value_3_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_kw_call_value_3_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_2 = Py_None;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[31]);
        if (tmp_kw_call_value_5_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_value_5_2);

            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[38]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_value_5_2);

            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = mod_consts[39];
        tmp_kw_call_value_1_3 = mod_consts[40];
        tmp_kw_call_value_2_3 = mod_consts[9];
        tmp_kw_call_value_3_3 = mod_consts[41];
        tmp_kw_call_value_4_3 = mod_consts[42];
        tmp_kw_call_value_5_3 = mod_consts[42];
        tmp_kw_call_value_6_3 = mod_consts[41];
        tmp_kw_call_value_7_1 = Py_False;
        tmp_bytes_arg_value_1 = mod_consts[43];
        tmp_encoding_value_1 = mod_consts[44];
        tmp_kw_call_value_8_1 = BYTES_DECODE2(tmp_bytes_arg_value_1, tmp_encoding_value_1);
        if (tmp_kw_call_value_8_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_value_5_2);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_1 = Py_None;
        tmp_kw_call_value_10_1 = Py_None;
        tmp_kw_call_value_11_1 = Py_None;
        tmp_kw_call_value_12_1 = Py_False;
        tmp_kw_call_value_13_1 = Py_None;
        tmp_kw_call_value_14_1 = Py_None;
        tmp_kw_call_value_15_1 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_kw_call_value_15_1 == NULL)) {
            tmp_kw_call_value_15_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_kw_call_value_15_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_value_5_2);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_value_8_1);

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_value_5_2);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_value_8_1);

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_16_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[31]);
        if (tmp_kw_call_value_16_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_value_5_2);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_value_8_1);

            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 38;
        {
            PyObject *kw_values[17] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3, tmp_kw_call_value_3_3, tmp_kw_call_value_4_3, tmp_kw_call_value_5_3, tmp_kw_call_value_6_3, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1, tmp_kw_call_value_10_1, tmp_kw_call_value_11_1, tmp_kw_call_value_12_1, tmp_kw_call_value_13_1, tmp_kw_call_value_14_1, tmp_kw_call_value_15_1, tmp_kw_call_value_16_1};

            tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[45]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_value_8_1);
        Py_DECREF(tmp_kw_call_value_16_1);
        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_value_5_2);

            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_2 = PyList_New(4);
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_kw_call_value_0_4;
            PyObject *tmp_kw_call_value_1_4;
            PyObject *tmp_kw_call_value_2_4;
            PyObject *tmp_kw_call_value_3_4;
            PyObject *tmp_kw_call_value_4_4;
            PyObject *tmp_kw_call_value_5_4;
            PyObject *tmp_kw_call_value_6_4;
            PyObject *tmp_kw_call_value_7_2;
            PyObject *tmp_kw_call_value_8_2;
            PyObject *tmp_kw_call_value_9_2;
            PyObject *tmp_kw_call_value_10_2;
            PyObject *tmp_kw_call_value_11_2;
            PyObject *tmp_kw_call_value_12_2;
            PyObject *tmp_kw_call_value_13_2;
            PyObject *tmp_kw_call_value_14_2;
            PyObject *tmp_kw_call_value_15_2;
            PyObject *tmp_kw_call_value_16_2;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_kw_call_value_0_5;
            PyObject *tmp_kw_call_value_1_5;
            PyObject *tmp_kw_call_value_2_5;
            PyObject *tmp_kw_call_value_3_5;
            PyObject *tmp_kw_call_value_4_5;
            PyObject *tmp_kw_call_value_5_5;
            PyObject *tmp_kw_call_value_6_5;
            PyObject *tmp_kw_call_value_7_3;
            PyObject *tmp_kw_call_value_8_3;
            PyObject *tmp_kw_call_value_9_3;
            PyObject *tmp_kw_call_value_10_3;
            PyObject *tmp_kw_call_value_11_3;
            PyObject *tmp_kw_call_value_12_3;
            PyObject *tmp_kw_call_value_13_3;
            PyObject *tmp_kw_call_value_14_3;
            PyObject *tmp_kw_call_value_15_3;
            PyObject *tmp_kw_call_value_16_3;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_kw_call_value_0_6;
            PyObject *tmp_kw_call_value_1_6;
            PyObject *tmp_kw_call_value_2_6;
            PyObject *tmp_kw_call_value_3_6;
            PyObject *tmp_kw_call_value_4_6;
            PyObject *tmp_kw_call_value_5_6;
            PyObject *tmp_kw_call_value_6_6;
            PyObject *tmp_kw_call_value_7_4;
            PyObject *tmp_kw_call_value_8_4;
            PyObject *tmp_bytes_arg_value_2;
            PyObject *tmp_encoding_value_2;
            PyObject *tmp_kw_call_value_9_4;
            PyObject *tmp_kw_call_value_10_4;
            PyObject *tmp_kw_call_value_11_4;
            PyObject *tmp_kw_call_value_12_4;
            PyObject *tmp_kw_call_value_13_4;
            PyObject *tmp_kw_call_value_14_4;
            PyObject *tmp_kw_call_value_15_4;
            PyObject *tmp_kw_call_value_16_4;
            PyObject *tmp_expression_value_13;
            PyList_SET_ITEM(tmp_kw_call_value_6_2, 0, tmp_list_element_2);
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto list_build_exception_1;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[38]);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto list_build_exception_1;
            }
            tmp_kw_call_value_0_4 = mod_consts[46];
            tmp_kw_call_value_1_4 = mod_consts[47];
            tmp_kw_call_value_2_4 = mod_consts[41];
            tmp_kw_call_value_3_4 = mod_consts[48];
            tmp_kw_call_value_4_4 = mod_consts[49];
            tmp_kw_call_value_5_4 = mod_consts[48];
            tmp_kw_call_value_6_4 = mod_consts[41];
            tmp_kw_call_value_7_2 = Py_False;
            tmp_kw_call_value_8_2 = mod_consts[9];
            tmp_kw_call_value_9_2 = Py_None;
            tmp_kw_call_value_10_2 = Py_None;
            tmp_kw_call_value_11_2 = Py_None;
            tmp_kw_call_value_12_2 = Py_False;
            tmp_kw_call_value_13_2 = Py_None;
            tmp_kw_call_value_14_2 = Py_None;
            tmp_kw_call_value_15_2 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_2 == NULL)) {
                tmp_kw_call_value_15_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 51;

                goto list_build_exception_1;
            }
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 51;

                goto list_build_exception_1;
            }
            tmp_kw_call_value_16_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[31]);
            if (tmp_kw_call_value_16_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 51;

                goto list_build_exception_1;
            }
            frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 45;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_4, tmp_kw_call_value_3_4, tmp_kw_call_value_4_4, tmp_kw_call_value_5_4, tmp_kw_call_value_6_4, tmp_kw_call_value_7_2, tmp_kw_call_value_8_2, tmp_kw_call_value_9_2, tmp_kw_call_value_10_2, tmp_kw_call_value_11_2, tmp_kw_call_value_12_2, tmp_kw_call_value_13_2, tmp_kw_call_value_14_2, tmp_kw_call_value_15_2, tmp_kw_call_value_16_2};

                tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, kw_values, mod_consts[45]);
            }

            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_16_2);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_2, 1, tmp_list_element_2);
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto list_build_exception_1;
            }
            tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[38]);
            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto list_build_exception_1;
            }
            tmp_kw_call_value_0_5 = mod_consts[50];
            tmp_kw_call_value_1_5 = mod_consts[51];
            tmp_kw_call_value_2_5 = mod_consts[48];
            tmp_kw_call_value_3_5 = mod_consts[49];
            tmp_kw_call_value_4_5 = mod_consts[52];
            tmp_kw_call_value_5_5 = mod_consts[53];
            tmp_kw_call_value_6_5 = mod_consts[41];
            tmp_kw_call_value_7_3 = Py_False;
            tmp_kw_call_value_8_3 = mod_consts[9];
            tmp_kw_call_value_9_3 = Py_None;
            tmp_kw_call_value_10_3 = Py_None;
            tmp_kw_call_value_11_3 = Py_None;
            tmp_kw_call_value_12_3 = Py_False;
            tmp_kw_call_value_13_3 = Py_None;
            tmp_kw_call_value_14_3 = Py_None;
            tmp_kw_call_value_15_3 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_3 == NULL)) {
                tmp_kw_call_value_15_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_5);

                exception_lineno = 58;

                goto list_build_exception_1;
            }
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_5);

                exception_lineno = 58;

                goto list_build_exception_1;
            }
            tmp_kw_call_value_16_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[31]);
            if (tmp_kw_call_value_16_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_5);

                exception_lineno = 58;

                goto list_build_exception_1;
            }
            frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 52;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5, tmp_kw_call_value_2_5, tmp_kw_call_value_3_5, tmp_kw_call_value_4_5, tmp_kw_call_value_5_5, tmp_kw_call_value_6_5, tmp_kw_call_value_7_3, tmp_kw_call_value_8_3, tmp_kw_call_value_9_3, tmp_kw_call_value_10_3, tmp_kw_call_value_11_3, tmp_kw_call_value_12_3, tmp_kw_call_value_13_3, tmp_kw_call_value_14_3, tmp_kw_call_value_15_3, tmp_kw_call_value_16_3};

                tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_5, kw_values, mod_consts[45]);
            }

            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_value_16_3);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_2, 2, tmp_list_element_2);
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto list_build_exception_1;
            }
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[38]);
            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto list_build_exception_1;
            }
            tmp_kw_call_value_0_6 = mod_consts[54];
            tmp_kw_call_value_1_6 = mod_consts[55];
            tmp_kw_call_value_2_6 = mod_consts[49];
            tmp_kw_call_value_3_6 = mod_consts[56];
            tmp_kw_call_value_4_6 = mod_consts[42];
            tmp_kw_call_value_5_6 = mod_consts[42];
            tmp_kw_call_value_6_6 = mod_consts[41];
            tmp_kw_call_value_7_4 = Py_False;
            tmp_bytes_arg_value_2 = mod_consts[43];
            tmp_encoding_value_2 = mod_consts[44];
            tmp_kw_call_value_8_4 = BYTES_DECODE2(tmp_bytes_arg_value_2, tmp_encoding_value_2);
            if (tmp_kw_call_value_8_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 62;

                goto list_build_exception_1;
            }
            tmp_kw_call_value_9_4 = Py_None;
            tmp_kw_call_value_10_4 = Py_None;
            tmp_kw_call_value_11_4 = Py_None;
            tmp_kw_call_value_12_4 = Py_False;
            tmp_kw_call_value_13_4 = Py_None;
            tmp_kw_call_value_14_4 = Py_None;
            tmp_kw_call_value_15_4 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_4 == NULL)) {
                tmp_kw_call_value_15_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);
                Py_DECREF(tmp_kw_call_value_8_4);

                exception_lineno = 65;

                goto list_build_exception_1;
            }
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);
                Py_DECREF(tmp_kw_call_value_8_4);

                exception_lineno = 65;

                goto list_build_exception_1;
            }
            tmp_kw_call_value_16_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[31]);
            if (tmp_kw_call_value_16_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);
                Py_DECREF(tmp_kw_call_value_8_4);

                exception_lineno = 65;

                goto list_build_exception_1;
            }
            frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 59;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_6, tmp_kw_call_value_2_6, tmp_kw_call_value_3_6, tmp_kw_call_value_4_6, tmp_kw_call_value_5_6, tmp_kw_call_value_6_6, tmp_kw_call_value_7_4, tmp_kw_call_value_8_4, tmp_kw_call_value_9_4, tmp_kw_call_value_10_4, tmp_kw_call_value_11_4, tmp_kw_call_value_12_4, tmp_kw_call_value_13_4, tmp_kw_call_value_14_4, tmp_kw_call_value_15_4, tmp_kw_call_value_16_4};

                tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_6, kw_values, mod_consts[45]);
            }

            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_kw_call_value_8_4);
            Py_DECREF(tmp_kw_call_value_16_4);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_2, 3, tmp_list_element_2);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_5_2);
        Py_DECREF(tmp_kw_call_value_6_2);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_kw_call_value_7_5 = PyList_New(0);
        tmp_kw_call_value_8_5 = PyList_New(0);
        tmp_kw_call_value_9_5 = PyList_New(0);
        tmp_kw_call_value_10_5 = Py_None;
        tmp_kw_call_value_11_5 = Py_False;
        tmp_kw_call_value_12_5 = mod_consts[29];
        tmp_kw_call_value_13_5 = PyList_New(0);
        tmp_kw_call_value_14_5 = PyList_New(0);
        tmp_kw_call_value_15_5 = mod_consts[57];
        tmp_kw_call_value_16_5 = mod_consts[58];
        frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 30;
        {
            PyObject *kw_values[17] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_2, tmp_kw_call_value_5_2, tmp_kw_call_value_6_2, tmp_kw_call_value_7_5, tmp_kw_call_value_8_5, tmp_kw_call_value_9_5, tmp_kw_call_value_10_5, tmp_kw_call_value_11_5, tmp_kw_call_value_12_5, tmp_kw_call_value_13_5, tmp_kw_call_value_14_5, tmp_kw_call_value_15_5, tmp_kw_call_value_16_5};

            tmp_assign_source_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[59]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_5_2);
        Py_DECREF(tmp_kw_call_value_6_2);
        Py_DECREF(tmp_kw_call_value_7_5);
        Py_DECREF(tmp_kw_call_value_8_5);
        Py_DECREF(tmp_kw_call_value_9_5);
        Py_DECREF(tmp_kw_call_value_13_5);
        Py_DECREF(tmp_kw_call_value_14_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_kw_call_value_1_7;
        PyObject *tmp_kw_call_value_2_7;
        PyObject *tmp_kw_call_value_3_7;
        PyObject *tmp_kw_call_value_4_7;
        PyObject *tmp_kw_call_value_5_7;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_kw_call_value_6_7;
        PyObject *tmp_list_element_3;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_kw_call_value_1_8;
        PyObject *tmp_kw_call_value_2_8;
        PyObject *tmp_kw_call_value_3_8;
        PyObject *tmp_kw_call_value_4_8;
        PyObject *tmp_kw_call_value_5_8;
        PyObject *tmp_kw_call_value_6_8;
        PyObject *tmp_kw_call_value_7_6;
        PyObject *tmp_kw_call_value_8_6;
        PyObject *tmp_bytes_arg_value_3;
        PyObject *tmp_encoding_value_3;
        PyObject *tmp_kw_call_value_9_6;
        PyObject *tmp_kw_call_value_10_6;
        PyObject *tmp_kw_call_value_11_6;
        PyObject *tmp_kw_call_value_12_6;
        PyObject *tmp_kw_call_value_13_6;
        PyObject *tmp_kw_call_value_14_6;
        PyObject *tmp_kw_call_value_15_6;
        PyObject *tmp_kw_call_value_16_6;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_kw_call_value_7_15;
        PyObject *tmp_kw_call_value_8_15;
        PyObject *tmp_kw_call_value_9_15;
        PyObject *tmp_kw_call_value_10_15;
        PyObject *tmp_kw_call_value_11_15;
        PyObject *tmp_kw_call_value_12_15;
        PyObject *tmp_kw_call_value_13_15;
        PyObject *tmp_kw_call_value_14_15;
        PyObject *tmp_kw_call_value_15_15;
        PyObject *tmp_kw_call_value_16_15;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[35]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_7 = mod_consts[61];
        tmp_kw_call_value_1_7 = mod_consts[62];
        tmp_kw_call_value_2_7 = Py_None;
        tmp_kw_call_value_3_7 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_kw_call_value_3_7 == NULL)) {
            tmp_kw_call_value_3_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_kw_call_value_3_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_7 = Py_None;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[31]);
        if (tmp_kw_call_value_5_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_kw_call_value_5_7);

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[38]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_kw_call_value_5_7);

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_8 = mod_consts[63];
        tmp_kw_call_value_1_8 = mod_consts[64];
        tmp_kw_call_value_2_8 = mod_consts[9];
        tmp_kw_call_value_3_8 = mod_consts[41];
        tmp_kw_call_value_4_8 = mod_consts[42];
        tmp_kw_call_value_5_8 = mod_consts[42];
        tmp_kw_call_value_6_8 = mod_consts[41];
        tmp_kw_call_value_7_6 = Py_False;
        tmp_bytes_arg_value_3 = mod_consts[43];
        tmp_encoding_value_3 = mod_consts[44];
        tmp_kw_call_value_8_6 = BYTES_DECODE2(tmp_bytes_arg_value_3, tmp_encoding_value_3);
        if (tmp_kw_call_value_8_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_kw_call_value_5_7);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_6 = Py_None;
        tmp_kw_call_value_10_6 = Py_None;
        tmp_kw_call_value_11_6 = Py_None;
        tmp_kw_call_value_12_6 = Py_False;
        tmp_kw_call_value_13_6 = Py_None;
        tmp_kw_call_value_14_6 = Py_None;
        tmp_kw_call_value_15_6 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_kw_call_value_15_6 == NULL)) {
            tmp_kw_call_value_15_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_kw_call_value_15_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_kw_call_value_5_7);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_kw_call_value_8_6);

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_kw_call_value_5_7);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_kw_call_value_8_6);

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_16_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[31]);
        if (tmp_kw_call_value_16_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_kw_call_value_5_7);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_kw_call_value_8_6);

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 91;
        {
            PyObject *kw_values[17] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_8, tmp_kw_call_value_2_8, tmp_kw_call_value_3_8, tmp_kw_call_value_4_8, tmp_kw_call_value_5_8, tmp_kw_call_value_6_8, tmp_kw_call_value_7_6, tmp_kw_call_value_8_6, tmp_kw_call_value_9_6, tmp_kw_call_value_10_6, tmp_kw_call_value_11_6, tmp_kw_call_value_12_6, tmp_kw_call_value_13_6, tmp_kw_call_value_14_6, tmp_kw_call_value_15_6, tmp_kw_call_value_16_6};

            tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_8, kw_values, mod_consts[45]);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_kw_call_value_8_6);
        Py_DECREF(tmp_kw_call_value_16_6);
        if (tmp_list_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_kw_call_value_5_7);

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_7 = PyList_New(9);
        {
            PyObject *tmp_called_value_9;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_kw_call_value_0_9;
            PyObject *tmp_kw_call_value_1_9;
            PyObject *tmp_kw_call_value_2_9;
            PyObject *tmp_kw_call_value_3_9;
            PyObject *tmp_kw_call_value_4_9;
            PyObject *tmp_kw_call_value_5_9;
            PyObject *tmp_kw_call_value_6_9;
            PyObject *tmp_kw_call_value_7_7;
            PyObject *tmp_kw_call_value_8_7;
            PyObject *tmp_kw_call_value_9_7;
            PyObject *tmp_kw_call_value_10_7;
            PyObject *tmp_kw_call_value_11_7;
            PyObject *tmp_kw_call_value_12_7;
            PyObject *tmp_kw_call_value_13_7;
            PyObject *tmp_kw_call_value_14_7;
            PyObject *tmp_kw_call_value_15_7;
            PyObject *tmp_kw_call_value_16_7;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_called_value_10;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_kw_call_value_0_10;
            PyObject *tmp_kw_call_value_1_10;
            PyObject *tmp_kw_call_value_2_10;
            PyObject *tmp_kw_call_value_3_10;
            PyObject *tmp_kw_call_value_4_10;
            PyObject *tmp_kw_call_value_5_10;
            PyObject *tmp_kw_call_value_6_10;
            PyObject *tmp_kw_call_value_7_8;
            PyObject *tmp_kw_call_value_8_8;
            PyObject *tmp_bytes_arg_value_4;
            PyObject *tmp_encoding_value_4;
            PyObject *tmp_kw_call_value_9_8;
            PyObject *tmp_kw_call_value_10_8;
            PyObject *tmp_kw_call_value_11_8;
            PyObject *tmp_kw_call_value_12_8;
            PyObject *tmp_kw_call_value_13_8;
            PyObject *tmp_kw_call_value_14_8;
            PyObject *tmp_kw_call_value_15_8;
            PyObject *tmp_kw_call_value_16_8;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_called_value_11;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_kw_call_value_0_11;
            PyObject *tmp_kw_call_value_1_11;
            PyObject *tmp_kw_call_value_2_11;
            PyObject *tmp_kw_call_value_3_11;
            PyObject *tmp_kw_call_value_4_11;
            PyObject *tmp_kw_call_value_5_11;
            PyObject *tmp_kw_call_value_6_11;
            PyObject *tmp_kw_call_value_7_9;
            PyObject *tmp_kw_call_value_8_9;
            PyObject *tmp_bytes_arg_value_5;
            PyObject *tmp_encoding_value_5;
            PyObject *tmp_kw_call_value_9_9;
            PyObject *tmp_kw_call_value_10_9;
            PyObject *tmp_kw_call_value_11_9;
            PyObject *tmp_kw_call_value_12_9;
            PyObject *tmp_kw_call_value_13_9;
            PyObject *tmp_kw_call_value_14_9;
            PyObject *tmp_kw_call_value_15_9;
            PyObject *tmp_kw_call_value_16_9;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_called_value_12;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_kw_call_value_0_12;
            PyObject *tmp_kw_call_value_1_12;
            PyObject *tmp_kw_call_value_2_12;
            PyObject *tmp_kw_call_value_3_12;
            PyObject *tmp_kw_call_value_4_12;
            PyObject *tmp_kw_call_value_5_12;
            PyObject *tmp_kw_call_value_6_12;
            PyObject *tmp_kw_call_value_7_10;
            PyObject *tmp_kw_call_value_8_10;
            PyObject *tmp_bytes_arg_value_6;
            PyObject *tmp_encoding_value_6;
            PyObject *tmp_kw_call_value_9_10;
            PyObject *tmp_kw_call_value_10_10;
            PyObject *tmp_kw_call_value_11_10;
            PyObject *tmp_kw_call_value_12_10;
            PyObject *tmp_kw_call_value_13_10;
            PyObject *tmp_kw_call_value_14_10;
            PyObject *tmp_kw_call_value_15_10;
            PyObject *tmp_kw_call_value_16_10;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_called_value_13;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_kw_call_value_0_13;
            PyObject *tmp_kw_call_value_1_13;
            PyObject *tmp_kw_call_value_2_13;
            PyObject *tmp_kw_call_value_3_13;
            PyObject *tmp_kw_call_value_4_13;
            PyObject *tmp_kw_call_value_5_13;
            PyObject *tmp_kw_call_value_6_13;
            PyObject *tmp_kw_call_value_7_11;
            PyObject *tmp_kw_call_value_8_11;
            PyObject *tmp_kw_call_value_9_11;
            PyObject *tmp_kw_call_value_10_11;
            PyObject *tmp_kw_call_value_11_11;
            PyObject *tmp_kw_call_value_12_11;
            PyObject *tmp_kw_call_value_13_11;
            PyObject *tmp_kw_call_value_14_11;
            PyObject *tmp_kw_call_value_15_11;
            PyObject *tmp_kw_call_value_16_11;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_called_value_14;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_kw_call_value_0_14;
            PyObject *tmp_kw_call_value_1_14;
            PyObject *tmp_kw_call_value_2_14;
            PyObject *tmp_kw_call_value_3_14;
            PyObject *tmp_kw_call_value_4_14;
            PyObject *tmp_kw_call_value_5_14;
            PyObject *tmp_kw_call_value_6_14;
            PyObject *tmp_kw_call_value_7_12;
            PyObject *tmp_kw_call_value_8_12;
            PyObject *tmp_bytes_arg_value_7;
            PyObject *tmp_encoding_value_7;
            PyObject *tmp_kw_call_value_9_12;
            PyObject *tmp_kw_call_value_10_12;
            PyObject *tmp_kw_call_value_11_12;
            PyObject *tmp_kw_call_value_12_12;
            PyObject *tmp_kw_call_value_13_12;
            PyObject *tmp_kw_call_value_14_12;
            PyObject *tmp_kw_call_value_15_12;
            PyObject *tmp_kw_call_value_16_12;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_called_value_15;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_kw_call_value_0_15;
            PyObject *tmp_kw_call_value_1_15;
            PyObject *tmp_kw_call_value_2_15;
            PyObject *tmp_kw_call_value_3_15;
            PyObject *tmp_kw_call_value_4_15;
            PyObject *tmp_kw_call_value_5_15;
            PyObject *tmp_kw_call_value_6_15;
            PyObject *tmp_kw_call_value_7_13;
            PyObject *tmp_kw_call_value_8_13;
            PyObject *tmp_kw_call_value_9_13;
            PyObject *tmp_kw_call_value_10_13;
            PyObject *tmp_kw_call_value_11_13;
            PyObject *tmp_kw_call_value_12_13;
            PyObject *tmp_kw_call_value_13_13;
            PyObject *tmp_kw_call_value_14_13;
            PyObject *tmp_kw_call_value_15_13;
            PyObject *tmp_kw_call_value_16_13;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_called_value_16;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_kw_call_value_0_16;
            PyObject *tmp_kw_call_value_1_16;
            PyObject *tmp_kw_call_value_2_16;
            PyObject *tmp_kw_call_value_3_16;
            PyObject *tmp_kw_call_value_4_16;
            PyObject *tmp_kw_call_value_5_16;
            PyObject *tmp_kw_call_value_6_16;
            PyObject *tmp_kw_call_value_7_14;
            PyObject *tmp_kw_call_value_8_14;
            PyObject *tmp_kw_call_value_9_14;
            PyObject *tmp_kw_call_value_10_14;
            PyObject *tmp_kw_call_value_11_14;
            PyObject *tmp_kw_call_value_12_14;
            PyObject *tmp_kw_call_value_13_14;
            PyObject *tmp_kw_call_value_14_14;
            PyObject *tmp_kw_call_value_15_14;
            PyObject *tmp_kw_call_value_16_14;
            PyObject *tmp_expression_value_33;
            PyList_SET_ITEM(tmp_kw_call_value_6_7, 0, tmp_list_element_3);
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto list_build_exception_2;
            }
            tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[38]);
            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_0_9 = mod_consts[65];
            tmp_kw_call_value_1_9 = mod_consts[66];
            tmp_kw_call_value_2_9 = mod_consts[41];
            tmp_kw_call_value_3_9 = mod_consts[48];
            tmp_kw_call_value_4_9 = mod_consts[49];
            tmp_kw_call_value_5_9 = mod_consts[48];
            tmp_kw_call_value_6_9 = mod_consts[41];
            tmp_kw_call_value_7_7 = Py_False;
            tmp_kw_call_value_8_7 = mod_consts[9];
            tmp_kw_call_value_9_7 = Py_None;
            tmp_kw_call_value_10_7 = Py_None;
            tmp_kw_call_value_11_7 = Py_None;
            tmp_kw_call_value_12_7 = Py_False;
            tmp_kw_call_value_13_7 = Py_None;
            tmp_kw_call_value_14_7 = Py_None;
            tmp_kw_call_value_15_7 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_7 == NULL)) {
                tmp_kw_call_value_15_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_9);

                exception_lineno = 104;

                goto list_build_exception_2;
            }
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_9);

                exception_lineno = 104;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_16_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[31]);
            if (tmp_kw_call_value_16_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_9);

                exception_lineno = 104;

                goto list_build_exception_2;
            }
            frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 98;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_9, tmp_kw_call_value_1_9, tmp_kw_call_value_2_9, tmp_kw_call_value_3_9, tmp_kw_call_value_4_9, tmp_kw_call_value_5_9, tmp_kw_call_value_6_9, tmp_kw_call_value_7_7, tmp_kw_call_value_8_7, tmp_kw_call_value_9_7, tmp_kw_call_value_10_7, tmp_kw_call_value_11_7, tmp_kw_call_value_12_7, tmp_kw_call_value_13_7, tmp_kw_call_value_14_7, tmp_kw_call_value_15_7, tmp_kw_call_value_16_7};

                tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_9, kw_values, mod_consts[45]);
            }

            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_kw_call_value_16_7);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_7, 1, tmp_list_element_3);
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto list_build_exception_2;
            }
            tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[38]);
            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_0_10 = mod_consts[67];
            tmp_kw_call_value_1_10 = mod_consts[68];
            tmp_kw_call_value_2_10 = mod_consts[48];
            tmp_kw_call_value_3_10 = mod_consts[49];
            tmp_kw_call_value_4_10 = mod_consts[42];
            tmp_kw_call_value_5_10 = mod_consts[42];
            tmp_kw_call_value_6_10 = mod_consts[41];
            tmp_kw_call_value_7_8 = Py_False;
            tmp_bytes_arg_value_4 = mod_consts[43];
            tmp_encoding_value_4 = mod_consts[44];
            tmp_kw_call_value_8_8 = BYTES_DECODE2(tmp_bytes_arg_value_4, tmp_encoding_value_4);
            if (tmp_kw_call_value_8_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_10);

                exception_lineno = 108;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_9_8 = Py_None;
            tmp_kw_call_value_10_8 = Py_None;
            tmp_kw_call_value_11_8 = Py_None;
            tmp_kw_call_value_12_8 = Py_False;
            tmp_kw_call_value_13_8 = Py_None;
            tmp_kw_call_value_14_8 = Py_None;
            tmp_kw_call_value_15_8 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_8 == NULL)) {
                tmp_kw_call_value_15_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_10);
                Py_DECREF(tmp_kw_call_value_8_8);

                exception_lineno = 111;

                goto list_build_exception_2;
            }
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_10);
                Py_DECREF(tmp_kw_call_value_8_8);

                exception_lineno = 111;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_16_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[31]);
            if (tmp_kw_call_value_16_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_10);
                Py_DECREF(tmp_kw_call_value_8_8);

                exception_lineno = 111;

                goto list_build_exception_2;
            }
            frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 105;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_10, tmp_kw_call_value_1_10, tmp_kw_call_value_2_10, tmp_kw_call_value_3_10, tmp_kw_call_value_4_10, tmp_kw_call_value_5_10, tmp_kw_call_value_6_10, tmp_kw_call_value_7_8, tmp_kw_call_value_8_8, tmp_kw_call_value_9_8, tmp_kw_call_value_10_8, tmp_kw_call_value_11_8, tmp_kw_call_value_12_8, tmp_kw_call_value_13_8, tmp_kw_call_value_14_8, tmp_kw_call_value_15_8, tmp_kw_call_value_16_8};

                tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_10, kw_values, mod_consts[45]);
            }

            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_value_8_8);
            Py_DECREF(tmp_kw_call_value_16_8);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_7, 2, tmp_list_element_3);
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto list_build_exception_2;
            }
            tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[38]);
            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_0_11 = mod_consts[69];
            tmp_kw_call_value_1_11 = mod_consts[70];
            tmp_kw_call_value_2_11 = mod_consts[49];
            tmp_kw_call_value_3_11 = mod_consts[71];
            tmp_kw_call_value_4_11 = mod_consts[42];
            tmp_kw_call_value_5_11 = mod_consts[42];
            tmp_kw_call_value_6_11 = mod_consts[41];
            tmp_kw_call_value_7_9 = Py_False;
            tmp_bytes_arg_value_5 = mod_consts[43];
            tmp_encoding_value_5 = mod_consts[44];
            tmp_kw_call_value_8_9 = BYTES_DECODE2(tmp_bytes_arg_value_5, tmp_encoding_value_5);
            if (tmp_kw_call_value_8_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_11);

                exception_lineno = 115;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_9_9 = Py_None;
            tmp_kw_call_value_10_9 = Py_None;
            tmp_kw_call_value_11_9 = Py_None;
            tmp_kw_call_value_12_9 = Py_False;
            tmp_kw_call_value_13_9 = Py_None;
            tmp_kw_call_value_14_9 = Py_None;
            tmp_kw_call_value_15_9 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_9 == NULL)) {
                tmp_kw_call_value_15_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_11);
                Py_DECREF(tmp_kw_call_value_8_9);

                exception_lineno = 118;

                goto list_build_exception_2;
            }
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_11);
                Py_DECREF(tmp_kw_call_value_8_9);

                exception_lineno = 118;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_16_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[31]);
            if (tmp_kw_call_value_16_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_11);
                Py_DECREF(tmp_kw_call_value_8_9);

                exception_lineno = 118;

                goto list_build_exception_2;
            }
            frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 112;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_11, tmp_kw_call_value_1_11, tmp_kw_call_value_2_11, tmp_kw_call_value_3_11, tmp_kw_call_value_4_11, tmp_kw_call_value_5_11, tmp_kw_call_value_6_11, tmp_kw_call_value_7_9, tmp_kw_call_value_8_9, tmp_kw_call_value_9_9, tmp_kw_call_value_10_9, tmp_kw_call_value_11_9, tmp_kw_call_value_12_9, tmp_kw_call_value_13_9, tmp_kw_call_value_14_9, tmp_kw_call_value_15_9, tmp_kw_call_value_16_9};

                tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_11, kw_values, mod_consts[45]);
            }

            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_kw_call_value_8_9);
            Py_DECREF(tmp_kw_call_value_16_9);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_7, 3, tmp_list_element_3);
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto list_build_exception_2;
            }
            tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[38]);
            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_0_12 = mod_consts[72];
            tmp_kw_call_value_1_12 = mod_consts[73];
            tmp_kw_call_value_2_12 = mod_consts[74];
            tmp_kw_call_value_3_12 = mod_consts[74];
            tmp_kw_call_value_4_12 = mod_consts[42];
            tmp_kw_call_value_5_12 = mod_consts[42];
            tmp_kw_call_value_6_12 = mod_consts[41];
            tmp_kw_call_value_7_10 = Py_False;
            tmp_bytes_arg_value_6 = mod_consts[43];
            tmp_encoding_value_6 = mod_consts[44];
            tmp_kw_call_value_8_10 = BYTES_DECODE2(tmp_bytes_arg_value_6, tmp_encoding_value_6);
            if (tmp_kw_call_value_8_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_12);

                exception_lineno = 122;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_9_10 = Py_None;
            tmp_kw_call_value_10_10 = Py_None;
            tmp_kw_call_value_11_10 = Py_None;
            tmp_kw_call_value_12_10 = Py_False;
            tmp_kw_call_value_13_10 = Py_None;
            tmp_kw_call_value_14_10 = Py_None;
            tmp_kw_call_value_15_10 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_10 == NULL)) {
                tmp_kw_call_value_15_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_12);
                Py_DECREF(tmp_kw_call_value_8_10);

                exception_lineno = 125;

                goto list_build_exception_2;
            }
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_12);
                Py_DECREF(tmp_kw_call_value_8_10);

                exception_lineno = 125;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_16_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[31]);
            if (tmp_kw_call_value_16_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_12);
                Py_DECREF(tmp_kw_call_value_8_10);

                exception_lineno = 125;

                goto list_build_exception_2;
            }
            frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 119;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_12, tmp_kw_call_value_1_12, tmp_kw_call_value_2_12, tmp_kw_call_value_3_12, tmp_kw_call_value_4_12, tmp_kw_call_value_5_12, tmp_kw_call_value_6_12, tmp_kw_call_value_7_10, tmp_kw_call_value_8_10, tmp_kw_call_value_9_10, tmp_kw_call_value_10_10, tmp_kw_call_value_11_10, tmp_kw_call_value_12_10, tmp_kw_call_value_13_10, tmp_kw_call_value_14_10, tmp_kw_call_value_15_10, tmp_kw_call_value_16_10};

                tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_12, kw_values, mod_consts[45]);
            }

            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_kw_call_value_8_10);
            Py_DECREF(tmp_kw_call_value_16_10);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_7, 4, tmp_list_element_3);
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto list_build_exception_2;
            }
            tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[38]);
            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_0_13 = mod_consts[75];
            tmp_kw_call_value_1_13 = mod_consts[76];
            tmp_kw_call_value_2_13 = mod_consts[77];
            tmp_kw_call_value_3_13 = mod_consts[77];
            tmp_kw_call_value_4_13 = mod_consts[49];
            tmp_kw_call_value_5_13 = mod_consts[48];
            tmp_kw_call_value_6_13 = mod_consts[41];
            tmp_kw_call_value_7_11 = Py_False;
            tmp_kw_call_value_8_11 = mod_consts[9];
            tmp_kw_call_value_9_11 = Py_None;
            tmp_kw_call_value_10_11 = Py_None;
            tmp_kw_call_value_11_11 = Py_None;
            tmp_kw_call_value_12_11 = Py_False;
            tmp_kw_call_value_13_11 = Py_None;
            tmp_kw_call_value_14_11 = Py_None;
            tmp_kw_call_value_15_11 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_11 == NULL)) {
                tmp_kw_call_value_15_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);

                exception_lineno = 132;

                goto list_build_exception_2;
            }
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);

                exception_lineno = 132;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_16_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[31]);
            if (tmp_kw_call_value_16_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);

                exception_lineno = 132;

                goto list_build_exception_2;
            }
            frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 126;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_13, tmp_kw_call_value_1_13, tmp_kw_call_value_2_13, tmp_kw_call_value_3_13, tmp_kw_call_value_4_13, tmp_kw_call_value_5_13, tmp_kw_call_value_6_13, tmp_kw_call_value_7_11, tmp_kw_call_value_8_11, tmp_kw_call_value_9_11, tmp_kw_call_value_10_11, tmp_kw_call_value_11_11, tmp_kw_call_value_12_11, tmp_kw_call_value_13_11, tmp_kw_call_value_14_11, tmp_kw_call_value_15_11, tmp_kw_call_value_16_11};

                tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_13, kw_values, mod_consts[45]);
            }

            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_kw_call_value_16_11);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_7, 5, tmp_list_element_3);
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto list_build_exception_2;
            }
            tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[38]);
            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_0_14 = mod_consts[54];
            tmp_kw_call_value_1_14 = mod_consts[78];
            tmp_kw_call_value_2_14 = mod_consts[79];
            tmp_kw_call_value_3_14 = mod_consts[79];
            tmp_kw_call_value_4_14 = mod_consts[42];
            tmp_kw_call_value_5_14 = mod_consts[42];
            tmp_kw_call_value_6_14 = mod_consts[41];
            tmp_kw_call_value_7_12 = Py_False;
            tmp_bytes_arg_value_7 = mod_consts[43];
            tmp_encoding_value_7 = mod_consts[44];
            tmp_kw_call_value_8_12 = BYTES_DECODE2(tmp_bytes_arg_value_7, tmp_encoding_value_7);
            if (tmp_kw_call_value_8_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);

                exception_lineno = 136;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_9_12 = Py_None;
            tmp_kw_call_value_10_12 = Py_None;
            tmp_kw_call_value_11_12 = Py_None;
            tmp_kw_call_value_12_12 = Py_False;
            tmp_kw_call_value_13_12 = Py_None;
            tmp_kw_call_value_14_12 = Py_None;
            tmp_kw_call_value_15_12 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_12 == NULL)) {
                tmp_kw_call_value_15_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);
                Py_DECREF(tmp_kw_call_value_8_12);

                exception_lineno = 139;

                goto list_build_exception_2;
            }
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);
                Py_DECREF(tmp_kw_call_value_8_12);

                exception_lineno = 139;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_16_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[31]);
            if (tmp_kw_call_value_16_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);
                Py_DECREF(tmp_kw_call_value_8_12);

                exception_lineno = 139;

                goto list_build_exception_2;
            }
            frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 133;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_14, tmp_kw_call_value_1_14, tmp_kw_call_value_2_14, tmp_kw_call_value_3_14, tmp_kw_call_value_4_14, tmp_kw_call_value_5_14, tmp_kw_call_value_6_14, tmp_kw_call_value_7_12, tmp_kw_call_value_8_12, tmp_kw_call_value_9_12, tmp_kw_call_value_10_12, tmp_kw_call_value_11_12, tmp_kw_call_value_12_12, tmp_kw_call_value_13_12, tmp_kw_call_value_14_12, tmp_kw_call_value_15_12, tmp_kw_call_value_16_12};

                tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_14, kw_values, mod_consts[45]);
            }

            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_kw_call_value_8_12);
            Py_DECREF(tmp_kw_call_value_16_12);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_7, 6, tmp_list_element_3);
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto list_build_exception_2;
            }
            tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[38]);
            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_0_15 = mod_consts[80];
            tmp_kw_call_value_1_15 = mod_consts[81];
            tmp_kw_call_value_2_15 = mod_consts[71];
            tmp_kw_call_value_3_15 = mod_consts[53];
            tmp_kw_call_value_4_15 = mod_consts[82];
            tmp_kw_call_value_5_15 = mod_consts[56];
            tmp_kw_call_value_6_15 = mod_consts[49];
            tmp_kw_call_value_7_13 = Py_False;
            tmp_kw_call_value_8_13 = PyList_New(0);
            tmp_kw_call_value_9_13 = Py_None;
            tmp_kw_call_value_10_13 = Py_None;
            tmp_kw_call_value_11_13 = Py_None;
            tmp_kw_call_value_12_13 = Py_False;
            tmp_kw_call_value_13_13 = Py_None;
            tmp_kw_call_value_14_13 = Py_None;
            tmp_kw_call_value_15_13 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_13 == NULL)) {
                tmp_kw_call_value_15_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);
                Py_DECREF(tmp_kw_call_value_8_13);

                exception_lineno = 146;

                goto list_build_exception_2;
            }
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);
                Py_DECREF(tmp_kw_call_value_8_13);

                exception_lineno = 146;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_16_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[31]);
            if (tmp_kw_call_value_16_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);
                Py_DECREF(tmp_kw_call_value_8_13);

                exception_lineno = 146;

                goto list_build_exception_2;
            }
            frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 140;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_15, tmp_kw_call_value_1_15, tmp_kw_call_value_2_15, tmp_kw_call_value_3_15, tmp_kw_call_value_4_15, tmp_kw_call_value_5_15, tmp_kw_call_value_6_15, tmp_kw_call_value_7_13, tmp_kw_call_value_8_13, tmp_kw_call_value_9_13, tmp_kw_call_value_10_13, tmp_kw_call_value_11_13, tmp_kw_call_value_12_13, tmp_kw_call_value_13_13, tmp_kw_call_value_14_13, tmp_kw_call_value_15_13, tmp_kw_call_value_16_13};

                tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_15, kw_values, mod_consts[45]);
            }

            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_kw_call_value_8_13);
            Py_DECREF(tmp_kw_call_value_16_13);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_7, 7, tmp_list_element_3);
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto list_build_exception_2;
            }
            tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[38]);
            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_0_16 = mod_consts[83];
            tmp_kw_call_value_1_16 = mod_consts[84];
            tmp_kw_call_value_2_16 = mod_consts[53];
            tmp_kw_call_value_3_16 = mod_consts[42];
            tmp_kw_call_value_4_16 = mod_consts[82];
            tmp_kw_call_value_5_16 = mod_consts[56];
            tmp_kw_call_value_6_16 = mod_consts[49];
            tmp_kw_call_value_7_14 = Py_False;
            tmp_kw_call_value_8_14 = PyList_New(0);
            tmp_kw_call_value_9_14 = Py_None;
            tmp_kw_call_value_10_14 = Py_None;
            tmp_kw_call_value_11_14 = Py_None;
            tmp_kw_call_value_12_14 = Py_False;
            tmp_kw_call_value_13_14 = Py_None;
            tmp_kw_call_value_14_14 = Py_None;
            tmp_kw_call_value_15_14 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_14 == NULL)) {
                tmp_kw_call_value_15_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);
                Py_DECREF(tmp_kw_call_value_8_14);

                exception_lineno = 153;

                goto list_build_exception_2;
            }
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);
                Py_DECREF(tmp_kw_call_value_8_14);

                exception_lineno = 153;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_16_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[31]);
            if (tmp_kw_call_value_16_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);
                Py_DECREF(tmp_kw_call_value_8_14);

                exception_lineno = 153;

                goto list_build_exception_2;
            }
            frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 147;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_16, tmp_kw_call_value_1_16, tmp_kw_call_value_2_16, tmp_kw_call_value_3_16, tmp_kw_call_value_4_16, tmp_kw_call_value_5_16, tmp_kw_call_value_6_16, tmp_kw_call_value_7_14, tmp_kw_call_value_8_14, tmp_kw_call_value_9_14, tmp_kw_call_value_10_14, tmp_kw_call_value_11_14, tmp_kw_call_value_12_14, tmp_kw_call_value_13_14, tmp_kw_call_value_14_14, tmp_kw_call_value_15_14, tmp_kw_call_value_16_14};

                tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_16, kw_values, mod_consts[45]);
            }

            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_kw_call_value_8_14);
            Py_DECREF(tmp_kw_call_value_16_14);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_7, 8, tmp_list_element_3);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_kw_call_value_5_7);
        Py_DECREF(tmp_kw_call_value_6_7);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        tmp_kw_call_value_7_15 = PyList_New(0);
        tmp_kw_call_value_8_15 = PyList_New(0);
        tmp_kw_call_value_9_15 = PyList_New(0);
        tmp_kw_call_value_10_15 = Py_None;
        tmp_kw_call_value_11_15 = Py_False;
        tmp_kw_call_value_12_15 = mod_consts[29];
        tmp_kw_call_value_13_15 = PyList_New(0);
        tmp_kw_call_value_14_15 = PyList_New(0);
        tmp_kw_call_value_15_15 = mod_consts[85];
        tmp_kw_call_value_16_15 = mod_consts[86];
        frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 83;
        {
            PyObject *kw_values[17] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_7, tmp_kw_call_value_2_7, tmp_kw_call_value_3_7, tmp_kw_call_value_4_7, tmp_kw_call_value_5_7, tmp_kw_call_value_6_7, tmp_kw_call_value_7_15, tmp_kw_call_value_8_15, tmp_kw_call_value_9_15, tmp_kw_call_value_10_15, tmp_kw_call_value_11_15, tmp_kw_call_value_12_15, tmp_kw_call_value_13_15, tmp_kw_call_value_14_15, tmp_kw_call_value_15_15, tmp_kw_call_value_16_15};

            tmp_assign_source_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_7, kw_values, mod_consts[59]);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_kw_call_value_5_7);
        Py_DECREF(tmp_kw_call_value_6_7);
        Py_DECREF(tmp_kw_call_value_7_15);
        Py_DECREF(tmp_kw_call_value_8_15);
        Py_DECREF(tmp_kw_call_value_9_15);
        Py_DECREF(tmp_kw_call_value_13_15);
        Py_DECREF(tmp_kw_call_value_14_15);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[88]);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[89]);
        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[50];
        tmp_assattr_target_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_35);
        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[90], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_subscript_value_2;
        tmp_assattr_value_4 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_assattr_value_4 == NULL)) {
            tmp_assattr_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[89]);
        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[80];
        tmp_assattr_target_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_37);
        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[91], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_target_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_subscript_value_3;
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[92]);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[89]);
        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[83];
        tmp_assattr_target_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_40);
        if (tmp_assattr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[91], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_target_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_ass_subvalue_1 == NULL)) {
            tmp_ass_subvalue_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[93]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[36];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_ass_subvalue_2 == NULL)) {
            tmp_ass_subvalue_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[93]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[61];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[94]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 175;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_17);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[95]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[36];
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[96]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_element_value_3, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[33];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[97];
        tmp_dict_value_1 = mod_consts[98];
        tmp_res = PyDict_SetItem(tmp_args_element_value_4, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 177;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_18, call_args);
        }

        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_13);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[99]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 182;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_19);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[95]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = mod_consts[61];
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[96]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_element_value_7, 0, tmp_tuple_element_2);
        tmp_dict_key_2 = mod_consts[33];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_8, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[97];
        tmp_dict_value_2 = mod_consts[98];
        tmp_res = PyDict_SetItem(tmp_args_element_value_8, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 184;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_20, call_args);
        }

        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_14);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_9;
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[99]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        frame_8abafa342c2751518a1a158b09f31662->m_frame.f_lineno = 189;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_21);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = Py_None;
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_assattr_target_6 == NULL)) {
            tmp_assattr_target_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_assattr_target_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[100], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8abafa342c2751518a1a158b09f31662);
#endif
    popFrameStack();

    assertFrameObject(frame_8abafa342c2751518a1a158b09f31662);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8abafa342c2751518a1a158b09f31662);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8abafa342c2751518a1a158b09f31662, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8abafa342c2751518a1a158b09f31662->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8abafa342c2751518a1a158b09f31662, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("onnx.onnx_operators_ml_pb2", false);

    Py_INCREF(module_onnx$onnx_operators_ml_pb2);
    return module_onnx$onnx_operators_ml_pb2;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_operators_ml_pb2, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("onnx$onnx_operators_ml_pb2", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
