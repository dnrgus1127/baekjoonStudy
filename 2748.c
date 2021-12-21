#include <stdio.h>

long long store[90]; //전역변수 선언으로 0 초기화

long long Fibonacci(int n) { // 입력 값이 90 까지 이므로 32비트 변수로 커버 불가능 long long
	if (store[n] != 0) {
		return store[n];  //Memorization
	}

	store[n] = Fibonacci(n - 1) + Fibonacci(n - 2); //재귀함수
	return store[n];
}

int main(void) {
	int input = 0;
	int error = scanf("%d", &input);
	store[1] = 1;
	store[2] = 1;

	printf("%lld\n", Fibonacci(input));
	
}