#include"lists.h"
int pop_listint(listint_t **head)
{
	listint_t *c;
	int dat;
if (head == NULL)
{
return (0);
}
else if (*head == NULL)
{
return (0);
}
dat = (*head)->n;
c = (*head)->next;
free(*head);
*head = c;
return (dat);
}
