#include"lists.h"
/**
 *free_listint -free list
 *@head:the node
 *Rrturn:void
 *
 *
 */
void free_listint(listint_t *head)
{
listint_t *c;
while (head)
{
c = head->next;
free(head);
head = c;
}
}
