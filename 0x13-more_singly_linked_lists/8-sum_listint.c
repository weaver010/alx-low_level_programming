#include"lists.h"
/**
 * sum_listint - sum
 * @head:the head node
 * Return:sum
 *
 *
 */
int sum_listint(listint_t *head)
{
int sum = 0, num;
listint_t *c = head;
while (c)
{
num = c->n;
sum += num;
c = c->next;
}
return (sum);
}
