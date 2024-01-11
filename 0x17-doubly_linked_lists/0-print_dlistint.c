#include "lists.h"


/**
  * print_dlistint - prints all the elements of a dlistint_t list
  * @h: pointer to the doubly linked list
  *
  * Return: The number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	dlistint_t *ptr = (dlistint_t *)h;

	if (!h)
	{
		return (0);
	}

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		counter++;
	}

	return (counter);
}
