#include <bits/stdc++.h>
using namespace std;
int a, b;
string s, ss;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> a >> s >> b >> ss;
	if (a == b)
		cout << 1;
	else {
		cout << "0000";
		return 0;
	}
	int c = (s[0] - '0') * 10 + s[1] - '0', d = (ss[0] - '0') * 10 + ss[1] - '0';
	if (c == d)
		cout << 1;
	else {
		cout << "000";
		return 0;
	}
	if ((s[2] == 'A' || s[2] == 'B' || s[2] == 'C') && (ss[2] == 'A' || ss[2] == 'B' || ss[2] == 'C') || (s[2] == 'D'
	        || s[2] == 'F') && (ss[2] == 'D' || ss[2] == 'F'))
		cout << 1;
	else {
		cout << "00";
		return 0;
	}
	if ((s[2] == 'A' && ss[2] == 'B') || (s[2] == 'B' && ss[2] == 'C') || (s[2] == 'D' && ss[2] == 'F') || (ss[2] == 'A'
	        && s[2] == 'B' ) || (ss[2] == 'B' && s[2] == 'C') || (ss[2] == 'D' && s[2] == 'F'))
		cout << 1;
	else
		cout << 0;
	return 0;
}
