#include "main.h"

/**
 * _isupper - checks out for uppercase or lowercase letters
 * @c: character char to check if uppercase or lowercase
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
		else
		return (0);
}
