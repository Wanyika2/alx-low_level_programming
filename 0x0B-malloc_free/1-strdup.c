#include <stdlib.h>

/**
 * _strdup - Duplicates a string and allocates memory for the duplicate.
 * @str: The string to ibe duplicated.
 *
 * Return: A pointer to the duplicated string
 * or NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length, i;

	if (str == NULL)
	return (NULL);

	length = 0;
	while (str[length] != '\0')
	length++;

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	return (NULL);

	for (i = 0; i < length; i++)
	duplicate[i] = str[i];

	duplicate[length] = '\0';

	return (duplicate);
}
