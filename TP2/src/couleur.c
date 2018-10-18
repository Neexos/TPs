#include <stdio.h>

int main(){
  struct Rgba {
    int rouge;
    int vert;
    int bleu;
    int alpha;
  };
  struct Rgba couleurs[10] = {{0x45,0xEA,0xA6,0x57},{0x45,0x72,0x00,0xFF},{0x36,0xCA,0x87,0x00},{0x79,0x2F,0xA0,0x99},{0x67,0xEA,0xD6,0x57},{0x67,0xEA,0xD6,0x57},{0x67,0xEA,0xD6,0x57},{0x71,0xEA,0xD6,0x57},{0x67,0xEA,0xD6,0x57},{0x67,0xEA,0xD6,0x57}};
  int i;
  for(i=0; i<=9; i++){
    printf("couleur %i: %x %x %x %x\n", i, couleurs[i].rouge, couleurs[i].vert, couleurs[i].bleu, couleurs[i].alpha);
  }
  return 0;
}