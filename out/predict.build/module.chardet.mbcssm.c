/* Generated code for Python module 'chardet.mbcssm'
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

/* The "module_chardet$mbcssm" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_chardet$mbcssm;
PyDictObject *moduledict_chardet$mbcssm;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[102];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[102];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("chardet.mbcssm"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 102; i++) {
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
void checkModuleConstants_chardet$mbcssm(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 102; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_f91b44ca6a9f6f059927bd9d63bf53bf;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[99]); CHECK_OBJECT(module_filename_obj);
    codeobj_f91b44ca6a9f6f059927bd9d63bf53bf = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[100], NULL, NULL, 0, 0, 0);
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

function_impl_code functable_chardet$mbcssm[] = {

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

    function_impl_code *current = functable_chardet$mbcssm;
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

    if (offset > sizeof(functable_chardet$mbcssm) || offset < 0) {
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
        functable_chardet$mbcssm[offset],
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
        module_chardet$mbcssm,
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
PyObject *modulecode_chardet$mbcssm(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("chardet.mbcssm");

    // Store the module for future use.
    module_chardet$mbcssm = module;

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
        PRINT_STRING("chardet.mbcssm: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("chardet.mbcssm: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("chardet.mbcssm: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initchardet$mbcssm\n");

    moduledict_chardet$mbcssm = MODULE_DICT(module_chardet$mbcssm);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_chardet$mbcssm,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_chardet$mbcssm,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[101]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_chardet$mbcssm,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_chardet$mbcssm,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_chardet$mbcssm,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_chardet$mbcssm);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_chardet$mbcssm);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_f91b44ca6a9f6f059927bd9d63bf53bf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_f91b44ca6a9f6f059927bd9d63bf53bf = MAKE_MODULE_FRAME(codeobj_f91b44ca6a9f6f059927bd9d63bf53bf, module_chardet$mbcssm);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_f91b44ca6a9f6f059927bd9d63bf53bf);
    assert(Py_REFCNT(frame_f91b44ca6a9f6f059927bd9d63bf53bf) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[2]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[2]);

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
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[6];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_chardet$mbcssm;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[7];
        tmp_level_value_1 = mod_consts[8];
        frame_f91b44ca6a9f6f059927bd9d63bf53bf->m_frame.f_lineno = 28;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_chardet$mbcssm,
                mod_consts[9],
                mod_consts[10]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[9]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[11];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[13]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = PyTuple_New(24);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_expression_value_23;
            PyTuple_SET_ITEM(tmp_assign_source_6, 0, tmp_tuple_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 1, tmp_tuple_element_1);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[14]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[15];
            PyTuple_SET_ITEM0(tmp_assign_source_6, 3, tmp_tuple_element_1);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[13]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 4, tmp_tuple_element_1);
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[13]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 5, tmp_tuple_element_1);
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[13]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 6, tmp_tuple_element_1);
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[13]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 7, tmp_tuple_element_1);
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[13]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 8, tmp_tuple_element_1);
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[13]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 9, tmp_tuple_element_1);
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[16]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 10, tmp_tuple_element_1);
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[16]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 11, tmp_tuple_element_1);
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[16]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 12, tmp_tuple_element_1);
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[16]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 13, tmp_tuple_element_1);
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[16]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 14, tmp_tuple_element_1);
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[13]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 15, tmp_tuple_element_1);
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[13]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 16, tmp_tuple_element_1);
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[14]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 17, tmp_tuple_element_1);
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[14]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 18, tmp_tuple_element_1);
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[14]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 19, tmp_tuple_element_1);
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[14]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 20, tmp_tuple_element_1);
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[14]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 21, tmp_tuple_element_1);
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[14]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 22, tmp_tuple_element_1);
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[14]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_6, 23, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[18];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[20];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_8, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[21];
        tmp_dict_value_1 = mod_consts[22];
        tmp_res = PyDict_SetItem(tmp_assign_source_8, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[23];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_8, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[24];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_8, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[25];
        tmp_dict_value_1 = mod_consts[26];
        tmp_res = PyDict_SetItem(tmp_assign_source_8, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[28];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_24;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[13]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = PyTuple_New(70);
        {
            PyObject *tmp_expression_value_25;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_expression_value_77;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_expression_value_81;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_expression_value_84;
            PyObject *tmp_expression_value_85;
            PyObject *tmp_expression_value_86;
            PyObject *tmp_expression_value_87;
            PyObject *tmp_expression_value_88;
            PyObject *tmp_expression_value_89;
            PyTuple_SET_ITEM(tmp_assign_source_10, 0, tmp_tuple_element_2);
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[15];
            PyTuple_SET_ITEM0(tmp_assign_source_10, 2, tmp_tuple_element_2);
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[13]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 3, tmp_tuple_element_2);
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 4, tmp_tuple_element_2);
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 5, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[30];
            PyTuple_SET_ITEM0(tmp_assign_source_10, 6, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_10, 7, tmp_tuple_element_2);
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[13]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 8, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_10, 9, tmp_tuple_element_2);
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[13]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 10, tmp_tuple_element_2);
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[13]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 11, tmp_tuple_element_2);
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[13]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 12, tmp_tuple_element_2);
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[13]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 13, tmp_tuple_element_2);
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[13]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 14, tmp_tuple_element_2);
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[13]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 15, tmp_tuple_element_2);
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[13]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 16, tmp_tuple_element_2);
            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_37 == NULL)) {
                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[13]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 17, tmp_tuple_element_2);
            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_38 == NULL)) {
                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[13]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 18, tmp_tuple_element_2);
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[13]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 19, tmp_tuple_element_2);
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[16]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 20, tmp_tuple_element_2);
            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_41 == NULL)) {
                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[16]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 21, tmp_tuple_element_2);
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[16]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 22, tmp_tuple_element_2);
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[16]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 23, tmp_tuple_element_2);
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[16]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 24, tmp_tuple_element_2);
            tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_45 == NULL)) {
                tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[16]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 25, tmp_tuple_element_2);
            tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_46 == NULL)) {
                tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[16]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 26, tmp_tuple_element_2);
            tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_47 == NULL)) {
                tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[16]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 27, tmp_tuple_element_2);
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[16]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 28, tmp_tuple_element_2);
            tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_49 == NULL)) {
                tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[16]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 29, tmp_tuple_element_2);
            tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_50 == NULL)) {
                tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[13]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 30, tmp_tuple_element_2);
            tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_51 == NULL)) {
                tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[13]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 31, tmp_tuple_element_2);
            tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_52 == NULL)) {
                tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 32, tmp_tuple_element_2);
            tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_53 == NULL)) {
                tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 33, tmp_tuple_element_2);
            tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_54 == NULL)) {
                tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[13]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 34, tmp_tuple_element_2);
            tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_55 == NULL)) {
                tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[13]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 35, tmp_tuple_element_2);
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[13]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 36, tmp_tuple_element_2);
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 37, tmp_tuple_element_2);
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 38, tmp_tuple_element_2);
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 39, tmp_tuple_element_2);
            tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_60 == NULL)) {
                tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[13]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 40, tmp_tuple_element_2);
            tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_61 == NULL)) {
                tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[13]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 41, tmp_tuple_element_2);
            tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_62 == NULL)) {
                tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 42, tmp_tuple_element_2);
            tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_63 == NULL)) {
                tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 43, tmp_tuple_element_2);
            tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_64 == NULL)) {
                tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 44, tmp_tuple_element_2);
            tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_65 == NULL)) {
                tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 45, tmp_tuple_element_2);
            tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_66 == NULL)) {
                tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 46, tmp_tuple_element_2);
            tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_67 == NULL)) {
                tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 47, tmp_tuple_element_2);
            tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_68 == NULL)) {
                tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 48, tmp_tuple_element_2);
            tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_69 == NULL)) {
                tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 49, tmp_tuple_element_2);
            tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_70 == NULL)) {
                tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[13]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 50, tmp_tuple_element_2);
            tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_71 == NULL)) {
                tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 51, tmp_tuple_element_2);
            tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_72 == NULL)) {
                tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 52, tmp_tuple_element_2);
            tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_73 == NULL)) {
                tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 53, tmp_tuple_element_2);
            tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_74 == NULL)) {
                tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 54, tmp_tuple_element_2);
            tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_75 == NULL)) {
                tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 55, tmp_tuple_element_2);
            tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_76 == NULL)) {
                tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 56, tmp_tuple_element_2);
            tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_77 == NULL)) {
                tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 57, tmp_tuple_element_2);
            tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_78 == NULL)) {
                tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 58, tmp_tuple_element_2);
            tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_79 == NULL)) {
                tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 59, tmp_tuple_element_2);
            tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_80 == NULL)) {
                tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[13]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 60, tmp_tuple_element_2);
            tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_81 == NULL)) {
                tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 61, tmp_tuple_element_2);
            tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_82 == NULL)) {
                tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 62, tmp_tuple_element_2);
            tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_83 == NULL)) {
                tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_83 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 63, tmp_tuple_element_2);
            tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_84 == NULL)) {
                tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 64, tmp_tuple_element_2);
            tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_85 == NULL)) {
                tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[13]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 65, tmp_tuple_element_2);
            tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_86 == NULL)) {
                tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_86 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[13]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 66, tmp_tuple_element_2);
            tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_87 == NULL)) {
                tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_87 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 67, tmp_tuple_element_2);
            tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_88 == NULL)) {
                tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 68, tmp_tuple_element_2);
            tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_89 == NULL)) {
                tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_89 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[14]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_10, 69, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_10);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[33];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[20];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_12, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[21];
        tmp_dict_value_2 = mod_consts[35];
        tmp_res = PyDict_SetItem(tmp_assign_source_12, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[23];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_12, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[24];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_12, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[25];
        tmp_dict_value_2 = mod_consts[36];
        tmp_res = PyDict_SetItem(tmp_assign_source_12, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = mod_consts[15];
        tmp_assign_source_14 = PyTuple_New(40);
        {
            PyObject *tmp_expression_value_90;
            PyObject *tmp_expression_value_91;
            PyObject *tmp_expression_value_92;
            PyObject *tmp_expression_value_93;
            PyObject *tmp_expression_value_94;
            PyObject *tmp_expression_value_95;
            PyObject *tmp_expression_value_96;
            PyObject *tmp_expression_value_97;
            PyObject *tmp_expression_value_98;
            PyObject *tmp_expression_value_99;
            PyObject *tmp_expression_value_100;
            PyObject *tmp_expression_value_101;
            PyObject *tmp_expression_value_102;
            PyObject *tmp_expression_value_103;
            PyObject *tmp_expression_value_104;
            PyObject *tmp_expression_value_105;
            PyObject *tmp_expression_value_106;
            PyObject *tmp_expression_value_107;
            PyObject *tmp_expression_value_108;
            PyObject *tmp_expression_value_109;
            PyObject *tmp_expression_value_110;
            PyObject *tmp_expression_value_111;
            PyObject *tmp_expression_value_112;
            PyObject *tmp_expression_value_113;
            PyObject *tmp_expression_value_114;
            PyObject *tmp_expression_value_115;
            PyObject *tmp_expression_value_116;
            PyObject *tmp_expression_value_117;
            PyObject *tmp_expression_value_118;
            PyObject *tmp_expression_value_119;
            PyObject *tmp_expression_value_120;
            PyObject *tmp_expression_value_121;
            PyObject *tmp_expression_value_122;
            PyObject *tmp_expression_value_123;
            PyTuple_SET_ITEM0(tmp_assign_source_14, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[30];
            PyTuple_SET_ITEM0(tmp_assign_source_14, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[15];
            PyTuple_SET_ITEM0(tmp_assign_source_14, 2, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_14, 3, tmp_tuple_element_3);
            tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_90 == NULL)) {
                tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_90 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[14]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 4, tmp_tuple_element_3);
            tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_91 == NULL)) {
                tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_91 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[13]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 5, tmp_tuple_element_3);
            tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_92 == NULL)) {
                tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_92 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[13]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 6, tmp_tuple_element_3);
            tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_93 == NULL)) {
                tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_93 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[13]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 7, tmp_tuple_element_3);
            tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_94 == NULL)) {
                tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_94 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_94, mod_consts[13]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 8, tmp_tuple_element_3);
            tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_95 == NULL)) {
                tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_95 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[13]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 9, tmp_tuple_element_3);
            tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_96 == NULL)) {
                tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_96 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[13]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 10, tmp_tuple_element_3);
            tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_97 == NULL)) {
                tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_97 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[13]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 11, tmp_tuple_element_3);
            tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_98 == NULL)) {
                tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_98 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[16]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 12, tmp_tuple_element_3);
            tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_99 == NULL)) {
                tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_99 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[16]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 13, tmp_tuple_element_3);
            tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_100 == NULL)) {
                tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_100 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[16]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 14, tmp_tuple_element_3);
            tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_101 == NULL)) {
                tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_101 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[16]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 15, tmp_tuple_element_3);
            tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_102 == NULL)) {
                tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_102 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[16]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 16, tmp_tuple_element_3);
            tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_103 == NULL)) {
                tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_103 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[16]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 17, tmp_tuple_element_3);
            tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_104 == NULL)) {
                tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_104 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[14]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 18, tmp_tuple_element_3);
            tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_105 == NULL)) {
                tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_105 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[13]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 19, tmp_tuple_element_3);
            tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_106 == NULL)) {
                tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_106 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[14]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 20, tmp_tuple_element_3);
            tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_107 == NULL)) {
                tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_107 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[13]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 21, tmp_tuple_element_3);
            tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_108 == NULL)) {
                tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_108 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[13]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 22, tmp_tuple_element_3);
            tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_109 == NULL)) {
                tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_109 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[13]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 23, tmp_tuple_element_3);
            tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_110 == NULL)) {
                tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_110 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[13]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 24, tmp_tuple_element_3);
            tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_111 == NULL)) {
                tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_111 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[13]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 25, tmp_tuple_element_3);
            tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_112 == NULL)) {
                tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_112 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[14]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 26, tmp_tuple_element_3);
            tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_113 == NULL)) {
                tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_113 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[13]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 27, tmp_tuple_element_3);
            tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_114 == NULL)) {
                tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_114 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[13]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 28, tmp_tuple_element_3);
            tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_115 == NULL)) {
                tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_115 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[13]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 29, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[15];
            PyTuple_SET_ITEM0(tmp_assign_source_14, 30, tmp_tuple_element_3);
            tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_116 == NULL)) {
                tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_116 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[13]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 31, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[15];
            PyTuple_SET_ITEM0(tmp_assign_source_14, 32, tmp_tuple_element_3);
            tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_117 == NULL)) {
                tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_117 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[13]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 33, tmp_tuple_element_3);
            tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_118 == NULL)) {
                tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_118 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[13]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 34, tmp_tuple_element_3);
            tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_119 == NULL)) {
                tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_119 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_119, mod_consts[13]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 35, tmp_tuple_element_3);
            tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_120 == NULL)) {
                tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_120 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[14]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 36, tmp_tuple_element_3);
            tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_121 == NULL)) {
                tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_121 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_121, mod_consts[14]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 37, tmp_tuple_element_3);
            tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_122 == NULL)) {
                tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_122 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[14]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 38, tmp_tuple_element_3);
            tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_123 == NULL)) {
                tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_123 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_123, mod_consts[14]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_14, 39, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_assign_source_14);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_dict_key_3 = mod_consts[20];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[21];
        tmp_dict_value_3 = mod_consts[31];
        tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[23];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_dict_value_3 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[24];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_dict_value_3 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[25];
        tmp_dict_value_3 = mod_consts[43];
        tmp_res = PyDict_SetItem(tmp_assign_source_16, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_124;
        tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_124 == NULL)) {
            tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_124, mod_consts[13]);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = PyTuple_New(16);
        {
            PyObject *tmp_expression_value_125;
            PyObject *tmp_expression_value_126;
            PyObject *tmp_expression_value_127;
            PyObject *tmp_expression_value_128;
            PyObject *tmp_expression_value_129;
            PyObject *tmp_expression_value_130;
            PyObject *tmp_expression_value_131;
            PyObject *tmp_expression_value_132;
            PyObject *tmp_expression_value_133;
            PyObject *tmp_expression_value_134;
            PyObject *tmp_expression_value_135;
            PyObject *tmp_expression_value_136;
            PyObject *tmp_expression_value_137;
            PyObject *tmp_expression_value_138;
            PyTuple_SET_ITEM(tmp_assign_source_18, 0, tmp_tuple_element_4);
            tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_125 == NULL)) {
                tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_125 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_125, mod_consts[14]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_18, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[15];
            PyTuple_SET_ITEM0(tmp_assign_source_18, 2, tmp_tuple_element_4);
            tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_126 == NULL)) {
                tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_126 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_126, mod_consts[13]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_18, 3, tmp_tuple_element_4);
            tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_127 == NULL)) {
                tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_127 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_127, mod_consts[13]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_18, 4, tmp_tuple_element_4);
            tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_128 == NULL)) {
                tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_128 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_128, mod_consts[13]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_18, 5, tmp_tuple_element_4);
            tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_129 == NULL)) {
                tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_129 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_129, mod_consts[13]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_18, 6, tmp_tuple_element_4);
            tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_130 == NULL)) {
                tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_130 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_130, mod_consts[13]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_18, 7, tmp_tuple_element_4);
            tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_131 == NULL)) {
                tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_131 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_131, mod_consts[16]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_18, 8, tmp_tuple_element_4);
            tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_132 == NULL)) {
                tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_132 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_132, mod_consts[16]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_18, 9, tmp_tuple_element_4);
            tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_133 == NULL)) {
                tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_133 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_133, mod_consts[16]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_18, 10, tmp_tuple_element_4);
            tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_134 == NULL)) {
                tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_134 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_134, mod_consts[16]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_18, 11, tmp_tuple_element_4);
            tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_135 == NULL)) {
                tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_135 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_135, mod_consts[13]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_18, 12, tmp_tuple_element_4);
            tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_136 == NULL)) {
                tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_136 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_136, mod_consts[13]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_18, 13, tmp_tuple_element_4);
            tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_137 == NULL)) {
                tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_137 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_137, mod_consts[14]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_18, 14, tmp_tuple_element_4);
            tmp_expression_value_138 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_138 == NULL)) {
                tmp_expression_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_138 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto tuple_build_exception_4;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_138, mod_consts[14]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_assign_source_18, 15, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_assign_source_18);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_dict_key_4 = mod_consts[20];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_20, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[21];
        tmp_dict_value_4 = mod_consts[30];
        tmp_res = PyDict_SetItem(tmp_assign_source_20, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[23];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        assert(!(tmp_dict_value_4 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_20, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[24];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        assert(!(tmp_dict_value_4 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_20, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[25];
        tmp_dict_value_4 = mod_consts[50];
        tmp_res = PyDict_SetItem(tmp_assign_source_20, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_139;
        tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_139 == NULL)) {
            tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_139, mod_consts[13]);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = PyTuple_New(48);
        {
            PyObject *tmp_expression_value_140;
            PyObject *tmp_expression_value_141;
            PyObject *tmp_expression_value_142;
            PyObject *tmp_expression_value_143;
            PyObject *tmp_expression_value_144;
            PyObject *tmp_expression_value_145;
            PyObject *tmp_expression_value_146;
            PyObject *tmp_expression_value_147;
            PyObject *tmp_expression_value_148;
            PyObject *tmp_expression_value_149;
            PyObject *tmp_expression_value_150;
            PyObject *tmp_expression_value_151;
            PyObject *tmp_expression_value_152;
            PyObject *tmp_expression_value_153;
            PyObject *tmp_expression_value_154;
            PyObject *tmp_expression_value_155;
            PyObject *tmp_expression_value_156;
            PyObject *tmp_expression_value_157;
            PyObject *tmp_expression_value_158;
            PyObject *tmp_expression_value_159;
            PyObject *tmp_expression_value_160;
            PyObject *tmp_expression_value_161;
            PyObject *tmp_expression_value_162;
            PyObject *tmp_expression_value_163;
            PyObject *tmp_expression_value_164;
            PyObject *tmp_expression_value_165;
            PyObject *tmp_expression_value_166;
            PyObject *tmp_expression_value_167;
            PyObject *tmp_expression_value_168;
            PyObject *tmp_expression_value_169;
            PyObject *tmp_expression_value_170;
            PyObject *tmp_expression_value_171;
            PyObject *tmp_expression_value_172;
            PyObject *tmp_expression_value_173;
            PyObject *tmp_expression_value_174;
            PyObject *tmp_expression_value_175;
            PyObject *tmp_expression_value_176;
            PyObject *tmp_expression_value_177;
            PyObject *tmp_expression_value_178;
            PyObject *tmp_expression_value_179;
            PyObject *tmp_expression_value_180;
            PyObject *tmp_expression_value_181;
            PyTuple_SET_ITEM(tmp_assign_source_22, 0, tmp_tuple_element_5);
            tmp_expression_value_140 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_140 == NULL)) {
                tmp_expression_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_140 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_140, mod_consts[13]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 1, tmp_tuple_element_5);
            tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_141 == NULL)) {
                tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_141 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_141, mod_consts[14]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 2, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[15];
            PyTuple_SET_ITEM0(tmp_assign_source_22, 3, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[15];
            PyTuple_SET_ITEM0(tmp_assign_source_22, 4, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[15];
            PyTuple_SET_ITEM0(tmp_assign_source_22, 5, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[30];
            PyTuple_SET_ITEM0(tmp_assign_source_22, 6, tmp_tuple_element_5);
            tmp_expression_value_142 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_142 == NULL)) {
                tmp_expression_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_142 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_142, mod_consts[13]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 7, tmp_tuple_element_5);
            tmp_expression_value_143 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_143 == NULL)) {
                tmp_expression_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_143 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_143, mod_consts[13]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 8, tmp_tuple_element_5);
            tmp_expression_value_144 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_144 == NULL)) {
                tmp_expression_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_144 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_144, mod_consts[13]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 9, tmp_tuple_element_5);
            tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_145 == NULL)) {
                tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_145 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_145, mod_consts[13]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 10, tmp_tuple_element_5);
            tmp_expression_value_146 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_146 == NULL)) {
                tmp_expression_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_146 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_146, mod_consts[13]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 11, tmp_tuple_element_5);
            tmp_expression_value_147 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_147 == NULL)) {
                tmp_expression_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_147 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_147, mod_consts[13]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 12, tmp_tuple_element_5);
            tmp_expression_value_148 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_148 == NULL)) {
                tmp_expression_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_148 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_148, mod_consts[13]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 13, tmp_tuple_element_5);
            tmp_expression_value_149 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_149 == NULL)) {
                tmp_expression_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_149 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_149, mod_consts[16]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 14, tmp_tuple_element_5);
            tmp_expression_value_150 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_150 == NULL)) {
                tmp_expression_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_150 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_150, mod_consts[16]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 15, tmp_tuple_element_5);
            tmp_expression_value_151 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_151 == NULL)) {
                tmp_expression_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_151 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_151, mod_consts[16]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 16, tmp_tuple_element_5);
            tmp_expression_value_152 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_152 == NULL)) {
                tmp_expression_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_152 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_152, mod_consts[16]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 17, tmp_tuple_element_5);
            tmp_expression_value_153 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_153 == NULL)) {
                tmp_expression_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_153 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_153, mod_consts[16]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 18, tmp_tuple_element_5);
            tmp_expression_value_154 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_154 == NULL)) {
                tmp_expression_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_154 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_154, mod_consts[16]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 19, tmp_tuple_element_5);
            tmp_expression_value_155 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_155 == NULL)) {
                tmp_expression_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_155 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_155, mod_consts[16]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 20, tmp_tuple_element_5);
            tmp_expression_value_156 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_156 == NULL)) {
                tmp_expression_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_156 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_156, mod_consts[13]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 21, tmp_tuple_element_5);
            tmp_expression_value_157 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_157 == NULL)) {
                tmp_expression_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_157 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_157, mod_consts[14]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 22, tmp_tuple_element_5);
            tmp_expression_value_158 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_158 == NULL)) {
                tmp_expression_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_158 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_158, mod_consts[13]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 23, tmp_tuple_element_5);
            tmp_expression_value_159 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_159 == NULL)) {
                tmp_expression_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_159 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_159, mod_consts[14]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 24, tmp_tuple_element_5);
            tmp_expression_value_160 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_160 == NULL)) {
                tmp_expression_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_160 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_160, mod_consts[14]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 25, tmp_tuple_element_5);
            tmp_expression_value_161 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_161 == NULL)) {
                tmp_expression_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_161 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_161, mod_consts[14]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 26, tmp_tuple_element_5);
            tmp_expression_value_162 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_162 == NULL)) {
                tmp_expression_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_162 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_162, mod_consts[13]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 27, tmp_tuple_element_5);
            tmp_expression_value_163 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_163 == NULL)) {
                tmp_expression_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_163 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_163, mod_consts[13]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 28, tmp_tuple_element_5);
            tmp_expression_value_164 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_164 == NULL)) {
                tmp_expression_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_164 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_164, mod_consts[13]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 29, tmp_tuple_element_5);
            tmp_expression_value_165 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_165 == NULL)) {
                tmp_expression_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_165 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_165, mod_consts[13]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 30, tmp_tuple_element_5);
            tmp_expression_value_166 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_166 == NULL)) {
                tmp_expression_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_166 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_166, mod_consts[13]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 31, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_22, 32, tmp_tuple_element_5);
            tmp_expression_value_167 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_167 == NULL)) {
                tmp_expression_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_167 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_167, mod_consts[13]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 33, tmp_tuple_element_5);
            tmp_expression_value_168 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_168 == NULL)) {
                tmp_expression_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_168 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_168, mod_consts[13]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 34, tmp_tuple_element_5);
            tmp_expression_value_169 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_169 == NULL)) {
                tmp_expression_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_169 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_169, mod_consts[13]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 35, tmp_tuple_element_5);
            tmp_expression_value_170 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_170 == NULL)) {
                tmp_expression_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_170 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_170, mod_consts[14]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 36, tmp_tuple_element_5);
            tmp_expression_value_171 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_171 == NULL)) {
                tmp_expression_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_171 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_171, mod_consts[13]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 37, tmp_tuple_element_5);
            tmp_expression_value_172 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_172 == NULL)) {
                tmp_expression_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_172 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_172, mod_consts[14]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 38, tmp_tuple_element_5);
            tmp_expression_value_173 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_173 == NULL)) {
                tmp_expression_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_173 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_173, mod_consts[14]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 39, tmp_tuple_element_5);
            tmp_expression_value_174 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_174 == NULL)) {
                tmp_expression_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_174 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_174, mod_consts[14]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 40, tmp_tuple_element_5);
            tmp_expression_value_175 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_175 == NULL)) {
                tmp_expression_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_175 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_175, mod_consts[13]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 41, tmp_tuple_element_5);
            tmp_expression_value_176 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_176 == NULL)) {
                tmp_expression_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_176 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_176, mod_consts[14]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 42, tmp_tuple_element_5);
            tmp_expression_value_177 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_177 == NULL)) {
                tmp_expression_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_177 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_177, mod_consts[14]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 43, tmp_tuple_element_5);
            tmp_expression_value_178 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_178 == NULL)) {
                tmp_expression_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_178 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_178, mod_consts[14]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 44, tmp_tuple_element_5);
            tmp_expression_value_179 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_179 == NULL)) {
                tmp_expression_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_179 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_179, mod_consts[14]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 45, tmp_tuple_element_5);
            tmp_expression_value_180 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_180 == NULL)) {
                tmp_expression_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_180 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_180, mod_consts[14]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 46, tmp_tuple_element_5);
            tmp_expression_value_181 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_181 == NULL)) {
                tmp_expression_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_181 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_181, mod_consts[14]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_assign_source_22, 47, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_assign_source_22);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[55];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_dict_key_5 = mod_consts[20];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_24, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[21];
        tmp_dict_value_5 = mod_consts[57];
        tmp_res = PyDict_SetItem(tmp_assign_source_24, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[23];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        assert(!(tmp_dict_value_5 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_24, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[24];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_dict_value_5 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_24, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[25];
        tmp_dict_value_5 = mod_consts[58];
        tmp_res = PyDict_SetItem(tmp_assign_source_24, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_expression_value_182;
        tmp_expression_value_182 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_182 == NULL)) {
            tmp_expression_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_182, mod_consts[13]);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_26 = PyTuple_New(48);
        {
            PyObject *tmp_expression_value_183;
            PyObject *tmp_expression_value_184;
            PyObject *tmp_expression_value_185;
            PyObject *tmp_expression_value_186;
            PyObject *tmp_expression_value_187;
            PyObject *tmp_expression_value_188;
            PyObject *tmp_expression_value_189;
            PyObject *tmp_expression_value_190;
            PyObject *tmp_expression_value_191;
            PyObject *tmp_expression_value_192;
            PyObject *tmp_expression_value_193;
            PyObject *tmp_expression_value_194;
            PyObject *tmp_expression_value_195;
            PyObject *tmp_expression_value_196;
            PyObject *tmp_expression_value_197;
            PyObject *tmp_expression_value_198;
            PyObject *tmp_expression_value_199;
            PyObject *tmp_expression_value_200;
            PyObject *tmp_expression_value_201;
            PyObject *tmp_expression_value_202;
            PyObject *tmp_expression_value_203;
            PyObject *tmp_expression_value_204;
            PyObject *tmp_expression_value_205;
            PyObject *tmp_expression_value_206;
            PyObject *tmp_expression_value_207;
            PyObject *tmp_expression_value_208;
            PyObject *tmp_expression_value_209;
            PyObject *tmp_expression_value_210;
            PyObject *tmp_expression_value_211;
            PyObject *tmp_expression_value_212;
            PyObject *tmp_expression_value_213;
            PyObject *tmp_expression_value_214;
            PyObject *tmp_expression_value_215;
            PyObject *tmp_expression_value_216;
            PyObject *tmp_expression_value_217;
            PyObject *tmp_expression_value_218;
            PyObject *tmp_expression_value_219;
            PyObject *tmp_expression_value_220;
            PyObject *tmp_expression_value_221;
            PyObject *tmp_expression_value_222;
            PyObject *tmp_expression_value_223;
            PyObject *tmp_expression_value_224;
            PyObject *tmp_expression_value_225;
            PyObject *tmp_expression_value_226;
            PyTuple_SET_ITEM(tmp_assign_source_26, 0, tmp_tuple_element_6);
            tmp_expression_value_183 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_183 == NULL)) {
                tmp_expression_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_183 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_183, mod_consts[14]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 1, tmp_tuple_element_6);
            tmp_expression_value_184 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_184 == NULL)) {
                tmp_expression_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_184 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_184, mod_consts[14]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 2, tmp_tuple_element_6);
            tmp_expression_value_185 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_185 == NULL)) {
                tmp_expression_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_185 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_185, mod_consts[14]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 3, tmp_tuple_element_6);
            tmp_expression_value_186 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_186 == NULL)) {
                tmp_expression_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_186 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_186, mod_consts[14]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 4, tmp_tuple_element_6);
            tmp_expression_value_187 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_187 == NULL)) {
                tmp_expression_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_187 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_187, mod_consts[14]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 5, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[15];
            PyTuple_SET_ITEM0(tmp_assign_source_26, 6, tmp_tuple_element_6);
            tmp_expression_value_188 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_188 == NULL)) {
                tmp_expression_value_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_188 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_188, mod_consts[13]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 7, tmp_tuple_element_6);
            tmp_expression_value_189 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_189 == NULL)) {
                tmp_expression_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_189 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_189, mod_consts[13]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 8, tmp_tuple_element_6);
            tmp_expression_value_190 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_190 == NULL)) {
                tmp_expression_value_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_190 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_190, mod_consts[13]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 9, tmp_tuple_element_6);
            tmp_expression_value_191 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_191 == NULL)) {
                tmp_expression_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_191 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_191, mod_consts[13]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 10, tmp_tuple_element_6);
            tmp_expression_value_192 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_192 == NULL)) {
                tmp_expression_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_192 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_192, mod_consts[13]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 11, tmp_tuple_element_6);
            tmp_expression_value_193 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_193 == NULL)) {
                tmp_expression_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_193 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_193, mod_consts[13]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 12, tmp_tuple_element_6);
            tmp_expression_value_194 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_194 == NULL)) {
                tmp_expression_value_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_194 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_194, mod_consts[13]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 13, tmp_tuple_element_6);
            tmp_expression_value_195 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_195 == NULL)) {
                tmp_expression_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_195 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_195, mod_consts[16]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 14, tmp_tuple_element_6);
            tmp_expression_value_196 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_196 == NULL)) {
                tmp_expression_value_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_196 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_196, mod_consts[16]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 15, tmp_tuple_element_6);
            tmp_expression_value_197 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_197 == NULL)) {
                tmp_expression_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_197 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_197, mod_consts[16]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 16, tmp_tuple_element_6);
            tmp_expression_value_198 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_198 == NULL)) {
                tmp_expression_value_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_198 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_198, mod_consts[16]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 17, tmp_tuple_element_6);
            tmp_expression_value_199 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_199 == NULL)) {
                tmp_expression_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_199 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_199, mod_consts[16]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 18, tmp_tuple_element_6);
            tmp_expression_value_200 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_200 == NULL)) {
                tmp_expression_value_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_200 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_200, mod_consts[16]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 19, tmp_tuple_element_6);
            tmp_expression_value_201 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_201 == NULL)) {
                tmp_expression_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_201 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_201, mod_consts[16]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 20, tmp_tuple_element_6);
            tmp_expression_value_202 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_202 == NULL)) {
                tmp_expression_value_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_202 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_202, mod_consts[13]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 21, tmp_tuple_element_6);
            tmp_expression_value_203 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_203 == NULL)) {
                tmp_expression_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_203 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_203, mod_consts[13]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 22, tmp_tuple_element_6);
            tmp_expression_value_204 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_204 == NULL)) {
                tmp_expression_value_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_204 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_204, mod_consts[14]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 23, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[30];
            PyTuple_SET_ITEM0(tmp_assign_source_26, 24, tmp_tuple_element_6);
            tmp_expression_value_205 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_205 == NULL)) {
                tmp_expression_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_205 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_205, mod_consts[13]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 25, tmp_tuple_element_6);
            tmp_expression_value_206 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_206 == NULL)) {
                tmp_expression_value_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_206 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_206, mod_consts[14]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 26, tmp_tuple_element_6);
            tmp_expression_value_207 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_207 == NULL)) {
                tmp_expression_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_207 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_207, mod_consts[14]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 27, tmp_tuple_element_6);
            tmp_expression_value_208 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_208 == NULL)) {
                tmp_expression_value_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_208 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_208, mod_consts[13]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 28, tmp_tuple_element_6);
            tmp_expression_value_209 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_209 == NULL)) {
                tmp_expression_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_209 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_209, mod_consts[13]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 29, tmp_tuple_element_6);
            tmp_expression_value_210 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_210 == NULL)) {
                tmp_expression_value_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_210 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_210, mod_consts[13]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 30, tmp_tuple_element_6);
            tmp_expression_value_211 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_211 == NULL)) {
                tmp_expression_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_211 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_211, mod_consts[13]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 31, tmp_tuple_element_6);
            tmp_expression_value_212 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_212 == NULL)) {
                tmp_expression_value_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_212 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_212, mod_consts[13]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 32, tmp_tuple_element_6);
            tmp_expression_value_213 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_213 == NULL)) {
                tmp_expression_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_213 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_213, mod_consts[13]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 33, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_26, 34, tmp_tuple_element_6);
            tmp_expression_value_214 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_214 == NULL)) {
                tmp_expression_value_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_214 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_214, mod_consts[13]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 35, tmp_tuple_element_6);
            tmp_expression_value_215 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_215 == NULL)) {
                tmp_expression_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_215 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_215, mod_consts[13]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 36, tmp_tuple_element_6);
            tmp_expression_value_216 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_216 == NULL)) {
                tmp_expression_value_216 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_216 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_216, mod_consts[13]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 37, tmp_tuple_element_6);
            tmp_expression_value_217 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_217 == NULL)) {
                tmp_expression_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_217 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_217, mod_consts[16]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 38, tmp_tuple_element_6);
            tmp_expression_value_218 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_218 == NULL)) {
                tmp_expression_value_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_218 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_218, mod_consts[13]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 39, tmp_tuple_element_6);
            tmp_expression_value_219 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_219 == NULL)) {
                tmp_expression_value_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_219 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_219, mod_consts[13]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 40, tmp_tuple_element_6);
            tmp_expression_value_220 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_220 == NULL)) {
                tmp_expression_value_220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_220 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_220, mod_consts[13]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 41, tmp_tuple_element_6);
            tmp_expression_value_221 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_221 == NULL)) {
                tmp_expression_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_221 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_221, mod_consts[14]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 42, tmp_tuple_element_6);
            tmp_expression_value_222 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_222 == NULL)) {
                tmp_expression_value_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_222 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_222, mod_consts[14]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 43, tmp_tuple_element_6);
            tmp_expression_value_223 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_223 == NULL)) {
                tmp_expression_value_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_223 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_223, mod_consts[14]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 44, tmp_tuple_element_6);
            tmp_expression_value_224 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_224 == NULL)) {
                tmp_expression_value_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_224 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_224, mod_consts[14]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 45, tmp_tuple_element_6);
            tmp_expression_value_225 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_225 == NULL)) {
                tmp_expression_value_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_225 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_225, mod_consts[14]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 46, tmp_tuple_element_6);
            tmp_expression_value_226 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_226 == NULL)) {
                tmp_expression_value_226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_226 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto tuple_build_exception_6;
            }
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_226, mod_consts[14]);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_assign_source_26, 47, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_assign_source_26);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        tmp_dict_key_6 = mod_consts[20];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_28 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_28, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[21];
        tmp_dict_value_6 = mod_consts[57];
        tmp_res = PyDict_SetItem(tmp_assign_source_28, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[23];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        assert(!(tmp_dict_value_6 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_28, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[24];
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        assert(!(tmp_dict_value_6 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_28, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[25];
        tmp_dict_value_6 = mod_consts[65];
        tmp_res = PyDict_SetItem(tmp_assign_source_28, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_227;
        tmp_expression_value_227 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_227 == NULL)) {
            tmp_expression_value_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_227, mod_consts[13]);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_30 = PyTuple_New(24);
        {
            PyObject *tmp_expression_value_228;
            PyObject *tmp_expression_value_229;
            PyObject *tmp_expression_value_230;
            PyObject *tmp_expression_value_231;
            PyObject *tmp_expression_value_232;
            PyObject *tmp_expression_value_233;
            PyObject *tmp_expression_value_234;
            PyObject *tmp_expression_value_235;
            PyObject *tmp_expression_value_236;
            PyObject *tmp_expression_value_237;
            PyObject *tmp_expression_value_238;
            PyObject *tmp_expression_value_239;
            PyObject *tmp_expression_value_240;
            PyObject *tmp_expression_value_241;
            PyObject *tmp_expression_value_242;
            PyObject *tmp_expression_value_243;
            PyObject *tmp_expression_value_244;
            PyObject *tmp_expression_value_245;
            PyObject *tmp_expression_value_246;
            PyObject *tmp_expression_value_247;
            PyObject *tmp_expression_value_248;
            PyObject *tmp_expression_value_249;
            PyTuple_SET_ITEM(tmp_assign_source_30, 0, tmp_tuple_element_7);
            tmp_expression_value_228 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_228 == NULL)) {
                tmp_expression_value_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_228 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_228, mod_consts[14]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_30, 1, tmp_tuple_element_7);
            tmp_expression_value_229 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_229 == NULL)) {
                tmp_expression_value_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_229 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_229, mod_consts[14]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_30, 2, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[15];
            PyTuple_SET_ITEM0(tmp_assign_source_30, 3, tmp_tuple_element_7);
            tmp_expression_value_230 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_230 == NULL)) {
                tmp_expression_value_230 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_230 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_230, mod_consts[13]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_30, 4, tmp_tuple_element_7);
            tmp_expression_value_231 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_231 == NULL)) {
                tmp_expression_value_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_231 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_231, mod_consts[13]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_30, 5, tmp_tuple_element_7);
            tmp_expression_value_232 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_232 == NULL)) {
                tmp_expression_value_232 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_232 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_232, mod_consts[13]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_30, 6, tmp_tuple_element_7);
            tmp_expression_value_233 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_233 == NULL)) {
                tmp_expression_value_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_233 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_233, mod_consts[13]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_30, 7, tmp_tuple_element_7);
            tmp_expression_value_234 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_234 == NULL)) {
                tmp_expression_value_234 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_234 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_234, mod_consts[13]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_30, 8, tmp_tuple_element_7);
            tmp_expression_value_235 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_235 == NULL)) {
                tmp_expression_value_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_235 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_235, mod_consts[13]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_30, 9, tmp_tuple_element_7);
            tmp_expression_value_236 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_236 == NULL)) {
                tmp_expression_value_236 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_236 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_236, mod_consts[13]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_30, 10, tmp_tuple_element_7);
            tmp_expression_value_237 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_237 == NULL)) {
                tmp_expression_value_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_237 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_237, mod_consts[13]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_30, 11, tmp_tuple_element_7);
            tmp_expression_value_238 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_238 == NULL)) {
                tmp_expression_value_238 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_238 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_238, mod_consts[16]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_30, 12, tmp_tuple_element_7);
            tmp_expression_value_239 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_239 == NULL)) {
                tmp_expression_value_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_239 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_239, mod_consts[16]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_30, 13, tmp_tuple_element_7);
            tmp_expression_value_240 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_240 == NULL)) {
                tmp_expression_value_240 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_240 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_240, mod_consts[16]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_30, 14, tmp_tuple_element_7);
            tmp_expression_value_241 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_241 == NULL)) {
                tmp_expression_value_241 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_241 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_241, mod_consts[16]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_30, 15, tmp_tuple_element_7);
            tmp_expression_value_242 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_242 == NULL)) {
                tmp_expression_value_242 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_242 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_242, mod_consts[16]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_30, 16, tmp_tuple_element_7);
            tmp_expression_value_243 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_243 == NULL)) {
                tmp_expression_value_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_243 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_243, mod_consts[16]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_30, 17, tmp_tuple_element_7);
            tmp_expression_value_244 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_244 == NULL)) {
                tmp_expression_value_244 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_244 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_244, mod_consts[13]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_30, 18, tmp_tuple_element_7);
            tmp_expression_value_245 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_245 == NULL)) {
                tmp_expression_value_245 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_245 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_245, mod_consts[13]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_30, 19, tmp_tuple_element_7);
            tmp_expression_value_246 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_246 == NULL)) {
                tmp_expression_value_246 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_246 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_246, mod_consts[14]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_30, 20, tmp_tuple_element_7);
            tmp_expression_value_247 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_247 == NULL)) {
                tmp_expression_value_247 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_247 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_247, mod_consts[14]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_30, 21, tmp_tuple_element_7);
            tmp_expression_value_248 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_248 == NULL)) {
                tmp_expression_value_248 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_248 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_248, mod_consts[14]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_30, 22, tmp_tuple_element_7);
            tmp_expression_value_249 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_249 == NULL)) {
                tmp_expression_value_249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_249 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_249, mod_consts[14]);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_assign_source_30, 23, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_assign_source_30);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        tmp_dict_key_7 = mod_consts[20];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_32 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_32, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[21];
        tmp_dict_value_7 = mod_consts[31];
        tmp_res = PyDict_SetItem(tmp_assign_source_32, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[23];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        assert(!(tmp_dict_value_7 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_32, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[24];
        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_dict_value_7 == NULL)) {
            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        assert(!(tmp_dict_value_7 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_32, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[25];
        tmp_dict_value_7 = mod_consts[72];
        tmp_res = PyDict_SetItem(tmp_assign_source_32, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_tuple_element_8;
        tmp_tuple_element_8 = mod_consts[22];
        tmp_assign_source_34 = PyTuple_New(56);
        {
            PyObject *tmp_expression_value_250;
            PyObject *tmp_expression_value_251;
            PyObject *tmp_expression_value_252;
            PyObject *tmp_expression_value_253;
            PyObject *tmp_expression_value_254;
            PyObject *tmp_expression_value_255;
            PyObject *tmp_expression_value_256;
            PyObject *tmp_expression_value_257;
            PyObject *tmp_expression_value_258;
            PyObject *tmp_expression_value_259;
            PyObject *tmp_expression_value_260;
            PyObject *tmp_expression_value_261;
            PyObject *tmp_expression_value_262;
            PyObject *tmp_expression_value_263;
            PyObject *tmp_expression_value_264;
            PyObject *tmp_expression_value_265;
            PyObject *tmp_expression_value_266;
            PyObject *tmp_expression_value_267;
            PyObject *tmp_expression_value_268;
            PyObject *tmp_expression_value_269;
            PyObject *tmp_expression_value_270;
            PyObject *tmp_expression_value_271;
            PyTuple_SET_ITEM0(tmp_assign_source_34, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 2, tmp_tuple_element_8);
            tmp_expression_value_250 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_250 == NULL)) {
                tmp_expression_value_250 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_250 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_250, mod_consts[13]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_34, 3, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[30];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 4, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[15];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 5, tmp_tuple_element_8);
            tmp_expression_value_251 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_251 == NULL)) {
                tmp_expression_value_251 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_251 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_251, mod_consts[13]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_34, 6, tmp_tuple_element_8);
            tmp_expression_value_252 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_252 == NULL)) {
                tmp_expression_value_252 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_252 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_252, mod_consts[13]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_34, 7, tmp_tuple_element_8);
            tmp_expression_value_253 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_253 == NULL)) {
                tmp_expression_value_253 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_253 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_253, mod_consts[13]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_34, 8, tmp_tuple_element_8);
            tmp_expression_value_254 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_254 == NULL)) {
                tmp_expression_value_254 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_254 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_254, mod_consts[13]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_34, 9, tmp_tuple_element_8);
            tmp_expression_value_255 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_255 == NULL)) {
                tmp_expression_value_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_255 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_255, mod_consts[13]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_34, 10, tmp_tuple_element_8);
            tmp_expression_value_256 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_256 == NULL)) {
                tmp_expression_value_256 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_256 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_256, mod_consts[13]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_34, 11, tmp_tuple_element_8);
            tmp_expression_value_257 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_257 == NULL)) {
                tmp_expression_value_257 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_257 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_257, mod_consts[16]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_34, 12, tmp_tuple_element_8);
            tmp_expression_value_258 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_258 == NULL)) {
                tmp_expression_value_258 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_258 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_258, mod_consts[16]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_34, 13, tmp_tuple_element_8);
            tmp_expression_value_259 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_259 == NULL)) {
                tmp_expression_value_259 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_259 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_259, mod_consts[16]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_34, 14, tmp_tuple_element_8);
            tmp_expression_value_260 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_260 == NULL)) {
                tmp_expression_value_260 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_260 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_260, mod_consts[16]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_34, 15, tmp_tuple_element_8);
            tmp_expression_value_261 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_261 == NULL)) {
                tmp_expression_value_261 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_261 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_261, mod_consts[16]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_34, 16, tmp_tuple_element_8);
            tmp_expression_value_262 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_262 == NULL)) {
                tmp_expression_value_262 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_262 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_262, mod_consts[16]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_34, 17, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 18, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 19, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 20, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 21, tmp_tuple_element_8);
            tmp_expression_value_263 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_263 == NULL)) {
                tmp_expression_value_263 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_263 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_263, mod_consts[13]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_34, 22, tmp_tuple_element_8);
            tmp_expression_value_264 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_264 == NULL)) {
                tmp_expression_value_264 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_264 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_264, mod_consts[13]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 430;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_34, 23, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 24, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 25, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 26, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 27, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 28, tmp_tuple_element_8);
            tmp_expression_value_265 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_265 == NULL)) {
                tmp_expression_value_265 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_265 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_265, mod_consts[16]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_34, 29, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 30, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 31, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 32, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 33, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 34, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 35, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 36, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 37, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 38, tmp_tuple_element_8);
            tmp_expression_value_266 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_266 == NULL)) {
                tmp_expression_value_266 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_266 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_266, mod_consts[13]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_34, 39, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 40, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[76];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 41, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 42, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 43, tmp_tuple_element_8);
            tmp_expression_value_267 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_267 == NULL)) {
                tmp_expression_value_267 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_267 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_267, mod_consts[13]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_34, 44, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 45, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 46, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 47, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 48, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 49, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 50, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_34, 51, tmp_tuple_element_8);
            tmp_expression_value_268 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_268 == NULL)) {
                tmp_expression_value_268 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_268 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_268, mod_consts[13]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_34, 52, tmp_tuple_element_8);
            tmp_expression_value_269 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_269 == NULL)) {
                tmp_expression_value_269 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_269 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_269, mod_consts[13]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_34, 53, tmp_tuple_element_8);
            tmp_expression_value_270 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_270 == NULL)) {
                tmp_expression_value_270 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_270 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_270, mod_consts[14]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_34, 54, tmp_tuple_element_8);
            tmp_expression_value_271 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_271 == NULL)) {
                tmp_expression_value_271 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_271 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_271, mod_consts[14]);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_assign_source_34, 55, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_assign_source_34);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_dict_key_8 = mod_consts[20];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_36 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[21];
        tmp_dict_value_8 = mod_consts[31];
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[23];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        assert(!(tmp_dict_value_8 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[24];
        tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_dict_value_8 == NULL)) {
            tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        assert(!(tmp_dict_value_8 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[25];
        tmp_dict_value_8 = mod_consts[80];
        tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_tuple_element_9;
        tmp_tuple_element_9 = mod_consts[31];
        tmp_assign_source_38 = PyTuple_New(56);
        {
            PyObject *tmp_expression_value_272;
            PyObject *tmp_expression_value_273;
            PyObject *tmp_expression_value_274;
            PyObject *tmp_expression_value_275;
            PyObject *tmp_expression_value_276;
            PyObject *tmp_expression_value_277;
            PyObject *tmp_expression_value_278;
            PyObject *tmp_expression_value_279;
            PyObject *tmp_expression_value_280;
            PyObject *tmp_expression_value_281;
            PyObject *tmp_expression_value_282;
            PyObject *tmp_expression_value_283;
            PyObject *tmp_expression_value_284;
            PyObject *tmp_expression_value_285;
            PyObject *tmp_expression_value_286;
            PyObject *tmp_expression_value_287;
            PyObject *tmp_expression_value_288;
            PyObject *tmp_expression_value_289;
            PyObject *tmp_expression_value_290;
            PyObject *tmp_expression_value_291;
            PyObject *tmp_expression_value_292;
            PyObject *tmp_expression_value_293;
            PyObject *tmp_expression_value_294;
            PyObject *tmp_expression_value_295;
            PyObject *tmp_expression_value_296;
            PyTuple_SET_ITEM0(tmp_assign_source_38, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 2, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 3, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[30];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 4, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[15];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 5, tmp_tuple_element_9);
            tmp_expression_value_272 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_272 == NULL)) {
                tmp_expression_value_272 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_272 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 483;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_272, mod_consts[13]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 483;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 6, tmp_tuple_element_9);
            tmp_expression_value_273 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_273 == NULL)) {
                tmp_expression_value_273 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_273 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 483;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_273, mod_consts[13]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 483;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 7, tmp_tuple_element_9);
            tmp_expression_value_274 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_274 == NULL)) {
                tmp_expression_value_274 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_274 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_274, mod_consts[13]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 8, tmp_tuple_element_9);
            tmp_expression_value_275 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_275 == NULL)) {
                tmp_expression_value_275 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_275 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_275, mod_consts[13]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 9, tmp_tuple_element_9);
            tmp_expression_value_276 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_276 == NULL)) {
                tmp_expression_value_276 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_276 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_276, mod_consts[13]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 10, tmp_tuple_element_9);
            tmp_expression_value_277 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_277 == NULL)) {
                tmp_expression_value_277 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_277 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_277, mod_consts[13]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 11, tmp_tuple_element_9);
            tmp_expression_value_278 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_278 == NULL)) {
                tmp_expression_value_278 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_278 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_278, mod_consts[16]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 12, tmp_tuple_element_9);
            tmp_expression_value_279 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_279 == NULL)) {
                tmp_expression_value_279 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_279 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_279, mod_consts[16]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 13, tmp_tuple_element_9);
            tmp_expression_value_280 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_280 == NULL)) {
                tmp_expression_value_280 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_280 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_280, mod_consts[16]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 14, tmp_tuple_element_9);
            tmp_expression_value_281 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_281 == NULL)) {
                tmp_expression_value_281 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_281 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_281, mod_consts[16]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 484;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 15, tmp_tuple_element_9);
            tmp_expression_value_282 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_282 == NULL)) {
                tmp_expression_value_282 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_282 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 485;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_282, mod_consts[16]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 485;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 16, tmp_tuple_element_9);
            tmp_expression_value_283 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_283 == NULL)) {
                tmp_expression_value_283 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_283 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 485;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_283, mod_consts[16]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 485;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 17, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 18, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 19, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 20, tmp_tuple_element_9);
            tmp_expression_value_284 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_284 == NULL)) {
                tmp_expression_value_284 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_284 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 485;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_284, mod_consts[13]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 485;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 21, tmp_tuple_element_9);
            tmp_expression_value_285 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_285 == NULL)) {
                tmp_expression_value_285 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_285 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 485;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_285, mod_consts[16]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 485;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 22, tmp_tuple_element_9);
            tmp_expression_value_286 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_286 == NULL)) {
                tmp_expression_value_286 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_286 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 485;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_286, mod_consts[13]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 485;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 23, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 24, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 25, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 26, tmp_tuple_element_9);
            tmp_expression_value_287 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_287 == NULL)) {
                tmp_expression_value_287 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_287 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 486;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_287, mod_consts[13]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 486;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 27, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 28, tmp_tuple_element_9);
            tmp_expression_value_288 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_288 == NULL)) {
                tmp_expression_value_288 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_288 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 486;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_288, mod_consts[13]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 486;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 29, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 30, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 31, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 32, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 33, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[76];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 34, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[76];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 35, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 36, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 37, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 38, tmp_tuple_element_9);
            tmp_expression_value_289 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_289 == NULL)) {
                tmp_expression_value_289 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_289 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 487;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_289, mod_consts[13]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 487;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 39, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 40, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 41, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 42, tmp_tuple_element_9);
            tmp_expression_value_290 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_290 == NULL)) {
                tmp_expression_value_290 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_290 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 488;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_290, mod_consts[13]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 488;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 43, tmp_tuple_element_9);
            tmp_expression_value_291 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_291 == NULL)) {
                tmp_expression_value_291 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_291 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 488;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_291, mod_consts[13]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 488;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 44, tmp_tuple_element_9);
            tmp_expression_value_292 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_292 == NULL)) {
                tmp_expression_value_292 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_292 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 488;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_292, mod_consts[13]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 488;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 45, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 46, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 47, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 48, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 49, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 50, tmp_tuple_element_9);
            tmp_expression_value_293 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_293 == NULL)) {
                tmp_expression_value_293 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_293 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 489;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_293, mod_consts[13]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 489;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 51, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_38, 52, tmp_tuple_element_9);
            tmp_expression_value_294 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_294 == NULL)) {
                tmp_expression_value_294 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_294 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 489;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_294, mod_consts[13]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 489;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 53, tmp_tuple_element_9);
            tmp_expression_value_295 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_295 == NULL)) {
                tmp_expression_value_295 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_295 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 489;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_295, mod_consts[14]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 489;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 54, tmp_tuple_element_9);
            tmp_expression_value_296 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_296 == NULL)) {
                tmp_expression_value_296 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_296 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 489;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_296, mod_consts[14]);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 489;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_assign_source_38, 55, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_assign_source_38);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        tmp_dict_key_9 = mod_consts[20];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_40 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[21];
        tmp_dict_value_9 = mod_consts[31];
        tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[23];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        assert(!(tmp_dict_value_9 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[24];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        assert(!(tmp_dict_value_9 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[25];
        tmp_dict_value_9 = mod_consts[86];
        tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_expression_value_297;
        tmp_expression_value_297 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_297 == NULL)) {
            tmp_expression_value_297 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_297 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_297, mod_consts[13]);
        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_42 = PyTuple_New(208);
        {
            PyObject *tmp_expression_value_298;
            PyObject *tmp_expression_value_299;
            PyObject *tmp_expression_value_300;
            PyObject *tmp_expression_value_301;
            PyObject *tmp_expression_value_302;
            PyObject *tmp_expression_value_303;
            PyObject *tmp_expression_value_304;
            PyObject *tmp_expression_value_305;
            PyObject *tmp_expression_value_306;
            PyObject *tmp_expression_value_307;
            PyObject *tmp_expression_value_308;
            PyObject *tmp_expression_value_309;
            PyObject *tmp_expression_value_310;
            PyObject *tmp_expression_value_311;
            PyObject *tmp_expression_value_312;
            PyObject *tmp_expression_value_313;
            PyObject *tmp_expression_value_314;
            PyObject *tmp_expression_value_315;
            PyObject *tmp_expression_value_316;
            PyObject *tmp_expression_value_317;
            PyObject *tmp_expression_value_318;
            PyObject *tmp_expression_value_319;
            PyObject *tmp_expression_value_320;
            PyObject *tmp_expression_value_321;
            PyObject *tmp_expression_value_322;
            PyObject *tmp_expression_value_323;
            PyObject *tmp_expression_value_324;
            PyObject *tmp_expression_value_325;
            PyObject *tmp_expression_value_326;
            PyObject *tmp_expression_value_327;
            PyObject *tmp_expression_value_328;
            PyObject *tmp_expression_value_329;
            PyObject *tmp_expression_value_330;
            PyObject *tmp_expression_value_331;
            PyObject *tmp_expression_value_332;
            PyObject *tmp_expression_value_333;
            PyObject *tmp_expression_value_334;
            PyObject *tmp_expression_value_335;
            PyObject *tmp_expression_value_336;
            PyObject *tmp_expression_value_337;
            PyObject *tmp_expression_value_338;
            PyObject *tmp_expression_value_339;
            PyObject *tmp_expression_value_340;
            PyObject *tmp_expression_value_341;
            PyObject *tmp_expression_value_342;
            PyObject *tmp_expression_value_343;
            PyObject *tmp_expression_value_344;
            PyObject *tmp_expression_value_345;
            PyObject *tmp_expression_value_346;
            PyObject *tmp_expression_value_347;
            PyObject *tmp_expression_value_348;
            PyObject *tmp_expression_value_349;
            PyObject *tmp_expression_value_350;
            PyObject *tmp_expression_value_351;
            PyObject *tmp_expression_value_352;
            PyObject *tmp_expression_value_353;
            PyObject *tmp_expression_value_354;
            PyObject *tmp_expression_value_355;
            PyObject *tmp_expression_value_356;
            PyObject *tmp_expression_value_357;
            PyObject *tmp_expression_value_358;
            PyObject *tmp_expression_value_359;
            PyObject *tmp_expression_value_360;
            PyObject *tmp_expression_value_361;
            PyObject *tmp_expression_value_362;
            PyObject *tmp_expression_value_363;
            PyObject *tmp_expression_value_364;
            PyObject *tmp_expression_value_365;
            PyObject *tmp_expression_value_366;
            PyObject *tmp_expression_value_367;
            PyObject *tmp_expression_value_368;
            PyObject *tmp_expression_value_369;
            PyObject *tmp_expression_value_370;
            PyObject *tmp_expression_value_371;
            PyObject *tmp_expression_value_372;
            PyObject *tmp_expression_value_373;
            PyObject *tmp_expression_value_374;
            PyObject *tmp_expression_value_375;
            PyObject *tmp_expression_value_376;
            PyObject *tmp_expression_value_377;
            PyObject *tmp_expression_value_378;
            PyObject *tmp_expression_value_379;
            PyObject *tmp_expression_value_380;
            PyObject *tmp_expression_value_381;
            PyObject *tmp_expression_value_382;
            PyObject *tmp_expression_value_383;
            PyObject *tmp_expression_value_384;
            PyObject *tmp_expression_value_385;
            PyObject *tmp_expression_value_386;
            PyObject *tmp_expression_value_387;
            PyObject *tmp_expression_value_388;
            PyObject *tmp_expression_value_389;
            PyObject *tmp_expression_value_390;
            PyObject *tmp_expression_value_391;
            PyObject *tmp_expression_value_392;
            PyObject *tmp_expression_value_393;
            PyObject *tmp_expression_value_394;
            PyObject *tmp_expression_value_395;
            PyObject *tmp_expression_value_396;
            PyObject *tmp_expression_value_397;
            PyObject *tmp_expression_value_398;
            PyObject *tmp_expression_value_399;
            PyObject *tmp_expression_value_400;
            PyObject *tmp_expression_value_401;
            PyObject *tmp_expression_value_402;
            PyObject *tmp_expression_value_403;
            PyObject *tmp_expression_value_404;
            PyObject *tmp_expression_value_405;
            PyObject *tmp_expression_value_406;
            PyObject *tmp_expression_value_407;
            PyObject *tmp_expression_value_408;
            PyObject *tmp_expression_value_409;
            PyObject *tmp_expression_value_410;
            PyObject *tmp_expression_value_411;
            PyObject *tmp_expression_value_412;
            PyObject *tmp_expression_value_413;
            PyObject *tmp_expression_value_414;
            PyObject *tmp_expression_value_415;
            PyObject *tmp_expression_value_416;
            PyObject *tmp_expression_value_417;
            PyObject *tmp_expression_value_418;
            PyObject *tmp_expression_value_419;
            PyObject *tmp_expression_value_420;
            PyObject *tmp_expression_value_421;
            PyObject *tmp_expression_value_422;
            PyObject *tmp_expression_value_423;
            PyObject *tmp_expression_value_424;
            PyObject *tmp_expression_value_425;
            PyObject *tmp_expression_value_426;
            PyObject *tmp_expression_value_427;
            PyObject *tmp_expression_value_428;
            PyObject *tmp_expression_value_429;
            PyObject *tmp_expression_value_430;
            PyObject *tmp_expression_value_431;
            PyObject *tmp_expression_value_432;
            PyObject *tmp_expression_value_433;
            PyObject *tmp_expression_value_434;
            PyObject *tmp_expression_value_435;
            PyObject *tmp_expression_value_436;
            PyObject *tmp_expression_value_437;
            PyObject *tmp_expression_value_438;
            PyObject *tmp_expression_value_439;
            PyObject *tmp_expression_value_440;
            PyObject *tmp_expression_value_441;
            PyObject *tmp_expression_value_442;
            PyObject *tmp_expression_value_443;
            PyObject *tmp_expression_value_444;
            PyObject *tmp_expression_value_445;
            PyObject *tmp_expression_value_446;
            PyObject *tmp_expression_value_447;
            PyObject *tmp_expression_value_448;
            PyObject *tmp_expression_value_449;
            PyObject *tmp_expression_value_450;
            PyObject *tmp_expression_value_451;
            PyObject *tmp_expression_value_452;
            PyObject *tmp_expression_value_453;
            PyObject *tmp_expression_value_454;
            PyObject *tmp_expression_value_455;
            PyObject *tmp_expression_value_456;
            PyObject *tmp_expression_value_457;
            PyObject *tmp_expression_value_458;
            PyObject *tmp_expression_value_459;
            PyObject *tmp_expression_value_460;
            PyObject *tmp_expression_value_461;
            PyObject *tmp_expression_value_462;
            PyObject *tmp_expression_value_463;
            PyObject *tmp_expression_value_464;
            PyObject *tmp_expression_value_465;
            PyObject *tmp_expression_value_466;
            PyObject *tmp_expression_value_467;
            PyObject *tmp_expression_value_468;
            PyTuple_SET_ITEM(tmp_assign_source_42, 0, tmp_tuple_element_10);
            tmp_expression_value_298 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_298 == NULL)) {
                tmp_expression_value_298 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_298 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 538;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_298, mod_consts[14]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 538;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 1, tmp_tuple_element_10);
            tmp_expression_value_299 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_299 == NULL)) {
                tmp_expression_value_299 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_299 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 538;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_299, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 538;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 2, tmp_tuple_element_10);
            tmp_expression_value_300 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_300 == NULL)) {
                tmp_expression_value_300 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_300 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 538;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_300, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 538;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 3, tmp_tuple_element_10);
            tmp_expression_value_301 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_301 == NULL)) {
                tmp_expression_value_301 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_301 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 538;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_301, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 538;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 4, tmp_tuple_element_10);
            tmp_expression_value_302 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_302 == NULL)) {
                tmp_expression_value_302 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_302 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 538;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_302, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 538;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 5, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[90];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 6, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 7, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[91];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 8, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[92];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 9, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[76];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 10, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 11, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[31];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 12, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 13, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[30];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 14, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[15];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 15, tmp_tuple_element_10);
            tmp_expression_value_303 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_303 == NULL)) {
                tmp_expression_value_303 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_303 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_303, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 16, tmp_tuple_element_10);
            tmp_expression_value_304 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_304 == NULL)) {
                tmp_expression_value_304 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_304 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_304, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 17, tmp_tuple_element_10);
            tmp_expression_value_305 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_305 == NULL)) {
                tmp_expression_value_305 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_305 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_305, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 18, tmp_tuple_element_10);
            tmp_expression_value_306 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_306 == NULL)) {
                tmp_expression_value_306 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_306 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_306, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 19, tmp_tuple_element_10);
            tmp_expression_value_307 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_307 == NULL)) {
                tmp_expression_value_307 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_307 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_307, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 20, tmp_tuple_element_10);
            tmp_expression_value_308 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_308 == NULL)) {
                tmp_expression_value_308 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_308 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_308, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 21, tmp_tuple_element_10);
            tmp_expression_value_309 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_309 == NULL)) {
                tmp_expression_value_309 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_309 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_309, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 22, tmp_tuple_element_10);
            tmp_expression_value_310 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_310 == NULL)) {
                tmp_expression_value_310 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_310 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_310, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 23, tmp_tuple_element_10);
            tmp_expression_value_311 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_311 == NULL)) {
                tmp_expression_value_311 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_311 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_311, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 24, tmp_tuple_element_10);
            tmp_expression_value_312 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_312 == NULL)) {
                tmp_expression_value_312 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_312 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_312, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 25, tmp_tuple_element_10);
            tmp_expression_value_313 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_313 == NULL)) {
                tmp_expression_value_313 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_313 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_313, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 26, tmp_tuple_element_10);
            tmp_expression_value_314 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_314 == NULL)) {
                tmp_expression_value_314 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_314 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_314, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 27, tmp_tuple_element_10);
            tmp_expression_value_315 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_315 == NULL)) {
                tmp_expression_value_315 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_315 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_315, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 28, tmp_tuple_element_10);
            tmp_expression_value_316 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_316 == NULL)) {
                tmp_expression_value_316 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_316 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_316, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 29, tmp_tuple_element_10);
            tmp_expression_value_317 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_317 == NULL)) {
                tmp_expression_value_317 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_317 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_317, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 30, tmp_tuple_element_10);
            tmp_expression_value_318 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_318 == NULL)) {
                tmp_expression_value_318 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_318 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_318, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 31, tmp_tuple_element_10);
            tmp_expression_value_319 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_319 == NULL)) {
                tmp_expression_value_319 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_319 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_319, mod_consts[16]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 32, tmp_tuple_element_10);
            tmp_expression_value_320 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_320 == NULL)) {
                tmp_expression_value_320 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_320 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_320, mod_consts[16]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 33, tmp_tuple_element_10);
            tmp_expression_value_321 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_321 == NULL)) {
                tmp_expression_value_321 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_321 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_321, mod_consts[16]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 34, tmp_tuple_element_10);
            tmp_expression_value_322 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_322 == NULL)) {
                tmp_expression_value_322 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_322 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_322, mod_consts[16]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 35, tmp_tuple_element_10);
            tmp_expression_value_323 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_323 == NULL)) {
                tmp_expression_value_323 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_323 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_323, mod_consts[16]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 36, tmp_tuple_element_10);
            tmp_expression_value_324 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_324 == NULL)) {
                tmp_expression_value_324 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_324 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_324, mod_consts[16]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 37, tmp_tuple_element_10);
            tmp_expression_value_325 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_325 == NULL)) {
                tmp_expression_value_325 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_325 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_325, mod_consts[16]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 38, tmp_tuple_element_10);
            tmp_expression_value_326 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_326 == NULL)) {
                tmp_expression_value_326 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_326 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_326, mod_consts[16]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 39, tmp_tuple_element_10);
            tmp_expression_value_327 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_327 == NULL)) {
                tmp_expression_value_327 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_327 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_327, mod_consts[16]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 40, tmp_tuple_element_10);
            tmp_expression_value_328 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_328 == NULL)) {
                tmp_expression_value_328 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_328 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_328, mod_consts[16]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 41, tmp_tuple_element_10);
            tmp_expression_value_329 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_329 == NULL)) {
                tmp_expression_value_329 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_329 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_329, mod_consts[16]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 42, tmp_tuple_element_10);
            tmp_expression_value_330 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_330 == NULL)) {
                tmp_expression_value_330 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_330 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_330, mod_consts[16]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 43, tmp_tuple_element_10);
            tmp_expression_value_331 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_331 == NULL)) {
                tmp_expression_value_331 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_331 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_331, mod_consts[16]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 44, tmp_tuple_element_10);
            tmp_expression_value_332 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_332 == NULL)) {
                tmp_expression_value_332 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_332 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_332, mod_consts[16]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 45, tmp_tuple_element_10);
            tmp_expression_value_333 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_333 == NULL)) {
                tmp_expression_value_333 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_333 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_333, mod_consts[16]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 46, tmp_tuple_element_10);
            tmp_expression_value_334 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_334 == NULL)) {
                tmp_expression_value_334 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_334 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_334, mod_consts[16]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 47, tmp_tuple_element_10);
            tmp_expression_value_335 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_335 == NULL)) {
                tmp_expression_value_335 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_335 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_335, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 48, tmp_tuple_element_10);
            tmp_expression_value_336 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_336 == NULL)) {
                tmp_expression_value_336 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_336 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_336, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 49, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 50, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 51, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 52, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 53, tmp_tuple_element_10);
            tmp_expression_value_337 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_337 == NULL)) {
                tmp_expression_value_337 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_337 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_337, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 54, tmp_tuple_element_10);
            tmp_expression_value_338 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_338 == NULL)) {
                tmp_expression_value_338 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_338 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_338, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 55, tmp_tuple_element_10);
            tmp_expression_value_339 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_339 == NULL)) {
                tmp_expression_value_339 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_339 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_339, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 56, tmp_tuple_element_10);
            tmp_expression_value_340 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_340 == NULL)) {
                tmp_expression_value_340 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_340 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_340, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 57, tmp_tuple_element_10);
            tmp_expression_value_341 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_341 == NULL)) {
                tmp_expression_value_341 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_341 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_341, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 58, tmp_tuple_element_10);
            tmp_expression_value_342 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_342 == NULL)) {
                tmp_expression_value_342 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_342 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_342, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 59, tmp_tuple_element_10);
            tmp_expression_value_343 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_343 == NULL)) {
                tmp_expression_value_343 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_343 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_343, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 60, tmp_tuple_element_10);
            tmp_expression_value_344 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_344 == NULL)) {
                tmp_expression_value_344 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_344 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_344, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 61, tmp_tuple_element_10);
            tmp_expression_value_345 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_345 == NULL)) {
                tmp_expression_value_345 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_345 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_345, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 62, tmp_tuple_element_10);
            tmp_expression_value_346 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_346 == NULL)) {
                tmp_expression_value_346 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_346 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_346, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 63, tmp_tuple_element_10);
            tmp_expression_value_347 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_347 == NULL)) {
                tmp_expression_value_347 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_347 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 546;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_347, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 546;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 64, tmp_tuple_element_10);
            tmp_expression_value_348 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_348 == NULL)) {
                tmp_expression_value_348 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_348 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 546;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_348, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 546;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 65, tmp_tuple_element_10);
            tmp_expression_value_349 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_349 == NULL)) {
                tmp_expression_value_349 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_349 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 546;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_349, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 546;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 66, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 67, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 68, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[22];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 69, tmp_tuple_element_10);
            tmp_expression_value_350 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_350 == NULL)) {
                tmp_expression_value_350 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_350 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 546;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_350, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 546;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 70, tmp_tuple_element_10);
            tmp_expression_value_351 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_351 == NULL)) {
                tmp_expression_value_351 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_351 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 546;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_351, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 546;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 71, tmp_tuple_element_10);
            tmp_expression_value_352 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_352 == NULL)) {
                tmp_expression_value_352 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_352 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_352, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 72, tmp_tuple_element_10);
            tmp_expression_value_353 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_353 == NULL)) {
                tmp_expression_value_353 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_353 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_353, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 73, tmp_tuple_element_10);
            tmp_expression_value_354 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_354 == NULL)) {
                tmp_expression_value_354 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_354 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_354, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 74, tmp_tuple_element_10);
            tmp_expression_value_355 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_355 == NULL)) {
                tmp_expression_value_355 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_355 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_355, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 75, tmp_tuple_element_10);
            tmp_expression_value_356 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_356 == NULL)) {
                tmp_expression_value_356 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_356 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_356, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 76, tmp_tuple_element_10);
            tmp_expression_value_357 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_357 == NULL)) {
                tmp_expression_value_357 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_357 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_357, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 77, tmp_tuple_element_10);
            tmp_expression_value_358 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_358 == NULL)) {
                tmp_expression_value_358 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_358 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_358, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 78, tmp_tuple_element_10);
            tmp_expression_value_359 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_359 == NULL)) {
                tmp_expression_value_359 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_359 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_359, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 79, tmp_tuple_element_10);
            tmp_expression_value_360 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_360 == NULL)) {
                tmp_expression_value_360 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_360 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 548;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_360, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 548;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 80, tmp_tuple_element_10);
            tmp_expression_value_361 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_361 == NULL)) {
                tmp_expression_value_361 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_361 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 548;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_361, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 548;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 81, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 82, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 83, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 84, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 85, tmp_tuple_element_10);
            tmp_expression_value_362 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_362 == NULL)) {
                tmp_expression_value_362 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_362 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 548;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_362, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 548;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 86, tmp_tuple_element_10);
            tmp_expression_value_363 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_363 == NULL)) {
                tmp_expression_value_363 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_363 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 548;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_363, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 548;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 87, tmp_tuple_element_10);
            tmp_expression_value_364 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_364 == NULL)) {
                tmp_expression_value_364 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_364 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_364, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 88, tmp_tuple_element_10);
            tmp_expression_value_365 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_365 == NULL)) {
                tmp_expression_value_365 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_365 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_365, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 89, tmp_tuple_element_10);
            tmp_expression_value_366 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_366 == NULL)) {
                tmp_expression_value_366 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_366 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_366, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 90, tmp_tuple_element_10);
            tmp_expression_value_367 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_367 == NULL)) {
                tmp_expression_value_367 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_367 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_367, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 91, tmp_tuple_element_10);
            tmp_expression_value_368 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_368 == NULL)) {
                tmp_expression_value_368 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_368 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_368, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 92, tmp_tuple_element_10);
            tmp_expression_value_369 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_369 == NULL)) {
                tmp_expression_value_369 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_369 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_369, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 93, tmp_tuple_element_10);
            tmp_expression_value_370 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_370 == NULL)) {
                tmp_expression_value_370 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_370 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_370, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 94, tmp_tuple_element_10);
            tmp_expression_value_371 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_371 == NULL)) {
                tmp_expression_value_371 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_371 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_371, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 95, tmp_tuple_element_10);
            tmp_expression_value_372 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_372 == NULL)) {
                tmp_expression_value_372 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_372 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 550;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_372, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 550;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 96, tmp_tuple_element_10);
            tmp_expression_value_373 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_373 == NULL)) {
                tmp_expression_value_373 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_373 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 550;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_373, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 550;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 97, tmp_tuple_element_10);
            tmp_expression_value_374 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_374 == NULL)) {
                tmp_expression_value_374 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_374 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 550;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_374, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 550;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 98, tmp_tuple_element_10);
            tmp_expression_value_375 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_375 == NULL)) {
                tmp_expression_value_375 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_375 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 550;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_375, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 550;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 99, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 100, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[57];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 101, tmp_tuple_element_10);
            tmp_expression_value_376 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_376 == NULL)) {
                tmp_expression_value_376 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_376 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 550;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_376, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 550;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 102, tmp_tuple_element_10);
            tmp_expression_value_377 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_377 == NULL)) {
                tmp_expression_value_377 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_377 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 550;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_377, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 550;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 103, tmp_tuple_element_10);
            tmp_expression_value_378 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_378 == NULL)) {
                tmp_expression_value_378 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_378 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_378, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 104, tmp_tuple_element_10);
            tmp_expression_value_379 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_379 == NULL)) {
                tmp_expression_value_379 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_379 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_379, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 105, tmp_tuple_element_10);
            tmp_expression_value_380 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_380 == NULL)) {
                tmp_expression_value_380 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_380 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_380, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 106, tmp_tuple_element_10);
            tmp_expression_value_381 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_381 == NULL)) {
                tmp_expression_value_381 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_381 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_381, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 107, tmp_tuple_element_10);
            tmp_expression_value_382 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_382 == NULL)) {
                tmp_expression_value_382 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_382 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_382, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 108, tmp_tuple_element_10);
            tmp_expression_value_383 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_383 == NULL)) {
                tmp_expression_value_383 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_383 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_383, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 109, tmp_tuple_element_10);
            tmp_expression_value_384 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_384 == NULL)) {
                tmp_expression_value_384 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_384 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_384, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 110, tmp_tuple_element_10);
            tmp_expression_value_385 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_385 == NULL)) {
                tmp_expression_value_385 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_385 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_385, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 111, tmp_tuple_element_10);
            tmp_expression_value_386 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_386 == NULL)) {
                tmp_expression_value_386 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_386 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 552;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_386, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 552;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 112, tmp_tuple_element_10);
            tmp_expression_value_387 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_387 == NULL)) {
                tmp_expression_value_387 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_387 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 552;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_387, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 552;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 113, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[91];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 114, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[91];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 115, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[91];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 116, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[91];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 117, tmp_tuple_element_10);
            tmp_expression_value_388 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_388 == NULL)) {
                tmp_expression_value_388 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_388 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 552;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_388, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 552;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 118, tmp_tuple_element_10);
            tmp_expression_value_389 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_389 == NULL)) {
                tmp_expression_value_389 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_389 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 552;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_389, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 552;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 119, tmp_tuple_element_10);
            tmp_expression_value_390 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_390 == NULL)) {
                tmp_expression_value_390 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_390 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_390, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 120, tmp_tuple_element_10);
            tmp_expression_value_391 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_391 == NULL)) {
                tmp_expression_value_391 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_391 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_391, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 121, tmp_tuple_element_10);
            tmp_expression_value_392 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_392 == NULL)) {
                tmp_expression_value_392 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_392 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_392, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 122, tmp_tuple_element_10);
            tmp_expression_value_393 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_393 == NULL)) {
                tmp_expression_value_393 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_393 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_393, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 123, tmp_tuple_element_10);
            tmp_expression_value_394 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_394 == NULL)) {
                tmp_expression_value_394 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_394 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_394, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 124, tmp_tuple_element_10);
            tmp_expression_value_395 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_395 == NULL)) {
                tmp_expression_value_395 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_395 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_395, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 125, tmp_tuple_element_10);
            tmp_expression_value_396 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_396 == NULL)) {
                tmp_expression_value_396 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_396 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_396, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 126, tmp_tuple_element_10);
            tmp_expression_value_397 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_397 == NULL)) {
                tmp_expression_value_397 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_397 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_397, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 127, tmp_tuple_element_10);
            tmp_expression_value_398 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_398 == NULL)) {
                tmp_expression_value_398 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_398 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_398, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 128, tmp_tuple_element_10);
            tmp_expression_value_399 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_399 == NULL)) {
                tmp_expression_value_399 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_399 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_399, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 129, tmp_tuple_element_10);
            tmp_expression_value_400 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_400 == NULL)) {
                tmp_expression_value_400 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_400 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_400, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 130, tmp_tuple_element_10);
            tmp_expression_value_401 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_401 == NULL)) {
                tmp_expression_value_401 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_401 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_401, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 131, tmp_tuple_element_10);
            tmp_expression_value_402 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_402 == NULL)) {
                tmp_expression_value_402 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_402 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_402, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 132, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[91];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 133, tmp_tuple_element_10);
            tmp_expression_value_403 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_403 == NULL)) {
                tmp_expression_value_403 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_403 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_403, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 134, tmp_tuple_element_10);
            tmp_expression_value_404 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_404 == NULL)) {
                tmp_expression_value_404 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_404 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_404, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 135, tmp_tuple_element_10);
            tmp_expression_value_405 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_405 == NULL)) {
                tmp_expression_value_405 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_405 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_405, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 136, tmp_tuple_element_10);
            tmp_expression_value_406 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_406 == NULL)) {
                tmp_expression_value_406 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_406 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_406, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 137, tmp_tuple_element_10);
            tmp_expression_value_407 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_407 == NULL)) {
                tmp_expression_value_407 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_407 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_407, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 138, tmp_tuple_element_10);
            tmp_expression_value_408 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_408 == NULL)) {
                tmp_expression_value_408 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_408 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_408, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 139, tmp_tuple_element_10);
            tmp_expression_value_409 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_409 == NULL)) {
                tmp_expression_value_409 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_409 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_409, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 140, tmp_tuple_element_10);
            tmp_expression_value_410 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_410 == NULL)) {
                tmp_expression_value_410 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_410 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_410, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 141, tmp_tuple_element_10);
            tmp_expression_value_411 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_411 == NULL)) {
                tmp_expression_value_411 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_411 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_411, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 142, tmp_tuple_element_10);
            tmp_expression_value_412 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_412 == NULL)) {
                tmp_expression_value_412 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_412 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_412, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 555;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 143, tmp_tuple_element_10);
            tmp_expression_value_413 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_413 == NULL)) {
                tmp_expression_value_413 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_413 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 556;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_413, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 556;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 144, tmp_tuple_element_10);
            tmp_expression_value_414 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_414 == NULL)) {
                tmp_expression_value_414 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_414 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 556;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_414, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 556;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 145, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[90];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 146, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[90];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 147, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[90];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 148, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[90];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 149, tmp_tuple_element_10);
            tmp_expression_value_415 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_415 == NULL)) {
                tmp_expression_value_415 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_415 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 556;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_415, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 556;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 150, tmp_tuple_element_10);
            tmp_expression_value_416 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_416 == NULL)) {
                tmp_expression_value_416 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_416 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 556;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_416, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 556;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 151, tmp_tuple_element_10);
            tmp_expression_value_417 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_417 == NULL)) {
                tmp_expression_value_417 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_417 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 557;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_417, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 557;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 152, tmp_tuple_element_10);
            tmp_expression_value_418 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_418 == NULL)) {
                tmp_expression_value_418 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_418 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 557;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_418, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 557;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 153, tmp_tuple_element_10);
            tmp_expression_value_419 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_419 == NULL)) {
                tmp_expression_value_419 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_419 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 557;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_419, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 557;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 154, tmp_tuple_element_10);
            tmp_expression_value_420 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_420 == NULL)) {
                tmp_expression_value_420 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_420 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 557;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_420, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 557;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 155, tmp_tuple_element_10);
            tmp_expression_value_421 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_421 == NULL)) {
                tmp_expression_value_421 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_421 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 557;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_421, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 557;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 156, tmp_tuple_element_10);
            tmp_expression_value_422 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_422 == NULL)) {
                tmp_expression_value_422 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_422 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 557;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_422, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 557;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 157, tmp_tuple_element_10);
            tmp_expression_value_423 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_423 == NULL)) {
                tmp_expression_value_423 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_423 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 557;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_423, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 557;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 158, tmp_tuple_element_10);
            tmp_expression_value_424 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_424 == NULL)) {
                tmp_expression_value_424 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_424 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 557;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_424, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 557;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 159, tmp_tuple_element_10);
            tmp_expression_value_425 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_425 == NULL)) {
                tmp_expression_value_425 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_425 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 558;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_425, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 558;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 160, tmp_tuple_element_10);
            tmp_expression_value_426 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_426 == NULL)) {
                tmp_expression_value_426 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_426 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 558;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_426, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 558;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 161, tmp_tuple_element_10);
            tmp_expression_value_427 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_427 == NULL)) {
                tmp_expression_value_427 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_427 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 558;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_427, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 558;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 162, tmp_tuple_element_10);
            tmp_expression_value_428 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_428 == NULL)) {
                tmp_expression_value_428 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_428 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 558;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_428, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 558;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 163, tmp_tuple_element_10);
            tmp_expression_value_429 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_429 == NULL)) {
                tmp_expression_value_429 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_429 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 558;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_429, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 558;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 164, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[90];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 165, tmp_tuple_element_10);
            tmp_expression_value_430 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_430 == NULL)) {
                tmp_expression_value_430 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_430 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 558;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_430, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 558;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 166, tmp_tuple_element_10);
            tmp_expression_value_431 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_431 == NULL)) {
                tmp_expression_value_431 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_431 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 558;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_431, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 558;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 167, tmp_tuple_element_10);
            tmp_expression_value_432 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_432 == NULL)) {
                tmp_expression_value_432 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_432 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_432, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 168, tmp_tuple_element_10);
            tmp_expression_value_433 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_433 == NULL)) {
                tmp_expression_value_433 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_433 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_433, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 169, tmp_tuple_element_10);
            tmp_expression_value_434 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_434 == NULL)) {
                tmp_expression_value_434 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_434 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_434, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 170, tmp_tuple_element_10);
            tmp_expression_value_435 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_435 == NULL)) {
                tmp_expression_value_435 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_435 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_435, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 171, tmp_tuple_element_10);
            tmp_expression_value_436 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_436 == NULL)) {
                tmp_expression_value_436 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_436 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_436, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 172, tmp_tuple_element_10);
            tmp_expression_value_437 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_437 == NULL)) {
                tmp_expression_value_437 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_437 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_437, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 173, tmp_tuple_element_10);
            tmp_expression_value_438 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_438 == NULL)) {
                tmp_expression_value_438 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_438 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_438, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 174, tmp_tuple_element_10);
            tmp_expression_value_439 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_439 == NULL)) {
                tmp_expression_value_439 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_439 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_439, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 175, tmp_tuple_element_10);
            tmp_expression_value_440 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_440 == NULL)) {
                tmp_expression_value_440 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_440 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_440, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 176, tmp_tuple_element_10);
            tmp_expression_value_441 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_441 == NULL)) {
                tmp_expression_value_441 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_441 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_441, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 177, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[90];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 178, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[90];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 179, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[90];
            PyTuple_SET_ITEM0(tmp_assign_source_42, 180, tmp_tuple_element_10);
            tmp_expression_value_442 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_442 == NULL)) {
                tmp_expression_value_442 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_442 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_442, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 181, tmp_tuple_element_10);
            tmp_expression_value_443 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_443 == NULL)) {
                tmp_expression_value_443 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_443 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_443, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 182, tmp_tuple_element_10);
            tmp_expression_value_444 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_444 == NULL)) {
                tmp_expression_value_444 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_444 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_444, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 560;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 183, tmp_tuple_element_10);
            tmp_expression_value_445 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_445 == NULL)) {
                tmp_expression_value_445 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_445 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 561;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_445, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 561;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 184, tmp_tuple_element_10);
            tmp_expression_value_446 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_446 == NULL)) {
                tmp_expression_value_446 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_446 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 561;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_446, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 561;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 185, tmp_tuple_element_10);
            tmp_expression_value_447 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_447 == NULL)) {
                tmp_expression_value_447 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_447 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 561;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_447, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 561;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 186, tmp_tuple_element_10);
            tmp_expression_value_448 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_448 == NULL)) {
                tmp_expression_value_448 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_448 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 561;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_448, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 561;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 187, tmp_tuple_element_10);
            tmp_expression_value_449 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_449 == NULL)) {
                tmp_expression_value_449 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_449 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 561;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_449, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 561;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 188, tmp_tuple_element_10);
            tmp_expression_value_450 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_450 == NULL)) {
                tmp_expression_value_450 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_450 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 561;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_450, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 561;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 189, tmp_tuple_element_10);
            tmp_expression_value_451 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_451 == NULL)) {
                tmp_expression_value_451 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_451 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 561;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_451, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 561;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 190, tmp_tuple_element_10);
            tmp_expression_value_452 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_452 == NULL)) {
                tmp_expression_value_452 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_452 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 561;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_452, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 561;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 191, tmp_tuple_element_10);
            tmp_expression_value_453 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_453 == NULL)) {
                tmp_expression_value_453 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_453 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_453, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 192, tmp_tuple_element_10);
            tmp_expression_value_454 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_454 == NULL)) {
                tmp_expression_value_454 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_454 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_454, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 193, tmp_tuple_element_10);
            tmp_expression_value_455 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_455 == NULL)) {
                tmp_expression_value_455 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_455 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_455, mod_consts[14]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 194, tmp_tuple_element_10);
            tmp_expression_value_456 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_456 == NULL)) {
                tmp_expression_value_456 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_456 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_456, mod_consts[14]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 195, tmp_tuple_element_10);
            tmp_expression_value_457 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_457 == NULL)) {
                tmp_expression_value_457 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_457 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_457, mod_consts[14]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 196, tmp_tuple_element_10);
            tmp_expression_value_458 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_458 == NULL)) {
                tmp_expression_value_458 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_458 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_458, mod_consts[14]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 197, tmp_tuple_element_10);
            tmp_expression_value_459 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_459 == NULL)) {
                tmp_expression_value_459 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_459 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_459, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 198, tmp_tuple_element_10);
            tmp_expression_value_460 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_460 == NULL)) {
                tmp_expression_value_460 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_460 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_460, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 199, tmp_tuple_element_10);
            tmp_expression_value_461 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_461 == NULL)) {
                tmp_expression_value_461 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_461 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_461, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 200, tmp_tuple_element_10);
            tmp_expression_value_462 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_462 == NULL)) {
                tmp_expression_value_462 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_462 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_462, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 201, tmp_tuple_element_10);
            tmp_expression_value_463 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_463 == NULL)) {
                tmp_expression_value_463 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_463 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_463, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 202, tmp_tuple_element_10);
            tmp_expression_value_464 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_464 == NULL)) {
                tmp_expression_value_464 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_464 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_464, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 203, tmp_tuple_element_10);
            tmp_expression_value_465 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_465 == NULL)) {
                tmp_expression_value_465 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_465 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_465, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 204, tmp_tuple_element_10);
            tmp_expression_value_466 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_466 == NULL)) {
                tmp_expression_value_466 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_466 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_466, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 205, tmp_tuple_element_10);
            tmp_expression_value_467 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_467 == NULL)) {
                tmp_expression_value_467 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_467 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_467, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 206, tmp_tuple_element_10);
            tmp_expression_value_468 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_468 == NULL)) {
                tmp_expression_value_468 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_468 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;

                goto tuple_build_exception_10;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_468, mod_consts[13]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 563;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_assign_source_42, 207, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_assign_source_42);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        tmp_dict_key_10 = mod_consts[20];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_44 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_assign_source_44, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[21];
        tmp_dict_value_10 = mod_consts[96];
        tmp_res = PyDict_SetItem(tmp_assign_source_44, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[23];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        assert(!(tmp_dict_value_10 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_44, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[24];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        assert(!(tmp_dict_value_10 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_44, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[25];
        tmp_dict_value_10 = mod_consts[97];
        tmp_res = PyDict_SetItem(tmp_assign_source_44, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_chardet$mbcssm, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_44);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f91b44ca6a9f6f059927bd9d63bf53bf);
#endif
    popFrameStack();

    assertFrameObject(frame_f91b44ca6a9f6f059927bd9d63bf53bf);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f91b44ca6a9f6f059927bd9d63bf53bf);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f91b44ca6a9f6f059927bd9d63bf53bf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f91b44ca6a9f6f059927bd9d63bf53bf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f91b44ca6a9f6f059927bd9d63bf53bf, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("chardet.mbcssm", false);

    Py_INCREF(module_chardet$mbcssm);
    return module_chardet$mbcssm;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_chardet$mbcssm, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("chardet$mbcssm", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
