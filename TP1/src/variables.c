#include <stdio.h>


int main(){
  char my_char_var = 'a';
  unsigned char my_uchar_var = 234;
  short my_short_var = -12;
  unsigned short my_ushort_var = 65535;
  int my_int1_var = 12;
  unsigned int my_uint1_var = 3456;
  long my_long1_var = -1234553L;
  unsigned long my_ulong_var = 234556UL;
  long long my_llong_var = 1123345LL;
  unsigned long long my_ullong_var = 1234567ULL;
  float my_int_var = 3.14;
  double my_uint_var = 3.14E-12;
  long double my_long_var = 3.14E-22;
  printf("%c \n", my_char_var);
  printf("%c \n", my_uchar_var);
  printf("%hd \n", my_short_var);
  printf("%hu \n", my_ushort_var);
  printf("%i \n", my_int1_var);
  printf("%i \n", my_uint1_var);
  printf("%Lf \n", my_long_var);
  printf("%lu \n", my_ulong_var);
  printf("%llu \n", my_llong_var);
  printf("%llu \n", my_ullong_var);
  printf("%f \n", my_int_var);
  printf("%f \n", my_uint_var);
  printf("%ld \n", my_long1_var);
  
  return 0;
}