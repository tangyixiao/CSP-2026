#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,mx[M],ans[M],vis[M],a[N],b[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool f=1;
	for(int i=1;i<=n;i++) cin>>a[i],mx[a[i]]=i,f&=(a[i]>=a[i-1]);
	if(f) for(int i=1;i<=m;i++) cout<<mx[i]<<' ';
	else{
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++) vis[j]=0;
			int len=0;
			for(int j=i;j<=n;j++){
				if(vis[a[j]]){
					for(int k=vis[a[j]]+1;k<=len;k++) vis[b[k]]=0;
					len=vis[a[j]];
				}
				else vis[a[j]]=++len,b[len]=a[j];
			}
			for(int j=1;j<=m;j++) ans[j]+=(vis[j]>0);
		}
		for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	}
	return 0;
}