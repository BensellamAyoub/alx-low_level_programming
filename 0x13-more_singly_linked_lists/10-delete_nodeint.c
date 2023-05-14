#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at x
 * @head: linked list
 * @index: index to delete
 * Return: 1 for success || -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp, *tmp2;

	if (*head == NULL)
	{
		return (-1);
	}
	tmp = *head;

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (i < (index - 1) && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (i != (index - 1) || tmp->next == NULL)
	{
		return (-1);
	}
	tmp2 = tmp->next;
	tmp->next = (tmp->next)->next;
	free(tmp2);

	return (1);
}
