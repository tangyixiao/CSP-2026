#include <bits/stdc++.h>
using namespace std;
int c[3];
string s[3];

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c[1] >> s[1];
	cin >> c[2] >> s[2];
	if (c[1] != c[2]) {
		cout << "0000";
		return 0;
	}
	if (c[1] == c[2] && s[1] != s[2]) {
		cout << "1000";
		return 0;
	} else
		cout << "1111";
	return 0;
}
