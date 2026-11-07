#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2, ans;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2) ans += "1";
	else {
		ans += "0000";
		cout << ans;
		return 0;
	}
	if(c1 == c2 and s1[0] == s2[0] and s1[1] == s2[1]) ans += "1";
	else {
		ans += "000";
		cout << ans;
		return 0;
	}
	if(s1[2] == 'A' or s1[2] == 'B' or s1[2] == 'C') {
		if(s2[2] == 'A' or s2[2] == 'B' or s2[2] == 'C' and s2[2] != s1[2]) ans += "1";
		else {
			ans += "00";
			cout << ans;
			return 0;
		}
	}else if(s1[2] == 'D' or s1[2] == 'F') {
		if(s2[2] == 'D' or s2[2] == 'F' and s2[2] != s1[2]) ans += "1";
		else {
			ans += "00";
			cout << ans;
			return 0;
		}
	}
	if(s1[2] == 'A' and s2[2] == 'B') ans += "1";
	else if(s1[2] == 'B' and (s2[2] == 'A' or s2[2] == 'C')) ans += "1";
	else if(s1[2] == 'C' and s2[2] == 'B') ans += "1";
	else if(s1[2] == 'D' and s2[2] == 'F') ans += "1";
	else if(s1[2] == 'F' and s2[2] == 'D') ans += "1";
	else ans += "0";
	cout << ans;
	return 0;
}

