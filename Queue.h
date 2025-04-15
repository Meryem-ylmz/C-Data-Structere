#ifndef QUEUE_H
# define QUEUE_H

# include <stdio.h>
# include <stdlib.h>

typedef struct Queue
{
	int	*array;
	int	front;
	int	rear;
	int	capacity;
	int	size;
}		Queue;

void	init_queue(Queue *q, int capacity);
void	enqueue(Queue *q, int data);
void	print_queue(Queue *q);

int		dequeue(Queue *q);
int		queue_is_full(Queue *q);
int		queue_is_empty(Queue *q);

#endif