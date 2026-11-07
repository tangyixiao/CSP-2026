#include <bits/stdc++.h>
using namespace std;
const long long N=5e5+10;
long long n,m;
long long a[N],vis[N],cnt[N],ans[N];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i=i+1){
		cin>>a[i];
	}
	for(int i=1;i<=n;i=i+1){
		for(int j=1;j<=m;j=j+1) vis[j]=0;
		long long now=1;
		for(int j=i;j<=n;j=j+1){
			long long x=a[j];
			if(vis[x]==0){
				vis[x]=now;
				cnt[now]=x;
				now+=1;
				continue;
			}
			if(vis[x]!=0){
				long long st=vis[x]+1;
				for(int k=st;k<now;k=k+1) vis[cnt[k]]=0;
				now=st;
			}
		}
		for(int i=1;i<=n;i=i+1){
			if(vis[i]!=0) ans[i]+=1; 
		}
	}
	for(int i=1;i<=m;i=i+1) cout<<ans[i]<<" ";
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1

*/

