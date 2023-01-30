#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints all the number of elements of a list_t list.
 * @h: list head ref to list whose length is needed.
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
