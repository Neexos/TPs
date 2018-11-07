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

void lire_dossier_recursif(char* dossier){
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
        printf("%s\n", entite->d_name);
    }
    closedir(chemin);
}

void lire_dossier_iteratif(char* dossier){
    DIR* chemin = opendir(dossier);
    struct dirent *entite;
    
    struct Dossier *level{ //liste chainée
        char nom;
        struct Dossier *next;
    };
    struct Dossier *cptr; //pointeur pour la liste chainée
    
    while(1){
        entite = readdir(chemin);        
        if (entite == NULL){
            break;
        }
        else if(entite->d_type == DT_DIR){
            if(strcmp(entite->d_name, ".") != 0 && strcmp(entite->d_name, "..") != 0){
                level = malloc(sizeof(struct Dossier));
                level->nom = entite->d_name; //si le dossier n'est pas "." ou "..", level.nom devient le nom du sous-dossier.
                
            }
        } 
    }
}
