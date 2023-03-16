#include "lists.h"

/**
 * dlistint_len - prints all the number of elements of a list_t list.
 * @h: list head ref to list whose length is needed.
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
