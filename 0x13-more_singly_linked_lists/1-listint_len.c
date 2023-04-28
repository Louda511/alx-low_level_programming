#include "lists.h"

/**
 * listint_len - prints all elements in a list
 * @h: pointer to first node
 *
 * Return: number of nodes
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
