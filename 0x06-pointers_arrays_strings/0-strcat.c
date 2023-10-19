#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * @src: The source string to append to dest.
 * @dest: The destination string, where src will be appended.
 *
 * Return: A pointer to the destination string `dest`.
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i;

		for (i = 0; dest[i] != '\0'; i++)
		destlen++;

		for (i = 0; src[i] != '\0'; i++)
		srclen++;

		for (i = 0; i <= srclen; i++)
	{
		dest[destlen + i] = src[i];
	}
	return (dest);
}
