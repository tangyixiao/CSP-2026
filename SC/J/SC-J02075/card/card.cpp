#include<bits/stdc++.h>
using namespace std;
const int N=2e5+1;
int n,m;
int a[N],vis[N],ans[N];
stack<int> cd;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof(vis));
		for(int j=i;j<=n;j++){
			if(!vis[a[j]]){
				cd.push(a[j]);
				vis[a[j]]=1;
				continue;
			}
			while(cd.top()!=a[j]){
				int u=cd.top();
				vis[u]=0;
				cd.pop();
			}
		}
		while(!cd.empty()){
			int u=cd.top();
			ans[u]++;
			cd.pop();
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}
