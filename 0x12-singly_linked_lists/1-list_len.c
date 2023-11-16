#include "lists.h"

/**
 * list_len - number of elements in a linked list
 *@h: pointer of the list
 *
 *Return: the number of elements
*/

size_t list_len(const list_t *h)
	{
		size_t e = 0;

		while (h)
		{
			e++;
			h = h->next;
		}

		return (e);
	}
