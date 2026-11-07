#include <bits/stdc++.h>
using namespace std;
string s, a;
long long ans;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c >> a;
		for (int j = 0; j < c; j++)
			s += a;
	}
	long long len = s.size();
	for (int i = 0; i < len / 2; i++) {
		if (s[i] != s[len - i - 1])
			ans++;
	}
	cout << ans;
	return 0;
}