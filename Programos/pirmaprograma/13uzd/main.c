// Nerius Zarnauskas
#include <stdio.h>
int main()
{
        int G, i, teig = 0, san = 1, sum = 0, kiek = 0;// aprasome kintamuosius
        scanf("%d", &G);// nuskaitome skaiciu G
        scanf("%d", &i);// nuskaiome pirma sekos nari
            while(i != G)// Sukame cikla tol kol neivedamas skaicius G
            {
                        kiek++;// skaiciuojame sekos nariu kieki
                        if(i < 0)
                        {
                                sum+=i;// skaiciuojame neigiamu sekos nariu suma
                                san*=i;// skaiciuojame neigiamu sekos nariu sandauga
                        }
                        if(i > 0)
                                teig++;// skaiciuojame teigiamu sekos nariu kieki
                        scanf("%d", &i);// nuskaitome sekos skaicius
            }
        printf("Ivestu nariu skaicius %d\n",kiek);// spausdiname ivestu nariu kieki
        printf("Teigiamu nariu skaicius %d\n", teig);// spausdiname teigiamu nariu kieki
        if(sum == 0)
            printf("Neigiamu skaiciu nera\n");// jei neigiamu skaiciu nera spausdiname kad ju nera
        else
        {
            printf("Neigiamu nariu suma %d\n", sum);// spausdiname neigiamu nariu suma
            printf("Neigiamu nariu sandauga %d\n", san);// spausdiname neigiamu nariu sandauga
        }
        return 0;
}
