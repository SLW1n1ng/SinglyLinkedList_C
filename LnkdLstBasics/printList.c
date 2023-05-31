#include "printList.h"
#include <stdio.h>
#include "node.h"

void printList(struct Node* head) {
	if (head == NULL) {
		printf("%*s%s\n", 5, "", "List is empty.\n");
		return;
	}

	struct Node* current = head;

	while (current != NULL) {
		printf("Data: %d, Address: %p, Next Address: %p\n", current->data, current, current->next);
		current = current->next;
	}
}

