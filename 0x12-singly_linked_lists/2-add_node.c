#include"lists.h"
/**
 * *add_node - add node
 * @head:the head
 *@str:the str
 *Return:address
 *
 *
 *
 *
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *s;
s = malloc(sizeof(list_t));
if (s == NULL)
{
return (NULL);
}
s->str = strdup(str);
s->len = strlen(str);
s->next = *head;
*head = s;
return (s);
}
