#include <bits/stdc++.h>
using namespace std;
string k = 0, s[10000];
int n;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i <= n; i++ ) {
		cin >> s[i];
	}
	for (int p = 0; p <= n ; p++ ) {
		for (int q = n; q >= 0; q-- ) {
			if (s[p] != s[q]) {
				k += 1;
			}
		}
	}
	cout << k;
	return 0;
}
