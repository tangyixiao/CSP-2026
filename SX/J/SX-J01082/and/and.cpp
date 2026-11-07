#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+5;
int a[N];
bool f[N];
int s = 0;
int t = 0;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, mx = 0, now = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	mx = a[n];
	for (int i = n - 1; i > n - m; i--) {
		mx &= a[i];
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == 1)
				s = 1e9;
			else
				s = now;
			if ((now < s & a[j] ) && (f[j] == 0)) {
				now = s &a[j];
				t = i;
			}
		}
		f[t] = 1;
	}
	mx = max(mx, now);
	cout << mx;
	return 0;
}