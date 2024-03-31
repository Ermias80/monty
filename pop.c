#include "monty.h"

/**
 * pop - Removes the top element of the stack
 * @hd: Double pointer to top of stack
 * @num: Number of line
*/
void pop(stack_t **hd, unsigned int num)
{
	stack_t *temp = *hd;

	if (!(*hd))
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", num);
		exit(EXIT_FAILURE);
	}
	*hd = (*hd)->next;
	free(temp);
}

