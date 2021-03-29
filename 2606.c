#include <stdio.h>

int map[101][101] = { 0, };
int df[101] = { 0, };
int count = 0;
int max = 0;
void DFS(int n) {
	if (df[n] == 1) {
		return;
	}
	df[n] = 1;
	count++;
	for (int i = 1; i <= max; i++) {
		if (map[n][i] == 1) {
			DFS(i);
		}
	}
}

int main() {
	int t;
	int x, y;

	scanf("%d", &max);
	scanf("%d", &t);
	for (int i = 0; i < t; i++) { //그래프 초기 설정
		scanf("%d %d", &x, &y);
		map[x][y] = 1;
		map[y][x] = 1;
	}
	DFS(1);

	printf("%d", count-1);
	
}