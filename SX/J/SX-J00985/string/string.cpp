#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
long long n, a[N], f, len;
string s[N], c;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> s[i];
		c += s[i];
	}
	len = c.size();
	for (int i = 0; i <= len - 1; i++) {
		for (int j = c.size() - 1; j >= 0; j--) {
			if (c[i] != c[j]) {
				f++;
				c[i] = c[j];
			}
		}
	}
	cout << f;
	return 0;
}