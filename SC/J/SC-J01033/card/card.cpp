#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5, M = 3e5 + 5;
int n, m;
int a[N];
int ans[M], pos[M];
bool sorted = 1;
vector<int> q;
int main () {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
//	freopen("down/card/card4.in", "r", stdin);
//	freopen("down/card/card4.out", "w", stdout);
	ios :: sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		if (a[i] < a[i - 1]) {
			sorted = 0;
		}
	}
	if (sorted) {
		for (int i = 1; i <= n; ++i) {
			++ans[a[i]];
		}
		for (int i = 1; i <= m; ++i) {
			ans[i] += ans[i - 1];
			cout << ans[i] << " \n"[i == m];
		}
		return 0;
	}
	for (int i = 1; i <= n; ++i) {
		memset(pos, 0, sizeof pos);
		q.clear();
//		int cur = 0;
//		cerr << "\n\n****************************\n\n";
//		cerr << i << '\n';
		for (int j = i; j <= n; ++j) {
//			cerr << j << ' ' << a[j] << ' ';
			if (!pos[a[j]]) {
				pos[a[j]] = 1;
				q.push_back(a[j]);
//				cerr << "no " << cur << '\n';
			}
			else {
//				cerr << "yes " << cur << '\n';
//				for (int k = pos[a[j]] + 1; k <= cur; ++k) {
//					pos[a[k]] = 0;
//				}
				while (!q.empty() && q.back() != a[j]) {
					pos[q.back()] = 0;
					q.pop_back();
				}
//				cur = pos[a[j]];
			}
//			for (int k = 1; k <= m; ++k) {
//				cerr << pos[k] << " \n"[k == m];
//			}
//			for (int k : q) {
//				cerr << k << ' ';
//			}
//			cerr << '\n';
		}
		for (int j : q) {
			++ans[j];
		}
//		for (int i = 1; i <= m; ++i) {
//			if (pos[i]) {
//				++ans[i];
//			}
//		}
	}
	for (int i = 1; i <= m; ++i) {
		cout << ans[i] << " \n"[i == m];
	}
	return 0;
}