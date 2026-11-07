#include <bits/stdc++.h>
using namespace std;
string a[10000010];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, sum = 1;
	char s;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> m >> s;
		for (int j = sum; j < sum + m; j++) {
			a[j] = s;
		}
		sum += m;
	}
	int ans = 0, t = sum - 1;
	int k = t / 2;
	for (int i = 1; i <= k; i++) {
		if (a[i] != a[t + 1 - i])
			ans++;
	}
	cout << ans;
	return 0;
}
