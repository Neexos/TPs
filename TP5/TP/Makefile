CFLAGS=-Wall -Wextra
all: client serveur 
client: client.o repertoire.o
	$(CC) $^ -o $@

repertoire.o: repertoire.h repertoire.c
client.o: client.h client.c

serveur: serveur.o repertoire.o
	$(CC) $^ -o $@

repertoire.o: repertoire.h repertoire.c
serveur.o: serveur.h serveur.c
