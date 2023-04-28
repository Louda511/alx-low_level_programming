#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the first node
 * @str: string to be inserted in the node
 *
 * Return: address of the first node
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;
	const char *ll = str;

	while (ll != NULL && *ll)
	{
		ll++;
		len++;
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return NULL;

	new->next = *head;
	new->str = strdup(str);
	new->len = len;
	*head = new;

	return (*head);
}
