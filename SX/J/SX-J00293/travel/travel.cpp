#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
long long CC, cc, B, b;
string C, c, S, s;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> C >> S >> c >> s;
	B = (S[0] - '0') * 10 + (S[1] - '0');
	b = (s[0] - '0') * 10 + (s[1] - '0');
	CC = (C[0] - '0') * 10 + (C[1] - '0');
	cc = (c[0] - '0') * 10 + (c[1] - '0');
	if (CC == cc) {
		cout << "1";
		if (B == b) {
			cout << "1";
			if ((s[2] <= 'C' && S[2] <= 'C') || (s[2] >= 'D' && S[2] >= 'D')) {
				cout << "1";
				if (S[2] - 1 == s[2] || S[2] + 1 == s[2] || s[2] >= 'D')
					cout << "1";
				else
					cout << "0";
			} else
				cout << "00";
		} else
			cout << "000";
	} else
		cout << "0000";
	return 0;
}
