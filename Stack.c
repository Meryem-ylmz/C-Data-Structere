#include "Stack.h"

void	init_stack(Stack *s, int capacity)
{
	s->capacity = capacity;
	s->array = (int *)malloc(capacity * sizeof(int));
	s->top = -1;
}

int	Stack_is_full(Stack *s)
{
	return (s->top == s->capacity - 1);
}

int	Stack_is_empty(Stack *s)
{
	return (s->top == -1);
}

void	push(Stack *s, int data)
{
	if (Stack_is_full(s))
	{
		printf("Stack is full! Cannot add element\n");
		return ;
	}
	s->top++;
	s->array[s->top] = data;
}

int	pop(Stack *s)
{
	int	data;

	if (Stack_is_empty(s))
	{
		printf("Stack is empty. Cannot be removed\n");
		return (-1);
	}
	data = s->array[s->top];
	s->top--;
	return (data);
}

void	print_stack(Stack *s)
{
	if (Stack_is_empty(s))
	{
		printf("Stack is empty\n");
		return ;
	}

	int i = s->top;
	while (i >= 0)
	{
		printf("%d ", s->array[i]);
		i--;
	}
	printf("\n");
}