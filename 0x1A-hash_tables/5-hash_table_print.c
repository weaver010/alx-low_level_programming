#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht:hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *s;
unsigned long int i = 0, o = 0;

if (ht == NULL)
{
return;
}
printf("{");
for (i = o; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
s = ht->array[i];
while (s)
{
if (o == 0)
{
printf("%s'%s': '%s'", "", s->key, s->value), o++;
}
else
{
printf("%s'%s': '%s'", ", ", s->key, s->value), o++;
}
s = s->next;
}
}
}
printf("}\n");
}
