#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of the list
 * @head: pointer to pointer to the first node
 * @n: value to be stored to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *lastnode;

	newnode = malloc(sizeof(listint_t));
	lastnode = *head;

	if (!newnode)
		return (NULL);

	if (!(*head))
		*head = newnode;
	else
	{
		while (lastnode->next)
			lastnode = lastnode->next;
		lastnode->next = newnode;
	}

	newnode->n = n;
	newnode->next = NULL;

	return (newnode);
}
