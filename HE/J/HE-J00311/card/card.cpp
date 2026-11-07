#include<bits/stdc++.h>
using namespace std;
int n,m,tot[300005],a[500005];
bool vis[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		memset(vis,false,sizeof vis);
		for(int j=i;j<=n;j++){
			if(!vis[a[j]]){
				tot[a[j]]++;
				vis[a[j]]=true;
			}
		}
	}
	for(int i=1;i<=m;i++) cout<<tot[i]<<' ';
	return 0;
} 
