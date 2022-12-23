#include <stdlib.h>
#include "head.h"

LIST NewList(void)
{
	LIST Li;
	Li.NbElement = 0;
	Li.First = NULL;
	Li.Last = NULL;

	return Li;
}

BOOL ListVide(LIST* Li)
{
	if(Li->First == NULL && Li->Last == NULL && Li->NbElement == 0)
		return OUI;
	return NON;
}

int NombreElement(LIST *Li)
{
	return Li->NbElement;
}

ELEMENT* Premier(LIST *Li)
{
	return Li->First;
}

ELEMENT* Dernier(LIST *Li)
{
	return Li->Last;
}

ELEMENT* NewElementList(void)
{
	return (ELEMENT*)malloc(sizeof(ELEMENT));
}

ELEMENT* FreeElement(ELEMENT *El)
{
	free(El);
	return NULL;
}

void AjouteElement(LIST *Li,int x)
{
	ELEMENT *El = NewElementList();
	El->Valeur = x;
	El->Suiv = NULL;

	Li->NbElement = Li->NbElement +1;

	if(!ListVide(Li))
	{
		Li->Last->Suiv = El;
		Li->Last = Li->Last->Suiv;
	}
	else
	{
		Li->First = El;
		Li->Last = El;
	}

	return;
}

void RetirerElement(LIST *Li,int x)
{
	ELEMENT *Temp = Li->First;
	ELEMENT *Precedent;
	while(Temp != NULL)
	{	
		Precedent = Temp;
		if (Temp->Valeur == x)
		{
			Li->NbElement = Li->NbElement - 1;
			Precedent = Temp->Suiv;//pas encore finit

		}
	} 
}
void TrierList(LIST* Li)
{
	Li = NULL;
	return;
}