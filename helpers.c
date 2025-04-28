f64 rand_f32(f32 upper_bound)
{
  return (upper_bound*((f32)rand() / (f32)(RAND_MAX)));
}

f64 rand_f64(f64 upper_bound)
{
  return (upper_bound*((f64)rand() / (f64)(RAND_MAX)));
}
