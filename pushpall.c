#include "monty.h"
/**
 * f_pall - this prints stack
 * @head:the stack head
 * @counter: number used
 * Return: number return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
