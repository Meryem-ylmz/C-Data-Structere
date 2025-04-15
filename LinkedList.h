#ifndef LINKEDLIST_H
# define LINKEDLIST_H

# include <stdio.h>
# include <stdlib.h>

typedef struct Node
{
	int			data;
	struct Node	*next;
}				Node;

typedef struct LinkedList
{
	Node		*head;
}				LinkedList;

Node			*create_node(int data);
void			add_node_to_head(LinkedList *list, int data);
void			add_node_to_tail(LinkedList *list, int data);
void			print_list(LinkedList *list);
Node			*search_node(LinkedList *list, int target);
void			delete_node(LinkedList *list, int target);
void			free_list(LinkedList *list);

#endif