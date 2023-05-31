#include "deleteSpecificNodeFromList.h"
#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void deleteSpecificNodeFromList(struct Node** head, int specificNode) {
	if (specificNode < 1) {
		printf("%*sNode %d not found in the list.\n\n", 5, "", specificNode);
		return;
	}

	if (*head == NULL) {
		printf("%*s%s\n", 5, "", "List is empty.\n");
		return;
	}

	if (specificNode == 1) {
		struct Node* nodeToDelete = *head;
		*head = (*head)->next;
		free(nodeToDelete);
		return;
	}

	struct Node* current = *head;
	int count = 1;

	while (current != NULL && count < specificNode - 1) {
		current = current->next;
		count++;
	}

	if (current == NULL || current->next == NULL) {
		printf("%*sNode %d not found in the list.\n\n", 5, "", specificNode);
		return;
	}

	struct Node* nodeToDelete = current->next;
	current->next = current->next->next;
	free(nodeToDelete);
}

