#include<bits/stdc++.h>
using namespace std;
int a[1000086];
int vis[1000086];
int ans[1000086]{0};
int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int l=1;l<=m;l++)vis[l]=0;
		for(int j=i;j<=n;j++){
			if(!vis[a[j]])vis[a[j]]=j;
			else {
				for(int k=vis[a[j]];k<j;k++)vis[a[k]]=0;
				vis[a[j]]=j;
			}
		}
		for(int l=1;l<=m;l++)if(vis[l])ans[l]++;
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
	
}
