#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t linked list
 * @head: pointer to pointer to the first element of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *current, *prev;

if (*head == NULL)
return (-1);

current = *head;
prev = NULL;

while (i < index)
{
if (current == NULL)
return (-1);

prev = current;
current = current->next;
i++;
}

if (prev == NULL)
*head = current->next;
else

prev->next = current->next;
free(current);

return (1);
}
