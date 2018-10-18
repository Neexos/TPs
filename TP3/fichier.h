#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

char lire_fichier(char *filename){
    int fd,size;
    char caracteres;
    
    fd = open(filename, O_RDONLY);
    while(1){ //equivalent de while TRUE (boucle infinie).
        size = read(fd, &caracteres, sizeof(caracteres));
        if (size < 1) {
            break;
        }
        printf("%c", caracteres);
    }
    close(fd);
    printf("\n");
}



char ecrire_dans_fichier(char *filename, char *message){
    int fd,size;
    
    fd = open(filename, O_CREAT|O_WRONLY);
    size = write(fd, message, sizeof(message));
    close(fd);
}
