#include <bits/stdc++.h>
using namespace std;
#define int long long

struct node {
	int id, num;
} mp[200005];
int a[200005], cnt[200005];

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (mp[a[i]].num == 0) {
			mp[a[i]].num++;
			mp[a[i]].id = i;
		} else {
			cnt[i] += i - mp[a[i]].id;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << cnt[i] << " ";
	}

	return 0;
}