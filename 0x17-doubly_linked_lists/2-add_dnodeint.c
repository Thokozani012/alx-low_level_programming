#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the begging of a dlistint_t list
 * @head: pointer to the pointer to the head of the doubly linked list
 * @n: The data of the node to be added on the list
 *
 * Return: On success, the address of the new element, or NULL on Failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		printf("Error: new_node can't be malloc'ed\n");
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}
