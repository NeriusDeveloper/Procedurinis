#include <stdio.h>
#include <stdlib.h>
//13. Ávesti sveikà skaièiø N. Ávesti N sveikø skaièiø a1, a2, ... aN. Apskaièiuoti, kiek yra
//skaièiø lygiø maksimumui ir kiek lygiø minimumui. Iðvesti ávestus skaièius, iðmetus
//lygius maksimumui ir minimumui.
//Nerius Zarnauskas
void skaiciavimai(int *M, int N, int **atsM, int *atsD, int *maxi, int *mini);
int main()
{
    int *M, N, i, atsD, maxi, mini;
    int *atsM;

    printf("Iveskite skaiciu N\n");
    scanf("%d", &N);

    M = (int*)malloc(N*sizeof(int*));

    for(i = 0; i < N; i++)
    {
        scanf("%d", M+i);
    }
	for(i = 0; i < N; i++)
    {
        printf("%d\n", *(M+i));
    }
    skaiciavimai(M, N, &atsM, &atsD, &maxi, &mini);

    printf("Maximumu skaicius: %d\n", maxi);
    printf("Minimumu skaicius: %d\n", mini);
    printf("Skaiciai be maximumu ir minimumu:\n");

    for(i = 0; i < atsD; i++)
    {
        printf("%d\n", atsM[i]);
    }
    free(M);
    free(atsM);

    return 0;
}
void skaiciavimai(int *M, int N, int **atsM, int *atsD, int *maxi, int *mini)
{
    int i, did, maz, a = 0, j;
    did = M[0];
    maz = M[0];
    *maxi = 0;
    *mini = 0;
    *atsM = malloc(N*sizeof(int*));
    *atsD = N;
    for(i = 0; i < N; i++)
    {
        if(M[i] == did)
            a++;
        (*atsM)[i] = M[i];
        if(M[i] > did)
            did = M[i];
        if(M[i] < maz)
            maz = M[i];
    }
    if(a != N)
    {
        for(i = 0; i < *atsD; i++)
        {
            if((*atsM)[i] == did || (*atsM)[i] == maz)
            {
                if((*atsM)[i] == did)
                    *maxi+=1;
                else *mini+=1;
                for(j = i; j < (*atsD)-1; j++)
                    (*atsM)[j] = (*atsM)[j+1];
                *atsD-=1;
                i--;
            }
        }
    }
    else
    {
        *maxi = 0;
        *mini = 0;
    }
}
