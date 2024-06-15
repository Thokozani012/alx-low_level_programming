#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: head of the doubly linked list
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	int element = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		element++;
	}

	return (element);
}
