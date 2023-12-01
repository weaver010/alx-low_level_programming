#include "hash_tables.h"

/**
 * hash_table_set -add item
 * @ht:hash table.
 * @key: The key
 * @value: The value
 * Return:0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *s;
	char *o;
	unsigned long int j, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	o = strdup(value);
	if (o == NULL)
	{
		return (0);
	}

	j = key_index((const unsigned char *)key, ht->size);
	for (i = j; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = o;
			return (1);
		}
	}

	s = malloc(sizeof(hash_node_t));
	if (s == NULL)
	{
		free(o);
		return (0);
	}
	s->key = strdup(key);
	if (s->key == NULL)
	{
		free(s);
		return (0); }
	s->value = o;
	s->next = ht->array[j];
	ht->array[j] = s;
	return (1);
}
