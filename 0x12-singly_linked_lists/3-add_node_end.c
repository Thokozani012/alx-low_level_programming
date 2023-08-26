#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: head pointer of the list list_t
 * @str: String content of the node
 *
 * Return: The address of the new element, or NULL on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}

	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;

	return (temp);
}
