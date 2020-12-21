#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 100001

typedef struct Stack {
	int top ;
	int stc[MAX];
} Stack;

void push(Stack* s, int data);
void pop(Stack* s);
int sum(Stack s);

int main() {
	Stack stack;
	int TestCase = 0;
	int data = 0;
	stack.top = 0;
	
	scanf("%d", &TestCase);
	while (TestCase != 0) {
		scanf("%d", &data);
		if (data == 0)
		{
			pop(&stack);
		}
		else {
			push(&stack,data);
		}

		TestCase--;
	}
	printf("%d", sum(stack));


}

void push(Stack* s, int data) {
	if (s->top < MAX) {
		s->stc[s->top] = data;
		s->top++;
		
}

void pop(Stack* s) {
	s->top--;
	s->stc[s->top] = 0;
		
}

int sum(Stack s) {
	int sum = 0;
	for (int i = 0; i < s.top; i++) {
		sum += s.stc[i];
	}
	return sum;
}