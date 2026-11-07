#include <bits/stdc++.h>
using namespace std;
#define int long long
string ans;
signed main () {
	ios::sync_with_stdio (false);
	cin.tie (0);
	freopen ("travel.in" , "r" , stdin);
	freopen ("travel.out" , "w" , stdout);
	int c1 , c2;
	string s1 , s2;
	cin >> c1 >> s1 >> c2 >> s2; 
	if (c1 == c2) {
		ans += '1';
	}
	else {
		ans = "0000";
		cout << ans << endl;
		return 0;
	}
	int p1 = 0 , p2 = 0;
	for (int i = 0; i < 2; i++) {
		p1 = p1 * 10 + s1[i] - '0';
		p2 = p2 * 10 + s2[i] - '0';
	}
	if (p1 == p2) {
		ans += '1';
	}
	else {
		ans += "000";
		cout << ans << endl;
		return 0;
	}
	if (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C') {
		if (s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') {
			ans += '1';
		}
		else {
			ans += "00";
			cout << ans << endl;
			return 0;
		}
		if (s1[2] - s2[2] == 1 || s1[2] - s2[2] == -1) {
			ans += '1';
		}
		else {
			ans += '0';
		}
	}
	else if (s2[2] == 'D' || s2[2] == 'F') {
		if (s1[2] == 'D' || s1[2] == 'F') {
			ans += '1';
		}
		else {
			ans += "00";
			cout << ans << endl;
			return 0;
		}
		if (s1[2] - s2[2] == 1 || s1[2] - s2[2] == -1) {
			ans += '1';
		}
		else {
			ans += '0';
		}
	}
	cout << ans << endl;
}