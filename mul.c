#include "monty.h"

/**
 * mul - multiplies the top two elements of the stack.
 * @hd: stack head
 * @count: line_number
 * Return: no return
 */
void mul(stack_t **hd, unsigned int count)
{
	stack_t *h;
	int len = 0, result;
	h = *hd;

	while (h)
	{
		h = h->next;
		len++;
	}
	switch (len) {
		case 0:
		case 1:
			fprintf(stderr, "L%d: can't mul, stack too short\n", count);
			fclose(bus.file);
			free(bus.content);
			free_list(*hd);
			exit(EXIT_FAILURE);
			break;
		default:
			h = *hd;
			result = h->next->n * h->n;
			h->next->n = result;
			*hd = h->next;
			free(h);
			break;
	}
}
