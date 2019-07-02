#' Add two
#'
#' @param x A single integer.
#'
#' @export
plus_two <- function(x) {
  .Call(cexportuser_plus_two, x)
}
