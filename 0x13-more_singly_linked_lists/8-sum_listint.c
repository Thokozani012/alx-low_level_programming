#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Sums all the data(n) of a 'listint_t' linked list
 * @head: Pointer to the head node of the 'listint_t' linked list
 *
 * Return: Sum of all the data(n) from listint_t
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (0);

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
