#include"lists.h"
/**
 *dlistint_len - return len
 *@h:h
 *Return:i
 */
size_t dlistint_len(const dlistint_t *h)
{

size_t i = 0;
if (h == NULL)
{
return (i);
}
while (h->prev != NULL)
{
h = h->prev;
i++;
}
while (h != NULL)
{

h = h->next;
i++;
}
return (i);
}
