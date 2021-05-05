#include <stdio.h>

int n, m;
int arr[9] = { 0, };
int visited[9] = { 0, };

int func(int x) {
	if (x == m) {
		for (int i = 0; i < m; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) { // 방문한 적이 없으면
			arr[x] = i;
			visited[i] = 1;
			func(x + 1);
			visited[i] = 0;
		}
	}
}


int main() {
	scanf("%d %d", &n, &m);

	func(0);
}