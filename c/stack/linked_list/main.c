#include "stack_linked_list.h"
#include <stdio.h>

#define N 100000000

int main(void) {
	Node* stack = NULL;

	int i;
	for (i = 0; i < N; i++) {
		stack = push_front(stack, i);
	}
	int trash;
	for (i = 0; i < N; i++) {
		stack = pop_front(stack, &trash);
	}

	return 0;
}
