#include <bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
bool cmp1() {
	for (int i = 0; i < 2; i++) {
		if (c1[i] != c2[i]) {
			return false;
		}
	}
	return true;
}
bool cmp2() {
	for (int i = 0; i < 2; i++) {
		if (s1[i] != s2[i]) {
			return false;
		}
	}
	return true;
}
int main () {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if (!cmp1()) {
		cout << 0;
	}
	else {
		cout << 1;
	}
	if (!cmp1()) {
		cout << 0;
	}
	else {
		if (!cmp2()) {
			cout << 0;
		}
		else {
			cout << 1;
		}
	}
	if ((!cmp1() || !cmp2())) {
		cout << 0;
	}
	else {
		if (((s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C') && (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C')) || (s2[2] == 'D' || s2[2] == 'E') && (s1[2] == 'D' || s1[2] == 'E')) {
			cout << 1;
		}
		else {
			cout << 0;
		}
	}
	if (!cmp1() || !cmp2()) {
		cout << 0;
	}
	else {
		if ((s1[2] == 'A' && s2[2] == 'B') || (s1[2] == 'B' && s2[2] == 'C') || (s1[2] == 'B' && s2[2] == 'A') || (s1[2] == 'C' && s2[2] == 'B') || (s1[2] == 'D' && s2[2] == 'E') || (s1[2] == 'E' && s2[2] == 'D')) {
			cout << 1;
		}
		else {
			cout << 0;
		}
	}
	return 0;
} 
