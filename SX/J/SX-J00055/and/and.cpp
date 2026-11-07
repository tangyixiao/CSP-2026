#include <bits/stdc++.h>
using namespace std;
long long n, m, mmax, ans, mt, a1;
long long a[200005];

struct node {
	long long ans, t;
} f[200005];


inline bool cmp(long long x, long long y) {
	return x > y;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1 ; i <= n; i++) {
		cin >> a[i];
	}
	stable_sort(a + 1, a + n + 1, cmp);
	for (int i = 1 ; i <= n ; i++) {
		f[i].ans = a[i];
		f[i].t = 1;
	}
	for (int i = 1 ; i <= n ; i++) {
		for (int j = i + 1 ; j <= n ; j++) {
			if (abs(f[j].ans - a[i]) % 2 == 0) {
				if (f[j].t == m)
					continue;

				f[j].ans = f[j].ans &a[i];
				f[j].t++;
			}
		}

	}
	for (int i = 1 ; i <= n ; i++) {
		if (f[i].t == m)
			mmax = max(f[i].ans, mmax);
	}
	cout << mmax;
	return 0;
}
