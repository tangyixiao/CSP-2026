#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m, a[200005], x;

int main() {
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	reverse(a + 1, a + 1 + n);
	x = a[1];
	for (ll i = 2; i <= m; i++) {
		x = x &a[i];
	}
	cout << x;
	return 0;
}
