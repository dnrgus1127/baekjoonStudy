#include <stdio.h>


int main(){
	int n;
	int count = 0;
	int six = 666;
	int temp;

	scanf("%d", &n);

	while (count != n) {
		temp = six;
		while (temp / 10 != 0) {
			if (temp % 1000 == 666) {
				count++;
				break;
			}
			temp /= 10;
		}
		six++;
	}
	six--;
	printf("%d", six);

	
}
