#include <stdio.h>

int main(){
  struct Etudiants{ //création de la structure Etudiant pour plus de clareté
    char nom[30];
    char prenom[30];
    char adresse[30];
    short notes[30];
  };
  struct Etudiants etudiant1 = {"dupont","michel","3rue du cu",{10,18}}; //utilisation de la structure
  struct Etudiants etudiant2 = {"dup","jean","59 route de ...",{4,11}};
  struct Etudiants etudiant3 = {"frigo","jacques","21 avenue de la...",{7,8}};
  struct Etudiants etudiant4 = {"zimmer","eude","169 route ...",{6,1}};
  printf("etudiant1: %s %s %s %hu %hu\n", etudiant1.nom, etudiant1.prenom, etudiant1.adresse, etudiant1.notes[0], etudiant1.notes[1]);
  printf("etudiant2: %s %s %s %hu %hu\n", etudiant2.nom, etudiant2.prenom, etudiant2.adresse, etudiant2.notes[0], etudiant2.notes[1]);
  printf("etudiant3: %s %s %s %hu %hu\n", etudiant3.nom, etudiant3.prenom, etudiant3.adresse, etudiant3.notes[0], etudiant1.notes[1]);
  printf("etudiant4: %s %s %s %hu %hu\n", etudiant4.nom, etudiant4.prenom, etudiant4.adresse, etudiant4.notes[0], etudiant4.notes[1]);
  return(0);
}