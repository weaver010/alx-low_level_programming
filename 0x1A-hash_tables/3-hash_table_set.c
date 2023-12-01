#include "hash_tables.h"

/**
 * hash_table_set - adds item
 * @ht: the hash table
 * @key: key
 * @value: value
 * Return: 0 or 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *s, *o;

	if (ht == NULL || key == NULL || *key == '\0' )
	{
		return (0);
	}
	s = malloc(sizeof(*s));
	if (s)
	{
		return (0);
	}
	s->key = strcopy((char *)key);
	s->value = strcopy(value);
	s->next = NULL;
	i = key_index((unsigned char *)key, ht->size);
	if (!(ht->array[i]))
	{
		ht->array[i] = s;
	}
	else
	{
		o = ht->array[i];
		while (o && strcmp(o->key, s->key) != 0)
		{
			o = o->next;
		}
		if (o)
		{
			free(o->value);
			o->value = s->value;
			free(s->key);
			free(s);
			return (1);
		}
		o = ht->array[i];
		s->next = o;
		ht->array[i] = s;
	}

	return (1);
}
