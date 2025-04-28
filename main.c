#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdint.h>
#include "typedefs.h"
#include "mats.h"
#include "mats.c"
#include "helpers.c"
//NOTE: functions that don't modify the matrix don't take it in by pointer

int main(void)
{
  f64_mat x3Mat = mat_f64_alloc(3,3);
  f64_mat_fill_zeros( &x3Mat );
  f64_mat_fill_rand( &x3Mat , 100.0f);
  f64_mat_print( x3Mat );
  return(0);
}
