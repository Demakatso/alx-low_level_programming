#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a linked list of integers.
 * @h: Pointer to a pointer to the head node of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *tmp;
size_t count = 0;

if (h == NULL || *h == NULL)
return (0);

current = *h;
while (current != NULL)
{
count++;
tmp = current;
current = current->next;

/* Check if we have already freed this node */
if (tmp < current)
{
free(tmp);
}
else
{
/* We have already freed this node, so set the next pointer to NULL */
tmp->next = NULL;
}
}

/* Set the head pointer to NULL */
*h = NULL;

return (count);
