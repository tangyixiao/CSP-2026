#include <bits/stdc++.h>
using namespace std;
using ll = long long;
string s1, s2, s3, s4;

bool pd(char a) {
	if (a == 'D' || a == 'F') {
		return 0;
	}
	return 1;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> s1 >> s2 >> s3 >> s4;
	if (s1 != s3) {
		cout << "0000";
		return 0;
	}
	cout << "1";
	if (!(s2[0] == s4[0] && s2[1] == s4[1])) {
		cout << "000";
		return 0;
	}
	cout << "1";
	if (pd(s2[2]) != pd(s4[2])) {
		cout << "00";
		return 0;
	}
	cout << "1";
	if (s2[2] == s4[2] + 1 || s2[2] == s4[2] - 1) {
		cout << "1";
		return 0;
	}
	cout << "0";
	return 0;
}
