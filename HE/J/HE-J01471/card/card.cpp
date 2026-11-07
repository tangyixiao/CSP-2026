#include <bits/stdc++.h>
using namespace std;
const int M=5e5+10;
int n,m;
int mp[M];
int z[M];
int head=0;
int vis[M];
int ans[M];
int main(){
	freopen("card.in", "r" ,stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>mp[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(vis[mp[j]]==1){
				while(z[head]!=mp[j]){
					vis[z[head]]=0;
					head--;
				}
				
			}
			else{
				vis[mp[j]]=1;
				z[++head]=mp[j];
			}
		}
		for(int j=1;j<=m;j++){
			ans[j]+=vis[j];
			//cout<<vis[j]<<' ';
			vis[j]=0;
			
			
		}
		head=0;
		//cout<<'\n'; 
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
} 
