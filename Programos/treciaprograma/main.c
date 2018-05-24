#include <stdio.h>
#include <stdlib.h>
#include "Funkcija.h"

int main(int argc, char *argv[])
{
    FILE *duom;
    FILE *rez;
    char duom_M[255], rez_M[255];
    duom = fopen(argv[1], "r");
    if(duom == NULL)
    {
        printf("Duomenu failo nera");
        return 0;
    }
    rez = fopen(argv[2], "w");
    if(rez == NULL)
    {
        printf("Neina sukurti rezultatu failo");
        return 0;
    }
    while(fgets(duom_M, 255, duom) != NULL)
    {
		fputs(duom_M, duom);
        //Atrinkimas(duom_M, rez_M);
        //fputs(rez_M, rez);

    }
    fclose(duom);
    fclose(rez);

    return 0;
}