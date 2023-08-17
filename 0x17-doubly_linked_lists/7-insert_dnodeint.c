#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at a given index
 * in a doubly linked list
 * @h: Double pointer to the list
 * @idx: Index of the node to insert
 * @n: Data to insert
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int i;
    dlistint_t *new;
    dlistint_t *temp = *h;

    new = malloc(sizeof(dlistint_t));
    if (!new || !h)
        return (NULL);

    new->n = n;
    new->next = NULL;

    if (idx == 0)
        return (add_dnodeint(h, n));

    for (i = 0; temp && i < idx; i++)
    {
        if (i == idx - 1)
        {
            if (temp->next == NULL)
                return (add_dnodeint_end(h, n));
            new->next = temp->next;
            new->prev = temp;
            temp->next->prev = new;
            temp->next = new;
            return (new);
        }
        else
            temp = temp->next;
    }

    return (NULL);
}
