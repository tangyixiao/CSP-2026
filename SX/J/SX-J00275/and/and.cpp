#include <bits/stdc++.h>
using namespace std;
int a[1000005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, cnt = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		int f = a[i];
		for (int j = 1; j <= m; j++) {
			f = f &a[i + j];
		}
		cnt = max(f, cnt);
	}
	cout << cnt;
	return 0;
}