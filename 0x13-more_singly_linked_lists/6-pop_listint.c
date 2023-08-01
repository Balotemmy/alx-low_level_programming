#include "lists.h"

/**
 * pop_listint - It deletes the head node of a linked list
 * @head: Is the pointer to the first element in the linked list
 *
 * Return: Is the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->p;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
