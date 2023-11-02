#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatinates two strings together
 * where the second string is an unknown n value
 *
 * @s1: string one
 * @s2: string two
 * @n: number of concatinating elements from s2
 *
 * Return: pointer to the new allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t i, j, K;

	char *s;


	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
	}
	if (j > n)
		j = n;
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return (NULL);
	for (K = 0; K < i; K++)
		s[K] = s1[K];
	for (K = 0; K < j; K++)
		s[K + i] = s2[K];
	s[i + j] = '\0';
	return (s);
}
