#include<bits/stdc++.h>
using namespace std;
int n,m,cnth;
int a[500005];
int g[500005];
int h[500005];
int ans[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int t=n;
	while(t--){
		for(int i=1;i<=n;i++){
		int cnt=1;
		g[i]=a[i];
		for(int j=1;j<=cnt;j++){
			if(g[i]==a[j]){
				int lin = g[i];
				for(int z=1;z<=j;z++){
					g[z]=h[++cnth];
					g[z]=0;
				}
				g[j]=lin;
			}
		}
		for(int i=1;i<=n;i++){
			ans[i]+=g[i];
		}
		
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
}
	
	
	return 0;
}
