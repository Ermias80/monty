#include "monty.h"
/**
 * pint - Prints the value at the top of the stack, followed by a new line
 * @hd: Pointer to top of stack
 * @num: Number of line
*/
void pint(stack_t *hd, unsigned int num)
{
	if (!hd)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", num);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", hd->n);
}
