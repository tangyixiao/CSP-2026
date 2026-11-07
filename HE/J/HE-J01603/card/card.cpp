#include<bits/stdc++.h>
using namespace std;
int n, m, a[200010];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= m; i++) {
		int ans = 0;
		for (int j = 1; j <= n; j++) {
			vector<pair<int, int>> v;
			map<int, vector<int>> mp;
			for (int k = j; k <= n; k++) {
				mp[a[k]].push_back(k);
			}
			int f = 0;
			for (int k = 1; k <= m; k++) {
				if (mp[k].empty()) continue;
				if (*(--mp[i].end()) >= *mp[k].begin() && *(mp[i].rbegin()) <= *(mp[k].rbegin())) {
					f = 1;
				}
			}
			if (f == 0) ans++; 
		}
		cout << ans << " ";
	}
	return 0;
}
