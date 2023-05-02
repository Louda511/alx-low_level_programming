#include "lists.h"

/**
 * sum_listint - prints all elements in a list
 * @head: pointer to first node
 *
 * Return: number of nodes
 *
 */

int sum_listint(listint_t *head)
{
	int n = 0;

	while (head)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
