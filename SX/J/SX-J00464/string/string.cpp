#include <bits/stdc++.h>
using namespace std;
string s, s1;
long long n;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	long long ls = 0;
	for (long long i = 1; i <= n; i++) {
		long long y;
		cin >> y;
		ls += y;
		char c;
		cin >> c;
		for (long long j = 1; j <= y; j++)
			s += c;
	}
	for (long long i = ls - 1; i >= 0; i--) {
		s1 += s[i];
	}
	long long sum = 0;
	for (long long i = 0; i < ls; i++) {
		if (s[i] != s1[i])
			sum++;
	}
	if (sum % 2)
		cout << (sum - 1) / 2;
	else
		cout << sum / 2;
	return 0;
}
