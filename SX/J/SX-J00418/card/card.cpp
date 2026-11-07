#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 2e5+100;
ll n, m, a[N], len;
bool f = 0;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	if (n <= 5) {
		for (ll i = 1; i <= n; i++) {
			ll x;
			cin >> x;
			for (ll j = 1; j < i; j++) {
				if (a[j] == x) {
					f = 1;
					len = j;
					for (ll s = j + 1; s < i; s++) {
						a[s] = 0;
					}
				}
			}
			if (!f)
				a[i] = x;
		}
		for (ll i = 1; i <= len; i++)
			cout << a[i] << " ";

	} else {
		for (ll i = 1; i <= n; i++) {
			ll x;
			cin >> x;
			if (a[len] != x) {
				len++;
				a[len] = x;
			}
		}
		for (ll i = 1; i <= len; i++) {
			cout << a[i] << " ";
		}
	}
	return 0;
}
