#include <bits/stdc++.h>
#define ull unsigned long long
#define ll long long
using namespace std;
ll n, m, ans;
ll a[200005];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	ans = a[n];
	for (ll i = n - 1; i >= n - m + 1; i--) {
		ans &= a[i];
	}
	cout << ans;
	return 0;
}
//4 2 3 15 12 12
