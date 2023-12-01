#include "hash_tables.h"

/**
 * hash_table_get -  retrieves a value associated with a key.
 * @ht:the hash table.
 * @key:key
 * Return:s_value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *s;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
	{
		return (NULL);
	}
	s = ht->array[i];
	while (s && strcmp(s->key, key) != 0)
	{
		s = s->next;
	}
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		return (s->value);
	}
}
