#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Pointer to the list to free
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *current = head;
    dlistint_t *next;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
}
