#include "addNewNodeBeforeSpecificElementInList.h"
#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void addNewNodeBeforeSpecificElementInList(struct Node** head, int specificElement, int Data) {
	if (specificElement < 1) {
		printf("%*sNode %d not found in the list.\n\n", 5, "", specificElement);
		return;
	}

	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = Data;
	newNode->next = NULL;

	if (*head == NULL || specificElement == 1) {
		newNode->next = *head;
		*head = newNode;
		return;
	}

	struct Node* current = *head;
	int count = 1;

	while (current->next != NULL && count < specificElement - 1) {
		current = current->next;
		count++;
	}

	if (current->next != NULL) {
		newNode->next = current->next;
	}
	current->next = newNode;
}

