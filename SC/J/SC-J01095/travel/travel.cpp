#include<bits/stdc++.h>
using namespace std;
char c1[5], s1[5], c2[5], s2[5];
int main () {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> (c1 + 1) >> (s1 + 1) >> (c2 + 1) >> (s2 + 1);
	for (int i = 1; i <= 2; i++) {
		if (c1[i] != c2[i]) {
			cout << "0000";
			return 0;
		}
	}
	cout << 1;
	for (int i = 1; i <= 2; i++) {
		if (s1[i] != s2[i]) {
			cout << "000";
			return 0;
		}
	}
	cout << 1;
	if ((s1[3] == 'C' && s2[3] == 'D') || (s1[3] == 'D' && s2[3] == 'C')) {
		cout << "00";
		return 0;
	}
	cout << 1;
	if (abs(s1[3] - s2[3]) > 1) {
		cout << "0";
		return 0;
	}
	cout << 1;
	return 0;
}