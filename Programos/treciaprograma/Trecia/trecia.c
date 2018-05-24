#include <stdio.h>
#include <stdlib.h>

void Atrinkimas(char duom_M[], char rez_M[]);
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
        Atrinkimas(duom_M, rez_M);
        fputs(rez_M, rez);

    }
    fclose(duom);
    fclose(rez);

    return 0;
}
void Atrinkimas(char duom_M[], char rez_M[])
{
    int i,j, sk = 0, k = 0, t = 0, a;
    for(i = 0; i < 255; i++)
    {
        rez_M[t] = duom_M[i];
        t++;
        if(duom_M[i] == 32 || duom_M[i] == 10 || duom_M[i] == 0)
        {
            for(j = i; j > k; j--)
                sk++;
            if(sk % 2 != 0)
            {
                a = (sk/2)+1;
                if(duom_M[i-a] >= 48 && duom_M[i-a] <= 57)
                {
                    t = t - (sk + 1);
                    rez_M[t] = ' ';
                    t++;
                }
            }
        k = i + 1;
        sk = 0;
        }
    }
    printf("\n");
}

