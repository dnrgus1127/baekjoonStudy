#include <stdio.h>
#include <stdlib.h>

int visited[1001] = { 0, };
int visited2[1001] = { 0, };
int matrix[1001][1001];

typedef struct queue {
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
	rear->link = temp;
	rear = temp;
}

int pop() {
	int data;
	if (front == NULL) {
		return -1;
	}
	if (front == rear) {
		data = front->data;
		front = NULL;
		rear = NULL;
	}
	else {
		data = front->data;
		front = front->link;
	}
	
	return data;
}

void DFS(int n) {
	if (visited[n] == 1) {
		return;
	}
	printf("%d ", n);
	visited[n] = 1;
	for (int i = 1; i <= 1000; i++) {
		if (matrix[n][i] == 1) {
			DFS(i);
		}
	}
	return;
}
void BFS(int n) {
	for (int i = 1; i <= 1000; i++) {
		if (matrix[n][i] == 1) {
			if (visited2[i] != 1) {
				push(i);
				printf("%d ", i);
				visited2[i] = 1;

			}
		}
	}
}

int main() {
	int n, m, v;
	int x, y;
	int flag = 0;
	scanf("%d %d %d", &n, &m, &v);
	
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &x, &y);
		matrix[x][y] = 1;
		matrix[y][x] = 1;
	}

	DFS(v);
	printf("\n");
	push(v);
	printf("%d ",v);
	visited2[v] = 1;
	while (1)
	{
		flag = pop();
		if (flag == -1) {
			break;
		}
		BFS(flag);
	}
		



}