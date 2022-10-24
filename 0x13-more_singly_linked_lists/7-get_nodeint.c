#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of
 * a listint_t linked list.
 * @head: pointer to the first element in the linked list
 * Return: the data inside the elements that was delete
 * Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
