#include "lists.h"

/**
 * list_len - prints all elements in a list
 * @h: pointer to the first node
 *
 * Return: number of elements in a list
 *
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}

