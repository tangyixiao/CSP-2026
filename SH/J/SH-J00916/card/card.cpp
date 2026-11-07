#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int a[500005], cnt[600005], to[500005], ne[300005];
int ans[300005];
int res[300005];
vector<int> v[300005];
void dfs(int u){
	ans[u]+=cnt[u];
	for(auto x : v[u]){
		dfs(x);
		ans[u]+=ans[x];
	}
}
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i =1; i<= n; i++){
		cin >> a[i];
	}
	for(int i = n; i >= 1; i--){
		to[i] = ne[a[i]];
		ne[a[i]] = i;
		cnt[a[i]]++;
	}
	for(int i = n; i >=1; i--){
		if(to[to[i]])to[i] = to[to[i]];
	}
	for(int i = n; i >= 1; i--){
		if(!to[i]){
			to[i] = i;
			v[a[to[i+1]]].push_back(a[i]);
		}
	}
	dfs(0);
	for(int i = 1; i <= m; i++)printf("%d ", ans[i]);
	return 0;
} 
