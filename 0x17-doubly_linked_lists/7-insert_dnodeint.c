#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a node at a given position.
 * @h: head of the linked list
 * @idx: index of the list where the node should be added
 * @n: data part of node to be added.
 *
 * Return:  the address of the node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *newnode;
	dlistint_t *chead = *h;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i < idx; idx++)
	{
		chead = chead->next;
		if (chead == NULL)
			return (NULL);
	}

	if (chead->next == NULL)
		return (add_dnodeint_end(h, n));


	newnode->prev = chead;
	newnode->next = chead->next;
	chead->next->prev = newnode;
	chead->next = newnode;

	return (newnode);
}
