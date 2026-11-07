#include <bits/stdc++.h>
using namespace std;
vector<int> q;
int ans[10];
int b[5];
vector<int> qq;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		q.push_back(x);
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			qq.push_back(q[j]);
			b[q[j]]++;
			if (b[q[j]] > 1) {
				b[q[j]]--;
				for (int k = qq.size() - 2; k >= 0; k--) {
					if (qq[k] != q[j])
						b[k]--;
					else
						break;
				}
			}

		}
		for (int k = 1; k <= n; k++) {
			ans[k] += b[k];
		}
		memset(b, 0, sizeof b);
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << " ";
}