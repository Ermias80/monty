#include "monty.h"

/**
 * div - divides the top two elements of the stack.
 * @hd: stack head
 * @count: line_number
 * Return: no return
 */
void div(stack_t **hd, unsigned int count)
{
	stack_t *h;
	int len = 0, aux;

	h = *hd;
	while (h)
	{
		h = h->next;
		len++;
	}
	switch(len) {
		case 0:
		case 1:
			fprintf(stderr, "L%d: can't div, stack too short\n", count);
			fclose(bus.file);
			free(bus.content);
			free_list(*hd);
			exit(EXIT_FAILURE);
			break;
		default:
			h = *hd;
			if (h->n == 0)
			{
				fprintf(stderr, "L%d: division by zero\n", count);
				fclose(bus.file);
				free(bus.content);
				free_list(*hd);
				exit(EXIT_FAILURE);
			}
			aux = h->next->n / h->n;
			h->next->n = aux;
			*hd = h->next;
			free(h);
			break;
	}
}
