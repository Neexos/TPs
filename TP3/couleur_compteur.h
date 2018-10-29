#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

char print_color(char *filename, char *message){
    int fd,size;
    
    fd = open(filename, O_CREAT|O_WRONLY|O_APPEND);
    size = write(fd, message, strlen(message));
    close(fd);
}
