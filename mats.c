f32_mat mat_f32_alloc( size_t rows, size_t columns )  {
  f32_mat Result;
  Result.rows = rows;
  Result.columns = columns;
  Result.buffer = malloc(sizeof(*Result.buffer)*rows*columns);
  Result.elements = malloc(sizeof(*Result.elements)*rows);

  if(Result.elements == NULL)
  {
    printf("[LA_LAYER_ERROR]: failed to allocated f32 matrix buy more ram\n");
    exit(21);
  }

  for(size_t row_i = 0; row_i < rows; ++row_i)
  {
    Result.elements[row_i] = &Result.buffer[columns*row_i];
  }

  return(Result);
}

void f32_mat_print( f32_mat M )
{
  for(size_t row_i = 0; row_i < M.rows; row_i++)
  {
    printf("[");
    for(size_t column_i = 0; column_i < M.columns; column_i++)
    {
      printf(" %f ", M.elements[row_i][column_i]);
    }
    printf("]\n");
  }
  printf("\n");
}

void f32_mat_fill_zeros( f32_mat *m )
{
  size_t total_size = m->columns*m->rows;
  for(size_t fill_zero_i = 0;  fill_zero_i < total_size; ++fill_zero_i)
  {
    m->buffer[fill_zero_i] = 0.0f;
  }
}

void f32_swap_rows( f32_mat *M, size_t row_a, size_t row_b )
{
  f32 *temp = M->elements[row_a-1];
  M->elements[row_a-1] = M->elements[row_b-1];
  M->elements[row_b-1] = temp;
}

void f32_mat_fill_rand( f32_mat *m, f32 upper_bound)
{
  size_t total_size = m->columns*m->rows;
  for(size_t fill_rand_i = 0;  fill_rand_i < total_size; ++fill_rand_i)
  {
    m->buffer[fill_rand_i] = rand_f32(upper_bound);
  }
}


//////////////////////////////////////////////////j

f64_mat mat_f64_alloc( size_t rows, size_t columns )  {
  f64_mat Result;
  Result.rows = rows;
  Result.columns = columns;
  Result.buffer = malloc(sizeof(*Result.buffer)*rows*columns);
  Result.elements = malloc(sizeof(*Result.elements)*rows);

  if(Result.elements == NULL)
  {
    printf("[LA_LAYER_ERROR]: failed to allocated f64 matrix buy more ram\n");
    exit(21);
  }

  for(size_t row_i = 0; row_i < rows; ++row_i)
  {
    Result.elements[row_i] = &Result.buffer[columns*row_i];
  }

  return(Result);
}

void f64_mat_print( f64_mat M )
{
  for(size_t row_i = 0; row_i < M.rows; row_i++)
  {
    printf("[");
    for(size_t column_i = 0; column_i < M.columns; column_i++)
    {
      printf(" %f ", M.elements[row_i][column_i]);
    }
    printf("]\n");
  }
  printf("\n");
}

void f64_mat_fill_zeros( f64_mat *m )
{
  size_t total_size = m->columns*m->rows;
  for(size_t fill_zero_i = 0;  fill_zero_i < total_size; ++fill_zero_i)
  {
    m->buffer[fill_zero_i] = 0.0f;
  }
}

void f64_swap_rows( f64_mat *M, size_t row_a, size_t row_b )
{
  f64 *temp = M->elements[row_a-1];
  M->elements[row_a-1] = M->elements[row_b-1];
  M->elements[row_b-1] = temp;
}

void f64_mat_fill_rand( f64_mat *m, f64 upper_bound)
{
  size_t total_size = m->columns*m->rows;
  for(size_t fill_rand_i = 0;  fill_rand_i < total_size; ++fill_rand_i)
  {
    m->buffer[fill_rand_i] = rand_f64(upper_bound);
  }
}
