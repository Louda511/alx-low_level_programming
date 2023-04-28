#include "lists.h"

/**
 * sum_listint - prints all elements in a list
 * @h: pointer to first node
 *
 * Return: number of nodes
 *
 */

int sum_listint(listint_t *head)
{
	int n = 0;

	while (h)
	{
		n += h->n;
		h = h->next;
	}
	return (n);
}
