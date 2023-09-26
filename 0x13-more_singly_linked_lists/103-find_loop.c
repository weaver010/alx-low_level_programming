#include"lists.h"
/**
 * find_listint_loop - find
 * @head: head node
 * Return: c
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *s = head, *c = head;
if (!head)
{
return (NULL);
}
while (s != NULL && c != NULL && (c->next) != NULL)
{
c = c->next->next;
s = s->next;
if (c == s)
{
s = head;
while (s != c)
{
s = s->next;
c = c->next;
}
return (c);
}
}
return (NULL);
}
