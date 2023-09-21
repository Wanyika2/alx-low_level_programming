#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head of the list_t list.
 * @str: The string to be added as the value of the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
	return (NULL);

	/*Allocate memory for the new node*/
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);

	/*Duplicate the string and set it as the value*/
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
	free(new_node);
	return (NULL);
	}

	/*Calculate the length of the string*/
	new_node->len = strlen(str);

	/*Set the next pointer to the current head of the list*/
	new_node->next = *head;

	/*Update the head pointer to point to the new node*/
	*head = new_node;

	return (new_node);
}
