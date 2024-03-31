#include "monty.h"
/**
 * push - Push an element to top of stack
 * @hd: Double pointer to the top of stack
 * @d: Integeral data to be added to stack
 */
void push(stack_t **hd, int d)
{
	stack_t *stack = malloc(sizeof(stack_t));
	if (stack == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	stack->n = d;
	stack->next = *hd;
	*hd = stack;
}

/**
 * pall - Prints all the values on the stack
 * starting from the top of the stack
 * @top: Pointer to the top of stack
 */
void pall(const stack_t *top)
{
	const stack_t *curr = top;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
	}
}
