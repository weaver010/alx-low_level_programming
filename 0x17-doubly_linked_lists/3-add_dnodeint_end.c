#include"lists.h"
/**
 *add_dnodeint_end -add node in end
 *@head: h
 * @n:n
 *Return:l_list
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *s, *t;
s = malloc(sizeof(dlistint_t));
if (s == NULL)
{
return (NULL);
}
s->n = n;
s->next = NULL;
t = *head;
if (*head == NULL)
{
s->next = *head;
*head = s;
}
else
{
while (t->next)
{
t = t->next;
}
t->next = s;
}
s->prev = t;
return (s);
}
