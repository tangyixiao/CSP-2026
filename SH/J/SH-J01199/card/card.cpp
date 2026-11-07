#include<bits/stdc++.h>
using namespace std;
int n,m,a[500050],ans[300050],vis[300050],l[300050];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof(vis));
		for(int j=i;j<=n;j++){
			if(vis[a[j]]==1){
				for(int k=l[a[j]]+1;k<j;k++){
					vis[a[k]]=0;
				}
				l[a[j]]=j;
			}
			else vis[a[j]]=1,l[a[j]]=j;
		} 
		for(int j=1;j<=m;j++){
			if(vis[j]==1)ans[j]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
