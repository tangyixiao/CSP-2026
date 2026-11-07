#include <bits/stdc++.h>
using namespace std;
int a[200001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long  n, m, x = 0, ma = -1;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n - m; i++) {
		x = a[i];
		for (int j = i + m; j < n; j++) {
			x = x &a[j];
		}
		if (x > ma)
			ma = x;
	}
	cout << ma;
	return 0;
}
