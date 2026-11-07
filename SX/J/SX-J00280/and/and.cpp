#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6+10;
ll h;
ll n, m;
ll a[N];
ll s[N];

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
	for (int i = 1; i <= n + 1; i++) {
		s[i] = a[i - 1] & a[i];
		h = max(s[i], h);
	}
	cout << h;

	return 0;
}