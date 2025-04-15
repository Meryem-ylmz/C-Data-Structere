#include "Queue.h"

void	init_queue(Queue *q, int capacity)
{
	q->capacity = capacity;
	q->array = (int *)malloc(capacity * sizeof(int));
	q->front = -1;
	q->rear = -1;
	q->size = 0;
}

int	queue_is_empty(Queue *q)
{
	return (q->size == 0);
}

int	queue_is_full(Queue *q)
{
	return (q->size == q->capacity);
}

void	enqueue(Queue *q, int data)
{
	if (queue_is_full(q))
	{
		printf("Queue is full! Cannot add element\n");
		return ;
	}
	if (queue_is_empty(q))
	{
		q->front = 0;
		q->rear = 0;
	}
	else
	{
		q->rear = (q->rear + 1) % q->capacity;
	}
	q->array[q->rear] = data;
	q->size++;
}

int	dequeue(Queue *q)
{
	int	data;

	if (queue_is_empty(q))
	{
		printf("Queue is empty. Cannot be removed\n");
		return (-1);
	}
	data = q->array[q->front];
	if (q->size == 1)
	{
		q->front = -1;
		q->rear = -1;
	}
	else
	{
		q->front = (q->front + 1) % q->capacity;
	}
	q->size--;
	return (data);
}

void	print_queue(Queue *q)
{
	if (queue_is_empty(q))
	{
		printf("Queue is empty. Cannot be removed\n");
		return ;
	}
	else
	{
		int i = q->front;
		while (i != q->rear)
		{
			printf("%d ", q->array[i]);
			i = (i + 1) % q->capacity;
		}
		printf("\n");
	}
}