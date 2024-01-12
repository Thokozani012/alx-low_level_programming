#include "lists.h"

/**
  *get_dnodeint_at_index - Finds the nth node in dlistint_t list
  * @head: pointer to the doubly linked list
  * @index: the position of the node to be extracted
  *
  * Return: The nth index of a 'dlistint_t' list
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head, *curr = head;
	unsigned int counter = 0;

	if (!head)
	{
		return (NULL);
	}

	while (ptr != NULL)
	{
		if (counter == index)
		{
			return (curr);
		}
		counter++;
		ptr = ptr->next;
		curr = ptr;
	}

	return (NULL);
}
