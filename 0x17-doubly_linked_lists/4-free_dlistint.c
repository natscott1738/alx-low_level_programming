#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head node.
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *current, *next_node;

    current = head;
    while (current)
    {
        next_node = current->next;
        free(current);
        current = next_node;
    }
}
