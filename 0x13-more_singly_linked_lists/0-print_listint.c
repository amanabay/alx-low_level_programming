#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list_t list.
 * @h: list head ref to list to be printed.
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);

		len++;
		h = h->next;
	}
	return (len);
}
