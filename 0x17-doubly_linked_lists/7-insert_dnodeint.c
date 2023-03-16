#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @head: head of the linked list
 * @idx: index of the list where the new node should be added
 * @n: data part of new node to be added.
 *
 * Return:  the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *chead;
	unsigned int i;

	chead = *h;
	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->prev = NULL;
		newnode->next = chead;
		*h = newnode;
		return (newnode);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (chead == NULL || chead->next == NULL)
			return (NULL);
		chead = chead->next;
	}
	newnode->prev = chead;
	newnode->next = chead->next;
	chead->next = newnode;
	chead->next->prev = newnode;
	chead->next = newnode;

	return (newnode);
}
