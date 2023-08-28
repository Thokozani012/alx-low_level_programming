#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: head of the list
 *
 * Return: Nothing (void function)
 */

void free_listint(listint_t *head)
{
	listint_t *ptr, *temp;

	if (head)
	{
		ptr = head;
		while (ptr != NULL)
		{
			temp = ptr;
			ptr = ptr->next;
			free(temp);
		}
	}
}
