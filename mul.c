#include "monty.h"

/**
 * mul - Multiplies the second top element of the stack
 * with the top element of the stack
 * @hd: Double pointer to the top of stack
 * @num: Number of line
 */
void mul(stack_t **hd, unsigned int num)
{
	stack_t *nw_hd;

	if (!hd || !(*hd) || !(*hd)->next)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", num);
		exit(EXIT_FAILURE);
	}
	nw_hd = *hd;
	nw_hd->next->n *= nw_hd->n;
	pop(hd, num);
}
