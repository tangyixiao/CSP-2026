#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010];
int ans[500010];
int d[500010],top=0;//桌面状态   
int vis[500010];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		top=0;
		memset(vis,0,sizeof vis);
		for(int j=i;j<=n;j++){
			if(vis[a[j]]<=top&&vis[a[j]]){
				top=vis[a[j]];
			}else{
				d[++top]=a[j];
				vis[a[j]]=top;
			}
		}
		for(int j=1;j<=top;j++){
			ans[d[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i];
		if(i!=m) cout<<' ';
	}
	return 0;
}