/*
1. 0.25 pts - Definir une constante TAILLE valant 100
 * 2. 0.75 pts - Écrire une fonction/procédure remplirTab qui va remplir un tableau d’entiers passé en paramètre (et dont
la taille sera également passée en paramètre) avec des valeurs aléatoires entre 0 et 30 incluses.
 * 	3. 0.75 pts - Écrire une fonction/procédure afficheTab permettant d’afficher les valeurs d’un tableau d’entiers passé en
argument et dont la taille sera également un argument.
* 	4. 1.25 pts - Écrire une fonction/procédure maxTab permettant de retourner la valeur maximale d’un tableau d’entiers
passé en argument et dont la taille sera également un argument.
* 5. 1.25 pts - Écrire une fonction/procédure moyenneTab permettant de retourner la moyenne des valeurs d’un tableau
d’entiers passé en argument et dont la taille sera également un argument.
* 6. 1.5 pts - Écrire une fonction/procédure varTab qui prendra en paramètre un tableau d’entiers et sa taille, et qui va
retourner la variance de ce tableau. On rappelle que la variance est la moyenne des carrés des écarts par rapport
à la moyenne soit la formule (avec n le nombre d’échatillon, xi les échantilons et M la moyenne)
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TAILLE 100


void remplirTab(int tab[], int taille)
{
	for(int i=0; i<taille; i++)
	{
		tab[i]= rand()%31;
	}
}

void afficherTab(int tab[], int taille)
{
	for(int i=0; i<taille; i++)
	{
		printf("[%d] ",tab[i]);
	}
}

int maxTab(int tab[], int taille)
{
	int max=tab[0];
	for(int i =0; i<taille; i++)
	{
		if(max<tab[i])
		{
			max=tab[i];
		}
	}
	return max;
}
float moyenneTab(int tab[], int taille)
{
	float moyenne=0;
	for(int i =0; i<taille; i++)
	{
		moyenne+=tab[i];
	}
	return moyenne/taille;
}
double varTab(int tab[],int taille)
{
	float M= moyenneTab(tab,taille);
	float v=0;
	for(int i =0; i<taille; i++)
	{
		v+=pow(tab[i]-M,2);
	}
	return v/100;
}
int main(int argc, char **argv)
{
	srand(time(NULL));
	int tab[TAILLE];
	int res[31]={0};
	remplirTab(tab,TAILLE);
	afficherTab(tab, TAILLE);
	printf("\n");
	printf("\n");
	printf("moyenne : %3.f",moyenneTab(tab, TAILLE));
	printf("\n");
	printf("écart type: %lf", sqrt(varTab(tab,TAILLE)));
	printf("\n");
	for(int i=0; i<31; i++)
	{
		for(int j=0; j<TAILLE; j++)
		{
			if(i==tab[j])
				res[i]+=1;
		}
	}
	for(int j=0; j<31; j++)
		{
			printf("%d: %d \n",j,res[j]);
		}
		printf("mode: %d",maxTab(res, 31));
	return 0;
}

