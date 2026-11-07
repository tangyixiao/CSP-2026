#include <bits/stdc++.h>
using namespace std;
long long n, a, x, l;
char c, s[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> x >> c;
		for (long long j = l; j <= x + l; j++) {
			s[j] = c;
		}
		l += x;
	}
	for (long long i = 0; i < n / 2 + 1; i++) {
		if (s[i] != s[l - i - 1]) {
			a++;
		}
	}
	cout << a;
	return 0;
}
