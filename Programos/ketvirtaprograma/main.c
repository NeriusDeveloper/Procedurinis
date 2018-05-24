#include <stdio.h>
#include <stdlib.h>
#include "funkcijos.h"


int main()
{
	int sk, n, i, x, reiksme;
	bool check;
	List* head = NULL; // sukuriame tuscia sarasa
	printf("Noredami ivesti srasao elementus iveskite 1\n");
	printf("Noredami Iterpti elementa pries nurodyta reiksme iveskite 2\n");
	printf("Noredami istrinti sarasa iveskite 3\n");
	printf("Noredami spausdinti sarasa iveskite 4\n");
	printf("Noredami uzbaigti darba iveskite 5\n");
	scanf("%d", &sk);
	while(1)
	{
		switch(sk)
		{
			case 1:
				printf("Iveskite saraso dydi\n");
				scanf("%d", &n);
				for(i = 0; i < n; i++)
				{
					printf("Iveskite %d elementa \n", i+1);
					scanf("%d", &x);
					head = Ivedimas(head, x); // ivedame saraso elementus
				}
			case 2:
				if(head == NULL)
				printf("nera pries ka iterpti - Sarasas tuscias\n");
				else
				{
					printf("Iveskite reiksme pries kuria bus ivestas naujas elementas\n");
					scanf("%d", &x);
					printf("Iveskite naujo elemento reiksme\n");
					scanf("%d", &reiksme);
					Iterpimas_Pries_Reiksme(&head, x, check);// Iterpiame elementa pries nurodyta reiksme
					if(check == false)
					printf("Sarase tokio elemento nera\n");
				}
			case 3:
			Panaikinimas(head); // Panaikiname sarasa
			case 4:
			Spausdinimas(head);  // Spausdiname sarasa
			case 5:
			exit(0);
			
		}
		
	
		
		
	}
	return 0;
}
