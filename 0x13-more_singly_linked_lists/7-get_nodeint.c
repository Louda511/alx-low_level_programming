#include "lists.h"

/**
 * get_nodeint_at_index - finds node at index
 * @head: pointer to the first node
 * @index: index of the requested node
 *
 * Return: address of the node at index
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head)
	{
		if (counter == index)
			return (head);
		head = head->next;
		counter++;
	}

	return (NULL);

}
