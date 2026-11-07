#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m;
ll a[200100];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (ll i = 1; i <= n; i++) {
		for (ll j = i; j <= n; j++) {
			if (a[i] == a[j]) {
				cout << a[i];
				return 0;
			}
		}
	}
}