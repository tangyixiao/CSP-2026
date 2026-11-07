#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],vis[300005],ans,r=1;
int mp[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(vis[a[i]]){
			mp[vis[a[i]]]=i-1;
		}
		vis[a[i]]=i;
	}
	memset(vis,0,sizeof vis);
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;){
			if(!mp[j]) vis[a[j]]++,j++;
			else j=mp[j]+1;
		}
	}
	for(int i=1;i<=m;i++) cout<<vis[i]<<" ";
	return 0;
} 
