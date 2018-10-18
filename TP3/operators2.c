#include <stdio.h>
#include "operators.h"

int main(){
  
  int num1 = 10;
  int num2 = 15;
  char op = '%';
  
  switch (op){
    case '+':
      printf("resultat : %i \n", somme(num1,num2)); 
      break;
     
    case '*':
      printf("resultat : %i \n", produit(num1,num2)); 
      break;
      
    case '-':
      printf("resultat : %i \n", difference(num1,num2)); 
      break;
      
    case '/':
      printf("resultat : %i \n", quotient(num1,num2)); 
      break;
      
    case '%':
      printf("resultat : %i \n", modulo(num1,num2)); 
      break;
      
    case '&':
      printf("resultat : %i \n", et(num1,num2)); 
      break;
      
    case '|':
      printf("resultat : %i \n", ou(num1,num2)); 
      break;
      
    case '~':
      printf("resultat : %i \n", negation(num1)); 
      break;
    default:
        printf("veuillez entrer un operateur valide");
        break;
  }
  return 0;
}
