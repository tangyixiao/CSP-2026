#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, a, l;
	string s, c;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		l += a;
		for (int j = 1; j <= a; j++) {
			s += c;
		}
	}
	int num = 0;
	for (int i = 1; i <= l / 2; i++) {
		if (s[i] != s[l - i + 1]) {
			num++;
		}
	}
	cout << num;
	return 0;
}