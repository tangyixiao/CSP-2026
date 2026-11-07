#include <bits/stdc++.h>
using namespace std;
int c[3];
string s, a;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c[1] >> s;
	a = s;
	cin >> c[2] >> s;
	int h;
	if (c[1] != s[1]) {
		h += 1; //h=1 0000
	}
	if (c[1] == s[1] || c[2] == s[2]) {
		h += 1; //h=2 1111
	}
	if (c[1] == s[1] || c[2] != s[2]) {
		h += 1;
	}
	if h == 1 {
	cout << 0000;
}
if h == 2 {
	cout << 1111;
}
return 0;
}
