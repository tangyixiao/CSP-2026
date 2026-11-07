#include <bits/stdc++.h>
using namespace std;
char cc[1000005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, a, cnt = 0;
	char c;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		for (int j = 1; j <= a; j++) {
			cc[++cnt] = c;
		}
	}
	int ans = 0;
	for (int i = 1; i <= cnt / 2; i++) {
		if (cc[i] != cc[cnt - i + 1]) {
			ans += 1;
		}
	}
	cout << ans;
	return 0;
}
