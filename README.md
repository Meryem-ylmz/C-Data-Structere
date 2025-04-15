# 💡 C Data Structures Project (Stack, Queue, Linked List)

This project includes example implementations of fundamental data structures written in the C programming language. It features **Stack**, **Queue**, and **Linked List** modules, each developed and tested individually using a common `main.c` file.

---

## 📂 Project Files

| File                     | Description                                  |
|--------------------------|----------------------------------------------|
| `main.c`                 | Tests all data structures                    |
| `Stack.c` / `Stack.h`     | Stack functions (`push`, `pop`, etc.)        |
| `Queue.c` / `Queue.h`     | Queue functions (`enqueue`, `dequeue`, etc.) |
| `LinkedList.c` / `LinkedList.h` | Linked list operations (`add`, `delete`, etc.) |
| `Makefile`               | Contains automatic build instructions       |
| `README.md`              | This documentation file                     |

---

## ⚙️ How to Compile

To compile the project, run the following command in the root directory:

```bash
make

This will compile all .c files and generate an executable named datastructures.

▶️ How to Run
./datastructures
Once executed, the program will print the results of Stack, Queue, and Linked List operations to the terminal in order.

📌 Implemented Functions

📚 Stack
init_stack
push
pop
stack_is_empty
stack_is_full
print_stack
📚 Queue
init_queue
enqueue
dequeue
queue_is_empty
queue_is_full
print_queue
📚 Linked List
add_node_to_head
add_node_to_tail
delete_node
print_list
free_list
🎯 Project Goals

Understand the logic behind data structures in C
Learn dynamic memory management (malloc, free)
Build modular and functional C projects
Practice writing Makefile and README.md documentation
👩‍💻 Author

Meryem Yılmaz
April 2025

📝 Note

This project is created for educational purposes. Each data structure is built as an independent module and the project is open for further development. Feel free to fork and extend it!