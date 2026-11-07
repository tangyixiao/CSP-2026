#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6;
ll n;
char c[2][2], s[2][3], k;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c[1][1] >> c[1][2] >> s[1][1] >> s[1][2] >> s[1][3] >> c[2][1] >> c[2][2 ] >> s[2][1] >> s[2][2] >> s[2][3];
	if (c[1][1] == c[2][1] && c[1][2] == c[2][2]) {
		cout << '1';
		if (s[1][1] == s[2][1] && s[1][2] == s[2][2]) {
			cout << '1';
			if ((s[1][3] == 'A' && s[2][3] == 'B' ) || ( s[1][3] == 'A' && s[2][3] == 'C' ) || ( s[1][3] == 'C' && s[2][3] == 'B')
			        || ( s[1][3] == 'B' && s[2][3] == 'A') || (s[1][3] == 'C' && s[2][3] == 'A' ) || ( s[1][3] == 'B' && s[2][3] == 'C')
			        || ( s[1][3] == 'D' && s[2][3] == 'F') || ( s[1][3] == 'F' && s[2][3] == 'D')) {
				cout << '1';
				if ((s[1][3] == 'A' && s[2][3] == 'B') || ( s[1][3] == 'C' && s[2][3] == 'B') || ( s[1][3] == 'B' && s[2][3] == 'A')
				        || ( s[1][3] == 'B' && s[2][3] == 'C' ) || ( s[1][3] == 'D' && s[2][3] == 'F' ) || ( s[1][3] == 'F'
				                && s[2][3] == 'D')) {
					cout << '1';
				} else
					cout << '0';
				return 0;
			} else {
				cout << "00";
				return 0;
			}
		} else {
			cout << "000";
			return 0;
		}
	} else
		cout << "0000";
	return 0;
	return 0;
}