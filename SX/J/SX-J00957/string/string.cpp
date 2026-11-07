#include <bits/stdc++.h>
using namespace std;
long long n, a, k = 0, q = 0, w = 0;
string s[10000010], c;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		for (int j = 1; j <= a; j++) {
			k++;
			s[k] = c;
		}
	}
	while (k != 0) {
		w++;
		if (s[w] != s[k]) {
			s[k] = s[w];
			q++;
		}
		k--;
	}
	cout << q;
	return 0;
}
