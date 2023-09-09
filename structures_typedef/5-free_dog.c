#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - new prototype
 * @d: Received a struct initialized.
 *
 * Returns: free dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
