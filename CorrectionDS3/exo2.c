/*
	Exercice 2 (Palindrome 5.75 pt)
	Un mot est un palindrome lorsqu’il peut se lire à l’envers (de droite à gauche) de la même façon qu’à l’endroit. Exemple :
	les mots kayak et elle sont des palindromes.
	1. 0.75 pt - Dans une fonction principale déclarer une chaîne de caractères pouvant stocker un mot et faire saisir son
	contenu par l’utilisateur.
	2. 3.25 pt Indiquer si le mot saisit est un palindrome ou non.
 * 
 * 
 */


#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	int count=0;
	char word[50];
	int j=0; 
	printf("Saisir un mot: ");
	scanf("%s", word);
	j=strlen(word)-1;
	for(int i=0; i<strlen(word)/2;i++)
	{
		if(word[i]==word[j])
			count++;
		j--;
	}
	if (count==strlen(word)/2)
	{
		printf("palindrome");
	}
	else
	{
		printf("no palindrome");
	}
	return 0;
}

