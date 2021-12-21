#include <stdio.h>

int N;
int A[11];
int add, sub, mul, div;
int min = 1000000000, max = -1000000000;
int visited[10] = { 0, };
int operator[10] = { 0, };
void backTracking(int x, int num) {
	int sum = num;
	if (x == N-1) {
		if (min >= sum) {
			min = sum;
			//printf("min : %d\n", min);
		}
		if (max <= sum) {
			max = sum;
			//printf("max : %d\n", max);
		}
		return;
	}
	int add_all = 0;
	int mul_all = 1;
	for (int i = x; i < N; i++) {
			add_all += A[i];
			mul_all *= A[i];
	}
	//printf("add_all : %d\n", add_all);
	//printf("mul_all : %d\n", mul_all);
	/*if (min <= (sum - mul_all) && min <= (sum - add_all)) {
		if (max >= (sum + add_all) && max >= (sum + mul_all)) {
			//printf("err2");
			
			return;
		}
		
	}*/
	
	for (int i = 0; i < N-1; i++) {
		if (visited[i]) {
			continue;
		}
		if (x == 0) {
			sum = A[0];
			//printf("-------\n");
		}
		if (operator[i] == 1) {
			sum += A[x+1];
		}
		else if (operator[i] == 2) {
			sum -= A[x+1];
		}
		else if (operator[i] == 3) {
			sum *= A[x+1];
		}
		else if (operator[i] == 4) {
			sum /= A[x+1];
		}
		//printf("sum : %d\n", sum);
		visited[i] = 1;
		backTracking(x + 1, sum);
		sum = num;
		//printf("sum : %d\n", sum);
		visited[i] = 0;
	}

}

int main() {
	int index = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d",&A[i]);
	}
	scanf("%d %d %d %d", &add, &sub, &mul, &div);
	for (int i = 0; i < add; i++) {
		operator[i] = 1;
		index++;
	}
	for (int i = 0; i < sub; i++) {
		operator[index + i] = 2;
	}
	index += sub;
	for (int i = 0; i < mul; i++) {
		operator[index + i] = 3;
	}
	index += mul;
	for (int i = 0; i < div; i++) {
		operator[index + i] = 4;
	}
	index += div;

	
	backTracking(0, 0);

	printf("%d\n%d", max, min);
}