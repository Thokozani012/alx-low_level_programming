#include "lists.h"

/**
  * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
  * @head: pointer to the dlintint_t list
  * @n: node (node data) to be added
  *
  * Return: address of the new element, or Null if it failed
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	if (!head)
	{
		return (NULL);
	}

	/*memory area for the new node*/
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = n; /*data allocation to the new node*/
	temp->prev = NULL;
	temp->next = NULL;

	/*dealing with an empty list*/
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}

	/*Dealing with non-empty lists*/

	temp->next = *head;
	(*head)->prev = temp;
	*head = temp;

	return (*head);
}
