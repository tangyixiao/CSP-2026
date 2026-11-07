#include <bits/stdc++.h>
using namespace std;
string s;
int n, a;
char c;
long long l = 0, v, sol = 0;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		for (int j = 1; j <= a; j++) {
			s += c;
		}
		l += a;
	}
	l--;
	v = l / 2;
	for (long long k = 0; k <= v; k++) {
		if (s[k] != s[l - k]) {
			sol++;
		}
	}
	cout << sol;
	return 0;
}
