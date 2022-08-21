#include "hash_tables.h"
/**
 * add_key - add new key if does not exist
 * @ht: hash table
 * @key: key to be added
 * @value: value to be added
 * Return: 1 if success else 0
 */
int add_key(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *Node;

	i = key_index((const unsigned char *)key, ht->size);
	Node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (Node == NULL)
		return (0);
	Node->key = (char *)malloc(sizeof(char) * _strlen(key));
	if (Node->key == NULL)
	{
		free(Node);
		return (0);
	}
	Node->value = (char *)malloc(sizeof(char) * _strlen(value));
	if (Node->value == NULL)
	{
		free(Node->key);
		free(Node);
		return (0);
	}
	Node->next = NULL;
	_strcpy(key, Node->key);
	_strcpy(value, Node->value);
	(ht->array)[i] = Node;
	return (1);
}
/**
 * add_key_collision - add key if there is a collison
 * @ht: hash table
 * @key: key to be added
 * @value: value to be added
 * Return: 1 if success else 0
 */
int add_key_collision(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *Node;

	i = key_index((const unsigned char *)key, ht->size);
	Node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (Node == NULL)
		return (0);
	Node->key = (char *)malloc(sizeof(char) * _strlen(key));
	if (Node->key == NULL)
	{
		free(Node);
		return (0);
	}
	Node->value = (char *)malloc(sizeof(char) * _strlen(value));
	if (Node->value == NULL)
	{
		free(Node->key);
		free(Node);
		return (0);
	}
	_strcpy(key, Node->key);
	_strcpy(value, Node->value);
	Node->next = (ht->array)[i];
	(ht->array)[i] = Node;
	return (1);
}
/**
 * hash_table_set - add new element to table
 * @ht: hash table
 * @key: key to be added
 * @value: value of the key
 * Return: 1 if success 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	hash_node_t *cur = NULL;

	if (ht == NULL)
		return (0);
	if (key == NULL || *key == '\0' || value == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	if ((ht->array)[i] == NULL)
		return (add_key(ht, key, value));
	cur = (ht->array)[i];
	while (cur && _strcmp(cur->key, key)  != 1)
		cur = cur->next;
	if (cur == NULL)
		return (add_key_collision(ht, key, value));
	free(cur->value);
	cur->value = (char *)malloc(sizeof(char) * _strlen(value));
	if (cur->value == NULL)
	{
		free(cur->key);
		free(cur);
		return (0);
	}
	_strcpy(value, cur->value);
	return (1);
}
