#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200005];
ll he[200005];
ll ans = 1;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	he[0] = 1;
	for (int i = 1; i <= n; i++) {
		he[i] ^= (he[i - 1] | a[i]);
	}
//	for (int i = 1; i <= n; i++) {
//		cout << he[i] << " ";
//	}
	ans = he[n] ^ he[n - m - 1];
	cout << ans;
	return 0;
}
