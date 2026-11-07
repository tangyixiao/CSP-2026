#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N =5*1e5+5;
int a[N],vis[N],z[N];
stack<int> q; 
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i =1;i<=n;i++)cin>>a[i];
	for(int i =1;i<=n;i++){
		for(int j =i;j<=n;j++){
			if(!vis[a[j]]){
				q.push(a[j]);
				vis[a[j]]=1;
			}else {
				bool tp=0;
				for(int k=j;k>=i;k--){
					int hg=q.top();
					if(hg!=a[j]){ 
						vis[q.top()]=0;
						q.pop();
					}else{
						break;
					}
				}
				q.push(a[j]);
			}
		}
		for(int j =1;j<=m;j++){
			if(vis[j]){
				z[j]++; 
			}
		}
		memset(vis,0,sizeof vis);
		while(!q.empty())q.pop();
	}
	for(int i =1;i<=m;i++){
		cout<<z[i]<<' ';
	}
}
