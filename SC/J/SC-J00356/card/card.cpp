#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m;
int a[N],vis[N],pr[N];
int ans[N],to[N],sz[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=n;i;i--){
		if(pr[a[i]])
			to[i]=pr[a[i]];
		else to[i]=i+1;
		pr[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		sz[i]++;
		sz[to[i]]+=sz[i];
	}
	for(int i=n;i;i--)
		if(!vis[a[i]]){
			vis[a[i]]=1;
			ans[a[i]]=sz[i];
		}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	cout<<'\n';
	return 0;
}