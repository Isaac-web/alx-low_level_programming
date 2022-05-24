#include <stdio.h>
#include <stdlib.h>

/**
 *
 * print_list - prints the node elements
 * @h - pointer of the head node
 * Return - number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	if(*h == NULL) {
		printf("[0] (nil)\n");
		return (0);
	}
	
	list_t *current = h;
	int nodes_count = 0;
	while(*current != NULL)
	{
		printf("[%d] %s\n", current->len, current->str);
		current = current.next;
		nodes_count++;
	}
}
