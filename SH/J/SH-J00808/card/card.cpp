#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
ll n, m, a[500050], answer[500050], cnt[500050];
vector<ll> q;
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i ++)
		cin >> a[i];
	if (n * m <= 10000000 && n * n <= 10000000) {
		for (int i = 1; i <= n; i ++) {
			q.clear();
			for (int j = 1; j <= m; j ++)
				cnt[j] = 0;
			for (int j = i; j <= n; j ++) {
				if (cnt[a[j]]) {
					while (q.back() != cnt[a[j]])
						cnt[a[q.back()]] = 0, q.pop_back();
					q.pop_back();
				}
				q.push_back(cnt[a[j]] = j);
			}
			for (auto j : q)
				answer[a[j]] ++;
		}
		for (int i = 1; i <= m; i ++)
			cout << answer[i] << " ";
		return 0;
	}
	for (int i = 1; i <= n; i ++)
		cnt[a[i]] = i;
	for (int i = 1; i <= n; i ++) {
		for (int j = i; j <= n; ) {
			if (cnt[a[j]] != j)
				j = cnt[a[j]];
			else
				answer[a[j]] ++, j ++;
		}
	}
	for (int i = 1; i <= m; i ++)
		cout << answer[i] << " ";
}
