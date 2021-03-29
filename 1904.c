#include <stdio.h>

int dp[1000001];
int main() {
	int n;
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	scanf("%d", &n); // 1 ~ 1,000,000

	for (int i = 3; i <= n; i++) {
		dp[i] = (dp[i - 2] + dp[i - 1]) % 15746;
	}
	printf("%d", dp[n]);

}