#include <bits/stdc++.h>
using namespace std;
long long n, sum, a;
char b;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (long long i = 0; i < n; i++) {
		cin >> a >> b;
		for (long long i = 0; i < a; i++) {
			s += b;
		}
	}
	for (long long i = 0, j = s.size() - 1; i < ceil(s.size() * 1.0 / 2); i++, j--) {
		if (s[i] != s[j]) {
			sum += 1;
		}
	}
	cout << sum;
	return 0;
}
