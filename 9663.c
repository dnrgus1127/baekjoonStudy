#include <stdio.h>
#include <stdlib.h>

int n;
int square[16] = { 0, };
int Case = 0;
int flag = 0;
void backTracking(int x) {

	if (x == n+1) {
		Case++;
		return;
	}
	for (int i = 1; i <= n; i++){
		for (int k = 1; k < x; k++) {
			if (square[k] == i) { //열
				flag = 1;
				break;
			}
			if (abs(square[k] - i) == abs(k - x)) { //대각선
				flag = 1;
				break;
			}
		}
		if (!flag) {
			square[x] = i;
			backTracking(x + 1);
			//square[x] = 0;
		}
		flag = 0;
		
	}

	return;
}


int main() {
	scanf("%d", &n);
	backTracking(1);
	printf("%d", Case);
}