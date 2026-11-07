#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 5 * 1e5+5;
ll n, m, a[N];
map<ll, ll> t;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		t[a[i]]++;
	}
	for (int i = 1; i <= m; i++) {
		cout << t[a[i]] << " ";
	}
	return 0;
}
