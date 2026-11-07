#include <bits/stdc++.h>
using namespace std;
long long n, a, cnt, len;
char c;
string s, ss;

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

	len = s.size();

	for (int i = len - 1; i >= 0; i--) {
		ss += s[i];
	}
	for (int i = 0; i < len; i++) {
		if (s[i] != ss[i])
			cnt++;
	}
	cout << cnt / 2;
	return 0;
}
