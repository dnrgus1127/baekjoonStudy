#include <stdio.h>

char arr[64][65]; // %s로 입력받기위해서 마지막 null 문자 처리 위해 65크기의 배열

void zip(int n, int x, int y){
	
	char startPoint = arr[x][y];
	int loop = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (startPoint != arr[x + i][y + j]) {

				loop = 1; // 정사각형이 모두 같은 색이 아니면 탈출
				break;
			}	
		}
		if (loop == 1) { // 이중포문 탈출
			break;
		}
	}
	if (loop == 1) { // 탈출 시에만 재귀함수
		printf("(");
		n = n / 2;
		zip(n, x, y);
		zip(n, x, y + n);
		zip(n, x + n, y);
		zip(n, x + n, y + n);
		printf(")");
	}
	else {
		printf("%c", startPoint); 
	
	}
}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%s", arr[i]);
	}
	zip(n, 0, 0);
}