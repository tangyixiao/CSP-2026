#include <bits/stdc++.h>
using namespace std;
int a[100005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int m, n, maxn = 0, maxx = 0;
	cin >> m >> n;
	for (int i = 1; i <= m; i++) {
		cin >> a[i];
		if (a[i] > maxn)
			maxn = a[i];
	}
	for (int i = 1; i <= m; i++) {
		if (a[i] == maxn)
			a[i] = 0;
	}
	for (int i = 1; i <= m; i++) {
		if (a[i] > maxx)
			maxx = a[i];
	}
	long long g = maxn &maxx;
	cout << g;
	return 0;
}
