#ifndef VEC_H_
#define VEC_H_

#include <stdio.h>
#include <stdint.h>
#include "typedefs.h"
#include <inttypes.h>

#ifndef VEC_MALLOC
#include <stdlib.h>
#define VEC_MALLOC malloc
#endif

#ifndef VEC_ASSERT
#include <assert.h>
#define VEC_ASSERT assert
#endif

typedef struct
{
  size_t held;
  size_t size;
  f64 *elements;
} f64_vec;

typedef struct
{
  size_t held;
  size_t size;
  f32 *elements;
} f32_vec;

typedef struct
{
  size_t held;
  size_t size;
  i8 *elements;
} i8_vec;

typedef struct
{
  size_t held;
  size_t size;
  i16 *elements;
} i16_vec;

typedef struct
{
  size_t held;
  size_t size;
  i32 *elements;
} i32_vec;

typedef struct
{
  size_t held;
  size_t size;
  i64 *elements;
} i64_vec;

typedef struct
{
  size_t held;
  size_t size;
  u8 *elements;
} u8_vec;

typedef struct
{
  size_t held;
  size_t size;
  u16 *elements;
} u16_vec;

typedef struct
{
  size_t held;
  size_t size;
  u32 *elements;
} u32_vec;

typedef struct
{
  size_t held;
  size_t size;
  u64 *elements;
} u64_vec;

f64_vec    f64_vec_alloc(size_t s);
f32_vec    f32_vec_alloc(size_t s);

i8_vec     i8_vec_alloc(size_t s);
i16_vec    i16_vec_alloc(size_t s);
i32_vec    i32_vec_alloc(size_t s);
i64_vec    i64_vec_alloc(size_t s);

u8_vec    u8_vec_alloc(size_t s);
u16_vec   u16_vec_alloc(size_t s);
u32_vec   u32_vec_alloc(size_t s);
u64_vec   u64_vec_alloc(size_t s);

void f64_vec_resize(f64_vec *v, size_t new_size);
void f32_vec_resize(f32_vec *v, size_t new_size);
void i8_vec_resize(i8_vec *v, size_t new_size);
void i16_vec_resize(i16_vec *v, size_t new_size);
void i32_vec_resize(i32_vec *v, size_t new_size);
void i64_vec_resize(i64_vec *v, size_t new_size);

void u8_vec_resize(u8_vec *v, size_t new_size);
void u16_vec_resize(u16_vec *v, size_t new_size);
void u32_vec_resize(u32_vec *v, size_t new_size);
void u64_vec_resize(u64_vec *v, size_t new_size);

void f64_vec_print(f64_vec v);
void f32_vec_print(f32_vec v);
void i8_vec_print(i8_vec v);
void i16_vec_print(i16_vec v);
void i32_vec_print(i32_vec v);
void i64_vec_print(i64_vec v);
void u8_vec_print(u8_vec v);
void u16_vec_print(u16_vec v);
void u32_vec_print(u32_vec v);
void u64_vec_print(u64_vec v);

void f64_vec_push_times_2_realloc(f64_vec *v, f64 value);
void f32_vec_push_times_2_realloc(f32_vec *v, f32 value);

void i8_vec_push_times_2_realloc(i8_vec *v, i8 value);
void i16_vec_push_times_2_realloc(i16_vec *v, i16 value);
void i32_vec_push_times_2_realloc(i32_vec *v, i32 value);
void i64_vec_push_times_2_realloc(i64_vec *v, i64 value);

void u8_vec_push_times_2_realloc(u8_vec *v, u8 value);
void u16_vec_push_times_2_realloc(u16_vec *v, u16 value);
void u32_vec_push_times_2_realloc(u32_vec *v, u32 value);
void u64_vec_push_times_2_realloc(u64_vec *v, u64 value);

void f64_vec_clear(f64_vec *v);
void f32_vec_clear(f32_vec *v);

void i8_vec_clear(i8_vec *v);
void i16_vec_clear(i16_vec *v);
void i32_vec_clear(i32_vec *v);
void i64_vec_clear(i64_vec *v);

void u8_vec_clear(u8_vec *v);
void u16_vec_clear(u16_vec *v);
void u32_vec_clear(u32_vec *v);
void u64_vec_clear(u64_vec *v);

void f64_vec_fill_zero(f64_vec *v);
void f32_vec_fill_zero(f32_vec *v);

void i8_vec_fill_zero(i8_vec *v);
void i16_vec_fill_zero(i16_vec *v);
void i32_vec_fill_zero(i32_vec *v);
void i64_vec_fill_zero(i64_vec *v);

void u8_vec_fill_zero(u8_vec *v);
void u16_vec_fill_zero(u16_vec *v);
void u32_vec_fill_zero(u32_vec *v);
void u64_vec_fill_zero(u64_vec *v);
#endif // VEC_H
