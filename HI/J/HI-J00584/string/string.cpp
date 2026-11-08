#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int n, a[200005];
char c[200005];
long long ll=0, rl=0, ls=1, rs=-1, ans=0;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	rs=n;
	for (int i=1; i<=n; i++) scanf("%d %c", &a[i], &c[i]);
	while (ls<rs) {
		if (a[ls]-ll > a[rs]-rl) {
			if (c[ls] != c[rs]) ans += a[rs]-rl;
			ll += a[rs]-rl;
			rl += a[rs]-rl;
		} else {
			if (c[ls] != c[rs]) ans += a[ls]-ll;
			rl += a[ls]-ll;
			ll += a[ls]-ll;
		}
		if (ll==a[ls]) {
			ll=0;
			ls++;
		}
		if (rl==a[rs]) {
			rl=0;
			rs--;
		}
	}
	cout << ans;
	return 0;
}
