#include <bits/stdc++.h>
#define ll long long
#define lf double
#define sc scanf
#define pf printf
#define stdio ios::sync_with_stdio(0);
using namespace std;

const int N = 2e5+1001;
int a[N], s[N];

bool cmp(int x, int y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	sc("%d %d", &n, &m);
	for (int i = 1; i <= n; ++i) {
		sc("%d", &a[i]);
	}
	sort(a + 1, a + n + 1, cmp);
	s[0] = a[1];
	for (int i = 1; i <= n; ++i) {
		s[i] = s[i - 1] & a[i];
	}
	int ans = -1;
	for (int i = m; i <= n; ++i) {
		if (i == m)
			ans = max(ans, s[i]);
		else {
			ans = max(ans, s[i] & s[i - m]);
		}
	}
	pf("%d", ans);
	return 0;
}