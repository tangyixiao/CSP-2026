#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+500,M=5500;
int n,m,a[N],ans=-1e9;
void dfs(int x,int pos,int k){
	if(pos==m){
		ans=max(ans,k);
		return;
	}
	for(int i=x+1;i<=n;i++){
		dfs(i,pos+1,k&a[i]);
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
//	ios::sync_with_stdio(0);
//	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		dfs(i,1,a[i]);
	}
	cout<<ans;
	return 0;
}
/*
4 2
3 15 12 12

5 3
31 3 1 15 7
*/
