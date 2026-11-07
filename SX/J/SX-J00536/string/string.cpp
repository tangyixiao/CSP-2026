#include <bits/stdc++.h>
using namespace std;
int n;
long long a, b, l;
char c;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		for (long long j = 1; j <= a; j++) {
			s += c;
		}
		l += a;
	}
	for (long long i = 0; i < floor(l / 2); i++) {
		if (s[i] != s[l - 1 - i]) {
			b++;
		}
	}
	cout << b;
	return 0;
}