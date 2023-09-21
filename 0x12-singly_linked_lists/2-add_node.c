#include"lists.h"
/**
 *
 *
 *
 *
 *
 *
 *
 *
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *s;
s=malloc(sizeof(list_t));
s->str=strdup(str);
s->len=strlen(str);
s->next=*head;
*head=s;
return(*head);
    
}
