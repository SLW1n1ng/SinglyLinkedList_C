#include "createLinkedList.h"
#include <stdlib.h>
#include "node.h"

struct Node* createLinkedList(int numNodes) {

	struct Node* head = NULL;

	for (int i = numNodes; i > 0; i--) {
		struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
		newNode->data = i;
		newNode->next = head;
		head = newNode;
	}

	return head;
}

