#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],d[500010],ans[300010],x[300010];
bool vis[300010],v[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int cnt=0;
		memset(d,0,sizeof 0);
		memset(vis,0,sizeof 0);
		memset(x,0,sizeof 0);
		memset(v,0,sizeof 0);
		for(int j=i;j<=n;j++){
			if(vis[a[j]]){
				cnt=x[a[j]]-1;
				d[++cnt]=a[j];
				x[a[j]]=cnt;
				for(int k=1;k<=cnt;k++){
					v[d[k]]=1;
				}
				for(int k=1;k<=m;k++){
					if(v[d[k]]==0&&vis[d[k]])vis[d[k]]=0;
				}
				memset(v,0,sizeof 0);
			}
			else {
				d[++cnt]=a[j];
				vis[a[j]]=1;
				x[a[j]]=cnt;
			}		
		}
		for(int j=1;j<=cnt;j++){
			ans[d[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
