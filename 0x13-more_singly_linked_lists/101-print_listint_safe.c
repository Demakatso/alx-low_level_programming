#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *fast;
size_t count = 0;

if (!head)
exit(98);

slow = head;
fast = head;

while (slow && fast && fast->next)
{
printf("[%p] %d\n", (void *)slow, slow->n);
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
printf("[%p] %d\n", (void *)slow, slow->n);
printf("-> [%p] %d\n", (void *)fast->next, fast->next->n);
break;
}
count++;
}

if (!fast || !fast->next)
{
while (head)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
count++;
}
}

return (count);
}
