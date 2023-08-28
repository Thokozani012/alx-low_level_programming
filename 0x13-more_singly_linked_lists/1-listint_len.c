#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Calculates the number of elemenst in a linked list
 * @h: Head pointer to the first element of the list 'listint_t'
 *
 * Return: On success, The number of elements of 'listint_t' list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = NULL;
	size_t count = 0;

	if (h == NULL)
		return (0);

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
