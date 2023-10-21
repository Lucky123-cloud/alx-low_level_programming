#include "main.h"

/**
 * _puts - function of the project
 * @str: the parametor of the function
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	_putchar (str[i]);
	_putchar ('\n');
}
