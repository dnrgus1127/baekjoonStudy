#include <stdio.h>

int arr[1000001];

int main() {
	int N = 0,B = 0, C = 0;	long long count = 0;
	scanf("%d", &N);
	for(int i=0;i<N;i++){
		scanf("%d", &arr[i]);
	}
	scanf("%d %d", &B, &C);

	for (int i = 0; i < N; i++) {
		arr[i] -= B;
		count++;

		if (arr[i] > 0) {
			if (arr[i] % C == 0) {
				count += (arr[i] / C);
			}
			else {
				count += (arr[i] / C) + 1;
			}
		}
	}

	printf("%d", count);
	


	return 0;
}