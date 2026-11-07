#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5+5;
ll n, m, a[N];

bool cmp(ll x, ll y) {
	return x > y;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n, cmp);
	ll sum = 0;
	for (int i = 1; i < m; i++) {
		sum = (a[i] & a[i + 1]);
	}
	cout << sum;
	return 0;
}
