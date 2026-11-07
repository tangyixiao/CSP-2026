#include <bits/stdc++.h>

using namespace std;
int n, m, a[100001000],ans = 0;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	if (m == 1) {
		sort(a + 1, a + n + 1);
		printf("%d", a[n]);
		return 0;
}
	for (int i = 1; i < m; i++) 
		for (int j = 1; j <= n; j++)
			for (int k = 1; k <= n; k++) 
				if (j != k) 
					ans = max(ans, a[j] & a[k]);
				
	printf("%d", ans);
	return 0;
}
