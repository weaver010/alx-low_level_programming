#include"lists.h"
/**
 * *add_node_end - add node
 * @head:the head
 *@str:the str
 *Return:address
 *
 *
 *
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *s, *t = *head;
s = malloc(sizeof(list_t));
if (s == NULL)
{
return (NULL);
}
s->str = strdup(str);
s->len = strlen(str);
s->next = NULL;
if (*head == NULL)
{
*head = s;
return (s);
}
while (t->next)
{
t = t->next;
}
t->next = s;
return (s);
}
