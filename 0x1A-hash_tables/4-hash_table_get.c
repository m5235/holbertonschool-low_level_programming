#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index = 0;

	if (!ht || !key)
		return (NULL);

	if (!ht->array || !*key)
		return (NUL)
		index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	if (temp != NULL)
	{
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
