#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack
 * @hd: Double pointer to the top of stack
 * @num: Number of line
 */
void swap(stack_t **hd, unsigned int num)
{
	int tmp;
	stack_t *first;
	stack_t *second;

	if (!hd || !(*hd) || !(*hd)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", num);
		exit(EXIT_FAILURE);
	}
	first = *hd;
	second = first->next;
	tmp = first->n;
	first->n = second->n;
	second->n = tmp;
}

