#include <stdio.h>

int main(){
  char my_char_var = 'a';
  char* ptr_char_var = &my_char_var; //pour chaque valeur, on crée un pointeur associé "ptr" 
  unsigned char my_uchar_var = 234;
  unsigned char* ptr_uchar_var = &my_uchar_var;
  short my_short_var = -12;
  short* ptr_short_var = &my_short_var;
  unsigned short my_ushort_var = 65535;
  unsigned short* ptr_ushort_var = &my_ushort_var;
  int my_int_var = 12;
  int* ptr_int_var = &my_int_var;
  unsigned int my_uint_var = 3456;
  unsigned int* ptr_uint_var = &my_uint_var;
  long my_long_var = -1234553L;
  long* ptr_long_var = &my_long_var;
  unsigned long my_ulong_var = 234556UL;
  unsigned long* ptr_ulong_var = &my_ulong_var;
  long long my_llong_var = 1123345LL;
  long long* ptr_llong_var = &my_llong_var;
  unsigned long long my_ullong_var = 1234567ULL;
  unsigned long long* ptr_ullong_var = &my_ullong_var;
  float my_float_var = 3.14;
  float* ptr_float_var = &my_float_var;
  double my_double_var = 3.14E-12;
  double* ptr_double_var = &my_double_var;
  long double my_longdouble_var = 3.14E22;
  long double* ptr_longdouble_var = &my_longdouble_var;
  
  printf("char: %c adresse: %p\n", *ptr_char_var, ptr_char_var); //on utilise uniquement la variable "ptr" pour afficher la variable et son adresse
  printf("uchar: %hhu adresse: %p\n", *ptr_uchar_var, ptr_uchar_var);
  printf("short: %hd adresse: %p\n", *ptr_short_var, ptr_short_var);
  printf("ushort: %hu adresse: %p\n", *ptr_ushort_var, ptr_ushort_var);
  printf("int: %i adresse: %p\n", *ptr_int_var, ptr_int_var);
  printf("uint: %ui adresse: %p\n", *ptr_uint_var, ptr_uint_var);
  printf("long: %ld adresse: %p\n", *ptr_long_var, ptr_long_var);
  printf("ulong: %lu adresse: %p\n", *ptr_ulong_var, ptr_ulong_var);
  printf("llong: %lld adresse: %p\n", *ptr_llong_var, ptr_llong_var);
  printf("ullong: %llu adresse: %p\n", *ptr_ullong_var, ptr_ullong_var);
  printf("float: %f adresse: %p\n", *ptr_float_var, ptr_float_var);
  printf("double: %g adresse: %p\n", *ptr_double_var, ptr_double_var);
  printf("long double: %Lf adresse: %p\n", *ptr_longdouble_var, ptr_longdouble_var);
  
  return 0;
}