#include <bits/stdc++.h>
using namespace std;
long long n, m, a[300005], box[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		scanf("%lld", &a[i]);
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (a[j] != a[j - 1]) {
				box[a[j]]++;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		printf("%lld ", box[i]);
	}
	return 0;
}
