#include "lists.h"

/**
 * find_listint_loop - Finds the start of a loop in a linked list
 * @head: A pointer to the first node of the list
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slow = head, *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            while (head != slow)
            {
                head = head->next;
                slow = slow->next;
            }
            return head;
        }
    }

    return NULL;
}
