#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack,
 * followed by a new line
 * @hd: stack head
 * @count: line_number
 * Return: no return
 */
void pstr(stack_t **hd, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *hd;
	if (!h)
	{
		printf("\n");
		return;
	}
	do {
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	} while (h);
	printf("\n");
}
