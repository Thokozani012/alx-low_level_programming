#ifndef _LISTS_H
#define _LISTS_H

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: point to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _putchar(char c);
int count_nodes(const list_t *h);
size_t _strlen(char *s);
void print_data(const list_t *h);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif /*_LISTS_H */
