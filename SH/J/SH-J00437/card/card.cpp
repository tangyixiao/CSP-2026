#include <iostream>
#include <stdio.h>
#include <map>
#include <vector>
#include <cstring>
using namespace std;

int n, m;
int a[500010];
map<int, int> mp;
bool b[300010];
int ans[300010];

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) {
		mp.clear();
		memset(b, false, sizeof(b)); 
		for (int j = i; j <= n; j++) {
			if (b[j]) continue;
			if (mp.find(a[j]) == mp.end()) {
				mp[a[j]] = j;
				continue;
			}
			for (int k = mp[a[j]]; k <= j; k++) b[k] = true;
			mp[a[j]] = j;
		}
		for (auto& it : mp) {
			ans[it.first]++;
		}
	}
	for (int i = 1; i <= m; i++) cout << ans[i] << ' ';
	return 0;
}
