#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Pointer to the singly linked list 'listint'
 *
 * Return: Number of nodes (On success)
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr =  NULL;
	int count = 0;

	if (h == NULL)
		return (0);

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}

	return (count);
}
