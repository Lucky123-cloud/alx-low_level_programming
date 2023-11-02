#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: fisrt argument of the function showing number of block
 * @size: measures the size of the array
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
