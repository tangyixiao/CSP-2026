#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MaxN = 5e5+5;
int a[MaxN];
int table[MaxN];
int n, m;
int cnt[MaxN], ans[MaxN];

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		memset(cnt, 0, sizeof(cnt));
		deque<int> q;
		//cout << "第" << i << "局" << endl;
		for (int j = i; j <= n; j++) {
			if (cnt[a[j]]) {
				//cout << "出过了" << a[j] << endl;
				int u = q.back();
				while (u != a[j] && q.size()) {
					u = q.back();
					q.pop_back();
					cnt[u]--;
					//cout << "删除了" << u << "后" << "cnt3:" << cnt[3] << endl;
				}
				//cout << endl;
			}
			q.push_back(a[j]);
			//cout << "在出" << a[j] << endl;
			cnt[a[j]]++;
			//cout << "cnt3:" << cnt[3] << endl;
		}
		//cout <<"还剩下";
		while (q.size()) {
			
			int f = q.front();
			//cout << f << ",";
			q.pop_front();
			ans[f]++;
		}
		//cout << endl;
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
}
