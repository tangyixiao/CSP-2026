#include <stdio.h>
#include <algorithm>

#define MAXN 200005

int n, m;
int a[MAXN];
int dp[MAXN] = {0};

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	scanf("%d%d", &n, &m);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}

	std::sort(a + 1, a + 1 + n);

	for (int i = 1; i <= n; i++) {
		dp[0] = a[i];

		for (int j = m; j >= 1; j--) {
			/* printf("i = %d, j = %d, %d %d %d %d\n", i, j, dp[j], (dp[j - 1] & a[i]), dp[j - 1], a[i]); */
			/**
			if (j == 1) {
				if (dp[j] < a[i]) {
					dp[j] = a[i];
					continue;
				}
			}
			*/

			if (dp[j] < (dp[j - 1] & a[i])) {
				dp[j] = dp[j - 1] & a[i];
			}
		}

		/**
		for (int j = 1; j <= m; j++) {
			printf("%10d", dp[j]);
		}
		printf("\n");
		*/
	}

	printf("%d\n", dp[m]);

	return 0;
}
