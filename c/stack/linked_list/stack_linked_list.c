#include "stack_linked_list.h"

Node* push_front(Node* node, const int data) {
	Node* new_node = malloc(sizeof(Node));
	new_node->data = data;
	new_node->next = node;
	return new_node;
}

Node* pop_front(Node* node, int* data) {
	*data = node->data;
	Node* next_node = node->next;
	free(node);
	return next_node;
}

void clear_node(Node* node) {
	int trash;
	while (node) {
		node = pop_front(node, &trash);
	}
}

