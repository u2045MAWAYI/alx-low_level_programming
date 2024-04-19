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
    hash_table_t *ht;
    unsigned long int i;

    ht = malloc(sizeof(hash_table_t));
    if (!ht)
        return (NULL);

    ht->size = size;
    ht->array = malloc(size * sizeof(hash_node_t *));
    if (!ht->array)
    {
        free(ht);
        return (NULL);
    }

    for (i = 0; i < size; i++)
        ht->array[i] = NULL;

    return (ht);
}
