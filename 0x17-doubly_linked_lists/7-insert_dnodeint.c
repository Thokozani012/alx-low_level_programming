#include "lists.h"

/**
  * insert_dnodeint_at_index - Inserts a new node at a given position
  * @h: pointer to a pointer to the dlistint_t list
  * @idx: position where the new node will be inserted
  * @n: data of the new node
  *
  * Return: address of the new node, or NULL if it failed
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h, *temp, *curr = *h;
	unsigned int counter = 0;

	if (!h || (idx > 0 && !*h))
		return (NULL);

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	if (idx == 0)
	{
		temp->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = temp;
		}
		*h = temp;
		return (*h);
	}
	while (ptr != NULL && counter < idx)
	{
		curr = ptr;
		ptr = ptr->next;
		counter++;
	}
	if (counter < idx)
	{
		free(temp);
		return (NULL);
	}
	temp->next = ptr;
	if (ptr != NULL)
		ptr->prev = temp;
	temp->prev = curr;
	curr->next = temp;

	return (*h);
}
