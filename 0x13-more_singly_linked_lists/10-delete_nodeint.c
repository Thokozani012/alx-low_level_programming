#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at 'index' of a listint_t linked list
 * @head: Double pointer to the head of the linked list
 * @index: Position of the node to be deleted
 *
 * Return: On success 1 is returned, or -1 on failer
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (ptr == NULL)
			return (-1);
		ptr = ptr->next;
	}

	if (ptr == NULL || ptr->next == NULL)
		return (-1);

	temp = ptr->next;

	ptr->next = temp->next;

	free(temp);

	return (-1);
}
