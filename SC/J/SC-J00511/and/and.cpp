#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[200005];
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ll n, m, s = -1e9, q = 1;
	cin >> n >> m;
	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (ll i = 1; i <= n; i++) {
		q = a[i];
		for (ll j = i + 1; j <= n; j++) {
			q &= a[j];
			if (q >= s) {
				s = q;
			}
			q = a[i];
		}
	}
	cout << s;
	return 0;
}