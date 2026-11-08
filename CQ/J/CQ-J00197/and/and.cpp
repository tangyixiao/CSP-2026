#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2*1e5+5;
int a[N];
int vis[N];
int n,m;
int cnt;
void dfs(int dep,int sum){
	if(dep==m+1){
		cnt=max(cnt,sum);
		return;
	}
	for(int i=1;i<=n;i++){
		if(!vis[i])
			vis[i]=1,dfs(dep+1,sum&a[i]),vis[i]=0;
	}
}
signed main(){
//	freopen("and.in","r",stdin);
//	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		vis[i]=1,dfs(1,a[i]),vis[i]=0;
	cout<<cnt;
	return 0;
} 
