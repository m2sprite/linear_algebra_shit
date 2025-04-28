//MALLOCS
f64_vec f64_vec_alloc(size_t size){
  f64_vec return_this;
  return_this.size = size;
  return_this.held = 0;
  return_this.elements = malloc(sizeof(*return_this.elements)*size);
  VEC_ASSERT(return_this.elements != NULL);
  return return_this;
}

f32_vec f32_vec_alloc(size_t size){
  f32_vec return_this;
  return_this.size = size;
  return_this.held = 0;
  return_this.elements = malloc(sizeof(*return_this.elements)*size);
  VEC_ASSERT(return_this.elements != NULL);
  return return_this;
}

i8_vec i8_vec_alloc(size_t size){
  i8_vec return_this;
  return_this.size = size;
  return_this.held = 0;
  return_this.elements = malloc(sizeof(*return_this.elements)*size);
  VEC_ASSERT(return_this.elements != NULL);
  return return_this;
}

i16_vec i16_vec_alloc(size_t size){
  i16_vec return_this;
  return_this.size = size;
  return_this.held = 0;
  return_this.elements = malloc(sizeof(*return_this.elements)*size);
  VEC_ASSERT(return_this.elements != NULL);
  return return_this;
}

i32_vec i32_vec_alloc(size_t size){
  i32_vec return_this;
  return_this.size = size;
  return_this.held = 0;
  return_this.elements = malloc(sizeof(*return_this.elements)*size);
  VEC_ASSERT(return_this.elements != NULL);
  return return_this;
}

i64_vec i64_vec_alloc(size_t size){
  i64_vec return_this;
  return_this.size = size;
  return_this.held = 0;
  return_this.elements = malloc(sizeof(*return_this.elements)*size);
  VEC_ASSERT(return_this.elements != NULL);
  return return_this;
}

u8_vec u8_vec_alloc(size_t size){
  u8_vec return_this;
  return_this.size = size;
  return_this.held = 0;
  return_this.elements = malloc(sizeof(*return_this.elements)*size);
  VEC_ASSERT(return_this.elements != NULL);
  return return_this;
}

u16_vec u16_vec_alloc(size_t size){
  u16_vec return_this;
  return_this.size = size;
  return_this.held = 0;
  return_this.elements = malloc(sizeof(*return_this.elements)*size);
  VEC_ASSERT(return_this.elements != NULL);
  return return_this;
}

u32_vec u32_vec_alloc(size_t size){
  u32_vec return_this;
  return_this.size = size;
  return_this.held = 0;
  return_this.elements = malloc(sizeof(*return_this.elements)*size);
  VEC_ASSERT(return_this.elements != NULL);

  return return_this;
}

u64_vec u64_vec_alloc(size_t size){
  u64_vec return_this;
  return_this.size = size;
  return_this.held = 0;
  return_this.elements = malloc(sizeof(*return_this.elements)*size);
  VEC_ASSERT(return_this.elements != NULL);
  return return_this;
}

//RESIZE
void f64_vec_resize(f64_vec *v, size_t new_size){
  v->elements = realloc(v->elements, sizeof(f64)*new_size);
  v->size = new_size;
}

void f32_vec_resize(f32_vec *v, size_t new_size){
  v->elements = realloc(v->elements, sizeof(f32)*new_size);
  v->size = new_size;
}

void i8_vec_resize(i8_vec *v, size_t new_size){
  v->elements = realloc(v->elements, sizeof(i8)*new_size);
  v->size = new_size;
}

void i16_vec_resize(i16_vec *v, size_t new_size){
  v->elements = realloc(v->elements, sizeof(i16)*new_size);
  v->size = new_size;
}

void i32_vec_resize(i32_vec *v, size_t new_size){
  v->elements = realloc(v->elements, sizeof(i32)*new_size);
  v->size = new_size;
}

void i64_vec_resize(i64_vec *v, size_t new_size){
  v->elements = realloc(v->elements, sizeof(i64)*new_size);
  v->size = new_size;
}

void u8_vec_resize(u8_vec *v, size_t new_size){
  v->elements = realloc(v->elements, sizeof(u8)*new_size);
  v->size = new_size;
}

void u16_vec_resize(u16_vec *v, size_t new_size){
  v->elements = realloc(v->elements, sizeof(u16)*new_size);
  v->size = new_size;
}

void u32_vec_resize(u32_vec *v, size_t new_size){
  v->elements = realloc(v->elements, sizeof(u32)*new_size);
  v->size = new_size;
}

void u64_vec_resize(u64_vec *v, size_t new_size){
  v->elements = realloc(v->elements, sizeof(u64)*new_size);
  v->size = new_size;
}

//PUSH
void f64_vec_push_times_2_realloc(f64_vec *v, f64 value){
  if(v->held+1 > v->size){
    f64_vec_resize(v, v->size*2);
  }
  v->elements[v->held] = value;
  v->held++;
}

void f32_vec_push_times_2_realloc(f32_vec *v, f32 value){
  if(v->held+1 > v->size){
    f32_vec_resize(v, v->size*2);
  }
  v->elements[v->held] = value;
  v->held++;
}

void i8_vec_push_times_2_realloc(i8_vec *v, i8 value){
  if(v->held+1 > v->size){
    i8_vec_resize(v, v->size*2);
  }
  v->elements[v->held] = value;
  v->held++;
}

void i16_vec_push_times_2_realloc(i16_vec *v, i16 value){
  if(v->held+1 > v->size){
    i16_vec_resize(v, v->size*2);
  }
  v->elements[v->held] = value;
  v->held++;
}

void i32_vec_push_times_2_realloc(i32_vec *v, i32 value){
  if(v->held+1 > v->size){
    i32_vec_resize(v, v->size*2);
  }
  v->elements[v->held] = value;
  v->held++;
}

void i64_vec_push_times_2_realloc(i64_vec *v, i64 value){
  if(v->held+1 > v->size){
    i64_vec_resize(v, v->size*2);
  }
  v->elements[v->held] = value;
  v->held++;
}

void u8_vec_push_times_2_realloc(u8_vec *v, u8 value){
  if(v->held+1 > v->size){
    u8_vec_resize(v, v->size*2);
  }
  v->elements[v->held] = value;
  v->held++;
}

void u16_vec_push_times_2_realloc(u16_vec *v, u16 value){
  if(v->held+1 > v->size){
    u16_vec_resize(v, v->size*2);
  }
  v->elements[v->held] = value;
  v->held++;
}

void u32_vec_push_times_2_realloc(u32_vec *v, u32 value){
  if(v->held+1 > v->size){
    u32_vec_resize(v, v->size*2);
  }
  v->elements[v->held] = value;
  v->held++;
}

void u64_vec_push_times_2_realloc(u64_vec *v, u64 value){
  if(v->held+1 > v->size){
    u64_vec_resize(v, v->size*2);
  }
  v->elements[v->held] = value;
  v->held++;
}

//CLEAR

void f64_vec_clear(f64_vec *v){
  for(size_t i = 0; i < v->size; ++i){
    v->elements[i] = 0;
  }
  v->held = 0;
}

void f32_vec_clear(f32_vec *v){
  for(size_t i = 0; i < v->size; ++i){
    v->elements[i] = 0;
  }
  v->held = 0;
}

void i64_vec_clear(i64_vec *v){
  for(size_t i = 0; i < v->size; ++i){
    v->elements[i] = 0;
  }
  v->held = 0;
}

void i32_vec_clear(i32_vec *v){
  for(size_t i = 0; i < v->size; ++i){
    v->elements[i] = 0;
  }
  v->held = 0;
}

void i16_vec_clear(i16_vec *v){
  for(size_t i = 0; i < v->size; ++i){
    v->elements[i] = 0;
  }
  v->held = 0;
}

void i8_vec_clear(i8_vec *v){
  for(size_t i = 0; i < v->size; ++i){
    v->elements[i] = 0;
  }
  v->held = 0;
}

void u64_vec_clear(u64_vec *v){
  for(size_t i = 0; i < v->size; ++i){
    v->elements[i] = 0;
  }
  v->held = 0;
}

void u32_vec_clear(u32_vec *v){
  for(size_t i = 0; i < v->size; ++i){
    v->elements[i] = 0;
  }
  v->held = 0;
}

void u16_vec_clear(u16_vec *v){
  for(size_t i = 0; i < v->size; ++i){
    v->elements[i] = 0;
  }
  v->held = 0;
}

void u8_vec_clear(u8_vec *v){
  for(size_t i = 0; i < v->size; ++i){
    v->elements[i] = 0;
  }
  v->held = 0;
}

//ZERO
void f64_vec_fill_zero(f64_vec *v){
  for(size_t i = 0; i < v->size; ++i){
    v->elements[i] = 0;
  }
  v->held = v->size;
}

void f32_vec_fill_zero(f32_vec *v){
  for(size_t i = 0; i < v->size; ++i){
    v->elements[i] = 0;
  }
  v->held = v->size;
}

void i64_vec_fill_zero(i64_vec *v){
  for(size_t i = 0; i < v->size; ++i){
    v->elements[i] = 0;
  }
  v->held = v->size;
}

void i32_vec_fill_zero(i32_vec *v){
  for(size_t i = 0; i < v->size; ++i){
    v->elements[i] = 0;
  }
  v->held = v->size;
}

void i16_vec_fill_zero(i16_vec *v){
  for(size_t i = 0; i < v->size; ++i){
    v->elements[i] = 0;
  }
  v->held = v->size;
}

void i8_vec_fill_zero(i8_vec *v){
  for(size_t i = 0; i < v->size; ++i){
    v->elements[i] = 0;
  }
  v->held = v->size;
}

void u64_vec_fill_zero(u64_vec *v){
  for(size_t i = 0; i < v->size; ++i){
    v->elements[i] = 0;
  }
  v->held = v->size;
}

void u32_vec_fill_zero(u32_vec *v){
  for(size_t i = 0; i < v->size; ++i){
    v->elements[i] = 0;
  }
  v->held = v->size;
}

void u16_vec_fill_zero(u16_vec *v){
  for(size_t i = 0; i < v->size; ++i){
    v->elements[i] = 0;
  }
  v->held = v->size;
}

void u8_vec_fill_zero(u8_vec *v){
  for(size_t i = 0; i < v->size; ++i){
    v->elements[i] = 0;
  }
  v->held = v->size;
}

//PRINT
void f64_vec_print(f64_vec v){
  for(size_t i = 0; i < v.held; ++i){
    printf(" %f ", v.elements[i]);
  }
  printf("\n");
}

void f32_vec_print(f32_vec v){
  for(size_t i = 0; i < v.held; ++i){
    printf(" %f ", v.elements[i]);
  }
  printf("\n");
}

void i8_vec_print(i8_vec v){
  for(size_t i = 0; i < v.held; ++i){
    printf(" %" PRId8 " ", v.elements[i]);
  }
  printf("\n");
}

void i16_vec_print(i16_vec v){
  for(size_t i = 0; i < v.held; ++i){
    printf(" %" PRId16 " ", v.elements[i]);
  }
  printf("\n");
}

void i32_vec_print(i32_vec v){
  for(size_t i = 0; i < v.held; ++i){
    printf(" %" PRId32 " ", v.elements[i]);
  }
  printf("\n");
}

void i64_vec_print(i64_vec v){
  for(size_t i = 0; i < v.held; ++i){
    printf(" %" PRId64 " ", v.elements[i]);
  }
  printf("\n");
}

void u8_vec_print(u8_vec v){
  for(size_t i = 0; i < v.held; ++i){
    printf(" %" PRIu8 " ", v.elements[i]);
  }
  printf("\n");
}

void u16_vec_print(u16_vec v){
  for(size_t i = 0; i < v.held; ++i){
    printf(" %" PRIu16 " ", v.elements[i]);
  }
  printf("\n");
}

void u32_vec_print(u32_vec v){
  for(size_t i = 0; i < v.held; ++i){
    printf(" %" PRIu32 " ", v.elements[i]);
  }
  printf("\n");
}

void u64_vec_print(u64_vec v){
  for(size_t i = 0; i < v.held; ++i){
    printf(" %" PRIu64 " ", v.elements[i]);
  }
  printf("\n");
}

