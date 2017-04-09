BBCLASSEXTEND = "native"

# relocatable_natice_pcfiles failes since no pcfiles are generated
#   not sure where is the error here
SYSROOT_PREPROCESS_FUNCS_remove = "relocatable_native_pcfiles"
