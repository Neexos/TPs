#include <stdio.h>
#include <math.h>
 
int main(){
  int decimal = 65535;
  int dec = decimal; // on garde la valeur décimale de départ pour l'affichage en sortie (clareté)
  long bin = 0;
  int i = 0;
  
  for(i=16; i>=0; i--){ //on suppose que le nombre en entrée est inférieur à 2^16
    double puiss = pow(2, i);
      if(puiss<=dec){
	dec = dec-puiss;
	bin = bin + pow(10, i);
      }
  }
  printf("le binaire de %i est %ld\n",decimal,bin);
  return 0;
}