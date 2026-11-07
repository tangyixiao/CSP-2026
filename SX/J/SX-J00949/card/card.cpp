#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500010],v[500010],ans[500010],vis[500010],z;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int k=1;k<=n;k++){
		memset(v,0,sizeof(v));
		memset(vis,0,sizeof(vis));
		for(int i=k;i<=n;i++){
			v[a[i]]++;
			if(v[a[i]]>1){
				for(int j=i-1;j>=k;j--){
					if(a[j+1]==a[i]&&j+1==z)break;
					if(vis[j]==0){
						v[a[j]]--;
						vis[j]=1;
						z=j;
					}
				}
			}
		}
		for(int j=1;j<=m;j++)ans[j]+=v[j];
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}