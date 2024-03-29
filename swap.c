#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack.
 * @hd: Stack head.
 * @count: Line number.
 * Return: No return value.
 */
void swap(stack_t **hd, unsigned int count)
{
	stack_t *temp = *hd;
	int len = 0, aux;

	for (; temp != NULL; temp = temp->next)
		len++;
	if (len >= 2)
	{
		temp = *hd;
		aux = temp->n;
		temp->n = temp->next->n;
		temp->next->n = aux;
		return;
	}
	fprintf(stderr, "L%d: can't swap, stack too short\n", count);
	fclose(bus.file);
	free(bus.content);
	free_list(*hd);
	exit(EXIT_FAILURE);
}
