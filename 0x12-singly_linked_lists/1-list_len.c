#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Calculates the length of the singly linked list
 * @h: Head of the list
 *
 * Return: number of elements or nodes
 */

size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *ptr = NULL;

	if (h == NULL)
		return (-1);
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
