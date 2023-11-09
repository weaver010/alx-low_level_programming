#include"lists.h"
/**
 *add_dnodeint -add node in begin
 *@h: h
 * @n:n
 *Return:l_list
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *s;
s = malloc(sizeof(dlistint_t));
if (s == NULL)
{
return (NULL);
}
s->n = n;
s->next = NULL;
if (*head == NULL)
{
s->prev = NULL;
*head = s;
return (s);
}
while ((*head)->next != NULL)
{
*head = (*head)->next;
}
(*head)->next = s;
s->prev = *head;
return (s);
}
