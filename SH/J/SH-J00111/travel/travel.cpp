#include <bits/stdc++.h>
#define int long long
using namespace std;

string c1, s1, c2, s2;

string getF2(string s) {
	string res = "";
	res += s[0];
	res += s[1];
	return res;
}

signed main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin.tie(0) -> sync_with_stdio(false);
	cin >> c1 >> s1 >> c2 >> s2;
	//cout << getF2(s1) << " " << getF2(s2) << "\n";
	if (c1 == c2) {
		cout << "1";
		if (getF2(s1) == getF2(s2)) {
			cout << "1";
			if ((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] >= 'D' && s2[2] >= 'D')) {
				cout << "1";
				if (s1[2] + 1 == s2[2] || s2[2] + 1 == s1[2] || (s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D'))
					cout << "1\n";
				else cout << "0\n";
			}
			else cout << "00\n";
		}
		else cout << "000\n";
	}
	else cout << "0000\n";
	return 0;
}
