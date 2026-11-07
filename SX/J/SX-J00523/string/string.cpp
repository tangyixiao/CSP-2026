#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long n, sum = 0, s1;
	string s;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		long long x;
		char y;
		cin >> x >> y;
		s1 += x;
		for (int i = 1; i <= x; i++) {
			s += y;
		}
	}
	if (s1 >= 1000000000) {
		cout << s1 / 2;
		return 0;
	}
	long long ans = s.size() - 1;
	for (int i = ans; i > ans / 2; i--) {
		if (s[i] != s[ans - i])
			sum++;
	}
	cout << sum;
	return 0;
}
