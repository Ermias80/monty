#include "monty.h"

/**
 * pint - Prints the top element of the stack.
 * @hd: Stack head.
 * @count: Line number.
 * Return: No return value.
 */
void pint(stack_t **hd, unsigned int count)
{
	if (*hd == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*hd)->n);
}
