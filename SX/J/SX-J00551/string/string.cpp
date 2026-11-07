#include <bits/stdc++.h>
using namespace std;
#define int long long
map<int, int> t;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, q, kind = 0, Min = INT_MAX;
	char a;
	string s = "";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> q >> a;
		t[a - 96]++;
		Min = min(Min, q);
	}
	for (int i = 1; i <= 26; i++) {
		if (t[i] != 0)
			kind++;
	}
	if (kind == 1)
		cout << 0;
	else
		cout << Min;
	return 0;
}