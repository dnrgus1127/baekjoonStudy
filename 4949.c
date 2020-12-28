#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char element;

typedef struct linked_stack {
	element data;
	struct linked_stack* link;
}linked_stack;

linked_stack* top;

void push(element item); // push
element pop(); //pop
int is_Empty(); // 스택 비어있는지 확인
void stack_Empty(); // 스택 비우기

int main() {
	char str[100] = { '0' ,};
	int str_index = 0;
	char ck = '1';
	int is_Balance = 0;

	while (1)
	{
		gets(str);
		if (str[0] == '.') {
			break;
		}
		while (str[str_index] != '\0') {
			if (str[str_index] == '(' || str[str_index] == '[') {
				push(str[str_index]);
			}
			else if (str[str_index] == ')') {
				if (is_Empty() == 1) {
					is_Balance = 1;
					break;
				}
				ck = pop();
				if (ck != '(') {
					is_Balance = 1;
					break;
				}
			}
			else if (str[str_index] == ']') {
				if (is_Empty() == 1) {
					is_Balance = 1;
					break;
				}
				ck = pop();
				if (ck != '[') {
					is_Balance = 1;
					break;
				}
			}

			
			str_index++;
		}
		if (top == NULL && is_Balance != 1) {
			printf("yes\n");
		}
		else if (top != NULL || is_Balance == 1) {
			printf("no\n");
		}
		else {
			printf("err\n");
		}
		is_Balance = 0;
		stack_Empty();
		str_index = 0;
	}
	return 0;
}

void push(element item) {
	linked_stack* temp = (linked_stack*)malloc(sizeof(linked_stack));
	temp->data = item;
	temp->link = top;
	top = temp;
}
element pop() {
	element item;
	linked_stack* temp = top;
	item = temp->data;
	top = temp->link;
	free(temp);
	return item;
}
int is_Empty() {
	if (top == NULL)
	{
		return 1;
	}
	return 0;
}
void stack_Empty() {
	top = NULL;
}