#include "dog.h"
#include <stddef.h>
#include "main.h"
/**
 * init_dog - Initialize a struct dog
 * @d: A pointer to a struct dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: This function initializes the members of a struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
