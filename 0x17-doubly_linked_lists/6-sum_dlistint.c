#include "lists.h"
/**
 * sum_dlistint - sum
 * @head: h
 * Return:sum
 */
int sum_dlistint(dlistint_t *head)
{
int s = 0;
while (head)
{
s += head->n;
head = head->next;
}
return (s);
}
