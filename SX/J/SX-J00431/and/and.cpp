#include <bits/stdc++.h>
using namespace std;
long long p[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}
	sort(p + 1, p + 1 + n, greater<int>() );
	long long t = p[1];
	for (int i = 2; i <= m; i++) {
		t &= p[i];
	}
	cout << t;
	return 0;
}

