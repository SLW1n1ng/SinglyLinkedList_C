#include "deleteFromEndOfList.h"
#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void deleteNodeFromEndList(struct Node** head) {
	if (*head == NULL) {
		printf("%*s%s\n", 5, "", "List is already empty.\n");
		return;
	}

	if ((*head)->next == NULL) {
		free(*head);
		*head = NULL;
		return;
	}

	struct Node* current = *head;
	struct Node* prev = NULL;

	while (current->next != NULL) {
		prev = current;
		current = current->next;
	}

	free(current);
	prev->next = NULL;
}

