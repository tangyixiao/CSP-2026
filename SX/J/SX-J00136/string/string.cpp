#include <bits/stdc++.h>
using namespace std;
long long a[200010];
char b[200010];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, l = 1, r, ans = 0;
	cin >> n;
	r = n;
	for (int i = 1; i <= n; i++)
		cin >> a[i] >> b[i];
	while (l < r) {
		long long x = min(a[l], a[r]);
		a[l] -= x;
		a[r] -= x;
		if (b[l] != b[r])
			ans += x;
		if (a[l] == 0)
			l++;
		if (a[r] == 0)
			r--;
	}
	cout << ans;
	return 0;
}