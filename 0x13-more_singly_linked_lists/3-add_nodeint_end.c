#include"lists.h"
/**
 * *add_nodeint_end - add node at end
 * @head:the head node
 * @n:the data
 * Return:the address of element
 *
 *
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *t = *head;
listint_t *c = malloc(sizeof(listint_t));
if (c == NULL)
{
return (NULL);
}
c->n = n;
c->next = NULL;
if (*head == NULL)
{
*head = c;
return (c);
}
while (t->next)
{
t = t->next;
}
t->next = c;
return (c);
}
