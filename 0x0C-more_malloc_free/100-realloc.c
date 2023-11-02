#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size in bytes of the allocated space for ptr.
 * @new_size: New size in bytes of the memory block.
 *
 * Return: A pointer to the newly allocated memory block.
 * If new_size is equal to old_size, it returns ptr.
 * If new_size is zero and ptr is not NULL, it returns NULL and frees ptr.
 * If ptr is NULL, it's equivalent to malloc(new_size).
 * If malloc fails, it returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *old_ptr;
	char *new_ptr_char;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
		new_size = old_size;

	old_ptr = ptr;
	new_ptr_char = new_ptr;

	while (new_size--)
		new_ptr_char[new_size] = old_ptr[new_size];

	free(ptr);

	return (new_ptr);
}
