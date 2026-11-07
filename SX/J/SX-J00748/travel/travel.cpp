#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define endl "\n"
using namespace std;
string c1, s1, c2, s2;
int a, b;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	fast;
	cin >> c1 >> s1 >> c2 >> s2;
	a = s1[2] - 'A' + 1;
	b = s2[2] - 'A' + 1;
	if (c1 == c2) {
		cout << 1;

	} else {
		cout << 0;
	}
	if (c1 == c2) {
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			cout << 1;
		} else {
			cout << 0;
		}
	} else {
		cout << 0;
	}
	if (c1 == c2) {
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			if (a <= 3 && b <= 3) {
				cout << 1;
			} else if (a >= 4 && b >= 4) {
				cout << 1;
			} else {
				cout << 0;
			}
		} else {
			cout << 0;
		}
	} else {
		cout << 0;
	}
	if (c1 == c2) {
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			if (a <= 3 && b <= 3) {
				if (a + 1 == b || b + 1 == a) {
					cout << 1;
				} else {
					cout << 0;
				}
			} else if (a >= 4 && b >= 4) {
				cout << 1;
			} else {
				cout << 0;
			}
		} else {
			cout << 0;
		}
	} else {
		cout << 0;
	}
	return 0;
}
