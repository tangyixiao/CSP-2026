#include <bits/stdc++.h>

using namespace std;

int T;
string s;

int main () {
	freopen ("string.in", "r", stdin);
	freopen ("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> T;
	bool flag = true;
	while (T--) {
		long long n;
		char ch;
		cin >> n >> ch;
		for (int i = 1; i <= n; i++) {
			s += ch;
		}
	}
	if (T == 1) {
		cout << 0;
		return 0;
	}
	for (int i = 0; i < s.size(); i++) {
		if (i == 0) continue;
		if (s[i] != s[i - 1]) {
			flag = false;
			break;
		}
	}
	if (flag == true) {
		cout << 0;
		return 0;
	}
	int a[25] = {};
	for (int i = 0; i < s.size ();i ++) {
		if (s[i] == 'a') a[0]++;
		if (s[i] == 'b') a[1]++;
		if (s[i] == 'c') a[2]++;
		if (s[i] == 'd') a[3]++;
		if (s[i] == 'e') a[4]++;
		if (s[i] == 'f') a[5]++;
		if (s[i] == 'g') a[6]++;
		if (s[i] == 'h') a[7]++;
		if (s[i] == 'i') a[8]++;
		if (s[i] == 'j') a[9]++;
		if (s[i] == 'k') a[10]++;
		if (s[i] == 'l') a[11]++;
		if (s[i] == 'm') a[12]++;
		if (s[i] == 'n') a[13]++;
		if (s[i] == 'o') a[14]++;
		if (s[i] == 'p') a[15]++;
		if (s[i] == 'q') a[16]++;
		if (s[i] == 'r') a[17]++;
		if (s[i] == 's') a[18]++;
		if (s[i] == 't') a[19]++;
		if (s[i] == 'u') a[20]++;
		if (s[i] == 'v') a[21]++;
		if (s[i] == 'w') a[22]++;
		if (s[i] == 'x') a[23]++;
		if (s[i] == 'y') a[24]++;
		if (s[i] == 'z') a[25]++;
	}
	int minn = 9999;
	for (int i = 0; i <= 25; i++) {
		if (i == 0) continue;
		if (a[i] < a[i - 1] && a[i] != 0) {
			minn = a[i];
		}
	}
	if (minn == 9999) minn = a[0];
	cout << minn;
	return 0;
}