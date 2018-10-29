#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fichier.h"

int main(int argc, char **argv){ //passer le nom de fichier a lire ou modifier en 2eme argument lors de l'appel du programme.
    if (argc<=1 | argc>2){
        printf("passez le nom du fichier comme seul argument\n");
    }
    else{
        int c;
        char phrase[100];
        
        printf("selectionnez l'option:\n1.Lire le fichier\n2.Ecrire dans le fichier\n");
        scanf("%d", &c);
        fflush(stdin);
                
        switch (c){
            
            case 1:
                lire_fichier(argv[1]);
                break;
                
            case 2:
                
                printf("entrez le mot à écrire dans le fichier:\n");
                getchar();
                fgets(phrase, 100, stdin);
                ecrire_dans_fichier(argv[1],phrase);
                break;
            
            default: 
                printf("veuillez entrer un choix possible\n");
                break;
            
        }
    }        
    return 0;
}
