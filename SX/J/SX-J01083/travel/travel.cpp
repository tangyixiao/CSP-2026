#include <bits/stdc++.h>
using namespace std;
string s1, s2;
int c1,  c2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
	} else {
		cout << 0;
	}

	if (s1 != s2) {
		cout << 1;
	} else {
		cout << 0;
	}
	cout << 10;
	return 0;
}
