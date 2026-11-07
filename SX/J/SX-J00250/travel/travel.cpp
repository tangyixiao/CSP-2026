#include <bits/stdc++.h>
#define int long long
using namespace std;
string c1, s1, c2, s2;

bool istyc(string a, string b) {
	char ca = a[2];
	char cb = b[2];
	if (ca >= 'A' && ca <= 'C') {
		if (cb >= 'A' && cb <= 'C') {
			return 1;
		}
		return 0;
	} else if (ca == 'D' || ca == 'F') {
		if (cb == 'D' || cb == 'F') {
			return 1;
		}
		return 0;
	}
	return 0;
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//使用上面这个的时候
	//不要用C语言的输入输出
	//不要用endl，换成"\n"
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2) {
		cout << "0000";
		return 0;
	} else {
		cout << "1";
		if ((s1[0] != s2[0]) || (s1[1] != s2[1])) {
			cout << "000";
			return 0;
		} else {
			cout << "1";
			if (!istyc(s1, s2)) {
				cout << "00";
				return 0;
			} else {
				cout << "1";
				if (abs((int)s1[2] - s2[2]) == 1) {
					cout << "1";
					return 0;
				} else if ((s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D')) {
					cout << "1";
					return 0;
				} else {
					cout << "0";
					return 0;
				}
			}
		}
	}
	return 0;
}