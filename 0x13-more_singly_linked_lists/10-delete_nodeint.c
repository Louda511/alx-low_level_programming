#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to pointer to the first node
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *d_node;
	unsigned int i = 0;

	if (head)
	{
		node = *head;
		while (node)
		{
			if (i == index)
			{
				if (index == 0)
				{
					*head = node->next;
					free(node);
					return (1);
				}
				d_node = node->next;
				node->next = (d_node)->next;
				free(d_node);
				return(1);
			}
			node = node->next;
			i++;
		}
	}
	return(-1);
}	
