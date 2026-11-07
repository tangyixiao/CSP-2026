#include <bits/stdc++.h>
using namespace std;
long long n, a, j = 1, b = 0;
char c, s[100011];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> a >> c;
		while (a--) {
			s[j] = c;
			j++;
		}
	}
	for (long long i = 1; i <= j / 2; i++) {
		if (s[i] != s[j - i ]) {
			b++;
		}
	}
	cout << b;
	return 0;
}
