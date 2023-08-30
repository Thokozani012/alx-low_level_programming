#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked lists
 * @head: Double pointer to the head note of the linked list 'listint_t'
 *
 * Return: Pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *Prev = NULL;
	listint_t *Curr = *head;
	listint_t *Next = NULL;

	while (Curr != NULL)
	{
		Next = Curr->next;
		Curr->next = Prev;

		Prev = Curr;
		Curr = Next;
	}

	*head = Prev;

	return (*head);
}
