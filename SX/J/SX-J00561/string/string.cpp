#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int a, b, log, all = 0;
	string ans, c, x, y;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b;
		cin >> c;
		log += b;
		for (int j = 0; j < b; j++) {
			ans = ans + c;
		}
	}
	for (int i = 0; i < log / 2; i++) {
		x = x + ans[i];
		y = y + ans[log - i - 1];
	}
	for (int i = 0; i < log / 2; i++) {
		if (x[i] != y[i]) {
			all++;
		}
	}
	cout << all;
	return 0;
}