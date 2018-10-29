#include "couleur_compteur.h"

int main(int argc, char **argv){
    struct Rgba {
        int red;
        int green;
        int blue;
        int alpha;
        int count;
        
    };
    
    struct Rgba color;
    
    char end[3];
    char fin[3] = "FIN";
    int i = 0;
    
    
    printf("écrivez des couleurs en hexadecimal au format RGBA\n");
    

    
    while(1){
        char couleur[30];
        fgets(couleur, 30, stdin);
        if(couleur[0]!='F' && couleur[1]!='I' && couleur[3]!='N'){
            print_color("color.txt", couleur);
            sscanf(couleur, "%x %x %x %x", &color.red, &color.green, &color.blue, &color.alpha);
        }
        else{
             break;
        }
        printf("%x %x %x %x\n", color.red, color.green, color.blue, color.alpha);
    }
    
    
    return 0;
}
