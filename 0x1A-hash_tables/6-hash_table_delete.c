#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table
 * Return:void
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *s = NULL;
unsigned long int i = 0;

if (ht == NULL)
{
return;
}
for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
while (ht->array[i])
{
s = ht->array[i];
free(s->key);
free(s->value);
ht->array[i] = ht->array[i]->next;
free(s);
}
}
}
free(ht->array);
free(ht);
}
