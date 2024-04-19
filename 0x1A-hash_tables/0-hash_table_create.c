#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 * 
 * Returns: A pointer to the newly created hash table
 *          or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table = NULL;
    unsigned long int i;

    hash_table = malloc(sizeof(hash_table_t));
    if (hash_table == NULL)
        return NULL;

    hash_table->size = size;

    hash_table->array = malloc(size * sizeof(hash_node_t *));
    if (hash_table->array == NULL)
    {
        free(hash_table);
        return NULL;
    }

    for (i = 0; i < size; i++)
    {
        hash_table->array[i] = NULL;
    }

    return hash_table;
}

int main()
{
    hash_table_t *ht = hash_table_create(10);
    
    if (ht == NULL)
    {
        printf("Failed to create hash table\n");
        return 1;
    }

    printf("Hash table created successfully\n");

    return 0;
}
