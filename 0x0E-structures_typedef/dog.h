#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - Defines common variables
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner's dog
 *
 * Description: The structure defines teh attributes of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
