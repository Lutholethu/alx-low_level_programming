#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the first element in the list
 * @str: string pointer
 * Return: pointer to the new node, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node;

	end_node = malloc(sizeof(list_t));

	if (!end_node)
	{
		return (NULL);
	}

	end_node->str = strdup(str);

	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		list_t *current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = end_node;
	}
	return (end_node);
}
