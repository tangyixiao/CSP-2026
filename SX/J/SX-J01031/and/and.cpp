#include <bits/stdc++.h>
using namespace std;
long long n, a, j = 0, d = 0;
char c, s[100000];

int main() {
//	freopen("and.in", "r", stdin);
//	freopen("and.out", "W", stdout);
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> a >> c;
		while (a--) {
			s[j] = c;
			j++;
		}
	}
	for (long long i = 1; i <= j / 2; i++) {
		if (s[i] != s[j - i + 1]) {
			cout << i << j - i + 1;
			d++;
		}
	}
	cout << d;
	return 0;
}
