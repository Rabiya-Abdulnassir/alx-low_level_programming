#include "hash_tables.h"
/**
 * shash_table_create -create hash table
 * @size: size of hash table
 * Return: hast table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->array = (shash_node_t **)malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		(ht->array)[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	ht->size = size;
	return (ht);
}
/**
 * __lt__ - util function compare two strings
 * @Node: first string
 * @cur: second string
 * Return: 1 if first < second -1 otherwise 0 if equal
 */
int __lt__(const char *Node, const char *cur)
{
	int i = 0;

	while (Node[i] && cur[i])
	{
		if (cur[i] > Node[i])
		{
			return (1);
		}
		i++;
	}
	if (Node[i] == '\0' && cur[i] == '\0')
		return (0);
	if (Node[i] == '\0' && cur[i] != '\0')
		return (1);
	return (-1);
}
/**
 * _add_shash_table - add new element to hash table
 * @ht: hash table sorted
 * @Node: node to be added
 * Return: 1 if succed else 0
 */
int  _add_shash_table(shash_table_t *ht, shash_node_t *Node)
{
	shash_node_t *cur, *prev;

	if (ht->shead == NULL)
	{
		ht->shead = Node;
		ht->stail = Node;
		Node->snext = NULL;
		Node->sprev = NULL;
		return (1);
	}
	cur = ht->shead;
	prev = ht->shead;
	while (cur)
	{
		if (__lt__(Node->key, cur->key) == 1)
		{
			if (cur == ht->shead)
			{
				cur->sprev = Node;
				Node->snext = cur;
				Node->sprev = NULL;
				ht->shead = Node;
			}
			else
			{
				Node->snext = cur;
				Node->sprev = prev;
				cur->sprev = Node;
				prev->snext = Node;
			}
			return (1);
		}
		prev = cur;
		cur = cur->snext;
	}
	(ht->stail)->snext = Node;
	Node->snext = NULL;
	Node->sprev = ht->stail;
	ht->stail = Node;
	return (1);
}
/**
 * add_new - add new node to hash table
 * @ht: hash table
 * @key: new key
 * @value: new value
 * Return:  1 if succeed else 0
 */
int add_new(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *Node;
	unsigned long int i;
	char *val_copy;

	val_copy = strdup(value);
	if (val_copy == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	Node = (shash_node_t *)malloc(sizeof(shash_node_t));
	if (Node == NULL)
		return (0);
	Node->key = malloc(sizeof(char) * _strlen(key));
	if (Node->key == NULL)
	{
		free(Node);
		return (0);
	}
	_strcpy(key, Node->key);
	Node->value = val_copy;
	Node->next = (ht->array)[i];
	(ht->array)[i] = Node;
	return (_add_shash_table(ht, Node));
}

/**
 * shash_table_set - set element to ht
 * @ht: hash table
 * @key: new key
 * @value: new value
 * Return: 1 if succed else 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	shash_node_t *cur;
	char *val_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	if ((ht->array)[i] == NULL)
		return (add_new(ht, key, value));
	cur = (ht->array)[i];
	while (cur && _strcmp(cur->key, key) != 1)
		cur = cur->next;
	if (cur == NULL)
		return (add_new(ht, key, value));
	val_copy = strdup(value);
	if (val_copy == NULL)
		return (0);
	cur->value = val_copy;
	return (1);
}
/**
 * shash_table_get - get element
 * @ht: hash table
 * @key: key searched
 * Return: value string
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int i;
	shash_node_t *cur;

	if (ht == NULL || key == NULL)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	cur = (ht->array)[i];
	while (cur)
	{
		if (_strcmp(cur->key, key) == 1)
			return (cur->value);
		cur = cur->next;
	}
	return (NULL);
}
/**
 * shash_table_print - print hash table elements
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *cur;
	int start = 1;

	if (ht == NULL)
		return;
	cur = ht->shead;
	printf("{");
	while (cur)
	{
		if (start == 0)
			printf(", ");
		printf("'%s': '%s'", cur->key, cur->value);
		start = 0;
		cur = cur->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - print hash table in reverse
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *cur;
	int start = 1;

	if (ht == NULL)
		return;
	cur = ht->stail;
	printf("{");
	while (cur)
	{
		if (start == 0)
			printf(", ");
		printf("'%s': '%s'", cur->key, cur->value);
		cur = cur->sprev;
		start = 0;
	}
	printf("}\n");
}
/**
 * shash_table_delete - free hash table
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *cur, *next;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		cur = (ht->array)[i];
		while (cur)
		{
			next = cur->next;
			free(cur->key);
			free(cur->value);
			free(cur);
			cur = next;
		}
	}
	free(ht->array);
	free(ht);
}
