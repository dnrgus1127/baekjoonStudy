#include <stdio.h>

int main() {
	int n = 0;
	int num = 2; // ������ ����
	int prime[30]; // ���μ����� ����� ����
	int index = 0;

	scanf("%d", &n);

	while (n != 1) {
		if (n % num != 0) { // �ش��ϴ� �Ҽ��� ���������� �ʴ´ٸ�
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