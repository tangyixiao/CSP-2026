#include <bits/stdc++.h>
using namespace std ;
long long n, a[20010], b = 0;
char c[20010];
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		for (int j = 1; j <= a[i]; j++) {
			s = s + c[i];
		}
	}
	cout << s;
	int l = s.size();
	for (int i = l - 1; i <= (l - 1) / 2; i++) {
		if (s[i] != s[l + 1 - i]) {
			s[l + 1 - i] = s[i];
			b++;
		}
	}
	cout << b;
	return 0;
}