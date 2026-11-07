#include <bits/stdc++.h>
using namespace std;
int m, n;
long long a[500005], b[500005], cnt[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> m >> n;
	for (int i = 1; i <= m; i++) {
		scanf("%lld", &a[i]);
		b[a[i]] = i;
	}
	for (int i = 1; i <= m; i++) {
		for (int j = i; j <= m; j++) {
			cnt[a[j]]++;
			j = b[a[j]];
		}
	}
	for (int i = 1; i <= n; i++) {
		printf("%lld ", cnt[i]);
	}
	return 0;
}
