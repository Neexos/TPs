#include "etudiant_db.h"

int main(int argc, char **argv){
    
    struct Etudiants{ //création de la structure Etudiant pour plus de clareté
        char nom[30];
        char prenom[30];
        char adresse[30];
        short notes[10];
    };
    
    struct Etudiants etu[5];
    
    int i;
    for (i=0; i<5; i++){
        printf("entrez le nom de l'étudiant\n");
        fgets(etu[i].nom, 30, stdin);
        
        printf("entrez le prenom de l'étudiant\n");
        fgets(etu[i].prenom, 30, stdin);
        
        printf("entrez l'adresse de l'étudiant\n");
        fgets(etu[i].adresse, 30, stdin);
        
        printf("entrez les notes de l'étudiant (séparées d'un espace)\n");
        char note1[10];
        fgets(note1, 10, stdin);
        sscanf(note1, "%hd %hd", &etu[i].notes[0], &etu[i].notes[1]);
        
        char fin[100];// chaine contenant toute les info d'un etudiant
        strncat(fin, etu[i].nom, strlen(etu[i].nom)-1); // utilisation de strncat jusqu'a strlen()-1 afin de supprimer le retour chariot
        strcat(fin, ",");
        strncat(fin, etu[i].prenom, strlen(etu[i].prenom)-1);// utilisation de strncat jusqu'a strlen()-1 afin de supprimer le retour chariot
        strcat(fin, ",");
        strncat(fin, etu[i].adresse, strlen(etu[i].adresse)-1);// utilisation de strncat jusqu'a strlen()-1 afin de supprimer le retour chariot
        strcat(fin, ",");
        char a[10];
        sprintf(a,"%d",etu[i].notes[0]);
        strcat(fin, a);
        strcat(fin, ",");
        char b[10];
        sprintf(b,"%d",etu[i].notes[1]);
        strcat(fin, b);
        strcat(fin, "\n");
        name_etud("etudiants.txt", fin);//ecriture des infos d'un etudiant dans le fichier texte
        strcpy(fin, "");//réinitialisation de la chaine de caractère à copier dans le fichier texte
    }
    
    return 0;
}
