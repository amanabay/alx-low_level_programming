#include "lists.h"
#include <string.h>
/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: head of linked list.
 * @str: data part of node to be inserted.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	char *data;
	struct list_s *newnode = malloc(sizeof(struct list_s));
	struct list_s *lastnode;

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
	newnode->next = NULL;
	
	if (*head == NULL)
		*head = newnode;
	else 
	{
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = newnode;
	}
	return (*head);

}
