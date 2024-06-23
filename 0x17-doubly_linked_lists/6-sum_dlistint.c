#include "lists.h"

/**
 * sum_dlistint - Function returns the sum of all elements in a dlistint_t
 * @head: pointyer to the list
 *
 * Return: On success the sum of elements, or 0 on failure
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0, val;

	if (head == NULL)
		return (0);

	while (ptr != NULL)
	{
		val = ptr->n;
		sum = sum + val;
		ptr = ptr->next;
	}

	return (sum);
}
