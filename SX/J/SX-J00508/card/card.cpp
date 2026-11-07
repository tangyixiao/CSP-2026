#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);

	int n, m;
	cin >> n >> m;
	vector<int> a(n + 1);
	vector<int> b(m + 1);
	vector<int> w;
	vector<int> ans(m + 1);
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	for (int i = 0; i < n; ++i) {
		vector<int>(m + 1).swap(b);
		vector<int>().swap(w);
		for (int j = i; j < n; ++j) {
			if (b[a[j]] != 0) {
				int pos = 0;
				for (int k = 0; k < (int)w.size(); ++k) {
					if (w[k] == a[j]) {
						pos = k;
						break;
					}
				}
				vector<int> t;
				for (int k = 0; k <= pos; ++k)
					t.push_back(w[k]);
				for (int k = pos + 1; k < j; ++k) {
					if (a[k] != a[j])
						b[a[k]] = 0;
				}
				w = t;
				continue;
			}
			b[a[j]] = 1;
			w.push_back(a[j]);
		}

		for (int k = 0; k < (int)w.size(); ++k)
			ans[w[k]] += 1;

	}

	for (int i = 1; i <= m; ++i) {
		cout << ans[i] << ' ';
	}
	return 0;
}
