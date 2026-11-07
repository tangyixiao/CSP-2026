#include <bits/stdc++.h>
using namespace std;
int a[200005];
int cnt[200005], ans[200005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) {
		deque <int> q;
		memset(cnt, 0, sizeof cnt);
		for (int j = i; j <= n; j++) {
			if (cnt[a[j]]) {
				while (q.size()) {
					int t = q.back();
					cnt[t]--;
					q.pop_back();
					if (t == a[j]) break;
				}
			}
			q.push_back(a[j]); cnt[a[j]]++;
		} for (int i : q) {
			ans[i]++;
		}
	} for (int i = 1; i <= m; i++) cout << ans[i] << " ";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
