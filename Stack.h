#ifndef STACK_H
# define STACK_H

# include <stdio.h>
# include <stdlib.h>

typedef struct Stack
{
	int	*array;
	int	top;
	int	capacity;
}		Stack;

void	init_stack(Stack *s, int capacity);
void	push(Stack *s, int data);
void	print_stack(Stack *s);

int		pop(Stack *s);
int		Stack_is_empty(Stack *s);
int		Stack_is_full(Stack *s);

#endif