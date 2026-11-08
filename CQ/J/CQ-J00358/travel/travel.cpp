#include <bits/stdc++.h>
//#define int long long
using namespace std;
string c1, s1, c2, s2;
signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if (s1 > s2) {
		swap(c1, c2);
		swap(s1, s2);
	}
	string h1 = "", h2 = "";
	h1 += s1[0] + s1[1];
	h2 += s2[0] + s2[1];
	if (c1 == c2) {
		if (h1 == h2) {
			bool f1 = ('A' <= s1[2] && s1[2] <= 'C');
			bool f2 = ('A' <= s2[2] && s2[2] <= 'C');
			if (f1 == f2) {
				if (char(s1[2] + 1) == s2[2]) {
					cout << "1111";
				}
				else {
					cout << "1110";
				}
			}
			else {
				cout << "1100";
			}
		}
		else {
			cout << "1000";
		}
	}
	else {
		cout << "0000";
	}
	return 0;
}

