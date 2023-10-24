#include "lists.h"
/**
 * sum_listint - returns the sum of all the data(n) of a listint_t list
 * @head: first node in the linked list
 * Return: resulting sum, if list is empty return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);

}
