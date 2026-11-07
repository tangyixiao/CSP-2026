#include<bits/stdc++.h>
#define int long long 
#define endl "\n"
using namespace std;
const int N = 5e5 + 10;
int n,m,a[N];
set<int> ans[N];
signed main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios :: sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin >> n >> m;
	for(int i=1;i<=n;i++) {
		cin >> a[i];
	}
	for(int i=1;i<=n;i++) {
		vector<int> vec;
		vector<int> vis(m + 1,-1);
		for(int j=i;j<=n;j++) {
			if(vis[a[j]] != -1) {
				int x = vec.size() - vis[a[j]];
				for(int k=1;k<=x;k++) {
					vec.pop_back();
				}
			}
			vec.push_back(a[j]);
			vis[a[j]] = vec.size() - 1;
		}
		for(auto k : vec) {
			ans[k].insert(i);
		}
	}
	for(int i=1;i<=m;i++) {
		cout << ans[i].size() << " ";
	}
	return 0;
}