#include "lists.h"

/**
 * get_dnodeint_at_index - Finds and retuns the nth node of a dlistint_t list
 * @head: head pointer to the list
 * @index: Positrion of the node to be returned/extracted
 *
 * Return: On success the nth node on the list, or NULL node does not exists
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int n = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (ptr->next != NULL && index != n)
	{
		ptr = ptr->next;
		n++;
	}

	if (index == n)
	{
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
