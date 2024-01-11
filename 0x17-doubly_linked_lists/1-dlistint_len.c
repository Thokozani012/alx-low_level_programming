#include "lists.h"

/**
  * dlistint_len - Determines and returns the nuumber of elements
  * @h: pointer to the doubly linked list
  *
  * Return: number of elements in a linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *ptr = (dlistint_t *)h;
	size_t counter = 0;

	if (!h)
	{
		return (0);
	}

	while (ptr != NULL)
	{
		ptr = ptr->next;
		counter++;
	}

	return (counter);
}
