#ifndef FONTION_ENFILER
#define FONTION_ENFILER
struct maillon_double{ //déclaration de la liste chainée
    int num;
    struct maillon_double* next;
};


struct File{ //déclaration de la file
    struct maillon_double* first;
};

struct File* initialise();
void enfiler(int valeur, struct File* queue);
void afficherFile(struct File* queue);
#endif

#ifndef FONTION_DEFILER
#define FONTION_DEFILER
int defiler(struct File* queue);
#endif
