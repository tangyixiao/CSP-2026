#include <bits/stdc++.h>
using namespace std;
char c;
int n, x;
string s;
long long ans, len, cnt;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x >> c;
		len += x;
		while (x--)
			s.push_back(c);
	}
	cnt = len;
	len /= 2;
	ans = len;
	for (long long i = 0; i < len; i++) {
		if (s[i] == s[cnt - i - 1])
			ans--;
	}
	cout << ans;
	return 0;
}
