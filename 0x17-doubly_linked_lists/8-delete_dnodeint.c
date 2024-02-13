#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: Pointer to the pointer of the head node.
 * @index: Index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *temp, *prev;
    unsigned int i = 0;

    if (!head || !*head)
        return (-1);

    temp = *head;

    if (index == 0)
    {
        *head = temp->next;
        if (*head)
            (*head)->prev = NULL;
        free(temp);
        return (1);
    }

    while (temp && i < index)
    {
        prev = temp;
        temp = temp->next;
        i++;
    }

    if (!temp)
        return (-1);

    prev->next = temp->next;

    if (temp->next)
        temp->next->prev = prev;

    free(temp);

    return (1);
}
