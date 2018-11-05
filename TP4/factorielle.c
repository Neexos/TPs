#include <stdio.h>

int main(){
    int factorielle (int num) { 
        if (num == 0) { 
        return 1; 
        } 
        else { 
        return (num * factorielle (num-1)); 
        } 
    } 
    
    
    int a = factorielle(4);
    printf("%i\n",a);
    return 0;
}

