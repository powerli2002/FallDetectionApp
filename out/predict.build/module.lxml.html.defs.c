/* Generated code for Python module 'lxml.html.defs'
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

/* The "module_lxml$html$defs" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_lxml$html$defs;
PyDictObject *moduledict_lxml$html$defs;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[47];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[47];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("lxml.html.defs"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 47; i++) {
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
void checkModuleConstants_lxml$html$defs(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 47; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_96d8e96bfbc92eef032bee723fb35621;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[44]); CHECK_OBJECT(module_filename_obj);
    codeobj_96d8e96bfbc92eef032bee723fb35621 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[45], NULL, NULL, 0, 0, 0);
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

function_impl_code functable_lxml$html$defs[] = {

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

    function_impl_code *current = functable_lxml$html$defs;
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

    if (offset > sizeof(functable_lxml$html$defs) || offset < 0) {
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
        functable_lxml$html$defs[offset],
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
        module_lxml$html$defs,
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
PyObject *modulecode_lxml$html$defs(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("lxml.html.defs");

    // Store the module for future use.
    module_lxml$html$defs = module;

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
        PRINT_STRING("lxml.html.defs: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("lxml.html.defs: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("lxml.html.defs: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initlxml$html$defs\n");

    moduledict_lxml$html$defs = MODULE_DICT(module_lxml$html$defs);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_lxml$html$defs,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_lxml$html$defs,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[46]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_lxml$html$defs, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_lxml$html$defs,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_lxml$html$defs, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_lxml$html$defs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_lxml$html$defs, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_lxml$html$defs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_lxml$html$defs);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_lxml$html$defs, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_lxml$html$defs, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_lxml$html$defs, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_lxml$html$defs, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_lxml$html$defs);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_lxml$html$defs, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_96d8e96bfbc92eef032bee723fb35621;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_96d8e96bfbc92eef032bee723fb35621 = MAKE_MODULE_FRAME(codeobj_96d8e96bfbc92eef032bee723fb35621, module_lxml$html$defs);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_96d8e96bfbc92eef032bee723fb35621);
    assert(Py_REFCNT(frame_96d8e96bfbc92eef032bee723fb35621) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[3]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[3]);

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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_96d8e96bfbc92eef032bee723fb35621);
#endif
    popFrameStack();

    assertFrameObject(frame_96d8e96bfbc92eef032bee723fb35621);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_96d8e96bfbc92eef032bee723fb35621);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_96d8e96bfbc92eef032bee723fb35621, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96d8e96bfbc92eef032bee723fb35621->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96d8e96bfbc92eef032bee723fb35621, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[13];
        UPDATE_STRING_DICT0(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[15];
        UPDATE_STRING_DICT0(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[17];
        UPDATE_STRING_DICT0(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[19];
        UPDATE_STRING_DICT0(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[21];
        UPDATE_STRING_DICT0(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_value_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_1;
        PyObject *tmp_right_value_2;
        PyObject *tmp_right_value_3;
        tmp_left_value_3 = GET_STRING_DICT_VALUE(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_left_value_3 == NULL)) {
            tmp_left_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        assert(!(tmp_left_value_3 == NULL));
        tmp_right_value_1 = GET_STRING_DICT_VALUE(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_right_value_1 == NULL)) {
            tmp_right_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        assert(!(tmp_right_value_1 == NULL));
        tmp_left_value_2 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_3, tmp_right_value_1);
        assert(!(tmp_left_value_2 == NULL));
        tmp_right_value_2 = GET_STRING_DICT_VALUE(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_right_value_2 == NULL)) {
            tmp_right_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        assert(!(tmp_right_value_2 == NULL));
        tmp_left_value_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_2, tmp_right_value_2);
        Py_DECREF(tmp_left_value_2);
        assert(!(tmp_left_value_1 == NULL));
        tmp_right_value_3 = mod_consts[27];
        tmp_assign_source_14 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_3);
        Py_DECREF(tmp_left_value_1);
        assert(!(tmp_assign_source_14 == NULL));
        UPDATE_STRING_DICT1(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[31];
        UPDATE_STRING_DICT0(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[35];
        UPDATE_STRING_DICT0(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[37];
        UPDATE_STRING_DICT0(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[39];
        UPDATE_STRING_DICT0(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_value_4;
        PyObject *tmp_left_value_5;
        PyObject *tmp_left_value_6;
        PyObject *tmp_left_value_7;
        PyObject *tmp_left_value_8;
        PyObject *tmp_left_value_9;
        PyObject *tmp_left_value_10;
        PyObject *tmp_left_value_11;
        PyObject *tmp_left_value_12;
        PyObject *tmp_left_value_13;
        PyObject *tmp_right_value_4;
        PyObject *tmp_right_value_5;
        PyObject *tmp_right_value_6;
        PyObject *tmp_right_value_7;
        PyObject *tmp_right_value_8;
        PyObject *tmp_right_value_9;
        PyObject *tmp_right_value_10;
        PyObject *tmp_right_value_11;
        PyObject *tmp_right_value_12;
        PyObject *tmp_right_value_13;
        tmp_left_value_13 = GET_STRING_DICT_VALUE(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_left_value_13 == NULL)) {
            tmp_left_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        assert(!(tmp_left_value_13 == NULL));
        tmp_right_value_4 = GET_STRING_DICT_VALUE(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_right_value_4 == NULL)) {
            tmp_right_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        assert(!(tmp_right_value_4 == NULL));
        tmp_left_value_12 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_13, tmp_right_value_4);
        assert(!(tmp_left_value_12 == NULL));
        tmp_right_value_5 = GET_STRING_DICT_VALUE(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_right_value_5 == NULL)) {
            tmp_right_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        assert(!(tmp_right_value_5 == NULL));
        tmp_left_value_11 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_12, tmp_right_value_5);
        Py_DECREF(tmp_left_value_12);
        assert(!(tmp_left_value_11 == NULL));
        tmp_right_value_6 = GET_STRING_DICT_VALUE(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_right_value_6 == NULL)) {
            tmp_right_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        assert(!(tmp_right_value_6 == NULL));
        tmp_left_value_10 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_11, tmp_right_value_6);
        Py_DECREF(tmp_left_value_11);
        assert(!(tmp_left_value_10 == NULL));
        tmp_right_value_7 = GET_STRING_DICT_VALUE(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_right_value_7 == NULL)) {
            tmp_right_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        assert(!(tmp_right_value_7 == NULL));
        tmp_left_value_9 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_10, tmp_right_value_7);
        Py_DECREF(tmp_left_value_10);
        assert(!(tmp_left_value_9 == NULL));
        tmp_right_value_8 = GET_STRING_DICT_VALUE(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_right_value_8 == NULL)) {
            tmp_right_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        assert(!(tmp_right_value_8 == NULL));
        tmp_left_value_8 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_9, tmp_right_value_8);
        Py_DECREF(tmp_left_value_9);
        assert(!(tmp_left_value_8 == NULL));
        tmp_right_value_9 = GET_STRING_DICT_VALUE(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_right_value_9 == NULL)) {
            tmp_right_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        assert(!(tmp_right_value_9 == NULL));
        tmp_left_value_7 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_8, tmp_right_value_9);
        Py_DECREF(tmp_left_value_8);
        assert(!(tmp_left_value_7 == NULL));
        tmp_right_value_10 = GET_STRING_DICT_VALUE(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_right_value_10 == NULL)) {
            tmp_right_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        assert(!(tmp_right_value_10 == NULL));
        tmp_left_value_6 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_7, tmp_right_value_10);
        Py_DECREF(tmp_left_value_7);
        assert(!(tmp_left_value_6 == NULL));
        tmp_right_value_11 = GET_STRING_DICT_VALUE(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_right_value_11 == NULL)) {
            tmp_right_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        assert(!(tmp_right_value_11 == NULL));
        tmp_left_value_5 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_6, tmp_right_value_11);
        Py_DECREF(tmp_left_value_6);
        assert(!(tmp_left_value_5 == NULL));
        tmp_right_value_12 = GET_STRING_DICT_VALUE(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_right_value_12 == NULL)) {
            tmp_right_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_right_value_12 == NULL));
        tmp_left_value_4 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_5, tmp_right_value_12);
        Py_DECREF(tmp_left_value_5);
        assert(!(tmp_left_value_4 == NULL));
        tmp_right_value_13 = GET_STRING_DICT_VALUE(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_right_value_13 == NULL)) {
            tmp_right_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_right_value_13 == NULL));
        tmp_assign_source_22 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_4, tmp_right_value_13);
        Py_DECREF(tmp_left_value_4);
        assert(!(tmp_assign_source_22 == NULL));
        UPDATE_STRING_DICT1(moduledict_lxml$html$defs, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_22);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("lxml.html.defs", false);

    Py_INCREF(module_lxml$html$defs);
    return module_lxml$html$defs;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_lxml$html$defs, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("lxml$html$defs", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
