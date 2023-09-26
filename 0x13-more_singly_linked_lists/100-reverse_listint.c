#include"lists.h"
/**
 * reverse_listint - reverses
 * @head: the head node
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *c = NULL;
listint_t *s = NULL;
while (*head)
{
s = (*head)->next;
(*head)->next = c;
c = *head;
*head = s;
}
*head = c;
return (*head);
}
