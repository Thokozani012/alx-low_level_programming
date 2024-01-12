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

	if (!h)
	{
		return (NULL);
	}

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;

	while (ptr != NULL)
	{
		if (idx == 0)
		{
			*h = temp;
			return (*h);
		}
		else if (counter == idx && idx > 0)
		{
			temp->next = ptr;
			ptr->prev = temp;

			temp->prev = curr;
			curr->next = temp;

			return (*h);
		}
		curr = ptr;
		ptr = ptr->next;
		counter++;
	}
	return (NULL);
}
