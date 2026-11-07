#include<bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	int a = (s1[0] - '0') * 10 + (s1[1] - '0');
	int b = (s2[0] - '0') * 10 + (s2[1] - '0');
	bool f = false;
	if (c1 != c2) {
		cout << "0000";
		return 0;
	}
	cout << "1";
	if (a == b) {
		cout << "1";
	} else {
		cout << "000";
		return 0;
	}
	if ((s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D') || (s1[2] == 'A' && s2[2] == 'B') || (s1[2] == 'B' && s2[2] == 'C') || (s1[2] == 'B' && s2[2] == 'A') || (s1[2] == 'C' && s2[2] == 'B')) {
		cout << "1";
		f = true;
	} else if ((s1[2] == 'A' && s2[2] == 'C') || (s1[2] == 'C' && s2[2] == 'A')) {
		cout << "1";
	} else {
		cout << "0";
	}
	if (f) cout << "1";
	else cout << "0";
	return 0;
} 
