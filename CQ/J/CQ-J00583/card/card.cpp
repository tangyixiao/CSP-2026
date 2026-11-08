#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,m;
int a[500005];
int nt[500005];
int tp[500005];
int vis[500005];
int ans[500005];

signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		vis[i]=1;
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		nt[i]=tp[a[i]];
		tp[a[i]]=i;
	}
	
	for(int i=1;i<=n;i++){
		if(nt[i]==0){
			vis[i+1]+=vis[i];
			ans[a[i]]+=vis[i];
		}else{
			vis[nt[i]]+=vis[i];
		}
	}
	
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1
*/
