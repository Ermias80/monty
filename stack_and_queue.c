#include "monty.h"

/**
 * stack - Executes the stack and queue operations
 * @ptr: Double pointer to the top of the stack or the front of the queue
 * @opcode: Either the stack or queue operation code
 * @num: Line number in the Monty file
 * Return: Void
 */
void stack(stack_t **ptr, char *opcode, unsigned int num)
{
	int value;
	char *str = NULL, *delim = " \n\t\r";

	switch (opcode[0])
	{
		case 's':
			if (strcmp(opcode, "stack") == 0)
			{
				FIFO = 0;
				return;
			}
			else if (strcmp(opcode, "queue") == 0)
			{
				FIFO = 1;
				return;
			}
			break;
		case 'p':
			if (strcmp(opcode, "push") == 0)
			{
				str = strtok(NULL, delim);
				if (valid_int(str) == 0)
				{
					fprintf(stderr, "L%u: usage: push integer\n", num);
					free_list(*ptr);
					exit(EXIT_FAILURE);
				}
				value = atoi(str);
				if (FIFO)
					queue(ptr, value);
				else
					push(ptr, value);
				return;
			}
			break;
		default:
			excute(ptr, opcode, num);
			return;
	}
}
/**
 * valid_int - checks if a string is a valid integer
 * @str: string to be checked
 * Return: 1 if valid, 0 if not
 */
int valid_int(const char *str)
{
	if (str == NULL || *str == '\0')
		return (0);
	/* Check for sign ('+' or '-') */
	if (*str == '+' || *str == '-')
		str++;
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}

	return (1);
}
/**
 * queue - Insert an element into the queue
 * @rear: Double pointer to the rear of queue
 * @n: Integer value to be inserted
 */
void queue(stack_t **rear, int n)
{
	stack_t *nw_node, *temp;

	nw_node = malloc(sizeof(stack_t));
	if (nw_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return;
	}
	nw_node->n = n;
	nw_node->next = NULL;
	if (*rear == NULL)
	{
		nw_node->prev = NULL;
		*rear = nw_node;
		return;
	}
	temp = *rear;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = nw_node;
	nw_node->prev = temp;
}
