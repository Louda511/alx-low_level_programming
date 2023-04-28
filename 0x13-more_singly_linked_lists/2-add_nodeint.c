#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning
 * @head: pointer to pointer to the first node
 * @n: value to be stored to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
