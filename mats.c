f32_mat mat_f32_alloc( size_t rows, size_t columns )  {
  f32_mat Result;
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

void f32_mat_print( f32_mat M )
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

void f32_mat_fill_zeros( f32_mat *m )
{
  size_t total_size = m->columns*m->rows;
  for(size_t fill_zero_i = 0;  fill_zero_i < total_size; ++fill_zero_i)
  {
    m->elements[fill_zero_i] = 0.0f;
  }
}

void f32_mat_fill_rand( f32_mat *m, f32 upper_bound)
{
  size_t total_size = m->columns*m->rows;
  for(size_t fill_rand_i = 0;  fill_rand_i < total_size; ++fill_rand_i)
  {
    m->elements[fill_rand_i] = rand_f32(upper_bound);
  }
}

//////////////////////////////////////////////////j


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

void f64_mat_fill_zeros( f64_mat *m )
{
  size_t total_size = m->columns*m->rows;
  for(size_t fill_zero_i = 0;  fill_zero_i < total_size; ++fill_zero_i)
  {
    m->elements[fill_zero_i] = 0.0f;
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
