#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t linked list.
 * @head: A pointer to the head of the dlistint_t list.
 *
 * Return: The sum of all the data, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head) {
    int sum = 0;

    for (; head != NULL; head = head->next)
        sum += head->n;

    return sum;
}
