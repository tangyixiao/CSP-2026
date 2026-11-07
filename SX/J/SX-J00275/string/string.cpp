#include <bits/stdc++.h>
using namespace std;
char b[1000005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, cnt = 0, bi = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int m;
		char a;
		cin >> m >> a;
		for (int j = 1; j <= m; j++) {
			b[bi] = a;
			bi++;
		}
	}
	for (int i = 1; i <= bi / 2 + 1; i++) {
		for (int j = bi / 2; j >= 1; j--) {
			if (b[i] != b[j]) {
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}