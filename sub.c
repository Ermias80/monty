#include "monty.h"

/**
 * sub - Subtracts the top element of the stack
 * from the second top element of the stack
 * @hd: Double pointer to top of stack
 * @num: Number of line
*/
void sub(stack_t **hd, unsigned int num)
{
	stack_t *nw_hd;

	if (!hd || !(*hd) || !(*hd)->next)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", num);
		exit(EXIT_FAILURE);
	}

	nw_hd = *hd;
	nw_hd->next->n -= nw_hd->n;
	pop(hd, num);
}
