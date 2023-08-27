#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: head pointer of the signly linked lists 'list_t'
 *
 * Return: Nothing (void function)
 */

void free_list(list_t *head)
{
	list_t *ptr, *temp;

	if (head)
	{
		ptr = head;
		while (ptr != NULL)
		{
			temp = ptr;
			ptr = ptr->next;
			free(temp->str);
			free(temp);
		}
	}
}
