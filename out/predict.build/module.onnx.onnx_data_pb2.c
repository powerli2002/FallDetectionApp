/* Generated code for Python module 'onnx.onnx_data_pb2'
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

/* The "module_onnx$onnx_data_pb2" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_onnx$onnx_data_pb2;
PyDictObject *moduledict_onnx$onnx_data_pb2;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[135];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[135];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("onnx.onnx_data_pb2"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 135; i++) {
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
void checkModuleConstants_onnx$onnx_data_pb2(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 135; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_dfa2ddd5888cacec79ffcac6b2cc56a4;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[132]); CHECK_OBJECT(module_filename_obj);
    codeobj_dfa2ddd5888cacec79ffcac6b2cc56a4 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[133], NULL, NULL, 0, 0, 0);
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

function_impl_code functable_onnx$onnx_data_pb2[] = {

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

    function_impl_code *current = functable_onnx$onnx_data_pb2;
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

    if (offset > sizeof(functable_onnx$onnx_data_pb2) || offset < 0) {
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
        functable_onnx$onnx_data_pb2[offset],
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
        module_onnx$onnx_data_pb2,
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
PyObject *modulecode_onnx$onnx_data_pb2(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("onnx.onnx_data_pb2");

    // Store the module for future use.
    module_onnx$onnx_data_pb2 = module;

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
        PRINT_STRING("onnx.onnx_data_pb2: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("onnx.onnx_data_pb2: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("onnx.onnx_data_pb2: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initonnx$onnx_data_pb2\n");

    moduledict_onnx$onnx_data_pb2 = MODULE_DICT(module_onnx$onnx_data_pb2);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_onnx$onnx_data_pb2,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_onnx$onnx_data_pb2,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[134]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_onnx$onnx_data_pb2,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_onnx$onnx_data_pb2,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_onnx$onnx_data_pb2,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_onnx$onnx_data_pb2);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_onnx$onnx_data_pb2);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_dfa2ddd5888cacec79ffcac6b2cc56a4;
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
        UPDATE_STRING_DICT0(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_dfa2ddd5888cacec79ffcac6b2cc56a4 = MAKE_MODULE_FRAME(codeobj_dfa2ddd5888cacec79ffcac6b2cc56a4, module_onnx$onnx_data_pb2);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_dfa2ddd5888cacec79ffcac6b2cc56a4);
    assert(Py_REFCNT(frame_dfa2ddd5888cacec79ffcac6b2cc56a4) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[3]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[3]);

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
        UPDATE_STRING_DICT0(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
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
        tmp_globals_arg_value_1 = (PyObject *)moduledict_onnx$onnx_data_pb2;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[8];
        tmp_level_value_1 = mod_consts[9];
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 5;
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
                (PyObject *)moduledict_onnx$onnx_data_pb2,
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
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_4);
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
        tmp_globals_arg_value_2 = (PyObject *)moduledict_onnx$onnx_data_pb2;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[12];
        tmp_level_value_2 = mod_consts[9];
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 6;
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
                (PyObject *)moduledict_onnx$onnx_data_pb2,
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
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_5);
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
        tmp_globals_arg_value_3 = (PyObject *)moduledict_onnx$onnx_data_pb2;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[15];
        tmp_level_value_3 = mod_consts[9];
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 7;
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
                (PyObject *)moduledict_onnx$onnx_data_pb2,
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
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_6);
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
        tmp_globals_arg_value_4 = (PyObject *)moduledict_onnx$onnx_data_pb2;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[18];
        tmp_level_value_4 = mod_consts[9];
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 8;
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
                (PyObject *)moduledict_onnx$onnx_data_pb2,
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
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 11;
        tmp_assign_source_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[21]);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_8);
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
        tmp_globals_arg_value_5 = (PyObject *)moduledict_onnx$onnx_data_pb2;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[24];
        tmp_level_value_5 = mod_consts[9];
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 14;
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
                (PyObject *)moduledict_onnx$onnx_data_pb2,
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
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_9);
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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

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
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

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
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[26]);

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
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 17;
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
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_10);
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
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_5_2;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_2_3;
        PyObject *tmp_kw_call_value_3_3;
        PyObject *tmp_kw_call_value_4_3;
        PyObject *tmp_kw_call_value_5_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_value_6_2;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_kw_call_value_8_1;
        PyObject *tmp_kw_call_value_9_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[35]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = mod_consts[36];
        tmp_kw_call_value_1_2 = mod_consts[37];
        tmp_kw_call_value_2_2 = Py_None;
        tmp_kw_call_value_3_2 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_kw_call_value_3_2 == NULL)) {
            tmp_kw_call_value_3_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_kw_call_value_3_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[31]);
        if (tmp_kw_call_value_4_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_value_4_2);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[38]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_value_4_2);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = mod_consts[39];
        tmp_kw_call_value_1_3 = mod_consts[9];
        tmp_kw_call_value_2_3 = mod_consts[9];
        tmp_kw_call_value_3_3 = Py_None;
        tmp_kw_call_value_4_3 = Py_None;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_value_4_2);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[31]);
        if (tmp_kw_call_value_5_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_value_4_2);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 36;
        {
            PyObject *kw_values[6] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3, tmp_kw_call_value_3_3, tmp_kw_call_value_4_3, tmp_kw_call_value_5_3};

            tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[40]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_value_5_3);
        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_value_4_2);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_2 = PyList_New(6);
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_kw_call_value_0_4;
            PyObject *tmp_kw_call_value_1_4;
            PyObject *tmp_kw_call_value_2_4;
            PyObject *tmp_kw_call_value_3_4;
            PyObject *tmp_kw_call_value_4_4;
            PyObject *tmp_kw_call_value_5_4;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_kw_call_value_0_5;
            PyObject *tmp_kw_call_value_1_5;
            PyObject *tmp_kw_call_value_2_5;
            PyObject *tmp_kw_call_value_3_5;
            PyObject *tmp_kw_call_value_4_5;
            PyObject *tmp_kw_call_value_5_5;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_kw_call_value_0_6;
            PyObject *tmp_kw_call_value_1_6;
            PyObject *tmp_kw_call_value_2_6;
            PyObject *tmp_kw_call_value_3_6;
            PyObject *tmp_kw_call_value_4_6;
            PyObject *tmp_kw_call_value_5_6;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_called_value_7;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_kw_call_value_0_7;
            PyObject *tmp_kw_call_value_1_7;
            PyObject *tmp_kw_call_value_2_7;
            PyObject *tmp_kw_call_value_3_7;
            PyObject *tmp_kw_call_value_4_7;
            PyObject *tmp_kw_call_value_5_7;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_called_value_8;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_kw_call_value_0_8;
            PyObject *tmp_kw_call_value_1_8;
            PyObject *tmp_kw_call_value_2_8;
            PyObject *tmp_kw_call_value_3_8;
            PyObject *tmp_kw_call_value_4_8;
            PyObject *tmp_kw_call_value_5_8;
            PyObject *tmp_expression_value_17;
            PyList_SET_ITEM(tmp_kw_call_value_5_2, 0, tmp_list_element_2);
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto list_build_exception_1;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[38]);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto list_build_exception_1;
            }
            tmp_kw_call_value_0_4 = mod_consts[41];
            tmp_kw_call_value_1_4 = mod_consts[42];
            tmp_kw_call_value_2_4 = mod_consts[42];
            tmp_kw_call_value_3_4 = Py_None;
            tmp_kw_call_value_4_4 = Py_None;
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 45;

                goto list_build_exception_1;
            }
            tmp_kw_call_value_5_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[31]);
            if (tmp_kw_call_value_5_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 45;

                goto list_build_exception_1;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 41;
            {
                PyObject *kw_values[6] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_4, tmp_kw_call_value_3_4, tmp_kw_call_value_4_4, tmp_kw_call_value_5_4};

                tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, kw_values, mod_consts[40]);
            }

            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_5_4);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_2, 1, tmp_list_element_2);
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto list_build_exception_1;
            }
            tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[38]);
            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto list_build_exception_1;
            }
            tmp_kw_call_value_0_5 = mod_consts[43];
            tmp_kw_call_value_1_5 = mod_consts[44];
            tmp_kw_call_value_2_5 = mod_consts[44];
            tmp_kw_call_value_3_5 = Py_None;
            tmp_kw_call_value_4_5 = Py_None;
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_5);

                exception_lineno = 50;

                goto list_build_exception_1;
            }
            tmp_kw_call_value_5_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[31]);
            if (tmp_kw_call_value_5_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_5);

                exception_lineno = 50;

                goto list_build_exception_1;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 46;
            {
                PyObject *kw_values[6] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5, tmp_kw_call_value_2_5, tmp_kw_call_value_3_5, tmp_kw_call_value_4_5, tmp_kw_call_value_5_5};

                tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_5, kw_values, mod_consts[40]);
            }

            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_value_5_5);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_2, 2, tmp_list_element_2);
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto list_build_exception_1;
            }
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[38]);
            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto list_build_exception_1;
            }
            tmp_kw_call_value_0_6 = mod_consts[45];
            tmp_kw_call_value_1_6 = mod_consts[46];
            tmp_kw_call_value_2_6 = mod_consts[46];
            tmp_kw_call_value_3_6 = Py_None;
            tmp_kw_call_value_4_6 = Py_None;
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 55;

                goto list_build_exception_1;
            }
            tmp_kw_call_value_5_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[31]);
            if (tmp_kw_call_value_5_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 55;

                goto list_build_exception_1;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 51;
            {
                PyObject *kw_values[6] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_6, tmp_kw_call_value_2_6, tmp_kw_call_value_3_6, tmp_kw_call_value_4_6, tmp_kw_call_value_5_6};

                tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_6, kw_values, mod_consts[40]);
            }

            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_kw_call_value_5_6);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_2, 3, tmp_list_element_2);
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto list_build_exception_1;
            }
            tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[38]);
            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto list_build_exception_1;
            }
            tmp_kw_call_value_0_7 = mod_consts[47];
            tmp_kw_call_value_1_7 = mod_consts[48];
            tmp_kw_call_value_2_7 = mod_consts[48];
            tmp_kw_call_value_3_7 = Py_None;
            tmp_kw_call_value_4_7 = Py_None;
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 60;

                goto list_build_exception_1;
            }
            tmp_kw_call_value_5_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[31]);
            if (tmp_kw_call_value_5_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 60;

                goto list_build_exception_1;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 56;
            {
                PyObject *kw_values[6] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_7, tmp_kw_call_value_2_7, tmp_kw_call_value_3_7, tmp_kw_call_value_4_7, tmp_kw_call_value_5_7};

                tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_7, kw_values, mod_consts[40]);
            }

            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_kw_call_value_5_7);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_2, 4, tmp_list_element_2);
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto list_build_exception_1;
            }
            tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[38]);
            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto list_build_exception_1;
            }
            tmp_kw_call_value_0_8 = mod_consts[49];
            tmp_kw_call_value_1_8 = mod_consts[50];
            tmp_kw_call_value_2_8 = mod_consts[50];
            tmp_kw_call_value_3_8 = Py_None;
            tmp_kw_call_value_4_8 = Py_None;
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);

                exception_lineno = 65;

                goto list_build_exception_1;
            }
            tmp_kw_call_value_5_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[31]);
            if (tmp_kw_call_value_5_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);

                exception_lineno = 65;

                goto list_build_exception_1;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 61;
            {
                PyObject *kw_values[6] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_8, tmp_kw_call_value_2_8, tmp_kw_call_value_3_8, tmp_kw_call_value_4_8, tmp_kw_call_value_5_8};

                tmp_list_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_8, kw_values, mod_consts[40]);
            }

            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_kw_call_value_5_8);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_2, 5, tmp_list_element_2);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_4_2);
        Py_DECREF(tmp_kw_call_value_5_2);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_kw_call_value_6_2 = Py_None;
        tmp_kw_call_value_7_1 = Py_None;
        tmp_kw_call_value_8_1 = mod_consts[51];
        tmp_kw_call_value_9_1 = mod_consts[52];
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 29;
        {
            PyObject *kw_values[10] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_2, tmp_kw_call_value_5_2, tmp_kw_call_value_6_2, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1};

            tmp_assign_source_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[53]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_4_2);
        Py_DECREF(tmp_kw_call_value_5_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_11);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[55]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 72;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_kw_call_value_1_9;
        PyObject *tmp_kw_call_value_2_9;
        PyObject *tmp_kw_call_value_3_9;
        PyObject *tmp_kw_call_value_4_9;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_kw_call_value_5_9;
        PyObject *tmp_list_element_3;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_kw_call_value_0_10;
        PyObject *tmp_kw_call_value_1_10;
        PyObject *tmp_kw_call_value_2_10;
        PyObject *tmp_kw_call_value_3_10;
        PyObject *tmp_kw_call_value_4_10;
        PyObject *tmp_kw_call_value_5_10;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_kw_call_value_6_3;
        PyObject *tmp_kw_call_value_7_2;
        PyObject *tmp_kw_call_value_8_2;
        PyObject *tmp_kw_call_value_9_2;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[35]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_9 = mod_consts[36];
        tmp_kw_call_value_1_9 = mod_consts[56];
        tmp_kw_call_value_2_9 = Py_None;
        tmp_kw_call_value_3_9 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_kw_call_value_3_9 == NULL)) {
            tmp_kw_call_value_3_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_kw_call_value_3_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[31]);
        if (tmp_kw_call_value_4_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_value_4_9);

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[38]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_value_4_9);

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_10 = mod_consts[39];
        tmp_kw_call_value_1_10 = mod_consts[9];
        tmp_kw_call_value_2_10 = mod_consts[9];
        tmp_kw_call_value_3_10 = Py_None;
        tmp_kw_call_value_4_10 = Py_None;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_value_4_9);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[31]);
        if (tmp_kw_call_value_5_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_value_4_9);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 81;
        {
            PyObject *kw_values[6] = {tmp_kw_call_value_0_10, tmp_kw_call_value_1_10, tmp_kw_call_value_2_10, tmp_kw_call_value_3_10, tmp_kw_call_value_4_10, tmp_kw_call_value_5_10};

            tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_11, kw_values, mod_consts[40]);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_kw_call_value_5_10);
        if (tmp_list_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_value_4_9);

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_9 = PyList_New(6);
        {
            PyObject *tmp_called_value_12;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_kw_call_value_0_11;
            PyObject *tmp_kw_call_value_1_11;
            PyObject *tmp_kw_call_value_2_11;
            PyObject *tmp_kw_call_value_3_11;
            PyObject *tmp_kw_call_value_4_11;
            PyObject *tmp_kw_call_value_5_11;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_called_value_13;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_kw_call_value_0_12;
            PyObject *tmp_kw_call_value_1_12;
            PyObject *tmp_kw_call_value_2_12;
            PyObject *tmp_kw_call_value_3_12;
            PyObject *tmp_kw_call_value_4_12;
            PyObject *tmp_kw_call_value_5_12;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_called_value_14;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_kw_call_value_0_13;
            PyObject *tmp_kw_call_value_1_13;
            PyObject *tmp_kw_call_value_2_13;
            PyObject *tmp_kw_call_value_3_13;
            PyObject *tmp_kw_call_value_4_13;
            PyObject *tmp_kw_call_value_5_13;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_called_value_15;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_kw_call_value_0_14;
            PyObject *tmp_kw_call_value_1_14;
            PyObject *tmp_kw_call_value_2_14;
            PyObject *tmp_kw_call_value_3_14;
            PyObject *tmp_kw_call_value_4_14;
            PyObject *tmp_kw_call_value_5_14;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_called_value_16;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_kw_call_value_0_15;
            PyObject *tmp_kw_call_value_1_15;
            PyObject *tmp_kw_call_value_2_15;
            PyObject *tmp_kw_call_value_3_15;
            PyObject *tmp_kw_call_value_4_15;
            PyObject *tmp_kw_call_value_5_15;
            PyObject *tmp_expression_value_32;
            PyList_SET_ITEM(tmp_kw_call_value_5_9, 0, tmp_list_element_3);
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto list_build_exception_2;
            }
            tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[38]);
            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_0_11 = mod_consts[41];
            tmp_kw_call_value_1_11 = mod_consts[42];
            tmp_kw_call_value_2_11 = mod_consts[42];
            tmp_kw_call_value_3_11 = Py_None;
            tmp_kw_call_value_4_11 = Py_None;
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_12);

                exception_lineno = 90;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_5_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[31]);
            if (tmp_kw_call_value_5_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_12);

                exception_lineno = 90;

                goto list_build_exception_2;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 86;
            {
                PyObject *kw_values[6] = {tmp_kw_call_value_0_11, tmp_kw_call_value_1_11, tmp_kw_call_value_2_11, tmp_kw_call_value_3_11, tmp_kw_call_value_4_11, tmp_kw_call_value_5_11};

                tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_12, kw_values, mod_consts[40]);
            }

            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_kw_call_value_5_11);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_9, 1, tmp_list_element_3);
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto list_build_exception_2;
            }
            tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[38]);
            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_0_12 = mod_consts[43];
            tmp_kw_call_value_1_12 = mod_consts[44];
            tmp_kw_call_value_2_12 = mod_consts[44];
            tmp_kw_call_value_3_12 = Py_None;
            tmp_kw_call_value_4_12 = Py_None;
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);

                exception_lineno = 95;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_5_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[31]);
            if (tmp_kw_call_value_5_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);

                exception_lineno = 95;

                goto list_build_exception_2;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 91;
            {
                PyObject *kw_values[6] = {tmp_kw_call_value_0_12, tmp_kw_call_value_1_12, tmp_kw_call_value_2_12, tmp_kw_call_value_3_12, tmp_kw_call_value_4_12, tmp_kw_call_value_5_12};

                tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_13, kw_values, mod_consts[40]);
            }

            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_kw_call_value_5_12);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_9, 2, tmp_list_element_3);
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto list_build_exception_2;
            }
            tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[38]);
            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_0_13 = mod_consts[45];
            tmp_kw_call_value_1_13 = mod_consts[46];
            tmp_kw_call_value_2_13 = mod_consts[46];
            tmp_kw_call_value_3_13 = Py_None;
            tmp_kw_call_value_4_13 = Py_None;
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);

                exception_lineno = 100;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_5_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[31]);
            if (tmp_kw_call_value_5_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);

                exception_lineno = 100;

                goto list_build_exception_2;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 96;
            {
                PyObject *kw_values[6] = {tmp_kw_call_value_0_13, tmp_kw_call_value_1_13, tmp_kw_call_value_2_13, tmp_kw_call_value_3_13, tmp_kw_call_value_4_13, tmp_kw_call_value_5_13};

                tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_14, kw_values, mod_consts[40]);
            }

            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_kw_call_value_5_13);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_9, 3, tmp_list_element_3);
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto list_build_exception_2;
            }
            tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[38]);
            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_0_14 = mod_consts[47];
            tmp_kw_call_value_1_14 = mod_consts[48];
            tmp_kw_call_value_2_14 = mod_consts[48];
            tmp_kw_call_value_3_14 = Py_None;
            tmp_kw_call_value_4_14 = Py_None;
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 105;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_5_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[31]);
            if (tmp_kw_call_value_5_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 105;

                goto list_build_exception_2;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 101;
            {
                PyObject *kw_values[6] = {tmp_kw_call_value_0_14, tmp_kw_call_value_1_14, tmp_kw_call_value_2_14, tmp_kw_call_value_3_14, tmp_kw_call_value_4_14, tmp_kw_call_value_5_14};

                tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_15, kw_values, mod_consts[40]);
            }

            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_kw_call_value_5_14);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_9, 4, tmp_list_element_3);
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto list_build_exception_2;
            }
            tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[38]);
            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_0_15 = mod_consts[49];
            tmp_kw_call_value_1_15 = mod_consts[50];
            tmp_kw_call_value_2_15 = mod_consts[50];
            tmp_kw_call_value_3_15 = Py_None;
            tmp_kw_call_value_4_15 = Py_None;
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);

                exception_lineno = 110;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_5_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[31]);
            if (tmp_kw_call_value_5_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);

                exception_lineno = 110;

                goto list_build_exception_2;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 106;
            {
                PyObject *kw_values[6] = {tmp_kw_call_value_0_15, tmp_kw_call_value_1_15, tmp_kw_call_value_2_15, tmp_kw_call_value_3_15, tmp_kw_call_value_4_15, tmp_kw_call_value_5_15};

                tmp_list_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_16, kw_values, mod_consts[40]);
            }

            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_kw_call_value_5_15);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_value_5_9, 5, tmp_list_element_3);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_kw_call_value_4_9);
        Py_DECREF(tmp_kw_call_value_5_9);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        tmp_kw_call_value_6_3 = Py_None;
        tmp_kw_call_value_7_2 = Py_None;
        tmp_kw_call_value_8_2 = mod_consts[51];
        tmp_kw_call_value_9_2 = mod_consts[52];
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 74;
        {
            PyObject *kw_values[10] = {tmp_kw_call_value_0_9, tmp_kw_call_value_1_9, tmp_kw_call_value_2_9, tmp_kw_call_value_3_9, tmp_kw_call_value_4_9, tmp_kw_call_value_5_9, tmp_kw_call_value_6_3, tmp_kw_call_value_7_2, tmp_kw_call_value_8_2, tmp_kw_call_value_9_2};

            tmp_assign_source_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_10, kw_values, mod_consts[53]);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_kw_call_value_4_9);
        Py_DECREF(tmp_kw_call_value_5_9);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_12);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[55]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 117;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_17);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_kw_call_value_0_16;
        PyObject *tmp_kw_call_value_1_16;
        PyObject *tmp_kw_call_value_2_16;
        PyObject *tmp_kw_call_value_3_16;
        PyObject *tmp_kw_call_value_4_16;
        PyObject *tmp_kw_call_value_5_16;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_kw_call_value_6_4;
        PyObject *tmp_list_element_4;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_kw_call_value_0_17;
        PyObject *tmp_kw_call_value_1_17;
        PyObject *tmp_kw_call_value_2_17;
        PyObject *tmp_kw_call_value_3_17;
        PyObject *tmp_kw_call_value_4_17;
        PyObject *tmp_kw_call_value_5_17;
        PyObject *tmp_kw_call_value_6_5;
        PyObject *tmp_kw_call_value_7_3;
        PyObject *tmp_kw_call_value_8_3;
        PyObject *tmp_bytes_arg_value_1;
        PyObject *tmp_encoding_value_1;
        PyObject *tmp_kw_call_value_9_3;
        PyObject *tmp_kw_call_value_10_1;
        PyObject *tmp_kw_call_value_11_1;
        PyObject *tmp_kw_call_value_12_1;
        PyObject *tmp_kw_call_value_13_1;
        PyObject *tmp_kw_call_value_14_1;
        PyObject *tmp_kw_call_value_15_1;
        PyObject *tmp_kw_call_value_16_1;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_kw_call_value_7_10;
        PyObject *tmp_kw_call_value_8_10;
        PyObject *tmp_kw_call_value_9_10;
        PyObject *tmp_list_element_5;
        PyObject *tmp_kw_call_value_10_8;
        PyObject *tmp_kw_call_value_11_8;
        PyObject *tmp_kw_call_value_12_8;
        PyObject *tmp_kw_call_value_13_8;
        PyObject *tmp_kw_call_value_14_8;
        PyObject *tmp_kw_call_value_15_8;
        PyObject *tmp_kw_call_value_16_8;
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[58]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_16 = mod_consts[59];
        tmp_kw_call_value_1_16 = mod_consts[60];
        tmp_kw_call_value_2_16 = Py_None;
        tmp_kw_call_value_3_16 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_kw_call_value_3_16 == NULL)) {
            tmp_kw_call_value_3_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_kw_call_value_3_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_16 = Py_None;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[31]);
        if (tmp_kw_call_value_5_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_kw_call_value_5_16);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[61]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_kw_call_value_5_16);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_17 = mod_consts[62];
        tmp_kw_call_value_1_17 = mod_consts[63];
        tmp_kw_call_value_2_17 = mod_consts[9];
        tmp_kw_call_value_3_17 = mod_consts[42];
        tmp_kw_call_value_4_17 = mod_consts[64];
        tmp_kw_call_value_5_17 = mod_consts[64];
        tmp_kw_call_value_6_5 = mod_consts[42];
        tmp_kw_call_value_7_3 = Py_False;
        tmp_bytes_arg_value_1 = mod_consts[65];
        tmp_encoding_value_1 = mod_consts[66];
        tmp_kw_call_value_8_3 = BYTES_DECODE2(tmp_bytes_arg_value_1, tmp_encoding_value_1);
        if (tmp_kw_call_value_8_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_kw_call_value_5_16);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_3 = Py_None;
        tmp_kw_call_value_10_1 = Py_None;
        tmp_kw_call_value_11_1 = Py_None;
        tmp_kw_call_value_12_1 = Py_False;
        tmp_kw_call_value_13_1 = Py_None;
        tmp_kw_call_value_14_1 = Py_None;
        tmp_kw_call_value_15_1 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_kw_call_value_15_1 == NULL)) {
            tmp_kw_call_value_15_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_kw_call_value_15_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_kw_call_value_5_16);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_kw_call_value_8_3);

            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_kw_call_value_5_16);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_kw_call_value_8_3);

            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_16_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[31]);
        if (tmp_kw_call_value_16_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_kw_call_value_5_16);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_kw_call_value_8_3);

            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 128;
        {
            PyObject *kw_values[17] = {tmp_kw_call_value_0_17, tmp_kw_call_value_1_17, tmp_kw_call_value_2_17, tmp_kw_call_value_3_17, tmp_kw_call_value_4_17, tmp_kw_call_value_5_17, tmp_kw_call_value_6_5, tmp_kw_call_value_7_3, tmp_kw_call_value_8_3, tmp_kw_call_value_9_3, tmp_kw_call_value_10_1, tmp_kw_call_value_11_1, tmp_kw_call_value_12_1, tmp_kw_call_value_13_1, tmp_kw_call_value_14_1, tmp_kw_call_value_15_1, tmp_kw_call_value_16_1};

            tmp_list_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_19, kw_values, mod_consts[67]);
        }

        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_kw_call_value_8_3);
        Py_DECREF(tmp_kw_call_value_16_1);
        if (tmp_list_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_kw_call_value_5_16);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_4 = PyList_New(7);
        {
            PyObject *tmp_called_value_20;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_kw_call_value_0_18;
            PyObject *tmp_kw_call_value_1_18;
            PyObject *tmp_kw_call_value_2_18;
            PyObject *tmp_kw_call_value_3_18;
            PyObject *tmp_kw_call_value_4_18;
            PyObject *tmp_kw_call_value_5_18;
            PyObject *tmp_kw_call_value_6_6;
            PyObject *tmp_kw_call_value_7_4;
            PyObject *tmp_kw_call_value_8_4;
            PyObject *tmp_kw_call_value_9_4;
            PyObject *tmp_kw_call_value_10_2;
            PyObject *tmp_kw_call_value_11_2;
            PyObject *tmp_kw_call_value_12_2;
            PyObject *tmp_kw_call_value_13_2;
            PyObject *tmp_kw_call_value_14_2;
            PyObject *tmp_kw_call_value_15_2;
            PyObject *tmp_kw_call_value_16_2;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_called_value_21;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_kw_call_value_0_19;
            PyObject *tmp_kw_call_value_1_19;
            PyObject *tmp_kw_call_value_2_19;
            PyObject *tmp_kw_call_value_3_19;
            PyObject *tmp_kw_call_value_4_19;
            PyObject *tmp_kw_call_value_5_19;
            PyObject *tmp_kw_call_value_6_7;
            PyObject *tmp_kw_call_value_7_5;
            PyObject *tmp_kw_call_value_8_5;
            PyObject *tmp_kw_call_value_9_5;
            PyObject *tmp_kw_call_value_10_3;
            PyObject *tmp_kw_call_value_11_3;
            PyObject *tmp_kw_call_value_12_3;
            PyObject *tmp_kw_call_value_13_3;
            PyObject *tmp_kw_call_value_14_3;
            PyObject *tmp_kw_call_value_15_3;
            PyObject *tmp_kw_call_value_16_3;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_called_value_22;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_kw_call_value_0_20;
            PyObject *tmp_kw_call_value_1_20;
            PyObject *tmp_kw_call_value_2_20;
            PyObject *tmp_kw_call_value_3_20;
            PyObject *tmp_kw_call_value_4_20;
            PyObject *tmp_kw_call_value_5_20;
            PyObject *tmp_kw_call_value_6_8;
            PyObject *tmp_kw_call_value_7_6;
            PyObject *tmp_kw_call_value_8_6;
            PyObject *tmp_kw_call_value_9_6;
            PyObject *tmp_kw_call_value_10_4;
            PyObject *tmp_kw_call_value_11_4;
            PyObject *tmp_kw_call_value_12_4;
            PyObject *tmp_kw_call_value_13_4;
            PyObject *tmp_kw_call_value_14_4;
            PyObject *tmp_kw_call_value_15_4;
            PyObject *tmp_kw_call_value_16_4;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_called_value_23;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_kw_call_value_0_21;
            PyObject *tmp_kw_call_value_1_21;
            PyObject *tmp_kw_call_value_2_21;
            PyObject *tmp_kw_call_value_3_21;
            PyObject *tmp_kw_call_value_4_21;
            PyObject *tmp_kw_call_value_5_21;
            PyObject *tmp_kw_call_value_6_9;
            PyObject *tmp_kw_call_value_7_7;
            PyObject *tmp_kw_call_value_8_7;
            PyObject *tmp_kw_call_value_9_7;
            PyObject *tmp_kw_call_value_10_5;
            PyObject *tmp_kw_call_value_11_5;
            PyObject *tmp_kw_call_value_12_5;
            PyObject *tmp_kw_call_value_13_5;
            PyObject *tmp_kw_call_value_14_5;
            PyObject *tmp_kw_call_value_15_5;
            PyObject *tmp_kw_call_value_16_5;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_called_value_24;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_kw_call_value_0_22;
            PyObject *tmp_kw_call_value_1_22;
            PyObject *tmp_kw_call_value_2_22;
            PyObject *tmp_kw_call_value_3_22;
            PyObject *tmp_kw_call_value_4_22;
            PyObject *tmp_kw_call_value_5_22;
            PyObject *tmp_kw_call_value_6_10;
            PyObject *tmp_kw_call_value_7_8;
            PyObject *tmp_kw_call_value_8_8;
            PyObject *tmp_kw_call_value_9_8;
            PyObject *tmp_kw_call_value_10_6;
            PyObject *tmp_kw_call_value_11_6;
            PyObject *tmp_kw_call_value_12_6;
            PyObject *tmp_kw_call_value_13_6;
            PyObject *tmp_kw_call_value_14_6;
            PyObject *tmp_kw_call_value_15_6;
            PyObject *tmp_kw_call_value_16_6;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_called_value_25;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_kw_call_value_0_23;
            PyObject *tmp_kw_call_value_1_23;
            PyObject *tmp_kw_call_value_2_23;
            PyObject *tmp_kw_call_value_3_23;
            PyObject *tmp_kw_call_value_4_23;
            PyObject *tmp_kw_call_value_5_23;
            PyObject *tmp_kw_call_value_6_11;
            PyObject *tmp_kw_call_value_7_9;
            PyObject *tmp_kw_call_value_8_9;
            PyObject *tmp_kw_call_value_9_9;
            PyObject *tmp_kw_call_value_10_7;
            PyObject *tmp_kw_call_value_11_7;
            PyObject *tmp_kw_call_value_12_7;
            PyObject *tmp_kw_call_value_13_7;
            PyObject *tmp_kw_call_value_14_7;
            PyObject *tmp_kw_call_value_15_7;
            PyObject *tmp_kw_call_value_16_7;
            PyObject *tmp_expression_value_49;
            PyList_SET_ITEM(tmp_kw_call_value_6_4, 0, tmp_list_element_4);
            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_38 == NULL)) {
                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto list_build_exception_3;
            }
            tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[61]);
            if (tmp_called_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto list_build_exception_3;
            }
            tmp_kw_call_value_0_18 = mod_consts[68];
            tmp_kw_call_value_1_18 = mod_consts[69];
            tmp_kw_call_value_2_18 = mod_consts[42];
            tmp_kw_call_value_3_18 = mod_consts[44];
            tmp_kw_call_value_4_18 = mod_consts[50];
            tmp_kw_call_value_5_18 = mod_consts[42];
            tmp_kw_call_value_6_6 = mod_consts[42];
            tmp_kw_call_value_7_4 = Py_False;
            tmp_kw_call_value_8_4 = mod_consts[9];
            tmp_kw_call_value_9_4 = Py_None;
            tmp_kw_call_value_10_2 = Py_None;
            tmp_kw_call_value_11_2 = Py_None;
            tmp_kw_call_value_12_2 = Py_False;
            tmp_kw_call_value_13_2 = Py_None;
            tmp_kw_call_value_14_2 = Py_None;
            tmp_kw_call_value_15_2 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_2 == NULL)) {
                tmp_kw_call_value_15_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_20);

                exception_lineno = 141;

                goto list_build_exception_3;
            }
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_20);

                exception_lineno = 141;

                goto list_build_exception_3;
            }
            tmp_kw_call_value_16_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[31]);
            if (tmp_kw_call_value_16_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_20);

                exception_lineno = 141;

                goto list_build_exception_3;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 135;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_18, tmp_kw_call_value_1_18, tmp_kw_call_value_2_18, tmp_kw_call_value_3_18, tmp_kw_call_value_4_18, tmp_kw_call_value_5_18, tmp_kw_call_value_6_6, tmp_kw_call_value_7_4, tmp_kw_call_value_8_4, tmp_kw_call_value_9_4, tmp_kw_call_value_10_2, tmp_kw_call_value_11_2, tmp_kw_call_value_12_2, tmp_kw_call_value_13_2, tmp_kw_call_value_14_2, tmp_kw_call_value_15_2, tmp_kw_call_value_16_2};

                tmp_list_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_20, kw_values, mod_consts[67]);
            }

            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_kw_call_value_16_2);
            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_4, 1, tmp_list_element_4);
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto list_build_exception_3;
            }
            tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[61]);
            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto list_build_exception_3;
            }
            tmp_kw_call_value_0_19 = mod_consts[70];
            tmp_kw_call_value_1_19 = mod_consts[71];
            tmp_kw_call_value_2_19 = mod_consts[44];
            tmp_kw_call_value_3_19 = mod_consts[46];
            tmp_kw_call_value_4_19 = mod_consts[72];
            tmp_kw_call_value_5_19 = mod_consts[73];
            tmp_kw_call_value_6_7 = mod_consts[46];
            tmp_kw_call_value_7_5 = Py_False;
            tmp_kw_call_value_8_5 = PyList_New(0);
            tmp_kw_call_value_9_5 = Py_None;
            tmp_kw_call_value_10_3 = Py_None;
            tmp_kw_call_value_11_3 = Py_None;
            tmp_kw_call_value_12_3 = Py_False;
            tmp_kw_call_value_13_3 = Py_None;
            tmp_kw_call_value_14_3 = Py_None;
            tmp_kw_call_value_15_3 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_3 == NULL)) {
                tmp_kw_call_value_15_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);
                Py_DECREF(tmp_kw_call_value_8_5);

                exception_lineno = 148;

                goto list_build_exception_3;
            }
            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_41 == NULL)) {
                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);
                Py_DECREF(tmp_kw_call_value_8_5);

                exception_lineno = 148;

                goto list_build_exception_3;
            }
            tmp_kw_call_value_16_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[31]);
            if (tmp_kw_call_value_16_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);
                Py_DECREF(tmp_kw_call_value_8_5);

                exception_lineno = 148;

                goto list_build_exception_3;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 142;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_19, tmp_kw_call_value_1_19, tmp_kw_call_value_2_19, tmp_kw_call_value_3_19, tmp_kw_call_value_4_19, tmp_kw_call_value_5_19, tmp_kw_call_value_6_7, tmp_kw_call_value_7_5, tmp_kw_call_value_8_5, tmp_kw_call_value_9_5, tmp_kw_call_value_10_3, tmp_kw_call_value_11_3, tmp_kw_call_value_12_3, tmp_kw_call_value_13_3, tmp_kw_call_value_14_3, tmp_kw_call_value_15_3, tmp_kw_call_value_16_3};

                tmp_list_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_21, kw_values, mod_consts[67]);
            }

            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_kw_call_value_8_5);
            Py_DECREF(tmp_kw_call_value_16_3);
            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_4, 2, tmp_list_element_4);
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto list_build_exception_3;
            }
            tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[61]);
            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto list_build_exception_3;
            }
            tmp_kw_call_value_0_20 = mod_consts[74];
            tmp_kw_call_value_1_20 = mod_consts[75];
            tmp_kw_call_value_2_20 = mod_consts[46];
            tmp_kw_call_value_3_20 = mod_consts[48];
            tmp_kw_call_value_4_20 = mod_consts[72];
            tmp_kw_call_value_5_20 = mod_consts[73];
            tmp_kw_call_value_6_8 = mod_consts[46];
            tmp_kw_call_value_7_6 = Py_False;
            tmp_kw_call_value_8_6 = PyList_New(0);
            tmp_kw_call_value_9_6 = Py_None;
            tmp_kw_call_value_10_4 = Py_None;
            tmp_kw_call_value_11_4 = Py_None;
            tmp_kw_call_value_12_4 = Py_False;
            tmp_kw_call_value_13_4 = Py_None;
            tmp_kw_call_value_14_4 = Py_None;
            tmp_kw_call_value_15_4 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_4 == NULL)) {
                tmp_kw_call_value_15_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);
                Py_DECREF(tmp_kw_call_value_8_6);

                exception_lineno = 155;

                goto list_build_exception_3;
            }
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);
                Py_DECREF(tmp_kw_call_value_8_6);

                exception_lineno = 155;

                goto list_build_exception_3;
            }
            tmp_kw_call_value_16_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[31]);
            if (tmp_kw_call_value_16_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);
                Py_DECREF(tmp_kw_call_value_8_6);

                exception_lineno = 155;

                goto list_build_exception_3;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 149;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_20, tmp_kw_call_value_1_20, tmp_kw_call_value_2_20, tmp_kw_call_value_3_20, tmp_kw_call_value_4_20, tmp_kw_call_value_5_20, tmp_kw_call_value_6_8, tmp_kw_call_value_7_6, tmp_kw_call_value_8_6, tmp_kw_call_value_9_6, tmp_kw_call_value_10_4, tmp_kw_call_value_11_4, tmp_kw_call_value_12_4, tmp_kw_call_value_13_4, tmp_kw_call_value_14_4, tmp_kw_call_value_15_4, tmp_kw_call_value_16_4};

                tmp_list_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_22, kw_values, mod_consts[67]);
            }

            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_kw_call_value_8_6);
            Py_DECREF(tmp_kw_call_value_16_4);
            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_4, 3, tmp_list_element_4);
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto list_build_exception_3;
            }
            tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[61]);
            if (tmp_called_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto list_build_exception_3;
            }
            tmp_kw_call_value_0_21 = mod_consts[76];
            tmp_kw_call_value_1_21 = mod_consts[77];
            tmp_kw_call_value_2_21 = mod_consts[48];
            tmp_kw_call_value_3_21 = mod_consts[50];
            tmp_kw_call_value_4_21 = mod_consts[72];
            tmp_kw_call_value_5_21 = mod_consts[73];
            tmp_kw_call_value_6_9 = mod_consts[46];
            tmp_kw_call_value_7_7 = Py_False;
            tmp_kw_call_value_8_7 = PyList_New(0);
            tmp_kw_call_value_9_7 = Py_None;
            tmp_kw_call_value_10_5 = Py_None;
            tmp_kw_call_value_11_5 = Py_None;
            tmp_kw_call_value_12_5 = Py_False;
            tmp_kw_call_value_13_5 = Py_None;
            tmp_kw_call_value_14_5 = Py_None;
            tmp_kw_call_value_15_5 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_5 == NULL)) {
                tmp_kw_call_value_15_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_23);
                Py_DECREF(tmp_kw_call_value_8_7);

                exception_lineno = 162;

                goto list_build_exception_3;
            }
            tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_45 == NULL)) {
                tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_23);
                Py_DECREF(tmp_kw_call_value_8_7);

                exception_lineno = 162;

                goto list_build_exception_3;
            }
            tmp_kw_call_value_16_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[31]);
            if (tmp_kw_call_value_16_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_23);
                Py_DECREF(tmp_kw_call_value_8_7);

                exception_lineno = 162;

                goto list_build_exception_3;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 156;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_21, tmp_kw_call_value_1_21, tmp_kw_call_value_2_21, tmp_kw_call_value_3_21, tmp_kw_call_value_4_21, tmp_kw_call_value_5_21, tmp_kw_call_value_6_9, tmp_kw_call_value_7_7, tmp_kw_call_value_8_7, tmp_kw_call_value_9_7, tmp_kw_call_value_10_5, tmp_kw_call_value_11_5, tmp_kw_call_value_12_5, tmp_kw_call_value_13_5, tmp_kw_call_value_14_5, tmp_kw_call_value_15_5, tmp_kw_call_value_16_5};

                tmp_list_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_23, kw_values, mod_consts[67]);
            }

            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_kw_call_value_8_7);
            Py_DECREF(tmp_kw_call_value_16_5);
            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_4, 4, tmp_list_element_4);
            tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_46 == NULL)) {
                tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto list_build_exception_3;
            }
            tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[61]);
            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto list_build_exception_3;
            }
            tmp_kw_call_value_0_22 = mod_consts[78];
            tmp_kw_call_value_1_22 = mod_consts[79];
            tmp_kw_call_value_2_22 = mod_consts[50];
            tmp_kw_call_value_3_22 = mod_consts[80];
            tmp_kw_call_value_4_22 = mod_consts[72];
            tmp_kw_call_value_5_22 = mod_consts[73];
            tmp_kw_call_value_6_10 = mod_consts[46];
            tmp_kw_call_value_7_8 = Py_False;
            tmp_kw_call_value_8_8 = PyList_New(0);
            tmp_kw_call_value_9_8 = Py_None;
            tmp_kw_call_value_10_6 = Py_None;
            tmp_kw_call_value_11_6 = Py_None;
            tmp_kw_call_value_12_6 = Py_False;
            tmp_kw_call_value_13_6 = Py_None;
            tmp_kw_call_value_14_6 = Py_None;
            tmp_kw_call_value_15_6 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_6 == NULL)) {
                tmp_kw_call_value_15_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_24);
                Py_DECREF(tmp_kw_call_value_8_8);

                exception_lineno = 169;

                goto list_build_exception_3;
            }
            tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_47 == NULL)) {
                tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_24);
                Py_DECREF(tmp_kw_call_value_8_8);

                exception_lineno = 169;

                goto list_build_exception_3;
            }
            tmp_kw_call_value_16_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[31]);
            if (tmp_kw_call_value_16_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_24);
                Py_DECREF(tmp_kw_call_value_8_8);

                exception_lineno = 169;

                goto list_build_exception_3;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 163;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_22, tmp_kw_call_value_1_22, tmp_kw_call_value_2_22, tmp_kw_call_value_3_22, tmp_kw_call_value_4_22, tmp_kw_call_value_5_22, tmp_kw_call_value_6_10, tmp_kw_call_value_7_8, tmp_kw_call_value_8_8, tmp_kw_call_value_9_8, tmp_kw_call_value_10_6, tmp_kw_call_value_11_6, tmp_kw_call_value_12_6, tmp_kw_call_value_13_6, tmp_kw_call_value_14_6, tmp_kw_call_value_15_6, tmp_kw_call_value_16_6};

                tmp_list_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_24, kw_values, mod_consts[67]);
            }

            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_kw_call_value_8_8);
            Py_DECREF(tmp_kw_call_value_16_6);
            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_4, 5, tmp_list_element_4);
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto list_build_exception_3;
            }
            tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[61]);
            if (tmp_called_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto list_build_exception_3;
            }
            tmp_kw_call_value_0_23 = mod_consts[81];
            tmp_kw_call_value_1_23 = mod_consts[82];
            tmp_kw_call_value_2_23 = mod_consts[80];
            tmp_kw_call_value_3_23 = mod_consts[83];
            tmp_kw_call_value_4_23 = mod_consts[72];
            tmp_kw_call_value_5_23 = mod_consts[73];
            tmp_kw_call_value_6_11 = mod_consts[46];
            tmp_kw_call_value_7_9 = Py_False;
            tmp_kw_call_value_8_9 = PyList_New(0);
            tmp_kw_call_value_9_9 = Py_None;
            tmp_kw_call_value_10_7 = Py_None;
            tmp_kw_call_value_11_7 = Py_None;
            tmp_kw_call_value_12_7 = Py_False;
            tmp_kw_call_value_13_7 = Py_None;
            tmp_kw_call_value_14_7 = Py_None;
            tmp_kw_call_value_15_7 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_7 == NULL)) {
                tmp_kw_call_value_15_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_25);
                Py_DECREF(tmp_kw_call_value_8_9);

                exception_lineno = 176;

                goto list_build_exception_3;
            }
            tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_49 == NULL)) {
                tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_25);
                Py_DECREF(tmp_kw_call_value_8_9);

                exception_lineno = 176;

                goto list_build_exception_3;
            }
            tmp_kw_call_value_16_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[31]);
            if (tmp_kw_call_value_16_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_25);
                Py_DECREF(tmp_kw_call_value_8_9);

                exception_lineno = 176;

                goto list_build_exception_3;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 170;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_23, tmp_kw_call_value_1_23, tmp_kw_call_value_2_23, tmp_kw_call_value_3_23, tmp_kw_call_value_4_23, tmp_kw_call_value_5_23, tmp_kw_call_value_6_11, tmp_kw_call_value_7_9, tmp_kw_call_value_8_9, tmp_kw_call_value_9_9, tmp_kw_call_value_10_7, tmp_kw_call_value_11_7, tmp_kw_call_value_12_7, tmp_kw_call_value_13_7, tmp_kw_call_value_14_7, tmp_kw_call_value_15_7, tmp_kw_call_value_16_7};

                tmp_list_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_25, kw_values, mod_consts[67]);
            }

            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_kw_call_value_8_9);
            Py_DECREF(tmp_kw_call_value_16_7);
            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_4, 6, tmp_list_element_4);
        }
        goto list_build_noexception_3;
        // Exception handling pass through code for list_build:
        list_build_exception_3:;
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_kw_call_value_5_16);
        Py_DECREF(tmp_kw_call_value_6_4);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_3:;
        tmp_kw_call_value_7_10 = PyList_New(0);
        tmp_kw_call_value_8_10 = PyList_New(0);
        tmp_list_element_5 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_list_element_5 == NULL)) {
            tmp_list_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_list_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_kw_call_value_5_16);
            Py_DECREF(tmp_kw_call_value_6_4);
            Py_DECREF(tmp_kw_call_value_7_10);
            Py_DECREF(tmp_kw_call_value_8_10);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_10 = PyList_New(1);
        PyList_SET_ITEM0(tmp_kw_call_value_9_10, 0, tmp_list_element_5);
        tmp_kw_call_value_10_8 = Py_None;
        tmp_kw_call_value_11_8 = Py_False;
        tmp_kw_call_value_12_8 = mod_consts[29];
        tmp_kw_call_value_13_8 = PyList_New(0);
        tmp_kw_call_value_14_8 = PyList_New(0);
        tmp_kw_call_value_15_8 = mod_consts[84];
        tmp_kw_call_value_16_8 = mod_consts[52];
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 120;
        {
            PyObject *kw_values[17] = {tmp_kw_call_value_0_16, tmp_kw_call_value_1_16, tmp_kw_call_value_2_16, tmp_kw_call_value_3_16, tmp_kw_call_value_4_16, tmp_kw_call_value_5_16, tmp_kw_call_value_6_4, tmp_kw_call_value_7_10, tmp_kw_call_value_8_10, tmp_kw_call_value_9_10, tmp_kw_call_value_10_8, tmp_kw_call_value_11_8, tmp_kw_call_value_12_8, tmp_kw_call_value_13_8, tmp_kw_call_value_14_8, tmp_kw_call_value_15_8, tmp_kw_call_value_16_8};

            tmp_assign_source_13 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_18, kw_values, mod_consts[85]);
        }

        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_kw_call_value_5_16);
        Py_DECREF(tmp_kw_call_value_6_4);
        Py_DECREF(tmp_kw_call_value_7_10);
        Py_DECREF(tmp_kw_call_value_8_10);
        Py_DECREF(tmp_kw_call_value_9_10);
        Py_DECREF(tmp_kw_call_value_13_8);
        Py_DECREF(tmp_kw_call_value_14_8);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_kw_call_value_0_24;
        PyObject *tmp_kw_call_value_1_24;
        PyObject *tmp_kw_call_value_2_24;
        PyObject *tmp_kw_call_value_3_24;
        PyObject *tmp_kw_call_value_4_24;
        PyObject *tmp_kw_call_value_5_24;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_kw_call_value_6_12;
        PyObject *tmp_list_element_6;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_kw_call_value_0_25;
        PyObject *tmp_kw_call_value_1_25;
        PyObject *tmp_kw_call_value_2_25;
        PyObject *tmp_kw_call_value_3_25;
        PyObject *tmp_kw_call_value_4_25;
        PyObject *tmp_kw_call_value_5_25;
        PyObject *tmp_kw_call_value_6_13;
        PyObject *tmp_kw_call_value_7_11;
        PyObject *tmp_kw_call_value_8_11;
        PyObject *tmp_bytes_arg_value_2;
        PyObject *tmp_encoding_value_2;
        PyObject *tmp_kw_call_value_9_11;
        PyObject *tmp_kw_call_value_10_9;
        PyObject *tmp_kw_call_value_11_9;
        PyObject *tmp_kw_call_value_12_9;
        PyObject *tmp_kw_call_value_13_9;
        PyObject *tmp_kw_call_value_14_9;
        PyObject *tmp_kw_call_value_15_9;
        PyObject *tmp_kw_call_value_16_9;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_kw_call_value_7_16;
        PyObject *tmp_kw_call_value_8_16;
        PyObject *tmp_kw_call_value_9_16;
        PyObject *tmp_kw_call_value_10_14;
        PyObject *tmp_kw_call_value_11_14;
        PyObject *tmp_kw_call_value_12_14;
        PyObject *tmp_kw_call_value_13_14;
        PyObject *tmp_kw_call_value_14_14;
        PyObject *tmp_kw_call_value_15_14;
        PyObject *tmp_kw_call_value_16_14;
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[58]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_24 = mod_consts[87];
        tmp_kw_call_value_1_24 = mod_consts[88];
        tmp_kw_call_value_2_24 = Py_None;
        tmp_kw_call_value_3_24 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_kw_call_value_3_24 == NULL)) {
            tmp_kw_call_value_3_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_kw_call_value_3_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_24 = Py_None;
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[31]);
        if (tmp_kw_call_value_5_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_kw_call_value_5_24);

            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[61]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_kw_call_value_5_24);

            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_25 = mod_consts[62];
        tmp_kw_call_value_1_25 = mod_consts[89];
        tmp_kw_call_value_2_25 = mod_consts[9];
        tmp_kw_call_value_3_25 = mod_consts[42];
        tmp_kw_call_value_4_25 = mod_consts[64];
        tmp_kw_call_value_5_25 = mod_consts[64];
        tmp_kw_call_value_6_13 = mod_consts[42];
        tmp_kw_call_value_7_11 = Py_False;
        tmp_bytes_arg_value_2 = mod_consts[65];
        tmp_encoding_value_2 = mod_consts[66];
        tmp_kw_call_value_8_11 = BYTES_DECODE2(tmp_bytes_arg_value_2, tmp_encoding_value_2);
        if (tmp_kw_call_value_8_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_kw_call_value_5_24);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_11 = Py_None;
        tmp_kw_call_value_10_9 = Py_None;
        tmp_kw_call_value_11_9 = Py_None;
        tmp_kw_call_value_12_9 = Py_False;
        tmp_kw_call_value_13_9 = Py_None;
        tmp_kw_call_value_14_9 = Py_None;
        tmp_kw_call_value_15_9 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_kw_call_value_15_9 == NULL)) {
            tmp_kw_call_value_15_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_kw_call_value_15_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_kw_call_value_5_24);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_kw_call_value_8_11);

            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_kw_call_value_5_24);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_kw_call_value_8_11);

            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_16_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[31]);
        if (tmp_kw_call_value_16_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_kw_call_value_5_24);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_kw_call_value_8_11);

            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 203;
        {
            PyObject *kw_values[17] = {tmp_kw_call_value_0_25, tmp_kw_call_value_1_25, tmp_kw_call_value_2_25, tmp_kw_call_value_3_25, tmp_kw_call_value_4_25, tmp_kw_call_value_5_25, tmp_kw_call_value_6_13, tmp_kw_call_value_7_11, tmp_kw_call_value_8_11, tmp_kw_call_value_9_11, tmp_kw_call_value_10_9, tmp_kw_call_value_11_9, tmp_kw_call_value_12_9, tmp_kw_call_value_13_9, tmp_kw_call_value_14_9, tmp_kw_call_value_15_9, tmp_kw_call_value_16_9};

            tmp_list_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_27, kw_values, mod_consts[67]);
        }

        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_kw_call_value_8_11);
        Py_DECREF(tmp_kw_call_value_16_9);
        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_kw_call_value_5_24);

            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_12 = PyList_New(5);
        {
            PyObject *tmp_called_value_28;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_kw_call_value_0_26;
            PyObject *tmp_kw_call_value_1_26;
            PyObject *tmp_kw_call_value_2_26;
            PyObject *tmp_kw_call_value_3_26;
            PyObject *tmp_kw_call_value_4_26;
            PyObject *tmp_kw_call_value_5_26;
            PyObject *tmp_kw_call_value_6_14;
            PyObject *tmp_kw_call_value_7_12;
            PyObject *tmp_kw_call_value_8_12;
            PyObject *tmp_kw_call_value_9_12;
            PyObject *tmp_kw_call_value_10_10;
            PyObject *tmp_kw_call_value_11_10;
            PyObject *tmp_kw_call_value_12_10;
            PyObject *tmp_kw_call_value_13_10;
            PyObject *tmp_kw_call_value_14_10;
            PyObject *tmp_kw_call_value_15_10;
            PyObject *tmp_kw_call_value_16_10;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_called_value_29;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_kw_call_value_0_27;
            PyObject *tmp_kw_call_value_1_27;
            PyObject *tmp_kw_call_value_2_27;
            PyObject *tmp_kw_call_value_3_27;
            PyObject *tmp_kw_call_value_4_27;
            PyObject *tmp_kw_call_value_5_27;
            PyObject *tmp_kw_call_value_6_15;
            PyObject *tmp_kw_call_value_7_13;
            PyObject *tmp_kw_call_value_8_13;
            PyObject *tmp_kw_call_value_9_13;
            PyObject *tmp_kw_call_value_10_11;
            PyObject *tmp_kw_call_value_11_11;
            PyObject *tmp_kw_call_value_12_11;
            PyObject *tmp_kw_call_value_13_11;
            PyObject *tmp_kw_call_value_14_11;
            PyObject *tmp_kw_call_value_15_11;
            PyObject *tmp_kw_call_value_16_11;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_called_value_30;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_kw_call_value_0_28;
            PyObject *tmp_kw_call_value_1_28;
            PyObject *tmp_kw_call_value_2_28;
            PyObject *tmp_kw_call_value_3_28;
            PyObject *tmp_kw_call_value_4_28;
            PyObject *tmp_kw_call_value_5_28;
            PyObject *tmp_kw_call_value_6_16;
            PyObject *tmp_kw_call_value_7_14;
            PyObject *tmp_kw_call_value_8_14;
            PyObject *tmp_kw_call_value_9_14;
            PyObject *tmp_kw_call_value_10_12;
            PyObject *tmp_kw_call_value_11_12;
            PyObject *tmp_kw_call_value_12_12;
            PyObject *tmp_kw_call_value_13_12;
            PyObject *tmp_kw_call_value_14_12;
            PyObject *tmp_kw_call_value_15_12;
            PyObject *tmp_kw_call_value_16_12;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_called_value_31;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_kw_call_value_0_29;
            PyObject *tmp_kw_call_value_1_29;
            PyObject *tmp_kw_call_value_2_29;
            PyObject *tmp_kw_call_value_3_29;
            PyObject *tmp_kw_call_value_4_29;
            PyObject *tmp_kw_call_value_5_29;
            PyObject *tmp_kw_call_value_6_17;
            PyObject *tmp_kw_call_value_7_15;
            PyObject *tmp_kw_call_value_8_15;
            PyObject *tmp_kw_call_value_9_15;
            PyObject *tmp_kw_call_value_10_13;
            PyObject *tmp_kw_call_value_11_13;
            PyObject *tmp_kw_call_value_12_13;
            PyObject *tmp_kw_call_value_13_13;
            PyObject *tmp_kw_call_value_14_13;
            PyObject *tmp_kw_call_value_15_13;
            PyObject *tmp_kw_call_value_16_13;
            PyObject *tmp_expression_value_61;
            PyList_SET_ITEM(tmp_kw_call_value_6_12, 0, tmp_list_element_6);
            tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_54 == NULL)) {
                tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto list_build_exception_4;
            }
            tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[61]);
            if (tmp_called_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto list_build_exception_4;
            }
            tmp_kw_call_value_0_26 = mod_consts[90];
            tmp_kw_call_value_1_26 = mod_consts[91];
            tmp_kw_call_value_2_26 = mod_consts[42];
            tmp_kw_call_value_3_26 = mod_consts[44];
            tmp_kw_call_value_4_26 = mod_consts[50];
            tmp_kw_call_value_5_26 = mod_consts[42];
            tmp_kw_call_value_6_14 = mod_consts[42];
            tmp_kw_call_value_7_12 = Py_False;
            tmp_kw_call_value_8_12 = mod_consts[9];
            tmp_kw_call_value_9_12 = Py_None;
            tmp_kw_call_value_10_10 = Py_None;
            tmp_kw_call_value_11_10 = Py_None;
            tmp_kw_call_value_12_10 = Py_False;
            tmp_kw_call_value_13_10 = Py_None;
            tmp_kw_call_value_14_10 = Py_None;
            tmp_kw_call_value_15_10 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_10 == NULL)) {
                tmp_kw_call_value_15_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_28);

                exception_lineno = 216;

                goto list_build_exception_4;
            }
            tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_55 == NULL)) {
                tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_28);

                exception_lineno = 216;

                goto list_build_exception_4;
            }
            tmp_kw_call_value_16_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[31]);
            if (tmp_kw_call_value_16_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_28);

                exception_lineno = 216;

                goto list_build_exception_4;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 210;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_26, tmp_kw_call_value_1_26, tmp_kw_call_value_2_26, tmp_kw_call_value_3_26, tmp_kw_call_value_4_26, tmp_kw_call_value_5_26, tmp_kw_call_value_6_14, tmp_kw_call_value_7_12, tmp_kw_call_value_8_12, tmp_kw_call_value_9_12, tmp_kw_call_value_10_10, tmp_kw_call_value_11_10, tmp_kw_call_value_12_10, tmp_kw_call_value_13_10, tmp_kw_call_value_14_10, tmp_kw_call_value_15_10, tmp_kw_call_value_16_10};

                tmp_list_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_28, kw_values, mod_consts[67]);
            }

            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_kw_call_value_16_10);
            if (tmp_list_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_12, 1, tmp_list_element_6);
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto list_build_exception_4;
            }
            tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[61]);
            if (tmp_called_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto list_build_exception_4;
            }
            tmp_kw_call_value_0_27 = mod_consts[92];
            tmp_kw_call_value_1_27 = mod_consts[93];
            tmp_kw_call_value_2_27 = mod_consts[44];
            tmp_kw_call_value_3_27 = mod_consts[46];
            tmp_kw_call_value_4_27 = mod_consts[46];
            tmp_kw_call_value_5_27 = mod_consts[44];
            tmp_kw_call_value_6_15 = mod_consts[46];
            tmp_kw_call_value_7_13 = Py_False;
            tmp_kw_call_value_8_13 = PyList_New(0);
            tmp_kw_call_value_9_13 = Py_None;
            tmp_kw_call_value_10_11 = Py_None;
            tmp_kw_call_value_11_11 = Py_None;
            tmp_kw_call_value_12_11 = Py_False;
            tmp_kw_call_value_13_11 = Py_None;
            tmp_kw_call_value_14_11 = Py_None;
            tmp_kw_call_value_15_11 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_11 == NULL)) {
                tmp_kw_call_value_15_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_29);
                Py_DECREF(tmp_kw_call_value_8_13);

                exception_lineno = 223;

                goto list_build_exception_4;
            }
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_29);
                Py_DECREF(tmp_kw_call_value_8_13);

                exception_lineno = 223;

                goto list_build_exception_4;
            }
            tmp_kw_call_value_16_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[31]);
            if (tmp_kw_call_value_16_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_29);
                Py_DECREF(tmp_kw_call_value_8_13);

                exception_lineno = 223;

                goto list_build_exception_4;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 217;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_27, tmp_kw_call_value_1_27, tmp_kw_call_value_2_27, tmp_kw_call_value_3_27, tmp_kw_call_value_4_27, tmp_kw_call_value_5_27, tmp_kw_call_value_6_15, tmp_kw_call_value_7_13, tmp_kw_call_value_8_13, tmp_kw_call_value_9_13, tmp_kw_call_value_10_11, tmp_kw_call_value_11_11, tmp_kw_call_value_12_11, tmp_kw_call_value_13_11, tmp_kw_call_value_14_11, tmp_kw_call_value_15_11, tmp_kw_call_value_16_11};

                tmp_list_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_29, kw_values, mod_consts[67]);
            }

            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_kw_call_value_8_13);
            Py_DECREF(tmp_kw_call_value_16_11);
            if (tmp_list_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_12, 2, tmp_list_element_6);
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto list_build_exception_4;
            }
            tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[61]);
            if (tmp_called_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto list_build_exception_4;
            }
            tmp_kw_call_value_0_28 = mod_consts[94];
            tmp_kw_call_value_1_28 = mod_consts[95];
            tmp_kw_call_value_2_28 = mod_consts[46];
            tmp_kw_call_value_3_28 = mod_consts[48];
            tmp_kw_call_value_4_28 = mod_consts[96];
            tmp_kw_call_value_5_28 = mod_consts[64];
            tmp_kw_call_value_6_16 = mod_consts[46];
            tmp_kw_call_value_7_14 = Py_False;
            tmp_kw_call_value_8_14 = PyList_New(0);
            tmp_kw_call_value_9_14 = Py_None;
            tmp_kw_call_value_10_12 = Py_None;
            tmp_kw_call_value_11_12 = Py_None;
            tmp_kw_call_value_12_12 = Py_False;
            tmp_kw_call_value_13_12 = Py_None;
            tmp_kw_call_value_14_12 = Py_None;
            tmp_kw_call_value_15_12 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_12 == NULL)) {
                tmp_kw_call_value_15_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_30);
                Py_DECREF(tmp_kw_call_value_8_14);

                exception_lineno = 230;

                goto list_build_exception_4;
            }
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_30);
                Py_DECREF(tmp_kw_call_value_8_14);

                exception_lineno = 230;

                goto list_build_exception_4;
            }
            tmp_kw_call_value_16_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[31]);
            if (tmp_kw_call_value_16_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_30);
                Py_DECREF(tmp_kw_call_value_8_14);

                exception_lineno = 230;

                goto list_build_exception_4;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 224;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_28, tmp_kw_call_value_1_28, tmp_kw_call_value_2_28, tmp_kw_call_value_3_28, tmp_kw_call_value_4_28, tmp_kw_call_value_5_28, tmp_kw_call_value_6_16, tmp_kw_call_value_7_14, tmp_kw_call_value_8_14, tmp_kw_call_value_9_14, tmp_kw_call_value_10_12, tmp_kw_call_value_11_12, tmp_kw_call_value_12_12, tmp_kw_call_value_13_12, tmp_kw_call_value_14_12, tmp_kw_call_value_15_12, tmp_kw_call_value_16_12};

                tmp_list_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_30, kw_values, mod_consts[67]);
            }

            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_kw_call_value_8_14);
            Py_DECREF(tmp_kw_call_value_16_12);
            if (tmp_list_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_12, 3, tmp_list_element_6);
            tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_60 == NULL)) {
                tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto list_build_exception_4;
            }
            tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[61]);
            if (tmp_called_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto list_build_exception_4;
            }
            tmp_kw_call_value_0_29 = mod_consts[97];
            tmp_kw_call_value_1_29 = mod_consts[98];
            tmp_kw_call_value_2_29 = mod_consts[48];
            tmp_kw_call_value_3_29 = mod_consts[50];
            tmp_kw_call_value_4_29 = mod_consts[72];
            tmp_kw_call_value_5_29 = mod_consts[73];
            tmp_kw_call_value_6_17 = mod_consts[42];
            tmp_kw_call_value_7_15 = Py_False;
            tmp_kw_call_value_8_15 = Py_None;
            tmp_kw_call_value_9_15 = Py_None;
            tmp_kw_call_value_10_13 = Py_None;
            tmp_kw_call_value_11_13 = Py_None;
            tmp_kw_call_value_12_13 = Py_False;
            tmp_kw_call_value_13_13 = Py_None;
            tmp_kw_call_value_14_13 = Py_None;
            tmp_kw_call_value_15_13 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_13 == NULL)) {
                tmp_kw_call_value_15_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_31);

                exception_lineno = 237;

                goto list_build_exception_4;
            }
            tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_61 == NULL)) {
                tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_31);

                exception_lineno = 237;

                goto list_build_exception_4;
            }
            tmp_kw_call_value_16_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[31]);
            if (tmp_kw_call_value_16_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_31);

                exception_lineno = 237;

                goto list_build_exception_4;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 231;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_29, tmp_kw_call_value_1_29, tmp_kw_call_value_2_29, tmp_kw_call_value_3_29, tmp_kw_call_value_4_29, tmp_kw_call_value_5_29, tmp_kw_call_value_6_17, tmp_kw_call_value_7_15, tmp_kw_call_value_8_15, tmp_kw_call_value_9_15, tmp_kw_call_value_10_13, tmp_kw_call_value_11_13, tmp_kw_call_value_12_13, tmp_kw_call_value_13_13, tmp_kw_call_value_14_13, tmp_kw_call_value_15_13, tmp_kw_call_value_16_13};

                tmp_list_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_31, kw_values, mod_consts[67]);
            }

            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_kw_call_value_16_13);
            if (tmp_list_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_12, 4, tmp_list_element_6);
        }
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_4:;
        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_kw_call_value_5_24);
        Py_DECREF(tmp_kw_call_value_6_12);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        tmp_kw_call_value_7_16 = PyList_New(0);
        tmp_kw_call_value_8_16 = PyList_New(0);
        tmp_kw_call_value_9_16 = PyList_New(0);
        tmp_kw_call_value_10_14 = Py_None;
        tmp_kw_call_value_11_14 = Py_False;
        tmp_kw_call_value_12_14 = mod_consts[29];
        tmp_kw_call_value_13_14 = PyList_New(0);
        tmp_kw_call_value_14_14 = PyList_New(0);
        tmp_kw_call_value_15_14 = mod_consts[99];
        tmp_kw_call_value_16_14 = mod_consts[100];
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 195;
        {
            PyObject *kw_values[17] = {tmp_kw_call_value_0_24, tmp_kw_call_value_1_24, tmp_kw_call_value_2_24, tmp_kw_call_value_3_24, tmp_kw_call_value_4_24, tmp_kw_call_value_5_24, tmp_kw_call_value_6_12, tmp_kw_call_value_7_16, tmp_kw_call_value_8_16, tmp_kw_call_value_9_16, tmp_kw_call_value_10_14, tmp_kw_call_value_11_14, tmp_kw_call_value_12_14, tmp_kw_call_value_13_14, tmp_kw_call_value_14_14, tmp_kw_call_value_15_14, tmp_kw_call_value_16_14};

            tmp_assign_source_14 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_26, kw_values, mod_consts[85]);
        }

        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_kw_call_value_5_24);
        Py_DECREF(tmp_kw_call_value_6_12);
        Py_DECREF(tmp_kw_call_value_7_16);
        Py_DECREF(tmp_kw_call_value_8_16);
        Py_DECREF(tmp_kw_call_value_9_16);
        Py_DECREF(tmp_kw_call_value_13_14);
        Py_DECREF(tmp_kw_call_value_14_14);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_kw_call_value_0_30;
        PyObject *tmp_kw_call_value_1_30;
        PyObject *tmp_kw_call_value_2_30;
        PyObject *tmp_kw_call_value_3_30;
        PyObject *tmp_kw_call_value_4_30;
        PyObject *tmp_kw_call_value_5_30;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_kw_call_value_6_18;
        PyObject *tmp_list_element_7;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_kw_call_value_0_31;
        PyObject *tmp_kw_call_value_1_31;
        PyObject *tmp_kw_call_value_2_31;
        PyObject *tmp_kw_call_value_3_31;
        PyObject *tmp_kw_call_value_4_31;
        PyObject *tmp_kw_call_value_5_31;
        PyObject *tmp_kw_call_value_6_19;
        PyObject *tmp_kw_call_value_7_17;
        PyObject *tmp_kw_call_value_8_17;
        PyObject *tmp_bytes_arg_value_3;
        PyObject *tmp_encoding_value_3;
        PyObject *tmp_kw_call_value_9_17;
        PyObject *tmp_kw_call_value_10_15;
        PyObject *tmp_kw_call_value_11_15;
        PyObject *tmp_kw_call_value_12_15;
        PyObject *tmp_kw_call_value_13_15;
        PyObject *tmp_kw_call_value_14_15;
        PyObject *tmp_kw_call_value_15_15;
        PyObject *tmp_kw_call_value_16_15;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_kw_call_value_7_24;
        PyObject *tmp_kw_call_value_8_24;
        PyObject *tmp_kw_call_value_9_24;
        PyObject *tmp_list_element_8;
        PyObject *tmp_kw_call_value_10_22;
        PyObject *tmp_kw_call_value_11_22;
        PyObject *tmp_kw_call_value_12_22;
        PyObject *tmp_kw_call_value_13_22;
        PyObject *tmp_kw_call_value_14_22;
        PyObject *tmp_kw_call_value_15_22;
        PyObject *tmp_kw_call_value_16_22;
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[58]);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_30 = mod_consts[102];
        tmp_kw_call_value_1_30 = mod_consts[103];
        tmp_kw_call_value_2_30 = Py_None;
        tmp_kw_call_value_3_30 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_kw_call_value_3_30 == NULL)) {
            tmp_kw_call_value_3_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_kw_call_value_3_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_4_30 = Py_None;
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_5_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[31]);
        if (tmp_kw_call_value_5_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_kw_call_value_5_30);

            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[61]);
        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_kw_call_value_5_30);

            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_31 = mod_consts[62];
        tmp_kw_call_value_1_31 = mod_consts[104];
        tmp_kw_call_value_2_31 = mod_consts[9];
        tmp_kw_call_value_3_31 = mod_consts[42];
        tmp_kw_call_value_4_31 = mod_consts[64];
        tmp_kw_call_value_5_31 = mod_consts[64];
        tmp_kw_call_value_6_19 = mod_consts[42];
        tmp_kw_call_value_7_17 = Py_False;
        tmp_bytes_arg_value_3 = mod_consts[65];
        tmp_encoding_value_3 = mod_consts[66];
        tmp_kw_call_value_8_17 = BYTES_DECODE2(tmp_bytes_arg_value_3, tmp_encoding_value_3);
        if (tmp_kw_call_value_8_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_kw_call_value_5_30);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_17 = Py_None;
        tmp_kw_call_value_10_15 = Py_None;
        tmp_kw_call_value_11_15 = Py_None;
        tmp_kw_call_value_12_15 = Py_False;
        tmp_kw_call_value_13_15 = Py_None;
        tmp_kw_call_value_14_15 = Py_None;
        tmp_kw_call_value_15_15 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_kw_call_value_15_15 == NULL)) {
            tmp_kw_call_value_15_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_kw_call_value_15_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_kw_call_value_5_30);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_kw_call_value_8_17);

            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_kw_call_value_5_30);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_kw_call_value_8_17);

            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_16_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[31]);
        if (tmp_kw_call_value_16_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_kw_call_value_5_30);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_kw_call_value_8_17);

            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 263;
        {
            PyObject *kw_values[17] = {tmp_kw_call_value_0_31, tmp_kw_call_value_1_31, tmp_kw_call_value_2_31, tmp_kw_call_value_3_31, tmp_kw_call_value_4_31, tmp_kw_call_value_5_31, tmp_kw_call_value_6_19, tmp_kw_call_value_7_17, tmp_kw_call_value_8_17, tmp_kw_call_value_9_17, tmp_kw_call_value_10_15, tmp_kw_call_value_11_15, tmp_kw_call_value_12_15, tmp_kw_call_value_13_15, tmp_kw_call_value_14_15, tmp_kw_call_value_15_15, tmp_kw_call_value_16_15};

            tmp_list_element_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_33, kw_values, mod_consts[67]);
        }

        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_kw_call_value_8_17);
        Py_DECREF(tmp_kw_call_value_16_15);
        if (tmp_list_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_kw_call_value_5_30);

            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_6_18 = PyList_New(7);
        {
            PyObject *tmp_called_value_34;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_kw_call_value_0_32;
            PyObject *tmp_kw_call_value_1_32;
            PyObject *tmp_kw_call_value_2_32;
            PyObject *tmp_kw_call_value_3_32;
            PyObject *tmp_kw_call_value_4_32;
            PyObject *tmp_kw_call_value_5_32;
            PyObject *tmp_kw_call_value_6_20;
            PyObject *tmp_kw_call_value_7_18;
            PyObject *tmp_kw_call_value_8_18;
            PyObject *tmp_kw_call_value_9_18;
            PyObject *tmp_kw_call_value_10_16;
            PyObject *tmp_kw_call_value_11_16;
            PyObject *tmp_kw_call_value_12_16;
            PyObject *tmp_kw_call_value_13_16;
            PyObject *tmp_kw_call_value_14_16;
            PyObject *tmp_kw_call_value_15_16;
            PyObject *tmp_kw_call_value_16_16;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_called_value_35;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_kw_call_value_0_33;
            PyObject *tmp_kw_call_value_1_33;
            PyObject *tmp_kw_call_value_2_33;
            PyObject *tmp_kw_call_value_3_33;
            PyObject *tmp_kw_call_value_4_33;
            PyObject *tmp_kw_call_value_5_33;
            PyObject *tmp_kw_call_value_6_21;
            PyObject *tmp_kw_call_value_7_19;
            PyObject *tmp_kw_call_value_8_19;
            PyObject *tmp_kw_call_value_9_19;
            PyObject *tmp_kw_call_value_10_17;
            PyObject *tmp_kw_call_value_11_17;
            PyObject *tmp_kw_call_value_12_17;
            PyObject *tmp_kw_call_value_13_17;
            PyObject *tmp_kw_call_value_14_17;
            PyObject *tmp_kw_call_value_15_17;
            PyObject *tmp_kw_call_value_16_17;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_called_value_36;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_kw_call_value_0_34;
            PyObject *tmp_kw_call_value_1_34;
            PyObject *tmp_kw_call_value_2_34;
            PyObject *tmp_kw_call_value_3_34;
            PyObject *tmp_kw_call_value_4_34;
            PyObject *tmp_kw_call_value_5_34;
            PyObject *tmp_kw_call_value_6_22;
            PyObject *tmp_kw_call_value_7_20;
            PyObject *tmp_kw_call_value_8_20;
            PyObject *tmp_kw_call_value_9_20;
            PyObject *tmp_kw_call_value_10_18;
            PyObject *tmp_kw_call_value_11_18;
            PyObject *tmp_kw_call_value_12_18;
            PyObject *tmp_kw_call_value_13_18;
            PyObject *tmp_kw_call_value_14_18;
            PyObject *tmp_kw_call_value_15_18;
            PyObject *tmp_kw_call_value_16_18;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_called_value_37;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_kw_call_value_0_35;
            PyObject *tmp_kw_call_value_1_35;
            PyObject *tmp_kw_call_value_2_35;
            PyObject *tmp_kw_call_value_3_35;
            PyObject *tmp_kw_call_value_4_35;
            PyObject *tmp_kw_call_value_5_35;
            PyObject *tmp_kw_call_value_6_23;
            PyObject *tmp_kw_call_value_7_21;
            PyObject *tmp_kw_call_value_8_21;
            PyObject *tmp_kw_call_value_9_21;
            PyObject *tmp_kw_call_value_10_19;
            PyObject *tmp_kw_call_value_11_19;
            PyObject *tmp_kw_call_value_12_19;
            PyObject *tmp_kw_call_value_13_19;
            PyObject *tmp_kw_call_value_14_19;
            PyObject *tmp_kw_call_value_15_19;
            PyObject *tmp_kw_call_value_16_19;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_called_value_38;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_kw_call_value_0_36;
            PyObject *tmp_kw_call_value_1_36;
            PyObject *tmp_kw_call_value_2_36;
            PyObject *tmp_kw_call_value_3_36;
            PyObject *tmp_kw_call_value_4_36;
            PyObject *tmp_kw_call_value_5_36;
            PyObject *tmp_kw_call_value_6_24;
            PyObject *tmp_kw_call_value_7_22;
            PyObject *tmp_kw_call_value_8_22;
            PyObject *tmp_kw_call_value_9_22;
            PyObject *tmp_kw_call_value_10_20;
            PyObject *tmp_kw_call_value_11_20;
            PyObject *tmp_kw_call_value_12_20;
            PyObject *tmp_kw_call_value_13_20;
            PyObject *tmp_kw_call_value_14_20;
            PyObject *tmp_kw_call_value_15_20;
            PyObject *tmp_kw_call_value_16_20;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_called_value_39;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_kw_call_value_0_37;
            PyObject *tmp_kw_call_value_1_37;
            PyObject *tmp_kw_call_value_2_37;
            PyObject *tmp_kw_call_value_3_37;
            PyObject *tmp_kw_call_value_4_37;
            PyObject *tmp_kw_call_value_5_37;
            PyObject *tmp_kw_call_value_6_25;
            PyObject *tmp_kw_call_value_7_23;
            PyObject *tmp_kw_call_value_8_23;
            PyObject *tmp_kw_call_value_9_23;
            PyObject *tmp_kw_call_value_10_21;
            PyObject *tmp_kw_call_value_11_21;
            PyObject *tmp_kw_call_value_12_21;
            PyObject *tmp_kw_call_value_13_21;
            PyObject *tmp_kw_call_value_14_21;
            PyObject *tmp_kw_call_value_15_21;
            PyObject *tmp_kw_call_value_16_21;
            PyObject *tmp_expression_value_77;
            PyList_SET_ITEM(tmp_kw_call_value_6_18, 0, tmp_list_element_7);
            tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_66 == NULL)) {
                tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;

                goto list_build_exception_5;
            }
            tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[61]);
            if (tmp_called_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;

                goto list_build_exception_5;
            }
            tmp_kw_call_value_0_32 = mod_consts[68];
            tmp_kw_call_value_1_32 = mod_consts[105];
            tmp_kw_call_value_2_32 = mod_consts[42];
            tmp_kw_call_value_3_32 = mod_consts[44];
            tmp_kw_call_value_4_32 = mod_consts[50];
            tmp_kw_call_value_5_32 = mod_consts[42];
            tmp_kw_call_value_6_20 = mod_consts[42];
            tmp_kw_call_value_7_18 = Py_False;
            tmp_kw_call_value_8_18 = mod_consts[9];
            tmp_kw_call_value_9_18 = Py_None;
            tmp_kw_call_value_10_16 = Py_None;
            tmp_kw_call_value_11_16 = Py_None;
            tmp_kw_call_value_12_16 = Py_False;
            tmp_kw_call_value_13_16 = Py_None;
            tmp_kw_call_value_14_16 = Py_None;
            tmp_kw_call_value_15_16 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_16 == NULL)) {
                tmp_kw_call_value_15_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_34);

                exception_lineno = 276;

                goto list_build_exception_5;
            }
            tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_67 == NULL)) {
                tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_34);

                exception_lineno = 276;

                goto list_build_exception_5;
            }
            tmp_kw_call_value_16_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[31]);
            if (tmp_kw_call_value_16_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_34);

                exception_lineno = 276;

                goto list_build_exception_5;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 270;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_32, tmp_kw_call_value_1_32, tmp_kw_call_value_2_32, tmp_kw_call_value_3_32, tmp_kw_call_value_4_32, tmp_kw_call_value_5_32, tmp_kw_call_value_6_20, tmp_kw_call_value_7_18, tmp_kw_call_value_8_18, tmp_kw_call_value_9_18, tmp_kw_call_value_10_16, tmp_kw_call_value_11_16, tmp_kw_call_value_12_16, tmp_kw_call_value_13_16, tmp_kw_call_value_14_16, tmp_kw_call_value_15_16, tmp_kw_call_value_16_16};

                tmp_list_element_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_34, kw_values, mod_consts[67]);
            }

            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_kw_call_value_16_16);
            if (tmp_list_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_18, 1, tmp_list_element_7);
            tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_68 == NULL)) {
                tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto list_build_exception_5;
            }
            tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[61]);
            if (tmp_called_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto list_build_exception_5;
            }
            tmp_kw_call_value_0_33 = mod_consts[106];
            tmp_kw_call_value_1_33 = mod_consts[107];
            tmp_kw_call_value_2_33 = mod_consts[44];
            tmp_kw_call_value_3_33 = mod_consts[46];
            tmp_kw_call_value_4_33 = mod_consts[72];
            tmp_kw_call_value_5_33 = mod_consts[73];
            tmp_kw_call_value_6_21 = mod_consts[42];
            tmp_kw_call_value_7_19 = Py_False;
            tmp_kw_call_value_8_19 = Py_None;
            tmp_kw_call_value_9_19 = Py_None;
            tmp_kw_call_value_10_17 = Py_None;
            tmp_kw_call_value_11_17 = Py_None;
            tmp_kw_call_value_12_17 = Py_False;
            tmp_kw_call_value_13_17 = Py_None;
            tmp_kw_call_value_14_17 = Py_None;
            tmp_kw_call_value_15_17 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_17 == NULL)) {
                tmp_kw_call_value_15_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_35);

                exception_lineno = 283;

                goto list_build_exception_5;
            }
            tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_69 == NULL)) {
                tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_35);

                exception_lineno = 283;

                goto list_build_exception_5;
            }
            tmp_kw_call_value_16_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[31]);
            if (tmp_kw_call_value_16_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_35);

                exception_lineno = 283;

                goto list_build_exception_5;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 277;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_33, tmp_kw_call_value_1_33, tmp_kw_call_value_2_33, tmp_kw_call_value_3_33, tmp_kw_call_value_4_33, tmp_kw_call_value_5_33, tmp_kw_call_value_6_21, tmp_kw_call_value_7_19, tmp_kw_call_value_8_19, tmp_kw_call_value_9_19, tmp_kw_call_value_10_17, tmp_kw_call_value_11_17, tmp_kw_call_value_12_17, tmp_kw_call_value_13_17, tmp_kw_call_value_14_17, tmp_kw_call_value_15_17, tmp_kw_call_value_16_17};

                tmp_list_element_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_35, kw_values, mod_consts[67]);
            }

            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_kw_call_value_16_17);
            if (tmp_list_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_18, 2, tmp_list_element_7);
            tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_70 == NULL)) {
                tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto list_build_exception_5;
            }
            tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[61]);
            if (tmp_called_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto list_build_exception_5;
            }
            tmp_kw_call_value_0_34 = mod_consts[108];
            tmp_kw_call_value_1_34 = mod_consts[109];
            tmp_kw_call_value_2_34 = mod_consts[46];
            tmp_kw_call_value_3_34 = mod_consts[48];
            tmp_kw_call_value_4_34 = mod_consts[72];
            tmp_kw_call_value_5_34 = mod_consts[73];
            tmp_kw_call_value_6_22 = mod_consts[42];
            tmp_kw_call_value_7_20 = Py_False;
            tmp_kw_call_value_8_20 = Py_None;
            tmp_kw_call_value_9_20 = Py_None;
            tmp_kw_call_value_10_18 = Py_None;
            tmp_kw_call_value_11_18 = Py_None;
            tmp_kw_call_value_12_18 = Py_False;
            tmp_kw_call_value_13_18 = Py_None;
            tmp_kw_call_value_14_18 = Py_None;
            tmp_kw_call_value_15_18 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_18 == NULL)) {
                tmp_kw_call_value_15_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_36);

                exception_lineno = 290;

                goto list_build_exception_5;
            }
            tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_71 == NULL)) {
                tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_36);

                exception_lineno = 290;

                goto list_build_exception_5;
            }
            tmp_kw_call_value_16_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[31]);
            if (tmp_kw_call_value_16_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_36);

                exception_lineno = 290;

                goto list_build_exception_5;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 284;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_34, tmp_kw_call_value_1_34, tmp_kw_call_value_2_34, tmp_kw_call_value_3_34, tmp_kw_call_value_4_34, tmp_kw_call_value_5_34, tmp_kw_call_value_6_22, tmp_kw_call_value_7_20, tmp_kw_call_value_8_20, tmp_kw_call_value_9_20, tmp_kw_call_value_10_18, tmp_kw_call_value_11_18, tmp_kw_call_value_12_18, tmp_kw_call_value_13_18, tmp_kw_call_value_14_18, tmp_kw_call_value_15_18, tmp_kw_call_value_16_18};

                tmp_list_element_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_36, kw_values, mod_consts[67]);
            }

            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_kw_call_value_16_18);
            if (tmp_list_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_18, 3, tmp_list_element_7);
            tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_72 == NULL)) {
                tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto list_build_exception_5;
            }
            tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[61]);
            if (tmp_called_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto list_build_exception_5;
            }
            tmp_kw_call_value_0_35 = mod_consts[110];
            tmp_kw_call_value_1_35 = mod_consts[111];
            tmp_kw_call_value_2_35 = mod_consts[48];
            tmp_kw_call_value_3_35 = mod_consts[50];
            tmp_kw_call_value_4_35 = mod_consts[72];
            tmp_kw_call_value_5_35 = mod_consts[73];
            tmp_kw_call_value_6_23 = mod_consts[42];
            tmp_kw_call_value_7_21 = Py_False;
            tmp_kw_call_value_8_21 = Py_None;
            tmp_kw_call_value_9_21 = Py_None;
            tmp_kw_call_value_10_19 = Py_None;
            tmp_kw_call_value_11_19 = Py_None;
            tmp_kw_call_value_12_19 = Py_False;
            tmp_kw_call_value_13_19 = Py_None;
            tmp_kw_call_value_14_19 = Py_None;
            tmp_kw_call_value_15_19 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_19 == NULL)) {
                tmp_kw_call_value_15_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_37);

                exception_lineno = 297;

                goto list_build_exception_5;
            }
            tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_73 == NULL)) {
                tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_37);

                exception_lineno = 297;

                goto list_build_exception_5;
            }
            tmp_kw_call_value_16_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[31]);
            if (tmp_kw_call_value_16_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_37);

                exception_lineno = 297;

                goto list_build_exception_5;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 291;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_35, tmp_kw_call_value_1_35, tmp_kw_call_value_2_35, tmp_kw_call_value_3_35, tmp_kw_call_value_4_35, tmp_kw_call_value_5_35, tmp_kw_call_value_6_23, tmp_kw_call_value_7_21, tmp_kw_call_value_8_21, tmp_kw_call_value_9_21, tmp_kw_call_value_10_19, tmp_kw_call_value_11_19, tmp_kw_call_value_12_19, tmp_kw_call_value_13_19, tmp_kw_call_value_14_19, tmp_kw_call_value_15_19, tmp_kw_call_value_16_19};

                tmp_list_element_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_37, kw_values, mod_consts[67]);
            }

            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_kw_call_value_16_19);
            if (tmp_list_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_18, 4, tmp_list_element_7);
            tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_74 == NULL)) {
                tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;

                goto list_build_exception_5;
            }
            tmp_called_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[61]);
            if (tmp_called_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;

                goto list_build_exception_5;
            }
            tmp_kw_call_value_0_36 = mod_consts[112];
            tmp_kw_call_value_1_36 = mod_consts[113];
            tmp_kw_call_value_2_36 = mod_consts[50];
            tmp_kw_call_value_3_36 = mod_consts[80];
            tmp_kw_call_value_4_36 = mod_consts[72];
            tmp_kw_call_value_5_36 = mod_consts[73];
            tmp_kw_call_value_6_24 = mod_consts[42];
            tmp_kw_call_value_7_22 = Py_False;
            tmp_kw_call_value_8_22 = Py_None;
            tmp_kw_call_value_9_22 = Py_None;
            tmp_kw_call_value_10_20 = Py_None;
            tmp_kw_call_value_11_20 = Py_None;
            tmp_kw_call_value_12_20 = Py_False;
            tmp_kw_call_value_13_20 = Py_None;
            tmp_kw_call_value_14_20 = Py_None;
            tmp_kw_call_value_15_20 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_20 == NULL)) {
                tmp_kw_call_value_15_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_38);

                exception_lineno = 304;

                goto list_build_exception_5;
            }
            tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_75 == NULL)) {
                tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_38);

                exception_lineno = 304;

                goto list_build_exception_5;
            }
            tmp_kw_call_value_16_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[31]);
            if (tmp_kw_call_value_16_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_38);

                exception_lineno = 304;

                goto list_build_exception_5;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 298;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_36, tmp_kw_call_value_1_36, tmp_kw_call_value_2_36, tmp_kw_call_value_3_36, tmp_kw_call_value_4_36, tmp_kw_call_value_5_36, tmp_kw_call_value_6_24, tmp_kw_call_value_7_22, tmp_kw_call_value_8_22, tmp_kw_call_value_9_22, tmp_kw_call_value_10_20, tmp_kw_call_value_11_20, tmp_kw_call_value_12_20, tmp_kw_call_value_13_20, tmp_kw_call_value_14_20, tmp_kw_call_value_15_20, tmp_kw_call_value_16_20};

                tmp_list_element_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_38, kw_values, mod_consts[67]);
            }

            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_kw_call_value_16_20);
            if (tmp_list_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_18, 5, tmp_list_element_7);
            tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_76 == NULL)) {
                tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;

                goto list_build_exception_5;
            }
            tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[61]);
            if (tmp_called_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;

                goto list_build_exception_5;
            }
            tmp_kw_call_value_0_37 = mod_consts[114];
            tmp_kw_call_value_1_37 = mod_consts[115];
            tmp_kw_call_value_2_37 = mod_consts[80];
            tmp_kw_call_value_3_37 = mod_consts[83];
            tmp_kw_call_value_4_37 = mod_consts[72];
            tmp_kw_call_value_5_37 = mod_consts[73];
            tmp_kw_call_value_6_25 = mod_consts[42];
            tmp_kw_call_value_7_23 = Py_False;
            tmp_kw_call_value_8_23 = Py_None;
            tmp_kw_call_value_9_23 = Py_None;
            tmp_kw_call_value_10_21 = Py_None;
            tmp_kw_call_value_11_21 = Py_None;
            tmp_kw_call_value_12_21 = Py_False;
            tmp_kw_call_value_13_21 = Py_None;
            tmp_kw_call_value_14_21 = Py_None;
            tmp_kw_call_value_15_21 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_kw_call_value_15_21 == NULL)) {
                tmp_kw_call_value_15_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_kw_call_value_15_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_39);

                exception_lineno = 311;

                goto list_build_exception_5;
            }
            tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_77 == NULL)) {
                tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_39);

                exception_lineno = 311;

                goto list_build_exception_5;
            }
            tmp_kw_call_value_16_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[31]);
            if (tmp_kw_call_value_16_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_39);

                exception_lineno = 311;

                goto list_build_exception_5;
            }
            frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 305;
            {
                PyObject *kw_values[17] = {tmp_kw_call_value_0_37, tmp_kw_call_value_1_37, tmp_kw_call_value_2_37, tmp_kw_call_value_3_37, tmp_kw_call_value_4_37, tmp_kw_call_value_5_37, tmp_kw_call_value_6_25, tmp_kw_call_value_7_23, tmp_kw_call_value_8_23, tmp_kw_call_value_9_23, tmp_kw_call_value_10_21, tmp_kw_call_value_11_21, tmp_kw_call_value_12_21, tmp_kw_call_value_13_21, tmp_kw_call_value_14_21, tmp_kw_call_value_15_21, tmp_kw_call_value_16_21};

                tmp_list_element_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_39, kw_values, mod_consts[67]);
            }

            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_kw_call_value_16_21);
            if (tmp_list_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_kw_call_value_6_18, 6, tmp_list_element_7);
        }
        goto list_build_noexception_5;
        // Exception handling pass through code for list_build:
        list_build_exception_5:;
        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_kw_call_value_5_30);
        Py_DECREF(tmp_kw_call_value_6_18);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_5:;
        tmp_kw_call_value_7_24 = PyList_New(0);
        tmp_kw_call_value_8_24 = PyList_New(0);
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_kw_call_value_5_30);
            Py_DECREF(tmp_kw_call_value_6_18);
            Py_DECREF(tmp_kw_call_value_7_24);
            Py_DECREF(tmp_kw_call_value_8_24);

            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_9_24 = PyList_New(1);
        PyList_SET_ITEM0(tmp_kw_call_value_9_24, 0, tmp_list_element_8);
        tmp_kw_call_value_10_22 = Py_None;
        tmp_kw_call_value_11_22 = Py_False;
        tmp_kw_call_value_12_22 = mod_consts[29];
        tmp_kw_call_value_13_22 = PyList_New(0);
        tmp_kw_call_value_14_22 = PyList_New(0);
        tmp_kw_call_value_15_22 = mod_consts[116];
        tmp_kw_call_value_16_22 = mod_consts[117];
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 255;
        {
            PyObject *kw_values[17] = {tmp_kw_call_value_0_30, tmp_kw_call_value_1_30, tmp_kw_call_value_2_30, tmp_kw_call_value_3_30, tmp_kw_call_value_4_30, tmp_kw_call_value_5_30, tmp_kw_call_value_6_18, tmp_kw_call_value_7_24, tmp_kw_call_value_8_24, tmp_kw_call_value_9_24, tmp_kw_call_value_10_22, tmp_kw_call_value_11_22, tmp_kw_call_value_12_22, tmp_kw_call_value_13_22, tmp_kw_call_value_14_22, tmp_kw_call_value_15_22, tmp_kw_call_value_16_22};

            tmp_assign_source_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_32, kw_values, mod_consts[85]);
        }

        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_kw_call_value_5_30);
        Py_DECREF(tmp_kw_call_value_6_18);
        Py_DECREF(tmp_kw_call_value_7_24);
        Py_DECREF(tmp_kw_call_value_8_24);
        Py_DECREF(tmp_kw_call_value_9_24);
        Py_DECREF(tmp_kw_call_value_13_22);
        Py_DECREF(tmp_kw_call_value_14_22);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_78 == NULL)) {
            tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[119]);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_80 == NULL)) {
            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_expression_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[120]);
        if (tmp_expression_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[70];
        tmp_assattr_target_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_79, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_79);
        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[121], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[122]);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_expression_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[120]);
        if (tmp_expression_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[74];
        tmp_assattr_target_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_82, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_82);
        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[121], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_target_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_subscript_value_3;
        tmp_assattr_value_5 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_assattr_value_5 == NULL)) {
            tmp_assattr_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_85 == NULL)) {
            tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_expression_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[120]);
        if (tmp_expression_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[76];
        tmp_assattr_target_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_84, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_84);
        if (tmp_assattr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[121], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_target_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_subscript_value_4;
        tmp_assattr_value_6 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_assattr_value_6 == NULL)) {
            tmp_assattr_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        if (tmp_assattr_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_87 == NULL)) {
            tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_expression_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[120]);
        if (tmp_expression_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = mod_consts[78];
        tmp_assattr_target_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_86, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_86);
        if (tmp_assattr_target_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[121], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_target_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_subscript_value_5;
        tmp_assattr_value_7 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_7 == NULL)) {
            tmp_assattr_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_assattr_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_89 == NULL)) {
            tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_expression_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[120]);
        if (tmp_expression_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = mod_consts[81];
        tmp_assattr_target_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_88, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_88);
        if (tmp_assattr_target_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[121], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_target_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_value_8 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_assattr_value_8 == NULL)) {
            tmp_assattr_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_assattr_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_8 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_assattr_target_8 == NULL)) {
            tmp_assattr_target_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_assattr_target_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[123], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_subscript_value_6;
        tmp_assattr_value_9 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_assattr_value_9 == NULL)) {
            tmp_assattr_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_assattr_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_expression_value_91 == NULL)) {
            tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        if (tmp_expression_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_90 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[120]);
        if (tmp_expression_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = mod_consts[97];
        tmp_assattr_target_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_90, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_90);
        if (tmp_assattr_target_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[121], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_target_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_assattr_target_10;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_subscript_value_7;
        tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_92 == NULL)) {
            tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[119]);
        if (tmp_assattr_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_expression_value_94 == NULL)) {
            tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_expression_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_10);

            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_93 = LOOKUP_ATTRIBUTE(tmp_expression_value_94, mod_consts[120]);
        if (tmp_expression_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_10);

            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_7 = mod_consts[106];
        tmp_assattr_target_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_93, tmp_subscript_value_7);
        Py_DECREF(tmp_expression_value_93);
        if (tmp_assattr_target_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_10);

            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[121], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_target_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_assattr_target_11;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_subscript_value_8;
        tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_value_95 == NULL)) {
            tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[122]);
        if (tmp_assattr_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_expression_value_97 == NULL)) {
            tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_expression_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_11);

            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_96 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[120]);
        if (tmp_expression_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_11);

            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_8 = mod_consts[108];
        tmp_assattr_target_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_96, tmp_subscript_value_8);
        Py_DECREF(tmp_expression_value_96);
        if (tmp_assattr_target_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_11);

            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[121], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_target_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_subscript_value_9;
        tmp_assattr_value_12 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_assattr_value_12 == NULL)) {
            tmp_assattr_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_assattr_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_expression_value_99 == NULL)) {
            tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_expression_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_98 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[120]);
        if (tmp_expression_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_9 = mod_consts[110];
        tmp_assattr_target_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_98, tmp_subscript_value_9);
        Py_DECREF(tmp_expression_value_98);
        if (tmp_assattr_target_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[121], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_target_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_subscript_value_10;
        tmp_assattr_value_13 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_assattr_value_13 == NULL)) {
            tmp_assattr_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        if (tmp_assattr_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_expression_value_101 == NULL)) {
            tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_expression_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_100 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[120]);
        if (tmp_expression_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_10 = mod_consts[112];
        tmp_assattr_target_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_100, tmp_subscript_value_10);
        Py_DECREF(tmp_expression_value_100);
        if (tmp_assattr_target_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[121], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_target_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_subscript_value_11;
        tmp_assattr_value_14 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_14 == NULL)) {
            tmp_assattr_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_assattr_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_expression_value_103 == NULL)) {
            tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_expression_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_102 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[120]);
        if (tmp_expression_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_11 = mod_consts[114];
        tmp_assattr_target_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_102, tmp_subscript_value_11);
        Py_DECREF(tmp_expression_value_102);
        if (tmp_assattr_target_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[121], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_target_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        tmp_assattr_value_15 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_assattr_value_15 == NULL)) {
            tmp_assattr_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_assattr_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_15 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_assattr_target_15 == NULL)) {
            tmp_assattr_target_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_assattr_target_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[123], tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_104;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_ass_subvalue_1 == NULL)) {
            tmp_ass_subvalue_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_104 == NULL)) {
            tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[124]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[59];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_ass_subvalue_2 == NULL)) {
            tmp_ass_subvalue_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_105 == NULL)) {
            tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[124]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[87];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_ass_subscript_3;
        tmp_ass_subvalue_3 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_ass_subvalue_3 == NULL)) {
            tmp_ass_subvalue_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_expression_value_106 == NULL)) {
            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_expression_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[124]);
        if (tmp_ass_subscribed_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_3 = mod_consts[102];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscribed_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_107 == NULL)) {
            tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[125]);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 345;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_40);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_108 == NULL)) {
            tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[126]);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[59];
        tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_109 == NULL)) {
            tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[127]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_element_value_5, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[33];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_6, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[128];
        tmp_dict_value_1 = mod_consts[129];
        tmp_res = PyDict_SetItem(tmp_args_element_value_6, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 347;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_41, call_args);
        }

        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_16);
    }
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_110 == NULL)) {
            tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[130]);
        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 352;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_42);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_112;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_111 == NULL)) {
            tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[126]);
        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = mod_consts[87];
        tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_112 == NULL)) {
            tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[127]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_element_value_9, 0, tmp_tuple_element_2);
        tmp_dict_key_2 = mod_consts[33];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_10, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[128];
        tmp_dict_value_2 = mod_consts[129];
        tmp_res = PyDict_SetItem(tmp_args_element_value_10, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 354;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_43, call_args);
        }

        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_17);
    }
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_11;
        tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_113 == NULL)) {
            tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[130]);
        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_args_element_value_11 == NULL)) {
            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 359;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_44);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_114 == NULL)) {
            tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[126]);
        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = mod_consts[102];
        tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_115 == NULL)) {
            tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[127]);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_element_value_13, 0, tmp_tuple_element_3);
        tmp_dict_key_3 = mod_consts[33];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 362;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_14, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[128];
        tmp_dict_value_3 = mod_consts[129];
        tmp_res = PyDict_SetItem(tmp_args_element_value_14, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 361;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_45, call_args);
        }

        Py_DECREF(tmp_called_value_45);
        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_18);
    }
    {
        PyObject *tmp_called_value_46;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_15;
        tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_116 == NULL)) {
            tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_called_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[130]);
        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_args_element_value_15 == NULL)) {
            tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame.f_lineno = 366;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_46);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        tmp_assattr_value_16 = Py_None;
        tmp_assattr_target_16 = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_assattr_target_16 == NULL)) {
            tmp_assattr_target_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_assattr_target_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[131], tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_dfa2ddd5888cacec79ffcac6b2cc56a4);
#endif
    popFrameStack();

    assertFrameObject(frame_dfa2ddd5888cacec79ffcac6b2cc56a4);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_dfa2ddd5888cacec79ffcac6b2cc56a4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dfa2ddd5888cacec79ffcac6b2cc56a4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dfa2ddd5888cacec79ffcac6b2cc56a4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dfa2ddd5888cacec79ffcac6b2cc56a4, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("onnx.onnx_data_pb2", false);

    Py_INCREF(module_onnx$onnx_data_pb2);
    return module_onnx$onnx_data_pb2;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_onnx$onnx_data_pb2, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("onnx$onnx_data_pb2", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
