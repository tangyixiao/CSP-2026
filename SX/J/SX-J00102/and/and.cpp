#include <bits/stdc++.h>
using namespace std;
string cnt[200010];
int a[200010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cout << a[n] << '\n';
	/*
	sort(a + 1, n + a + 1);
	for (int i = 1; i <= n; i++) {
		while (a[i] != 0) {
			int b = a[i] % 2;
			cnt[i] += (char)(b + 48);
			a[i] = a[i] / 2;
		}
		cout << cnt[i] << '\n';
	}*/

	return 0;
}
