#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of the linked list
 * @index: index of the node
 *
 * Return: nth node, if not exist return NULL
 */
dlistint_t *get_nodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return	(NULL);

		head = head->next;
	}

	return (head);
}


