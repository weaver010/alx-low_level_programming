#include"lists.h"
size_t list_len(const list_t *h)
{
int o=0;
list_t *copy;
copy=malloc(sizeof(list_t));
copy->str=h->str;
copy->len=h->len;
copy->next=h->next;
while(copy)
{

copy=copy->next;
o++;
}
free(copy);
return(o);
}
