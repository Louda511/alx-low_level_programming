#include "lists.h"

/**
 * size_t print_list - prints all elements in a list
 * @h: pointer to the first node
 *
 * Return: number of elements in a list
 *
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while(h != NULL)
	{
		h->str ? printf("[%d] %s", h->len, h->str) : printf("[0] (nil)");
		n++;
		h = h->next;
	}
	return (n);
}

