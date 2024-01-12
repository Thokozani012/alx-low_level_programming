#include "lists.h"

/**
  * add_dnodeint_end - Adds a new node at the ned of a dlistint_t list
  * @head: pointer to a pointer to the doubly linked list
  * @n: node data
  *
  * Return: address of the new element, or NULL if it failed
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *ptr = *head;

	if (!head)
	{
		return (NULL);
	}

	/*create memory block for new node*/
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;

	/*empty list*/
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}

	/*Non-empty list*/

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = temp;
	temp->prev = ptr;

	return (*head);
}
