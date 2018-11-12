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
    
    struct Dossier{ //liste chainée
        char nom[200];
        struct Dossier *next;
    };
    struct Dossier *first, *cptr, *new; //1er element, pointeur, nouvel element
    
    if(strcmp(first->nom, "") == 0){
        strcpy(first->nom, dossier); //le premier element de la liste chainée est le dossier parent
        strcpy(first->next, NULL); //le pointeur pointe vers la fin de la liste chainée
        
        while(1){
            entite = readdir(chemin);        
            if (entite == NULL){
                break;
            }
            else if(entite->d_type == DT_DIR){
                if(strcmp(entite->d_name, ".") != 0 && strcmp(entite->d_name, "..") != 0){
                    new = malloc(sizeof(struct Dossier));
                    
                    char* new_dossier = malloc(strlen(dossier)+strlen(entite->d_name)+2);//allocation  de place en mémoire
                    memset(new_dossier,0,strlen(dossier)+strlen(entite->d_name)+2);
                    strcat(new_dossier, dossier);
                    strcat(new_dossier, "/");
                    strcat(new_dossier, entite->d_name);
                    strcpy(new->nom, new_dossier); //si le dossier n'est pas "." ou "..", new.nom devient le nom du sous-dossier.
                    
                    new->next = first->next;
                    first->next = new;
                }
            } 
        }
    }
}
