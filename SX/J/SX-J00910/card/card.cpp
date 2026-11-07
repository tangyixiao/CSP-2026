#include <bits/stdc++.h>
using namespace std;
long long n, m, a[500001], b[300001];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		b[a[i]] = i;
	}
	for (int i = 1; i <= m; i++) {
		cout << 1 << ' ';
	}
	return 0;
}