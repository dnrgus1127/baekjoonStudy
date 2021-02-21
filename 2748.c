#include <stdio.h>

long long store[90]; //�������� �������� 0 �ʱ�ȭ

long long Fibonacci(int n) { // �Է� ���� 90 ���� �̹Ƿ� 32��Ʈ ������ Ŀ�� �Ұ��� long long
	if (store[n] != 0) {
		return store[n];  //Memorization
	}

	store[n] = Fibonacci(n - 1) + Fibonacci(n - 2); //����Լ�
	return store[n];
}

int main(void) {
	int input = 0;
	int error = scanf("%d", &input);
	store[1] = 1;
	store[2] = 1;

	printf("%lld\n", Fibonacci(input));
	
}