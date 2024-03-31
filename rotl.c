#include "monty.h"
/**
 * rotl - Rotates the stack from to bottom to the top
 * @hd: Double pointer to the top of stack
 */
void rotl(stack_t **hd)
{
	stack_t *temp, *last;

	if (*hd != NULL && (*hd)->next != NULL)
	{
		temp = *hd;
		*hd = (*hd)->next;
		last = *hd;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = temp;
		temp->prev = last;
		temp->next = NULL;
		(*hd)->prev = NULL;
	}
}
