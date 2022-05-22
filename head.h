#ifndef __head__h__
#define __head__h__

typedef enum
{
	NON,OUI
}BOOL;

typedef struct ELEMENT
{
	int Valeur;
	struct ELEMENT *Suiv;
}ELEMENT;

typedef struct LIST
{
	int NbElement;
	ELEMENT *First;
	ELEMENT *Last;
}LIST;

LIST NewList(void);
BOOL ListVide(LIST*);
int NombreElement(LIST*);
ELEMENT* Premier(LIST*);
ELEMENT* Dernier(LIST*);
ELEMENT* NewElementList(void);
ELEMENT* FreeElement(ELEMENT*);
void AjouteElement(LIST*,int);
void RetirerElement(LIST*,int);
void TrierList(LIST*);


#endif