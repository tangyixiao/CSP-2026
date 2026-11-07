#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1000100];
ll n;
ll v[1000100];
ll b[1000100];
ll m, ans, summ;
bool flag = true;
ll s[1001001];

void dfs(ll x, ll k) {
	if (k > n) {
		return ;
	}
	v[a[k]] = 1;
	b[a[k]] = x;
	for (ll i = 1; i <= m; i++) {
		if (v[i]) {
			s[i]++;
		}
	}

	if (!v[a[k + 1]]) {

		dfs(x + 1, k + 1);
	} else {
		for (ll i = 1; i <= m; i++) {
			if (b[i] >= b[a[k + 1]]) {
				b[i] = 0;
				v[i] = 0;
			}
		}
		dfs(b[a[k + 1]], k + 1);
	}
}

int main() {

	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n;
	cin >> m;

	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
	}
	dfs(1, 1);
	for (ll i = 1; i <= m; i++) {
		cout << s[i] << " ";
	}
}
