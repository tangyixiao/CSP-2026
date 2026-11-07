#include<bits/stdc++.h>
#define int long long
using namespace std;
struct Node{
	int w;
	bool f;
}vis[300010];
int a[500010];
int d[500010];
int cnt[500010];
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)vis[j].f=false;
		for(int j=i;j<=n;j++)d[j]=1;
		for(int j=i;j<=n;j++){
			if(vis[j].f==false)vis[j].f=true,vis[j].w=j;
			else{
				d[vis[j].w]-=1,d[j+1]+=1;
			}
		}
		for(int j=i+1;j<=n;j++)d[j]+=d[j-1];
		for(int j=i;j<=n;j++){
			if(d[j]==1)cnt[a[j]]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<' ';
	return 0;
}
