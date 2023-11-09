#include"lists.h"
/**
 *add_dnodeint -add node in begin
 *@h: h
 * @n:n
 *Return:l_list
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *s;
s = malloc(sizeof(dlistint_t));
if (s == NULL)
{
return (NULL);
}
s->n = n;
s->next = *head;
s->prev = NULL;
if (*head != NULL)
{
(*head)->prev = s;
}
head = s;
return (*head);
}
