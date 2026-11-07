#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fr(i,s,n) for(int i=s;i<=n;i++)

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	int c1, c2, s1, s2;
	char a, b;
	cin >> c1 >> s1 >> a >> c2 >> s2 >> b;
	if (c1 == c2 && c1 != 1 && c1 != 16) {
		cout << 1;
	} else {
		cout << "0000";
		return 0;
	}
	if (s1 == s2) {
		cout << 1;
	} else {
		cout << "000";
		return 0;
	}
	if (a == 'C' && b == 'D' || a == 'D' && a == 'C') {
		cout << "00";
		return 0;
	} else {
		cout << 1;
	}
	if (a == b - 1 || a == b + 1) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}