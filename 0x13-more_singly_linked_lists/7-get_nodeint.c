#include"lists.h"


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	 int i = 0;
	listint_t *c = head;

	while ( i < index)
	{
	    if(!c)
	    {
          return(NULL);
	    }
	    else
	    {
		c = c->next;
		i++;
	    }
	}
	return (c);
}
