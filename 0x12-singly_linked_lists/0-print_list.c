#include <stdio.h>
#include <stdlib.h>

/**
 *print_list - prints str and len of the nodes
 *@h - pointer to the had node
 *Return - returns the number of nodes
 */

size_t print_list(const list_t *h)
{
	int nodes_count = 0;
	while(h != NULL)
	{
		if(h.str == NULL) 
			printf("[0] (nil)\n");

		printf("[%d] (%s)\n", h->len, h->str);
		h = h.next;
		nodes_count++;
	}

	return node_count;
}
