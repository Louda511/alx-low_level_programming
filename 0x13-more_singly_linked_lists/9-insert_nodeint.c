#include "lists.h"

/**
 * insert_nodeint_at_index - adds a node at a certain index
 * @head: pointer to pointer to the first node
 * @idx: index where the node will be put
 * @n: data value of the node
 *
 * Return: Address of the new node or NULL if it fails
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *prevnode;
	unsigned int i;

	
	if (head)
	{
		node = malloc(sizeof(listint_t));
		if (!node)
			return (NULL);
		node->n = n;
		node->next = NULL;

		if (idx == 0)
		{
			node->next = (*head)->next;
			*head = node;
		}
		
		prevnode = *head;
		for (i = 1; i <= idx - 1; i++)
			prevnode = prevnode->next;

		node->next = prevnode->next;
		prevnode->next = node;

		return (node);
	}

	return (NULL);
}




