#include <bits/stdc++.h>
using namespace std;
#define int long long
#define N 100005
int a[N];
char c[N];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s, s1;
	int n, ans = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i] >> c[i];
	int b = 1, b1 = n, m, m1;
	m = 1;
	m1 = 1;
	while (b <= b1) {
		if (m == a[b]) {
			b++;
			m = 1;
		}
		if (m1 == a[b1]) {
			b1--;
			m1 = 1;
		}
		if (c[b] != c[b1])
			ans += 2;
		m++;
		m1++;
	}
	cout << ans / 2;
	return 0;
}