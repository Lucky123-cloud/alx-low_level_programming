#include "function_pointers.h"
	#include <stdio.h>
	/**
	 * print_name - print name using pointer to function
	 * @name: string to add
	 * @f: pointer to function
	 * Description: This function takes a string and function as parameters
	 * It checks for NULL pointers and then calls the provided function
	 * Return: nothing
	 **/
	void print_name(char *name, void (*f)(char *))
	{
		if (name == NULL || f == NULL)
			return;


		f(name);
	}

