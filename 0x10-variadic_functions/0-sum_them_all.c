#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all the parameters passed to function
 * @n: the number of arguments passed to the function
 * @...: The list added to the program
 *
 * Return: 0 if the n ==0, otherwise sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list pa_list;

	va_start(pa_list, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(pa_list, const unsigned int);
		}
	}
	va_end(pa_list);
	return (sum);
}

