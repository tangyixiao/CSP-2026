#include <bits/stdc++.h>
#define int long long
using namespace std;
int k, n;
char m;
string s = "", ss = "";

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> k;
	for (int i = 1; i <= k; i++) {
		cin >> n >> m;
		for (int i = 1; i <= n; i++) {
			s += m;
		}
	}
	int l = s.size();
	int ll = l;
	while (ll--) {
		ss += s[ll];
	}
	if (ss == s) {
		cout << l;
		return 0;
	}
	if (l % 2 == 0) {
		cout << l / 2;
	} else
		cout << (l - 1) / 2;


	return 0;
}