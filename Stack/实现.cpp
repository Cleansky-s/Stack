#include <iostream>

#define MAX 10
typedef struct stack {
	int data[MAX];
	int top;

}stack, * Stack;

bool initstack(stack& L) {
	L.top = 0;
	return true;
}

bool push(stack& L, int i) {
	for (int x = 0; x <= MAX; x++) {
		L.data[i];
		L.top++;
		if (i > 999) {
			break;
		}
		std::cin >> i;
	}return true;
}

bool pop(stack& L, int i) {
	for (int x = 0; x <= L.top; x++) {
		L.data[L.top] = NULL;
		L.top--;
	}return true;
}