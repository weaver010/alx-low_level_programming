#include"lists.h"
/**
 * print_listint - print
 * @h:the node
 * Return:o
 *
 *
 *
 *
 *
 */
size_t print_listint(const listint_t *h)
{
int o = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
o++;
}
return (o);
}
