#include "hash_tables.h"

/**
 * hash_table_print - function thT prints the contents of a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node = NULL;


	putchar('{');
	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				if (not_last_node(ht, node))
					printf(", ");
				node = node->next;
			}
		}
	}
	printf("}\n");
}

/**
 * not_last_node - function to check if index where node is the last node
   of a hash table.
 * @ht: hash table
 * @node: node to check in the hash table
 *
 * Return: (0) is last node, (1) not last node
 */
int not_last_node(const hash_table_t *ht, hash_node_t *node)
{
	unsigned long int key_i = 0;

	key_i = key_index((unsigned char *)node->key, ht->size);
	for (key_i = key_i + 1; key_i < ht->size; key_i++)
	{
		if (ht->array[key_i] != NULL)
			return (1);
	}
	return (0);
}
