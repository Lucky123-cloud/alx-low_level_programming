#include "main.h"
/**
 * swap_int - function of the project
 * @a: fisrt paramenter
 * @b: second parameter
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
