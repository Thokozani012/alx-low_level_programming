#ifndef _MAIN_H
#define _MAIN_H

int _putchar(char c);
void *malloc_checked(unsigned int b);
int _strlen(char *str);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
char *_memcpy(char *dest, char *src, unsigned int n);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif /*_MAIN_H */
