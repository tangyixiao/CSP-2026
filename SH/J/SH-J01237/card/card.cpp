#include<bits/stdc++.h>
using namespace std;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	if(n<=500&&m<=200){
		int vis[m+1000]={};
		int ans[n+1000]={};
		int a[n+1000]={};
		for(int i=1;i<=n;i++)cin>>a[i];
		for(int i=1;i<=n;i++){
			vector<int>v;
			for(int j=i;j<=n;j++){
				vis[a[j]]++;
				v.push_back(a[j]);
				if(vis[a[j]]==2){
					v.pop_back();
					while(v.back()!=a[j]){
						int x=v.back();
						vis[x]--;
						v.pop_back();
					}
					vis[a[j]]=1;
				}
			}
			for(int i=0;i<v.size();i++){
				ans[v[i]]++;
			}
		}
		for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	}
	else{
		int a[n+1000]={};
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int ans[m+1000]={};
		for(int i=1;i<=n;i++){
			int vis[m+1000]={}; 
			for(int j=i;j<=n;j++){
				if(!vis[a[j]]){
					vis[a[j]]=1;
					ans[a[j]]++;
				}
			}
		}
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<" ";
		}
	}
}
