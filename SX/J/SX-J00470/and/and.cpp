#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
long long x[N];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	sort(x, x + n);
	cout << x[n - m];
	return 0;
}
