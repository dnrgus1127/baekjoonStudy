#include <stdio.h>

int main() {
	int n = 0;
	int num = 2; // 나누는 숫자
	int prime[30]; // 소인수들이 저장될 공간
	int index = 0;

	scanf("%d", &n);

	while (n != 1) {
		if (n % num != 0) { // 해당하는 소수로 나누어지지 않는다면
			num++;
		}
		else {
			n /= num;
			prime[index++] = num;
		}
	}
	if (prime[0] == 0) {
		prime[0] = n;
		index++;
	}
	for (int i = 0; i < index; i++) {
		printf("%d\n", prime[i]);
	}

}