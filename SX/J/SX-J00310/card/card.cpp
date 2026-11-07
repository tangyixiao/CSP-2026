#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, m;
string t;

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	cout << n << ' ' << t[0] << ' ' << m;
	return 0;
}
