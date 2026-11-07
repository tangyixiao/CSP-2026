#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, a, sum = 0, b;
	string s, s1, c;
	cin >> n;
	for (long long i = 0; i < n; i++) {
		cin >> a;
		cin >> s1;
		for (int j = 0; j < a; j++) {
			s += s1;

		}
	}
	b = s.size();
	for (long long i = b - 1; i >= 0; i--) {
		c += s[i];
	}
	for (int i = 0; i < b / 2; i++) {
		if (s[i] != c[i]) {
			sum++;
		}
	}
	cout << sum;
	return 0;
}/*2
	2 a
	3 a
	3
	2 a
	2 b
	1 c
	4
	3 e
	4 r
	5 t
	6 g
	6
	2 a
	1 b
	3 c
	1 b
	1 e
	1 a
	*/
