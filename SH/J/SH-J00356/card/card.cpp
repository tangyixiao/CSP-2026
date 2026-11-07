#include <bits/stdc++.h>
using namespace std;
int n,m,a[500010],ls[500010],vis[500010],ans[500010];
vector<int> g[500010];
int main(){
	freopen("card.in","r",stdin); 
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(vis[a[i]]){
			g[ls[a[i]]].push_back(i);
		}
		vis[a[i]]=1;
		ls[a[i]]=i;
		if(i!=1) g[i-1].push_back(i);
	}
	for(int i=1;i<=n;i++){
		queue<int> q;
		q.push(i);
		while(!q.empty()){
			int r=q.front();
			ans[a[r]]++; 
			q.pop(); 
			if(r==n) break;
			for(int v:g[r]){
				q.push(v);
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
