#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m;
ll a[500100], gs, tg[500100];

struct node {
	ll star, end;
} b[500100];
ll v[500100];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (ll i = 1; i <= n; i++) {
		for (ll j = i; j <= n; j++) {
			if (a[i] == a[j] && a[i] != 1 && a[j] != 1) {
				gs++;
				b[gs].star = i;
				b[gs].end = j;
				v[i] = 1;
				v[j] = 1;
			}
		}
	}
	for (ll e = 1; e <= n; e++) {
		for (ll i = 1; i < b[1].star; i++) {
			if (e <= i) {
				tg[a[i]] += 1;
			}
		}
		for (ll i = 1; i <= gs; i++) {
			for (ll j = b[i].end; j < b[i + 1].star; j++) {
				if (e <= j) {
					tg[a[j]] += 1;
				}
			}
		}
		for (ll i = b[gs].end; i <= n; i++) {
			if (e <= i) {
				tg[a[i]] += 1;
			}
		}
	}
	for (ll i = 1; i <= m; i++) {
		cout << tg[i] << " ";
	}

	return 0;
}