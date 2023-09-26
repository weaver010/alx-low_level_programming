#include"lists.h"
/**
 * len - get len
 * @head: the head node
 *
 * Return:i
 */
int len(const listint_t *head)
{
const listint_t *c, *s;
int i = 0;
if (head == NULL || head->next == NULL)
return (0);
c = head->next;
s = (head->next)->next;
while (s)
{
if (c == s)
{
c = head;
while (c != s)
{
i++;
c = c->next;
s = s->next;
}
c = c->next;
while (c != s)
{
i++;
c = c->next;
}
return (i + 1);
}
c = c->next;
s = (s->next)->next;
}
return (0);
}

/**
 * print_listint_safe - Prints
 * @head: the head node
 * Return: l
 */
size_t print_listint_safe(const listint_t *head)
{
int l, i = 0;
l = len(head);
if (l == 0)
{
for (; head != NULL; l++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (i = 0; i < l; i++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (l);
}
