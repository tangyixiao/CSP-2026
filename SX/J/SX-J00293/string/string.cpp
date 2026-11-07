#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
long long n, ans = 0;
long long a[200010], b[200010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		long long x;
		char c;
		cin >> x >> c;
		a[i] = x;
		b[i] = c - 'a';
	}
	int l = 1, r = n;
	while (l < r) {
		if (b[l] != b[r])
			ans++;
		a[l]--, a[r]--;
		if (a[l] == 0)
			l++;
		if (a[r] == 0)
			r--;
	}
	cout << ans;
	return 0;
}
