#include "lists.h"

/**
 * free_listint2 - free the nodes of linked list
 * @head: pointer to pointer the first node
 *
 * Return: nothing
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (head && *head)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}

}
