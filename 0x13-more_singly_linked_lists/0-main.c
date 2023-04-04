#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    listint_t *head = NULL;
    listint_t *new_node = NULL;
    size_t n = 0;

    /* Create the first node of the list */
    head = malloc(sizeof(listint_t));
    if (head == NULL)
    {
        printf("Error: could not allocate memory for head node.\n");
        return (1);
    }
    head->n = 8;
    head->next = NULL;

    /* Create a new node and add it to the beginning of the list */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
    {
        printf("Error: could not allocate memory for new node.\n");
        free(head);
        return (1);
    }
    new_node->n = 9;
    new_node->next = head;
    head = new_node;

    /* Print the list and count its elements */
    n = print_listint(head);
    printf("-> %lu elements\n", n);

    /* Free the memory allocated for the nodes */
    free(head);
    free(new_node);

    return (0);
}

