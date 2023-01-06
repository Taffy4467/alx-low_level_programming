#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 * Return: If an error occurs - NULL.
 * Otherwise - a pointer to the new hash table.
 */
typedef struct node
{
	char *key;
	char *value;
	struct node *next;
} node_t;

typedef struct hash_table
{
	unsigned long int size;
	struct node **array;
} hash_table_t;

/**Allocate memory for the hash table*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	if (size < 1)
	{
		return (NULL);
	}
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}
/**Allocate memory for the array of nodes*/
hash_table->array = malloc(sizeof(node_t *) * size);
if (hash_table->array == NULL)
{
	return (NULL);
}
for (unsigned long int i = 0; i < size; i++)
{
	hash_table->array[i] = NULL;
}
/**Set the size of the hash table*/
hash_table->size = size
return (hash_table);
}
