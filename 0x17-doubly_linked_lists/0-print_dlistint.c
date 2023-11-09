#include"list.h"
/**
 *print_dlistint - print d linked list
 *@h: h
 *Return:0
 *
 */
size_t print_dlistint(const dlistint_t *h)
{

size_t i = 0;
if (h == NULL)
{
return (i);
}

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
