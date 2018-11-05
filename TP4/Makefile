CFLAGS=-Wall -Wextra
all: repertoire repertoire_recursif
repertoire: exo2.o repertoire.o
	$(CC) $^ -o $@

exo2.o: exo2.c repertoire.h
repertoire.o: repertoire.h repertoire.c

repertoire_recursif: exo3.o repertoire.o
	$(CC) $^ -o $@

exo3.o: exo3.c repertoire.h

clean:
	rm *.o repertoire
