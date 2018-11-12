struct liste_couleurs{
    struct couleur;
    struct liste_couleurs *next;
    struct liste_couleurs *prev;
};

struct couleur{
    unsigned char red;
    unsigned char green;
    unsigned char blue;
    unsigned char alpha;
    struct couleur *next;
    struct couleur *prev;
};

#ifndef INSERTION
#define
void insertion(struct couleur *cptr, struct liste_couleurs *listptr);
#endif

#ifndef PARCOURS
#define
void parcours(struct liste_couleurs *listptr);
#endif

