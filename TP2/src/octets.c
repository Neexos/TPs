#include <stdio.h>

int main(){
    short var_short = 127;//declaration de la valeur
    char* ptr_short = (char*)&var_short; //declaration du pointeur char qui possede une taille d'un octet
    
    int var_int = 19;
    char *ptr_int = (char*)&var_int;
    
    long var_long = -7654321L;
    char *ptr_long = (char*)&var_long;
    
    float var_float = 2.718281828;
    char *ptr_float = (char*)&var_float;
    
    double var_double = 2.71E-5;
    char *ptr_double = (char*)&var_double;
    
    int i;
    for(i=0;i<sizeof(short);i++){ 
        printf("l'octet %i de short est %hhx \n", i, *(ptr_short+i));
    }
    printf("----------------------\n"); //utiliser 
    for(i=0;i<sizeof(int);i++){
        printf("l'octet %i de int %hhx \n", i, *(ptr_int+i));
    }
    printf("----------------------\n");
    for(i=0;i<sizeof(long);i++){
        printf("l'octet %i de long %hhx \n", i, *(ptr_long+i));
    }
    printf("----------------------\n");
    for(i=0;i<sizeof(float);i++){
        printf("l'octet %i de float %hhx \n", i, *(ptr_float+i));
    }
    printf("----------------------\n");
    for(i=0;i<sizeof(double);i++){
        printf("l'octet %i de double %hhx \n", i, *(ptr_double+i));
    }
    return 0;
}