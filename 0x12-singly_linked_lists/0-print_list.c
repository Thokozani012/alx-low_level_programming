#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * count_nodes - Counts the number of nodes
 * @h: head node of the list
 *
 * Return: On success, the number of nodes
 */

int count_nodes(const list_t *h)
{
	const list_t *ptr;
	int count = 0;

	if (h == NULL)
		return (-1);
	ptr = NULL;
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

/**
 * _strlen - Counts the string length
 * @s: string
 *
 * Return: The length of the string
 */

size_t _strlen(char *s)
{
	size_t i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * print_data - Prints the data of each node of the single list
 * @h: head of the singly linked list
 *
 * Return: Nothing (void function)
 */

void print_data(const list_t *h)
{
	const list_t *ptr = NULL;
	size_t len1;
	char *s;

	if (h == NULL)
		return;
	ptr = h;
	while (ptr != NULL)
	{
		s = ptr->str;
		if (s == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			len1 = _strlen(s);
			printf("[%ld] %s\n", len1, s);
		}
		ptr = ptr->next;
	}
}

/**
 * print_list - Prints all the elemts of a list_t
 * @h: head node of the list
 *
 * Return: On success, the number of nodes
 */

size_t print_list(const list_t *h)
{
	print_data(h);
	return (count_nodes(h));
	_putchar('\n');
}
