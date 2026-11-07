#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;


bool chexiang(string a, string b) {
	return a == b;
}

bool tongpai(string a, string b) {
	return a[0] == b[0] && a[1] == b[1];
}

bool tongce(string a, string b) {
	return ((a[2] == 'A' || a[2] == 'B' || a[2] == 'C') && (b[2] == 'A' || b[2] == 'B' || b[2] == 'C')) || ((a[2] == 'D'
	        || a[2] == 'F') && (b[2] == 'D' || b[2] == 'F'));
}

bool xiangling(string a, string b) {
	char n = a[2];
	char m = b[2];
	if (n == 'A' && m == 'B')
		return 1;
	if (n == 'B' && m == 'A')
		return 1;
	if (n == 'B' && m == 'C')
		return 1;
	if (n == 'C' && m == 'B')
		return 1;
	if (n == 'D' && m == 'E')
		return 1;
	if (n == 'E' && m == 'D')
		return 1;
	return 0;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (chexiang(c1, c2)) {
		cout << 1 ;
		if (tongpai(s1, s2)) {
			cout << 1 ;
			if (tongce(s1, s2)) {
				cout << 1;
				if (xiangling(s1, s2)) {
					cout << 1;
				} else
					cout << 0;
			} else
				cout << 0 << 0;
		} else
			cout << 0  << 0 << 0 ;
	} else
		cout << 0 << 0 << 0 << 0;

	return 0;
}
