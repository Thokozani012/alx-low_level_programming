#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Function gets the nth node of a listin_t linked list
 * @head: Pointer to the head of the list
 * @index: Then nth node to be returned
 *
 * Return: On success,the nth node of the listint_t list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	ptr = head;
	for (i = 0; i < index; i++)
	{
		if (ptr == NULL)
			return (NULL);

		ptr = ptr->next;
	}

	return (ptr);
}
