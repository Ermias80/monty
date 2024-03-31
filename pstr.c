#include "monty.h"

/**
 * pstr - Prints the string starting at the top of the stack
 * followed by a new line
 * @hd: Double pointer to the top of stack
 */
void pstr(stack_t **hd)
{
	stack_t *temp = *hd;

	while (temp)
	{
		if (temp->n < 1 || temp->n > 127)
			break;
		printf("%c", (char)temp->n);
		temp = temp->next;
	}
	printf("\n");
}
