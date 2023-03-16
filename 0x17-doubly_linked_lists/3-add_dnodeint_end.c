#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_s list.
 * @head: head of linked list.
 * @n: data part of node to be inserted.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *lastnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}

	lastnode = *head;
	while (lastnode->next != NULL)
		lastnode = lastnode->next;

	lastnode->next = newnode;
	newnode->prev = lastnode;

	return (newnode);
}
