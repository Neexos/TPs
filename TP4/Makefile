CFLAGS=-Wall -Wextra
all: repertoire repertoire_recursif repertoire_iteratif
repertoire: exo2.o repertoire.o
	$(CC) $^ -o $@

exo2.o: exo2.c repertoire.h
repertoire.o: repertoire.h repertoire.c

repertoire_recursif: exo3.o repertoire.o
	$(CC) $^ -o $@

exo3.o: exo3.c repertoire.h

repertoire_iteratif: exo4.o repertoire.o
	$(CC) $^ -o $@

exo4.o: exo4.c repertoire.h

clean:
	rm *.o repertoire
