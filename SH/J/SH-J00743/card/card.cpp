#include<bits/stdc++.h>
using namespace std;
const int N=50005;
int vis[N],s[N],c[N],a[N];
int ans[N];
int n,tot,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int u=1;u<=n;u++){
		for(int i=1;i<=m;i++)vis[i]=0;
		for(int i=u;i<=n;i++){
			if(vis[a[i]]){
				for(int j=c[a[i]]+1;j<=tot;j++){
					vis[s[j]]=0;
					s[j]=0;
				}
				tot=c[a[i]];
				continue;
			}
			vis[a[i]]=1;
			tot++;
			s[tot]=a[i];
			c[a[i]]=tot;
		}
		for(int i=1;i<=m;i++){
			if(vis[i]){
				ans[i]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout << ans[i] << " ";
	}
	return 0;
}
//n*m||n*n
