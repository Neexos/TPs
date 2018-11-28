#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pile.h"

struct maillon_simple{ //déclaration de ma liste chainée
    int num;
    struct maillon_simple* next;
};

struct maillon_simple* empiler(int valeur, struct maillon_simple* first){
    struct maillon_simple* new = malloc(sizeof(struct maillon_simple));
    new->num = valeur;
    new->next = first;
    return new;
}


/**********FONCTION DEPILER***************/
int depiler(struct maillon_simple** first){
    int a;
    if((*first) == NULL){
        printf("pas d'élément à dépiler");
    }
    else{
        a = (*first)->num; // on sauvegarde la valeur à dépiler
        struct maillon_simple* old = *first; //on sauvegarde l'élément à free ensuite
        (*first) = (*first)->next;
        free(old);
    }
    return a;
}



int main(){
    struct maillon_simple* first = NULL;
    
    for(int i=0;i<5;i++){
        first = empiler(i,first);
    }
    while(first != NULL){
        printf("%i\n", depiler(&first));
    }
    return 0;
}
