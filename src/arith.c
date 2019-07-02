#include "cexportuser.h"
#include <cexport_api.h>

SEXP cexportuser_plus_two(SEXP x) {
  return cexport_plus_one(cexport_plus_one(x));
}
