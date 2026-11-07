#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n, a[200050], t = 0, x = 0;
	char c[200005];
	string s;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= a[i]; j++) {
			s[t] = c[i];
			t++;
		}
	}
	for (int i = 0; i < t / 2; i++) {
		if (s[i] != s[t - i - 1]) {
			x++;
		}
	}
	cout << x << endl;
	return 0;
}