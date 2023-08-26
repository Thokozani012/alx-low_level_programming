#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the begginig of a list_t list
 * @head: head of the singly linked list list_t
 * @str: string member of the list list_t
 *
 * Return: The address of the new element/or node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);

	ptr->next = *head;
	*head = ptr;

	return (*head);
}
