#include<bits/stdc++.h>
using namespace std;
int n,m,a[500500],ans[300500];
int vis[300500];
bool zt[300500];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	
	for(int j=1;j<=n;j++){
		memset(vis,0,sizeof vis);
		memset(zt,0,sizeof zt);
		for(int i=j;i<=n;i++){
			if((!vis[a[i]])||zt[vis[a[i]]])vis[a[i]]=i;
			else {
				for(int k=vis[a[i]];k<i;k++)zt[k] = 1;
				vis[a[i]] = i;
			}
		}
		for(int i=j;i<=n;i++)if(!zt[i])ans[a[i]]++;
	}
	for(int i=1;i<=m;i++)cout << ans[i] << ' ';
    return 0;
}
