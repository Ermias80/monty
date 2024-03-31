#include "monty.h"

/**
 * free_list - Frees stack opcode
 * @hd: pointer to the top of stack
 */
void free_list(stack_t *hd)
{
	stack_t *temp;

	while (hd != NULL)
	{
		temp = hd;
		hd = hd->next;
		free(temp);
	}
}
