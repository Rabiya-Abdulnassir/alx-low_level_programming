#include "hash_tables.h"
/**
 * hash_table_get - get value given key
 * @ht: hash table
 * @key: key to be searched
 * Return: value associated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *Node;

	if (ht == NULL || key == NULL)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	Node = (ht->array)[i];
	while (Node)
	{
		if (_strcmp(Node->key, key) == 1)
			return (Node->value);
		Node = Node->next;
	}
	return (NULL);
}
