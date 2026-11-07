#include <bits/stdc++.h>
using namespace std ;
const long long  N = 2e5 + 50 ;
long long  n , m , maxn = -1 ;
long long  a[N] ;bool flag[N] ;
inline void dfs(long long  pos , long long  sum){
	if(pos == m){
		maxn = max(maxn , sum) ;
		return ;
	}
	for(long long  i = 1 ;i <= n;++ i){
		if(!flag[i]){
			flag[i] = 1 ;
			dfs(pos + 1 , (sum & a[i])) ;
			flag[i] = 0 ;
		}
	}
}
signed main(){
	freopen("and.in","r",stdin) ;
	freopen("and.out","w",stdout) ;
	ios::sync_with_stdio(0) ;
	cin.tie(0) ;cout.tie(0) ;
	cin >> n >> m ;
	for(long long  i = 1 ;i <= n;++ i)
		cin >> a[i] ;
	for(long long  i = 1 ;i <= n;++ i){
		flag[i] = 1 ;
		dfs(1 , a[i]) ;
		flag[i] = 0 ;
	}
	cout << maxn ;
	return 0 ;
}
