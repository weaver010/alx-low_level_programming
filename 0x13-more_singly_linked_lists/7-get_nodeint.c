#include"lists.h"
/**
 * *get_nodeint_at_index - get node
 * @head:the head node
 * @index:the index
 * Return:c
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *c = head;
while (i < index)
{
if (!c)
{
return (NULL);
}
else
{
c = c->next;
i++;
}
}
return (c);
}
