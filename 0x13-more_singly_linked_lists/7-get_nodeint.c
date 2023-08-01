#include "lists.h"

/**
 * get_nodeint_at_index - It returns the node at a certain index in a linked list
 * @head: Is the first node in the linked list
 * @index: Is the index of the node to return
 *
 * Return: is the pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp = head;

	while (temp && j < index)
	{
		temp = temp->next;
		j++;
	}

	return (temp ? temp : NULL);
}
