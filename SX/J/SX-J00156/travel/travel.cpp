#include <bits/stdc++.h>
using namespace std;
//#define ll long long
//const int N=1e6;
//ll n;
string c1, s1, c2, s2;
int q = 0, w = 0, e = 0;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2)
		cout << true;
	else {
		cout << false;
		q = 1;
	}
	if (q) {
		cout << false;
		w = 1;
	} else {
		if (s1[0] == s2[0] && s1[1] == s2[1]) {
			cout << true;
		} else {
			cout << false;
			w = 1;
		}
	}
	char a = s1[2], b = s2[2];
	if (w) {
		cout << false;
		e = 1;
	} else {
		if (a >= 'D' && b <= 'C') {
			cout << false;
			e = 1;
		} else if (a <= 'C' && b >= 'D') {
			cout << false;
			e = 1;
		} else {
			cout << true;
		}
	}

	if (e) {
		cout << false;
	} else {
		if (a + 1 == b || b + 1 == a) {
			cout << true;
		} else
			cout << false;
	}

	return 0;
}
