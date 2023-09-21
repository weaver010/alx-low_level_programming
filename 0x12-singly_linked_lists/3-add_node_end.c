#include"lists.h"
list_t *add_node_end(list_t **head, const char *str)
{
list_t *s,*t=*head;
s=malloc(sizeof(list_t));
s->str=strdup(str);
s->len=strlen(str);
s->next=NULL;


if (*head == NULL)
{
		*head = s;
		return (s);
}


while(t->next)
{
    t=t->next;
}
t->next=s;


return(s);

}
