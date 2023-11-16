#include "lists.h"

/**
* print_list - prints all the elements of a list
*
* @h:pointer to the list
*
*Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
const list_t *c = h;
size_t counted = 0;

while (c != NULL)
{
if (c->str != NULL)
printf("[%d] %s\n", c->len, c->str);
else
printf("[0] (nil)\n");
counted += 1;
c = c->next;
}

return (counted);
}
