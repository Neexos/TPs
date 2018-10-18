#include <stdio.h>
#include <stdlib.h>

int main(){
  int i;
  int j;
  int my_int_tab[10];
  float my_float_tab[10];
  
  for(i=0; i<10; i++){
    srand(i);
    my_int_tab[i] = rand();
    if(i%2 == 0){
      *(my_int_tab+i)=*(my_int_tab+i)*3;
    }
    printf("int%i = %i\n", i, *(my_int_tab+i));

  }
  
  for(j=0; j<10; j++){
    srand(j*0.14);
    my_float_tab[j] = rand();
    if(j%2 == 0){
      *(my_float_tab+j)=*(my_float_tab+j)*3;
    }
    printf("float%i = %f\n", j, *(my_float_tab+j));
  }
  return 0;
}