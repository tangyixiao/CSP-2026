#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int n, m, a[N];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) cin >> a[i];
	int mask = 0;
	for (int k = 29; ~k; --k) {
		int tm = (mask | (1 << k)), cnt = 0;
		for (int i = 1; i <= n; ++i)
			if ((a[i] & tm) == tm)
				++cnt;
		if (cnt >= m) mask |= (1 << k);
	}
	printf("%d\n", mask);
	fflush(stdout); fclose(stdin), fclose(stdout);
	return 0;
}