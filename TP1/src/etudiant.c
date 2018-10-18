#include <stdio.h>
#include <math.h>
 
int main(){
  char nom[5][100]={"dupont","durand","blanc","chan","jackson"};
  char prenom[5][100]={"jean","michel","JB","jacky","michael"};
  char adresse[5][100]={"Annecy","Lyon","Paris","Chinatown","USA"};
  int notes[5][2]={{10,15},{5,8},{18,13},{4,9},{14,7}};
  int i = 0;
  for(i=0; i<5; i++){
    printf("nom: %s\nprenom: %s\nadresse: %s\nnotes: %i | %i\n\n",nom[i],prenom[i],adresse[i],notes[i][0],notes[i][1]);
  }
  return 0;
}