#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer to the head of the linked list
 * @n: integer to be stored in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, int n)
{
listint_t *new_node, *temp;

new_node = malloc(sizeof(listint_t)); /* allocate memory for new node */
if (new_node == NULL)
return (NULL);

new_node->n = n; /* assign value to new node */
new_node->next = NULL;

if (*head == NULL) /* if linked list is empty, new node becomes the head */
*head = new_node;
else
{
temp = *head;
while (temp->next != NULL) /* traverse to the end of the linked list */
temp = temp->next;
temp->next = new_node; /* append new node to the end */
}

return (new_node);
}
