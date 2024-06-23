#include "lists.h"

/**
 * free_dlistint - frees the doubly linked list
 * @head: Pointer to the doubly linked list
 *
 * Return: Nothing (void function)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
