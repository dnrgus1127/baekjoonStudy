#include <stdio.h>

int arr[1000001] = { 0, };



int main() {
	int n, min;
	scanf("%d", &n);

	for (int i = 2; i <= n; i++) {
		min = arr[i - 1];
		if (i % 2 == 0 ) {
			if (arr[i / 2] < min) {
				min = arr[i / 2];
			}
		}
		if (i % 3 == 0) {
			if (arr[i / 3] < min) {
				min = arr[i / 3];
			}
		}
		arr[i] = min + 1;
	}

	printf("%d", arr[n]);
}