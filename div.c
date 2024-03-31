#include "monty.h"

/**
 * div - Divides the second top element of the stack
 * by the top element of the stack
 * @hd: Double pointer to the top of stack
 * @num: Number of line
 */
void stack_div(stack_t **hd, unsigned int num)
{
	stack_t *nw_hd;

	if (!hd || !(*hd) || !(*hd)->next)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", num);
		exit(EXIT_FAILURE);
	}
	nw_hd = *hd;
	if (nw_hd->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", num);
		exit(EXIT_FAILURE);
	}
	nw_hd->next->n /= nw_hd->n;
	pop(hd, num);
}
