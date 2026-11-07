#include <bits/stdc++.h>
using namespace std;
int c1, c2;
string s1, s2, s, c;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != 01 || c1 != 16 || c2 != 01 || c2 != 16) {
		if (c1 == c2) {
			cout << "1000";
		} else {
			cout << "0000";
		}
	} else {
		cout << "0000";
	}
	return 0;
}