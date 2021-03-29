#include <stdio.h>
#include <string.h>

int main() {
	int n, m;
	char map[50][50]; // 배열을 복사해서 각각의 경우마다 초기화
	char flag = 'W'; // 값 비교
	char temp[50][50]; // 입력받는 배열
	int count = 0;
	int min = 999999;
	scanf("%d %d", &n, &m);
	
	for (int i = 0; i < n; i++) {
		scanf("%s", temp[i]); 
	}
	
	for (int x = 0; x < n - 7; x++) {
		for (int y = 0; y < m - 7; y++) {

			memcpy(map, temp, sizeof(temp));

			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 8; j++) {
					if (map[x + i][y + j] != flag) {
						map[x + i][y + j] = flag;
						count++;
					}
					if (flag == 'W') {
						flag = 'B';
					}
					else {
						flag = 'W';
					}
				}
				if (flag == 'W') {
					flag = 'B';
				}
				else {
					flag = 'W';
				}
			}
			if (count > 32) {
				count = 64 - count;
			}

			if (count < min) {
				min = count;

			}
			count = 0;

		}
		
		
	}

	printf("%d", min);
}