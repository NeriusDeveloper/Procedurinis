#ifndef funkcijos_H_INCLUDED
#define funkcijos_H_INCLUDED

typedef struct node{
	int data;
	struct node* next;
	struct node* back;
}List;
void Ivedimas(List**, int);
void Spausdinimas(List*);
void Iterpimas_Pries_Reiksme(List**, int, bool);
void Panaikinimas(List*);

#endif
