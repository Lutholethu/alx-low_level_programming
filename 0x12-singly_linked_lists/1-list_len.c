#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * list_len -  returns the number of elements in a linked list_t list.
 * @h: linked list of type listint_t to print
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return(count);
}
