#include "lists.h"

/**
 * dlistint_len - Determines the number of elements in a doubly linked list
 * @h: head of the list
 *
 * Return: Number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t elements = 0;

	if (!h)
		return (elements);

	while (ptr != NULL)
	{
		ptr = ptr->next;
		elements++;
	}
	elements++;

	return (elements);
}
