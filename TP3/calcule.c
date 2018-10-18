#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operators.h"

int main(int argc, char **argv){
    
    if (argc != 4 | argc > 4){
        printf("veuillez entrer 3 arguments:\n-l'operateur entre ''\n-le premier nombre\n-le second nombre\n");
    }
    else{
        char op = *argv[1];
        int num1 = atoi(argv[2]);
        int num2 = atoi(argv[3]);
        
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
    }
    
return 0;
}
