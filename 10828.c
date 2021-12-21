#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef int element;

typedef struct linked_stack{
	element data;
	struct linked_stack* link;
} linked_stack;

linked_stack* top;

void push(int x);
void pop();
void size();
void empty();
void P_top();
void if_in(char* str);

int main(){
	int T = 0;
	char* str = malloc(sizeof(char)*6);
	top = NULL;
	scanf("%d",&T);
	for (int i = 0; i < T; i++) {
		scanf("%s", str);
		if_in(str);
	}
	return 0;
}

void push(int x) {
	linked_stack* temp = (linked_stack *)malloc(sizeof(linked_stack));
	temp->data = x;
	temp->link = top;
	top = temp;
}
void pop() {
	linked_stack* temp = top;
	if (top == NULL) {
		printf("-1\n");
	}
	else {
		printf("%d\n", (temp->data));
		top = temp->link;	
		free(temp);
	}
}
void size() {
	int length = 0;
	if (top != NULL) {
		
		linked_stack* temp = top;
		while (temp != NULL) {
			temp = temp->link;
			length++;
		}

	}
	printf("%d\n", length);
}
void empty() {
	if (top == NULL) {
		printf("1\n");
	}
	else {
		printf("0\n");
	}
}
void P_top() {
	linked_stack* temp = top;
	if (top == NULL) {
		printf("-1\n");
	}
	else {
		printf("%d\n", temp->data);
	}
}

void if_in(char* str) {

	if (!strcmp(str,"push")) {
		int data;
		scanf("%d", &data);
		push(data);
	}
	else if (!strcmp(str, "pop")) {
		pop();
	}
	else if (!strcmp(str, "size")) {
		size();
	}
	else if (!strcmp(str, "empty")) {
		empty();
	}
	else if (!strcmp(str, "top")){
		P_top();
	}
	else {
		printf("error");
	}
}
