#include <stdio.h>
#include <stdlib.h>
#include "Funkcija.h"

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
}