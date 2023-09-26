#include"lists.h"
/**
 *free_listint2 -free list
 *@head:the node
 *Rrturn:void
 *
 *
 */
void free_listint2(listint_t **head)
{
listint_t *c;
if (head == NULL)
{
return;
}
while (*head)
{
c = (*head)->next;
free(*head);
*head = c;
}
*head = NULL;
}
