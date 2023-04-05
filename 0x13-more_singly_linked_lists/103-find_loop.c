#include "lists.h"
/**
 * find_loop - Find the node where the loop in a linked list starts.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Pointer to the node where the loop starts, or NULL if there is no
 */

listint_t *find_loop(listint_t *head)
{
listint_t *tortoise, *hare;

if (head == NULL)
return (NULL);

tortoise = head;
hare = head;

while (hare && hare->next)
{
tortoise = tortoise->next;
hare = hare->next->next;

if (tortoise == hare)
{
tortoise = head;
while (tortoise != hare)
{
tortoise = tortoise->next;
hare = hare->next;
}
return (tortoise);
}
}

return (NULL);
}
