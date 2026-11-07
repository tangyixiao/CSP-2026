#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001],ans[500001];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		int vis[500001]={};
		for(int j=i;j<=n;j++){
			if(vis[a[j]]==0){
				vis[a[j]]=j;
			}else{
				for(int i=vis[a[j]];i<j;i++)vis[a[i]]=0;
				vis[a[j]]=j;
			}
		}//for(int i=1;i<=m;i++)cout<<vis[i]<<" ";
		//cout<<endl;
		for(int i=1;i<=m;i++)if(vis[i])ans[i]++; 
	}for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}

//10 3
//3 1 2 1 3 2 3 1 2 1
