#include "lists.h"
/**
 * free_dlistint - free a d_linked_list.
 * @head:h
 * Return:0
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *f;
while (head)
{
f = head->next;
free(head);
head = f;
}
}
