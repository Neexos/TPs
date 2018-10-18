#include <stdio.h>


int main(){
  
  int num1 = 10;
  int num2 = 15;
  
  char c = '~';
  
  switch (c){
    case '+':
      printf("resultat : %i \n", num1+num2); 
      break;
     
    case '*':
      printf("resultat : %i \n", num1*num2); 
      break;
      
    case '-':
      printf("resultat : %i \n", num1-num2); 
      break;
      
    case '/':
      printf("resultat : %i \n", num1/num2); 
      break;
      
    case '%':
      printf("resultat : %i \n", num1%num2); 
      break;
      
    case '&':
      printf("resultat : %i \n", num1&num2); 
      break;
      
    case '|':
      printf("resultat : %i \n", num1|num2); 
      break;
      
    case '~':
      printf("resultat : %i \n", ~num2); 
      break;
  }
  return 0;
}