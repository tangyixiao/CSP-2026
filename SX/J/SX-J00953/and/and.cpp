#include <bits/stdc++.h>
using namespace std;
int a[2010];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	long long m, n, maxx = LLONG_MIN, s;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	if (m == 1) {
		sort(a + 1, a + n + 1);
		cout << a[n];
	} else if (m == 2) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				s = a[i] & a[j];
				maxx = max(maxx, s);
			}
		}
		cout << maxx;
	} else if (m == n) {
		s = a[1] & a[2];
		for (int i = 3; i <= n; i++)
			s = s & a[i];
		cout << s;
	}
	return 0;
}