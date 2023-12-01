#include "hash_tables.h"
/**
 * shash_table_create -creates a hash table.
 * @size: size
 * Return: s
 */
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *s;
unsigned long int i;

s = malloc(sizeof(shash_table_t));
if (s == NULL)
{
return (NULL);
}
s->size = size;
s->shead = NULL;
s->stail = NULL;
s->array = malloc(sizeof(shash_node_t) * size);
if (s->array == NULL)
{
free(s);
return (NULL);
}
for (i = 0; i < size; i++)
{
s->array[i] = NULL;
}
return (s);
}

/**
 * c_node - create node
 * @key: key.
 * @value: value
 * Return: s
 */
shash_node_t *c_node(const char *key, const char *value)
{
shash_node_t *s;

s = malloc(sizeof(shash_node_t));
if (s == NULL)
{
return (NULL);
}
s->key = strdup(key);
if (s->key == NULL)
{
free(s);
return (NULL);
}
s->value = strdup(value);
if (s->value == NULL)
{
free(s->key);
free(s);
return (NULL);
}
s->next = s->snext = s->sprev = NULL;
return (s);
}

/**
 * addto - adds a node
 * @t:t
 * @node: node
 * Return: void
 */
void addto(shash_table_t *t, shash_node_t *node)
{
shash_node_t *o;

if (t->shead == NULL && t->stail == NULL)
{
t->shead = t->stail = node;
return;
}
o = t->shead;
while (o != NULL)
{
if (strcmp(node->key, o->key) < 0)
{
node->snext = o;
node->sprev = o->sprev;
o->sprev = node;
if (node->sprev != NULL)
{
node->sprev->snext = node;
}
else
{
t->shead = node;
}
return;
}
o = o->snext;
}
node->sprev = t->stail;
t->stail->snext = node;
t->stail = node;
}

/**
 * shash_table_set -  adds an element to the hash table.
 * @ht:  hash table
 * @key: key
 * @value: value
 * Return:0 or 1
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
unsigned long int i;
char *v;
shash_node_t *s, *o;

if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
{
return (0);
}
i = key_index((const unsigned char *)key, ht->size);
o = ht->array[i];
while (o != NULL)
{
if (strcmp(o->key, key) == 0)
{
v = strdup(value);
if (v == NULL)
{
return (0);
}
free(o->value);
o->value = v;
return (1);
}
o = o->next;
}
s = c_node(key, value);
if (s == NULL)
{
return (0);
}
s->next = ht->array[i];
ht->array[i] = s;
addto(ht, s);
return (1);
}

/**
 * shash_table_get - get value
 * @ht:hash table
 * @key: key
 *
 * Return: o->value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
unsigned long int i;
shash_node_t *o;

if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0)
{
return (NULL);
}
i = key_index((const unsigned char *)key, ht->size);
o = ht->array[i];
while (o != NULL)
{
if (strcmp(o->key, key) == 0)
{
return (o->value);
}
o = o->next;
}
return (NULL);
}

/**
 * shash_table_print - prints a hash table.
 * @ht: hash table
 *
 * Return:void
 */
void shash_table_print(const shash_table_t *ht)
{
shash_node_t *o;
char f = 0;
if (ht == NULL || ht->array == NULL)
{
return;
}
printf("{");
o = ht->shead;
while (o != NULL)
{
if (f == 1)
{
printf(", ");
}
printf("'%s': '%s'", o->key, o->value);
f = 1;
o = o->snext;
}
printf("}\n");
}

/**
 * shash_table_print_rev - print in rev
 * @ht: hash table
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *o;
char f = 0;

if (ht == NULL || ht->array == NULL)
{
return;
}
printf("{");
o = ht->stail;
while (o != NULL)
{
if (f == 1)
{
printf(", ");
}
printf("'%s': '%s'", o->key, o->value);
f = 1;
o = o->sprev;
}
printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table.
 * @ht:hash table
 * Return:void
 */
void shash_table_delete(shash_table_t *ht)
{
unsigned long int i;
shash_node_t *s;

if (ht == NULL || ht->array == NULL || ht->size == 0)
{
return;
}
for (i = 0; i < ht->size; i++)
{
while (ht->array[i] != NULL)
{
s = ht->array[i]->next;
free(ht->array[i]->key);
free(ht->array[i]->value);
free(ht->array[i]);
ht->array[i] = s;
}
}
free(ht->array);
ht->array = NULL;
ht->shead = ht->stail = NULL;
ht->size = 0;
free(ht);
}
