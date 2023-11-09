#include "lists.h"

/**
 * get_dnodeint_at_index -get add
 * @head: h
 * @index: position
 * Return:add
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
for (i = index; i != 0; i--)
{
if (head == NULL)
{
return (NULL);
}
head = head->next;
}
return (head);
}
