#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e5+14;
int n, m;
int a[N], st[N], ans[N];
vector<int> g[N];
signed main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	memset(st, 0, sizeof st);
	for(int i = 1; i <= n; i ++){
		cin >> a[i];
		g[a[i]].push_back(i);
	}
	if(m <= 2){
		for(int i = 1; i <= n; i ++){
			if(g[a[i]][g[a[i]].size()-1] < n){
				ans[a[i]] ++;
				ans[3-a[i]]++;
			}else{
				ans[a[i]] ++;
			}
		}
		for(int i = 1; i <= m; i ++) cout << ans[i] << ' ';
		return 0;
	}
	for(int game = 1; game <= n; game ++){
		memset(st, 0, sizeof st);
		for(int i = game; i <= n; i ++){
			for(int j = st[a[i]]; j < g[a[i]].size(); j ++){
				if(g[a[i]][j] > i) break;
				if(g[a[i]][j] == i){
					st[a[i]]++;
					i = g[a[i]][g[a[i]].size()-1];
					break;
				}
			}
			ans[a[i]]++;
		}
	}
	for(int i = 1; i <= m; i ++) cout << ans[i] << ' ';
	return 0;
}
