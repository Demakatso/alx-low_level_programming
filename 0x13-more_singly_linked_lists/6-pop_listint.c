#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 * and returns the head node's data (n).
 *
 * @head: Pointer to a pointer to the head node of the list.
 *
 * Return: The data stored in the head node of the list.
 */
int pop_listint(listint_t **head)
{
int data;
listint_t *temp;

if (*head == NULL) {
/* If the list is empty, return 0 */
return 0;
}

/* Store the data from the head node */
data = (*head)->n;

/* Move the head pointer to the next node */
temp = (*head)->next;
free(*head);
*head = temp;

/* Return the data from the original head node */
return data;
}
