#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <cstdio>

typedef char element;


typedef struct linked_stack { //연결리스트 스택
	element data;
	struct linked_stack* link;
}linked_stack;

linked_stack* top = NULL;

void push(element item) // 스택에 데이터 추가
{
	linked_stack* temp = (linked_stack *)malloc(sizeof(linked_stack)); //스택 구조체 하나만큼 메모리 동적할당
	temp->data = item; //'temp' NULL 포인터 참조 경고
	temp->link = top;
	top = temp;
}

element pop() { // top data 출력
	element item;
	linked_stack* temp = top;
	if (top == NULL) {
		// NO 출력 구현 예정
		return ' ';
	}
	else {
		item = temp->data;
		top = temp->link;
		free(temp);
		return item;
	}
}

/*element peek(){  // Top data 확인
	element item;
	if (top == NULL) {
		//NO 출력 구현
		return NULL;
	}
	else {
		item = top->data; // 탐색
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

	getchar(); // 개행문자 제거
	
	element ck;
	
	while (T > 0) {
		i = 0;
		bol = 0;
		gets(arr);
		
		
		while (arr[i] != '\0') {
			if (arr[i] == '(') {  // '(' 이면 스택에 삽입
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