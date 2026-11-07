#include<bits/stdc++.h>
using namespace std;
const int N=512345;
int n,m,a[N],c[N],ans[N]
,pos[N],pre[N]
,vis[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		pre[i]=pos[a[i]];
		if(pos[a[i]]==0)pre[i]=i;
		pos[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof vis);
		for(int j=i;j<=n;j++){
			vis[j]=1;
			if(vis[pre[j]])
				for(int k=pre[j];k<j;k++){
					vis[k]=0;
				}
		}
		for(int j=i;j<=n;j++){
			c[a[j]]|=vis[j];
		}
		for(int j=1;j<=m;j++){
			ans[j]+=c[j];
			c[j]=0;
		}
	}
	for(int i=1;i<=m;i++)
	cout<<ans[i]<<' ';
	return 0;
}

