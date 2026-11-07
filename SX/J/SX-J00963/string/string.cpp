#include <bits/stdc++.h>
using namespace std;
string s = "", b[200005];
int n, a[200005];
int g;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
		for (int j = 1; j <= a[i]; j++) {
			s += b[i];
		}
	}
	for (int i = 1; i <= s.size(); i++) {
		if (s[i] != s[s.size() - i - 1]) {
			g = 0;
			break;
		} else {
			g = 1;
		}
	}
	if (g == 1) {
		cout << 0;
	} else if (n == 2) {
		cout << min(a[1], a[2]);
	} else {
		cout << 1;
	}
	return 0;
}
