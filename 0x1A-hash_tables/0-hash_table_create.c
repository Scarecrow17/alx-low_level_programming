#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size array.
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int q;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (q = 0; q < size; q++)
		ht->array[q] = NULL;

	return (ht);
}
