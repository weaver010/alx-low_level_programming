#include"lists.h"
size_t print_list(const list_t *h)
{
int o=0;
while(h)
{
if(h->str==NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n",h->len,h->str);
}
h=h->next;

o++;
}
return(o);
}
