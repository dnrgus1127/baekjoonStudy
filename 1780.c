#include <stdio.h>

int map[2200][2200] = { {0,} };
int cases[3] = { 0 };

void ColorPaper(int x, int y, int t) {
	int first = map[x][y];
	int flag = 0;
	for (int i = x; i < x + t; i++) {
		for (int j = y; j < y + t; j++) {
			if (first != map[i][j])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1) {
			break;
		}
	}
	if (flag == 1) {
		t = t / 3;
		ColorPaper(x, y,t);
		ColorPaper(x, y + t,t);
		ColorPaper(x, y + 2 * t, t);
		ColorPaper(x + t, y, t);
		ColorPaper(x + t, y + t,t);
		ColorPaper(x + t, y + 2 * t, t);
		ColorPaper(x + 2 * t, y, t);
		ColorPaper(x + 2 * t, y + t, t);
		ColorPaper(x + 2 * t, y + 2 * t, t);

		return;
	}
	else {
		cases[first + 1] += 1;
	}
}




int main() // 1 < N < 3^7 (2100+a)

{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &map[i][j]);
		}
	}

	ColorPaper(0, 0, n);

	for (int i = 0; i < 3; i++) {
		printf("%d\n", cases[i]);
	}


	
	
	
}