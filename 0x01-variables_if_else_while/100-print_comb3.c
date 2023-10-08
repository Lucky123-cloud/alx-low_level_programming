#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * in ascending order, separeted by comma followed by space
 *
 * Return: Always 0
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit2 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar(digit1 + '0');
			putchar(digit2 + '0');

			if (!(digit1 == 8 && digit2 == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}