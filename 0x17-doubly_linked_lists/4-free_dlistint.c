#include "lists.h"

/**
  * free_dlistint - frees a dlistint_t list
  * @head: pointer to the doubly linked list
  *
  * Return: Nothing (void function)
  */
void free_dlistint(dlistint_t *head)
{
	/*dlistint_t *ptr = head;*/

	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}

	free(head);
}
