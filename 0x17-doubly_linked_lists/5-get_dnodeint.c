#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the nth node of a doubly linked list
 * @head: Pointer to the list
 * @index: Index of the node to return
 *
 * Return: Address of the node, or if it does not exist, NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i = 0;

    if (!head)
        return (NULL);

    while (head && i < index)
    {
        head = head->next;
        i++;
    }

    return (head ? head : NULL);
}
