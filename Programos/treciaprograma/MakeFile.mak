all: funkcija -o main.o
	gcc main.o funkcija.o -o funkcija
funkcija.o: -funkcija.c
	gcc -c funkcija.c-o funkcija.o
main.o: main.c
	gcc -c main.c -o main.o
clean:
	rm*#IFNDEF