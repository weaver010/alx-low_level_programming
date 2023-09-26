#include"lists.h"
/**
 * *insert_nodeint_at_index - insert
 *  @head:the head node
 * @idx:the index
 *@n:the data
 *Return:address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *c;
listint_t *cop = *head;

c = malloc(sizeof(listint_t));
if (c == NULL)
{
return (NULL);
}
if (head == NULL)
{
return (NULL);
}
c->n = n;
c->next = NULL;
if (idx == 0)
{
c->next = *head;
*head = c;
return (c);
}
while (i < idx)
{
if (!cop)
{
break;
}
if (i == idx - 1)
{
c->next = cop->next;
cop->next = c;
return (c);
}
else
{
cop = cop->next;
i++;
}
}
return (NULL);
}
