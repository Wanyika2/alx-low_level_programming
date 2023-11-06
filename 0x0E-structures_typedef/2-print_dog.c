#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print the elements of a dog structure
 * @d: A pointer to a dog structure
 *
 * Description: This function prints the name, age, and owner of a dog.
 * If an element of the dog structure is NULL,
 * it prints (nil) for that element.
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
