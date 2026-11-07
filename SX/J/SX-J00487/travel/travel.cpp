#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e5+5;
string s1, s2, c1, c2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << "1";
		ll a, b;
		a = s1[0] - '0';
		a *= 10;
		a += s1[1] - '0';

		b = s2[0] - '0';
		b *= 10;
		b += s2[1] - '0';
		if (a == b) {
			cout << "1";
			if ((s1[2] == 'C' && s2[2] == 'D') || (s1[2] == 'D' && s2[2] == 'C')) {
				cout << "00";
				return 0;
			} else {
				cout << "1";
				if ((s1[2] + 1 == s2[2]  || s1[2] - 1 == s2[2]) || (s1[2] == 'D' && s2[2] == 'F') || (s1[2] == 'F' && s2[2] == 'D'))


					cout << "1";
				else
					cout << "0";
			}

		} else {
			cout << "000";
			return 0;
		}
	} else {
		cout << "0000";
		return 0;
	}
	return 0;
}
