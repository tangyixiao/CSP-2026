#include <bits/stdc++.h>
using namespace std;
int a[500010];
int ans[300010];bool vis[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	stack<int> q;
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof(vis));
		for(int j=i;j<=n;j++){
			if(vis[a[j]]==0){
				q.push(a[j]);
				vis[a[j]]=1;
			}
			else{
				while(!q.empty()){
					if(q.top()==a[j]){
						break;
					}
					vis[q.top()]=0;
					q.pop();
				}
				vis[a[j]]=1;
			}
		}
		while(!q.empty()){
			ans[q.top()]++;
			q.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout << ans[i] << " ";
	}
	return 0;
}