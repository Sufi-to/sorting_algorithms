#include "sort.h"
/**
 * swap_n - Swap two nodes in a listint_t doubly-linked list.
 * @head: A pointer to the head of the doubly-linked list.
 * @num1: pointer to number to  be swapped
 * @num2: pointer to number to be swapped
 */
void swap_n(listint_t **head, listint_t **num1, listint_t *num2)
{
	(*num1)->next = num2->next;
	if (num2->next != NULL)
	{
		num2->next->prev = *num1;
	}
	num2->prev = (*num1)->prev;
	num2->next = *num1;
	if ((*num1)->prev != NULL)
	{
		(*num1)->prev->next = num2;
	}
	else
	{
		*head = num2;
	}
	(*num1)->prev = num2;
	*num1 = num2->prev;
}

/**
 * insertion_sort_list - implements the insertion sort algo on
 * a doubly linked list
 * @list: pointer to the head of a doubly linked array
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *key, *put, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (key = (*list)->next; key != NULL; key = temp)
	{
		temp = key->next;
		put = key->prev;
		while (put != NULL && key->n < put->n)
		{
			swap_n(list, &put, key);
			print_list((const listint_t *)*list);
		}
	}
}
