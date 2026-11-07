#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 5;
const int maxc = 1e8 + 5;
int a[maxn];
char c[maxn];
char cc[maxc];
int n;
int cnt;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= a[i]; j++) {
			cc[++cnt] = c[i];
		}
	}
	int ans = 0;
	for (int i = 1; i <= cnt / 2; i++) {
		if (cc[i] != cc[cnt - i + 1]) {
			ans++;
		}
	}
	cout << ans;
	return 0;
}