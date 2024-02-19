#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given position.
 * @head: A pointer to a pointer to the head of the dlistint_t list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if the deletion was successful, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (i = 0; i < index && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL)
		return (-1);

	temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);
	return (1);
}
