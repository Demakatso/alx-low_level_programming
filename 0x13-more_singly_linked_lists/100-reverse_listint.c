#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list.
 *
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: A pointer to the new head of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *current = *head;
listint_t *next;

while (current != NULL)
{
next = current->next;
current->next = prev;
prev = current;
current = next;
}

*head = prev;
return (*head);
}
