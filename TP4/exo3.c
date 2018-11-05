#include "repertoire.h"
#include <stdio.h>

int main(int argc, char** argv){
    if(argc < 2){
        printf("Appelez le programme avec le chemin en argument\n");
    }
    else{
        lire_dossier_recursif(argv[1]);
    }
    return 0;
}
