#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a[200010], m, cnt, x, y;

int main() {
//	freopen("and.in", "r", stdin);
//	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
		y = i;
		while (y) {
			cnt++;
			a[cnt] = y % m;
			y /= m;
		}


	}

	for (ll j = cnt; j >= 1; j--) {
		if ((a[j]&a[j - 1]) >= x)
			x = a[j] & a[j - 1];
	}
	cout << x;


}
4 2
3 15 12 12
