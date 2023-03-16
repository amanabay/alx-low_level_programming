#include "lists.h"

/**
 * add_dnodeint -  adds a new node at the beginning of a list_t list.
 * @head: head of linked list.
 * @n: data part of node to be inserted.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	struct dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	if (*head != NULL)
		*head->prev = new;
	*head = newnode;

	return (newnode);
}
