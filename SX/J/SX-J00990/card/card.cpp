#include <bits/stdc++.h>
using namespace std;
const int N = 5e5+5;
int a[N], cnt[N], ans[N];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cnt[0] = 0;
	ans[0] = 0;
	for (int i = 1; i < m; i++) {
		cnt[i] = 0;
		for (int j = 1; j <= n; j++) {
			cnt[a[j]]++;
		}
		ans[i] = ans[i - 1] + cnt[i];
	}
	for (int i = 1; i < m; i++) {
		cout << ans[i] << ' ';
	}
	cout << n;
	return 0;
}