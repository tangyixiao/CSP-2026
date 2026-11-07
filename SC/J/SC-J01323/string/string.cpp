#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<pair<int, char> > c;
void solve() {
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int x;
		char a;
		cin >> x >> a;
		c.push_back({x, a});
		sum+=x;
	}
	int l = 0, r = n - 1;
	int ans = 0;
	while (l < r) {
		if (c[l].second != c[r].second) {
			ans+=min(c[l].first, c[r].first);
			c[l].first -= min(c[l].first, c[r].first);
			c[r].first -= min(c[l].first, c[r].first);
		} else if(c[l].second == c[l].second) {
			if (l + 1 != r){
				c[l].first -= min(c[l].first, c[r].first);
				c[r].first -= min(c[l].first, c[r].first);
			}	
			else if (l + 1 == r) break;
		}
		if (c[l].first == 0) l++;
		if (c[r].first == 0) r--;
	}
	cout << ans;
}

signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	solve();
	return 0;
} 