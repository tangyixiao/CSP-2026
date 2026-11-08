#include <bits/stdc++.h>
#define int long long int
using namespace std;

const int MAXN = 2e5 + 5;
int n;
int cnt[MAXN];
char a[MAXN];

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> cnt[i] >> a[i];
	int l = 1, r = n, ans = 0;
	while (l < r) {
		if (cnt[l] > cnt[r]) ans += (a[l] != a[r]) * cnt[r], cnt[l] -= cnt[r], cnt[r] = 0, r --;
		else if (cnt[l] < cnt[r]) ans += (a[l] != a[r]) * cnt[l], cnt[r] -= cnt[l], cnt[l] = 0, l ++;
		else ans += (a[l] != a[r]) * cnt[l], cnt[l] = cnt[r] = 0, l ++, r --;
	}
	cout << ans;
	return 0;
}

