#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: unisgned long int
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;

	if (!size)
		return (NULL);
	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);
	hash_t->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_t->array == NULL)
	{
		free(hash_t);
		return (NULL);
	}
	hash_t->size = size;
	return (hash_t);
}
