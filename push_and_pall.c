#include "monty.h"
/**
 * add_push - add node to the stack
 * @hd: stack head
 * @count: line_number
 * Return: no return
*/
void add_push(stack_t **hd, unsigned int count)
{
	int n, j = 0, flag = 0;

	if (!bus.arg || !*bus.arg)
	{
		fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	if (bus.arg[0] == '-')
		j++;
	while (bus.arg[j])
	{
		if (bus.arg[j] < '0' || bus.arg[j] > '9')
		{
			flag = 1;
			break;
		}
		j++;
	}
	if (flag)
	{
		fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(hd, n);
	else
		addqueue(hd, n);
}

/**
 * pall - prints the stack
 * @hd: stack head
 * @counter: unused variable
 * Return: no return
 */
void pall(stack_t **hd, unsigned int counter)
{
	stack_t *current = *hd;

	(void)counter;
	if (current == NULL)
	{
		return;
	}
	do {
		printf("%d\n", current->n);
		current = current->next;
	} while (current != NULL);
}
