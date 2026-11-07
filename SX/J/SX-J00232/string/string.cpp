#include <bits/stdc++.h>
using namespace std;
int n;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	if (n == 1) {
		cout << 0;
		return 0;
	}
	for (int i = 0; i < n; i++) {
		int w;
		cin >> w;
		string x;
		for (int j = 0; j < w; j++) {
			cin >> x;
			s += x;
		}
	}
	string c;
	for (int i = n - 1; i >= 0; i--) {
		c += s[i];
	}
	if (c == s) {
		cout << 0;
		return 0;
	}
	int len = s.size();
	int sum = 0;
	for (int i = 0; i < len; i++) {
		if (c[i] != s[i]) {
			sum ++;
		}
	}
	cout << sum / 2;

	return 0;
}