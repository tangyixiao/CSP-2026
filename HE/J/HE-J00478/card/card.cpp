#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[200010],vis[200010],ans[200010],b[200010],e;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >>n>>m;
	for(int i=1;i<=n;i++)cin >>a[i];
	for(int i=1;i<=n;i++){
		e=0;
		memset(b,0,sizeof(b));
		memset(vis,0,sizeof(vis));
		for(int j=i;j<=n;j++){
			if(!vis[a[j]])vis[a[j]]++,b[++e]=a[j];
			else {
				int x;
				for(int k=1;k<=e;k++){
					if(b[k]==a[j]){
						x=k;
						break;
					}
				}
				for(int k=x;k<=e;k++)vis[b[k]]=0;
				e=x-1;
				b[++e]=a[j];
				vis[a[j]]++;
			}
		}
		for(int i=1;i<=m;i++){
			if(vis[i])ans[i]++;
		}
	}
	for(int i=1;i<=m;i++)cout <<ans[i]<<" ";
	return 0;
}
