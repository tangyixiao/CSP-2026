#include <bits/stdc++.h>
using namespace std;
int n;
string s, a;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int c = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> s[i];
		c += a[i];
	}
	int sum = 0;
	for (int i = 1; i <= c  ; i++) {
		if (s[i] != s[c - i ]) {
			s[c - i] == s[i];
			sum++;
			if (s[i] == s[c - i]) {
				break;
			}
		}
	}
	cout << sum;
	return 0;
}