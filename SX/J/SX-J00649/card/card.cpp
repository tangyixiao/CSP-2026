#include <bits/stdc++.h>
using namespace std;
int n, m, a[500010], num[500010], numx[500010], ans[500010];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		num[a[i]]++;
		numx[a[i]] = num[a[i]];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			for (int k = j + 1; k <= n; k++) {
				if (a[k] == a[j]) {
					for (int l = j + 1; l <= k; l++) {
						num[a[l]]--;
					}
				}
			}
		}
		for (int j = 1; j <= m; j++) {
			if (num[j] != 0)
				ans[j]++;
			num[j] = numx[j];
		}

	}
	for (int j = 1; j <= m; j++) {
		printf("%d ", ans[j]);
	}
	return 0;
}

