#include "dog.h"

/**
 * free_dog - frees a dog
 * @d: pointer to dog to free
 *
 * Description: frees memory allocated for a dog_t structure
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
