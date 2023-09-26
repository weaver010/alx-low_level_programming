#include"lists.h"
/**
 * *add_nodeint - add node
 * @head:the head node
 * @n:the data
 * Return:address of element
 *
 *
 *
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *c = malloc(sizeof(listint_t));
if (c == NULL)
{
return (NULL);
}
c->n = n;
c->next = *head;
*head = c;
return (c);
}
