#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node from the linked list 'listint_t'
 * @head: Double pointer to the head of the linked list 'listint_t'
 *
 * Return: The head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int popped_Value;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;

	popped_Value = temp->n;
	free(temp);
	temp = NULL;

	return (popped_Value);
}
