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
size_t listint_len(const listint_t *h)
{
int o = 0;
while (h)
{
h = h->next;
o++;
}
return (o);
}   

