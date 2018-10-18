#include <stdio.h>


int main(){
  int a=1000;
  int i;
  for ( i=1; i<=a; i=i+1){
    if ( i%2 == 0 && i%15 == 0 ){
      printf("numero divisible par 2 ou 15 : %i \n",i);
      continue;
    }
    if ( i%103==0 || i%107==0 ){
      printf("numero divisible par 103 ou 107 : %i \n",i);
      continue;
    }
    if ( (i%7 == 0 || i%5 == 0) && i%3 > 0 ){
      printf("numero divisible par 7 ou 5 mais pas par 3 : %i \n",i);
      continue;
    }
  }
  return 0;
}