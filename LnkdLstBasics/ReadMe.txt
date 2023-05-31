Project Name

Description:
This project is a demonstration of various operations on a linked list data structure implemented in C.
It includes functions to create a linked list, add nodes at different positions, delete nodes, 
and perform basic operations like printing and freeing the list.

Table of Contents:
1. Requirements
2. Usage
3. Functionality
4. File Structure
5. License

1. Requirements:
- C compiler

2. Usage:
- Clone the repository or download the source code files.
- Compile the code using a C compiler.
- Run the executable file to execute the program.

3. Functionality:
The project provides the following functionality:

- Creating a linked list:
  - createLinkedList(int numNodes): Creates a linked list with the specified number of nodes.

- Printing a linked list:
  - printList(struct Node* head): Prints the elements of the linked list.

- Adding nodes to the linked list:
  - addNewNodeToStartOfList(struct Node** head, int newData): Adds a new node at the beginning of the list.
  - addNewNodeToEndOfList(struct Node** head, int newData): Adds a new node at the end of the list.
  - addNewNodeBeforeSpecificElementInList(struct Node** head, int specificElement, int middleData): Adds a new node before a specific element in the list.
  - addNewNodeAfterSpecificElementInList(struct Node* head, int specificElement, int newData): Adds a new node after a specific element in the list.

- Deleting nodes from the linked list:
  - deleteFromStartOfList(struct Node** head): Deletes the first node from the list.
  - deleteNodeFromEndList(struct Node** head): Deletes the last node from the list.
  - deleteBeforeSpecificNodeFromList(struct Node** head, int specificElement): Deletes the node before a specific element in the list.
  - deleteAfterSpecificNodeFromList(struct Node** head, int specificNode): Deletes the node after a specific node in the list.
  - deleteSpecificNodeFromList(struct Node** head, int specificNode): Deletes a specific node from the list.

- Freeing the linked list:
  - freeList(struct Node* head): Frees the memory occupied by the linked list.

4. File Structure:
- main.c: Contains the main function and function calls for testing the linked list operations.
- linkedlist.h: Contains function declarations and the structure definition for the linked list.
- linkedlist.c: Contains the implementation of the linked list functions.

5. License:
[Visual Studio]

