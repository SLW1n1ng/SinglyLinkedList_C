#include <crtdbg.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#include "node.h"
#include "clearConsole.h"
#include "createLinkedList.h"
#include "addNewNodeToStartOfList.h"
#include "addNewNodeBeforeSpecificElementInList.h"
#include "addNewNodeAfterSpecificElementInList.h"
#include "addNewNodeToEndOfList.h"
#include "deleteFromStartOfList.h"
#include "deleteBeforeSpecificNodeFromList.h"
#include "deleteSpecificNodeFromList.h"
#include "deleteAfterSpecificNodeFromList.h"
#include "deleteFromEndOfList.h"
#include "printList.h"
#include "freeList.h"

int main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);// Enable memory leak detection

	struct Node* head = NULL;
	int numNodes = 3;
	int middleOfList = 2;
	int insertData = 888;

	// Create head linked list 
	head = createLinkedList(numNodes);
	clearConsole();

	//Add to beginning of list
	printf("\nAdd to beginning of list\n");
	addNewNodeToStartOfList(&head, insertData);
	printList(head);

	// Delete from start of list
	printf("\nDelete from start of list\n");
	deleteFromStartOfList(&head);
	printList(head);

	// Add before specific element
	printf("\nAdd before specific element\n");
	addNewNodeBeforeSpecificElementInList(&head, middleOfList, insertData);
	printList(head);

	// Delete specific node from list
	printf("\nDelete specific node from list\n");
	deleteSpecificNodeFromList(&head, middleOfList);
	printList(head);

	// Add after specific element
	printf("\nAdd after specific element\n");
	addNewNodeAfterSpecificElementInList(&head, middleOfList, insertData);
	printList(head);

	// Delete after specific node from list
	printf("\nDelete after specific node from list\n");
	deleteAfterSpecificNodeFromList(&head, middleOfList);
	printList(head);

	//Add to end of list
	printf("\nAdd to end of list\n");
	addNewNodeToEndOfList(&head, insertData);
	printList(head);

	// Delete from end of list
	printf("\nDelete from the end of the list\n");
	deleteNodeFromEndList(&head);
	printList(head);

	// Delete before specific node from list
	printf("\nDelete before specific node from list\n");
	deleteBeforeSpecificNodeFromList(&head, middleOfList);
	printList(head);

	printf("\n");

	freeList(head);

	if (_CrtDumpMemoryLeaks()) {
		printf("\n\nMemory leaks detected!\n\n");
	}

	return 0;
}

