#include "monty.h"
/**
 * rotr - Moves the stack's top element to the bottom
 * @hd: Double pointer to the top of the stack
 * Return: void
 */
void rotr(stack_t **hd)
{
	stack_t *first, *temp = *hd;

	if (!hd || !(*hd) || !(*hd)->next)
		return;
	while (temp->next->next)
	{
		temp = temp->next;
	}
	first = temp->next;
	temp->next = NULL;
	first->next = *hd;
	*hd = first;
}
