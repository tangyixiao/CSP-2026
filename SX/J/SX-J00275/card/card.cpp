#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int cnt[100005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m, ans = 0;
	cin >> n >> m;
	int n2 = n;
	for (int i = 1; i <= n2; i++) {
		cin >> a[i];
		cnt[i] = a[i];
	}
	for (int i = 1; i <= m; i++) {
		ans = 0;
		for (int j = 1; j <= i; j++) {
			int l = i;
			if (cnt[j] == cnt[l]) {
				l = j;
			}
			if (cnt[j] == m) {
				ans++;
			}
		}
		cout << ans << " ";
	}
	return 0;
}