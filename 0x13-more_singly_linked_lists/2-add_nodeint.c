#include "lists.h"

/**
 * add_nodeint - will add a new nodes to the beginning
 * @head: start point to the lists
 * @n: data to the new node
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
