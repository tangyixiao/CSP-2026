#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e5 + 1;
int n, m, a[N];
signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	bool flag = true;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] < a[i - 1]) flag = false;
	}
	unordered_map<int, int> cnt;
	for (int i = 1; i <= n; i++) {
		unordered_set<int> s;
		vector<int> v;
		for (int j = i; j <= n; j++) {
			if (!s.count(a[j])) {
				s.insert(a[j]);
				v.push_back(a[j]);
			} else {
				for (int k = v.size() - 1; k >= 0; k--) {
					if (v[k] == a[j]) break;
					v.erase(v.begin() + k);
					s.erase(v[k]);
				}
			}
		}
		for (int x : v) cnt[x]++;
	}
	for (int i = 1; i <= m; i++) cout << cnt[i] << ' ';
	return 0;
}
