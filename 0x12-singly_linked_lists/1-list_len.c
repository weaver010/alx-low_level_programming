#include"lists.h"
size_t list_len(const list_t *h)
{int o= 0;
while(h)
{

h=h->next;
o++;
}
return(o);
}