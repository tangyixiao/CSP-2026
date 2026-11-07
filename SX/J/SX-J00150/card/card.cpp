#include <bits/stdc++.h>
using namespace std;
long long n, m, a[500005], b[300005];
bool f[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (long long i = 1; i <= n; i++) {
		cin >> a[i];
		b[a[i]] = max(b[a[i]], i);
	}
	for (int i = 1; i <= m; i++)
		cout << b[i] << " ";
	cout << endl;
	return 0;
}
