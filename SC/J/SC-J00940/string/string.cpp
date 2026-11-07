#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int N = 2e5 + 5;
int n;
ll c[N], ans;
char a[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> c[i] >> a[i];
	}
	int r = n;
	for (int i = 1; i < r; ++i) {
		while(c[i] >= c[r]) {
			if(a[r] != a[i])ans += c[r];
			c[i] -= c[r];
			--r;
		}
		if(a[i] != a[r])ans += c[i];
		c[r] -= c[i];
	}
	printf("%lld", ans);
	return 0;
}