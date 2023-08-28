#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a 'listint_t' list
 * @head: head pointer that points to a pointer to the list
 *
 * Return: Nothing (void function)
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *temp;

	if (!head || !*head)
		return;

	ptr = *head;
	while  (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp);
	}

	*head = NULL;
}
