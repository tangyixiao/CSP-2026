#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, a, cnt = 0;
	cin >> n;
	string s = "";
	char c;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		for (int j = 1; j <= a; j++) {
			s += c;
		}
	}
	long long l = s.size();
	long long x;
	x = l / 2;
	for (int i = 0; i < x; i++) {
		if (s[i] != s[l - 1 - i]) {
			cnt++;
			s[i] = s[l - 1 - i];
		}
	}
	cout << cnt;
	return 0;
}

