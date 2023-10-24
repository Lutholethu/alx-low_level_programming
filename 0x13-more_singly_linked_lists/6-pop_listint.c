#include "lists.h"
/**
 * pop_listint - deletes the head node of linked list
 * @head: pointer to the first element in the linked list
 * Return: data from elements tha were deleted or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data = temp->data;

	if (!head || !*head)
	{
		return (0);
	}

	*head = (*head)->next;
	free(temp);

	return (data);
}
