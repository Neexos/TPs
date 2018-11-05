CFLAGS=-Wall -Wextra
all: repertoire
repertoire: exo2.o repertoire.o
	$(CC) $^ -o $@

exo2.o: exo2.c repertoire.h
repertoire.o: repertoire.h repertoire.c

clean:
	rm *.o repertoire
