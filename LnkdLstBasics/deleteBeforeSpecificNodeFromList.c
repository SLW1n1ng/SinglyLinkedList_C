#include "deleteBeforeSpecificNodeFromList.h"
#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void deleteBeforeSpecificNodeFromList(struct Node** head, int specificNode) {
	if (*head == NULL || (*head)->next == NULL) {
		printf("%*s%s\n", 5, "", "List is empty or has only one node.\n");
		return;
	}

	if (specificNode < 2) {
		printf("%*sNode %d not found in the list.\n\n", 5, "", specificNode);
		return;
	}

	struct Node* current = *head;
	struct Node* prev = NULL;
	int count = 1;

	while (current != NULL && count < specificNode - 1) {
		prev = current;
		current = current->next;
		count++;
	}

	if (current == NULL || current->next == NULL) {
		printf("%*sNode %d not found in the list.\n\n", 5, "", specificNode);
		return;
	}

	if (prev == NULL) {
		*head = current->next;
	}
	else {
		prev->next = current->next;
	}

	free(current);
}
