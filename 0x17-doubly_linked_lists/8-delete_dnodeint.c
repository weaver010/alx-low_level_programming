#include "lists.h"
/**
 * delete_dnodeint_at_index - delete
 * @head:h
 * @index:idx
 * Return: 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *o = *head;
unsigned int i;
if (*head == NULL)
{
return (-1);
}
for (i = index; i != 0; i--)
{
if (o == NULL)
{
return (-1);
}
o = o->next;
}
if (o == *head)
{
*head = o->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}
}
else
{
o->prev->next = o->next;
if (o->next != NULL)
{
o->next->prev = o->prev;
}
}
free(o);
return (1);
}
