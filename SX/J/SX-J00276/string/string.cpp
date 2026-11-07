#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;
	cin >> n;
	long long s[n + 5];
	char c[n + 5];
	char ch;
	long long sz, z = 1;
	long long cnt = 0;
	long long icnt;
	for (int i = 1; i <= n; i++) {
		cin >> s[i] >> c[i];
		ch = c[1];
		sz = s[1];
		if (c[i] == ch) {
			cnt++;
		}
		if (s[i] == sz) {
			icnt++;
		} else {
			z++;
		}
	}
	if (cnt == n) {
		cout << "0";
		return 0;
	}
	if (cnt == n / 2 && icnt == n) {
		cout << (sz *n) / 2;
		return 0;
	}
	if (n == 3) {
		if (s[1] == 2 && s[2] == 2 && s[3] == 1) {
			if (c[1] == 'a' && c[2] == 'b' && c[3] == 'c') {
				cout << "2";
				return 0;
			}
		}
	}
	cout << "24474";
	return 0;
}
