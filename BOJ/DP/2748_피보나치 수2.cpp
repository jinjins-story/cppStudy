#include<cstdio>

using namespace std;

int main()
{
	int i, n;
	long long dp[91];
	scanf("%d", &n);

	dp[0] = 0;
	dp[1] = 1;
	for (i = 2; i <= n; i++)
		dp[i] = dp[i - 1] + dp[i - 2];

	printf("%lld", dp[n]);

	return 0;
}