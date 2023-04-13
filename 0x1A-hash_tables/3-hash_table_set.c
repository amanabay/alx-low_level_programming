#include "hash_tables.h"

/**
 * hash_table_set - Add /update an element in a hash table.
 * @ht: pointer to the hash table.
 * @key: key to add(not an empty string)
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode;
	char *cvalue;
	unsigned long int index, i;

	if (!ht || !key || !*key || !value)	
		return (0);

	cvalue = strdup(value);
	if (cvalue == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cvalue;
			return (1);
		}
	}

	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
	{
		free(cvalue);
		return (0);
	}
	newnode->key = strdup(key);
	if (newnode->key == NULL)
	{
		free(newnode);
		return (0);
	}
	newnode->value = cvalue;
	newnode->next = ht->array[index];
	ht->array[index] = newnode;

	return (1);
}
