#include<bits/stdc++.h>
using namespace std;
bool vis[300010];
int a[500010],n,m,ans[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(vis[a[j]]==0)vis[a[j]]=1;
			else {
				for(int k=j-1;;k--){
					if(a[k]==a[j])break;
					vis[a[k]]=0;
				}
			}
		}
		for(int i=1;i<=m;i++){
			if(vis[i]==1){
				vis[i]=0;
				ans[i]+=1;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
} 
