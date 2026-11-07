#include <bits/stdc++.h>
using namespace std;
int a[200005];
int s[25];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= 21; i++) {
		s[i] = 2 * s[i - 1];
	}
	for (int i = 1; i <= 21; i++) {
		s[i]--;
	}
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	int u1 = a[n - m + 1], u2 = a[n - m + 2];
	cout << min(u1, u2);
	return 0;
}
