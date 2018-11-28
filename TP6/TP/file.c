#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "file.h"

struct File* initialise(){
    struct File* queue = malloc(sizeof(*queue));
    queue->first = NULL;
    return queue;
};

/**********FONCTION ENFILER***************/

void enfiler(int valeur, struct File* queue){
    struct maillon_double* new = malloc(sizeof(struct maillon_double));
    if (queue == NULL || new == NULL){
        exit(EXIT_FAILURE);
    }
    
    new->num = valeur;
    new->next = NULL;
    
    if(queue->first != NULL){  //si queue n'est pas vide
        struct maillon_double* current = queue->first; //on se positionne sur le 1er
        while(current->next != NULL){ //tant qu'on ne pointe pas vers NULL on remponte dans la file
            current = current->next;
        }
        current->next = new;
    }
    else{ //si queue est vide
        queue->first = new;
    }
}

/**********FONCTION DEFILER***************/
int defiler(struct File* queue){
    
    if(queue == NULL){ //si notre queue est vide
        printf("pas d'élément à défiler");
    }
    
    int a = 0;
    
    if(queue->first != NULL){
        struct maillon_double* queue_item = queue->first;
        
        a = queue_item->num;
        queue->first = queue_item->next;
        free(queue_item);
    }
    return a;
}
/**********FONCTION AFFICHER FILE***************/
void afficherFile(struct File* queue){
    if (queue == NULL)
    {
        exit(EXIT_FAILURE);
    }

    struct maillon_double* element = queue->first;

    while (element != NULL)
    {
        printf("%d ", element->num);
        element = element->next;
    }

    printf("\n");
}

int main(){
    struct File* my_queue = initialise();
    
    for(int i=0;i<5;i++){
       enfiler(i,my_queue);
    }
    
    printf("File avant:\n");
    afficherFile(my_queue);
    
    printf("\non sort %d de la file\n", defiler(my_queue));
    printf("\non sort %d de la file\n", defiler(my_queue));

    printf("\nFile après:\n");
    afficherFile(my_queue);
    
    return 0;
}
