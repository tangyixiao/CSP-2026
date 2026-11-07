#include <bits/stdc++.h>
using namespace std;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, sum = 0, cnt = 0, l = 0, r;
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		long long x;
		string y;
		cin >> x >> y;
		sum += x;
		for (long long j = 1; j <= x; j++) {
			s += y;
		}
	}
	r = sum - 1;
	while (l < r) {
		if (s[r] != s[l]) {
			s[r] = s[l];
			cnt++;
		}
		l++;
		r--;
	}
	cout << cnt;
	return 0;
}
