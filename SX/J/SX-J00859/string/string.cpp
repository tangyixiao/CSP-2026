#include <bits/stdc++.h>
using namespace std;
int n, m, a[200010], w;
bool b[200010];
char c;
string s;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> m >> c;
		for (int j = 1; j <= m; j++) {
			s += c;
		}
	}
	int l = s.size();
	if (l % 2 == 0) {
		for (int i = 1; i <= n / 2; i++) {
			a[i] = s[i];
		}
		for (int i = n / 2 + 1; i <= n; i++) {
			if (a[i] != s[i]) {
				b[i] = 1;
			}
		}
	} else {
		for (int i = 1; i < n / 2; i++) {
			a[i] = s[i];
		}
		for (int i = n / 2 + 2; i <= n; i++) {
			if (a[i] != s[i]) {
				w++;
			}
		}
	}
	if (w != 0) {
		cout << w;
	} else {
		cout << 0;
	}

	return 0;
}