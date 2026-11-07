#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5 + 10;
int n;
ll a[N], ans;
char c[N];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.ans", "w", stdout);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%lld %c", &a[i], &c[i]);
	}
	int cnt1 = 1, cnt2 = n;
	ll i = a[1], j = a[n];
	while (cnt1 < cnt2) {
		if (c[cnt1] != c[cnt2])
			ans += min(i, j);
		if (i < j) {
			j -= i;
			cnt1++;
			i = a[cnt1];
		} else if (i > j) {
			i -= j;
			cnt2--;
			j = a[cnt2];
		} else {
			cnt1++;
			cnt2--;
			i = a[cnt1];
			j = a[cnt2];
		}
	}
	printf("%lld", ans);
	return 0;
}
