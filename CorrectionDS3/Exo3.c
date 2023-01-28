/*
1. 1 pts - Dans la fonction principale, demander à l’utlisateur de saisir un nombre entier cote entre compris entre 5 et
20 inclus, et recuperer ce nombre (on s’assurera qu’il correspond bien aux critères demandés).
2. 4.75 pts - Afficher dans le terminal les côtés un carré de dimension ’cote’, ainsi que ses diagonales avec le caractère
’*’. (2.25 pts pour le carré seul, 2.5 pour ses diagonales ).
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	char carre[20][20];
	int cote=0;
	while(1)
	{
		printf("Saisir un nombre entre 5 et 20: ");
		scanf("%d",&cote);
		printf("\n");
		if ((cote>=5) && (cote<=20))
		{
			break;
		}
	}
	for(int i =0; i<cote; i++)
	{
		printf("\n");
		for(int j=0; j<cote; j++)
		{
			carre[i][j]=' ';
		}
	}
	for(int i =0; i<cote; i+=cote-1)
	{
		for(int j=0; j<cote; j++)
		{
			carre[i][j]='*';
		}
	}
	for(int j =0; j<cote; j+=cote-1)
	{
		for(int i=0; i<cote; i++)
		{
			carre[i][j]='*';
		}
	}
	
	for(int i =0; i<cote; i++)
	{
		carre[i][i]='*';
	}
	int k=0;
	for(int i =cote-1; 0<i; i--)
	{
		carre[i][k]='*';
		k++;
	}
	for(int i =0; i<cote; i++)
	{
		printf("\n");
		for(int j=0; j<cote; j++)
		{
			printf("%c", carre[i][j]);
		}
	}
	
	return 0;
}

