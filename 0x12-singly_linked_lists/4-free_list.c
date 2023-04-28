#include "lists.h"

/**
 * free_list - deallocates all the memory allocated for the nodes
 * @head: pointer to the first node
 *
 * Return: nothing
 *
 */

void free_list(list_t *head)
{
	list_t *currentnode;

	while (head != NULL)
	{
		currentnode = head;
		head = head->next;
		free(currentnode->str);
		free(currentnode);
	}
}
