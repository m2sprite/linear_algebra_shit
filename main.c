#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include "vecs.h"
#include "vecs.c"
#include "mats.h"
#include "mats.c"
#include "helpers.c"

int main(void)
{
  f64_mat A = mat_f64_alloc(3,3);
  f64_mat_fill_rand( &A , 100.0f);
  f64_mat_print( A );
  f64_swap_rows(&A, 1, 2);
  f64_mat_print( A );

  f64_mat B = mat_f64_alloc(3,3);
  f64_mat_fill_rand( &B , 100.0f);
  f64_mat_print( B );
  f64_swap_rows(&B, 2, 3);
  f64_mat_print( B );

  return(0);
}
