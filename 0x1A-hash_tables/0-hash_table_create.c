#include <stdlib.h>

/**
 * hash_table_create - Create a hash table
 * @size: The size of the array for the hash table
 *
 * Return: A pointer to the newly created hash table
 *         or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int idx = 0;

	if (size <= 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	while (idx < size)
		table->array[idx++] = NULL;
	return (table);
}
