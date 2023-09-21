#include"lists.h"
/**
 *free_list -free list
 *@head:the node
 *Rrturn:void
 *
 *
 */
void free_list(list_t *head)
{
list_t *s;
while (head)
{
s = head->next;
free(head->str);
free(head);
head = s;
}
}
