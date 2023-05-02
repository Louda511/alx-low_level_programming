#include "lists.h"

/**
 * free_listint - free the nodes of linked list
 * @head - pointer to the first node
 *
 * Return: nothing
 *
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
