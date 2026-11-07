#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[200006];

int main() {
	int maxn = 0;
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		maxn = max(a[i], maxn);
	}
	cout << maxn;
	return 0;
}
