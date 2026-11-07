#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[500010],b[300010],c[300010],vis[300010],n,m;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		for(int j=i;j<=n;j++){
			for(int u=1;u<=m;u++){
				vis[u]=0;
			}
			stract<int>s;
			int x=a[j];
			if(vis[a[j]]){
				while(s.top()!=a[j]){
					int u=s.top();
					vis[u]=0;
					s.pop();
				}
				s.pop();
			}else{
				s.push(x);
				vis[x]=1;
			}
		}
		for(int u=1;u<=m;u++){
			if(vis[u]){
				b[u]++;
			}
		}		
	}	
	for(int u=1;u<=m;u++){
		cout<<b[u]<<" ";
	}	
}
