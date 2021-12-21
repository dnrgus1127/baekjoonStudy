#include <stdio.h>

int n, m;
int arr[9] = { 0, };
int visited[9] = { 0, };
int temp = 0;

int func(int x) {
	if (x == m) {
		for (int i = 0; i < m; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
	for (int i = 1; i <= n; i++) {
		if (!visited[i] && temp < i) {
			visited[i] = 1;
			arr[x] = i;
			temp = arr[x];
			func(x + 1);
			temp = arr[x];
			visited[i] = 0;	
		}
	}
}
int main() {
	scanf("%d %d", &n, &m);
	func(0);
}