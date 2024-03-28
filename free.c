#include "monty.h"

/**
* free_list - frees a doubly linked list
* @hd: head of the stack
*/
void free_list(stack_t *hd)
{
	stack_t *next_node;

	if (hd == NULL)
		return;
	do {
		next_node = hd->next;
		free(hd);
		hd = next_node;
	} while (hd != NULL);
}
