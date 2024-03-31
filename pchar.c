#include "monty.h"

/**
 * pchar - Prints the char at the top of the stack, followed by a new line
 * @hd: Double pointer to the top of stack
 * @num: Number of line
 */
void pchar(stack_t **hd, unsigned int num)
{
	if (!hd || !(*hd))
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", num);
		exit(EXIT_FAILURE);
	}
	if ((*hd)->n < 0 || (*hd)->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", num);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (char)(*hd)->n);
}
