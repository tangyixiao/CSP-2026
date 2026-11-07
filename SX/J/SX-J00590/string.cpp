#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, k = 0, a;
	string s, b;
	cin >> n;
	for (long long nn = 1; nn <= n; nn++) {
		cin >> a >> b;
		for (long long aa = 1; aa <= a; aa++) {
			s = s + b;
		}
	}
	for (long long l = 0, r = s.size() - 1; l <= r; l++, r--) {
		if (s[l] == s[r])
			continue;
		k++;
	}
	cout << k;
	return 0;
}
