#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data in a doubly linked list
 * @head: Pointer to the list
 *
 * Return: Sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;

    while (head)
    {
        sum += head->n;
        head = head->next;
    }

    return sum;
}
