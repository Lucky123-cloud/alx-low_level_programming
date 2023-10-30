#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of size size and assigns c
 *
 *  @size: size of the array
 *  @c: character to assign
 *  Description: creates array of size size and assigns c
 *  Return: pointer to array NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
