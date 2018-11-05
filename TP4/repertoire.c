#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>

void lire_dossier(char* dossier){
    DIR* chemin = opendir(dossier);
    struct dirent *entite;
    while(1){
        entite = readdir(chemin);
        if (entite == NULL){
            break;
        }
        printf("%s\n", entite->d_name);
    }
    closedir(chemin);
}

void lire_dossier_recursif(){
    DIR* chemin = opendir(dossier);
    struct dirent *entite;
    while(1){
        entite = readdir(chemin);
        
        
        
        
        if (entite == NULL){
            break;
        }else if(entite->d_type == ){
            
        }
        printf("%s\n", entite->d_name);
    }
    closedir(chemin);
}
