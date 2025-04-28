#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdint.h>
#include "typedefs.h"
//NOTE: functions that don't modify the matrix don't take it in by pointer
f64 rand_f32(f32 upper_bound)
{
  return (upper_bound*((f32)rand() / (f32)(RAND_MAX)));
}

f64 rand_f64(f64 upper_bound)
{
  return (upper_bound*((f64)rand() / (f64)(RAND_MAX)));
}


#define ARRAY_COUNT(x) sizeof(x)/sizeof(*x)

typedef struct {
  f64 *elements;
  size_t rows;
  size_t columns;
} f64_mat;

f64_mat mat_f64_alloc( size_t rows, size_t columns )  {
  f64_mat Result;
  Result.rows = rows;
  Result.columns = columns;
  Result.elements = malloc(sizeof(*Result.elements)*rows*columns);

  if(Result.elements == NULL)
  {
    printf("[LA_LAYER_ERROR]: failed to allocated f64 matrix buy more ram\n");
    exit(21);
  }
  return(Result);
}

void f64_mat_print( f64_mat M )
{
  for(size_t row_i = 0; row_i < M.rows; row_i++)
  {
    printf("[");
    for(size_t colum_i = 0; colum_i < M.columns; colum_i++)
    {
      printf(" %f ", M.elements[(row_i*M.rows)+colum_i]);
    }
    printf("]\n");
  }
}

void f64_mat_fill_rand( f64_mat *m, f64 upper_bound)
{
  size_t total_size = m->columns*m->rows;
  for(size_t fill_rand_i = 0;  fill_rand_i < total_size; ++fill_rand_i)
  {
    m->elements[fill_rand_i] = rand_f64(upper_bound);
  }
}

int main(void)
{
  f64_mat x3Mat = mat_f64_alloc(3,3);
  f64_mat_fill_rand( &x3Mat , 100.0f);
  f64_mat_print( x3Mat );
  return(0);
}
