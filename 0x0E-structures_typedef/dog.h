#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - Structure of a dog's information
 * @name: The name of the dog
 * @age: The dog's age
 * @owner: The dog's owner's name
 *
 * Description: The structure containing information
 * about the dog.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* _DOG_H */
