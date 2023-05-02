#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely
 * @h: A pointer to a pointer to the first node of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *tortoise, *hare, *temp;
    size_t count = 0;

    if (h == NULL)
        return 0;

    tortoise = *h;
    hare = *h;

    while (tortoise != NULL && hare != NULL && hare->next != NULL)
    {
        tortoise = tortoise->next;
        hare = hare->next->next;

        if (tortoise == hare)
        {
            tortoise = *h;

            while (tortoise != hare)
            {
                temp = hare;
                hare = hare->next;
                free(temp);
                count++;
            }

            while (tortoise->next != hare)
            {
                temp = tortoise;
                tortoise = tortoise->next;
                free(temp);
                count++;
            }

            temp = tortoise;
            tortoise = tortoise->next;
            free(temp);
            count++;
            break;
        }
    }

    while (*h != NULL)
    {
        temp = *h;
        *h = (*h)->next;
        free(temp);
        count++;
    }

    return count;
}
