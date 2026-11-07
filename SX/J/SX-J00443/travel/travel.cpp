#include<bits/stdc++.h>
using namespace std;

string s[10];

int po(char c) {
	if (c == 'D' || c == 'F') return 1;
	return 2;
}

int diff(char a, char b) {
	if (a > b) swap(a, b);

	if (a == 'F') a = 'E';
	if (b == 'F') b = 'E';

	return b - a;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);

	for(int i = 1; i <= 4; i++) {
		cin >> s[i];
	}

	int ans = 1;
	ans &= (int)(s[1] == s[3]);
	cout << ans;

	ans &= (int)(s[2][0] == s[4][0] && s[2][1] == s[4][1]);
	cout << ans;

	ans &= (int)(po(s[2][2]) == po(s[4][2]));
	cout << ans;

	ans &= (int)(diff(s[2][2], s[4][2]) == 1);
	cout << ans;

	return 0;
}