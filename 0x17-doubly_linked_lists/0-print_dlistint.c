#include"list.h"
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
