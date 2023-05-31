#include "addNewNodeAfterSpecificElementInList.h"
#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void addNewNodeAfterSpecificElementInList(struct Node** head, int specificElement, int newData) {
	if (specificElement < 1) {
		printf("%*sNode %d not found in the list.\n\n", 5, "", specificElement);
		return;
	}

	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = newData;
	newNode->next = NULL;

	if (*head == NULL) {
		*head = newNode;
		return;
	}

	struct Node* current = *head;
	int count = 1;

	while (current != NULL) {
		if (count == specificElement) {
			newNode->next = current->next;
			current->next = newNode;
			return;
		}
		current = current->next;
		count++;
	}

	printf("%*sNode %d not found in the list.\n\n", 5, "", specificElement);
	free(newNode);
}

