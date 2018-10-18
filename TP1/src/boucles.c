#include <stdio.h>

int main(){
  int count = 6;
  int a;
  int b;
  for (a = 1; a < count+1; a = a +1){
    for (b = 1; b < a+1; b = b+1){
      if (a > 2 && a < count && b > 1 && b < a){
	printf("#"); 
      }else{
	printf("*"); 
      } 
    }
    printf("\n");
  }
  return 0;
}