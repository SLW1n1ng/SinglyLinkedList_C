#include "addNewNodeToEndOfList.h"
#include <stdlib.h>
#include "node.h"

void addNewNodeToEndOfList(struct Node** head, int newData) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = newData;
	newNode->next = NULL;

	if (*head == NULL) {
		*head = newNode;
		return;
	}

	struct Node* current = *head;
	while (current->next != NULL) {
		current = current->next;
	}

	current->next = newNode;
}
