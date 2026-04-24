#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a doubly linked list of integers
 * @list: The list to print
 */
void print_list(const listint_t *list)
{
	const listint_t *node;

	node = list;
	while (node != NULL)
	{
		if (node->prev != NULL)
			printf(", ");
		printf("%d", node->n);
		node = node->next;
	}
	printf("\n");
}
