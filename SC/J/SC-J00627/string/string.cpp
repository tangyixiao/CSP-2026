#include <bits/stdc++.h>
#define rep(a, b, c) for (int i = a; i <= b; i += c)
#define ll long long
#define IOS ios::sync_with_stdio(0); cin.tie(0);
using namespace std;

const int MAXN = 2e5 + 5;

ll n, ans, m[MAXN];
char op[MAXN];

int main() {
	IOS;
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	rep(1, n, 1) cin >> m[i] >> op[i];
	for (int i = 1, j = n; i <= n && j >= 1 && i <= j; i++, j--) {
		if (m[i] > m[j]) {
			if (op[i] != op[j]) ans += m[j];
			m[i] -= m[j], m[j] = 0, i--;
		}
		else if (m[j] > m[i]) {
			if (op[j] != op[i]) ans += m[i];
			m[j] -= m[i], m[i] = 0, j++;
		} else {
			if (op[i] != op[j]) ans += m[i];
			m[i] = m[j] = 0;
		}
	}
	cout << ans << endl;
	return 0;
}