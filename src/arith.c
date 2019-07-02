#include "cexportuser.h"

// In the DESCRIPTION:
// Imports: cexport
// LinkingTo: cexport
// It is required that you Import the package! LinkingTo is not enough as you
// have to fully load the package to be able to use its C callables

// Now all you have to do is include the API file we created
// and you can call `cexport_plus_one()`
#include <cexport_api.h>

SEXP cexportuser_plus_two(SEXP x) {
  return cexport_plus_one(cexport_plus_one(x));
}
