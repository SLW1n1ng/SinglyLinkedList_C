#include "deleteFromStartOfList.h"
#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void deleteFromStartOfList(struct Node** head) {
	if (*head == NULL) {
		printf("%*s%s\n", 5, "", "List is already empty.\n");
		return;
	}

	struct Node* current = *head;
	*head = (*head)->next;
	free(current);
}
