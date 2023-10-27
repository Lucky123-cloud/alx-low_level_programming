#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 *  _memset - main function of the project
 *
 *  @s: character 1 of the program
 *  @b: character 2 of the program
 *  @n: the desired output of the program
 *  Return: arrays with new value of n byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	return memset(s, b, n);
}
