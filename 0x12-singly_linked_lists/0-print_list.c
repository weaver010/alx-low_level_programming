#include"lists.h"
size_t print_list(const list_t *h)
{
int o=0;
list_t *copy;
copy=malloc(sizeof(list_t));
copy=h;
while(copy)
{
if(copy->str==NULL)
{
copy->str="(nil)";
copy->len=0;
}
printf("[%d] %s\n",copy->len,copy->str);
copy=copy->next;
o++;
}
return(o);
}
