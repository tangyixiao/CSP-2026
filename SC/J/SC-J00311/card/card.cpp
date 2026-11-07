#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6;
int a[N], dis[N], ans[N];
int id;
vector<int> v[N];
signed main() {
	cin.tie(0)->sync_with_stdio(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		v[a[i]].push_back(i);
	}
	for (int i = 1; i <= n; i++) {
		memset(dis, 0, sizeof(dis));
		id = i;
		for (int j = i; j <= n;) {
			int len = v[a[j]].size() - 1;
			if (v[a[j]].size() > 1 && j < v[a[j]][len] && dis[a[j]] == 0) {
				if (len % 2 == 1) {
					id = v[a[j]][len];
				} else {
					id = v[a[j]][len - 1];
				}
				dis[a[j]] = 1;
				j = id;
			} else {
				j++;
			}
		}
		for (int j = id; j <= n; j++) {
			ans[a[j]]++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << " ";
	}
}