#include "lists.h"

/**
 * add_nodeint - Adds a new node to the beginning of a linked list
 * @head: Is the pointer to the first node in the list
 * @p: Data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t hi**head, const int p)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->p = p;
	new->next = *head;
	*head = new;

	return (new);
}
