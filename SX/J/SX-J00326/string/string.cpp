#include <bits/stdc++.h>
using namespace std;
string s;
long long a, n, c = 0;
char t;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> t;
		for (int o = 1; o <= a; o++) {
			s = s + t;
		}
	}
	for (int i = 0; i < s.size() / 2; i++) {
		if (s[i] != s[s.size() - 1 - i])
			c++;
	}
	cout << c;
	return 0;
}
