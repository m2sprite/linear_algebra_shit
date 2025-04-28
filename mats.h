#ifndef MATS_H
#include "helpers.h"

typedef struct {
  f32 **elements;
  f32 *buffer;
  size_t rows;
  size_t columns;
} f32_mat;

typedef struct {
  f64 **elements;
  f64 *buffer;
  size_t rows;
  size_t columns;
} f64_mat;

f32_mat mat_f32_alloc( size_t rows, size_t columns );
void f32_swap_rows( f32_mat *M, size_t row_a, size_t row_b );
void f32_mat_print( f32_mat M );
void f32_mat_fill_zeros( f32_mat *m );
void f32_mat_fill_rand( f32_mat *m, f32 upper_bound);

f64_mat mat_f64_alloc( size_t rows, size_t columns );
void f64_swap_rows( f32_mat *M, size_t row_a, size_t row_b );
void f64_mat_print( f64_mat M );
void f64_mat_fill_zeros( f64_mat *m );
void f64_mat_fill_rand( f64_mat *m, f64 upper_bound);

#define MATS_H
#endif
