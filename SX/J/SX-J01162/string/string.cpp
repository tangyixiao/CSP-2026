#include <bits/stdc++.h>
using namespace std;
long long a, n, m, ans;
long long f = 0;
string s;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int j = 1; j <= n; j++) {
		cin >> a;
		m += a;
		cin >> s[j];
	}
	cout << m / 2;
	return 0;
}
