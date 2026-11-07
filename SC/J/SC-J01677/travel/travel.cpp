/*
Author: kkksc98
关注 kkksc98 谢谢喵
*/
#include <bits/stdc++.h>
#define int long long
#define inl_force __attribute__((always_inline)) inline
#define rep(i, a, b) for (register int i = (a); i <= (b); ++i)
using namespace std;
string s, t, a, b;
signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	cin >> s >> t >> a >> b;
	if (s == a) {
		cout << '1';
		if (t[0] == b[0] && t[1] == b[1]) {
			cout << '1';
			if ((t[2] <= 'C' && b[2] <= 'C') || (t[2] >= 'D' && b[2] >= 'D')) {
				cout << '1';
				if (t[2] <= 'C' && b[2] <= 'C') {
					if (abs((int)t[2] - (int)b[2]) == 1)	cout << '1';
					else	cout << '0';
				} else	cout << '1';
			} else	cout << "00";
		} else	cout << "000";
	}
	else	cout << "0000";
	return 0;
}
/*
08:44 测样例
08:47 测完样例，准备提交
*/