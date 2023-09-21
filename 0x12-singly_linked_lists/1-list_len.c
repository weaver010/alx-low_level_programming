#include"lists.h"
/**
 * list_len - return len
 * @h:the node
 *Return:o
 *
 */
size_t list_len(const list_t *h)
{int o = 0;
while (h)
{
h = h->next;
o++;
}
return (o);
}
