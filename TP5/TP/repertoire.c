#include <sys/types.h>
#include <dirent.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

char lire_dossier_recursif(char* dossier){
    DIR* chemin = opendir(dossier);
    struct dirent *entite;
    while(1){
        entite = readdir(chemin);        
        if (entite == NULL){
            break;
        }
        else if(entite->d_type == DT_DIR){
            if(strcmp(entite->d_name, ".") != 0 && strcmp(entite->d_name, "..") != 0){
            char* new_dossier = malloc(strlen(dossier)+strlen(entite->d_name)+2);
            memset(new_dossier,0,strlen(dossier)+strlen(entite->d_name)+2);
            strcat(new_dossier, dossier);
            strcat(new_dossier,"/");
            strcat(new_dossier, entite->d_name);
            lire_dossier_recursif(new_dossier);
            }
        }
        char folder[256] = entite->d_name;
        printf("%s\n", folder);
        return folder;
    }
    closedir(chemin);
}
