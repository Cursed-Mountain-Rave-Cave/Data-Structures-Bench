#include <stdlib.h>
#ifndef STACK_LINKED_LIST
#define STACK_LINKED_LIST

typedef struct node {
	struct node* next;
	int data;
} Node;

Node* push_front(Node* node, const int data);
Node* pop_front(Node* node, int* data);
void clear_node(Node* node);

#endif
