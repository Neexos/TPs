#include "couleur_compteur.h"

int main(int argc, char **argv){
    struct Rgba {
        int red;
        int green;
        int blue;
        int alpha;
    };
    
    char end[3];
    
    printf("écrivez des couleurs en hexadecimal au format RGBA\n");
    struct Rgba *couleurs = fgets(end, 3, stdin);
    
    for(int i=0; i<=9; i++){
        printf("couleur %i: %hhx %hhx %hhx %hhx\n", i, couleurs[i].red, couleurs[i].green, couleurs[i].blue, couleurs[i].alpha);
    }
}
