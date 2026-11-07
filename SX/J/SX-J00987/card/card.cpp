#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5e5, MAXM = 3e5;
int enda[MAXM + 5], a[MAXN + 5], ans[MAXM + 5], pre[MAXN + 5];

int main() {
	ios::sync_with_stdio();
	cin.tie(0), cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i], enda[a[i]] = i;
	for (int i = 1; i <= n; i++) {
		int t = INT_MIN;
//		cout << "i:" << i << ",a[i]:" << a[i] << ",enda[a[i]]:" << enda[a[i]] << endl;
		for (int j = 1; j <= m; j++) {
			if (a[i] == j)
				continue;
			if (enda[j] > enda[a[i]] && pre[j] != 0 && pre[j] < i)
				t = max(t, pre[j]);
//			cout << "j:" << j << ",pre[j]:" << pre[j] << ",enda[j]:" << enda[j] << ",t:" << t << endl;
		}
		if (t == INT_MIN)
			ans[a[i]] += i - pre[a[i]];
		else
			ans[a[i]] += i - t;
		pre[a[i]] = i;
//		cout << "ans[a[i]]:" << ans[a[i]] << endl;
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << " ";
	return 0;
}
