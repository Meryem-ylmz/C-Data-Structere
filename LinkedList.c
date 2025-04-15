#include "LinkedList.h"

Node	*create_node(int data)
{
	Node	*new_node;

	new_node = (Node *)malloc(sizeof(Node));
	if (new_node == NULL)
	{
		printf("memory allocation failed\n");
		return (NULL);
	}
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

void	add_node_to_head(LinkedList *list, int data)
{
	Node	*new_node;

	new_node = create_node(data);
	if (new_node == NULL)
	{
		printf("memory allocation failed\n");
        return;
		
	}
	new_node->next = list->head;
	list->head = new_node;
}

void	add_node_to_tail(LinkedList *list, int data)
{
	Node	*new_node;
	Node	*current;

	new_node = create_node(data);
	if (new_node == NULL)
	{
		printf("memory allocation failed\n");
		return ;
	}
	if (list->head == NULL)
	{
		list->head = new_node;
		return ;
	}
	current = list->head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
}

void	print_list(LinkedList *list)
{
	Node	*current;

	if (list->head == NULL)
	{
		printf("list is empty\n");
		return ;
	}
	current = list->head;
	while (current != NULL)
	{
		printf("%d\n", current->data);
		current = current->next;
	}
	printf("NULL\n");
}

Node	*search_node(LinkedList *list, int target)
{
	Node	*current;

	if (list->head == NULL)
	{
		return (NULL);
	}
	current = list->head;
	while (current != NULL)
	{
		if (current->data == target)
			return (current);
		current = current->next;
	}
	return (NULL);
}

void	delete_node(LinkedList *list, int target)
{
	Node	*temp;
	Node	*current;
	Node	*previous;

	if (list->head == NULL)
		return ;
	if (list->head->data == target)
	{
		temp = list->head;
		list->head = list->head->next;
		free(temp);
		return ;
	}
	current = list->head;
	previous = NULL;
	while (current != NULL)
	{
		if (current->data == target)
		{
			previous->next = current->next;
			free(current);
			return ;
		}
		previous = current;
		current = current->next;
	}
}

void	free_list(LinkedList *list)
{
	Node *current;
	Node *temp;

	current = list->head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	list->head = NULL;
}