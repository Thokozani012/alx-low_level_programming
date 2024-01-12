#include "lists.h"

/**
  * sum_dlistint - Sums up all the data(n) of a dlistint_t linked list
  * @head: pointer to the doubly linked list
  *
  * Return: sum of all the data 'n', or 0 if the list is empty
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	/*Non-empty list*/
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
