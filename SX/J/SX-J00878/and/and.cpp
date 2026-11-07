#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
long long n, a[N], m, v[N], mx = -99999, s, mi = LLONG_MAX, mixb, f, s4, s3, s2, s1, s0;

void dfs(long long k, long long s) {
	if (k == m + 1) {
		mx = max(mx, s);
		return;
	}
	for (int i = 2; i <= n; i++) {
		if (v[i] == 1)
			continue;
		v[i] = 1;
		dfs(k + 1, (s &a[i]));
		v[i] = 0;
	}
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] == 4)
			s4++;
		if (a[i] == 3)
			s3++;
		if (a[i] == 2)
			s2++;
		if (a[i] == 1)
			s1++;
		if (a[i] == 0)
			s0++;
		if (a[i] > 4)
			f = 1;
	}
	if (f == 0) {
		if (s4 >= m)
			cout << 4;
		else if (s3 > m)
			cout << 3;
		else if (s2 > m)
			cout << 2;
		else if (s1 > m)
			cout << 1;
		else
			cout << 0;
	}
	if (m == 1) {
		cout << 0;
		return 0;
	}
	if (m == n) {
		s = a[1];
		for (int i = 2; i <= n; i++) {
			s = (s &a[i]);
		}
		cout << s;
		return 0;
	}
	if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (i == j)
					continue;
				mx = max(mx, (a[i] & a[j]));
			}
		}
		cout << mx;
		return 0;
	}
	if (m == n - 1) {
		for (int i = 1; i <= n; i++) {
			if (mi > a[i]) {
				mi = a[i];
				mixb = i;
			}
		}
		s = a[1];
		if (mixb == 1)
			s = a[2];
		for (int i = 1; i <= n; i++) {
			if (mixb == i)
				continue;
			s = (s &a[i]);
		}
		cout << s;
		return 0;
	}
	if (m <= n && n <= 20) {
		dfs(2, a[1]);
		cout << mx;
		return 0;
	}
	sort(a + 1, a + n + 1);
	s = a[n];
	for (int i = n - 1; i >= n - m; i--) {
		s = (s &a[i]);
	}
	cout << s;
	return 0;
}
