#include <bits/stdc++.h>
#define p_q priority_queue
#define int long long
#define endl "\n"
using namespace std;
int num[500005];
vector<int> ans[500005];

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);

	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> num[i];
	for (int i = 1; i <= n; i++) {
		vector<int> x(n + 5), t(m + 5, 0);
		for (int j = i; j <= n; j++) {
			if (t[num[j]] == 0) {
				x.push_back(num[j]);
				t[num[j]] = 1;
			} else {
				while (x.back() != num[j]) {
					t[x.back()] = 0;
					x.pop_back();
				}
			}
		}
		for (int j : x)
			ans[j].push_back(i);
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i].size() << " ";
	return 0;
}
