#include <bits/stdc++.h>
using namespace std;
int ans[5000]={};
int a[5000]={};
int vis[5000]={};

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	queue<int> q;
	queue<int> l;
	int x;
	for(int i=1;i<=n;i++){
		cin>>x;
		a[i]=x;
	}
	for(int i=1;i<=n;i++){
		memset(vis,n,0);
		for(int j=i;j<=n;j++){
			
			if(!vis[a[j]]){
				q.push(a[j]);
				vis[a[j]]=1;
			}
			else{
				while(q.front()!=a[j]){
					int u=q.front();
					l.push(u);
					vis[u]=0;
					q.pop();
				}
				l.push(a[j]);
				while(!q.empty()){
					vis[q.front()]=0;
					q.pop();
					
				}
				while(!l.empty()){
					q.push(l.front());
					vis[l.front()]=1;
					l.pop();
				}
				
			}
			
		}
		while(!q.empty()){
			int v=q.front();
			ans[v]++;
			vis[v]=0;
			q.pop();
		}
		
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
