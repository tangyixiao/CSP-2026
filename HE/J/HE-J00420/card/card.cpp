#include<bits/stdc++.h>
using namespace std;
int n,m,b,q[5005],e[5005],vis[5005],vis1[5005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>q[i];
	}for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(vis[q[j]]==0){
				vis[q[j]]=1;
				e[q[j]]=j;
			}else{
				for(int k=j-1;k>=e[q[j]];k--){
					if(vis[q[k]]!=0){
						vis[q[k]]--;
					}
				}
				vis[q[j]]++;
				e[q[j]]=j;
			}
		}
		for(int l=1;l<=m;l++){
			if(vis[l]!=0){
				vis1[l]++;
			}
		}
		memset(vis,0,sizeof(vis));
	}for(int i=1;i<=m;i++){
		cout<<vis1[i]<<" ";
	}
	
	
	return 0;
}
