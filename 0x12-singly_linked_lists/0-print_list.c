#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: linked list of type listint_t to print
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	char *str = NULL;
	size_t num = 0;
		
	while(h)
	{
		if (str != NULL)
		{
			printf("[0]" "(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
		num++;
	}
	return (num);
}
