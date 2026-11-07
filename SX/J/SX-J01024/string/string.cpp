#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, sum = 0;
	string s;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		long long x;
		char x1;
		cin >> x >> x1;
		for (int j = 1; j <= x; j++) {
			s += x1;
		}
	}
	for (int i = 0; i <= s.size() / 2; i++) {
		if (s[i] != s[s.size () - i - 1]) {
			sum++;
		}
	}
	cout << sum;
	return 0;
}
