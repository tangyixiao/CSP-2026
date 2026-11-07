#include <bits/stdc++.h>
using namespace std;
long long n,m,a[200005],g[200005] = {LLONG_MAX},mx = -1;
bool vis[200005];
void dfs(long long x,long long y){
	if(x == m){
		mx = max(mx,y);
		return;
	}
	for(int i = 1;i <= n;i++){
		if(!vis[i] && (y & a[i]) > mx){
			vis[i] = true;
			dfs(x+1,(y & a[i]));
			vis[i] = false;
		}
	}
	return;
}
int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> a[i],g[i] = g[i-1] & a[i];
	if(m == 1){
		for(int i = 1;i <= n;i++) mx = max(mx,a[i]);
		cout << mx;
		return 0; 
	}else if(m == n){
		cout << g[m];
		return 0;
	}
	sort(a+1,a+n+1,[&](const long long &x,const long long &y){
		if(__builtin_popcountll(x+1) == 1 && __builtin_popcountll(y+1) == 1) return x > y;
		if(__builtin_popcountll(x+1) == 1) return true;
		if(__builtin_popcountll(y+1) == 1) return false;
		return x > y;
	});
//	for(int i = 1;i <= n;i++) cout << a[i];
	dfs(0,LLONG_MAX);
	cout << mx;
	
	return 0;
}
