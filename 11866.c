#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
typedef struct queue {
	int data;
	struct queue* link;
}queue;

queue* front = NULL;
queue* rear = NULL;

void push(int data) {
	queue* temp = (queue*)malloc(sizeof(queue));
	temp->data = data;
	temp->link = NULL;
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
	int data;
	if (front == NULL) {
		
		return -1;
	}
	else {
		queue* temp = front;
		data = temp->data;
		front = front->link;
		if (front == NULL) {
			rear = NULL;
		}
		free(temp);
		return data;
	}
}
int main() {
	int n=0;
	int* arr;
	int arr_index = 0;
	int temp;
	int k = 0;
	scanf("%d %d", &n, &k);
	arr = (int *)malloc(sizeof(int) * n);
	for (int i = 1; i <= n; i++) {
		push(i);
	}
	for (int i = 1; i < n * k + 1; i++) {
		if (i % k == 0) {
			arr[arr_index] = pop();
			if (arr_index < n) {
				arr_index++;
			}
		}
		else {
			temp = pop();
			push(temp);
		
		}
	}
	
	printf("<");
	
	for (int i = 0; i < n - 1; i++) {
		printf("%d, ", arr[i]);
	}
	printf("%d", arr[n - 1]);
	printf(">");


}