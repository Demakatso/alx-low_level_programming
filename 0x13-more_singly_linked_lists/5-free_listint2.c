#include "lists.h"

/**
 * free_listint - frees a linked list of type listint_t
 * @head: pointer to the head of the linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *temp;

while (head != NULL)
{
temp = head;
head = head->next
free(temp);
}
}

