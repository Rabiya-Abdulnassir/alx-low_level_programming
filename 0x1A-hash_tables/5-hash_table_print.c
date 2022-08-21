#include "hash_tables.h"
/**
 * hash_table_print - print hash table data
 * @ht: hash table ptr
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *Node;
	unsigned long int i = 0;
	unsigned long int is_first = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		Node = (ht->array)[i];
		while (Node)
		{
			if (!is_first)
				printf(", ");
			printf("'%s': '%s'", Node->key, Node->value);
			is_first = 0;
			Node = Node->next;
		}
	}
	printf("}\n");
}
