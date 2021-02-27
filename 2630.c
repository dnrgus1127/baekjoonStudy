#include <stdio.h>

int arr[128][128] = { 0, };
int white = 0;
int blue = 0;

void color(int n,int x,int y) {
	int first = arr[y][x];
	int loop = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (first != arr[y + i][x + j]) {
				loop = 1;
				break;
			}
		}
		if (loop == 1) {
			color(n / 2, x, y);
			color(n / 2, x + n / 2, y);
			color(n / 2, x, y + n / 2);
			color(n / 2, x + n / 2, y + n / 2);
			break;
		}
	}
	if (loop == 0) {
		if (first == 1) {
			blue++;
		}
		else {
			white++;
		}
	}
}

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	color(n, 0, 0);
	printf("%d\n", white);
	printf("%d", blue);

}