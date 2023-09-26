#include"lists.h"
/**
 * free_listint_safe - frees
 * @h: head
 * Return:l
 */
size_t free_listint_safe(listint_t **h)
{
size_t l = 0;
int equalitty;
listint_t *c;
if (h == NULL || *h == NULL)
{
return (0);
}
while (*h)
{
equalitty = *h - (*h)->next;
if (equalitty > 0)
{
c = (*h)->next;
free(*h);
*h = c;
l++;
}
else
{
free(*h);
*h = NULL;
l++;
break;
}
}
*h = NULL;
return (l);
}
