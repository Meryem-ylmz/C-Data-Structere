#include <stdio.h>
#include "Stack.h"
#include "Queue.h"
#include "LinkedList.h"

int main()
{
    Stack s;
    init_stack(&s, 5); 

    printf("== Stack Test ==\n");
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    print_stack(&s); 

    printf("Pop: %d\n", pop(&s)); 
    print_stack(&s); 
    printf("\n");


    Queue q;
    init_queue(&q, 5);

    printf("== Queue Test ==\n");
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    print_queue(&q);

    dequeue(&q);
    print_queue(&q);
    printf("\n");

    LinkedList list;
    list.head = NULL;

    printf("== LinkedList Test ==\n");
    add_node_to_head(&list, 10);
    add_node_to_tail(&list, 20);
    add_node_to_tail(&list, 30);
    print_list(&list);

    delete_node(&list, 20);
    print_list(&list);

    free_list(&list); // belleği temizle
    printf("\n");

    return 0;
}
