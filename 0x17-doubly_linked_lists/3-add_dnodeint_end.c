#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: double pointer to the list
 * @n: data to insert in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 * @head: Pointer to the head of the list
 * @n: Value to be added to the new node
 *
 * Return: Address of the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new;
    dlistint_t *temp = *head;

    if (!head)
        return (NULL);

    new = malloc(sizeof(dlistint_t));
    if (!new)
        return (NULL);

    new->n = n;
    new->next = NULL;

    if (*head == NULL)
    {
        new->prev = NULL;
        *head = new;
        return (new);
    }

    while (temp->next)
        temp = temp->next;

    temp->next = new;
    new->prev = temp;

    return (new);
}
