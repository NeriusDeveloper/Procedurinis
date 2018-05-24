#include <stdio.h>
#include <stdlib.h>
#include "funkcijos.h"

List* Ivedimas(List** head, int x)
{	
		List* temp = (List*)malloc(sizeof(List));
		temp->data = x;
		temp->next = NULL;
		temp->back = NULL;
		if(*head == NULL)
			*head = temp;
		else 
		{
			List* temp1 = *head;
			while(temp1->next != NULL)
			{
				temp1 = temp1->next;
			}
			temp1->next = temp;
			temp->back = temp1;      
		}
}
void Spausdinimas(List* head)
{
	printf("Sarasas yra: ");
	while(head != NULL)
	{
		printf(" %d", head->data);
		head = head->next;
	}
	printf("\n");
}
void Iterpimas_Pries_Reiksme(List** head, int x, bool check)
{
		check = true;
		List* temp1 = *head;
		while(temp1->data != x)
		{
			if(temp1->next == NULL)
			{
				check = false;
				return;
			}
			temp1 = temp1->next;
		}	
		List* temp = (List*)malloc(sizeof(List));
		temp->data = reiksme;
		temp->back = NULL;
		if(temp1->back == NULL)
		{
			*head = temp;
			temp->next = temp1;
			temp1->back = temp;
		}
		else
		{
			temp->next = temp1;
			temp1 = temp1->back;
			temp1->next = temp;
			temp->back = temp1;
			temp1 = temp1->next;
			temp1->back = temp;
		}
	return;
}
void Panaikinimas(List* head)
{	
	List* temp = head;	
	while(temp->next != NULL)
	{		
		head = temp->next;
		free(temp);
		temp = head;
	}
}

