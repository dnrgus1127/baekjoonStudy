#include <stdio.h>

char arr[64][65]; // %s�� �Է¹ޱ����ؼ� ������ null ���� ó�� ���� 65ũ���� �迭

void zip(int n, int x, int y){
	
	char startPoint = arr[x][y];
	int loop = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (startPoint != arr[x + i][y + j]) {

				loop = 1; // ���簢���� ��� ���� ���� �ƴϸ� Ż��
				break;
			}	
		}
		if (loop == 1) { // �������� Ż��
			break;
		}
	}
	if (loop == 1) { // Ż�� �ÿ��� ����Լ�
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