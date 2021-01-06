#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int arr[100000];
char str[200001];
int arrPoint = 0;
int strPoint = 0;

int main(){
	int n = 0;
	int d = scanf("%d", &n);
	int data = 0;
	int sqeIndex = 1;
	while (n--) {
		scanf("%d", &data);
		while (sqeIndex <= data) {
			arr[arrPoint++] = sqeIndex++;
			str[strPoint++] = '+';

		}
		if (arr[arrPoint-1] == data) {
			str[strPoint++] = '-';
			arrPoint--;
		}
	}
	if (arrPoint == 0) {
		for (int i = 0; i < strPoint; i++) {
			printf("%c\n", str[i]);
		}
	}
	else {
		printf("NO");
	}
}