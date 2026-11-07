#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define endl '\n'
#define st string
using namespace std;
st c1, s1, c2, s2;

bool pan1() {
	if ((s1[2] == 'A') && (s2[2] == 'B' || s2[2] == 'C')) {
		return true;
	}
	if ((s1[2] == 'B') && (s2[2] == 'A' || s2[2] == 'C')) {
		return true;
	}
	if ((s1[2] == 'C') && (s2[2] == 'A' || s2[2] == 'B')) {
		return true;
	}
	if (s1[2] == 'D' && s2[2] == 'F') {
		return true;
	}
	if (s1[2] == 'F' && s2[2] == 'D') {
		return true;
	}
	return false;
}

bool pan2() {
	if (s1[2] == 'A' && s2[2] == 'B') {
		return true;
	}
	if (s1[2] == 'B' && (s2[2] == 'A' || s2[2] == 'C')) {
		return true;
	}
	if (s1[2] == 'C' && s2[2] == 'B') {
		return true;
	}
	if (s1[2] == 'D' && s2[2] == 'F') {
		return true;
	}
	if (s1[2] == 'F' && s2[2] == 'D') {
		return true;
	}
	return false;
}

int main() {
	fast;
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			cout << 1;
			if (pan1()) {
				cout << 1;
				if (pan2()) {
					cout << 1;
					return 0;
				} else {
					cout << 0;
					return 0;
				}
			} else {
				cout << "00";
				return 0;
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