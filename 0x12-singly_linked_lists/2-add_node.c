#include "lists.h"
#include <string.h>
/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @str: string pointer
 * @head : pointer to the first node in the list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t str_len = strlen(str);

	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->str = malloc(sizeof((str_len + 1) * sizeof(char)));

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	strcpy(new_node->str, str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);

}
