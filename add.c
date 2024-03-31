#include "monty.h"

/**
 * add - Add the top two elements of the stack
 * @hd: Double pointer to the top of stack
 * @num: Number of line
 */
void add(stack_t **hd, unsigned int num)
{
	stack_t *temp;

	if (!hd || !(*hd) || !(*hd)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", num);
		exit(EXIT_FAILURE);
	}
	temp = *hd;
	temp->next->n += temp->n;
	pop(hd, num);
}
