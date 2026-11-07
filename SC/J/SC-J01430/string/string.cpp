#include <bits/stdc++.h>
using namespace std;
typedef long long LLD;
const int N = 2e5 + 10;
int n;
LLD a[N];
char c[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; ++i) cin >> a[i] >> c[i];
	int l = 1, r = n;
	LLD ans = 0;
	while (l < r) {
		LLD p = min(a[l], a[r]);
		ans += p * (c[l] != c[r]);
		a[l] -= p; a[r] -= p;
		if (a[l] == 0) ++l;
		if (a[r] == 0) --r;
	}
	printf("%lld\n", ans);
	fflush(stdout); fclose(stdin), fclose(stdout);
	return 0;
}