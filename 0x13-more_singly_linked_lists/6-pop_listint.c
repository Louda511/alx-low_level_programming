#include "lists.h"

/**
 * pop_listint - pops the first element in the list
 * @head: pointer to pointer to the first head
 *
 * Return: value n of the first node
 *
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *headnode;

	if (head && *head)
	{
		n = (*head)->n;
		headnode = *head;
		*head = (*head)->next;
		free(headnode);
		return (n);
	}
	return (0);
}
