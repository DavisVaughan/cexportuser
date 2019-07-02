#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* .Call calls */
extern SEXP cexportuser_plus_two(SEXP);

static const R_CallMethodDef CallEntries[] = {
  {"cexportuser_plus_two", (DL_FUNC) &cexportuser_plus_two, 1},
  {NULL, NULL, 0}
};

void R_init_cexportuser(DllInfo *dll) {
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
