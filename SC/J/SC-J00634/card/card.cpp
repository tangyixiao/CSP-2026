#include <bits/stdc++.h> 
#define int long long 
using namespace std ;

const int N=5e5+10 ;
int a[N] ; int n,m ; pair<int,bool> vis[N] ;
int cnt[N] ;

void solve(int pos) {
	for(int i=pos;i<=n;i++) {
		if(vis[a[i]].second!=0) {
			for(int j=vis[a[i]].first;j<=i;j++) {
				vis[a[j]]={0,0} ;
			}
		}
		vis[a[i]]={i,1} ;
	}
	for(int i=1;i<=m;i++) if(vis[i].second==1) {
		cnt[i]++ ;
	}
	for(int i=1;i<=m;i++) vis[i]={0,0} ;
}

signed main() {
	freopen("card.in","r",stdin) ;
	freopen("card.out","w",stdout) ;
	ios::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0) ;
	
	cin>>n>>m ; 
	for(int i=1;i<=n;i++) {
		cin>>a[i] ; 
	}
	for(int i=1;i<=n;i++) solve(i) ;
	for(int i=1;i<=m;i++) cout<<cnt[i]<<" " ;
	
	return 0 ;
}
/*
4 3 
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1


*/