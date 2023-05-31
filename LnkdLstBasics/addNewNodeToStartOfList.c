#include "addNewNodeToStartOfList.h"
#include <stdlib.h>
#include "node.h"

void addNewNodeToStartOfList(struct Node** head, int newData) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = newData;
	newNode->next = NULL;

	if (*head == NULL) {
		*head = newNode;
	}
	else {
		newNode->next = *head;
		*head = newNode;
	}
}
