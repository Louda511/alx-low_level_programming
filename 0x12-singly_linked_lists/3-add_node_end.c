#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a list_t list.
 * @head: pointer to the first node
 * @str: string to be inserted in the node
 *
 * Return: address of the first node
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{	
	list_t *new;
	unsigned int len = 0;
	const char *stradd = str;
	list_t *lastadd;
	
	while (stradd != NULL && *stradd)
	{
		stradd++;
		len++;
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		lastadd = *head;
		while (lastadd->next != NULL)
		{	
			lastadd = lastadd->next;
		}
		lastadd->next = new;
	}

	new->next = NULL;
	new->str = strdup(str);
	new->len = len;

	return (*head);
}
