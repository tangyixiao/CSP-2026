#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500005],ans[500005];
int vis[500005];
stack<int>q;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			vis[j]=0;
		}
		for(int j=i;j<=n;j++){
			if(vis[a[j]]){
				while(!q.empty()){
					int x=q.top();
					q.pop();
					vis[x]--;
					if(x==a[j]){
						break;
					}
				}
				q.push(a[j]);
			}else{
				q.push(a[j]);
			}
			vis[a[j]]++;
		}
		while(!q.empty()){
			int x=q.top();
			q.pop();
			ans[x]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
} 
