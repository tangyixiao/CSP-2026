#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e6 + 5, MN = INT_MIN, MX = INT_MAX;
int n, m, a[N], ans[N];
bool flag;
map <int, int> mp;
signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1 ; i <= n ; i++) {
		cin >> a[i];
		mp[a[i]]++;
		if (a[i - 1] > a[i] && i > 1)
			flag = 1;
	}
	if (!flag) {
		int s = 0;
		for (int i = 1 ; i <= m ; i++) {
			s += mp[i];
			cout << s << ' ';
		}
	} 
	else {
		for (int i = 1 ; i <= n ; i++) {
			int vis[100000] = {};
			vector <int> v;
			for (int j = i ; j <= n ; j++) {
				int s = a[j];
				if (vis[s] == 0) {
					v.push_back(s);
					vis[s] = 1;
				} else {
					for (int k = 0 ; k < v.size() ; k++) {
						if (v[k] == s) {
							for (int l = k ; l < v.size() ; l++) 
								vis[v[l]] = 0;
							v.erase(v.begin() + k, v.end());
							vis[s] = 1;
							v.push_back(s);
							break;
						}
					}
				}
				
			}
			for (int k = 1 ; k <= m ; k++) 
				ans[k] += vis[k];
		}
		for (int i = 1 ; i <= m ; i++)
			printf("%lld ", ans[i]);
	}
	return 0;
}
