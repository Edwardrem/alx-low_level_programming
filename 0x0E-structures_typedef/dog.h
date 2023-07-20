#ifndef DOG_H
#define DOG_H


#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - a new type defining a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef struct dog dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
char *_strdup(char *str);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */

