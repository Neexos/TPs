#include <stdio.h>

int main(){
  int count = 6;
  int a = 1;
  int b = 1;
  
  while ( a <= count ){
    b = 1;
    while ( b <= a ){
      if (a > 2 && a < count && b > 1 && b < a){
	printf("#"); 
      }else{
	printf("*"); 
      } 
      b=b+1;
    }
    printf("\n");
    a=a+1;
    
  }
  return 0;
}