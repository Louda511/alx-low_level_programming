#include "lists.h"

/**
 * print_listint - prints all elements in a list
 * @h: pointer to first node
 *
 * Return: number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
