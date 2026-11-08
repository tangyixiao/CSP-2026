#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

const int MAXN = 2e5;
int a[MAXN | 1];
char c[MAXN | 1];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) scanf("%d %c", a + i, c + i);
	int l = 0, r = n - 1;
	ull ans = 0;
	while (l < r) {
		int v = min(a[l], a[r]);
		if (c[l] != c[r]) ans += v;
		if (!(a[l] -= v)) ++l;
		if (!(a[r] -= v)) --r;
	}
	printf("%lld", (ll)ans);
	return 0;
}
