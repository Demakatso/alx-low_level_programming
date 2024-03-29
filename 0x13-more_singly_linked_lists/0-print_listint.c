#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 * 
 * Return: The number of nodes in the listint_t list.
 */
size_t print_listint(const listint_t *h)
{
const listint_t *current = h;
size_t count = 0;

while (current != NULL)
{
printf("%d\n", current->n);
count++;
current = current->next;
}

return (count);
}

