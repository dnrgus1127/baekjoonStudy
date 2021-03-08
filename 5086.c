#include <stdio.h>

int main() {
	int a, b;
	do {
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) {
			break;
		}
		else if (a % b != 0 && b % a != 0) {
			printf("neither\n");
		}
		else if (a % b == 0) {
			printf("multiple\n");
		}
		else if (b % a == 0) {
			printf("factor\n");
		}
	} while (1);
}