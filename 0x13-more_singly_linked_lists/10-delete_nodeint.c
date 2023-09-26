#include"lists.h"
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cop = *head;
	listint_t *c = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cop);
		return (1);
	}

	while (i < index - 1)
	{
		if (!cop)
		{
          return (-1);

		}
		if( !(cop->next))
		{
			return (-1);
		}
		cop = cop->next;
		i++;
	}


	c = cop->next;
	cop->next = c->next;
	free(c);

	return (1);
}
