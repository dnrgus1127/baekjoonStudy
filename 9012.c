#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <cstdio>

typedef char element;


typedef struct linked_stack { //���Ḯ��Ʈ ����
	element data;
	struct linked_stack* link;
}linked_stack;

linked_stack* top = NULL;

void push(element item) // ���ÿ� ������ �߰�
{
	linked_stack* temp = (linked_stack *)malloc(sizeof(linked_stack)); //���� ����ü �ϳ���ŭ �޸� �����Ҵ�
	temp->data = item; //'temp' NULL ������ ���� ���
	temp->link = top;
	top = temp;
}

element pop() { // top data ���
	element item;
	linked_stack* temp = top;
	if (top == NULL) {
		// NO ��� ���� ����
		return ' ';
	}
	else {
		item = temp->data;
		top = temp->link;
		free(temp);
		return item;
	}
}

/*element peek(){  // Top data Ȯ��
	element item;
	if (top == NULL) {
		//NO ��� ����
		return NULL;
	}
	else {
		item = top->data; // Ž��
		return item;
	}
}*/

int isEmpty() {
	if (top == NULL) {
		return 1;
	}
	else
	{
		return 0;
	}
}
void StackEmpty() {
	top = NULL;
}
int main() {
	int T = 1;
	int bol = 0;
	int i = 0;
	int err = scanf("%d", &T);
	char arr[50] = { '0' , };

	getchar(); // ���๮�� ����
	
	element ck;
	
	while (T > 0) {
		i = 0;
		bol = 0;
		gets(arr);
		
		
		while (arr[i] != '\0') {
			if (arr[i] == '(') {  // '(' �̸� ���ÿ� ����
				push(arr[i]);
			}
			else {
				if (isEmpty() == 1) {
					bol = 1;
					break;	
				}
				ck = pop();
			}
			i++;
		}
		if (top == NULL && bol != 1) {
			printf("YES\n");
		}
		else if(top != NULL || bol == 1){
			printf("NO\n");
		}
		T--;
		StackEmpty();
	}

}