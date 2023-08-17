#include "lists.h"

/**
 * dlistint_len - Returns the number of nodes in a doubly linked list
 * @h: Pointer to the list
 *
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t nodes = 0;

    if (!h)
        return 0;

    while (h)
    {
        nodes++;
        h = h->next;
    }

    return nodes;
}
