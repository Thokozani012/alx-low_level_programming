#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given index on the list
 * @h: pointer to the pointer to the list
 * @idx: position where the new node will be inserted
 * @n: Data on the new node to added
 *
 * Return: Address of the new node, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h, *new_node;
	unsigned int k = 0;

	if (*h == NULL)
		return (NULL);

	/*memory allocation for new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		printf("Error: new_node can't be malloc'ed\n");
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}

	while (ptr != NULL && k < idx - 1)
	{
		ptr = ptr->next;
		k++;
	}

	if (ptr != NULL && k == idx - 1)
	{
		new_node->next = ptr->next;
		new_node->prev = ptr;
		if (ptr->next != NULL)
			ptr->next->prev = new_node;
		ptr->next = new_node;
		return (new_node);
	}
	
	free(new_node);
	return (NULL);
}
