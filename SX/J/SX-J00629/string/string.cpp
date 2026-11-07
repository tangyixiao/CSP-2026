#include <bits/stdc++.h>
using namespace std;
int n, anf = 1, ans = 0;
char c[200010];
int a[200010];
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> c[i];
		for (int j = anf; j <= a[i] + anf; j++) {
			s[j] = c[i];
		}
		anf += a[i];
	}
	for (int i = 1; i <= anf / 2; i++) {
		if (s[i] == s[anf - i]) {
			ans++;
		}
	}
	cout << anf / 2 - ans;
	return 0;
}
