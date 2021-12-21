#include <stdio.h>

int main() {	
	int n;
	scanf("%d", &n);
	int arr[51];
	int max = 0, min = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (i == 0) {
			max = arr[i];
			min = arr[i];
		}
		if (max < arr[i]) {
			max = arr[i];
		}
		else if (min > arr[i]){
			min = arr[i];
		}
	}

	printf("%d", max * min);


}