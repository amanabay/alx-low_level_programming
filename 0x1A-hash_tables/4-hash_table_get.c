#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key. 
 * @ht: pointer to the hash table.
 * @key: key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
