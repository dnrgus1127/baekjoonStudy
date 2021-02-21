#include <stdio.h>
#include <stdlib.h>

typedef struct queue{
	int data;
	struct queue* link;
}queue;

queue* front = NULL;
queue* rear = NULL;

void push(int data) {
	queue* temp = (queue*)malloc(sizeof(queue));
	temp->data = data;
	if (front == NULL) {
		front = temp;
		rear = temp;
	}
	else {
		rear->link = temp;
		rear = temp;
	}
}
int pop() {
	int data = 0;
	queue* temp = front;
	front = front->link;
	data = temp->data;
	free(temp);

	
	

	return data;
}

int queueOne() {
	if (front == rear) {
		return 1;
	}
	else {
		return 0;
	}
}


int main() {
	int n = 0;
	int t = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		push(i);
	}
	while (1) {
		if (n == 1) {
			break;
		}
		t = pop();
		if (queueOne() == 1) {
			break;
		}
		t = pop();
		push(t);
		
	}
	printf("%d", pop());
}