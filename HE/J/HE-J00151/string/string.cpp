#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, tot;
string ans = "";

int32_t main () {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin.tie(nullptr) -> ios::sync_with_stdio(false);
	cin >> n; char c;
	for (int i = 1, len; i <= n; i ++) {
		cin >> len >> c;
		for (int j = 1; j <= len; j ++) {
			ans += c;
		}
	}
	int l = 0, r = ans.length() - 1;
	while (l <= r) {
		if (ans[l] != ans[r]) tot ++;
		l ++, r --;
	}
	cout << tot;
	return 0;
}
