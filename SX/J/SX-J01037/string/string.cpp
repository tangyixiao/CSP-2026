#include <bits/stdc++.h>
using namespace std;
string s, t;
long long a, n;
char c;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int j = 1; j <= n; j++) {
		cin >> a >> c;
		for (int i = 1; i <= a; i++) {
			s += c;
		}
	}
	for (int i = s.size() - 1; i >= 0; i--) {
		t += s[i];
	}
	if (s == t) {
		cout << 0;
	}
	return 0;
}
