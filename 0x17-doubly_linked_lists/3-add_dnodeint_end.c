#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of the list
 * @head: pointer to the head pointer
 * @n: new node data
 *
 * Return: On success, the address of the new element or NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *ptr = *head;

	/*new_node memory allocation*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		printf("Error: new_node can't be malloc'ed\n");
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = new_node;
	new_node->prev = ptr;

	return (new_node);
}
