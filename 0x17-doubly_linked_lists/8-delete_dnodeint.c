#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at position 'index'
 * @head: pointer to the pointer to the doubly linked list
 * @index: Position of the node to be deleted
 *
 * Return: On success 1 or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int n = 0;

	if (*head == NULL)
		return (-1);

	/*deleting the head node */
	if (index == 0)
	{
		*head = ptr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(ptr);
		return (1);
	}

	while (ptr != NULL && n < index - 1)
	{
		ptr = ptr->next;
		n++;
	}

	/* index out of bounds */
	if (ptr == NULL)
	{
		return (-1);
	}

	/*adjusting pointers */
	if (ptr->next != NULL)
		ptr->next->prev = ptr->prev;
	if (ptr->prev != NULL)
		ptr->prev->next = ptr->next;

	free(ptr);

	return (1);
}
