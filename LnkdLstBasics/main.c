#include "allHeaders.h"

int main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);// Enable memory leak detection

	struct Node* head = NULL;
	int numNodes = 3;
	int middleOfList = 2;
	int insertData = 888;

	head = createLinkedList(numNodes);					// Create head linked list 
	clearConsole();

	printf("\nAdd to beginning of list\n");				//Add to beginning of list
	addNewNodeToStartOfList(&head, insertData);
	printList(head);

	printf("\nDelete from start of list\n");			// Delete from start of list
	deleteFromStartOfList(&head);
	printList(head);

	printf("\nAdd before specific element\n");			// Add before specific element
	addNewNodeBeforeSpecificElementInList(&head, middleOfList, insertData);
	printList(head);

	printf("\nDelete specific node from list\n");		// Delete specific node from list
	deleteSpecificNodeFromList(&head, middleOfList);
	printList(head);
	
	printf("\nAdd after specific element\n");			// Add after specific element
	addNewNodeAfterSpecificElementInList(&head, middleOfList, insertData);
	printList(head);

	printf("\nDelete after specific node from list\n");	// Delete after specific node 
	deleteAfterSpecificNodeFromList(&head, middleOfList);
	printList(head);

	printf("\nAdd to end of list\n");					//Add to end of list
	addNewNodeToEndOfList(&head, insertData);
	printList(head);

	printf("\nDelete from the end of the list\n");		// Delete from end of list
	deleteNodeFromEndList(&head);
	printList(head);

	printf("\nDelete before specific node from list\n");// Delete before specific 
	deleteBeforeSpecificNodeFromList(&head, middleOfList);
	printList(head);

	freeList(head);										//Free allocated memory

	if (_CrtDumpMemoryLeaks()) {						
		printf("\n\nMemory leaks detected!\n\n");
	}

	return 0;
}