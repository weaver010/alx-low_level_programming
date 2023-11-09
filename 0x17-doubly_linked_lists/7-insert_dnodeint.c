#include "lists.h"
/**
 * insert_dnodeint_at_index - insret
 * @h:h
 * @idx:idx
 * @n:n
 * Return: l_list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *o = *h, *s;
unsigned int i;
if (idx == 0)
{
return (add_dnodeint(h, n));
}
for (i = idx; i != 1; i--)
{
o = o->next;
if (o == NULL)
{
return (NULL);
}
}
if (o->next == NULL)
{
return (add_dnodeint_end(h, n));
}
s = malloc(sizeof(dlistint_t));
if (s == NULL)
{
return (NULL);
}
s->n = n;
s->prev = o;
s->next = o->next;
o->next->prev = s;
o->next = s;
return (s);
}
