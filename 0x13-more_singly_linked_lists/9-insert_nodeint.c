#include "lists.h"
/**
 * insert_node_at_index - Inserts a new node at a given position
 * @head: Pointer to the first node of the linked list
 * @idx: Index of the node to insert
 * @n: Value to store in the new node
 *
 * Return: Pointer to the new node on success, NULL on failure
 */
listint_t *insert_node_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *prev_node, *cur_node;
unsigned int i;

/* create the new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;

/* if index is 0, insert at the beginning of the list */
if (idx == 0) {

new_node->next = *head;
*head = new_node;
return (new_node);
}

/* traverse the list to find the previous node */
prev_node = *head;
for (i = 0; i < idx - 1 && prev_node != NULL; i++) {
prev_node = prev_node->next;
}

/* check if the previous node was found */
if (prev_node == NULL) {
free(new_node);
return (NULL);
}

/* insert the new node */
cur_node = prev_node->next;
prev_node->next = new_node;
new_node->next = cur_node;

return (new_node);
}
