#include "lists.h"
#include <string.h>
/**
 * add_node -  adds a new node at the beginning of a list_t list.
 * @head: head of linked list.
 * @str: data part of node to be inserted.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	char *data;
	struct list_s *newnode = malloc(sizeof(struct list_s));

	if (newnode == NULL)
		return (NULL);

	data = strdup(str);
	if (data == NULL)
	{
		free(newnode);
		return (NULL);
	}

	while (str[len])
		len++;

	newnode->str = data;
	newnode->len = len;

	newnode->next = *head;
	*head = newnode;

	return (*head);

}
