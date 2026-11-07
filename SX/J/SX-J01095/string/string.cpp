#include <bits/stdc++.h>
using namespace std;
long long n, a, f = 0;
char c;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		for (int j = 1; j <= a; j++) {
			s += c;
		}
	}
	long long len = s.size() - 1;
	for (int i = 1; i <= len; i++) {
		if (s[i] != s[len - i]) {
			s[len - i] = s[i];
			f++;
		}
	}
	cout << f;
	return 0;
}
